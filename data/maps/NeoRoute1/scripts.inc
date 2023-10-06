NeoRoute1_MapScripts::
	.byte 0

NeoRoute1_EventScript_Colegial::
	trainerbattle_single TRAINER_TRAINER_243, NeoRoute1_Text_ColegialIntro, NeoRoute1_Text_ColegialDefeated
	msgbox NeoRoute1_ColegialPostBattle, MSGBOX_AUTOCLOSE
	end

NeoRoute1_EventScript_Guay::
	trainerbattle_single TRAINER_TRAINER_244, NeoRoute1_Text_GuayIntro, NeoRoute1_Text_GuayDefeated
	msgbox NeoRoute1_GuayPostBattle, MSGBOX_AUTOCLOSE
	end
