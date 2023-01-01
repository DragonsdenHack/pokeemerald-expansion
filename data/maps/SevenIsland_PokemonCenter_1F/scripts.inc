SevenIsland_PokemonCenter_1F_MapScripts::
	.byte 0

SevenIslandPokemonCenter1::
end



SevenIslandPokemonCenter2::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_2:
.string "En la isla, ocurren distintas cosas\n"
.string "según las conexiones.\p"
.string "¿Que qué son las conexiones?\p"
.string "Eso tendrás que descubrirlo sin\n"
.string "ayuda de nadie.$"



SevenIslandPokemonCenter3::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_3:
.string "¿Has venido a bordo del SURCAMAR?\p"
.string "Creo que en total hay diez barcos\n"
.string "rápidos de esos.\p"
.string "Pero no sé las rutas que cubren.$"



SevenIslandPokemonCenter4::
lock     
faceplayer     
msgbox SevenIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

SevenIsland_PokemonCenter_Text_4:
.string "Estas islas guardan muchos\n"
.string "misterios por descubrir, algunos\l"
.string "siquiera podemos imaginarlos.$"



SevenIslandPokemonCenterDocumento_100::
msgbox SevenIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

SevenIslandPokemonCenterDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre AGATHA,\n"
	.string "miembro del ALTO MANDO.\p"
	.string "Según fuentes cercanas, AGATHA\n"
	.string "y el PROF. OAK estuvieron\p"
	.string "enfrentados durante su formación\n"
	.string "como ENTRENADORES.$"
