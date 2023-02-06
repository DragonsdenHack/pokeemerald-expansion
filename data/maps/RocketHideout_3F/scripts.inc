RocketHideout_3F_MapScripts::
	.byte 0

RocketHideout3F_1::
lock     
faceplayer     
msgbox RocketHideout3F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_1:
.string "En AZULONA se nos acusa de\n"
.string "contaminar la ciudad, ¡no les\l"
.string "falta razón con la que tenemos\l"
.string "montada aquí dentro!\l"
.string "¡Si supieran lo que tienen bajo el\l"
.string "suelo que pisan!$"



RocketHideout3F_2::
lock     
faceplayer     
msgbox RocketHideout3F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_2:
.string "Nuestro trabajo aquí es muy\n"
.string "simple: crear mayor capacidad de\l"
.string "producción, optimizar y\l"
.string "automatizar lo máximo posible\l"
.string "todos los procesos, lo que tú\l"
.string "hiciste en casa de BILL ha ayudado\l"
.string "mucho a ese propósito, desde\l"
.string "luego.$"



RocketHideout3F_3::
lock     
faceplayer     
msgbox RocketHideout3F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout3F_Text_3:
.string "-Nunca serás un ROCKET de verdad\n"
.string "hasta que hagas a un lado tus\l"
.string "sentimientos y te conviertas en\l"
.string "una fría y sanguinaria máquina de\l"
.string "robar y arruinar entrenadores-.\l"
.string "Esa era la visión antigua que se\l"
.string "tenía del ROCKET promedio, nada\l"
.string "más lejos de la realidad, y simple\l"
.string "propaganda promovida por el actual\l"
.string "gobierno, con todo robo que\l"
.string "llevamos acabo solo estamos\l"
.string "recuperando lo que ya se nos\l"
.string "arrebató antes.$"



RocketHideout3F_4::
end



RocketHideout3F_5::
end

RocketHideout_3F_Maquina_Teletransporte_2::
msgbox RocketHideout_3F_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_3F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_6F, 10, 16
release
end

RocketHideout_3F_Maquina_Teletransporte_YesNo:
.string "La máquina está lista para ser\n"
	.string "usada, ¿quieres teletransportarte\l"
	.string "a la BASE de RUTA 5?$"

RocketHideout_3F_Maquina_Teletransporte_No::
release
end

RocketHideout_3F_Cientifico_Bienvenida::
delay 5
playse SE_PIN
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_3F_Cientifico_Bienvenida_Move_2
delay 10
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_3
waitmovement 0x0
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_3
waitmovement 0x0
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_4
waitmovement 0x0
clearflag FLAG_UNKNOWN_0x363
addobject 4
msgbox RocketHideout_3F_Cientifico_Bienvenida_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_3F_Cientifico_Bienvenida_Move_3
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 37
release
end

RocketHideout_3F_Cientifico_Bienvenida_Texto_1:
.string "¡Vaya!\n"
	.string "¡Tú debes de ser {PLAYER}, hay que\l"
	.string "tener valor para meterse con\l"
	.string "alguien tan protegido como BILL y\l"
	.string "salir airoso!$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_2:
.string "Nuestro LÍDER GIOVANNI se\n"
	.string "encuentra en su despacho en el\l"
	.string "PISO -4, uno más abajo de este,\l"
	.string "dió claras indicaciones de que\l"
	.string "fueras a verle en cuanto llegaras\l"
	.string "aquí.$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_3:
.string "Otra cosa más, para llegar a su\n"
	.string "despacho no podrás acceder por las\l"
	.string "escaleras convencionales, a modo\l"
	.string "de protección el único acceso\l"
	.string "posible es a través del ascensor\l"
	.string "que encontrarás una planta más\l"
	.string "arriba, necesitarás estas llaves\l"
	.string "para hacerlo funcionar.$"

RocketHideout_3F_Cientifico_Bienvenida_Texto_4:
.string "Eso es todo {PLAYER}, GIOVANNI te\n"
	.string "espera.$"

RocketHideout_3F_Cientifico_Bienvenida_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_2:
walk_in_place_right
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_3:
walk_in_place_up
walk_in_place_left
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_4:
face_down
step_end

RocketHideout_3F_Cientifico_Bienvenida_Move_5:
face_up
step_end
