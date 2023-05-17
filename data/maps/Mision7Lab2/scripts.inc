Mision7Lab2_MapScripts::
	.byte 0



Mision7Lab2_EventScript_Ladron::
	trainerbattle_single TRAINER_TRAINER_30, Mision7Lab2_Text_LadronIntro, Mision7Lab2_Text_LadronDefeated
	msgbox Mision7Lab2_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end
