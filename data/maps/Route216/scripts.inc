Route216_MapScripts::
	.byte 0


Route216_Refugio::
lock
msgbox Route216_Refugio_Texto_1, MSGBOX_SIGN
release     
end

Route216_Refugio_Texto_1:
	.string "REFUGIO NEVADA\n"
	.string "Poco más que una cama caliente$"


Route216_Cartel_Este::
lock
msgbox Route216_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route216_Cartel_Este_Texto_1:
	.string "RUTA 216\n"
	.string "{RIGHT_ARROW} MONTE CORONA$"
