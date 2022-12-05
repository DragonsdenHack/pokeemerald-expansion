SsAnne_16F_MapScripts::
	.byte 0

SsAnne16F_1::
end



SsAnne16F_2::
end



SsAnne16F_3::
end


SsAnne16F_EventScript_Caballero::
	trainerbattle_single TRAINER_GINA_AND_MIA_1, SsAnne16F_Text_CaballeroIntro, SsAnne16F_Text_CaballeroDefeated
	msgbox SsAnne16F_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne16F_EventScript_Marinero::
	trainerbattle_single TRAINER_DONALD, SsAnne16F_Text_MarineroIntro, SsAnne16F_Text_MarineroDefeated
	msgbox SsAnne16F_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end
