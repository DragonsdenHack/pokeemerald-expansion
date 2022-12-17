Route50_MapScripts::
	.byte 0



Route50_EventScript_Montanero::
	trainerbattle_single TRAINER_THALIA_4, Route50_Text_MontaneroIntro, Route50_Text_MontaneroDefeated
	msgbox Route50_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end
