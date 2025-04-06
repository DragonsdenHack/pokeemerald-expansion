Route206_MapScripts::
	.byte 0


Route206_Cartel_Norte::
lock
msgbox Route206_Cartel_Norte_Texto_1, MSGBOX_SIGN
release     
end

Route206_Cartel_Norte_Texto_1:
	.string "RUTA 206\n"
	.string "{UP_ARROW} CIUDAD VETUSTA$"


Route206_Cartel_Sur::
lock
msgbox Route206_Cartel_Sur_Texto_1, MSGBOX_SIGN
release     
end

Route206_Cartel_Sur_Texto_1:
	.string "RUTA 206\n"
	.string "{DOWN_ARROW} CIUDAD PIRITA$"
