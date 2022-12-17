Route48_MapScripts::
	.byte 0



Route48_EventScript_Montanero::
	trainerbattle_single TRAINER_FERNANDO_4, Route48_Text_MontaneroIntro, Route48_Text_MontaneroDefeated
	msgbox Route48_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end
