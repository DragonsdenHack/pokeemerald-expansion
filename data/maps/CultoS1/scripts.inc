CultoS1_MapScripts::
	.byte 0

CultoS1_EventScript_Medium::
	trainerbattle_single TRAINER_RICKY_5, CultoS1_Text_MediumIntro, CultoS1_Text_MediumDefeated
	msgbox CultoS1_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



CultoS1_EventScript_Medium2::
	trainerbattle_single TRAINER_RANDALL, CultoS1_Text_Medium2Intro, CultoS1_Text_Medium2Defeated
	msgbox CultoS1_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end
