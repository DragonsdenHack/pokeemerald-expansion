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
	.string "no la necesito...$"

Route12Path2F_1_Despues::
msgbox Route12Path2F_Text_1, MSGBOX_AUTOCLOSE
release
end

Route12Path2F_1_Texto_1.1:
.string "{PLAYER} received TM27\n"
    .string "from the little girl.$"

Route12Path2F_Text_1:
.string "No eres consciente del poder de la\n"
.string "amistad, la frustración no lleva a\l"
.string "ningún lado créeme.$"



Route12Path2FDocumento_100::
msgbox Route12Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_100:
.string "Let's see what the binoculars have\n"
    .string "to show…\p"
    .string "There's a man fishing!$"



Route12Path2FDocumento_101::
msgbox Route12Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_101:
.string "Let's see what the binoculars have\n"
    .string "to show…\p"
    .string "It's POKéMON TOWER!$"
