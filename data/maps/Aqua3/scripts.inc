Aqua3_MapScripts::
	.byte 0

Aqua3_Combate_Aquiles_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_1
waitmovement 0x0
goto Aqua3_Combate_Aquiles

Aqua3_Combate_Aquiles_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_1.1
waitmovement 0x0
goto Aqua3_Combate_Aquiles

Aqua3_Combate_Aquiles::
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
msgbox Aqua3_Combate_Aquiles_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, Aqua3_Combate_Aquiles_Move_3
waitmovement 0x0
applymovement 1, Aqua3_Combate_Aquiles_Move_4
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_5
waitmovement 0x0
applymovement 1, Aqua3_Combate_Aquiles_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_7
waitmovement 0x0
special RemoveCameraObject
playbgm MUS_ENCOUNTER_AQUA, FALSE
msgbox Aqua3_Combate_Aquiles_Texto_3 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_RESULT, 1
playse SE_M_DETECT
waitse
dofieldeffectsparkle 17, 42, 0
waitfieldeffect FLDEFF_SPARKLE
closemessage
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
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
goto Aqua3_Combate_Aquiles_2
delay 150
removeobject LOCALID_KYOGRE_SLEEPING
addobject LOCALID_KYOGRE
addobject 4
waitstate
delay 60
applymovement 4, MagmaHideout_4F_Movement_GroudonApproach
waitmovement 0
special FadeOutOrbEffect
waitstate
setvar VAR_0x8004, 2  @ vertical pan
setvar VAR_0x8005, 2  @ horizontal pan
setvar VAR_0x8006, 8  @ num shakes
setvar VAR_0x8007, 5  @ shake delay
special ShakeCamera
waitstate
applymovement 4, MagmaHideout_4F_Movement_GroudonExit
waitmovement 0

Aqua3_Combate_Aquiles_2::
special SpawnCameraObject
applymovement 4, TerraCave_End_Movement_GroudonApproach
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 120
playse SE_BALL_THROW
waitse
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
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
msgbox Aqua3_Combate_Aquiles_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_11
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_12
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AQUILES, Aqua3_Combate_Aquiles_Texto_7
msgbox Aqua3_Combate_Aquiles_Texto_8 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox Aqua3_Combate_Aquiles_Texto_9 MSGBOX_AUTOCLOSE
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
msgbox Aqua3_Combate_Aquiles_Texto_10 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_11 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_12 MSGBOX_AUTOCLOSE
applymovement 3, Magma3_Combate_Magno_Move_14
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_15
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_FLOETTE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_SUPERSONIC
waitse
applymovement 3, Magma3_Combate_Magno_Move_1
waitmovement 0x0
playse SE_BALL_TRADE
waitse
msgbox Aqua3_Combate_Aquiles_Texto_14 MSGBOX_AUTOCLOSE
playse SE_RG_CARD_FLIP
applymovement 1, Magma3_Combate_Magno_Move_15.1
waitmovement 0x0
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_16 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
delay 15
applymovement 3, Magma3_Combate_Magno_Move_17
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_18
waitmovement 0x0
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_21 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_4
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_22 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Aqua3_Combate_Aquiles_Move_17
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_24 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_19
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_10
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_6
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_26 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_20
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_10
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_21
waitmovement 0x0
delay 15
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_29 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_22
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 3
fadeoutbgm 0
playse 0
delay 100
playse SE_POKENAV_CALL
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_3
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_30 MSGBOX_AUTOCLOSE
delay 25
playse SE_POKENAV_OFF
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setvar VAR_UNUSED_0x40F7, 101
release
end

Aqua3_Combate_Aquiles_Texto_1:
.string "AQUILES: Pronto serás libre\n"
	.string "KYOGRE, aquellos que te confinaron\l"
	.string "pagarán por haber hecho tal cosa\l"
	.string "a quien posibilitó la\l"
	.string "proliferación de la vida hace\l"
	.string "millones de años, el mar volverá\l"
	.string "por fin a contar con su creador.$"

