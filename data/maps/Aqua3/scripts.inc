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
	.string "ARCHIE: Soon, you will be free, KYOGRE.\n"
	.string "Those who confined you will pay for\l"
	.string "having done such a thing to the one who\l"
	.string "made the proliferation of life possible\l"
	.string "millions of years ago. The sea will\l"
	.string "finally have its creator back.$"

Aqua3_Combate_Aquiles_Texto_2:
	.string "Impossible! No one from TEAM ROCKET\n"
	.string "should have the level to defeat\l"
	.string "ADMIN.MATT! Perhaps I underestimated\l"
	.string "you, kid. Maybe not all of TEAM ROCKET\l"
	.string "are as the media says after all. You've\l"
	.string "shown great courage and interest in\l"
	.string "the unknown to get this far. With those\l"
	.string "qualities, you'd be a great member of\l"
	.string "TEAM AQUA. Someone like you surely\l"
	.string "knows how to appreciate the spectacle\l"
	.string "that's about to unfold here. Come on,\l"
	.string "ROCKET, walk! It's already too late to\l"
	.string "back down; the storm will engulf you\l"
	.string "anyway!$"

Aqua3_Combate_Aquiles_Texto_3:
	.string "KYOGRE sleeps in the depths of this\n"
	.string "small lake. Such a POKÉMON destined to\l"
	.string "rule the oceans... confined to this\l"
	.string "puddle for millennia... is sacrilege that\l"
	.string "I will end right now. I just need to make\l"
	.string "the BLUE ORB shine one last time, and\l"
	.string "KYOGRE will make its appearance. Watch\l"
	.string "closely, ROCKET! You won't see\l"
	.string "something like this ever again!$"

Aqua3_Combate_Aquiles_Texto_4:
	.string "KYOGRE! Lord of the seas! The world\n"
	.string "needs your immense power to restore\l"
	.string "balance! With you, the seas will regain\l"
	.string "their original essence and will! Make me\l"
	.string "worthy to sail under the worst storm\l"
	.string "your fury can unleash! My POKÉMON and I\l"
	.string "are ready!$"

Aqua3_Combate_Aquiles_Texto_5:
	.string "And now, game over, kid. It's time for\n"
	.string "you to face the consequences of your\l"
	.string "actions. Just as your courage led you\l"
	.string "to witness KYOGRE's awakening, your\l"
	.string "recklessness will make you the perfect\l"
	.string "sparring partner for KYOGRE to regain\l"
	.string "its form after being confined for so\l"
	.string "long$"

Aqua3_Combate_Aquiles_Texto_6:
	.string "I've been through many and very\n"
	.string "dangerous adventures, but all of them\l"
	.string "have made my team better. Unlike those\l"
	.string "GYM LEADERS, like that MISTY from\l"
	.string "CERULEAN CITY, or JUAN in SOOTOPOLIS,\l"
	.string "my Water-type POKÉMON are made of\l"
	.string "sturdier stuff. They have toughened\l"
	.string "themselves by navigating the roughest\l"
	.string "waters in this world, with KYOGRE\l"
	.string "leading my loyal POKÉMON. No TRAINER\l"
	.string "can stop me! All who opposes TEAM AQUA\l"
	.string "will be silenced!$"

Aqua3_Combate_Aquiles_Texto_7:
	.string "Impossible! Everything was perfect!\n"
	.string "KYOGRE!$"

Aqua3_Combate_Aquiles_Texto_8:
	.string "What does this mean? KYOGRE was\n"
	.string "performing at full capacity. I've never\l"
	.string "seen aquatic attacks of such power in\l"
	.string "my 20 years of travels. Where did you\l"
	.string "find the strength to deal with this\l"
	.string "ancestral power? My entire plan can't\l"
	.string "fall apart just like this!$"

Aqua3_Combate_Aquiles_Texto_9:
	.string "????: It's already ruined, ARCHIE. You'll\n"
	.string "never be this close to controlling\l"
	.string "KYOGRE again.$"

Aqua3_Combate_Aquiles_Texto_10:
	.string "ARCHIE: YOU!$"

Aqua3_Combate_Aquiles_Texto_11:
	.string "ZEUS: Someone like you can't handle\n"
	.string "such a POKÉMON as if it were a toy. Now\l"
	.string "KYOGRE will be back in the right hands.$"

Aqua3_Combate_Aquiles_Texto_12:
	.string "ARCHIE: The right hands? You don't\n"
	.string "mean yours, do you? Don't make me laugh!\l"
	.string "You know as much about KYOGRE as I do\l"
	.string "about land POKÉMON! You're just an\l"
	.string "opportunist who...!$"

Aqua3_Combate_Aquiles_Texto_13:
	.string "ZEUS: FLOETTE! PSYCHIC!$"

Aqua3_Combate_Aquiles_Texto_14:
	.string "(ZEUS took away all ARCHIE's POKÉMON\n"
	.string "and the BLUE ORB).$"

Aqua3_Combate_Aquiles_Texto_15:
	.string "ARCHIE: …$"

Aqua3_Combate_Aquiles_Texto_16:
	.string "W-what am I doing here?$"

Aqua3_Combate_Aquiles_Texto_17:
	.string "ZEUS: That's exactly what we're\n"
	.string "wondering too. This cave doesn't hold\l"
	.string "anything significant. Your companions\l"
	.string "have told us about some POKÉMON named\l"
	.string "KYOGRE and a RED ORB that awakens it,\l"
	.string "but that's in HOENN...$"

Aqua3_Combate_Aquiles_Texto_18:
	.string "ARCHIE: KYOGRE, yes! I must find that\n"
	.string "RED ORB; there's a lot to do! We're going\l"
	.string "back to HOENN!$"

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
