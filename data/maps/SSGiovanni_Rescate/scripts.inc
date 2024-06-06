SSGiovanni_Rescate_MapScripts::
	.byte 0

SSGiovanni_Rescate_Escena_Move_1:
walk_in_place_right
step_end

SSGiovanni_Rescate_Escena_Move_2:
walk_in_place_up
step_end

SSGiovanni_Rescate_Escena_Move_3:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
step_end

SSGiovanni_Rescate_Escena_Move_3.1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
walk_slow_down
step_end

SSGiovanni_Rescate_Escena_Move_4:
face_down
step_end

SSGiovanni_Rescate_Escena_Move_5:
face_right
step_end

SSGiovanni_Rescate_Escena_Move_6:
walk_slow_right
step_end

SSGiovanni_Rescate_Escena_Move_7:
face_left
step_end

SSGiovanni_Rescate_Escena_Move_8:
walk_slow_left
step_end

SSGiovanni_Rescate_Escena_Move_9:
walk_in_place_down
step_end

SSGiovanni_Rescate_Escena_Move_10:
walk_slow_right
walk_slow_right
walk_slow_right
step_end

SSGiovanni_Rescate_Escena_Move_11:
walk_right
walk_right
walk_right
walk_right
walk_up
face_left
step_end

SSGiovanni_Rescate_Escena_Move_12:
face_up
step_end

SSGiovanni_Rescate_Escena_Move_13:
walk_slow_up
step_end

SSGiovanni_Rescate_Escena_Move_14:
walk_slow_down
step_end

SSGiovanni_Rescate_Escena_Move_15:
walk_right
walk_right
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
face_right
step_end

SSGiovanni_Rescate_Escena_Move_16:
delay_16
delay_16
face_right
delay_16
delay_16
face_down
step_end

SSGiovanni_Rescate_Escena_Move_17:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

SSGiovanni_Rescate_Escena_Move_18:
walk_up
step_end

SSGiovanni_Rescate_Escena::
lock
playse SE_BREAKABLE_DOOR
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Rescate_Escena_Move_1
applymovement 2, SSGiovanni_Rescate_Escena_Move_1
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_1 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSGiovanni_Rescate_Escena_Move_3
waitmovement 0x0
special RemoveCameraObject
msgbox SSGiovanni_Rescate_Escena_Texto_2 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, SSGiovanni_Rescate_Escena_Move_2
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_4
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, SSGiovanni_Rescate_Escena_Move_5
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_6
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Rescate_Escena_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Rescate_Escena_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_6
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_7
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_8
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, SSGiovanni_Rescate_Escena_Move_7
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, SSGiovanni_Rescate_Escena_Move_5
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_9
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_14 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSGiovanni_Rescate_Escena_Move_3.1
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Rescate_Escena_Move_10
waitmovement 0x0
applymovement 1, SSGiovanni_Rescate_Escena_Move_7
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_4
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Rescate_Escena_Move_11
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Rescate_Escena_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_12
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_13
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Rescate_Escena_Move_14.1
waitmovement 0x0
delay 10
msgbox SSGiovanni_Rescate_Escena_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_14
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_21 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Rescate_Escena_Move_16
applymovement 2, SSGiovanni_Rescate_Escena_Move_16
applymovement 1, SSGiovanni_Rescate_Escena_Move_15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSGiovanni_Rescate_Escena_Move_17
waitmovement 0x0
special RemoveCameraObject
msgbox SSGiovanni_Rescate_Escena_Texto_22 MSGBOX_AUTOCLOSE
delay 20
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 20
playse SE_SELECT
delay 10
msgbox SSGiovanni_Rescate_Escena_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Rescate_Escena_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Rescate_Escena_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Rescate_Escena_Texto_26 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Rescate_Escena_Move_14.1
waitmovement 0x0
delay 10
applymovement 1, SSGiovanni_Rescate_Escena_Move_18
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_27 MSGBOX_AUTOCLOSE
applymovement 1, SSGiovanni_Rescate_Escena_Move_18
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Rescate_Escena_Move_7
applymovement 1, SSGiovanni_Rescate_Escena_Move_7
applymovement 2, SSGiovanni_Rescate_Escena_Move_14
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_29 MSGBOX_AUTOCLOSE
applymovement 2, SSGiovanni_Rescate_Escena_Move_19
waitmovement 0x0
msgbox SSGiovanni_Rescate_Escena_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Rescate_Escena_Texto_31 MSGBOX_AUTOCLOSE
applymovement 2, SSGiovanni_Rescate_Escena_Move_20
applymovement 1, SSGiovanni_Rescate_Escena_Move_21
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSGiovanni_Rescate_Escena_Move_17.1
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HOENN_684
setflag FLAG_HOENN_7
removeobject 2
addobject 8
setvar VAR_UNUSED_0x40F8, 4
release
end

