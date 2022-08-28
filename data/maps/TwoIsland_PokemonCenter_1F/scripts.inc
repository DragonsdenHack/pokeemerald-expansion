TwoIsland_PokemonCenter_1F_MapScripts::
	.byte 0

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
.string "¡Qué increíble!… ¡Oye, pues\n"
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
