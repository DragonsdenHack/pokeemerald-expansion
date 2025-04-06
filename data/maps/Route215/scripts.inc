Route215_MapScripts::
	.byte 0


Route215_Cartel_Este::
lock
msgbox Route215_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route215_Cartel_Este_Texto_1:
	.string "RUTA 215\n"
	.string "{RIGHT_ARROW} CIUDAD ROCAVELO$"


Route215_Cartel::
lock     
faceplayer     
msgbox Route215_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route215_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Los ataques de los POKÉMON se dividen\n"
	.string "en dos tipos: físicos o especiales.\p"
	.string "La fuerza del ataque físico depende\n"
	.string "de la cantidad de puntos de ATAQUE.\p"
	.string "La potencia de los especiales varía\n"
	.string "según los puntos de ATAQUE ESPECIAL.$"


Route215_Primer_NPC::
lock     
faceplayer     
msgbox Route215_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route215_Primer_NPC_Texto_1:
.string "La venganza es un plato que se\n"
.string "sirve frío.\p"
.string "Y el odio puede ser bueno, se\n"
.string "sobrevive con el odio.$"


Route215_Cartel_Pueblos::
lock
msgbox Route215_Cartel_Pueblos_Texto_1, MSGBOX_SIGN
release     
end

Route215_Cartel_Pueblos_Texto_1:
	.string "{UP_ARROW} PUEBLO CAELESTIS\n"
	.string "{DOWN_ARROW} PUEBLO SOSIEGO$"
