Ecruteak_TinTowerP2_MapScripts::
	.byte 0

TinTowerP2_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_1:
	.string "The real TRAINER is not immune against\n"
	.string "the fear. He fights despite it.$"



TinTowerP2_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp2_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp2_Text_2:
	.string "The more data we have, the more\n"
	.string "possibilities we have of drowning in\l"
	.string "them.$"



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
	.string "Pressure is a double-edged sword; it\n"
	.string "keeps you alert, with all your senses\l"
	.string "awake, but it can also block you and\l"
	.string "lead to anxiety. However, it remains a\l"
	.string "privilege, another sign that we are\l"
	.string "alive, and that we are fighting for the\l"
	.string "things that matter to us.$"



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
	.string "yourself. As long as you have a little\l"
	.string "breath left, you have a chance.$"



TinTowerP2_EventScript_Monje::
	trainerbattle_single TRAINER_DEVAN, TinTowerP2_Text_MonjeIntro, TinTowerP2_Text_MonjeDefeated
	msgbox TinTowerP2_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
