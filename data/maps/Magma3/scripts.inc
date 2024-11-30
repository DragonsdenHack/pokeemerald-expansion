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
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma3_Combate_Magno_Move_4.1
waitmovement 0x0
waitse
delay 10
msgbox Magma3_Combate_Magno_Texto_2.1 MSGBOX_AUTOCLOSE
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
delay 10
applymovement 1, Magma3_Combate_Magno_Move_12.1
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma3_Combate_Magno_Move_12.2
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma3_Combate_Magno_Move_4.1
waitmovement 0x0
waitse
delay 10
msgbox Magma3_Combate_Magno_Texto_6.3 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_MAGNO, Magma3_Combate_Magno_Texto_7
msgbox Magma3_Combate_Magno_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox Magma3_Combate_Magno_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
applymovement 3, Magma3_Combate_Magno_Move_17.1
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_19.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Magma3_Combate_Magno_Move_12.2
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_19.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Magma3_Combate_Magno_Texto_19.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Magma3_Combate_Magno_Move_18
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Magma3_Combate_Magno_Move_14
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Magma3_Combate_Magno_Move_14.1
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_21.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Magma3_Combate_Magno_Move_14.2
waitmovement 0x0
delay 10
msgbox Magma3_Combate_Magno_Texto_21.2 MSGBOX_AUTOCLOSE
delay 10
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

Magma3_Combate_Magno_Move_14.1:
delay_8
face_right
delay_16
delay_8
face_left
delay_16
walk_in_place_left
delay_8
step_end

Magma3_Combate_Magno_Move_14.2:
delay_16
face_up
delay_16
delay_8
face_left
delay_8
step_end

Magma3_Combate_Magno_Move_17.1:
face_left
step_end

Magma3_Combate_Magno_Move_12.1:
face_up
step_end

Magma3_Combate_Magno_Move_12.2:
face_player
step_end

Magma3_Combate_Magno_Move_4.1:
walk_in_place_left
step_end

Magma3_Combate_Magno_Move_15.1:
emote_question_mark
step_end

Magma3_Combate_Magno_Texto_1:
.string "MAGNO: Demasiado tiempo has esperado.\n"
	.string "Pero al fin, me presento como un humilde\l"
	.string "servidor de tu causa; gracias a la ESFERA\l"
	.string "ROJA puedo controlarte, pero no temas; no\l"
	.string "haré más que cumplir tu voluntad{PAUSE 5}…{PAUSE 5}$"

Magma3_Combate_Magno_Texto_2:
.string "Así que mi fiel COMANDANTE TATIANO no\n"
	.string "ha podido frenarte{PAUSE 15}…{PAUSE 15}\l"
	.string "Debes ser un ENTRENADOR excepcional, y\l"
	.string "definitivamente te has ganado el derecho\l"
	.string "a presenciar algo grande.\l"
	.string "Todo está dispuesto.$"

Magma3_Combate_Magno_Texto_2.1:
	.string "¡Aproxímate, ROCKET!\n"
	.string "¡Ahora!$"

Magma3_Combate_Magno_Texto_3:
.string "GROUDON descansa aquí.\n"
	.string "Todo cuanto necesitamos para convocarle\l"
	.string "es hacer brillar la ESFERA ROJA una\l"
	.string "vez más.$"

Magma3_Combate_Magno_Texto_4:
.string "¡GROUDON!\n"
	.string "¡AL FIN!\l"
	.string "¡Ahora podrás terminar de una vez\l"
	.string "por todas la noble tarea que se te\l"
	.string "encomendó!\p"
	.string "¡Habrá tierra suficiente para todos!\n"
	.string "¡Gracias a tu poder, podremos regular\l"
	.string "a la perfección cuanta es necesaria\l"
	.string "añadir o quitar!\p"
	.string "¡Una vez queden demostradas nuestras\n"
	.string "teorías el mundo deberá admitir que\l"
	.string "el EQUIPO MAGMA tenía razón!$"

Magma3_Combate_Magno_Texto_5:
.string "En cuanto a ti, ya has visto bastante.\n"
	.string "Espero que te haya merecido la pena el\l"
	.string "espectáculo, porque ha sido el último\l"
	.string "para ti: ya te lo advertí.$"

Magma3_Combate_Magno_Texto_6:
.string "Llevo más de una década recorriendo\n"
	.string "el mundo, en busca de los mejores\l"
	.string "POKÉMON TIPO FUEGO y TIERRA.$"

Magma3_Combate_Magno_Texto_6.1:
	.string "Muchas opciones, descartes, cambios…\n"
	.string "POKÉMON que se adecúan más o menos a\l"
	.string "la esencia de mi plan.$"

Magma3_Combate_Magno_Texto_6.2:
	.string "Pero al fin, después de tanto, lo he\n"
	.string "logrado: he formado el equipo perfecto\l"
	.string "para construir una tierra mejor.$"

Magma3_Combate_Magno_Texto_6.3:
	.string "Con GROUDON, señor de la tierra, al\n"
	.string "frente{PAUSE 5}…{PAUSE 5}\l"
	.string "¡Nada ni nadie podrá detenerme!$"

Magma3_Combate_Magno_Texto_7:
.string "¡No es posible!\n"
	.string "¿De dónde sale tu poder?$"

