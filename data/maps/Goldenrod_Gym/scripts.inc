Goldenrod_Gym_MapScripts::
	.byte 0

GoldenrodGym_EventScript_Chica::
	trainerbattle_single TRAINER_ALEXA, GoldenrodGym_Text_ChicaIntro, GoldenrodGym_Text_ChicaDefeated
	msgbox GoldenrodGym_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodGym_EventScript_Chica2::
	trainerbattle_single TRAINER_AIDAN, GoldenrodGym_Text_Chica2Intro, GoldenrodGym_Text_Chica2Defeated
	msgbox GoldenrodGym_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodGym_EventScript_Chica3::
	trainerbattle_single TRAINER_RUBEN, GoldenrodGym_Text_Chica3Intro, GoldenrodGym_Text_Chica3Defeated
	msgbox GoldenrodGym_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end
