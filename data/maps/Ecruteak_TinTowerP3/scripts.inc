Ecruteak_TinTowerP3_MapScripts::
	.byte 0

TinTowerP3_1::
end



TinTowerP3_2::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp3_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp3_Text_2:
	.string "If we genuinely reached a point of\n"
	.string "comprehension, we would no longer be\l"
	.string "capable of judgment.$"



TinTowerP3_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp3_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp3_Text_3:
	.string "The degeneration of philosophical\n"
	.string "schools is, in turn, a consequence of\l"
	.string "the mistaken belief that one can\l"
	.string "philosophize without being compelled to\l"
	.string "do so by problems outside of\l"
	.string "philosophy.$"



TinTowerP3_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp3_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp3_Text_4:
	.string "I would give everything I know for the\n"
	.string "half of what I don't know.$"



TinTowerP3_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp3_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp3_Text_5:
	.string "It is essential to understand that, in\n"
	.string "any situation, there are many factors\l"
	.string "beyond your control, and even if you do\l"
	.string "your best, you are just a part of the\l"
	.string "whole. Ruminating on everything beyond\l"
	.string "our control is simply a distraction and\l"
	.string "a waste of energy; the only thing that\l"
	.string "matters is feeling passionate about\l"
	.string "what we do and striving to perform at\l"
	.string "our best.$"



TinTowerP3_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp3_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp3_Text_6:
	.string "If you numb the pain for a while, you'll\n"
	.string "feel it later with greater intensity.$"



TinTowerP3_EventScript_Monje::
	trainerbattle_single TRAINER_JOHNSON, TinTowerP3_Text_MonjeIntro, TinTowerP3_Text_MonjeDefeated
	msgbox TinTowerP3_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
