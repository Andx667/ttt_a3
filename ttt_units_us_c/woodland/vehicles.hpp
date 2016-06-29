/*
#############################################################
### Trupp Gelb
#############################################################
*/
#define GROUP_COLOR Yellow

//Gelb 1 (OPL)
class TTT_Gelb1_Us_Woodland : TTT_Gelb1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Us_Woodland";
    backpack = "TTT_Backpack_Opl_Us_Woodland";
    uniformClass = "TTT_Uniform_Gelb_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_yellow_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Gelb 2 (Funker)
class TTT_Gelb2_Us_Woodland : TTT_Gelb2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Us_Woodland";
    backpack = "TTT_Backpack_Funkerfac_Us_Woodland";
    uniformClass = "TTT_Uniform_Gelb_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_yellow_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Gelb 3 (UAV)
class TTT_Gelb3_Us_Woodland : TTT_Gelb3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Us_Woodland";
    backpack = "TTT_Backpack_Funkerfac_Us_Woodland";
    uniformClass = "TTT_Uniform_Gelb_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_yellow_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland), "B_UavTerminal"};
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland),"B_UavTerminal" };
};

//Gelb 4 (Moerser)
class TTT_Gelb4_Us_Woodland : TTT_Gelb4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gelb_Us_Woodland";
    backpack = "TTT_Backpack_Funkerfac_Us_Woodland";
    uniformClass = "TTT_Uniform_Gelb_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_yellow_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

