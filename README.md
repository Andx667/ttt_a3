# Mod des TacticalTrainingTeam

https://www.tacticalteam.de 

### Als PBO packen 
https://armaservices.maverick-applications.com/Products/MikerosDosTools/FileBrowserFree
MakePbo installieren (ben�tigt DePbo und DeOgg)
Hintergrund: Gibt mehr Fehler beim Packen aus, die sonst erst beim ArmA-Start auftreten (im Vergleich zum AddOn Builder).

pack-all.bat ausf�hren
Hierbei muss das Repository an dem angegeben Pfad liegen (per SymLink m�glich).
Hintergrund: F�r Codestellen wie ```#include "\ttt_a3\ttt_berets\CfgWeapons.hpp"``` sucht das Programm unter dem Pfad von dem ausf�hrenden Tool (hier C:\) und muss die Datei finden.