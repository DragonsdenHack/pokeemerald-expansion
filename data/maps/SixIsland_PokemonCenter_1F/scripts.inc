SixIsland_PokemonCenter_1F_MapScripts::
	.byte 0

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
