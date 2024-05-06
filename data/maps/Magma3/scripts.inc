Magma3_MapScripts::
	.byte 0

Magma3_Combate_Magno_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_1
waitmovement 0x0
goto Magma3_Combate_Magno

Magma3_Combate_Magno_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_1.1
waitmovement 0x0
goto Magma3_Combate_Magno

Magma3_Combate_Magno::
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
msgbox Magma3_Combate_Magno_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
waitmovement 0x0
applymovement 1, Magma3_Combate_Magno_Move_4
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_5
waitmovement 0x0
applymovement 1, Magma3_Combate_Magno_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox Magma3_Combate_Magno_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 17, 42, 0
waitfieldeffect FLDEFF_SPARKLE
setvar VAR_RESULT, 1
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
delay 75
addobject 1
waitfanfare
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 2
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
goto Magma3_Combate_Magno_2
delay 150
removeobject LOCALID_GROUDON_SLEEPING
addobject LOCALID_GROUDON
waitstate
delay 60
applymovement 4, MagmaHideout_4F_Movement_GroudonApproach
waitmovement 0
special FadeOutOrbEffect
waitstate
setvar VAR_0x8004, 1  @ vertical pan
setvar VAR_0x8005, 1  @ horizontal pan
setvar VAR_0x8006, 8  @ num shakes
setvar VAR_0x8007, 5  @ shake delay
special ShakeCamera
waitstate
applymovement 4, MagmaHideout_4F_Movement_GroudonExit
waitmovement 0

Magma3_Combate_Magno_2::
special SpawnCameraObject
applymovement 4, TerraCave_End_Movement_GroudonApproach
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 120
playse SE_BALL_THROW
waitse
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
removeobject 4
playse SE_BALL_OPEN
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 5
waitse
delay 15
playse SE_RG_BALL_CLICK
waitse
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 5
delay 15
playse MUS_B_PYRAMID_TOP
msgbox Magma3_Combate_Magno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_11
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_12
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAGNO, Magma3_Combate_Magno_Texto_7
msgbox Magma3_Combate_Magno_Texto_8 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox Magma3_Combate_Magno_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_10
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 3
applymovement 3, Magma3_Combate_Magno_Move_13
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_10 MSGBOX_AUTOCLOSE
msgbox Magma3_Combate_Magno_Texto_11 MSGBOX_AUTOCLOSE
msgbox Magma3_Combate_Magno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 3, Magma3_Combate_Magno_Move_14
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_15
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_FLOETTE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_SUPERSONIC
waitse
applymovement 3, Magma3_Combate_Magno_Move_1
waitmovement 0x0
playse SE_BALL_TRADE
waitse
msgbox Magma3_Combate_Magno_Texto_14 MSGBOX_AUTOCLOSE
playse SE_RG_CARD_FLIP
applymovement 1, Magma3_Combate_Magno_Move_15.1
waitmovement 0x0
delay 20
msgbox Magma3_Combate_Magno_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma3_Combate_Magno_Texto_16 MSGBOX_AUTOCLOSE
msgbox Magma3_Combate_Magno_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
delay 15
applymovement 3, Magma3_Combate_Magno_Move_17
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, Magma3_Combate_Magno_Move_18
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_20 MSGBOX_AUTOCLOSE
applymovement 3, Magma3_Combate_Magno_Move_14
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
fadescreen 1
delay 20
removeobject 3
fadescreen 0
fadeoutbgm 0
playse 0
setvar VAR_UNUSED_0x40F7, 99
release
end

Magma3_Combate_Magno_Move_15.1:
emote_question_mark
step_end

Magma3_Combate_Magno_Texto_1:
.string "MAGNO: Demasiado tiempo has\n"
	.string "esperado GROUDON, pero al fin, me\l"
	.string "presento como un humilde servidor\l"
	.string "de tu causa, gracias a la ESFERA\l"
	.string "ROJA puedo controlarte, pero no\l"
	.string "temas, no haré más que cumplir tu\l"
	.string "voluntad de expandir la tierra{PAUSE 5}…{PAUSE 5}$"

Magma3_Combate_Magno_Texto_2:
.string "Así que mi fiel COMANDANTE TATIANO\n"
	.string "no ha podido frenarte, debes de\l"
	.string "ser un ENTRENADOR excepcional,\l"
	.string "definitivamente te has ganado el\l"
	.string "derecho de presenciar algo grande,\l"
	.string "todo está dispuesto.\l"
	.string "¡Aproxímate ROCKET!\l"
	.string "¡Ahora!$"

