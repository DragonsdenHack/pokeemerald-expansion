Route10_PokemonCenter_1F_MapScripts::
	.byte 0

Route10PokemonCenter1::
end



Route10PokemonCenter2::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_2:
.string "¡La única utilidad de las PEPITAS\n"
.string "de oro es su venta por 5000!$"



Route10PokemonCenter3::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_3:
.string "Todos los POKÉMON cuentan con\n"
.string "ventajas y desventajas dependiendo\l"
.string "de sus combinaciones de tipos.$"



Route10PokemonCenter4::
end



Route10PokemonCenter5::
lock     
faceplayer     
msgbox Route10_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

Route10_PokemonCenter_Text_5:
.string "¡He oído que hay fantasmas en\n"
.string "PUEBLO LAVANDA!$"
