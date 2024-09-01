Ecruteak_TinTowerP8_MapScripts::
	.byte 0

TinTowerP8_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp8_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp8_Text_1:
	.string "Avoiding giving signs of weakness is, in\n"
	.string "itself, a sign of weakness.$"



TinTowerP8_2::
end



TinTowerP8_3::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp8_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp8_Text_3:
	.string "The truth triumphs by itself. The lie\n"
	.string "always need an accomplice.$"



TinTowerP8_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp8_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp8_Text_4:
	.string "The sole issue for the one who laughs\n"
	.string "last is that the victor must laugh\l"
	.string "alone.$"



TinTowerP8_5::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp8_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp8_Text_5:
	.string "The important thing isn't what a person\n"
	.string "possesses or lacks. It's about what\l"
	.string "they fear losing.$"



TinTowerP8_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp8_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp8_Text_6:
.string "In adversity, virtue shines forth.$"



TinTowerP8_EventScript_Monje::
	trainerbattle_single TRAINER_FABIAN, TinTowerP8_Text_MonjeIntro, TinTowerP8_Text_MonjeDefeated
	msgbox TinTowerP8_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end