Magma3_Combate_Magno_Texto_3:
.string "GROUDON descansa aquí, todo cuanto\n"
	.string "necesitamos para convocarle es\l"
	.string "hacer brillar la ESFERA ROJA una\l"
	.string "vez más.$"

Magma3_Combate_Magno_Texto_4:
.string "¡GROUDON!\n"
	.string "¡AL FIN!\l"
	.string "¡Ahora podrás terminar de una vez\l"
	.string "por todas la noble tarea que se te\l"
	.string "encomendó!\l"
	.string "¡Habrá tierra suficiente para\l"
	.string "todos, gracias a tu poder podremos\l"
	.string "regular a la perfección cuanta es\l"
	.string "necesaria añadir o quitar!\l"
	.string "¡Una vez queden demostradas\l"
	.string "nuestras teorías el mundo deberá\l"
	.string "de admitir que el EQUIPO MAGMA\l"
	.string "tenía razón!$"

Magma3_Combate_Magno_Texto_5:
.string "En cuanto a ti, ya has visto\n"
	.string "suficiente, espero que te haya\l"
	.string "merecido la pena el espectáculo,\l"
	.string "porque será lo último que verás\l"
	.string "antes de quedar aplastado por\l"
	.string "milenios de poder contenido, ya te\l"
	.string "lo advertí cuando te vi merodeando\l"
	.string "por el MT.ASCUAS.$"

Magma3_Combate_Magno_Texto_6:
.string "Llevo más de una década\n"
	.string "recorriendo el mundo, tras el\l"
	.string "mejor equipo de POKÉMON TIPO FUEGO\l"
	.string "y TIERRA posible, muchas opciones,\l"
	.string "descartes, cambios…\l"
	.string "POKÉMON que se adecúan más o menos\l"
	.string "a la esencia de mi plan, pero al\l"
	.string "fin, después de tanto lo he\l"
	.string "logrado, he formado el equipo\l"
	.string "perfecto para construir una tierra\l"
	.string "mejor, y ahora con GROUDON, señor\l"
	.string "de la tierra, a la cabeza de este\l"
	.string "equipo, ¡nada ni nadie podrá\l"
	.string "detenerme!$"

Magma3_Combate_Magno_Texto_7:
.string "¡No es posible!\n"
	.string "¿De dónde sale tu poder?$"

Magma3_Combate_Magno_Texto_8:
.string "P{PAUSE 25}-{PAUSE 25}pero{PAUSE 15}…{PAUSE 15}\n"
	.string "Lo tenía todo{PAUSE 15}…{PAUSE 15}\l"
	.string "G{PAUSE 25}-{PAUSE 25}GROUDON estaba aquí, delante mía,\l"
	.string "y ha desplegado el inmenso poder\l"
	.string "del que la leyenda habla{PAUSE 15}…{PAUSE 15}\l"
	.string "¿Cómo ha podido un ROCKET, por más\l"
	.string "alto cargo y ADMINISTRADOR que seas, \l"
	.string "equipararse, y aún más, exceder,\l"
	.string "tal poder haciendo uso de POKÉMON\l"
	.string "corrientes?\l"
	.string "¡No tiene sentido!$"

Magma3_Combate_Magno_Texto_9:
.string "????: Ya es suficiente MAGNO,\n"
	.string "hasta aquí has llegado.$"

Magma3_Combate_Magno_Texto_10:
.string "MAGNO: ¡TÚ!$"

Magma3_Combate_Magno_Texto_11:
.string "ZEUS: Tus cálculos han fallado,\n"
	.string "nunca debiste llegar tan lejos,\l"
	.string "aunque tengo que agradecértelo,\l"
	.string "sin tu obsesión por\l"
	.string "GROUDON jamás podrías haberme\l"
	.string "llevado hasta aquí.$"

Magma3_Combate_Magno_Texto_12:
.string "MAGNO: ¡Maldito coleccionista de\n"
	.string "pacotilla!\l"
	.string "¡No voy a permitir que GROUDON sea\l"
	.string "una mera pieza más dentro de…!$"

Magma3_Combate_Magno_Texto_13:
.string "ZEUS: Ya no puedes hacer nada.\n"
	.string "¡FLOETTE!\l"
	.string "¡PSÍQUICO!$"

Magma3_Combate_Magno_Texto_14:
.string "(ZEUS le arrebató a MAGNO todos\n"
	.string "sus POKÉMON y la ESFERA ROJA).$"

