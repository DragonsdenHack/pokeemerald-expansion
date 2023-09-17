Gimnasio_CuevaHypno_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Gimnasio_CuevaHypno_OnFrame
	.byte 0

Gimnasio_CuevaHypno_OnFrame:
map_script_2 VAR_DEWFORD_TOWN_STATE, 2, Gimnasio_CuevaHypno_Dialogo_Lider
	.2byte 0

Gimnasio_CuevaHypno_Equipo_Lavanda::
lock
msgbox Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_1 MSGBOX_SIGN
msgbox Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_2 MSGBOX_SIGN
release
end

Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_1:
.string "EQUIPO COMO LÍDER DE GIMNASIO EN\n"
	.string "PUEBLO LAVANDA$"

Gimnasio_CuevaHypno_Equipo_Lavanda_Texto_2:
.string "DROWZEE - Nv.24\n"
	.string "CUBONE - Nv.25\l"
	.string "HAUNTER - Nv.27\l"
	.string "HYPNO - Nv.28$"

Gimnasio_CuevaHypno_Equipo_Tera::
lock
msgbox Gimnasio_CuevaHypno_Equipo_Tera_Texto_1 MSGBOX_SIGN
msgbox Gimnasio_CuevaHypno_Equipo_Tera_Texto_2 MSGBOX_SIGN
release
end

Gimnasio_CuevaHypno_Equipo_Tera_Texto_1:
.string "EQUIPO COMO LÍDER DE GIMNASIO EN\n"
	.string "ISLA TERA$"

Gimnasio_CuevaHypno_Equipo_Tera_Texto_2:
.string "HYPNO - Nv.43\n"
	.string "HAUNTER - Nv.44\l"
	.string "MAROWAK - Nv.46\l"
	.string "GIRAFARIG - Nv.47\l"
	.string "HYPNO - Nv.49$"

Gimnasio_CuevaHypno_Dialogo_Lider::
lock
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_1
waitmovement 0x0
delay 15
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_2
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_3
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_4
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_6
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_7
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_8
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_9
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_10
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_11
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_7
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_12 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_4
applymovement OBJ_EVENT_ID_CAMERA, Gimnasio_CuevaHypno_Dialogo_Lider_Move_12
waitmovement 0x0
special RemoveCameraObject
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_14 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Gimnasio_CuevaHypno_Dialogo_Lider_Move_13
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_6
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_5
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_8
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Gimnasio_CuevaHypno_Dialogo_Lider_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Gimnasio_CuevaHypno_Dialogo_Lider_Move_7
waitmovement 0x0
msgbox Gimnasio_CuevaHypno_Dialogo_Lider_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_110_TEAM_AQUA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_DEWFORD_TOWN_STATE, 3
release
end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_13:
walk_slow_down
walk_slow_down
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_12:
walk_slow_up
walk_slow_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_11:
walk_slow_right
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_10:
walk_in_place_left
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_9:
walk_slow_left
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_8:
walk_in_place_right
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_7:
face_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_6:
face_left
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_5:
face_right
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_4:
walk_in_place_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_3:
walk_slow_right
walk_slow_up
walk_slow_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_2:
walk_in_place_down
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Move_1:
walk_slow_up
step_end

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_1:
.string "¿Qué te parece?\n"
	.string "Nada mal conservado, ¿verdad?$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_2:
.string "Tenía mis dudas, la gente normal\n"
	.string "huíria espantada de un lugar tan\l"
	.string "tétrico.\l"
	.string "Pero tú ya eres de los pocos que\l"
	.string "exploraría el BOSQUE BAYA por el mero\l"
	.string "placer de hacerlo, tu curiosidad te\l"
	.string "ha llevado hasta aquí, incluso los\l"
	.string "propios habitantes de la isla han\l"
	.string "olvidado este lugar.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_3:
.string "Y es que... este una vez fue un\n"
	.string "GIMNASIO oficial.\l"
	.string "En la época en la que las islas\l"
	.string "contaban con 4 GIMNASIOS, llegué aquí\l"
	.string "después de que cerraran el GIMNASIO\l"
	.string "de PUEBLO LAVANDA.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_4:
.string "Pronto logré convertirme en el LÍDER\n"
	.string "más fuerte de las islas, más incluso\l"
	.string "que la LÍDER de ISLA SÉTIMA.\l"
	.string "Todo gracias a mi querido HYPNO.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_5:
.string "Nuestro vínculo se volvió\n"
	.string "inquebrantable desde el principio,\l"
	.string "desde que no era más que un pequeño\l"
	.string "DROWZEE, y yo un joven que iniciaba\l"
	.string "su aventura.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_6:
