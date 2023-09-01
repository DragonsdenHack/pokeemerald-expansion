FuchsiaCity_Path_MapScripts::
	.byte 0

FuchsiaCityPath1::
lock     
faceplayer     
msgbox FuchsiaCity_Path_Text_1, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Path_Text_1:
.string "Disfrute del safari y perdone las\n"
.string "molestias.$"



FuchsiaCityPath2::
lock     
faceplayer     
msgbox FuchsiaCity_Path_Text_2, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Path_Text_2:
.string "La ZONA SAFARI fue en origen un\n"
.string "proyecto financiado conjuntamente\l"
.string "por KOGA y un inversor\l"
.string "desconocido, sea quien sea hemos\l"
.string "de darle gracias por todo lo bueno\l"
.string "que este lugar ha dado a FUCSIA.$"


FuchsiaCity_Path_Barrera_Der::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_2
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_2::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Centro::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_3
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_3::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4.1
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Izq::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_4
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_4::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4.2
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Texto_1:
.string "Alto ahí ROCKET, ¿de verdad\n"
	.string "creíste que ibamos a dejarte\l"
	.string "entrar?\l"
	.string "Las leyes del COMITÉ de la LIGA\l"
	.string "son claras: los ROCKET no tienen\l"
	.string "acceso a ningún servicio\l"
	.string "exceptuando el CENTRO POKÉMON,\l"
	.string "¡date media vuelta si no quieres\l"
	.string "problemas!$"

FuchsiaCity_Path_Barrera_Texto_2:
.string "... ...$"

FuchsiaCity_Path_Barrera_Texto_3:
.string "Espera...\n"
	.string "Ese pase...\l"
	.string "¡Déjame verlo!$"

FuchsiaCity_Path_Barrera_Texto_4:
.string "Mmm...\n"
	.string "Firmado por el mismísimo KOGA...\l"
	.string "Parece que todo está correcto,\l"
	.string "debes de ser alguien muy\l"
	.string "influyente para haber obtenido\l"
	.string "este pase, te recomiendo no ir por\l"
	.string "ahí así vestido, ni siquiera para\l"
	.string "hacer la gracia, el gobierno de\l"
	.string "LANCE está tomando cada vez\l"
	.string "medidas más restrictivas en cuanto\l"
	.string "al TEAM ROCKET, y con razón.$"

FuchsiaCity_Path_Barrera_Texto_5:
.string "Que tenga un buen día y perdone la\n"
	.string "confusión.$"

FuchsiaCity_Path_Barrera_Move_1:
walk_in_place_left
step_end

FuchsiaCity_Path_Barrera_Move_2:
walk_slow_down
step_end

FuchsiaCity_Path_Barrera_Move_3:
emote_exclamation_mark
step_end

FuchsiaCity_Path_Barrera_Move_4:
face_right
step_end

FuchsiaCity_Path_Barrera_Move_4.1:
walk_right
step_end

FuchsiaCity_Path_Barrera_Move_4.2:
walk_right
walk_right
step_end
