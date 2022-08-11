TwoIsland_PokemonCenter_1F_MapScripts::
	.byte 0

TwoIslandPokemonCenter-1::
end



TwoIslandPokemonCenter-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¿Quieres atrapar a todos los\n"
.string "POKéMON que te encuentres?\p"
.string "¡Qué increíble!... ¡Oye, pues\n"
.string "avísame si atrapas alguno fuerte!$"



TwoIslandPokemonCenter-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Voy a preparar una comida para\n"
.string "una persona muy importante.$"
