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
	.string "…Thank you for writing.\n"
	.string "I hope to see you soon!\p"
	.string "…Hey!\n"
	.string "Don't look at my letter!$"



SaffronCityHouse2_2::
end



SaffronCityHouse2_3::
lock     
faceplayer     
msgbox SafariZone_House2_Text_3, MSGBOX_DEFAULT
release     
end

SafariZone_House2_Text_3:
	.string "The COPYCAT is cute!\n"
	.string "I'm getting her a POKÉ DOLL.$"



SaffronCityHouse2_4::
end



SaffronCityHouse2Documento_100::
msgbox SaffronCityHouse2Documento_Text_100, MSGBOX_SIGN   
end

SaffronCityHouse2Documento_Text_100:
 	.string "I was given a PP UP as a gift.\p"
	.string "It's used to increase the PP of\n"
	.string "a POKÉMON's move.\p"
	.string "I should use it on a powerful move\n"
	.string "with only a few PP.$"
