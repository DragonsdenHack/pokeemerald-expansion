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
.string "Muchos entrenadores expertos en el\n"
.string "tipo agua suelen frecuentar este\l"
.string "lugar.\l"
.string "Dicen que MISTY, de CIUDAD\l"
.string "CELESTE, se entrena por aquí.$"

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
.string "ISLAS ESPUMA$"



Route21Documento_101::
msgbox Route21Documento_Text_101, MSGBOX_SIGN   
end

Route21Documento_Text_101:
.string "ISLAS ESPUMA$"

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
.string "(No estoy de vacaciones para\n"
	.string "ponerme a explorar KANTO, tengo\l"
	.string "cosas más importantes que hacer).$"

Ruta_20_Barrera_Sur_Move_1:
walk_in_place_left
step_end

Ruta_20_Barrera_Sur_Move_2:
walk_slow_right
step_end