Aqua3_Combate_Aquiles_Texto_2:
.string "¡Imposible!\n"
	.string "¡Nadie del TEAM ROCKET debería de\l"
	.string "tener el nivel para derrotar al\l"
	.string "ALMIRANTE TOLO!\l"
	.string "Tal vez te subestimé chico, quizás\l"
	.string "no todos los del TEAM ROCKET sean\l"
	.string "como dicen los medios después de\l"
	.string "todo, has demostrado un gran valor\l"
	.string "e interés por lo desconocido para\l"
	.string "llegar hasta aquí, con esas\l"
	.string "cualidades serías un gran miembro\l"
	.string "del EQUIPO AQUA, alguien como tú\l"
	.string "seguro que sabe apreciar el\l"
	.string "espectáculo que está apunto de\l"
	.string "producirse aquí.\l"
	.string "¡Vamos ROCKET camina!\l"
	.string "¡Ya es demasiado tarde para\l"
	.string "echarse atrás, la tormenta te\l"
	.string "engullirá de todos modos!$"

Aqua3_Combate_Aquiles_Texto_3:
.string "KYOGRE duerme en lo profundo de\n"
	.string "este pequeño lago, que un ser\l"
	.string "destinado a gobernar con puño de\l"
	.string "hierro los océanos haya estado\l"
	.string "confinado en este charco por\l"
	.string "milenios es un sacrilegio al que\l"
	.string "pondré fin ahora mismo, solo\l"
	.string "necesito hacer brillar la ESFERA\l"
	.string "AZUL por última vez, y KYOGRE hará\l"
	.string "acto de presencia.\l"
	.string "¡Observa con atencion ROCKET!\l"
	.string "¡No volverás a ver algo así jamás!$"

Aqua3_Combate_Aquiles_Texto_4:
.string "¡KYOGRE!\n"
	.string "¡Señor de los mares!\l"
	.string "¡El mundo necesita de tu inmenso\l"
	.string "poder para restaurar el\l"
	.string "equilibrio!\l"
	.string "¡Contigo de nuevo los mares\l"
	.string "recobrarán su esencia y voluntad\l"
	.string "originales!\l"
	.string "¡Hazme digno de navegar bajo la\l"
	.string "peor de las tormentas que toda tu\l"
	.string "furia pueda dar!\l"
	.string "¡Yo y mis POKÉMON estamos\l"
	.string "preparados!$"

Aqua3_Combate_Aquiles_Texto_5:
.string "Y ahora, se acabó el juego chico,\n"
	.string "es hora de que asumas las\l"
	.string "consecuencias de tus actos, de\l"
	.string "igual forma que tu valor te llevó\l"
	.string "a presenciar el despertar de\l"
	.string "KYOGRE, tu inconsciencia te\l"
	.string "convertirá en el sparring perfecto\l"
	.string "para que KYOGRE recupere la forma\l"
	.string "tras tanto tiempo encerrado.$"

Aqua3_Combate_Aquiles_Texto_6:
.string "He pasado por muchas y muy\n"
	.string "peligrosas aventuras, pero todas\l"
	.string "ellas han hecho a mi equipo mejor,\l"
	.string "a diferencia de esos LÍDERES DE\l"
	.string "GIMNASIO, como esa MISTY de CIUDAD\l"
	.string "CELESTE, o PLUBIO en ARRECÍPOLIS,\l"
	.string "mis POKÉMON del tipo agua están\l"
	.string "hechos de otra pasta, se han\l"
	.string "curtido a base de surcar las aguas\l"
	.string "más bravas de este mundo, con\l"
	.string "KYOGRE comandando a mis leales\l"
	.string "POKÉMON, ¡no hay ENTRENADOR que\l"
	.string "pueda frenarme!\l"
	.string "¡Todo el que se oponga al EQUIPO\l"
	.string "AQUA será silenciado!$"

Aqua3_Combate_Aquiles_Texto_7:
.string "¡Imposible!¡Todo era perfecto!\n"
	.string "¡¡KYOGRE!!$"

Aqua3_Combate_Aquiles_Texto_8:
.string "¿Qué significa esto?\n"
	.string "KYOGRE estaba funcionando a pleno\l"
	.string "rendimiento, no he visto jamás\l"
	.string "ataques acuáticos de semejante\l"
	.string "potencia en mis 20 años de viajes.\l"
	.string "¿De dónde has sacado la fortaleza\l"
	.string "para lidiar con este poder\l"
	.string "ancestral?\l"
	.string "¡Todo mi plan no puede echarse a\l"
	.string "perder de esta manera en cuestión\l"
	.string "de segundos!$"

Aqua3_Combate_Aquiles_Texto_9:
.string "????: Ya se ha echado a perder\n"
	.string "AQUILES, nunca volverás a estar\l"
	.string "tan cerca de controlar a KYOGRE.$"

