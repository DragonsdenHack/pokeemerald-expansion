Ecruteak_TinTowerP7_MapScripts::
	.byte 0

TinTowerP7_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp7_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp7_Text_1:
	.string "More than our abilities, it is our\n"
	.string "choices that reveal who we are.$"



TinTowerP7_2::
end



TinTowerP7_3::
end



TinTowerP7_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp7_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp7_Text_4:
	.string "Tomorrow will be worth it because today\n"
	.string "is worth it.$"



TinTowerP7_5::
end



TinTowerP7_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp7_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp7_Text_6:
	.string "The worst thing that can happen to\n"
	.string "anyone is to be entirely understood.$"



TinTowerP7_EventScript_Monje::
	trainerbattle_single TRAINER_DAYTON, TinTowerP7_Text_MonjeIntro, TinTowerP7_Text_MonjeDefeated
	msgbox TinTowerP7_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end



TinTowerP7_EventScript_Monje2::
	trainerbattle_single TRAINER_MAKAYLA, TinTowerP7_Text_Monje2Intro, TinTowerP7_Text_Monje2Defeated
	msgbox TinTowerP7_Text_Monje2PostBattle, MSGBOX_AUTOCLOSE
	end