.string "Ya como HYPNO, nuestros poderes\n"
	.string "PSÍQUICOS se retroalimentaban\l"
	.string "mutuamente, estabamos perfectamente\l"
	.string "sincronizados.\l"
	.string "Ello provocó algo inaudito, pero que\l"
	.string "al parecer los antiguos de JOHTO\l"
	.string "conocen bien: la progresión de mi\l"
	.string "HYPNO no se detuvo ahí, continuó\l"
	.string "mejorando.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_7:
.string "Sin embargo, sus poderes se volvieron\n"
	.string "también inestables y...peligrosos\l"
	.string "para la gente común.\l"
	.string "Como consecuencia tuvimos que cerrar\l"
	.string "el GIMNASIO, a lo que le siguieron el\l"
	.string "resto poco después.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_8:
.string "El resto ya es historia: este lugar\n"
	.string "quedó olvidado, nadie de esa época\l"
	.string "vive ya en ISLA TERA.$"


Gimnasio_CuevaHypno_Dialogo_Lider_Texto_9:
.string "Los únicos vestigios que quedan del\n"
	.string "pasado son los HYPNOS que habitan en\l"
	.string "el BOSQUE BAYA, descendencia del mío\l"
	.string "propio, que han encontrado en el\l"
	.string "bosque un lugar donde vivir.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_10:
.string "Sus poderes son muy benignos en\n"
	.string "comparación, aunque a veces pueden\l"
	.string "asustar a los niños que juegan en lo\l"
	.string "profundo del bosque.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_11:
.string "Por suerte, la conexión que tengo con\n"
	.string "mi HYPNO me permite saber cuando uno\l"
	.string "se está pasando de la raya, como\l"
	.string "cuando me viste.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_12:
.string "Ahora que ya sabes mi historia,\n"
	.string "estarás algo más preparado para\l"
	.string "nuestro combate, y también...\l"
	.string "entenderás en qué consiste el puzzle\l"
	.string "de este GIMNASIO.\l"
	.string "Observa.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_13:
.string "Tendrás que interactuar con las\n"
	.string "puertas para avanzar, y responder sus\l"
	.string "preguntas.\l"
	.string "Si te equivocas, podrás avanzar\l"
	.string "igualmente, pero deberás combatir.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_14:
.string "Una vez respondas, la puerta\n"
	.string "desaparecerá y podrás continuar.\l"
	.string "Si sales del GIMNASIO, deberás\l"
	.string "empezar de nuevo, ya que las puertas\l"
	.string "volverán a aparecer automáticamente.\l"
	.string "Fácil, ¿no?$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_15:
.string "¡Ah!\n"
	.string "Y una cosa más.\l"
	.string "Debes saber que las preguntas son\l"
	.string "personalizadas para cada individuo.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_16:
.string "Una de las cualidades de mi HYPNO es\n"
	.string "que puede ver el futuro, al menos de\l"
	.string "forma parcial. También sabe de las\l"
	.string "experiencias vitales de los\l"
	.string "individuos con solo sentir su\l"
	.string "presencia.$"

Gimnasio_CuevaHypno_Dialogo_Lider_Texto_17:
.string "HYPNO aprovecha esto para poner a\n"
	.string "prueba al sujeto. Obligarle a\l"
	.string "expandir su propia realidad a partir\l"
	.string "de lo que ya ha visto, porque...\l"
	.string "¿Qué podría limitarnos más que\l"
	.string "nuestra propia percepción de la\l"
	.string "realidad?$"


Gimnasio_CuevaHypno_Primera_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Primera_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Primera_Pregunta_No
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Primera_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_147, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 19, 33, 0x289, FALSE
setmetatile 19, 32, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Gimnasio_CuevaHypno_Primera_Pregunta_Texto_1:
.string "GASTLY, HAUNTER y GENGAR son los\n"
	.string "únicos FANTASMAS de PUEBLO LAVANDA$"

Gimnasio_CuevaHypno_Primera_Pregunta_Texto_2:
	.string "Creí que habías visto ya suficiente\n"
	.string "mundo como para poder ver más allá de\l"
	.string "lo aparente. Veo que, como el resto,\l"
	.string "solo aspiras a alargar la vista y\l"
	.string "subyugar los sentidos. Respuesta\l"
	.string "incorrecta.$"

Gimnasio_CuevaHypno_Primera_Pregunta_No::
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Primera_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 19, 33, 0x289, FALSE
setmetatile 19, 32, 0x281, FALSE
special DrawWholeMapView
waitse
release
end


