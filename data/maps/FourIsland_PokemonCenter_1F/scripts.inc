FourIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
	.byte 0

FourIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FOUR_ISLAND
	end

FourIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

FourIslandPokemonCenter1::
end



FourIslandPokemonCenter2::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_2:
.string "There's a rare kind of ICE POKÉMON\n"
    .string "that lives in the cave.\p"
    .string "We get a lot of visitors hoping to\n"
    .string "see that POKÉMON.$"



FourIslandPokemonCenter3::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_3:
.string "What's this?\p"
    .string "The new POKÉMON JOURNAL hasn't\n"
    .string "arrived on this island?$"



FourIslandPokemonCenter4::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_4:
.string "Oh? A POKÉMON EGG?\n"
    .string "…I have no idea.\p"
    .string "…Oh, wait. The DAY-CARE people\n"
    .string "in town were saying something.\p"
    .string "They said that they'd found EGGS\n"
    .string "before on their property.$"



FourIslandPokemonCenterDocumento_100::
msgbox FourIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

FourIslandPokemonCenterDocumento_Text_100:
.string "This is a POKÉMON JOURNAL from\n"
	.string "years ago…\p"
	.string "POKÉMON JOURNAL\n"
	.string "CONTEST Special!\p"
	.string "The Spring POKÉMON CONTEST's\n"
	.string "Grand Champion is DAISY OAK of\l"
	.string "PALLET TOWN!$"
