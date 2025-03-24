Route213_MapScripts::
	.byte 0


Route213_Cartel_Oeste::
lock
msgbox Route213_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route213_Cartel_Oeste_Texto_1:
	.string "RUTA 213\n"
	.string "{LEFT_ARROW} CIUDAD PRADERA$"


Route213_Casa::
lock
msgbox Route213_Casa_Texto_1, MSGBOX_SIGN
release     
end

Route213_Casa_Texto_1:
	.string "Casa del DR.PISADA\n"
	.string "Las huellas lo dicen todo$"


Route213_Hotel::
lock
msgbox Route213_Hotel_Texto_1, MSGBOX_SIGN
release     
end

Route213_Hotel_Texto_1:
	.string "Hotel GRAN LAGO\n"
	.string "Otro mundo en el LAGO VALOR$"
