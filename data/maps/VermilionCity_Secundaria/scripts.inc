VermilionCity_Secundaria_MapScripts::
	.byte 0

VermilionCity_Secundaria_Moteros_Move_1:
walk_in_place_left
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_2:
walk_in_place_right
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_3:
walk_slow_down
walk_slow_down
step_end

VermilionCity_Secundaria_Moteros_Move_4:
walk_in_place_right
step_end

VermilionCity_Secundaria_Moteros_Move_5:
walk_in_place_left
step_end

VermilionCity_Secundaria_Moteros_Move_6:
walk_right
walk_right
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_7:
emote_exclamation_mark
face_up
step_end

VermilionCity_Secundaria_Moteros_Move_8:
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_9:
face_left
step_end

VermilionCity_Secundaria_Moteros_Move_10:
emote_exclamation_mark
step_end

VermilionCity_Secundaria_Moteros_Move_11:
walk_down
walk_right
walk_right
walk_right
step_end

VermilionCity_Secundaria_Moteros_Move_12:
walk_up
walk_up
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_13:
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_14:
delay_16
face_right
step_end

VermilionCity_Secundaria_Moteros_Move_15:
walk_up
walk_right
walk_right
walk_right
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_16:
walk_in_place_up
step_end

VermilionCity_Secundaria_Moteros_Move_17:
face_up
step_end


VermilionCity_Secundaria_Moteros::
lock
faceplayer
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_2
applymovement 1, VermilionCity_Secundaria_Moteros_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Secundaria_Moteros_Move_3
waitmovement 0x0
special RemoveCameraObject
applymovement 2, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_Secundaria_Moteros_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 3, VermilionCity_Secundaria_Moteros_Move_7
applymovement 2, VermilionCity_Secundaria_Moteros_Move_7
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_6
msgbox VermilionCity_Secundaria_Moteros_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_8
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Secundaria_Moteros_Move_9
waitmovement 0x0
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_Moteros_Move_10
waitmovement 0x0
applymovement 1, VermilionCity_Secundaria_Moteros_Move_14
applymovement 2, VermilionCity_Secundaria_Moteros_Move_15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_11
applymovement 4, VermilionCity_Secundaria_Moteros_Move_12
applymovement 5, VermilionCity_Secundaria_Moteros_Move_13
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_16
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_14
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_11 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_17
waitmovement 0x0
playse 597
applymovement 5, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_12 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_13 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_14 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_15 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_16 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_17 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_18 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_19 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_20 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_21 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_22 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_23 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_24 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_25 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_26 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_27 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_28 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_29 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_30 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_31 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_32 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_33 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_34 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_35 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_36 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_37 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_Moteros_Texto_38 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_87
release
end

VermilionCity_Secundaria_Moteros_Texto_1:
	.string "¡Buah! ¡Qué asco! Estar aquí\n"
	.string "todo el día tirado me aburre.$"

VermilionCity_Secundaria_Moteros_Texto_2:
	.string "¿Te quieres callar, estúpido? ¿Quieres\n"
	.string "salir ahora y que toda la ciudad te vea?$"

VermilionCity_Secundaria_Moteros_Texto_3:
	.string "El JEFE lo dejó claro: de 4 a 6 A.M son\n"
	.string "los únicos momentos en los que sacar la\l"
	.string "mercancía.$"

VermilionCity_Secundaria_Moteros_Texto_4:
	.string "Ese es tu único trabajo, y te estás\n"
	.string "forrando con ello sin hacer nada.$"

VermilionCity_Secundaria_Moteros_Texto_5:
	.string "En eso tienes razón. Los pijos de\n"
	.string "CIUDAD TRIGAL se vuelven locos con\l"
	.string "esas mentas.$"

VermilionCity_Secundaria_Moteros_Texto_6:
	.string "En JOHTO apenas existen, y nosotros\n"
	.string "nos aprovechamos de ello.$"

VermilionCity_Secundaria_Moteros_Texto_7:
	.string "¿Quién anda ahí?$"

VermilionCity_Secundaria_Moteros_Texto_8:
	.string "Jo, jo, jo. Algo de diversión al fin.$"

