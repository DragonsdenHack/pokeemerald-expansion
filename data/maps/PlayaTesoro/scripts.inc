PlayaTesoro_MapScripts::
	.byte 0

PlayaTesoro_EventScript_Nadadora::
	trainerbattle_single TRAINER_GARRISON, PlayaTesoro_Text_NadadoraIntro, PlayaTesoro_Text_NadadoraDefeated
	msgbox PlayaTesoro_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end
	