FuchsiaCity_PokemonCenter_1F_MapScripts::
	.byte 0

FuchsiaCityPokemonCenter1::
end



FuchsiaCityPokemonCenter2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "No puedes ser un buen ENTRENADOR\n"
.string "con un solo POKÉMON fuerte.\l"
.string "Aunque entrenar a la vez a varios\l"
.string "POKÉMON no es tampoco tarea fácil.$"



FuchsiaCityPokemonCenter3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡La ÉLITE 4 os pondrá pronto en\n"
.string "vuestro lugar, vais a ser\l"
.string "exterminados como las ratas que\l"
.string "sois!$"



FuchsiaCityPokemonCenter4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "Hay un estrecho al oeste de CIUDAD\n"
.string "VERDE.\l"
.string "Lleva al CG de la LIGA POKÉMON.\l"
.string "El CG gobierna a todos los\l"
.string "ENTRENADORES.$"
