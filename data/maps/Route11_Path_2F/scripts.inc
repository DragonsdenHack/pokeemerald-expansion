Route11_Path_2F_MapScripts::
	.byte 0

Route11Path2F_1::
lock     
faceplayer     
msgbox Route11Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route11Path2F_Text_1:
.string "¿Cómo?\n"
.string "¿Un intercambio de POKÉMON?\l"
.string "¡No aceptaría negociar con un\l"
.string "ROCKET ni aunque me ofrecieses un\l"
.string "ZAPDOS!$"



Route11Path2F_2::
end



Route11Path2FDocumento_100::
msgbox Route11Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_100:
.string "Has usado los prismáticos...\p"
	.string "¡Qué vista tan bonita!$"



Route11Path2FDocumento_101::
msgbox Route11Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_101:
	.string "Has usado los prismáticos...\p"
	.string "¡Puedes ir de CIUDAD CELESTE\n"
	.string "a PUEBLO LAVANDA por el TÚNEL\l"
	.string "ROCA!$"
