Route204_MapScripts::
	.byte 0


Route204_Cartel_Sur::
lock
msgbox Route204_Cartel_Sur_Texto_1, MSGBOX_SIGN
release     
end

Route204_Cartel_Sur_Texto_1:
	.string "RUTA 204\n"
	.string "{DOWN_ARROW} CIUDAD JUBILEO$"


Route204_Senda::
lock
msgbox Route204_Senda_Texto_1, MSGBOX_SIGN
release     
end

Route204_Senda_Texto_1:
	.string "SENDA DESOLADA$"
