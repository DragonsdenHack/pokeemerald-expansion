UnionCaveS1_MapScripts::
	.byte 0

UnionCaveS1_1::
end



UnionCaveS1_2::
end



UnionCaveS1_4::
end

Ruinas_EventScript_Montanero::
	trainerbattle_single TRAINER_FLINT, Ruinas_Text_MontaneroIntro, Ruinas_Text_MontaneroDefeated
	msgbox Ruinas_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



UnionCaveS1_EventScript_Montanero::
	trainerbattle_single TRAINER_DANIELLE, UnionCaveS1_Text_MontaneroIntro, UnionCaveS1_Text_MontaneroDefeated
	msgbox UnionCaveS1_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end
