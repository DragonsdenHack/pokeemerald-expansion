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
	.string "My POKÉMON's ashes are stored in\n"
	.string "POKÉMON TOWER.\p"
	.string "You can have this TM.\n"
	.string "I don't need it anymore…$"

Route12Path2F_1_Despues::
msgbox Route12Path2F_Text_1, MSGBOX_AUTOCLOSE
release
end

Route12Path2F_1_Texto_1.1:
.string "{PLAYER} received TM27\n"
    .string "from the little girl.$"

Route12Path2F_Text_1:
	.string "You are not conscious of the friendship\n"
	.string "power, the frustration heads nowhere,\l"
	.string "trust me.$"



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
