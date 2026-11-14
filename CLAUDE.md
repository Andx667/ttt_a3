# TTT-Mod (ttt_a3)

Arma 3 mod built on the CBA/ACE component framework, packaged with HEMTT.

## Coding guidelines

All SQF and config code must follow the ACE3 coding guidelines:
<https://ace3.acemod.org/wiki/development/coding-guidelines>

Key points to apply consistently in this repo:

- **Components**: every addon lives under `addons/<component>/` with a `script_component.hpp`, `XEH_preInit.sqf`/`XEH_postInit.sqf` as needed, and functions under `functions/fnc_*.sqf`.
- **Macros**: use `QUOTE`, `QGVAR`, `GVAR`, `FUNC`, `EFUNC` etc. from `script_macros.hpp` instead of hardcoding `ttt_<component>_*` strings.
- **Function headers**: every function file starts with `#include "..\script_component.hpp"` and a header block (`Author:`, description, `Arguments:`, `Return Value:`, `Public:`), matching the existing style in `addons/*/functions/fnc_*.sqf`.
- **params**: always declare typed `params` at the top of a function; don't rely on implicit `_this` indexing.
- **private**: explicitly declare locals with `private _x = ...`; don't rely on undeclared-local auto-privatization.
- **Indentation**: 4 spaces, no tabs.
- **Naming**: `camelCase` for functions/variables, `snake_case`/`ttt_` prefix for classnames per existing convention; brackets/operators spaced as in ACE style (`if (...) then {`, `foreach`, etc.).
- **No magic numbers/strings**: pull config paths and repeated literals into named locals or macros where the codebase already does so.
- Match existing patterns in the file/component you're editing over introducing a new style.

## Performance considerations

Follow ACE3's performance guidance:
<https://ace3.acemod.org/wiki/development/coding-guidelines#8-performance-considerations>

In short: avoid unscheduled/scheduled loops that poll every frame or on a tight `sleep`, avoid unnecessary `spawn`, and avoid PFH/`onEachFrame` handlers that run more often than needed. Each of these has a real CPU cost multiplied across every client/server tick.

Prefer CBA alternatives over hand-rolled polling:

- **`CBA_fnc_waitUntilAndExecute`** instead of `waitUntil { sleep 0.1; ... }` loops — CBA batches these checks efficiently rather than each spawning its own scheduled thread.
- **`CBA_fnc_addPerFrameHandler`** (with an explicit interval) instead of raw `onEachFrame`/tight `spawn` loops, when a per-frame check is genuinely required.
- **Events (`CBA_fnc_addEventHandler` / `CBA_fnc_localEvent` / `CBA_fnc_globalEvent`)** instead of polling for a state change — fire an event when the state actually changes rather than checking it repeatedly. This is almost always preferable to a wait loop when you control the code that produces the state change.

When reviewing or writing code, prefer converting existing polling loops to events/CBA helpers where a clean trigger point exists, rather than adding new polling.

## Documentation

Three separate layers, each for a different audience — don't blend them, and when a behavior change touches one, check whether the others have gone stale too.

