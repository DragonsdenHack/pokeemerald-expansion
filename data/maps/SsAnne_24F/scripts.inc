SsAnne_24F_MapScripts::
	.byte 0

SsAnne24F_1::
end



SsAnne24F_2::
end



SsAnne24F_EventScript_Marinero::
	trainerbattle_single TRAINER_GARRET, SsAnne24F_Text_MarineroIntro, SsAnne24F_Text_MarineroDefeated
	msgbox SsAnne24F_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne24F_EventScript_Marinero2::
	trainerbattle_single TRAINER_MOLLIE, SsAnne24F_Text_Marinero2Intro, SsAnne24F_Text_Marinero2Defeated
	msgbox SsAnne24F_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end
