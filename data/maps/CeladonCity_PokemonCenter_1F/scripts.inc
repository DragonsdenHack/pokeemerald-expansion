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
	.string "Die POKÉFLÖTE weckt schlafende\n"
	.string "POKéMON auf. Anscheinend gibt sie einen\l"
	.string "Ton von sich, den nur POKéMON hören\l"
	.string "können.$"



CeladonCityPokemonCenter3::
lock     
faceplayer     
msgbox CeladonCity_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_PokemonCenter_Text_3:
	.string "Wenn ich ein FAHRRAD hätte, würde\n"
	.string "ich den RADWEG benutzen!$"



CeladonCityPokemonCenter4::
lock     
faceplayer     
msgbox CeladonCity_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_PokemonCenter_Text_4:
	.string "Ich bin von FUCHSANIA CITY aus\n"
	.string "den RADWEG hinaufgefahren!$"
