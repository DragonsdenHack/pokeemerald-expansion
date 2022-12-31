SaffronCity_PokemonCenter_1F_MapScripts::
	.byte 0

SaffronCityPokemonCenter1::
end



SaffronCityPokemonCenter2::
lock     
faceplayer     
msgbox SaffronCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SaffronCity_PokemonCenter_Text_2:
.string "SILPH es conocido por todos aquí,\n"
.string "ha sido víctima de su fama, lo que\l"
.string "no os da derecho para hacer lo que\l"
.string "habéis hecho.$"



SaffronCityPokemonCenter3::
lock     
faceplayer     
msgbox SaffronCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_PokemonCenter_Text_3:
.string "AZAFRÁN es el centro financiero de\n"
.string "KANTO, por mucho que insistáis\l"
.string "jamás caeremos.$"



SaffronCityPokemonCenter4::
end



SaffronCityPokemonCenterDocumento_100::
msgbox SaffronCityPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityPokemonCenterDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre SABRINA, LÍDER\n"
	.string "del GIMNASIO de AZAFRÁN.\p"
	.string "Según fuentes cercanas, SABRINA\n"
	.string "se comunica en combate con sus\l"
	.string "POKéMON, sin necesidad de hablar.$"
