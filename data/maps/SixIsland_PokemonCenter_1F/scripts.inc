SixIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SixIsland_PokemonCenter_1F_OnTransition
	.byte 0

SixIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_SIX_ISLAND
	end

SixIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

SixIslandPokemonCenter1::
end



SixIslandPokemonCenter2::
lock     
faceplayer     
msgbox SixIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SixIsland_PokemonCenter_Text_2:
.string "You know of POKÉMON that evolve\n"
    .string "only upon trading, yes?\p"
    .string "But did you know that there are\n"
    .string "still others?\p"
    .string "Some POKÉMON evolve only when\n"
    .string "traded while holding specific items.$"




SixIslandPokemonCenter3::
lock     
faceplayer     
msgbox SixIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SixIsland_PokemonCenter_Text_3:
.string "For ten years, I've searched for\n"
    .string "RUINS.\p"
    .string "No, make that twenty years.\p"
    .string "I get this feeling that there's\n"
    .string "something hidden on this island.$"
