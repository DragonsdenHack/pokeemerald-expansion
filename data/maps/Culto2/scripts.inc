Culto2_MapScripts::
	.byte 0

Culto2_EventScript_Medium::
	trainerbattle_single TRAINER_RICKY_3, Culto2_Text_MediumIntro, Culto2_Text_MediumDefeated
	msgbox Culto2_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



Culto2_EventScript_Medium2::
	trainerbattle_single TRAINER_RICKY_4, Culto2_Text_Medium2Intro, Culto2_Text_Medium2Defeated
	msgbox Culto2_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end
