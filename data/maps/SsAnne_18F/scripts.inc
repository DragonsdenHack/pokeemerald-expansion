SsAnne_18F_MapScripts::
	.byte 0

SsAnne18F_1::
end



SsAnne18F_2::
end



SsAnne18F_3::
end

SsAnne18F_EventScript_Caballero::
	trainerbattle_single TRAINER_MIU_AND_YUKI, SsAnne18F_Text_CaballeroIntro, SsAnne18F_Text_CaballeroDefeated
	msgbox SsAnne18F_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne18F_EventScript_Chica::
	trainerbattle_single TRAINER_CONNIE, SsAnne18F_Text_ChicaIntro, SsAnne18F_Text_ChicaDefeated
	msgbox SsAnne18F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end
