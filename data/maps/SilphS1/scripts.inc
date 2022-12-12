SilphS1_MapScripts::
	.byte 0

SilphS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_LOLA_2, SilphS1_Text_CientificoIntro, SilphS1_Text_CientificoDefeated
	msgbox SilphS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end
	