Route205b_MapScripts::
	.byte 0


Route205_Cartel_Este::
lock
msgbox Route205_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route205_Cartel_Este_Texto_1:
	.string "RUTA 205\n"
	.string "{RIGHT_ARROW} CIUDAD VETUSTA$"


Route205_Cartel_Bosque::
lock
msgbox Route205_Cartel_Bosque_Texto_1, MSGBOX_SIGN
release     
end

Route205_Cartel_Bosque_Texto_1:
	.string "RUTA 205\n"
	.string "{LEFT_ARROW} BOSQUE VETUSTO$"
