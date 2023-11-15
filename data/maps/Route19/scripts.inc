Route19_MapScripts::
	.byte 0

Route19_1::
end

Route19_2::
end

Route19_3::
end

Route19_4::
end


Route19_5::
end

Route19_6::
end

Route19_7::
end

Route19_8::
end

Route19_9::
end

Route19_10::
end

Route19_11::
end

Route19_12::
end



Route19_EventScript_Nadador::
	trainerbattle_single TRAINER_WILLIAM, Route19_Text_NadadorIntro, Route19_Text_NadadorDefeated
	msgbox Route19_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadador2::
	trainerbattle_single TRAINER_JOSHUA, Route19_Text_Nadador2Intro, Route19_Text_Nadador2Defeated
	msgbox Route19_Nadador2PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadador3::
	trainerbattle_single TRAINER_CAMERON_4, Route19_Text_Nadador3Intro, Route19_Text_Nadador3Defeated
	msgbox Route19_Nadador3PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadador4::
	trainerbattle_single TRAINER_CAMERON_3, Route19_Text_Nadador4Intro, Route19_Text_Nadador4Defeated
	msgbox Route19_Nadador4PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadador5::
	trainerbattle_single TRAINER_CAMERON_2, Route19_Text_Nadador5Intro, Route19_Text_Nadador5Defeated
	msgbox Route19_Nadador5PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadador6::
	trainerbattle_single TRAINER_CAMERON_1, Route19_Text_Nadador6Intro, Route19_Text_Nadador6Defeated
	msgbox Route19_Nadador6PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadador7::
	trainerbattle_single TRAINER_CAMERON_5, Route19_Text_Nadador7Intro, Route19_Text_Nadador7Defeated
	msgbox Route19_Nadador7PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadadora::
	trainerbattle_single TRAINER_JERRY_3, Route19_Text_NadadoraIntro, Route19_Text_NadadoraDefeated
	msgbox Route19_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadadora2::
	trainerbattle_single TRAINER_JERRY_5, Route19_Text_Nadadora2Intro, Route19_Text_Nadadora2Defeated
	msgbox Route19_Nadadora2PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Nadadora3::
	trainerbattle_single TRAINER_JERRY_4, Route19_Text_Nadadora3Intro, Route19_Text_Nadadora3Defeated
	msgbox Route19_Nadadora3PostBattle, MSGBOX_AUTOCLOSE
	end



Route19Documento_100::
msgbox Route19Documento_Text_100, MSGBOX_SIGN   
end

Route19Documento_Text_100:
.string "SEA ROUTE 19\n"
    .string "FUCHSIA CITY - SEAFOAM ISLANDS$"



Route19_EventScript_Pareja1::
	trainerbattle_single TRAINER_EDMOND, Route19_Text_Pareja1Intro, Route19_Text_Pareja1Defeated
	msgbox Route19_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route19_EventScript_Pareja2::
	trainerbattle_single TRAINER_EDMOND, Route19_Text_Pareja2Intro, Route19_Text_Pareja2Defeated
	msgbox Route19_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route19_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 66
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox Route19_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

Route19_Barrera_Sur_Texto_1:
.string "(Debería ayudar a KOGA y\n"
	.string "después buscarle por las afueras\l"
	.string "de FUCSIA).$"
