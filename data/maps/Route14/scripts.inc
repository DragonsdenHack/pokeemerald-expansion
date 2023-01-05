Route14_MapScripts::
	.byte 0

Route14_1::
end


Route14_2::
end


Route14_3::
end



Route14_5::
end


Route14_6::
end


Route14_7::
end


Route14_8::
end


Route14_9::
end


Route14_10::
end


Route14_11::
end


Route14_12::
end


Route14_13::
end


Route14_14::
end



Route14_EventScript_Ornitologo::
	trainerbattle_single TRAINER_SHELBY_2, Route14_Text_OrnitologoIntro, Route14_Text_OrnitologoDefeated
	msgbox Route14_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_SHELBY_3, Route14_Text_Ornitologo2Intro, Route14_Text_Ornitologo2Defeated
	msgbox Route14_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo3::
	trainerbattle_single TRAINER_SHELBY_4, Route14_Text_Ornitologo3Intro, Route14_Text_Ornitologo3Defeated
	msgbox Route14_Ornitologo3PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo4::
	trainerbattle_single TRAINER_SHELBY_5, Route14_Text_Ornitologo4Intro, Route14_Text_Ornitologo4Defeated
	msgbox Route14_Ornitologo4PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo5::
	trainerbattle_single TRAINER_ISABEL_3, Route14_Text_Ornitologo5Intro, Route14_Text_Ornitologo5Defeated
	msgbox Route14_Ornitologo5PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo6::
	trainerbattle_single TRAINER_ISABEL_4, Route14_Text_Ornitologo6Intro, Route14_Text_Ornitologo6Defeated
	msgbox Route14_Ornitologo6PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista::
	trainerbattle_single TRAINER_BERNIE_4, Route14_Text_MotoristaIntro, Route14_Text_MotoristaDefeated
	msgbox Route14_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_2, Route14_Text_Motorista2Intro, Route14_Text_Motorista2Defeated
	msgbox Route14_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista3::
	trainerbattle_single TRAINER_BERNIE_5, Route14_Text_Motorista3Intro, Route14_Text_Motorista3Defeated
	msgbox Route14_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista4::
	trainerbattle_single TRAINER_BERNIE_3, Route14_Text_Motorista4Intro, Route14_Text_Motorista4Defeated
	msgbox Route14_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route14Documento_100::
msgbox Route14Documento_Text_100, MSGBOX_SIGN   
end

Route14Documento_Text_100:
	.string "RUTA 14\n"
	.string "Al oeste CIUDAD FUCSIA$"



Route14_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_5, Route14_Text_Pareja1Intro, Route14_Text_Pareja1Defeated
	msgbox Route14_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_5, Route14_Text_Pareja2Intro, Route14_Text_Pareja2Defeated
	msgbox Route14_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end
