ViasSur5_MapScripts::
	.byte 0


ViasSur5_Combate_Pegaso::
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_1
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasSur5_Combate_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_2
applymovement 2, ViasSur5_Combate_Pegaso_Move_3
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasSur5_Combate_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_4
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_5
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PEGASO_2, ViasSur5_Combate_Pegaso_Texto_7
msgbox ViasSur5_Combate_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
msgbox ViasSur5_Combate_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_6
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_7
waitmovement 0x0
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox ViasSur5_Combate_Pegaso_Texto_10 MSGBOX_AUTOCLOSE
msgbox ViasSur5_Combate_Pegaso_Texto_11 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 2, ViasTren3_Rastro_Zapdos_Move_7
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_6
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_8
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_8
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_13 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_13.1 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_9
waitmovement 0x0
delay 20
applymovement 2, ViasTren3_Rastro_Zapdos_Move_7
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, ViasTren3_Rastro_Zapdos_Move_10
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_16 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_151, ViasSur5_Combate_Pegaso_Texto_17
msgbox ViasSur5_Combate_Pegaso_Texto_18 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_8
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_11
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_20 MSGBOX_AUTOCLOSE
delay 20
playse SE_BALL_THROW
delay 20
playse SE_BALL_OPEN
playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
msgbox ViasSur5_Combate_Pegaso_Texto_21 MSGBOX_DEFAULT
waitmoncry
msgbox ViasSur5_Combate_Pegaso_Texto_22 MSGBOX_AUTOCLOSE
applymovement 2, ViasTren3_Rastro_Zapdos_Move_7
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_24 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 2
playse SE_M_FLY
delay 15
fadescreen 0
delay 30
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_12
waitmovement 0x0
delay 20
playse SE_M_FLY
removeobject 1
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_25 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
setvar VAR_PACIFIDLOG_TOWN_STATE, 4
addvar VAR_UNUSED_0x40F7, 1
delay 20
compare VAR_UNUSED_0x40F7, 183
goto_if_eq Misiones_DLC_Fin_Llamada_Giovanni_Zapdos
release
end

ViasSur5_Combate_Pegaso_Texto_25:
.string "(ZAPDOS PRIMIGENIO VOLÓ HACIA EL\n"
	.string "ESTE)$"

ViasSur5_Combate_Pegaso_Move_12:
face_up
emote_exclamation_mark
step_end

ViasSur5_Combate_Pegaso_Move_11:
walk_slow_left
step_end

ViasSur5_Combate_Pegaso_Texto_13.1:
.string "… …$"

ViasTren3_Rastro_Zapdos_Move_10:
walk_in_place_right
step_end

ViasTren3_Rastro_Zapdos_Move_9:
walk_in_place_left
step_end

ViasSur5_Combate_Pegaso_Move_8:
face_up
step_end

ViasSur5_Combate_Pegaso_Move_7:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

ViasSur5_Combate_Pegaso_Move_6:
walk_left
walk_in_place_up
step_end

ViasSur5_Combate_Pegaso_Move_5:
walk_in_place_down
step_end

ViasSur5_Combate_Pegaso_Move_4:
face_right
step_end

ViasSur5_Combate_Pegaso_Move_3:
face_down
step_end

ViasSur5_Combate_Pegaso_Move_2:
walk_slow_up
step_end

ViasSur5_Combate_Pegaso_Move_1:
walk_in_place_up
step_end

ViasSur5_Combate_Pegaso_Texto_1:
.string "Mis sospechas se confirmaron, así que\n"
	.string "estabas aquí…$"

ViasSur5_Combate_Pegaso_Texto_2:
.string "Te has bastado para poner en apuros a 6\n"
	.string "aves entrenadas al extremo. Tu inmenso\l"
	.string "poder está a la altura de tu leyenda, no\l"
	.string "hay duda.$"

ViasSur5_Combate_Pegaso_Texto_3:
.string "{PLAYER}, te has perdido un combate\n"
	.string "de altos vuelos.$"

ViasSur5_Combate_Pegaso_Texto_4:
.string "Supongo que sientes curiosidad por ver\n"
	.string "qué clase de POKÉMON alberga un lugar\l"
	.string "tan solemne como este.$"

