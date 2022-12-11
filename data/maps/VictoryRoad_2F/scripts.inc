VictoryRoad_2F_MapScripts::
	.byte 0

VictoryRoad2F_1::
end



VictoryRoad2F_2::
end



VictoryRoad2F_3::
end



VictoryRoad2F_4::
end



VictoryRoad2F_5::
end



VictoryRoad2F_6::
end



VictoryRoad2F_7::
end



VictoryRoad2F_10::
end



VictoryRoad2F_11::
end



VictoryRoad2F_13::
end



VictoryRoad2F_EventScript_Necio::
	trainerbattle_single TRAINER_SANTIAGO, VictoryRoad2F_Text_NecioIntro, VictoryRoad2F_Text_NecioDefeated
	msgbox VictoryRoad2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Karateka::
	trainerbattle_single TRAINER_JAYLEN, VictoryRoad2F_Text_KaratekaIntro, VictoryRoad2F_Text_KaratekaDefeated
	msgbox VictoryRoad2F_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico::
	trainerbattle_single TRAINER_ANNA_AND_MEG_2, VictoryRoad2F_Text_ChicoIntro, VictoryRoad2F_Text_ChicoDefeated
	msgbox VictoryRoad2F_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico2::
	trainerbattle_single TRAINER_ANNA_AND_MEG_5, VictoryRoad2F_Text_Chico2Intro, VictoryRoad2F_Text_Chico2Defeated
	msgbox VictoryRoad2F_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Domador::
	trainerbattle_single TRAINER_VICTORIA, VictoryRoad2F_Text_DomadorIntro, VictoryRoad2F_Text_DomadorDefeated
	msgbox VictoryRoad2F_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end
