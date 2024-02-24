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
	.string "Everyone here knows what SILPH is, it\n"
	.string "has been a victim of its fame, which\l"
	.string "does not allow you to do what you did.$"



SaffronCityPokemonCenter3::
lock     
faceplayer     
msgbox SaffronCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_PokemonCenter_Text_3:
	.string "SAFFRON is the financial center of\n"
	.string "KANTO, no matter how much you insist, we\l"
	.string "won't fall.$"



SaffronCityPokemonCenter4::
lock
faceplayer
msgbox SaffronCityPokemonCenter4_Texto_1 MSGBOX_NPC
release
end

SaffronCityPokemonCenter4_Texto_1:
.string "SILPH is such an important company that\n"
	.string "even LANCE came here for business.$"


SaffronCityPokemonCenterDocumento_100::
msgbox SaffronCityPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityPokemonCenterDocumento_Text_100:
.string "POKÉMON JOURNAL\p"
	.string "Special Feature: SAFFRON GYM\n"
	.string "LEADER SABRINA!\p"
	.string "People say that SABRINA can\n"
	.string "communicate with her POKÉMON\l"
	.string "during battle without speaking.$"
