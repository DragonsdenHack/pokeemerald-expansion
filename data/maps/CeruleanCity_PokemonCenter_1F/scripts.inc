CeruleanCity_PokemonCenter_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, CeruleanCity_PokemonCenter_1F_OnTransition
	.byte 0

CeruleanCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CERULEAN_CITY
	end

CeruleanCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CeruleanCityPokemonCenter1::
end



CeruleanCityPokemonCenter2::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_2:
.string "Stop wasting your time belonging to a\n"
	.string "bunch of thieves with no future and do\l"
	.string "something with your life, kid.$"



CeruleanCityPokemonCenter3::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_3:
.string "You should be ashamed of wearing those\n"
	.string "clothes in public!$"



CeruleanCityPokemonCenter4::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_4:
.string "If that would depend on me, I would ban\n"
	.string "you from even entering POKÉMON\l"
	.string "CENTERS, you ROCKETs don't deserve\l"
	.string "even essential services.$"



CeruleanCityPokemonCenter5::
lock     
faceplayer     
msgbox CeruleanCity_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

CeruleanCity_PokemonCenter_Text_5:
.string "They say that BILL has POKÉMON that no\n"
	.string "one else has. I would like to see them!$"



CeruleanCityPokemonCenterDocumento_100::
msgbox CeruleanCityPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL\p"
	.string "Special Feature: CERULEAN GYM\n"
	.string "LEADER MISTY!\p"
	.string "MISTY is said to worship LORELEI\n"
	.string "of the ELITE FOUR.$"