Aqua3_Combate_Aquiles_Texto_10:
.string "AQUILES: ¡TÚ!$"

Aqua3_Combate_Aquiles_Texto_11:
.string "ZEUS: Alguien como tú no puede\n"
	.string "manejar a tal POKÉMON como si\l"
	.string "fuera un juguete.\l"
	.string "Ahora KYOGRE volverá a estar en\l"
	.string "las manos adecuadas.$"

Aqua3_Combate_Aquiles_Texto_12:
.string "AQUILES: ¿Las manos adecuadas?\n"
	.string "¿No te referirás a las tuyas?\l"
	.string "¡No me hagas reir!\l"
	.string "¡Sabes lo mismo sobre KYOGRE que\l"
	.string "yo sobre los POKÉMON terrestres!\l"
	.string "¡Solo eres un oportunista que...!$"

Aqua3_Combate_Aquiles_Texto_13:
.string "ZEUS: ¡FLOETTE!\l"
	.string "¡PSÍQUICO!$"

Aqua3_Combate_Aquiles_Texto_14:
.string "(ZEUS le arrebató a AQUILES todos\n"
	.string "sus POKÉMON y la ESFERA AZUL).$"

Aqua3_Combate_Aquiles_Texto_15:
.string "AQUILES: ...$"

Aqua3_Combate_Aquiles_Texto_16:
.string "¿Q-qué hago yo aquí?$"

Aqua3_Combate_Aquiles_Texto_17:
.string "ZEUS: Eso mismo nos preguntamos\n"
	.string "nosotros, esta cueva no contiene\l"
	.string "nada importante, tus compañeros\l"
	.string "nos han hablado de un tal KYOGRE,\l"
	.string "y de una ESFERA ROJA que lo\l"
	.string "despierta, pero eso está en\l"
	.string "HOENN...$"

Aqua3_Combate_Aquiles_Texto_18:
.string "AQUILES: ¡KYOGRE sí!\n"
	.string "¡Debo encontrar esa ESFERA ROJA,\l"
	.string "queda mucho por hacer!\l"
	.string "¡Volvemos a HOENN!$"

Aqua3_Combate_Aquiles_Texto_19:
.string "ZEUS: Ahora tanto AQUILES como MAGNO\n"
	.string "están destinados a ser unos\l"
	.string "incompetentes que no pondrán a\l"
	.string "nadie en peligro, si aún llegasen\l"
	.string "a recuperar las esferas, al ser\l"
	.string "las equivocadas todo su plan\l"
	.string "fracasaría de nuevo.$"

Aqua3_Combate_Aquiles_Texto_20:
.string "ZEUS: ...$"

Aqua3_Combate_Aquiles_Texto_21:
.string "¿Ves injusto que les arrebate\n"
	.string "también el equipo que les ha\l"
	.string "llevado décadas construir?\l"
	.string "Es necesario {PLAYER}, ahora solo\l"
	.string "conocen de HOENN, ¿qué crees que\l"
	.string "pensaría AQUILES si ve que cuenta\l"
	.string "con un POKÉMON llamado WISHIWASHI?\l"
	.string "Exacto, se pondrá a investigar, y\l"
	.string "de nuevo volveremos al ciclo.$"

Aqua3_Combate_Aquiles_Texto_22:
.string "Sea como sea, ambos, los dos,\n"
	.string "estaban equivocados.$"

Aqua3_Combate_Aquiles_Texto_23:
.string "Más tierra, más agua...\n"
	.string "Que estupidez, solo el creador de\l"
	.string "todo tiene poder para decidir\l"
	.string "sobre el planeta en su conjunto.$"

Aqua3_Combate_Aquiles_Texto_24:
.string "Lo siento {PLAYER}, pero no te\n"
	.string "conté toda la verdad, es cierto\l"
	.string "que quería evitar que KYOGRE y\l"
	.string "GROUDON cayeran en las manos de\l"
	.string "AQUILES y MAGNO, pero no para\l"
	.string "mantenerlos confinados de nuevo\l"
	.string "hasta el fin de los tiempos...$"

Aqua3_Combate_Aquiles_Texto_25:
.string "AQUILES y MAGNO creían que iban\n"
	.string "detrás de los POKÉMON más\l"
	.string "poderosos de este mundo, y\l"
	.string "ciertamente son muy poderosos, ya\l"
	.string "has tenido ocasión de\l"
	.string "comprobarlo...$"

