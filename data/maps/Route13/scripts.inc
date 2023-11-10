Route13_MapScripts::
	.byte 0

Route13_1::
end


Route13_2::
end


Route13_3::
end


Route13_4::
end


Route13_5::
end


Route13_6::
end


Route13_7::
end


Route13_8::
end


Route13_9::
end


Route13_10::
end


Route13_11::
end



Route13_EventScript_Chica::
	trainerbattle_single TRAINER_JENNY_4, Route13_Text_ChicaIntro, Route13_Text_ChicaDefeated
	msgbox Route13_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Ornitologo::
	trainerbattle_single TRAINER_BETHANY, Route13_Text_OrnitologoIntro, Route13_Text_OrnitologoDefeated
	msgbox Route13_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Chica2::
	trainerbattle_single TRAINER_JENNY_5, Route13_Text_Chica2Intro, Route13_Text_Chica2Defeated
	msgbox Route13_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Modelo::
	trainerbattle_single TRAINER_NORMAN_1, Route13_Text_ModeloIntro, Route13_Text_ModeloDefeated
	msgbox Route13_ModeloPostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Modelo2::
	trainerbattle_single TRAINER_WINONA_1, Route13_Text_Modelo2Intro, Route13_Text_Modelo2Defeated
	msgbox Route13_Modelo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Chica3::
	trainerbattle_single TRAINER_HEIDI, Route13_Text_Chica3Intro, Route13_Text_Chica3Defeated
	msgbox Route13_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Chica4::
	trainerbattle_single TRAINER_BECKY, Route13_Text_Chica4Intro, Route13_Text_Chica4Defeated
	msgbox Route13_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_ISABEL_1, Route13_Text_Ornitologo2Intro, Route13_Text_Ornitologo2Defeated
	msgbox Route13_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Motorista::
	trainerbattle_single TRAINER_DALTON_1, Route13_Text_MotoristaIntro, Route13_Text_MotoristaDefeated
	msgbox Route13_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route13_EventScript_Ornitologo3::
	trainerbattle_single TRAINER_ISABEL_2, Route13_Text_Ornitologo3Intro, Route13_Text_Ornitologo3Defeated
	msgbox Route13_Ornitologo3PostBattle, MSGBOX_AUTOCLOSE
	end



Route13Documento_100::
msgbox Route13Documento_Text_100, MSGBOX_SIGN   
end

Route13Documento_Text_100:
.string "ROUTE 13\n"
    .string "North to SILENCE BRIDGE$"



Route13Documento_101::
msgbox Route13Documento_Text_101, MSGBOX_SIGN   
end

Route13Documento_Text_101:
.string "TRAINER TIPS\p"
    .string "Use SELECT to switch items in the\n"
    .string "ITEMS window.$"



Route13Documento_102::
msgbox Route13Documento_Text_102, MSGBOX_SIGN   
end

Route13Documento_Text_102:
.string "TRAINER TIPS\p"
    .string "Look, look!\n"
    .string "Look to the left of that post!$"
