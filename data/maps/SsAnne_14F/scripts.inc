SsAnne_14F_MapScripts::
	.byte 0

SsAnne14F_1::
end

SsAnne14F_EventScript_Caballero::
	trainerbattle_single TRAINER_LAO_3, SsAnne14F_Text_CaballeroIntro, SsAnne14F_Text_CaballeroDefeated
	msgbox SsAnne14F_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end
