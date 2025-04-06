Route209_MapScripts::
	.byte 0


Route209_Cartel_Oeste::
lock
msgbox Route209_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route209_Cartel_Oeste_Texto_1:
	.string "RUTA 209\n"
	.string "{LEFT_ARROW} CIUDAD CORAZÓN$"


Route209_Cartel::
lock     
faceplayer     
msgbox Route209_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route209_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Puedes asignar un objeto de la bolsa al\n"
	.string "Botón Y para tenerlo más a mano.$"


Route209_Cartel_Norte::
lock
msgbox Route209_Cartel_Norte_Texto_1, MSGBOX_SIGN
release     
end

Route209_Cartel_Norte_Texto_1:
	.string "RUTA 209\n"
	.string "{UP_ARROW} PUEBLO SOSIEGO$"