SSGiovanni_Rescate_Escena_Move_21:
walk_right
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
face_down
step_end

SSGiovanni_Rescate_Escena_Move_20:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

SSGiovanni_Rescate_Escena_Move_17.1:
delay_16
delay_8
walk_slow_up
walk_slow_up
walk_slow_up
step_end

SSGiovanni_Rescate_Escena_Move_19:
walk_right
walk_down
walk_down
step_end

SSGiovanni_Rescate_Escena_Move_14.1:
emote_exclamation_mark
step_end

SSGiovanni_Rescate_Escena_Texto_1:
	.string "ARIANA: ¡Dijiste que te\n"
	.string "encargarías de él!$"

SSGiovanni_Rescate_Escena_Texto_2:
	.string "GIOVANNI: Eso dije, pero en última\n"
	.string "instancia, debo respetar su voluntad.$"

SSGiovanni_Rescate_Escena_Texto_3:
	.string "ARIANA: ¡Por todos los dioses de KANTO!\n"
	.string "¡Tiene 10 años!$"

SSGiovanni_Rescate_Escena_Texto_4:
	.string "GIOVANNI: Hoy en día, edad más que\n"
	.string "suficiente para iniciar una fantástica\l"
	.string "aventura junto con sus POKÉMON, lejos\l"
	.string "de nuestros problemas.$"

SSGiovanni_Rescate_Escena_Texto_5:
	.string "No puedes juzgar las acciones de uno\n"
	.string "sin entender el mundo que le rodea.$"

SSGiovanni_Rescate_Escena_Texto_6:
	.string "Hasta hace poco{PAUSE 15}…{PAUSE 15} tú misma tenías una\n"
	.string "visión totalmente alejada de la\l"
	.string "realidad respecto a HOENN y DEVON, ¿no\l"
	.string "es así?$"

SSGiovanni_Rescate_Escena_Texto_7:
	.string "ARIANA: {PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

SSGiovanni_Rescate_Escena_Texto_8:
	.string "GIOVANNI: Sé lo que pretenden, ¿sabes\n"
	.string "por qué? Porque nosotros hicimos lo\l"
	.string "mismo para desbancar a LANCE: ocultar\l"
	.string "gran parte de nuestra realidad.$"

SSGiovanni_Rescate_Escena_Texto_9:
	.string "La cuestión es, ¿qué harás tú, ARIANA?$"

SSGiovanni_Rescate_Escena_Texto_10:
	.string "¿Regresarás al TEAM ROCKET, o\n"
	.string "esperarás sin más a que DEVON ajuste\l"
	.string "cuentas contigo?$"

SSGiovanni_Rescate_Escena_Texto_11:
	.string "Ya no tienes nada que temer. La\n"
	.string "guerra acabó hace años.$"

SSGiovanni_Rescate_Escena_Texto_12:
	.string "ARIANA: No para ti. En tu posición,\n"
	.string "siempre habrá una guerra por librar. Tú\l"
	.string "lo sabes bien.$"

SSGiovanni_Rescate_Escena_Texto_13:
	.string "Pero, como de costumbre, me dejas sin\n"
	.string "elección: Volveré al TEAM ROCKET.$"

SSGiovanni_Rescate_Escena_Texto_14:
	.string "GIOVANNI: No esperaba menos.$"

SSGiovanni_Rescate_Escena_Texto_15:
	.string "{PLAYER}, pasa.$"

SSGiovanni_Rescate_Escena_Texto_16:
	.string "Gracias a vuestra actuación, ahora\n"
	.string "sabemos que uno de los objetivos de\l"
	.string "DEVON es REGIGIGAS.$"

SSGiovanni_Rescate_Escena_Texto_17:
	.string "Lo hemos investigado a fondo.\n"
	.string "Aparentemente está en una forma muy\l"
	.string "limitada pero, a pesar de ello, sus\l"
	.string "números son ya de LEGENDARIO MAYOR.$"

SSGiovanni_Rescate_Escena_Texto_18:
	.string "Deberemos estar pendientes a un poder\n"
	.string "de esa magnitud; tratar de prever el\l"
	.string "próximo movimiento de DEVON pasará a\l"
	.string "ser una prioridad.$"

SSGiovanni_Rescate_Escena_Texto_19:
	.string "Solo se me ocurre una persona que pueda\n"
	.string "aportar información valiosa… ANDRA.$"

SSGiovanni_Rescate_Escena_Texto_20:
	.string "Ella ha viajado por todo HOENN,\n"
	.string "encontró y derrotó a cada uno de los\l"
	.string "REGIS.$"

SSGiovanni_Rescate_Escena_Texto_21:
	.string "Sé que lleva meses sin dar señales de\n"
	.string "vida, pero{PAUSE 5}…{PAUSE 5}$"

