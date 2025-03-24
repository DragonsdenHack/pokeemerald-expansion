Route205_MapScripts::
	.byte 0


Route205_Cartel_Oeste::
lock
msgbox Route205_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route205_Cartel_Oeste_Texto_1:
	.string "RUTA 205\n"
	.string "{LEFT_ARROW} PUEBLO AROMAFLOR$"


Route205_Cartel_Norte::
lock
msgbox Route205_Cartel_Norte_Texto_1, MSGBOX_SIGN
release     
end

Route205_Cartel_Norte_Texto_1:
	.string "RUTA 205\n"
	.string "{UP_ARROW} BOSQUE VETUSTO$"


Route205_Cartel::
lock     
faceplayer     
msgbox Route205_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route205_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Los objetos que metas en tu bolsa se\n"
	.string "colocan automaticamente en el\l"
	.string "bolsillo adecuado.\p"
	.string "¡Es una bolsa muy práctica!\n"
	.string "¡La mejor amiga de un ENTRENADOR!$"


Route205_Primer_NPC::
lock     
faceplayer     
msgbox Route205_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route205_Primer_NPC_Texto_1:
.string "Escucha con atención…\n"
.string "¿Oyes los gritos de los POKÉMON?$"


Route205_Segundo_NPC::
lock     
faceplayer     
msgbox Route205_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

Route205_Segundo_NPC_Texto_1:
.string "En el BOSQUE VETUSTO viven muchos\n"
.string "POKÉMON de TIPO VENENO.\p"
.string "Pero no he comprado antídotos… Ahora\n"
.string "no sé si seguir adelante o volver atrás.$"
