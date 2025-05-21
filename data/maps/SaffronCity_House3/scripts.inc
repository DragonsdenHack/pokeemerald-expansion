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
	.string "Was?! Ich soll meine TM29 PSYCHOKINESE\n"
	.string "an einen der ROCKETs verschenken, die\l"
	.string "in unsere Stadt eingefallen sind? In\l"
	.string "welcher Welt lebst du eigentlich?$"


