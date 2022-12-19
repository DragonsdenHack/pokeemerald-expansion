CuevaTesoro2_MapScripts::
	.byte 0



CuevaTesoro2_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_95, CuevaTesoro2_Text_PoliciaIntro, CuevaTesoro2_Text_PoliciaDefeated
	msgbox CuevaTesoro2_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end
