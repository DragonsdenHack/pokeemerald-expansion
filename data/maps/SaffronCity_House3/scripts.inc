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
	.string "How? Me giving for free the TM29,\n"
	.string "PSYCHIC, to one of the very ROCKETS\l"
	.string "who invaded us? In what world are you\l"
	.string "living?$"
