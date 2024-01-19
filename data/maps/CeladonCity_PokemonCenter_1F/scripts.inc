CeladonCity_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_PokemonCenter_1F_OnTransition
	.byte 0

CeladonCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CELADON_CITY
	end

CeladonCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CeladonCityPokemonCenter1::
end



CeladonCityPokemonCenter2::
lock     
faceplayer     
msgbox CeladonCity_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

CeladonCity_PokemonCenter_Text_2:
	.string "The POKÉ FLUTE wakes up sleeping\n"
	.string "POKÉMON. It seems to emit a sound that\l"
	.string "only they can hear.$"



CeladonCityPokemonCenter3::
lock     
faceplayer     
msgbox CeladonCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_PokemonCenter_Text_3:
	.string "If I had a bike, I would go to the\n"
	.string "CYCLING ROAD!$"



CeladonCityPokemonCenter4::
lock     
faceplayer     
msgbox CeladonCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_PokemonCenter_Text_4:
	.string "I arrived here from FUCHSIA CITY\n"
	.string "through the CYCLING ROAD. I'm\l"
	.string "exhausted from pedaling uphill all the\l"
	.string "way!$"
