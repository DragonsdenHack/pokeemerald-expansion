CinnabarIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CinnabarIsland_PokemonCenter_1F_OnTransition
	.byte 0

CinnabarIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_CINNABAR_ISLAND
	end

CinnabarIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

CinnabarIslandPokemonCenter1::
end



CinnabarIslandPokemonCenter2::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_2, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_2:
.string "POKÉMON can still learn techniques\n"
    .string "after canceling evolution.\p"
    .string "Evolution can wait until new moves\n"
    .string "have been learned.$"



CinnabarIslandPokemonCenter3::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_3:
	.string "You ROCKETS are not welcome here, our\n"
	.string "GYM LEADER would never let this place\l"
	.string "infect, with people like you.$"



CinnabarIslandPokemonCenter4::
lock     
faceplayer     
msgbox CinnabarIsland_Center_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Center_Text_4:
.string "I came to visit the CINNABAR GYM,\n"
    .string "but the door is locked tight.\p"
    .string "There should be a key for it\n"
    .string "somewhere.\p"
    .string "Could it be in that burned-out\n"
    .string "mansion?\p"
    .string "The GYM LEADER's friend used to\n"
    .string "live there, they say.$"



CinnabarIslandPokemonCenterDocumento_100::
msgbox CinnabarIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandPokemonCenterDocumento_Text_100:
.string "POKÉMON JOURNAL\p"
	.string "Special Feature:\n"
	.string "MR. FUJI of POKÉMON HOUSE!\p"
	.string "Editor: The shy MR. FUJI turned\n"
	.string "down our interview requests.\p"
	.string "He is a kindly man who is adored\n"
	.string "and respected in LAVENDER TOWN.$"
