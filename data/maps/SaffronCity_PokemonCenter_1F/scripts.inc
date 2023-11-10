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
end



SaffronCityPokemonCenterDocumento_100::
msgbox SaffronCityPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL\p"
	.string "Special Feature: SAFFRON GYM\n"
	.string "LEADER SABRINA!\p"
	.string "People say that SABRINA can\n"
	.string "communicate with her POKéMON\l"
	.string "during battle without speaking.$"