/*
#############################################################
### Trupp Grau
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Grey

//Grau 1 (Truppfuehrer)
class TTT_Grau1_Us_Woodland : TTT_Grau1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Us_Woodland";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    uniformClass = "TTT_Uniform_Grau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_grey_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Grau 2 (Funker/FAC)
class TTT_Grau2_Us_Woodland : TTT_Grau2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Us_Woodland";
    backpack = "TTT_Backpack_Funkerfac_Us_Woodland";
    uniformClass = "TTT_Uniform_Grau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_grey_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Grau 3 (Gefechtssanitaeter)
class TTT_Grau3_Us_Woodland : TTT_Grau3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Us_Woodland";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Us_Woodland";
    uniformClass = "TTT_Uniform_Grau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_grey_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

//Grau 4 (Pionier)
class TTT_Grau4_Us_Woodland : TTT_Grau4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Us_Woodland";
    backpack = "TTT_Backpack_Pionier_Us_Woodland";
    uniformClass = "TTT_Uniform_Grau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_grey_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

//Grau 5 (Schuetze)
class TTT_Grau5_Us_Woodland : TTT_Grau5_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Us_Woodland";
    backpack = "TTT_Backpack_Schuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Grau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_grey_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
};

//Grau 6 (Schuetze)
class TTT_Grau6_Us_Woodland : TTT_Grau6_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Grau_Us_Woodland";
    uniformClass = "TTT_Uniform_Grau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_grey_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
};

/*
#############################################################
### Trupp Gold (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Gold

//Gold 1 (Truppfuehrer)
class TTT_Gold1_Us_Woodland : TTT_Gold1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Us_Woodland";
    uniformClass = "TTT_Uniform_Gold_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_gold_us_woodland.paa" };
	backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Gold 2 (JTAC)
class TTT_Gold2_Us_Woodland : TTT_Gold2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Us_Woodland";
    uniformClass = "TTT_Uniform_Gold_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_gold_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Gold 3 (Spotter)
class TTT_Gold3_Us_Woodland : TTT_Gold3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Us_Woodland";
    uniformClass = "TTT_Uniform_Gold_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_gold_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

//Gold 4 (Sniper)
class TTT_Gold4_Us_Woodland : TTT_Gold4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gold_Us_Woodland";
    uniformClass = "TTT_Uniform_Gold_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_gold_us_woodland.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Woodland";
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

//Gold 5 (Schuetze)
class TTT_Gold5_Us_Woodland : TTT_Gold5_Us_Desert {
    author = "Tactical Training Team";
	vehicleClass = "TTT_Gold_Us_Woodland";
    uniformClass = "TTT_Uniform_Gold_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_gold_us_woodland.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Woodland";
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland)};
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
};

//Gold 6 (Schuetze)
class TTT_Gold6_Us_Woodland : TTT_Gold6_Us_Desert {
    author = "Tactical Training Team";
	vehicleClass = "TTT_Gold_Us_Woodland";
    uniformClass = "TTT_Uniform_Gold_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_gold_us_woodland.paa" };
	backpack = "TTT_Backpack_Schuetze_Us_Desert";
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
};

/*
#############################################################
### Trupp Gruen (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Green

//Gruen 1 (Zugfuehrer)
class TTT_Gruen1_Us_Woodland : TTT_Gruen1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Us_Woodland";
    uniformClass = "TTT_Uniform_Gruen_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_green_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Gruen 2 (Funker/FAC)
class TTT_Gruen2_Us_Woodland : TTT_Gruen2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Us_Woodland";
    backpack = "TTT_Backpack_Funkerfac_Us_Woodland";
    uniformClass = "TTT_Uniform_Gruen_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_green_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Gruen 3 (Gefechtssanitaeter)
class TTT_Gruen3_Us_Woodland : TTT_Gruen3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Us_Woodland";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Us_Woodland";
    uniformClass = "TTT_Uniform_Gruen_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_green_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

//Gruen 4 (Gefechtssanitaeter)
class TTT_Gruen4_Us_Woodland : TTT_Gruen4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Gruen_Us_Woodland";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Us_Woodland";
    uniformClass = "TTT_Uniform_Gruen_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_green_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

/*
#############################################################
### Trupp Braun (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Brown

//Braun 1 (Zugfuehrer)
class TTT_Braun1_Us_Woodland : TTT_Braun1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Braun_Us_Woodland";
    uniformClass = "TTT_Uniform_Braun_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_brown_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Braun 2 (Funker/FAC)
class TTT_Braun2_Us_Woodland : TTT_Braun2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Braun_Us_Woodland";
    backpack = "TTT_Backpack_Funkerfac_Us_Woodland";
    uniformClass = "TTT_Uniform_Braun_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_brown_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Braun 3 (Gefechtssanitaeter)
class TTT_Braun3_Us_Woodland : TTT_Braun3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Braun_Us_Woodland";
    backpack = "TTT_Backpack_Gefechtssanitaeter_Us_Woodland";
    uniformClass = "TTT_Uniform_Braun_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_brown_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

/*
#############################################################
### Trupp Schwarz (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Black

//Schwarz 1 (Truppfuehrer)
class TTT_Schwarz1_Us_Woodland : TTT_Schwarz1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Us_Woodland";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    uniformClass = "TTT_Uniform_Schwarz_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_black_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Schwarz 2 (Grenadier)
class TTT_Schwarz2_Us_Woodland : TTT_Schwarz2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Us_Woodland";
    backpack = "TTT_Backpack_Grenadier_Us_Woodland";
    uniformClass = "TTT_Uniform_Schwarz_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_black_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Schwarz 3 (LMG-Schuetze)
class TTT_Schwarz3_Us_Woodland : TTT_Schwarz3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Us_Woodland";
    backpack = "TTT_Backpack_Lmgschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Schwarz_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_black_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

//Schwarz 4 (AT-Schuetze)
class TTT_Schwarz4_Us_Woodland : TTT_Schwarz4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Us_Woodland";
    backpack = "TTT_Backpack_Lmgschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Schwarz_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_black_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

//Schwarz 5 (LMG-Schuetze)
class TTT_Schwarz5_Us_Woodland : TTT_Schwarz5_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Us_Woodland";
    backpack = "TTT_Backpack_Atschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Schwarz_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_black_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
};

//Schwarz 6 (AT-Schuetze)
class TTT_Schwarz6_Us_Woodland : TTT_Schwarz6_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Schwarz_Us_Woodland";
    backpack = "TTT_Backpack_Atschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Schwarz_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_black_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
};

/*
#############################################################
### Trupp Rot (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Red

//Rot 1 (Truppfuehrer)
class TTT_Rot1_Us_Woodland : TTT_Rot1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Us_Woodland";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    uniformClass = "TTT_Uniform_Rot_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_red_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Rot 2 (Grenadier)
class TTT_Rot2_Us_Woodland : TTT_Rot2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Us_Woodland";
    backpack = "TTT_Backpack_Grenadier_Us_Woodland";
    uniformClass = "TTT_Uniform_Rot_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_red_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Rot 3 (LMG-Schuetze)
class TTT_Rot3_Us_Woodland : TTT_Rot3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Us_Woodland";
    backpack = "TTT_Backpack_Lmgschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Rot_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_red_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

//Rot 4 (AT-Schuetze)
class TTT_Rot4_Us_Woodland : TTT_Rot4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Us_Woodland";
    backpack = "TTT_Backpack_Lmgschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Rot_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_red_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

//Rot 5 (LMG-Schuetze)
class TTT_Rot5_Us_Woodland : TTT_Rot5_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Us_Woodland";
    backpack = "TTT_Backpack_Atschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Rot_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_red_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
};

//Rot 6 (AT-Schuetze)
class TTT_Rot6_Us_Woodland : TTT_Rot6_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Rot_Us_Woodland";
    backpack = "TTT_Backpack_Atschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Rot_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_red_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
};

/*
#############################################################
### Trupp Blau (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Blue

//Blau 1 (Truppfuehrer)
class TTT_Blau1_Us_Woodland : TTT_Blau1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Us_Woodland";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    uniformClass = "TTT_Uniform_Blau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_blue_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Blau 2 (Grenadier)
class TTT_Blau2_Us_Woodland : TTT_Blau2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Us_Woodland";
    backpack = "TTT_Backpack_Grenadier_Us_Woodland";
    uniformClass = "TTT_Uniform_Blau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_blue_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};

//Blau 3 (MG-Assistent)
class TTT_Blau3_Us_Woodland : TTT_Blau3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Us_Woodland";
    backpack = "TTT_Backpack_Mgassistent_Us_Woodland";
    uniformClass = "TTT_Uniform_Blau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_blue_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

//Blau 4 (MG-Schuetze)
class TTT_Blau4_Us_Woodland : TTT_Blau4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Us_Woodland";
    backpack = "TTT_Backpack_Mgschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Blau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_blue_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

//Blau 5 (Pionier)
class TTT_Blau5_Us_Woodland : TTT_Blau5_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Us_Woodland";
    backpack = "TTT_Backpack_Pionier_Us_Woodland";
    uniformClass = "TTT_Uniform_Blau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_blue_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
};

//Blau 6 (Pionier)
class TTT_Blau6_Us_Woodland : TTT_Blau6_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Blau_Us_Woodland";
    backpack = "TTT_Backpack_Pionier_Us_Woodland";
    uniformClass = "TTT_Uniform_Blau_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_blue_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
};

/*
#############################################################
### Trupp Violett (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Purple

//Violett 1 (Truppfuehrer)
class TTT_Violett1_Us_Woodland : TTT_Violett1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Us_Woodland";
    backpack = "TTT_Backpack_Truppfuehrer_Us_Woodland";
    uniformClass = "TTT_Uniform_Violett_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_violet_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Heavy, Woodland), get_helmet(1, Us, Woodland) };
};

//Violett 2 (Grenadier)
class TTT_Violett2_Us_Woodland : TTT_Violett2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Us_Woodland";
    backpack = "TTT_Backpack_Grenadier_Us_Woodland";
    uniformClass = "TTT_Uniform_Violett_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_violet_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(2, Us, Woodland) };
};
//Violett 3 (MG-Assistent)
class TTT_Violett3_Us_Woodland : TTT_Violett3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Us_Woodland";
    backpack = "TTT_Backpack_Mgassistent_Us_Woodland";
    uniformClass = "TTT_Uniform_Violett_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_violet_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(3, Us, Woodland) };
};

//Violett 4 (MG-Schuetze)
class TTT_Violett4_Us_Woodland : TTT_Violett4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Us_Woodland";
    backpack = "TTT_Backpack_Mgschuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Violett_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_violet_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(4, Us, Woodland) };
};

//Violett 5 (Pionier)
class TTT_Violett5_Us_Woodland : TTT_Violett5_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Us_Woodland";
    backpack = "TTT_Backpack_Pionier_Us_Woodland";
    uniformClass = "TTT_Uniform_Violett_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_violet_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(5, Us, Woodland) };
};

//Violett 6 (Pionier)
class TTT_Violett6_Us_Woodland : TTT_Violett6_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Violett_Us_Woodland";
    backpack = "TTT_Backpack_Pionier_Us_Woodland";
    uniformClass = "TTT_Uniform_Violett_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_violet_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, get_vest(Us, GROUP_COLOR, Lite, Woodland), get_helmet(6, Us, Woodland) };
};

/*
#############################################################
### Trupp Bronze (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Bronze

//Bronze 1 (Truppfuehrer/Kommandant)
class TTT_Bronze1_Us_Woodland : TTT_Bronze1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Bronze_Us_Woodland";
    editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_bronx_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
};

//Bronze 2 (Schuetze)
class TTT_Bronze2_Us_Woodland : TTT_Bronze2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Us_Woodland";
    backpack = "TTT_Backpack_Schuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Bronze_Us_Woodland";
    editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_bronx_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
};

//Bronze 3 (Fahrer)
class TTT_Bronze3_Us_Woodland : TTT_Bronze3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Us_Woodland";
    backpack = "TTT_Backpack_Schuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Bronze_Us_Woodland";
    editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_bronx_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
};

//Bronze 4 (Truppfuehrer/Kommandant)
class TTT_Bronze4_Us_Woodland : TTT_Bronze4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Bronze_Us_Woodland";
    editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_bronx_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
};

//Bronze 5 (Schuetze)
class TTT_Bronze5_Us_Woodland : TTT_Bronze5_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Us_Woodland";
    backpack = "TTT_Backpack_Schuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Bronze_Us_Woodland";
    editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_bronx_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
};

//Bronze 6 (Fahrer)
class TTT_Bronze6_Us_Woodland : TTT_Bronze6_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bronze_Us_Woodland";
    backpack = "TTT_Backpack_Schuetze_Us_Woodland";
    uniformClass = "TTT_Uniform_Bronze_Us_Woodland";
    editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_bronx_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "BWA3_CrewmanKSK_Fleck_Headset" };
};

/*
#############################################################
### Trupp Wei� (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR White

//Wei� 1 (Feldarzt)
class TTT_Weiss1_Us_Woodland : TTT_Weiss1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Us_Woodland";
    backpack = "TTT_Backpack_Feldarzt_Us_Woodland";
    uniformClass = "TTT_Uniform_Weiss_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_white_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(1,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(1,Us,Woodland) };
};

//Wei� 2 (Fahrzeugfuehrer)
class TTT_Weiss2_Us_Woodland : TTT_Weiss2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Weiss_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_white_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(2,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(2,Us,Woodland) };
};

//Wei� 3 (Feldarzt)
class TTT_Weiss3_Us_Woodland : TTT_Weiss3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Us_Woodland";
    backpack = "TTT_Backpack_Feldarzt_Us_Woodland";
    uniformClass = "TTT_Uniform_Weiss_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_white_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(3,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(3,Us,Woodland) };
};

//Wei� 4 (Stellv.Fahrzeugfuehrer)
class TTT_Weiss4_Us_Woodland : TTT_Weiss4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Weiss_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Weiss_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_white_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(4,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(4,Us,Woodland) };
};

/*
#############################################################
### Trupp Platin (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Platin

//Platin 1 (Pilot)
class TTT_Platin1_Us_Woodland : TTT_Platin1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Platin_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(1, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(1, Us, Woodland) };
};

//Platin 2 (Pilot)
class TTT_Platin2_Us_Woodland : TTT_Platin2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Platin_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(2, Us, Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(2, Us, Woodland) };
};

/*
#############################################################
### Trupp Silber (Woodland)
#############################################################
*/
#undef GROUP_COLOR
#define GROUP_COLOR Silver

