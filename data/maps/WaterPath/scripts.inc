WaterPath_MapScripts::
	.byte 0

WatherPath1::
end


WatherPath2::
end


WatherPath3::
end


WatherPath4::
end


WatherPath5::
end


WatherPath6::
end


WatherPath7::
end


WatherPath8::
end


WatherPath9::
end


WatherPath10::       
msgbox WaterPath_Text_9, MSGBOX_SIGN
release     
end

WaterPath_Text_9:
	.string "DONPHAN? In KANTO, we have GOLEM and\n"
	.string "RHYDON; no one surpasses them in the\l"
	.string "combination of DEFENSE and ATTACK, not\l"
	.string "even DONPHAN!$"



WatherPath11::       
msgbox WaterPath_Text_11, MSGBOX_SIGN
release     
end

WaterPath_Text_11:
	.string "DONPHAN is of the pure GROUND type,\n"
	.string "giving it an advantage when facing\l"
	.string "classic ROCK and dual-type\l"
	.string "ROCK/GROUND opponents. Additionally,\l"
	.string "it's as tough as they come with a base\l"
	.string "of 120 in both DEFENSE and ATTACK.$"



WaterPath_EventScript_Chica::
	trainerbattle_single TRAINER_HARRISON, WaterPath_Text_ChicaIntro, WaterPath_Text_ChicaDefeated
	msgbox WaterPath_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Nadador::
	trainerbattle_single TRAINER_GRUNT_MT_CHIMNEY_2, WaterPath_Text_NadadorIntro, WaterPath_Text_NadadorDefeated
	msgbox WaterPath_Text_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Nadadora::
	trainerbattle_single TRAINER_CLARENCE, WaterPath_Text_NadadoraIntro, WaterPath_Text_NadadoraDefeated
	msgbox WaterPath_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Chico::
	trainerbattle_single TRAINER_VICTOR, WaterPath_Text_ChicoIntro, WaterPath_Text_ChicoDefeated
	msgbox WaterPath_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Montanero::
	trainerbattle_single TRAINER_NATE, WaterPath_Text_MontaneroIntro, WaterPath_Text_MontaneroDefeated
	msgbox WaterPath_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



WaterPathDocumento_100::
msgbox WaterPathDocumento_Text_100, MSGBOX_SIGN   
end

WaterPathDocumento_Text_100:
    .string "WATER PATH\n"
    .string "Leads to RUIN VALLEY$"



WaterPathDocumento_101::
msgbox WaterPathDocumento_Text_101, MSGBOX_SIGN   
end

WaterPathDocumento_Text_101:
    .string "Wanted!\n"
    .string "The Ultimate Horn!$"



WaterPath_EventScript_Pareja1::
	trainerbattle_single TRAINER_TERRY, WaterPath_Text_Pareja1Intro, WaterPath_Text_Pareja1Defeated
	msgbox WaterPath_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



WaterPath_EventScript_Pareja2::
	trainerbattle_single TRAINER_TERRY, WaterPath_Text_Pareja2Intro, WaterPath_Text_Pareja2Defeated
	msgbox WaterPath_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end