Magma3_Combate_Magno_Texto_8:
.string "P{PAUSE 25}-{PAUSE 25}pero{PAUSE 15}…{PAUSE 15}\n"
	.string "Lo tenía todo{PAUSE 15}…{PAUSE 15}\l"
	.string "G{PAUSE 25}-{PAUSE 25}GROUDON estaba aquí, delante mía,\l"
	.string "y ha desplegado el inmenso poder del\l"
	.string "que habla la leyenda{PAUSE 15}…{PAUSE 15}$"

Magma3_Combate_Magno_Texto_8.1:
	.string "¡¿Cómo has podido contrarestarlo\n"
	.string "con solo POKÉMON corrientes?!\l"
	.string "¡No tiene sentido!$"

Magma3_Combate_Magno_Texto_9:
.string "????: Ya es suficiente, MAGNO.\n"
	.string "Hasta aquí has llegado.$"

Magma3_Combate_Magno_Texto_10:
.string "MAGNO: ¡TÚ!$"

Magma3_Combate_Magno_Texto_11:
.string "ZEUS: Tus cálculos han fallado, nunca\n"
	.string "debiste llegar tan lejos.\l"
	.string "Aunque tengo que agradecértelo, sin\l"
	.string "tu obsesión por GROUDON, jamás\l"
	.string "podrías haberme llevado hasta aquí.$"

Magma3_Combate_Magno_Texto_12:
.string "MAGNO: ¡Maldito!\n"
	.string "¡No voy a permitir que GROUDON sea\l"
	.string "una mera pieza más dentro de…!$"

Magma3_Combate_Magno_Texto_13:
.string "ZEUS: Ya no puedes hacer nada.\n"
	.string "¡FLOETTE!\l"
	.string "¡PSÍQUICO!$"

Magma3_Combate_Magno_Texto_14:
.string "-ZEUS le arrebató a MAGNO todos sus\n"
	.string "POKÉMON junto con la ESFERA ROJA.-$"

Magma3_Combate_Magno_Texto_15:
.string "MAGNO: {PAUSE 15}…{PAUSE 15}$"

Magma3_Combate_Magno_Texto_16:
.string "¿Q{PAUSE 25}-{PAUSE 15}qué hago yo aquí?$"

Magma3_Combate_Magno_Texto_17:
.string "ZEUS: Eso mismo nos preguntamos\n"
	.string "nosotros; esta cueva no contiene\l"
	.string "nada importante; tus compañeros\l"
	.string "nos han hablado de un tal GROUDON,\l"
	.string "y de una ESFERA AZUL que lo\l"
	.string "despierta.\l"
	.string "Pero eso está en HOENN{PAUSE 5}…{PAUSE 5}$"

Magma3_Combate_Magno_Texto_18:
.string "MAGNO: ¡GROUDON! ¡Sí!\n"
	.string "¡Debo encontrar esa ESFERA AZUL,\l"
	.string "queda mucho por hacer!\l"
	.string "¡Volvemos a HOENN!$"

Magma3_Combate_Magno_Texto_19:
.string "ZEUS: No te preocupes, {PLAYER}.\n"
	.string "Solo le he borrado esa parte de la\l"
	.string "memoria relacionada con la ESFERA\l"
	.string "ROJA, el resto de regiones y viajes\l"
	.string "que ha realizado todos estos años.$"

Magma3_Combate_Magno_Texto_19.1:
	.string "Ahora, está limitado a HOENN y solo\n"
	.string "a HOENN{PAUSE 15}…{PAUSE 15} jamás podrá\l"
	.string "formar un equipo como el que has visto.$"

Magma3_Combate_Magno_Texto_19.2:
	.string "Es lo mejor para todos, incluso para él.\n"
	.string "Gracias a su ignorancia adquirida,\l"
	.string "vuelve a tener un objetivo claro.$"

Magma3_Combate_Magno_Texto_19.3:
	.string "Aunque llegara a hacerse con la\n"
	.string "ESFERA AZUL, ya no pondrá a nadie\l"
	.string "en peligro{PAUSE 5}…{PAUSE 5}$"

Magma3_Combate_Magno_Texto_20:
.string "De nuevo me has impresionado, {PLAYER}.\n"
	.string "Sabes cómo combatir y sacar el máximo\l"
	.string "potencial a tus POKÉMON; empiezo a\l"
	.string "creer que de verdad eres el\l"
	.string "verdadero CAMPEÓN de KANTO.$"

Magma3_Combate_Magno_Texto_21:
.string "Aún queda AQUILES.\n"
	.string "Estaba al sur de ISLA EXTA, supongo\l"
	.string "que, después de lo que has has hecho\l"
	.string "aquí, querrás ir allí también.$"

Magma3_Combate_Magno_Texto_21.1:
	.string "Una parte de mí me dice que, en el\n"
	.string "fondo, disfrutas con esto, ¿no?$"

Magma3_Combate_Magno_Texto_21.2:
	.string "Cualquiera hubiera salido corriendo,\n"
	.string "nada más ver a GROUDON, pero para\l"
	.string "ti, el pasar por estos eventos forma\l"
	.string "parte del camino, ese que te permite\l"
	.string "seguir avanzando, ¿me equivoco?$"

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
delay_8
walk_right
delay_16
face_up
delay_8
delay_16
walk_right
delay_8
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
