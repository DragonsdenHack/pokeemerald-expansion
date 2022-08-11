Route16_Path_2F_MapScripts::
	.byte 0

Route16Path2F-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "¡No te acerques a mi ROCKET, como\n"
.string "me vean relacionarme con alguien\l"
.string "como tú nadie querrá ser mi amigo!$"



Route16Path2F-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "Si intentas algo raro llamaré al\n"
.string "POLICÍA de abajo.$"



Route16Path2F-3::
end
