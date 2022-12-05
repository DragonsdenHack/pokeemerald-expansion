SsAnne_13F_MapScripts::
	.byte 0

SsAnne13F_1::
end

SsAnne13F_EventScript_Caballero::
	trainerbattle_single TRAINER_LAO_4, SsAnne13F_Text_CaballeroIntro, SsAnne13F_Text_CaballeroDefeated
	msgbox SsAnne13F_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end
