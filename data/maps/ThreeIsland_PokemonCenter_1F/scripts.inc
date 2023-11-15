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
.string "It's impossible to SURF between the\n"
    .string "islands around these parts.\p"
    .string "The tides are too fast and\n"
    .string "treacherous.$"

ThreeIslandPokemonCenter3::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_3:
.string "Hey, did you hear the news?\p"
    .string "The PC network here can now link\n"
    .string "with PCs in KANTO.\p"
    .string "I don't know how that came about,\n"
    .string "but it's fantastic!$"



ThreeIslandPokemonCenter4::
lock     
faceplayer     
msgbox ThreeIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

ThreeIsland_PokemonCenter_Text_4:
.string "Let's crush BERRIES!\n"
    .string "…That'd be wasting BERRIES?\p"
    .string "You can always find some BERRIES\n"
    .string "on the ground in BERRY FOREST.$"
