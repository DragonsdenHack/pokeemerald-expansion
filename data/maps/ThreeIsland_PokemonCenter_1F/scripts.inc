ThreeIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, ThreeIsland_PokemonCenter_1F_OnTransition
	.byte 0

ThreeIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_THREE_ISLAND
	end

ThreeIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

ThreeIslandPokemonCenter1::
end



ThreeIslandPokemonCenter2::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_2:
	.string "Es ist nicht möglich, zwischen den\n"
	.string "Inseln in dieser Gegend zu SURFen! Die\l"
	.string "Strömung ist zu stark und gefährlich!$"

ThreeIslandPokemonCenter3::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_3:
	.string "Heh! Hast du schon gehört? Das\n"
	.string "PC-Netzwerk hier kann nun mit den PCs\l"
	.string "in KANTO verbunden werden. Ich weiß\l"
	.string "nicht, wie das zu Stande kam, aber es\l"
	.string "ist großartig!$"



ThreeIslandPokemonCenter4::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_4:
	.string "Lass uns BEEREN mahlen! … das wäre\n"
	.string "BEERENverschwendung? Im BEERENFORST\l"
	.string "kannst du stets BEEREN am Boden\l"
	.string "finden!$"