ViasSur5_Combate_Pegaso_Texto_5:
.string "No te preocupes, yo ya tomé mi decisión\n"
	.string "para con mi equipo. Solo quiero que me\l"
	.string "concedas este último combate.$"

ViasSur5_Combate_Pegaso_Texto_6:
.string "¡No te lo pondré tan fácil como la\n"
	.string "primera vez!$"

ViasSur5_Combate_Pegaso_Texto_7:
.string "Tienes el corazón de los grandes\n"
	.string "maestros, no cabe duda.$"

ViasSur5_Combate_Pegaso_Texto_8:
.string "Ya eras todo un maestro cuando\n"
	.string "visitaste MALVA por primera vez, pero\l"
	.string "ahora eres incluso mejor.$"

ViasSur5_Combate_Pegaso_Texto_9:
.string "Observa.$"

ViasSur5_Combate_Pegaso_Texto_10:
.string "El POKÉMON que tienes delante es un\n"
	.string "ZAPDOS, mas no uno cualquiera.$"

ViasSur5_Combate_Pegaso_Texto_11:
.string "A diferencia del resto de ZAPDOS, este\n"
	.string "es único, solo hay uno en el mundo.$"

ViasSur5_Combate_Pegaso_Texto_12:
.string "Si has luchado con FREDO y el MAESTRO\n"
	.string "de ENDRINO, habrás enfrentado a sus\l"
	.string "equivalentes en ARTICUNO y MOLTRES.$"

ViasSur5_Combate_Pegaso_Texto_13:
.string "Son lo que antiguamente llamábamos\n"
	.string "FORMAS PRIMIGENIAS. ZAPDOS era la\l"
	.string "única de las 3 que llevaba décadas en\l"
	.string "paradero desconocido.$"

ViasSur5_Combate_Pegaso_Texto_14:
.string "Sería todo un sueño para mi poder\n"
	.string "manejar a tal POKÉMON, aunque solo sea\l"
	.string "una vez.$"

ViasSur5_Combate_Pegaso_Texto_15:
.string "Bien… veo que me harás el honor. No veo\n"
	.string "mejor rival que tú para tal propósito.$"

ViasSur5_Combate_Pegaso_Texto_16:
.string "¡ZAPDOS! ¡Volemos juntos!$"

ViasSur5_Combate_Pegaso_Texto_17:
.string "¡Ah, magnífico!$"

ViasSur5_Combate_Pegaso_Texto_18:
.string "No estoy decepcionado con el nivel de\n"
	.string "ZAPDOS, más bien impresionado con el\l"
	.string "tuyo.$"

ViasSur5_Combate_Pegaso_Texto_19:
.string "ZAPDOS tiene fama de ser el más\n"
	.string "agresivo de las 3 aves, sin embargo, has\l"
	.string "aplacado su furia con absoluta\l"
	.string "maestría.$"

ViasSur5_Combate_Pegaso_Texto_20:
.string "He visto todo cuanto podría soñar, la\n"
	.string "hora ha llegado.$"

ViasSur5_Combate_Pegaso_Texto_21:
.string "(PEGASO liberó a LANDORUS, THUNDURUS,\n"
	.string "TORNADOS y ENAMORUS)$"

ViasSur5_Combate_Pegaso_Texto_22:
.string "Hemos vivido grandes aventuras y\n"
	.string "aprendido mutuamente. Ahora, POKÉMON\l"
	.string "como estos deben volver a su lugar de\l"
	.string "origen, espero que mi humilde\l"
	.string "aportación les haga mejores, y así\l"
	.string "seguir honrando al TIPO VOLADOR.$"

ViasSur5_Combate_Pegaso_Texto_23:
.string "El GIMNASIO de MALVA será finalmente\n"
	.string "legado a mi hijo. Por mi parte,\l"
	.string "emprenderé un nuevo viaje, con las\l"
	.string "aves que me han acompañado desde\l"
	.string "siempre.$"

ViasSur5_Combate_Pegaso_Texto_24:
.string "Contigo JOHTO está en buenas manos, no\n"
	.string "me cabe duda.$"

Misiones_DLC_Fin_Llamada_Giovanni_Zapdos::
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1
waitmovement 0x0
msgbox Misiones_DLC_Fin_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
msgbox IcePath_Llamada_Giovanni_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_5F, 69, 4
release
end
