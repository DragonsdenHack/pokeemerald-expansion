UnionCaveS2_MapScripts::
	.byte 0

UnionCaveS2_1::
end



UnionCaveS2_2::
end



UnionCaveS2_3::
end



UnionCaveS2_4::
end



UnionCaveS2_5::
end



UnionCaveS2_EventScript_Guay::
	trainerbattle_single TRAINER_HIDEO, UnionCaveS2_Text_GuayIntro, UnionCaveS2_Text_GuayDefeated
	msgbox UnionCaveS2_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end




UnionCaveS2_EventScript_Nadador::
	trainerbattle_single TRAINER_ASHLEY, UnionCaveS2_Text_NadadorIntro, UnionCaveS2_Text_NadadorDefeated
	msgbox UnionCaveS2_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end




UnionCaveS2_EventScript_Necio::
	trainerbattle_single TRAINER_KEIGO, UnionCaveS2_Text_NecioIntro, UnionCaveS2_Text_NecioDefeated
	msgbox UnionCaveS2_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end
