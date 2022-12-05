SsAnne_21F_MapScripts::
	.byte 0

SsAnne21F_1::
end



SsAnne21F_2::
end

SsAnne21F_EventScript_Pescador::
	trainerbattle_single TRAINER_TAYLOR, SsAnne21F_Text_PescadorIntro, SsAnne21F_Text_PescadorDefeated
	msgbox SsAnne21F_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne21F_EventScript_Marinero::
	trainerbattle_single TRAINER_WINSTON_4, SsAnne21F_Text_MarineroIntro, SsAnne21F_Text_MarineroDefeated
	msgbox SsAnne21F_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end
