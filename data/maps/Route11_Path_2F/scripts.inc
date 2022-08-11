Route11_Path_2F_MapScripts::
	.byte 0

Route11Path2F-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "¿Cómo?\n"
.string "¿Un intercambio de POKÉMON?\l"
.string "¡No aceptaría negociar con un\l"
.string "ROCKET ni aunque me ofrecieses un\l"
.string "ZAPDOS!$"



Route11Path2F-2::
end
