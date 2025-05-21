Route20_MapScripts::
	.byte 0

Route20_1::
end

Route20_2::
end

Route20_3::
end

Route20_4::
end


Route20_5::
end

Route20_6::
end

Route20_7::
lock     
faceplayer     
msgbox Route20_Text_7, MSGBOX_DEFAULT
release     
end

Route20_Text_7:
	.string "Starke TRAINER und WASSER-POKéMON\n"
	.string "sind hier weit verbreitet. Man sagt,\l"
	.string "dass MISTY aus der ARENA von AZURIA\l"
	.string "CITY hier häufig trainiert.$"

Route20_8::
end

Route20_9::
end

Route20_10::
end

Route20_11::
end



Route20_EventScript_Nadador::
	trainerbattle_single TRAINER_JACLYN, Route20_Text_NadadorIntro, Route20_Text_NadadorDefeated
	msgbox Route20_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadador2::
	trainerbattle_single TRAINER_SAMANTHA, Route20_Text_Nadador2Intro, Route20_Text_Nadador2Defeated
	msgbox Route20_Nadador2PostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadadora::
	trainerbattle_single TRAINER_KAREN_1, Route20_Text_NadadoraIntro, Route20_Text_NadadoraDefeated
	msgbox Route20_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadadora2::
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, Route20_Text_Nadadora2Intro, Route20_Text_Nadadora2Defeated
	msgbox Route20_Nadadora2PostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadadora4::
	trainerbattle_single TRAINER_JERRY_1, Route20_Text_Nadadora4Intro, Route20_Text_Nadadora4Defeated
	msgbox Route20_Nadadora4PostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Chica::
	trainerbattle_single TRAINER_MARTHA, Route20_Text_ChicaIntro, Route20_Text_ChicaDefeated
	msgbox Route20_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadador3::
	trainerbattle_single TRAINER_HANNAH, Route20_Text_Nadador3Intro, Route20_Text_Nadador3Defeated
	msgbox Route20_Nadador3PostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadadora3::
	trainerbattle_single TRAINER_JUAN_1, Route20_Text_Nadadora3Intro, Route20_Text_Nadadora3Defeated
	msgbox Route20_Nadadora3PostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Ornitologo::
	trainerbattle_single TRAINER_TIMOTHY_5, Route20_Text_OrnitologoIntro, Route20_Text_OrnitologoDefeated
	msgbox Route20_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Chica2::
	trainerbattle_single TRAINER_DIANA_1, Route20_Text_Chica2Intro, Route20_Text_Chica2Defeated
	msgbox Route20_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route20Documento_100::
msgbox Route20Documento_Text_100, MSGBOX_SIGN   
end

Route20Documento_Text_100:
.string "SEAFOAM ISLANDS$"



Route21Documento_101::
msgbox Route21Documento_Text_101, MSGBOX_SIGN   
end

Route21Documento_Text_101:
.string "SEAFOAM ISLANDS$"

Ruta_20_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 74
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Ruta_20_Barrera_Sur_Move_1
waitmovement 0x0
msgbox Ruta_20_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ruta_20_Barrera_Sur_Move_2
waitmovement 0x0
release
end

Ruta_20_Barrera_Sur_Texto_1:
	.string "-Ich habe im Moment keine Zeit, um\n"
	.string "KANTO zu erkunden.\l"
	.string "Ich habe Wichtigeres zu tun.-$"

Ruta_20_Barrera_Sur_Move_1:
walk_in_place_left
step_end

Ruta_20_Barrera_Sur_Move_2:
walk_slow_right
step_end


Ruta_20_Andra::
lock
playse SE_POKENAV_CALL
delay 20
playse SE_PIN
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Route9_Aviso_Petrel_Move_1
waitmovement 0x0
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
delay 10
msgbox Ruta_20_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Ruta_20_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Ruta_20_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Ruta_20_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Ruta_20_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Ruta_20_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Ruta_20_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Ruta_20_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox Ruta_20_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox Ruta_20_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Ruta_20_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_PC_OFF
waitse
delay 20
setvar VAR_ROUTE130_STATE, 1
release
end

Ruta_20_Andra_Texto_1:
	.string "traducir$"

Ruta_20_Andra_Texto_2:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Ruta_20_Andra_Texto_3:
	.string "traducir$"

Ruta_20_Andra_Texto_4:
	.string "traducir$"

Ruta_20_Andra_Texto_5:
	.string "traducir$"

Ruta_20_Andra_Texto_6:
	.string "traducir$"

Ruta_20_Andra_Texto_7:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Ruta_20_Andra_Texto_8:
	.string "traducir$"

Ruta_20_Andra_Texto_9:
	.string "traducir$"

Ruta_20_Andra_Texto_10:
	.string "traducir$"

Ruta_20_Andra_Texto_11:
	.string "traducir$"
