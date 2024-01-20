Route16_Path_1F_MapScripts::
	.byte 0

Route16Path1F_1::
lock     
faceplayer     
msgbox Route16_Path1F_Text_1, MSGBOX_DEFAULT
release     
end

Route16_Path1F_Text_1:
	.string "But what a hell? It is uncommon to see\n"
	.string "normal people going through here, but a\l"
	.string "ROCKET? I had never seen it!$"



Route16Path1F_2::
lock     
faceplayer     
msgbox Route16_Path1F_Text_2, MSGBOX_DEFAULT
release     
end

Route16_Path1F_Text_2:
	.string "I do not care if you use a BIKE or not\n"
	.string "to enter CYCLING ROAD, ROCKET, you are\l"
	.string "already in the black list, you have no\l"
	.string "redemption and I wont waste my time\l"
	.string "trying to reinsert you in the society.$"
