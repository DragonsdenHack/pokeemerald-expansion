Route18_Path_2F_MapScripts::
	.byte 0

Route18Path2F_1::
lock     
faceplayer     
msgbox Route18_Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route18_Path2F_Text_1:
	.string "Back off from my POKÉMON, ROCKET. I\n"
	.string "wouldn't trade any of mine, even if you\l"
	.string "offer me a MOLTRES.$"



Route18Path2FDocumento_100::
msgbox Route18Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route18Path2FDocumento_Text_100:
    .string "Du schaust durch das Fernrohr.\p"
    .string "Im Westen liegt ALABASTIA!$"

Route18Path2FDocumento_101::
msgbox Route18Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route18Path2FDocumento_Text_101:
    .string "Du schaust durch das Fernrohr.\p"
    .string "Dort drüben schwimmen Leute!$"
