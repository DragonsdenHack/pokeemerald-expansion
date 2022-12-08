Route15_MapScripts::
	.byte 0

Route15_1::
end

Route15_2::
end

Route15_3::
end

Route15_4::
end


Route15_5::
end

Route15_6::
end

Route15_7::
end

Route15_8::
end

Route15_9::
end

Route15_10::
end

Route15_11::
end

Route15_12::
end

Route15_13::
end



Route15_EventScript_Motorista::
	trainerbattle_single TRAINER_DALTON_3, Route15_Text_MotoristaIntro, Route15_Text_MotoristaDefeated
	msgbox Route15_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_4, Route15_Text_Motorista2Intro, Route15_Text_Motorista2Defeated
	msgbox Route15_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella::
	trainerbattle_single TRAINER_TED, Route15_Text_BellaIntro, Route15_Text_BellaDefeated
	msgbox Route15_BellaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella2::
	trainerbattle_single TRAINER_PAUL, Route15_Text_Bella2Intro, Route15_Text_Bella2Defeated
	msgbox Route15_Bella2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica::
	trainerbattle_single TRAINER_DIANA_5, Route15_Text_ChicaIntro, Route15_Text_ChicaDefeated
	msgbox Route15_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo::
	trainerbattle_single TRAINER_TIMOTHY_1, Route15_Text_OrnitologoIntro, Route15_Text_OrnitologoDefeated
	msgbox Route15_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_ISABEL_5, Route15_Text_Ornitologo2Intro, Route15_Text_Ornitologo2Defeated
	msgbox Route15_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica2::
	trainerbattle_single TRAINER_DIANA_4, Route15_Text_Chica2Intro, Route15_Text_Chica2Defeated
	msgbox Route15_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica3::
	trainerbattle_single TRAINER_AMY_AND_LIV_2, Route15_Text_Chica3Intro, Route15_Text_Chica3Defeated
	msgbox Route15_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica4::
	trainerbattle_single TRAINER_AMY_AND_LIV_1, Route15_Text_Chica4Intro, Route15_Text_Chica4Defeated
	msgbox Route15_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end
