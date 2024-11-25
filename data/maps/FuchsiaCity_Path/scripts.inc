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
.string "por KOGA y un inversor desconocido.\l"
.string "Sea quien sea, hemos de darle gracias\l"
.string "por todo lo bueno que este lugar ha\l"
.string "dado a CIUDAD FUCSIA.$"


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
.string "Alto ahí, ROCKET.\n"
	.string "¿De verdad creíste que ibamos\l"
	.string "a dejarte entrar?\l"
	.string "Las leyes del COMITÉ de la LIGA\l"
	.string "son claras: los ROCKET no tienen\l"
	.string "acceso a ningún servicio, a excepción\l"
	.string "del CENTRO POKÉMON.\l"
	.string "¡Date media vuelta si no\l"
	.string "quieres problemas!$"

FuchsiaCity_Path_Barrera_Texto_2:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

FuchsiaCity_Path_Barrera_Texto_3:
.string "Espera{PAUSE 15}…{PAUSE 15}\n"
	.string "Ese pase{PAUSE 15}…{PAUSE 15}\l"
	.string "¡Déjame verlo!$"

FuchsiaCity_Path_Barrera_Texto_4:
.string "Mmm{PAUSE 15}…{PAUSE 15}\n"
	.string "Firmado por el mismísimo KOGA{PAUSE 15}…{PAUSE 15}\l"
	.string "Parece que todo está correcto,\l"
	.string "debes de ser alguien muy influyente\l"
	.string "para haberlo obtenido.\l"
	.string "Te recomiendo no ir por ahí así vestido,\l"
	.string "ni siquiera para hacer la gracia: el\l"
	.string "gobierno de LANCE está tomando cada vez\l"
	.string "medidas más restrictivas en cuanto\l"
	.string "al TEAM ROCKET, y con razón.$"

FuchsiaCity_Path_Barrera_Texto_5:
.string "Que tenga un buen día, y\n"
	.string "perdone la confusión.$"

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
