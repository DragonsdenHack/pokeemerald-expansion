MahoganyTown_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, MahoganyTown_PokemonCenter_1F_OnTransition
	.byte 0

MahoganyTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MAHOGANY_TOWN
	end

MahoganyTown_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

MahoganyTownPkmnCenter1::
end



MahoganyTownPkmnCenter2::
lock     
faceplayer     
msgbox MahoganyTown_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_PokemonCenter_Text_2:
	.string "Many newcomers have been arriving here\n"
	.string "lately; it surprises me that PRYCE\l"
	.string "hasn't mentioned anything.$"




MahoganyTownPkmnCenter3::
lock     
faceplayer     
msgbox MahoganyTown_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_PokemonCenter_Text_3:
	.string "In my youth, I used to swim around the\n"
	.string "LAKE OF RAGE. Now I walk around it!$"



MahoganyTownPkmnCenter4::
lock     
faceplayer     
msgbox MahoganyTown_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

MahoganyTown_PokemonCenter_Text_4:
	.string "Have you been at the LAKE OF RAGE? It\n"
	.string "seems like its total depth is still a\l"
	.string "mystery. Could there be a new POKÉMON\l"
	.string "species down there?$"
