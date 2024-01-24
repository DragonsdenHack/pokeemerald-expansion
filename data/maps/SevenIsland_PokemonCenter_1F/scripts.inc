SevenIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_PokemonCenter_1F_OnTransition
	.byte 0

SevenIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SEVEN_ISLAND
	end

SevenIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

SevenIslandPokemonCenter1::
end



SevenIslandPokemonCenter2::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_2:
	.string "On the island, different things happen\n"
	.string "based on connections. What are\l"
	.string "connections? You'll have to discover\l"
	.string "that without anyone's help.$"



SevenIslandPokemonCenter3::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_3:
	.string "Have you come aboard the SEAGALLOP? I\n"
	.string "think there are a total of ten fast\l"
	.string "ships like that. But I don't know the\l"
	.string "routes they cover.$"



SevenIslandPokemonCenter4::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_4:
	.string "Many mysteries are waiting to be\n"
	.string "uncovered on these islands, some of\l"
	.string "which we can't even imagine.$"



SevenIslandPokemonCenterDocumento_100::
msgbox SevenIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SevenIslandPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL\p"
	.string "Special Feature:\n"
	.string "ELITE FOUR's AGATHA!\p"
	.string "In her youth, AGATHA and PROF.\n"
	.string "OAK were rivals who vied for\l"
	.string "supremacy as TRAINERS.$"
