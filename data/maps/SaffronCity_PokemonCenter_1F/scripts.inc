SaffronCity_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_PokemonCenter_1F_OnTransition
	.byte 0

SaffronCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SAFFRON_CITY
	end

SaffronCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

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
lock
faceplayer
msgbox SaffronCityPokemonCenter4_Texto_1 MSGBOX_NPC
release
end

SaffronCityPokemonCenter4_Texto_1:
.string "El mismísimo LANCE visitó AZAFRÁN para\n"
	.string "negociar con SILPH.$"


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
