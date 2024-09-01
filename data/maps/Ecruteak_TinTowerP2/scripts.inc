Ecruteak_TinTowerP2_MapScripts::
	.byte 0

TinTowerP2_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_1:
	.string "A real TRAINER is not immune to fear.\n"
	.string "He fights despite it.$"



TinTowerP2_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_2:
	.string "The more data we have, the greater our\n"
	.string "risk of drowning in it.$"



TinTowerP2_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_3:
	.string "Every battle is a closed space, a\n"
	.string "bubble. And in that bubble, only both\l"
	.string "TRAINERS and their POKÉMON exist.\l"
	.string "Everything else must be left outside,\l"
	.string "the excuses, the lack of training, all\l"
	.string "the problems… A battle is a whole life.$"



TinTowerP2_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_4:
	.string "Pressure is a double-edged sword. It\n"
	.string "heightens your senses to their peak,\l"
	.string "but it's also a great source of tunnel\l"
	.string "vision and ultimately anxiety. Yet it's\l"
	.string "still a privilege and another sign we\l"
	.string "still live-and that we're fighting for\l"
	.string "the things that matter to us.$"



TinTowerP2_5::
end



TinTowerP2_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_6:
	.string "You have nothing to prove except to\n"
	.string "yourself. So long as you still draw\l"
	.string "breath, you have a chance.$"



TinTowerP2_EventScript_Monje::
	trainerbattle_single TRAINER_DEVAN, TinTowerP2_Text_MonjeIntro, TinTowerP2_Text_MonjeDefeated
	msgbox TinTowerP2_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
