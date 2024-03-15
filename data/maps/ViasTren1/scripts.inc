ViasTren1_MapScripts::
	.byte 0

ViasTren1_3::
lock     
faceplayer     
msgbox ViasTren1_Text_3, MSGBOX_DEFAULT
release     
end

ViasTren1_Text_3:
	.string "The MAGNETRAIN will travel at a speed\n"
	.string "of 340 mph. Considering that the tracks\l"
	.string "cover 90 miles to reach SAFFRON, the\l"
	.string "journey can be completed in just over\l"
	.string "15 minutes. Isn't that incredible?$"



ViasTren1_5::
lock     
faceplayer     
msgbox ViasTren1_Text_5, MSGBOX_DEFAULT
release     
end

ViasTren1_Text_5:
	.string "VIOLET CITY is to the north; in fact,\n"
	.string "we've already passed it. From this\l"
	.string "point, it's to the northwest.$"




ViasTren1_7::
lock     
faceplayer     
msgbox ViasTren1_Text_7, MSGBOX_DEFAULT
release     
end

ViasTren1_Text_7:
	.string "As we venture eastward, the vegetation\n"
	.string "becomes increasingly dense. There are\l"
	.string "many areas to explore here.$"



ViasTren1_EventScript_Obrero::
	trainerbattle_single TRAINER_SAWYER_4, ViasTren1_Text_ObreroIntro, ViasTren1_Text_ObreroDefeated
	msgbox ViasTren1_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end
