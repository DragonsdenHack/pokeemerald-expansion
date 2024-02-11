UndergroundPath_12F_MapScripts::
	.byte 0

UndergroundPath_12F_Combates_Moteros::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_12F_Combates_Moteros_Move_1.1
msgbox UndergroundPath_12F_Combates_Moteros_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_1
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_12F_Combates_Moteros_Move_2
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_3
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_3
applymovement 4, UndergroundPath_12F_Combates_Moteros_Move_3
waitmovement 0x0
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_4
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_12F_Combates_Moteros_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_5
waitmovement 0x0
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_6
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_7
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_8
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_12F_Combates_Moteros_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_12F_Combates_Moteros_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_9
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_8
applymovement 4, UndergroundPath_12F_Combates_Moteros_Move_10
waitmovement 0x0
playse MUS_RG_ENCOUNTER_BOY
msgbox UndergroundPath_12F_Combates_Moteros_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_213, UndergroundPath_12F_Combates_Moteros_Texto_12
playse MUS_RG_ENCOUNTER_BOY
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_11
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_214, UndergroundPath_12F_Combates_Moteros_Texto_14
playse MUS_RG_ENCOUNTER_BOY
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_8
waitmovement 0x0
delay 5
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_12F_Combates_Moteros_Move_5
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_12
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_215, UndergroundPath_12F_Combates_Moteros_Texto_16
msgbox UndergroundPath_12F_Combates_Moteros_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox UndergroundPath_12F_Combates_Moteros_Texto_18 MSGBOX_DEFAULT
waitfanfare
msgbox UndergroundPath_12F_Combates_Moteros_Texto_19 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_12F_Combates_Moteros_Texto_20 MSGBOX_AUTOCLOSE
release
setvar VAR_ROUTE105_STATE, 12
end

UndergroundPath_12F_Combates_Moteros_Move_1.1:
walk_in_place_up
step_end

UndergroundPath_12F_Combates_Moteros_Move_12:
walk_down
walk_down
walk_left
walk_left
step_end

UndergroundPath_12F_Combates_Moteros_Move_11:
walk_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_10:
walk_left
walk_down
walk_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_9:
walk_in_place_left
delay_8
walk_in_place_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_8:
walk_in_place_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_7:
face_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_6:
face_left
step_end

UndergroundPath_12F_Combates_Moteros_Move_5:
face_right
step_end

UndergroundPath_12F_Combates_Moteros_Move_4:
walk_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_3:
emote_exclamation_mark
delay_8
face_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_2:
walk_slow_up
walk_slow_up
step_end

UndergroundPath_12F_Combates_Moteros_Move_1:
walk_in_place_left
step_end

UndergroundPath_12F_Combates_Moteros_Texto_1:
.string "Esos ilusos, no saben que podemos estar\n"
	.string "aquí meses. Ahora tendrán que rendir\l"
	.string "cuentas a sus amos de arriba, sobre por\l"
	.string "qué las VÍAS siguen abiertas.$"

UndergroundPath_12F_Combates_Moteros_Texto_2:
.string "Jamás podrán llegar hasta nuestros\n"
	.string "LÍDERES, la única LLAVE que abre la\l"
	.string "puerta principal la tenemos nosotros,\l"
	.string "y…$"

UndergroundPath_12F_Combates_Moteros_Texto_3:
.string "¿Quién eres tú? Esta zona de los\n"
	.string "refugios debería estar sellada.$"

UndergroundPath_12F_Combates_Moteros_Texto_4:
.string "… …$"

UndergroundPath_12F_Combates_Moteros_Texto_5:
.string "S…señor… es {PLAYER}, uno de los\n"
	.string "ROCKET más fuertes.$"

UndergroundPath_12F_Combates_Moteros_Texto_6:
.string "¿{PLAYER}? ¿Y Quieres la LLAVE que\n"
	.string "lleva a la cabina principal?$"

UndergroundPath_12F_Combates_Moteros_Texto_7:
.string "No importa quién seas, me han\n"
	.string "contratado para guardar este lugar y\l"
	.string "es lo que haré.$"

