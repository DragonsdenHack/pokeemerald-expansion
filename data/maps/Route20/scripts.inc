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
	.string "Strong TRAINERS and WATER POKÉMON\n"
	.string "are common sights in these parts.\p"
	.string "They say that MISTY of the\n"
	.string "CERULEAN GYM trains here.$"

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
	.string "-I am not on vacation to explore KANTO\n"
	.string "right now, great events are waiting.-$"

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
	.string "ANDRA: Yo, {PLAYER}! How are you doin'?$"

Ruta_20_Andra_Texto_2:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Ruta_20_Andra_Texto_3:
	.string "SEAFOAM ISLANDS already? You kiddin' right?$"

Ruta_20_Andra_Texto_4:
	.string "I've been training a SNEASEL 'till he\n"
	.string "learnt ICE PUNCH.$"

Ruta_20_Andra_Texto_5:
	.string "I'll give you a piece of advice: you\n"
	.string "should make a good use of the FOCUS\l"
	.string "SASH, they sell 'em in the DEEP BASE.$"

Ruta_20_Andra_Texto_6:
	.string "We can kick that BIRD where it hurts.\n"
	.string "And combining that with my URSARING's\l"
	.string "SLASH, that petty BIRD will be no\l"
	.string "match for us!$"

Ruta_20_Andra_Texto_7:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Ruta_20_Andra_Texto_8:
	.string "Be safe, {PLAYER}.$"

Ruta_20_Andra_Texto_9:
	.string "It's only him against all of us, in a 1v1\n"
	.string "he'll turn us into ashes. However, in a\n"
	.string "6v1, in the long game, we have a chance\l"
	.string "to profane a SACRED POKÉMON.$"

Ruta_20_Andra_Texto_10:
	.string "Well, that's it. We're ready to get inside\n"
	.string "that POWER PLANT without being\n"
	.string "spotted.$"

Ruta_20_Andra_Texto_11:
	.string "Good luck!$"