//Silber 1 (Truppfuehrer)
class TTT_Silber1_Us_Woodland : TTT_Silber1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(1,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(1,Us,Woodland) };
};

//Silber 2 (Fahrzeugfuehrer)
class TTT_Silber2_Us_Woodland : TTT_Silber2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(2,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(2,Us,Woodland) };
};

//Silber 3 (Fahrzeugfuehrer)
class TTT_Silber3_Us_Woodland : TTT_Silber3_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(3,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(3,Us,Woodland) };
};

//Silber 4 (Fahrzeugfuehrer)
class TTT_Silber4_Us_Woodland : TTT_Silber4_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(4,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(4,Us,Woodland) };
};

//Silber 5 (Fahrzeugfuehrer)
class TTT_Silber5_Us_Woodland : TTT_Silber5_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(5,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(5,Us,Woodland) };
};

//Silber 6 (Fahrzeugfuehrer)
class TTT_Silber6_Us_Woodland : TTT_Silber6_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Silber_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(6,Us,Woodland) };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", get_helmet(6,Us,Woodland) };
};

/*
#############################################################
### Trupp Adler (Woodland) OLD
#############################################################
*/

//Adler 1 (Pilot)
class TTT_Adler1_Us_Woodland : TTT_Adler1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Adler_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Eagle" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Eagle" };
};

