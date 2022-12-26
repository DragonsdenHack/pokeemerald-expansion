Route49_MazeP4_MapScripts::
	.byte 0


Route49_MazeP4_3::
lock     
faceplayer     
msgbox Route49_MazeP4_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text3:
.string "No se trata de realizar el esfuerzo\n"
.string "máximo, sino el esfuerzo óptimo que nos\l"
.string "permita seguir mejorando un día más.$"




Route49_MazeP4_4::
lock     
faceplayer     
msgbox Route49_MazeP4_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text4:
.string "La gente tiene tanta necesidad de\n"
.string "mencionar los defectos porque duele\l"
.string "mucho que te superen en virtudes.$"



Route49MazeP4Documento_100::
lock     
showmonpic SPECIES_SACRED_DRAGON, 10, 3  
playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP4Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP4Documento_Text_100:
.string "DRAGÓN SAGRADO:\p"
	.string "PS: 163\n"
	.string "ATAQUE: 2\l"
	.string "DEFENSA: 97\l"
	.string "ATAQUE ESPECIAL: 157\l"
	.string "DEFENSA ESPECIAL: 193\l"
	.string "VELOCIDAD: 109\l"
	.string "TOTAL: 721\p"
	.string "DRAGÓN/PSÍQUICO\n"
	.string "La leyenda dice que surgió a partir de\n"
	.string "un DUNSPARCE, el cual fue despreciado\l"
	.string "y juzgado por el resto de POKEMON.\l"
	.string "Producto de ello y su inquebrantable\l"
	.string "voluntad, logró trascender más allá de\l"
	.string "su limitada forma. El proceso y\l"
	.string "fenómeno por el cual logró esto es todo\l"
	.string "un misterio.$"
