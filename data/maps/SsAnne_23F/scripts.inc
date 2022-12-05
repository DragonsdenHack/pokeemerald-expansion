SsAnne_23F_MapScripts::
	.byte 0

SsAnne23F_1::
end



SsAnne23F_2::
end



SsAnne23F_EventScript_Marinero::
	trainerbattle_single TRAINER_WINSTON_3, SsAnne23F_Text_MarineroIntro, SsAnne23F_Text_MarineroDefeated
	msgbox SsAnne23F_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end
