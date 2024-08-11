SaffronCity_House3_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_House3_OnTransition
	.byte 0
	
SaffronCity_House3_OnTransition::
goto_if_ge VAR_UNUSED_0x40F7, 203, SaffronCity_House3_WarpDinamica
setdynamicwarp MAP_SAFFRON_CITY, 43, 38
end

SaffronCity_House3_WarpDinamica::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 43, 38
end		

SaffronCityHouse3_1::
lock     
faceplayer     
msgbox SafariZone_House3_Text_1, MSGBOX_DEFAULT
release     
end

SafariZone_House3_Text_1:
.string "¿Cómo?\n"
.string "¿Regalar yo la MT29, PSÍQUICO, a\l"
.string "precisamente uno de los ROCKETS\l"
.string "que nos han invadido?\l"
.string "¿En qué mundo vives?$"
