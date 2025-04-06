Route208_MapScripts::
	.byte 0



Route208_Cartel::
lock     
faceplayer     
msgbox Route208_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route208_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Tras plantar alguna baya, fíjate en el\n"
	.string "color de la tierra.\p"
	.string "Si está oscura, es señal de que tiene\n"
	.string "suficiente humedad.\p"
	.string "Si su color es claro, riégala un poco.$"


Route208_Casa::
lock     
faceplayer     
msgbox Route208_Casa_Texto_1, MSGBOX_SIGN
release     
end

Route208_Casa_Texto_1:
	.string "Casa de BAYÓLOGO.\n"
	.string "Se regalan BAYAS.$"


Route208_Cartel_Este::
lock
msgbox Route208_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route208_Cartel_Este_Texto_1:
	.string "RUTA 208\n"
	.string "{RIGHT_ARROW} CIUDAD CORAZÓN$"


Route208_Cartel_Oeste::
lock
msgbox Route208_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route208_Cartel_Oeste_Texto_1:
	.string "RUTA 208\n"
	.string "{LEFT_ARROW} MONTE CORONA$"