Gimnasio_CuevaHypno_Primera_Pregunta_No_Texto_1:
.string "Respuesta correcta, pero… a ciegas,\n"
	.string "¿verdad? No conoces ningún fantasma\l"
	.string "en KANTO más allá de esos 3, y a pesar\l"
	.string "de ello sientes que hay algo más…\l"
	.string "oculto , ¿no? Volverás a PUEBLO\l"
	.string "LAVANDA, aún te quedan cosas por hacer\l"
	.string "allí, de eso estoy seguro.$"

Gimnasio_CuevaHypno_Segunda_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Segunda_Pregunta_No
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_148, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 27, 25, 0x289, FALSE
setmetatile 27, 24, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_1:
.string "El verdadero CAMPEÓN de KANTO está en\n"
	.string "esta sala.$"

Gimnasio_CuevaHypno_Segunda_Pregunta_Texto_2:
.string "¿Te refieres a mí? No, hace tiempo que\n"
	.string "renuncié a títulos arbitrarios que\l"
	.string "nada tienen que ver con tu desempeño\l"
	.string "en el combate. Respuesta incorrecta.$"

Gimnasio_CuevaHypno_Segunda_Pregunta_No::
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Segunda_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 27, 25, 0x289, FALSE
setmetatile 27, 24, 0x281, FALSE
special DrawWholeMapView
waitse
release
end


Gimnasio_CuevaHypno_Segunda_Pregunta_No_Texto_1:
.string "Respuesta correcta, tampoco está en la\n"
	.string "LIGA POKÉMON, ni en el MT.PLATEADO. Ese\l"
	.string "título ya no existe hoy en día, está\l"
	.string "vacío, carente del significado que\l"
	.string "otrora tuvo.$"

Gimnasio_CuevaHypno_Tercera_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Tercera_Pregunta_No
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_149, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 19, 17, 0x289, FALSE
setmetatile 19, 16, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_1:
.string "La SEDE SILPH, junto con la TORRE RADIO\n"
	.string "TRIGAL, se elevan por encima de\l"
	.string "ninguna otra construcción humana en\l"
	.string "KANTO-JOHTO$"

Gimnasio_CuevaHypno_Tercera_Pregunta_Texto_2:
	.string "Respuesta incorrecta, hace casi un\n"
	.string "milenio que ese honor lo ostenta y\l"
	.string "sigue ostentando un lugar mucho más\l"
	.string "sagrado.$"

Gimnasio_CuevaHypno_Tercera_Pregunta_No::
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Tercera_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 19, 17, 0x289, FALSE
setmetatile 19, 16, 0x281, FALSE
special DrawWholeMapView
waitse
release
end

Gimnasio_CuevaHypno_Tercera_Pregunta_No_Texto_1:
.string "Así es, es en la cima de TORRE CAMPANA,\n"
	.string "dónde uno tiene a JOHTO y KANTO bajo la\l"
	.string "palma de su mano. No obstante, lo\l"
	.string "verdaderamente importante de este\l"
	.string "lugar se encuentra a decenas de metros\l"
	.string "bajo su suelo.$"

Gimnasio_CuevaHypno_Cuarta_Pregunta::
lock
msgbox Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Gimnasio_CuevaHypno_Cuarta_Pregunta_No
delay 20
playse SE_SUCCESS
waitse
msgbox Gimnasio_CuevaHypno_Cuarta_Pregunta_No_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_REFLECT
delay 30
setmetatile 21, 9, 0x289, FALSE
setmetatile 21, 8, 0x281, FALSE
special DrawWholeMapView
waitse
release
end

Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_1:
.string "TORRE LATÓN fue destruida en un\n"
	.string "incendio, aún así, JOHTO aún cuenta\l"
	.string "con otras 3 pagodas que mantienen viva\l"
	.string "la esencia de la región.$"

Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_2:
	.string "Respuesta incorrecta … ¿Dices que solo\n"
	.string "hay 2? ¿El de MALVA y el de IRIS? …\l"
	.string "Respuesta incorrecta.$"

Gimnasio_CuevaHypno_Cuarta_Pregunta_No::
delay 20
playse SE_FAILURE
waitse
msgbox Gimnasio_CuevaHypno_Cuarta_Pregunta_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Mision7Lab4_Combate_Move_1
msgbox Mision7Lab4_Combate_Nidoking_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_150, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_HYPNO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
playse SE_M_REFLECT
delay 30
setmetatile 21, 9, 0x289, FALSE
setmetatile 21, 8, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end


