TwoIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	.byte 0

TwoIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

TwoIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

TwoIslandPokemonCenter_1::
end



TwoIslandPokemonCenter_2::
lock     
faceplayer     
msgbox TwoIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

TwoIsland_PokemonCenter_Text_2:
.string "¿Quieres atrapar a todos los\n"
.string "POKéMON que te encuentres?\p"
.string "¡Qué increíble!{PAUSE 25}…{PAUSE 25} ¡Oye, pues\n"
.string "avísame si atrapas alguno fuerte!$"



TwoIslandPokemonCenter_3::
lock     
faceplayer     
msgbox TwoIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

TwoIsland_PokemonCenter_Text_3:
.string "Voy a preparar una comida para\n"
.string "una persona muy importante.$"
