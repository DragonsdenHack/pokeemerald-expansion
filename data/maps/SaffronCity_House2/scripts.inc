SaffronCity_House2_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_House2_WarpDinamica
	.byte 0

SaffronCity_House2_WarpDinamica:
goto_if_ge VAR_UNUSED_0x40F7, 203, SaffronCity_House2_NeoSaffron
setdynamicwarp MAP_SAFFRON_CITY, 22, 14
end	

SaffronCity_House2_NeoSaffron::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 26, 14
end
	




SaffronCityHouse2_1::
lock     
faceplayer     
msgbox SafariZone_House2_Text_1, MSGBOX_DEFAULT
release     
end

SafariZone_House2_Text_1:
	.string "… vielen Dank für deinen Brief! Bis bald\n"
	.string "… Heh! Lies meinen Brief nicht!$"



SaffronCityHouse2_2::
end



SaffronCityHouse2_3::
lock     
faceplayer     
msgbox SafariZone_House2_Text_3, MSGBOX_DEFAULT
release     
end

SafariZone_House2_Text_3:
	.string "Ich mag die Nachahmerin!\n"
	.string "Ich kaufe ihr eine POKéPUPPE!$"



SaffronCityHouse2_4::
end



SaffronCityHouse2Documento_100::
msgbox SaffronCityHouse2Documento_Text_100, MSGBOX_SIGN   
end

SaffronCityHouse2Documento_Text_100:
	.string "Ich habe ein AP-PLUS geschenkt\n"
	.string "bekommen! Es erhöht die\l"
	.string "ANGRIFFSPUNKTE einer Attacke!\p"
	.string "Ich sollte es bei einer mächtigen\n"
	.string "Attacke, die wenig AP hat, einsetzen.$"
