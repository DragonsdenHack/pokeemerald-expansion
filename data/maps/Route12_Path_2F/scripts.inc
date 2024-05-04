Route12_Path_2F_MapScripts::
	.byte 0

Route12Path2F_1::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_806, Route12Path2F_1_Despues
msgbox Route12Path2F_Text_2, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM27
msgbox Route12Path2F_1_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_806
release     
end

Route12Path2F_Text_2:
.string "Las cenizas de mis POKéMON están\n"
	.string "guardadas en la TORRE POKéMON.\p"
	.string "Puedes quedarte con esta MT. Ya\n"
	.string "no la necesito{PAUSE 5}…{PAUSE 5}$"

Route12Path2F_1_Despues::
msgbox Route12Path2F_Text_1, MSGBOX_AUTOCLOSE
release
end

Route12Path2F_1_Texto_1.1:
.string "¡{PLAYER} obtuvo la MT27\n"
	.string "de manos de la chica!$"

Route12Path2F_Text_1:
.string "No eres consciente del poder de la\n"
.string "amistad, la frustración no lleva a\l"
.string "ningún lado créeme.$"



Route12Path2FDocumento_100::
msgbox Route12Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_100:
.string "Has usado los prismáticos…\p"
	.string "¡Un hombre está pescando!$"



Route12Path2FDocumento_101::
msgbox Route12Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_101:
.string "Has usado los prismáticos…\p"
	.string "¡Es la TORRE POKéMON!$"
