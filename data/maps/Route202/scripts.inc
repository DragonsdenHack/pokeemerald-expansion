Route202_MapScripts::
	.byte 0



Route202_Cartel_Sur::
lock
msgbox Route202_Cartel_Sur_Texto_1, MSGBOX_SIGN
release     
end

Route202_Cartel_Sur_Texto_1:
	.string "RUTA 202\n"
	.string "{DOWN_ARROW} PUEBLO ARENA$"


Route202_Cartel_Norte::
lock
msgbox Route202_Cartel_Norte_Texto_1, MSGBOX_SIGN
release     
end

Route202_Cartel_Norte_Texto_1:
	.string "RUTA 202\n"
	.string "{UP_ARROW} CIUDAD JUBILEO$"



Route202_Cartel::
lock     
faceplayer     
msgbox Route202_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route202_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Cuando un POKÉMON participa en un\n"
	.string "combate, gana Puntos de Experiencia.\p"
	.string "Cuanto más luchen tus POKÉMON,\n"
	.string "más fuertes llegarán a ser.$"
