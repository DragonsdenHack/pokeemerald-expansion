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
	.string "Meine POKéMON wurden im POKéMON-TURM\n"
	.string "zur letzten Ruhe gebettet. Ich gebe Dir\l"
	.string "diese TM. Ich benötige sie nicht länger\l"
	.string "{PAUSE 5}…{PAUSE 5}$"

Route12Path2F_1_Despues::
msgbox Route12Path2F_Text_1, MSGBOX_AUTOCLOSE
release
end

Route12Path2F_1_Texto_1.1:
    .string "traducir$"

Route12Path2F_Text_1:
	.string "Du hast keine Ahnung, was für eine\n"
	.string "Stärke wahre Freundschaft einem\l"
	.string "verleihen kann. Zorn bringt dich\l"
	.string "nicht weiter. Glaub mir.$"



Route12Path2FDocumento_100::
msgbox Route12Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_100:
    .string "Du schaust durch das Fernrohr.\p"
    .string "Du siehst einen angelnden Mann!$"



Route12Path2FDocumento_101::
msgbox Route12Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route12Path2FDocumento_Text_101:
    .string "Du schaust durch das Fernrohr.\p"
    .string "Du siehst den POKéMON-TURM!$"