VermilionCity_Secundaria_Moteros_Texto_9:
	.string "Oh, no… Hay más de los que pensaba.$"

VermilionCity_Secundaria_Moteros_Texto_10:
	.string "No dejéis que salgan. Nosotros nos\n"
	.string "encargamos del CAZABICHOS.$"

VermilionCity_Secundaria_Moteros_Texto_11:
	.string "Vosotros encargaos del ROCKET.$"

VermilionCity_Secundaria_Moteros_Texto_12:
	.string "¡Al fin! ¡Ya estaba harto de leer\n"
	.string "libros y pasear por el jardín!$"

VermilionCity_Secundaria_Moteros_Texto_13:
	.string "¡Lo mío es envenenar oponentes!$"

VermilionCity_Secundaria_Moteros_Texto_14:
	.string "¿Ya está?$"

VermilionCity_Secundaria_Moteros_Texto_15:
	.string "¡Inútil! Déjamelo a mí.$"

VermilionCity_Secundaria_Moteros_Texto_16:
	.string "¡Maldición! ¿Cómo he podido ser\n"
	.string "derrotado por un CAZABICHOS?$"

VermilionCity_Secundaria_Moteros_Texto_17:
	.string "Yo le someteré.$"

VermilionCity_Secundaria_Moteros_Texto_18:
	.string "¡Eh, tú!$"

VermilionCity_Secundaria_Moteros_Texto_19:
	.string "¿Vas a pelear o qué?$"

VermilionCity_Secundaria_Moteros_Texto_20:
	.string "Los ROCKET no conocen los POKÉMON\n"
	.string "de JOHTO. ¡Voy a sorprenderte!$"

VermilionCity_Secundaria_Moteros_Texto_21:
	.string "¡Tú no eres de KANTO!$"

VermilionCity_Secundaria_Moteros_Texto_22:
	.string "¡BEEDRILL! ¡No!$"

VermilionCity_Secundaria_Moteros_Texto_23:
	.string "Has llegado hasta donde pudiste.\n"
	.string "Ahora sufrirás las consecuenc…$"

VermilionCity_Secundaria_Moteros_Texto_24:
	.string "No sois más que unos incompetentes.\n"
	.string "Derrotados por un ROCKET y un\l"
	.string "CAZABICHOS.$"

VermilionCity_Secundaria_Moteros_Texto_25:
	.string "¡Tendré que ocuparme yo mismo!$"

VermilionCity_Secundaria_Moteros_Texto_26:
	.string "¡No puedes ser un ROCKET!$"

VermilionCity_Secundaria_Moteros_Texto_27:
	.string "Maldición… Esto no le va\n"
	.string "a gustar al JEFE.$"

VermilionCity_Secundaria_Moteros_Texto_28:
	.string "¿Qué? ¿Nos echas de aquí?$"

VermilionCity_Secundaria_Moteros_Texto_29:
	.string "… …$"

VermilionCity_Secundaria_Moteros_Texto_30:
	.string "Ya lo habéis oído. ¡Todos fuera!\n"
	.string "¡Y que no os vean!$"

VermilionCity_Secundaria_Moteros_Texto_31:
	.string "En cuanto a ti, ya hablaremos.$"

VermilionCity_Secundaria_Moteros_Texto_32:
	.string "Los POKÉMON de nuestro\n"
	.string "JEFE son terribles.$"

VermilionCity_Secundaria_Moteros_Texto_33:
	.string "Cuando te haya derrotado volveremos\n"
	.string "aquí y pagarás por lo que has hecho.$"

VermilionCity_Secundaria_Moteros_Texto_34:
	.string "Espera.$"

VermilionCity_Secundaria_Moteros_Texto_35:
	.string "Ahora tus POKÉMON están en forma de\n"
	.string "nuevo.$"

VermilionCity_Secundaria_Moteros_Texto_36:
	.string "…$"

VermilionCity_Secundaria_Moteros_Texto_37:
	.string "Detrás de esa puerta está mi jardín.$"

VermilionCity_Secundaria_Moteros_Texto_38:
	.string "Voy a recuperar lo que es mío.$"