SSGiovanni_Rescate_Escena_Texto_22:
	.string "Su FICHA de ENTRENADOR sigue\n"
	.string "vinculada a nuestra base de datos.$"

SSGiovanni_Rescate_Escena_Texto_23:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

SSGiovanni_Rescate_Escena_Texto_24:
	.string "Esto es lo que quería comprobar{PAUSE 25}…{PAUSE 25} el\n"
	.string "número de MEDALLAS de HOENN se ha ido\l"
	.string "actualizando en su FICHA.$"

SSGiovanni_Rescate_Escena_Texto_25:
	.string "ARRECÍPOLIS, ALGARIA{PAUSE 25}…{PAUSE 25} esta última de\n"
	.string "hace solo unos días{PAUSE 5}…{PAUSE 5}$"

SSGiovanni_Rescate_Escena_Texto_26:
	.string "Únicamente le queda una MEDALLA por\n"
	.string "ganar en HOENN: la de CIUDAD ARBORADA.\l"
	.string "Es muy probable que pase por ese lugar\l"
	.string "en los próximos días.$"

SSGiovanni_Rescate_Escena_Texto_27:
	.string "¡{PLAYER}! Tu próximo destino es\n"
	.string "claro. Debes llegar a CIUDAD ARBORADA\l"
	.string "antes que ANDRA.$"

SSGiovanni_Rescate_Escena_Texto_28:
	.string "Esperarla ahí, y pedirle ayuda.$"

SSGiovanni_Rescate_Escena_Texto_29:
	.string "ARIANA: Es suficiente. {PLAYER} y yo\n"
	.string "necesitamos descansar.$"

SSGiovanni_Rescate_Escena_Texto_30:
	.string "Si te soy sincera{PAUSE 25}…{PAUSE 25} estoy expectante\n"
	.string "por volver a ver KANTO.$"

SSGiovanni_Rescate_Escena_Texto_31:
	.string "GIOVANNI: Ha cambiado desde entonces,\n"
	.string "pero sigue siendo reconocible.$"

SSGiovanni_Rescate_Dialogo_Giovanni::
lock
faceplayer
msgbox SSGiovanni_Rescate_Dialogo_Giovanni_Texto_1 MSGBOX_NPC
release
end

SSGiovanni_Rescate_Dialogo_Giovanni_Texto_1:
	.string "Deberías descansar también,\n"
	.string "{PLAYER}. Quedan muchas horas hasta\l"
	.string "llegar a HOENN. Así, cuando llegues\l"
	.string "estarás ya fresco para emprender rumbo\l"
	.string "a ARBORADA.$"

SSGiovanni_Rescate_Dialogo_Ariana::
lock
msgbox SSGiovanni_Rescate_Dialogo_Ariana_Texto_1 MSGBOX_SIGN
release
end

SSGiovanni_Rescate_Dialogo_Ariana_Texto_1:
	.string "Está durmiendo. Parece estar\n"
	.string "especialmente tranquila.$"

SSGiovanni_Rescate_Primer_Recluta::
lock
faceplayer
msgbox SSGiovanni_Rescate_Primer_Recluta_Texto_1 MSGBOX_AUTOCLOSE
release
end

SSGiovanni_Rescate_Primer_Recluta_Texto_1:
	.string "Haremos de guardia personal mientras\n"
	.string "usted descansa, SIR. No tiene nada que\l"
	.string "temer.$"

SSGiovanni_Rescate_Segundo_Recluta::
lock
faceplayer
msgbox SSGiovanni_Rescate_Segundo_Recluta_Texto_1 MSGBOX_AUTOCLOSE
release
end

SSGiovanni_Rescate_Segundo_Recluta_Texto_1:
	.string "Esa conversación entre ARIANA y\n"
	.string "GIOVANNI iba a ocurrir antes o después.\l"
	.string "No puedo evitar escucharla.$"

SSGiovanni_Rescate_Tercer_Recluta::
lock
faceplayer
msgbox SSGiovanni_Rescate_Tercer_Recluta_Texto_1 MSGBOX_AUTOCLOSE
release
end

SSGiovanni_Rescate_Tercer_Recluta_Texto_1:
	.string "¡SIR, se ha vengado de ANDRA\n"
	.string "derrotando al ADMIN.AMATISTA! {PAUSE 15}…{PAUSE 15}\l"
	.string "¿No estaba usando sus POKÉMON\l"
	.string "más fuertes? Oh{PAUSE 5}…{PAUSE 5}$"


SSGiovanni_Rescate_Cuarto_Recluta::
lock
faceplayer
msgbox SSGiovanni_Rescate_Cuarto_Recluta_Texto_1 MSGBOX_AUTOCLOSE
release
end