//Adler 2 (Copilot)
class TTT_Adler2_Us_Woodland : TTT_Adler2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Adler_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Eagle" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Eagle" };
};

/*
#############################################################
### Trupp Bussard (Woodland) OLD
#############################################################
*/

//Bussard 1 (Pilot)
class TTT_Bussard1_Us_Woodland : TTT_Bussard1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bussard_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Buzzard" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Buzzard" };
};

//Bussard 2 (Copilot)
class TTT_Bussard2_Us_Woodland : TTT_Bussard2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Bussard_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Buzzard" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Buzzard" };
};

/*
#############################################################
### Trupp Habicht (Woodland) OLD
#############################################################
*/

//Habicht 1 (Pilot)
class TTT_Habicht1_Us_Woodland : TTT_Habicht1_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Habicht_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Hawk" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Hawk" };
};

//Habicht 2 (Copilot)
class TTT_Habicht2_Us_Woodland : TTT_Habicht2_Us_Desert {
    author = "Tactical Training Team";
    vehicleClass = "TTT_Habicht_Us_Woodland";
    backpack = "TTT_Backpack_Pilot_Us_Woodland";
    uniformClass = "TTT_Uniform_Silber_Us_Woodland";
	editorSubcategory = "EdSubcat_Unit_Camo_Woodland";
    hiddenSelectionsTextures[] = { "\ttt_a3\ttt_units_us\woodland\uniforms\TTT_uniform_silver_us_woodland.paa" };
    linkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Hawk" };
    respawnLinkedItems[] = { default_linkedItems, "TTT_Vest_Crew_Us_Woodland", "TTT_Helmet_Hawk" };
};

#undef GROUP_COLOR