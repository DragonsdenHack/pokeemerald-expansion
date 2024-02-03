Route12_MapScripts::
	.byte 0

Route12_1::
end


Route12_2::
end


Route12_3::
end


Route12_4::
end


Route12_5::
end


Route12_6::
end


Route12_7::
end


Route12_8::
end


Route12_9::
end


Route12_10::
end


Route12_11::
end


Route12_12::
end


Route12_13::
end


Route12_14::
end



Route12_EventScript_Pescador::
	trainerbattle_single TRAINER_JEFFREY_1, Route12_Text_PescadorIntro, Route12_Text_PescadorDefeated
	msgbox Route12_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route12_EventScript_Pescador2::
	trainerbattle_single TRAINER_DEREK, Route12_Text_Pescador2Intro, Route12_Text_Pescador2Defeated
	msgbox Route12_Pescador2PostBattle, MSGBOX_AUTOCLOSE
	end



Route12_EventScript_Pescador3::
	trainerbattle_single TRAINER_JEFFREY_2, Route12_Text_Pescador3Intro, Route12_Text_Pescador3Defeated
	msgbox Route12_Pescador3PostBattle, MSGBOX_AUTOCLOSE
	end



Route12_EventScript_Pescador4::
	trainerbattle_single TRAINER_JEFFREY_3, Route12_Text_Pescador4Intro, Route12_Text_Pescador4Defeated
	msgbox Route12_Pescador4PostBattle, MSGBOX_AUTOCLOSE
	end



Route12_EventScript_Chico::
	trainerbattle_single TRAINER_KATE_AND_JOY, Route12_Text_ChicoIntro, Route12_Text_ChicoDefeated
	msgbox Route12_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route12_EventScript_Chico2::
	trainerbattle_single TRAINER_DIANA_3, Route12_Text_Chico2Intro, Route12_Text_Chico2Defeated
	msgbox Route12_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route12_EventScript_Pescador5::
	trainerbattle_single TRAINER_VIRGIL, Route12_Text_Pescador5Intro, Route12_Text_Pescador5Defeated
	msgbox Route12_Pescador5PostBattle, MSGBOX_AUTOCLOSE
	end


Route12Documento_100::
msgbox Route12Documento_Text_100, MSGBOX_SIGN   
end

Route12Documento_Text_100:
	.string "RUTA 12\n"
	.string "Al norte PUEBLO LAVANDA$"


Route12_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_4, Route12_Text_Pareja1Intro, Route12_Text_Pareja1Defeated
	msgbox Route12_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route12_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_4, Route12_Text_Pareja2Intro, Route12_Text_Pareja2Defeated
	msgbox Route12_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route12_Activador_Entrada::
compare VAR_UNUSED_0x40F7, 106
goto_if_gt Route12_Activador_Entrada_2
release
end

Route12_Activador_Entrada_2::
lock
delay 10
msgbox Route12_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route12_Activador_Entrada_2_Move_1
waitmovement 0x0
msgbox Route12_Activador_Entrada_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
warp MAP_CULTO2, 2, 18
release
end

Route12_Activador_Entrada_Texto_1:
.string "... ...$"

Route12_Activador_Entrada_Texto_2:
	.string "One of the rocks seems to be hiding a\n"
	.string "path to a small tunnel! Do you want to\l"
	.string "cross it?$"



Route12_Activador_Entrada_2_Move_1:
emote_exclamation_mark
step_end

Route12_Cartel::
msgbox Route12_Cartel_Texto_1 MSGBOX_SIGN
release
end

Route12_Cartel_Texto_1:
.string "ROUTE 12$"
