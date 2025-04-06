Route218_MapScripts::
	.byte 0


Route218_Cartel_Oeste::
lock
msgbox Route218_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route218_Cartel_Oeste_Texto_1:
	.string "RUTA 218\n"
	.string "{LEFT_ARROW} CIUDAD CANAL$"


Route218_Cartel_Este::
lock
msgbox Route218_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route218_Cartel_Este_Texto_1:
	.string "RUTA 218\n"
	.string "{RIGHT_ARROW} CIUDAD JUBILEO$"