UndergroundPath_12F_Combates_Moteros_Texto_8:
.string "… …$"

UndergroundPath_12F_Combates_Moteros_Texto_9:
.string "Así que has derrotado a los 4\n"
	.string "MOTORISTAS que custodian la entrada.\l"
	.string "No nos compares con esos mamarrachos,\l"
	.string "somos 3, pero podríamos con 10 de esos.$"

UndergroundPath_12F_Combates_Moteros_Texto_10:
.string "¡Demostrádselo!$"

UndergroundPath_12F_Combates_Moteros_Texto_11:
.string "Nos ayudaste derrotando a BRUNO en el\n"
	.string "CAMINO BICIS, pero eso fue hace años…\l"
	.string "los tiempos han cambiado… ¡no\l"
	.string "tendremos piedad contigo!$"

UndergroundPath_12F_Combates_Moteros_Texto_12:
.string "Has seguido mejorando…$"

UndergroundPath_12F_Combates_Moteros_Texto_13:
.string "Creímos que el TEAM ROCKET nos\n"
	.string "apoyaría, ¡pero habéis sido los\l"
	.string "primeros en bajarse los pantalones\l"
	.string "ante el NUEVO ORDEN!$"

UndergroundPath_12F_Combates_Moteros_Texto_14:
.string "Al final, JOHTO sigue dándonos órdenes…$"

UndergroundPath_12F_Combates_Moteros_Texto_15:
.string "¡Ya es suficiente! Si quiero algo bien\n"
	.string "hecho tengo que hacerlo yo mismo, ¡tú y\l"
	.string "tus POKÉMON sufriréis mi ira!$"

UndergroundPath_12F_Combates_Moteros_Texto_16:
.string "¡No! ¡HYDREIGON, SHARPEDO! ¡Seguid!$"

UndergroundPath_12F_Combates_Moteros_Texto_17:
.string "Grrrr… Parece que tienes tu fama bien\n"
	.string "merecida. No me dejas elección.$"

UndergroundPath_12F_Combates_Moteros_Texto_18:
.string "(¡¡{PLAYER} obtuvo la LLAVE CABINA\n"
	.string "NORTE de manos de MOTORISTA!!)$"

UndergroundPath_12F_Combates_Moteros_Texto_19:
.string "Con ella podrás entrar a la CABINA\n"
	.string "principal…$"

UndergroundPath_12F_Combates_Moteros_Texto_20:
.string "Pero te lo advierto: puede que no te\n"
	.string "guste lo que encuentres ahí.$"


UndergroundPath_7F_Activacion_Zona_Norte::
compare VAR_ROUTE105_STATE, 11
goto_if_gt UndergroundPath_7F_Activacion_Zona_Norte_2
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_3 MSGBOX_AUTOCLOSE
release
end

UndergroundPath_7F_Activacion_Zona_Norte_2::
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_1 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_ICE_CRACK
delay 20
playse SE_UNLOCK
setmetatile 52, 69, 0x29C, FALSE
setmetatile 52, 70, 0x29C, FALSE
setmetatile 53, 69, 0x29E, FALSE
setmetatile 53, 70, 0x29E, FALSE
special DrawWholeMapView
release
end

UndergroundPath_7F_Primero_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Primero_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Primero_Motorista_Texto_1:
.string "Puede que no te guste lo que\n"
	.string "encuentres ahí adentro.$"

UndergroundPath_7F_Segundoo_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Segundoo_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Segundoo_Motorista_Texto_1:
.string "Creímos que el TEAM ROCKET nos\n"
	.string "apoyaría, ¡pero habéis sido los\l"
	.string "primeros en bajarse los pantalones\l"
	.string "ante el NUEVO ORDEN!$"

UndergroundPath_7F_Tercero_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Tercero_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Tercero_Motorista_Texto_1:
.string "Al final, JOHTO sigue dándonos órdenes…$"

Pokedex_Set::
lock
setflag FLAG_SYS_POKEDEX_GET
setflag FLAG_SYS_NATIONAL_DEX
special EnableNationalPokedex
msgbox UndergroundPath_7F_Tercero_Motorista_Texto_1 MSGBOX_NPC
release
end