- **`addons/<component>/readme.md`** — developer-facing. Explains how the code works and *why* non-obvious decisions were made (algorithms, config class names, cross-addon interactions, dependencies), for whoever maintains or extends the addon next. Free to be as technical as needed. Section headers follow existing convention across the repo: `## Abhängigkeiten` for dependencies, `## Maintainer` left in English even in an otherwise-German readme — check a few sibling `readme.md` files before introducing a new heading style.
- **Function headers and inline comments** — code-level, for whoever is reading that specific file. Every `fnc_*.sqf` gets the ACE-style header block (`Author:`, description, `Arguments:`, `Return Value:`, `Public:`) per the coding guidelines above. Inline comments explain the *why*, not the *what* (see the root-level "Default to writing no comments" guidance) — a comment earns its place only when it captures a non-obvious constraint, invariant, or workaround, e.g. this codebase's recurring `exitWith`-scoping gotcha (nested inside `if/then` it only exits that block, not the function/loop) gets called out inline wherever it applies, not just documented once centrally.
- **`docs/ttt-a3/<kategorie>/<seite>.md`** (plus the landing page `docs/ttt-a3.md`) — user/mission-maker-facing pages of the TTT Wiki.js wiki (<https://wiki.tacticalteam.de/ttt-a3>). Explains what the addon does and how to use it (settings, crate/item types, init-line variables, script API) without leaking implementation detail — no config class internals, no naming a specific underlying framework (CBA, ACE, …) unless the mission maker has to type its name themselves. Written in accessible, non-technical German: this is the audience with the least SQF/config background. Details in "User docs (wiki)" below.

A behavior change without a matching update to the readme and/or user docs (whichever are affected) counts as an incomplete change, not just a code change.

### User docs (wiki)

The user docs used to be an MkDocs site on GitHub Pages; that is gone (no `mkdocs.yml`, no `deploy_docs.yml`, no `docs/addons/`). Don't reintroduce MkDocs syntax (admonitions `!!!`, `{ .md-button }`, relative `.md` links) or link to the old `*.github.io` site.

**How the sync works** (`.github/workflows/sync-wiki.yml`):

- Runs on every push to `master` that touches `docs/ttt-a3.md` or `docs/ttt-a3/**` (or manually via `workflow_dispatch`). Branches and PRs never reach the wiki — a page is live only after merge.
- Checks out the wiki's git storage repo `TacticalTrainingTeam/wiki.tacticalteam.de` and mirrors `docs/ttt-a3/` into `…/de/ttt-a3/` with `rsync --delete`, plus `docs/ttt-a3.md` as the landing page. Wiki.js then imports from that repo.
- **One-way and authoritative**: this repo is the source of truth. Edits made in the wiki UI under `/ttt-a3` are overwritten by the next sync — make every change here. Deleting or renaming a file deletes/moves the wiki page, which breaks links from elsewhere in the wiki (`/de/handbuch/...`, `/de/missionsbau/...`); check for incoming links before renaming.
- Only `docs/ttt-a3.md` and `docs/ttt-a3/` are synced. Anything else under `docs/` is not published.

**Structure**: file path = wiki URL. `docs/ttt-a3/<kategorie>/<seite>.md` → `/de/ttt-a3/<kategorie>/<seite>`. Slugs are lowercase with hyphens (`drone-crafting.md`, `compat-3cb-vehicles.md`). Categories, each with a landing page `docs/ttt-a3/<kategorie>.md`:

- `allgemein/` — works without setup, players notice or use it in game
- `funktional/` — placed, enabled or scripted by mission makers/Zeus/admins (`funktional/common/` for shared functions/objects)
- `assets/` — TTT-style equipment and vehicles
- `kompatibilität/` — `compat-*` addons (keep the umlaut in the folder name)
- `grundlagen/` — addons other TTT addons build on, not used on their own

Category landing pages and `docs/ttt-a3.md` list their children automatically via `::block-index{path="/ttt-a3/<kategorie>" …}` — a new page in a category folder shows up without editing an index.

**Page format** — copy an existing sibling page as the template:

- Wiki.js frontmatter: `title`, `description` (one short German sentence, shown in indexes), `published: true`, `tags` (addon pages carry `arma3`, `referenz`, `ttt-mod` plus topical ones like `missionsbauer`, `fahrzeuge`, `sanitaet`), `editor: markdown`, `dateCreated` (ISO timestamp, set once on creation). Do **not** add a `date` field — it was removed deliberately so every sync doesn't churn it.
- Addon pages start with the `compat-box` HTML block (Arma 3 green / Reforger red badges) and a `::block-infobox{name="…"}` with a YAML `Ansprechpartner:` line, then the body with `#` headings (e.g. `# Benutzung`).
- Wiki.js block syntax in use: `::block-index`, `::block-infobox`, `::block-steps` (numbered step list), `:block-kbd[Shift+,]{platform="pc"}` for key combos. Each block closes with `::` on its own line.
- Links are absolute wiki paths including the locale: `/de/ttt-a3/allgemein/teleport`, `/de/handbuch/mods/acre2` — not relative paths and not `.md` filenames. (`block-index` `path` attributes are the exception: no `/de`.)
- Images are external URLs (currently imgur); the repo holds no doc images.
- Typography: German typographic dashes (`–`), not hyphen-minus, in running text.

When docs changed, add the `documentation` label to the PR. After merge, verify the page on the wiki if the change was structural (new/renamed page, new block syntax).

## HEMTT

This project is built and linted with [HEMTT](https://hemtt.dev/). Configuration lives in `.hemtt/project.toml` (SQF lint: `command_case`; config lint: `math_could_be_unquoted` pedantic).

**Before considering any SQF/config change complete, run `hemtt check` from the repo root and it must pass cleanly (no errors/warnings introduced).** Fix lint/parse issues it reports rather than suppressing them.

```
hemtt check
```

## Pull requests

Follow `.github/PULL_REQUEST_TEMPLATE.md`:

- **Title**: `Component - Add|Fix|Change|Remove {changes}`, e.g. `Resupply - Add database rebuild function and ZEN context menu entry`.
- **Description**: start with the template's `## When merged this pull request will:` heading, followed by one bullet per change (each change on its own line). Keep the template's `## Important` checklist (docs included, development guidelines applied, title format used) and the `## Known Issues` section; tick the boxes that apply.
- **Labels and assignee**: add the matching `changelog/*` label (plus `documentation` if docs changed) and assign the user.
