FiveIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_PokemonCenter_1F_OnTransition
	.byte 0

FiveIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_TWO_ISLAND
	end

FiveIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

FiveIslandPokemonCenter1::
end



FiveIslandPokemonCenter2::
lock     
faceplayer     
msgbox FiveIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

FiveIsland_PokemonCenter_Text_2:
    .string "Have you visited the GAME CORNER\n"
    .string "already?\p"
    .string "It's no good to go alone.\n"
    .string "You have to take a friend along.$"



FiveIslandPokemonCenter3::
lock     
faceplayer     
msgbox FiveIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FiveIsland_PokemonCenter_Text_3:
    .string "Not many people live on\n"
    .string "TWO ISLAND.\p"
    .string "There is this old lady who lives\n"
    .string "out on the cape.\p"
    .string "She's been there since I don't know\n"
    .string "when.$"



FiveIslandPokemonCenterDocumento_100::
msgbox FiveIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

FiveIslandPokemonCenterDocumento_Text_100:
	.string "POKÉMON JOURNAL\p"
	.string "Special Feature:\n"
	.string "ELITE FOUR's LORELEI!\p"
	.string "Known for her logical, calculated,\n"
	.string "and cool battling style, LORELEI\l"
	.string "has a surprising secret!$"
