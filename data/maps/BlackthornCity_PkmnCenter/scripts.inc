BlackthornCity_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_1F_OnTransition
	.byte 0

BlackthornCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	end

BlackthornCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

BlackthornCityPkmnCenter1::
end



BlackthornCityPkmnCenter2::
lock     
faceplayer     
msgbox BlackthornCity_PkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

BlackthornCity_PkmnCenter_Text_2:
	.string "I arrived at BLACKTHORN through the\n"
	.string "mountain, my GROUND TYPES can't stand\l"
	.string "the passage through the ICE PATH.$"



BlackthornCityPkmnCenter3::
lock     
faceplayer     
msgbox BlackthornCity_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

BlackthornCity_PkmnCenter_Text_3:
	.string "It's said that POKÉMON GOD confined\n"
	.string "the DRAGON TYPE here, surrounding the\l"
	.string "area with mountains, and placing the\l"
	.string "ICE PATH as the only way out, due to its\l"
	.string "fear about the immense potential\l"
	.string "dragons have.$"



BlackthornCityPkmnCenter4::
lock     
faceplayer
msgbox BlackthornCity_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

BlackthornCity_PkmnCenter_Text_4:
	.string "For those who know where to search,\n"
	.string "there are many TRAINERS in JOHTO worth\l"
	.string "encountering, honing their battling\l"
	.string "skills for decades. But among them all,\l"
	.string "our GYM LEADER undoubtedly stands out.\l"
	.string "His dragons transcend all others.$"
