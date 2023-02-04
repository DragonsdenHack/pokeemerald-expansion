Route9_MapScripts::
	.byte 0

Route9_1::
end


Route9_2::
end


Route9_3::
end


Route9_4::
end


Route9_5::
end


Route9_6::
end


Route9_7::
end


Route9_8::
end


Route9_9::
end


Route9_10::
end


Route9_11::
end


Route9_12::
end


Route9_EventScript_Chica::
	trainerbattle_single TRAINER_TONY_1, Route9_Text_ChicaIntro, Route9_Text_ChicaDefeated
	msgbox Route9_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Hiker::
	trainerbattle_single TRAINER_JENNY_3, Route9_Text_HikerIntro, Route9_Text_HikerDefeated
	msgbox Route9_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Chico::
	trainerbattle_single TRAINER_STEVE_4, Route9_Text_ChicoIntro, Route9_Text_ChicoDefeated
	msgbox Route9_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Cazabichos::
	trainerbattle_single TRAINER_DAPHNE, Route9_Text_CazabichosIntro, Route9_Text_CazabichosDefeated
	msgbox Route9_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Chico2::
	trainerbattle_single TRAINER_STEVE_5, Route9_Text_Chico2Intro, Route9_Text_Chico2Defeated
	msgbox Route9_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_2, Route9_Text_Cazabichos2Intro, Route9_Text_Cazabichos2Defeated
	msgbox Route9_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Hiker2::
	trainerbattle_single TRAINER_NOB_5, Route9_Text_Hiker2Intro, Route9_Text_Hiker2Defeated
	msgbox Route9_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Chica2::
	trainerbattle_single TRAINER_JEROME, Route9_Text_Chica2Intro, Route9_Text_Chica2Defeated
	msgbox Route9_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route9_EventScript_Hiker3::
	trainerbattle_single TRAINER_NOB_4, Route9_Text_Hiker3Intro, Route9_Text_Hiker3Defeated
	msgbox Route9_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end



Route9Documento_100::
msgbox Route9Documento_Text_100, MSGBOX_SIGN   
end

Route9Documento_Text_100:
	.string "RUTA 9\n"
	.string "CIUDAD CELESTE - TÚNEL ROCA$"

Route9_Aviso_Petrel::
playse SE_POKENAV_ON
delay 20
playse SE_PIN
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Route9_Aviso_Petrel_Move_1
waitmovement 0x0
msgbox Route9_Aviso_Petrel_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_POKENAV_OFF
delay 20
setvar VAR_UNUSED_0x40F7, 35
release
end

Route9_Aviso_Petrel_Texto_1:
.string "PETREL: ¿{PLAYER}?\n"
	.string "El sistema de teletransporte está\l"
	.string "listo para ser puesto en práctica,\l"
	.string "vuelve al cuartel inmediatamente y\l"
	.string "prepárate para tu traslado\l"
	.string "inmediato a la base de CIUDAD\l"
	.string "AZULONA.$"

Route9_Aviso_Petrel_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end
