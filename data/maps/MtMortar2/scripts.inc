MtMortar2_MapScripts::
	.byte 0

MtMortar2_2::
end



MtMortar2_3::
end



MtMortar2_4::
end



MtMortar2_5::
end



MtMortar2_6::
end



MtMortar2_7::
end



MtMortar2_8::
end



MtMortar2_9::
end



MtMortar2_EventScript_Necio::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_16, MtMortar2_Text_NecioIntro, MtMortar2_Text_NecioDefeated
	msgbox MtMortar2_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



MtMortar2_EventScript_Karateka::
	trainerbattle_single TRAINER_JAMES_2, MtMortar2_Text_KaratekaIntro, MtMortar2_Text_KaratekaDefeated
	msgbox MtMortar2_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end
