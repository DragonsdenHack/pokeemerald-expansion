SlateportCity_NameRatersHouse_MapScripts::
	.byte 0

SlateportCity_NameRatersHouse_EventScript_NameRater::
	lock
	faceplayer
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
	.string "¡Je, je! ¡Hola!\n"
	.string "¡Soy el INSPECTOR de los MOTES!\p"
	.string "Estaré encantado de evaluar\n"
	.string "el nombre de tu POKÉMON, je, je.$"

SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
	.string "¿Qué nombre de POKÉMON\n"
	.string "quieres que evalúe?$"

SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
	.string "Hmmm… {STR_VAR_1}, ¿a que sí?\n"
	.string "No está mal, no está mal…\p"
	.string "Pero, ¿no crees que podríamos\n"
	.string "encontrar un nombre aún mejor?$"

SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
	.string "Ah, bien. Entonces, ¿cuál debería\n"
	.string "ser el nuevo MOTE?$"

SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
	.string "¡Ya está! ¡A partir de ahora, el nombre\n"
	.string "de este POKÉMON será {STR_VAR_1}!\p"
	.string "Es un nombre mucho mejor que\n"
	.string "el anterior, ¡qué suerte tienes!$"

SlateportCity_NameRatersHouse_Text_DoVisitAgain:
	.string "Muy bien…\n"
	.string "Entonces vuelve cuando quieras.$"

SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
	.string "¡Ya está! ¡A partir de ahora, el nombre\n"
	.string "de este POKÉMON será {STR_VAR_1}!\p"
	.string "Es un nombre mucho mejor que\n"
	.string "el anterior, ¡qué suerte tienes!$"

SlateportCity_NameRatersHouse_Text_MagnificentName:
	.string "Hmmm… {STR_VAR_1}, ¿a que sí?\n"
	.string "No está mal, no está mal…\p"
	.string "Pero, ¿no crees que podríamos\n"
	.string "encontrar un nombre aún mejor?$"

SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
	.string "Espera, espera…\n"
	.string "¡Esto es solo un HUEVO!$"

NameRatersHouse_Trampilla_Move_1:
walk_up
walk_up
step_end

NameRatersHouse_Trampilla_Move_2:
emote_exclamation_mark
step_end

NameRatersHouse_Trampilla_Move_3:
delay_16
delay_16
face_right
step_end

NameRatersHouse_Trampilla_Move_4:
walk_down
walk_right
walk_right
walk_right
walk_up
walk_up
face_left
step_end

NameRatersHouse_Trampilla_Move_5:
walk_in_place_left
step_end

NameRatersHouse_Trampilla_Move_6:
walk_in_place_right
step_end

SlateportCity_NameRatersHouse_Trampilla::
lock
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_1
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_4
waitmovement 0x0
delay 30
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_5
waitmovement 0x0
delay 35
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_4 MSGBOX_AUTOCLOSE
delay 35
playse SE_PIN
applymovement 1, NameRatersHouse_Trampilla_Move_2
waitmovement 0x0
delay 10
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_6 MSGBOX_AUTOCLOSE
delay 25
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_7 MSGBOX_AUTOCLOSE
delay 25
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, NameRatersHouse_Trampilla_Move_2
waitmovement 0x0
delay 10
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_7
applymovement OBJ_EVENT_ID_CAMERA, NameRatersHouse_Trampilla_Move_8
waitmovement 0x0
special RemoveCameraObject
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_15 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NameRatersHouse_Trampilla_Move_10
applymovement 1, NameRatersHouse_Trampilla_Move_9
waitmovement 0x0
special RemoveCameraObject
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_16 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_17 MSGBOX_DEFAULT
waitfanfare
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_11
waitmovement 0x0
setvar VAR_UNUSED_0x40FF, 26
release
end

NameRatersHouse_Trampilla_Move_11:
walk_left
walk_left
walk_left
walk_down
face_right
step_end

NameRatersHouse_Trampilla_Move_10:
walk_left
walk_left
walk_down
walk_down
step_end

NameRatersHouse_Trampilla_Move_9:
walk_up
walk_right
walk_right
walk_right
face_down
step_end

NameRatersHouse_Trampilla_Move_8:
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_right
step_end

NameRatersHouse_Trampilla_Move_7:
delay_16
face_up
step_end

SlateportCity_NameRatersHouse_Trampilla_Texto_1:
	.string "¡Je, je! ¡Hola!\n"
	.string "¡Soy el INSPECTOR de los MOTES!\p"
	.string "Estaré encantado de evaluar\n"
	.string "el nombre de tu POKÉMON, je, je.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_2:
	.string "… …$"

SlateportCity_NameRatersHouse_Trampilla_Texto_3:
	.string "¿Quieres hablar conmigo?\n"
	.string "Claro, dime, jovencito.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_4:
	.string "… …$"

SlateportCity_NameRatersHouse_Trampilla_Texto_5:
	.string "Oh… ¿Dónde has escuchado eso?$"

SlateportCity_NameRatersHouse_Trampilla_Texto_6:
	.string "Llevo aquí más de 30 años, y nadie jamás\n"
	.string "se ha vuelto a interesar por ese lugar.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_7:
	.string "… …$"

SlateportCity_NameRatersHouse_Trampilla_Texto_8:
	.string "¡AGATHA! Entiendo.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_9:
	.string "Entonces, tú eras ese ENTRENADOR\n"
	.string "que tanto aprecia.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_10:
	.string "AGATHA confía en ti,\n"
	.string "yo también lo haré.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_11:
	.string "Si puedo hacer algo por\n"
	.string "ayudarte lo haré, observa.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_12:
	.string "Ese pequeño CEMENTERIO se cerró hace\n"
	.string "más de tres décadas, cuando el primer\l"
	.string "INSPECTOR de MOTES llegó.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_13:
	.string "Las escaleras que llevan a él se\n"
	.string "ocultaron bajo una trampilla, tras\l"
	.string "derribar el GIMNASIO.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_14:
	.string "Ahora están justo debajo\n"
	.string "del MAPA de KANTO.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_15:
	.string "A mi llegada, me dejaron a cargo de la\n"
	.string "LLAVE para abrir la trampilla.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_16:
	.string "Jamás la use, tampoco me interesé por\n"
	.string "saber qué había debajo. Veo que a ti\l"
	.string "sí que te interesa. Toma.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_17:
	.string "¡{PLAYER} obtuvo la LLAVE TRAMPILLA!$"

SlateportCity_NameRatersHouse_Trampilla_Texto_18:
	.string "Ahora es tuya; puedes entrar y salir\n"
	.string "cuando quieras. Es lo menos que puedo\l"
	.string "hacer por ti.$"

Lavender_Motes_Activador_Entrada::
compare VAR_UNUSED_0x40FF, 25
goto_if_gt Lavender_Motes_Activador_Entrada_Pasa
release
end

Lavender_Motes_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Motes_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
delay 10
warp MAP_LAVENDER_SECTA_PASADIZO, 2, 4
delay 10
release
end

Lavender_Motes_Activador_Entrada_Pasa_Text_YesNo:
	.string "Debajo del MAPA está\n"
	.string "el antiguo CEMENTERIO.\l"
	.string "¿Quieres usar la LLAVE TRAMPILLA?$"