Aqua3_Combate_Aquiles_Texto_26:
.string "Sin embargo, sus poderes palidezen\n"
	.string "ante el creador de todo, los dos,\l"
	.string "KYOGRE y GROUDON, junto con\l"
	.string "RAYQUAZA, son 3 de los 6 TITANES,\l"
	.string "que, unidos, harán aparecer al\l"
	.string "creador original de todo, el\l"
	.string "verdadero creador del universo,\l"
	.string "algo que de verdad cambiará al\l"
	.string "mundo para siempre, ¿qué es un\l"
	.string "poco más de agua o tierra en\l"
	.string "comparación con un POKÉMON que de\l"
	.string "un solo chasquido podría reducir\l"
	.string "todo a polvo o generar el mayor de\l"
	.string "los paraísos?$"

Aqua3_Combate_Aquiles_Texto_27:
.string "AQUILES y MAGNO se preguntaban el\n"
	.string "porqué de sus derrotas ante ti,\l"
	.string "creían en la perfección de KYOGRE\l"
	.string "y GROUDON, sin embargo, sus\l"
	.string "poderes son incompletos...$"

Aqua3_Combate_Aquiles_Texto_28:
.string "Nada me retiene ya aquí, debo ir\n"
	.string "tras los otros 3 TITANES que me\l"
	.string "faltan, mi próximo destino es\l"
	.string "JOHTO, al parecer el entrenador\l"
	.string "más poderoso y sabio de la región\l"
	.string "tiene en su poder a un POKÉMON que\l"
	.string "encaja con la descripción de otro\l"
	.string "de estos titanes.$"

Aqua3_Combate_Aquiles_Texto_29:
.string "ZEUS: Espero, {PLAYER}, que\n"
	.string "siquiera se te pase por la cabeza\l"
	.string "tratar de oponerte a mi voluntad,\l"
	.string "en nuestro combate de prueba no\l"
	.string "usé más del 50% de mi poder, no\l"
	.string "quisiera que me obligaras a\l"
	.string "desplegar el 100% de mis\l"
	.string "capacidades, pero no dudaré en\l"
	.string "hacerlo si te pones en medio.$"

Aqua3_Combate_Aquiles_Texto_30:
.string "GIOVANNI: ¿ADMIN {PLAYER}?\n"
	.string "¿Sigues en ISLAS SETE?\l"
	.string "Tenemos muchas cosas de las que\l"
	.string "hablar, requiero de tu presencia\l"
	.string "cuanto antes en mi despacho.$"

Aqua3_Combate_Aquiles_Move_1:
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_1.1:
walk_up
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_2:
walk_right
step_end

Aqua3_Combate_Aquiles_Move_3:
emote_exclamation_mark
step_end

Aqua3_Combate_Aquiles_Move_4:
face_left
step_end

Aqua3_Combate_Aquiles_Move_5:
walk_right
walk_right
face_up
step_end

Aqua3_Combate_Aquiles_Move_6:
face_up
step_end

Aqua3_Combate_Aquiles_Move_7:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Aqua3_Combate_Aquiles_Move_8:
slide_down
step_end

Aqua3_Combate_Aquiles_Move_9:
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

Aqua3_Combate_Aquiles_Move_10:
face_left
step_end

Aqua3_Combate_Aquiles_Move_11:
face_right
step_end

Aqua3_Combate_Aquiles_Move_12:
walk_in_place_left
step_end

Aqua3_Combate_Aquiles_Move_13:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Aqua3_Combate_Aquiles_Move_14:
walk_right
walk_right
step_end

Aqua3_Combate_Aquiles_Move_15:
walk_down
face_up
step_end

Aqua3_Combate_Aquiles_Move_16:
emote_question_mark
step_end

Aqua3_Combate_Aquiles_Move_17:
face_down
step_end

Aqua3_Combate_Aquiles_Move_18:
walk_in_place_down
step_end

Aqua3_Combate_Aquiles_Move_19:
walk_left
walk_slow_down
walk_in_place_down
step_end

Aqua3_Combate_Aquiles_Move_20:
walk_slow_up
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_21:
walk_left
walk_left
step_end

Aqua3_Combate_Aquiles_Move_22:
walk_left
walk_left
walk_up
walk_left
walk_left
walk_left
step_end
