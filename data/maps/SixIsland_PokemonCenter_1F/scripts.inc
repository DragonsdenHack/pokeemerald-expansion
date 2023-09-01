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
.string "Tú ya sabes que hay POKéMON que\n"
.string "evolucionan durante el intercambio,\l"
.string "¿no?\p"
.string "¿Y sabes que algunos necesitan un\n"
.string "objeto concreto para evolucionar\l"
.string "durante el intercambio?$"



SixIslandPokemonCenter3::
lock     
faceplayer     
msgbox SixIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SixIsland_PokemonCenter_Text_3:
.string "Llevo diez años buscando\n"
.string "las RUINAS.\p"
.string "No, mucho más, ¡llevo veinte!\p"
.string "Creo que en esta isla hay algo\n"
.string "raro.$"
