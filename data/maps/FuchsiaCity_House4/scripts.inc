FuchsiaCity_House4_MapScripts::
	.byte 0

FuchsiaCityHouse4_1::
end

FuchsiaCity_House4_Secundaria_Squirtle::
lock
faceplayer
compare VAR_UNUSED_0x4083, 1
goto_if_gt FuchsiaCity_House4_Secundaria_Squirtle_3
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x4083, 1
goto_if_eq FuchsiaCity_House4_Secundaria_Squirtle_2
release
end

FuchsiaCity_House4_Secundaria_Squirtle_2::
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FuchsiaCity_House4_Secundaria_Squirtle_No
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
release
end


FuchsiaCity_House4_Secundaria_Squirtle_No::
playse MUS_RG_ENCOUNTER_BOY
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GURU, FuchsiaCity_House4_Secundaria_Squirtle_Texto_9
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_4
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_5
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_4
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
trainerbattle_no_intro TRAINER_GUARDA, FuchsiaCity_House4_Secundaria_Squirtle_Texto_14
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
delay 20
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_3.1
waitmovement 0x0
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_15.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 3
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
waitmovement 0x0
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, FuchsiaCity_House4_Secundaria_Squirtle_Move_3.2
waitmovement 0x0
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 3
playse SE_EXIT
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_7
waitmovement 0x0
removeobject 2
playse SE_EXIT
delay 15
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_17 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3.3
waitmovement 0x0
waitse
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
setvar VAR_UNUSED_0x4083, 2
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3.3:
walk_in_place_left
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3.2:
walk_in_place_up
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

FuchsiaCity_House4_Secundaria_Squirtle_3::
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Texto_1:
.string "La gente como vosotros jamás alcanzará\n"
	.string "a comprender el arte de la pesca, ni la\l"
	.string "clase de POKÉMON que pueden crecer en\l"
	.string "los mares.\l"
	.string "Y me alegro por ello, lo último que\l"
	.string "quiero es que metáis vuestras narices\l"
	.string "en algo tan puro como el agua.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_2:
.string "Cuando menos te lo esperes, me\n"
	.string "vengaré de ti, ROCKET.\l"
	.string "Mi derrota no quedará en más\l"
	.string "que una anécdota.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_3:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_4:
.string "¿Cómo dices?\n"
	.string "¿Mi hermano mediano te envía para\l"
	.string "derrotarme, y así demostrar que no soy\l"
	.string "tan buen PESCADOR como todos dicen?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_5:
.string "No sabes donde te metes, ROCKET.\n"
	.string "Tus POKÉMON no pueden competir\l"
	.string "contra las mejores piezas que\l"
	.string "pueden atraparse por KANTO.\l"
	.string "¡Da igual que seas ALTO RANGO!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_6:
.string "Tengo cosas más importantes que\n"
	.string "estar peleando con un ROCKET, si\l"
	.string "recapacitas y sales de mi casa,\l"
	.string "aquí no ha ocurrido nada.\l"
	.string "¿De acuerdo?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_7:
.string "Bien, ahora, sal de mi casa.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_8:
.string "Te va el riesgo, ¿ eh, ROCKET?\n"
	.string "La curiosidad mató al gato.\l"
	.string "¡Vas a ver cómo se las gasta el\l"
	.string "mejor PESCADOR de esta región!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_9:
.string "¡No puede ser!\n"
	.string "¡Mis poderosos GYARADOS!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_10:
.string "Esto no tiene sentido, debes de\n"
	.string "ser algo más dentro del TEAM ROCKET.\l"
	.string "¿EJECUTIVO, ADMINISTRADOR, quizás?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_11:
.string "Pero{PAUSE 15}…{PAUSE 15}\n"
	.string "Lamentablemente para ti, yo nunca\l"
	.string "pierdo, nunca.\l"
	.string "¿como crees que he mantenido mi\l"
	.string "reputación impoluta hasta ahora?\l"
	.string "Yo siempre guardo mis espaldas.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_12:
.string "Has hecho demasiado ruido, ROCKET.\n"
	.string "No podemos permitir que salgas\l"
	.string "ganador de aquí.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_12.1:
	.string "Como POKÉGUARDA de la ZONA SAFARI,\n"
	.string "entenderás que no puedo permitir\l"
	.string "que nadie perturbe el orden de\l"
	.string "esta ciudad; nadie va a salir de\l"
	.string "aquí diciendo que el mejor gurú de\l"
	.string "la región, de FUCSIA, salió derrotado\l"
	.string "por un ROCKET.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_13:
.string "Ahora que tus POKÉMON están\n"
	.string "cansados, ¡solo me queda darte\l"
	.string "el golpe de gracia!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_14:
.string "¡No puede ser, mi SLOWKING!\n"
	.string "¿Quién eres tú?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_15:
.string "Esto sí que no estaba en\n"
	.string "nuestros planes.\l"
	.string "¡Ni KOGA podría salir victorioso frente\l"
	.string "a nosotros dos a la vez!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_15.1:
	.string "Sea como sea, nadie te creerá, porque\n"
	.string "nadie ha visto estos combat{PAUSE 5}…{PAUSE 5}$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16:
.string "¡Guau!\n"
	.string "¡Ha sido increíble, un ROCKET le ha\l"
	.string "dado una lección al gurú de FUCSIA!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.1:
	.string "¡Y aún más!\n"
	.string "¡También a SLOWPOKE, el\l"
	.string "POKÉGUARDA del SAFARI!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.2:
	.string "¡No puedo esperar a ver la cara de\n"
	.string "mis amigos cuando se enteren!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_17:
.string "¡¿Tienes idea de lo que acabas de\n"
	.string "hacer, ROCKET?!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_17.1:
	.string "¡Espero que te merezca la pena la\n"
	.string "recompensa de mi hermano!\l"
	.string "¡Acabas de iniciar una guerra!$"

FuchsiaCity_House4_Secundaria_Squirtle_Move_1:
emote_exclamation_mark
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_2:
walk_in_place_right
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3:
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_4:
face_left
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_5:
walk_up
walk_up
walk_up
walk_in_place_right
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_6:
face_down
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_7:
walk_down
walk_down
walk_down
step_end