SSGiovanni_Rescate_Cuarto_Recluta_Texto_1:
	.string "Llegaremos a HOENN en unas 8 horas, ¡le\n"
	.string "da tiempo para recargar energías!$"

SSGiovanni_Rescate_Quinto_Recluta::
lock
faceplayer
msgbox SSGiovanni_Rescate_Quinto_Recluta_Texto_1 MSGBOX_AUTOCLOSE
release
end

SSGiovanni_Rescate_Quinto_Recluta_Texto_1:
	.string "¡Es usted increíble! Infiltrarse en el\n"
	.string "SUBMARINO de DEVON y perseguirlos\l"
	.string "hasta SINNOH, ¡su aventura será\l"
	.string "recordada por todos!$"

SSGiovanni_Llegada_Portual_Move_1:
face_up
step_end

SSGiovanni_Llegada_Portual_Move_5:
walk_down
walk_down
walk_down
walk_down
step_end


SSGiovanni_Llegada_Portual::
lock
setflag FLAG_HOENN_7
setflag FLAG_HOENN_684
clearflag FLAG_HOENN_683
fadescreen 1
delay 40
removeobject 8
playse SE_USE_ITEM
special HealPlayerParty
delay 60
addobject 9
playse SE_DING_DONG
waitse
delay 40
fadescreen 0
applymovement 9, SSGiovanni_Llegada_Portual_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, SSGiovanni_Llegada_Portual_Move_1
waitmovement 0x0
msgbox SSGiovanni_Llegada_Portual_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Llegada_Portual_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Llegada_Portual_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, SSGiovanni_Llegada_Portual_Move_2
waitmovement 0x0
msgbox SSGiovanni_Llegada_Portual_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Llegada_Portual_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SSGiovanni_Llegada_Portual_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, SSGiovanni_Llegada_Portual_Move_3
waitmovement 0x0
msgbox SSGiovanni_Llegada_Portual_Texto_7 MSGBOX_AUTOCLOSE
applymovement 9, SSGiovanni_Llegada_Portual_Move_4
waitmovement 0x0
msgbox SSGiovanni_Llegada_Portual_Texto_8 MSGBOX_AUTOCLOSE
delay 15
warp MAP_SLATEPORT_CITY_HARBOR, 7, 12
release
end

SSGiovanni_Llegada_Portual_Move_4:
face_up
step_end

SSGiovanni_Llegada_Portual_Move_3:
walk_in_place_down
step_end

SSGiovanni_Llegada_Portual_Move_2:
face_right
step_end

SSGiovanni_Llegada_Portual_Texto_1:
	.string "GIOVANNI: {PLAYER}, hemos llegado a\n"
	.string "CIUDAD PORTUAL.$"

SSGiovanni_Llegada_Portual_Texto_2:
	.string "Para llegar a CIUDAD ARBORADA, deberás\n"
	.string "tomar la RUTA 118, al este de CIUDAD\l"
	.string "MALVALONA.$"

SSGiovanni_Llegada_Portual_Texto_3:
	.string "… …$"

SSGiovanni_Llegada_Portual_Texto_4:
	.string "Ese REGIGIGAS… nadie despierta a un\n"
	.string "POKÉMON así por fines arqueológicos.$"

SSGiovanni_Llegada_Portual_Texto_5:
	.string "Hasta ahora únicamente hemos dado\n"
	.string "palos de ciego respecto a DEVON.$"

SSGiovanni_Llegada_Portual_Texto_6:
	.string "Pero… presiento que eso cambiará\n"
	.string "pronto.$"

SSGiovanni_Llegada_Portual_Texto_7:
	.string "De una vez por todas, averiguaremos sus\n"
	.string "verdaderas intenciones.$"

SSGiovanni_Llegada_Portual_Texto_8:
	.string "Y encontrar a ANDRA será vital para\n"
	.string "ello, solo tú puedes convencerla de que\l"
	.string "vuelva al TEAM ROCKET.$"

Post_Mision_6_Move_1:
walk_in_place_up
step_end

Post_Mision_6_Move_2:
walk_slow_down
step_end


Slateport_Bloqueo_Barco_Post_Mision_6::
lock
compare VAR_UNUSED_0x40F8, 2
goto_if_lt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F8, 3
goto_if_gt Slateport_Bloqueo_Barco_Post_Mision_6_2
release
end

Slateport_Bloqueo_Barco_Post_Mision_6_2::
applymovement OBJ_EVENT_ID_PLAYER, Post_Mision_6_Move_1
waitmovement 0x0
msgbox Slateport_Bloqueo_Barco_Post_Mision_6_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Post_Mision_6_Move_2
waitmovement 0x0
release
end

Slateport_Bloqueo_Barco_Post_Mision_6_Texto_1:
	.string "Viajar en barco a CIUDAD CALAGUA no es\n"
	.string "una prioridad en este momento.$"
