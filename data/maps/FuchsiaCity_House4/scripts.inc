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
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
setvar VAR_UNUSED_0x4083, 2
release
end

FuchsiaCity_House4_Secundaria_Squirtle_3::
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Texto_1:
.string "La gente como vosotros jamás\n"
	.string "alcanzará a comprender el arte de\l"
	.string "la pesca, ni la clase de POKÉMON\l"
	.string "que pueden crecer en los mares, y\l"
	.string "suerte que no lo hacéis, lo último\l"
	.string "que quiero es que metáis vuestras\l"
	.string "narices en algo tan puro como el\l"
	.string "agua.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_2:
.string "Cuando menos te lo esperes, me\n"
	.string "vengaré de ti ROCKET, y mi derrota\l"
	.string "no quedará en más que una\l"
	.string "anécdota.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_3:
.string "…\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_4:
.string "¿Cómo dices?\n"
	.string "¿Mi hermano mediano te envía para\l"
	.string "derrotarme y así demostrar que no\l"
	.string "soy tan buen PESCADOR como todos\l"
	.string "dicen?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_5:
.string "No sabes donde te metes ROCKET,\n"
	.string "tus POKÉMON no pueden competir\l"
	.string "contra las mejores piezas que\l"
	.string "pueden atraparse por KANTO, aunque\l"
	.string "seas un ALTO RANGO, o lo que\l"
	.string "quieras, mis POKÉMON pescados en\l"
	.string "el mar tienen un furia que no\l"
	.string "conoces.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_6:
.string "Tengo cosas más importantes que\n"
	.string "estar peleando con un ROCKET, si\l"
	.string "recapacitas y sales de mi casa\l"
	.string "aquí no ha ocurrido nada,\l"
	.string "¿de acuerdo?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_7:
.string "Bien, ahora sal de mi casa.$"

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
	.string "ser algo más dentro del TEAM\l"
	.string "ROCKET, un EJECUTIVO,\l"
	.string "ADMINISTRADOR quizás, ¿me\l"
	.string "equivoco?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_11:
.string "Pero{PAUSE 15}…{PAUSE 15}\n"
	.string "Lamentablemente para ti, yo nunca\l"
	.string "pierdo, nunca, como crees que he\l"
	.string "mantenido mi reputación impoluta\l"
	.string "hasta ahora, yo siempre guardo mis\l"
	.string "espaldas.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_12:
.string "Has hecho demasiado ruido ROCKET,\n"
	.string "no podemos permitir que salgas\l"
	.string "ganador de aquí.\l"
	.string "He oído alboroto en la casa de mi\l"
	.string "vecino, el mejor de los gurús que\l"
	.string "tanto público atrae a FUCSIA.\l"
	.string "Como POKÉGUARDA de la ZONA SAFARI,\l"
	.string "entenderás que no puedo permitir\l"
	.string "que nadie perturbe el orden de\l"
	.string "esta ciudad, nadie va a salir de\l"
	.string "aquí diciendo que el mejor gurú de\l"
	.string "la región salió derrotado por un\l"
	.string "ROCKET.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_13:
.string "Ahora que tus POKÉMON están\n"
	.string "cansados, ¡solo me queda darte el\l"
	.string "golpe de gracia!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_14:
.string "¡No puede ser, mi SLOWKING!\n"
	.string "¿Quién eres tú?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_15:
.string "Esto sí que no estaba en nuestros\n"
	.string "planes, siquiera KOGA podría salir\l"
	.string "victorioso frente a nosotros dos\l"
	.string "juntos. Sea como sea, nadie te\l"
	.string "creerá ROCKET, nadie ha visto\l"
	.string "estos combat{PAUSE 5}…{PAUSE 5}$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16:
.string "¡Guau!\n"
	.string "¡Ha sido increíble, un ROCKET le\l"
	.string "ha dado una lección al gurú de\l"
	.string "FUCSIA!\l"
	.string "¡Y aún más!\l"
	.string "¡También a SLOWPOKE el POKÉGUARDA\l"
	.string "del SAFARI!\l"
	.string "¡No puedo esperar a ver la cara de\l"
	.string "mis amigos cuando se enteren!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_17:
.string "¡¿Tienes idea de lo que acabas de\n"
	.string "hacer ROCKET?!\l"
	.string "¡Espero que te merezca la pena la\l"
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
