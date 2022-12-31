Route12_Path_2F_MapScripts::
	.byte 0

Route12Path2F_1::
lock     
faceplayer     
msgbox Route12Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route12Path2F_Text_1:
.string "No eres consciente del poder de la\n"
.string "amistad, la frustración no lleva a\l"
.string "ningún lado créeme.$"



Route12Path2FDocumento_100::
msgbox Route12Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_100:
.string "Has usado los prismáticos...\p"
	.string "¡Un hombre está pescando!$"



Route12Path2FDocumento_101::
msgbox Route12Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_101:
.string "Has usado los prismáticos...\p"
	.string "¡Es la TORRE POKéMON!$"
