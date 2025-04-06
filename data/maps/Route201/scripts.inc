Route201_MapScripts::
	.byte 0


Route201_Primer_NPC::
lock     
faceplayer     
msgbox Route201_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route201_Primer_NPC_Texto_1:
	.string "Los POKÉMON salvajes acechan en la\n"
	.string "hierba alta y te cogen por sorpresa.\p"
	.string "Así que, si quieres combatir con uno\n"
	.string "de ellos, camina por la hierba alta.\p"
	.string "Y si quieres evitar a los POKÉMON\n"
	.string "salvajes, no te acerques a la hierba.$"

Route201_Segundo_NPC::
lock     
faceplayer     
msgbox Route201_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

Route201_Segundo_NPC_Texto_1:
.string "Inventar diálogo$"

Route201_Tercer_NPC::
lock     
faceplayer     
msgbox Route201_Tercer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route201_Tercer_NPC_Texto_1:
.string "Inventar diálogo$"


Route201_Cartel::
lock     
faceplayer     
msgbox Route201_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route201_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "¡No hay que ser tímido! Habla con todo\n"
	.string "el que te encuentres por el camino.\p"
	.string "La gente te dará información y consejos\n"
	.string "muy valiosos.$"



Route201_Cartel_Sur::
lock
msgbox Route201_Cartel_Sur_Texto_1, MSGBOX_SIGN
release     
end

Route201_Cartel_Sur_Texto_1:
	.string "RUTA 201\n"
	.string "{DOWN_ARROW} PUEBLO HOJAVERDE$"


Route201_Cartel_Este::
lock
msgbox Route201_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route201_Cartel_Este_Texto_1:
	.string "RUTA 201\n"
	.string "{RIGHT_ARROW} PUEBLO ARENA$"

