MtEmber_Entrance_MapScripts::
	.byte 0

MtEmberEntrance_1::
end



MtEmberEntrance_7::
end



MtEmberEntrance_10::
end



MtEmberEntrance_11::
end



MtEmberEntrance_12::
end



MtEmberEntrance_13::
end



MtEmberEntrance_19::
end



MtEmberEntrance_20::
end



MtEmberEntrance_EventScript_Chica::
	trainerbattle_single TRAINER_JONATHAN, MtEmberEntrance_Text_ChicaIntro, MtEmberEntrance_Text_ChicaDefeated
	msgbox MtEmberEntrance_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_EventScript_Chico::
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_5, MtEmberEntrance_Text_ChicoIntro, MtEmberEntrance_Text_ChicoDefeated
	msgbox MtEmberEntrance_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



MtEmberEntrance_EventScript_Luchadora::
	trainerbattle_single TRAINER_BRENDAN_RUSTBORO_MUDKIP, MtEmberEntrance_Text_LuchadoraIntro, MtEmberEntrance_Text_LuchadoraDefeated
	msgbox MtEmberEntrance_Text_LuchadoraPostBattle, MSGBOX_AUTOCLOSE
	end
