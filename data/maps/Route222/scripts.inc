Route222_MapScripts::
	.byte 0


Route222_Cartel_Este::
lock
msgbox Route222_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route222_Cartel_Este_Texto_1:
	.string "RUTA 222\n"
	.string "{RIGHT_ARROW} CIUDAD MARINA$"


Route222_Cartel_Oeste::
lock
msgbox Route222_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route222_Cartel_Oeste_Texto_1:
	.string "RUTA 222\n"
	.string "{LEFT_ARROW} HOTEL GRAN LAGO$"


Route222_Casa::
lock
msgbox Route222_Cartel_Casa_Texto_1, MSGBOX_SIGN
release     
end

Route222_Cartel_Casa_Texto_1:
	.string "Concurso POKÉMON de tamaño\n"
	.string "¡Se buscan POKÉMON grandes!$"


Route222_Club::
lock
msgbox Route222_Cartel_Club_Texto_1, MSGBOX_SIGN
release     
end

Route222_Cartel_Club_Texto_1:
	.string "Club de fans de PIKACHU\n"
	.string "¡Pikapikapikah! ¿Pikapika?$"