Gimnasio_CuevaHypno_Cuarta_Pregunta_No_Texto_1:
.string "Respuesta correcta. Aunque me\n"
	.string "pregunto si de verdad has sido\l"
	.string "consciente de las implicaciones que\l"
	.string "tiene para lo que crees que es JOHTO.$"



Gimnasio_CuevaHypno_Combate_Lider::
lock
faceplayer
compare VAR_DEWFORD_TOWN_STATE, 3
goto_if_gt Gimnasio_CuevaHypno_Combate_Lider_2
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_1 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_2 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_3 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_4 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_118, Gimnasio_CuevaHypno_Combate_Lider_Texto_6
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_7 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_8 MSGBOX_AUTOCLOSE
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_FENNEKIN, 15, ITEM_NONE
waitfanfare
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM94
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_11.3 MSGBOX_NPC
setvar VAR_DEWFORD_TOWN_STATE, 4
release
end

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.3:
.string "Cuanto más lento sea el POKÉMON,\n"
	.string "antes atacará bajo los efectos del\l"
	.string "ESPACIO RARO.\l"
	.string "Es un movimiento que puede romper los\l"
	.string "esquemas de muchos equipos, con\l"
	.string "muchos POKÉMON que pueden\l"
	.string "beneficiarse de ello.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.1:
.string "¿Sabes?\n"
	.string "También te daré esta MT, alguien como\l"
	.string "tú seguro que sabe sacarle provecho.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT94 ESPACIO\n"
	.string "RARO de manos de MORFEO!!$"

Gimnasio_CuevaHypno_Combate_Lider_2::
msgbox Gimnasio_CuevaHypno_Combate_Lider_Texto_12 MSGBOX_AUTOCLOSE
release
end

Gimnasio_CuevaHypno_Combate_Lider_Texto_12:
.string "Y ahora, ¿dónde irás?\n"
	.string "¿Cúal es tu próximo destino?\l"
	.string "Sea como sea, haz que cada día cuente\l"
	.string "y merezca la pena.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_11:
.string "Descubrí este POKÉMON gracias a uno\n"
	.string "de mis mejores alumnos.\l"
	.string "Su evolución final domina por\l"
	.string "completo los poderes mentales.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_10:
.string "¡¡OBTUVISTE UN FENNEKIN AL NV:15!!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_9:
.string "Te deseo mucha suerte en tu viaje.\n"
	.string "Quiero que lleves a este POKÉMON\l"
	.string "contigo.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_8:
.string "Por este rato me has hecho recordar\n"
	.string "esos tiempos, en los que iba de\l"
	.string "aspirante en aspirante.\l"
	.string "Esa sensación tan característica de\l"
	.string "la competición, que con los años se\l"
	.string "manifiesta de forma diferente... sin\l"
	.string "duda no me arrepiento de haber tomado\l"
	.string "este camino.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_7:
.string "Impresionante, mi maestra estaría\n"
	.string "orgullosa de ver en lo que HYPNO y yo\l"
	.string "nos hemos convertido, ahora al\l"
	.string "combatir de nuevo lo sé.\l"
	.string "Pero tú, ¡creo que se quedaría sin\l"
	.string "palabras!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_6:
.string "Diría... que nuestro nivel ha sido\n"
	.string "excelente pero... ¿aún así he\l"
	.string "perdido?$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_5:
.string "Ahora, sin espectadores, sin aplausos\n"
	.string "ni cámaras que inmortalicen este\l"
	.string "momento, fieles al modo de vida que\l"
	.string "hemos escogido... ¡verás los\l"
	.string "resultados de ese entrenamiento!$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_4:
.string "En cuanto a mí... llevo décadas sin\n"
	.string "tener referencia alguna que no sea\l"
	.string "esta pequeña isla.\l"
	.string "Pero... todo ese tiempo, tanto HYPNO\l"
	.string "como yo nos hemos mantenido\l"
	.string "entrenando, con el único objetivo de\l"
	.string "superarnos a nosotros mismos, nuestra\l"
	.string "mejor referencia.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_3:
.string "Sea como sea, debes ser un ENTRENADOR\n"
	.string "muy ducho en combate.$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_2:
.string "Si no llega a ser por HYPNO, jamás lo\n"
	.string "hubiera sabido, aunque según él, ese\l"
	.string "título no existe como has podido\l"
	.string "comprobar en sus preguntas...$"

Gimnasio_CuevaHypno_Combate_Lider_Texto_1:
.string "Así que todo este tiempo he estado\n"
	.string "hablando con el CAMPEÓN de KANTO,\l"
	.string "¿eh?$"
