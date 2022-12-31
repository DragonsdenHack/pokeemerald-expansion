Route16_Path_2F_MapScripts::
	.byte 0

Route16Path2F_1::
lock     
faceplayer     
msgbox Route16_Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_1:
.string "¡No te acerques a mi ROCKET, como\n"
.string "me vean relacionarme con alguien\l"
.string "como tú nadie querrá ser mi amigo!$"



Route16Path2F_2::
lock     
faceplayer     
msgbox Route16_Path2F_Text_2, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_2:
.string "Si intentas algo raro llamaré al\n"
.string "POLICÍA de abajo.$"



Route16Path2F_3::
end



Route16Path2FDocumento_100::
msgbox Route16Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_100:
.string "Has usado los prismáticos...\p"
	.string "¡Es el CENTRO COMERCIAL\n"
	.string "de CIUDAD AZULONA!$"



Route16Path2FDocumento_101::
msgbox Route16Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_101:
.string "Has usado los prismáticos...\p"
	.string "¡Hay un largo camino sobre\n"
	.string "el agua!$"