Magma3_Combate_Magno_Texto_15:
.string "MAGNO: {PAUSE 15}…{PAUSE 15}$"

Magma3_Combate_Magno_Texto_16:
.string "¿Q{PAUSE 25}-{PAUSE 15}qué hago yo aquí?$"

Magma3_Combate_Magno_Texto_17:
.string "ZEUS: Eso mismo nos preguntamos\n"
	.string "nosotros, esta cueva no contiene\l"
	.string "nada importante, tus compañeros\l"
	.string "nos han hablado de un tal GROUDON,\l"
	.string "y de una ESFERA AZUL que lo\l"
	.string "despierta, pero eso está en\l"
	.string "HOENN{PAUSE 5}…{PAUSE 5}$"

Magma3_Combate_Magno_Texto_18:
.string "MAGNO: ¡GROUDON sí!\n"
	.string "¡Debo encontrar esa ESFERA AZUL,\l"
	.string "queda mucho por hacer!\l"
	.string "¡Volvemos a HOENN!$"

Magma3_Combate_Magno_Texto_19:
.string "ZEUS: No te preocupes {PLAYER},\n"
	.string "solo le he borrado esa parte de la\l"
	.string "memoria relacionada con la ESFERA\l"
	.string "ROJA y el resto de regiones y\l"
	.string "viajes que ha realizado todos\l"
	.string "estos años, ahora está limitado a\l"
	.string "HOENN y ya está, jamás podrá\l"
	.string "formar un equipo como el que\l"
	.string "acabas de ver, es lo mejor para\l"
	.string "todos, incluso para él, gracias a\l"
	.string "su nueva ignorancia adquirida\l"
	.string "vuelve a tener un objetivo claro,\l"
	.string "y esta vez no pondrá a nadie en\l"
	.string "peligro, aunque llegara a hacerse\l"
	.string "con la ESFERA AZUL{PAUSE 5}…{PAUSE 5}$"

Magma3_Combate_Magno_Texto_20:
.string "De nuevo me has impresionado\n"
	.string "{PLAYER}, no hay duda de que sabes\l"
	.string "como combatir y sacarle el máximo\l"
	.string "potencial a tus POKÉMON, empiezo a\l"
	.string "creer que de verdad eres el\l"
	.string "verdadero CAMPEÓN de KANTO.$"

Magma3_Combate_Magno_Texto_21:
.string "Aún queda AQUILES, dijiste que lo\n"
	.string "viste al sur de ISLA EXTA, después\l"
	.string "de lo que has hecho aquí, espero\l"
	.string "verte allí también en acción, una\l"
	.string "parte de mi me dice que en el\l"
	.string "fondo disfrutas con esto,\l"
	.string "cualquiera hubiera salido\l"
	.string "corriendo nada más ver a GROUDON,\l"
	.string "pero para ti el pasar por estos\l"
	.string "eventos es parte del camino, para\l"
	.string "poder seguir avanzando, ¿me\l"
	.string "equivoco?$"

Magma3_Combate_Magno_Move_1:
walk_in_place_right
step_end

Magma3_Combate_Magno_Move_1.1:
walk_up
walk_in_place_right
step_end

Magma3_Combate_Magno_Move_2:
walk_right
step_end

Magma3_Combate_Magno_Move_3:
emote_exclamation_mark
step_end

Magma3_Combate_Magno_Move_4:
face_left
step_end

Magma3_Combate_Magno_Move_5:
walk_right
walk_right
face_up
step_end

Magma3_Combate_Magno_Move_6:
face_up
step_end

Magma3_Combate_Magno_Move_7:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Magma3_Combate_Magno_Move_8:
slide_down
step_end

Magma3_Combate_Magno_Move_9:
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

Magma3_Combate_Magno_Move_10:
face_left
step_end

Magma3_Combate_Magno_Move_11:
face_right
step_end

Magma3_Combate_Magno_Move_12:
walk_in_place_left
step_end

Magma3_Combate_Magno_Move_13:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Magma3_Combate_Magno_Move_14:
walk_right
walk_right
step_end

Magma3_Combate_Magno_Move_15:
walk_down
face_up
step_end

Magma3_Combate_Magno_Move_16:
emote_question_mark
step_end

Magma3_Combate_Magno_Move_17:
face_down
step_end

Magma3_Combate_Magno_Move_18:
walk_in_place_down
step_end
