.set LOCALID_STEVEN, 1

MeteorFalls_StevensCave_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, MeteorFalls_StevensCave_OnFrame
	.byte 0

MeteorFalls_StevensCave_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 244, MeteorFalls_StevensCave_Andra
	.2byte 0

MeteorFalls_StevensCave_EventScript_Steven::
	lock
	goto_if_set FLAG_DEFEATED_METEOR_FALLS_STEVEN, MeteorFalls_StevensCave_EventScript_Defeated
	waitse
	playse SE_PIN
	applymovement LOCALID_STEVEN, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_STEVEN, MeteorFalls_StevensCave_Text_StevenDefeat
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_METEOR_FALLS_STEVEN
	release
	end

MeteorFalls_StevensCave_EventScript_Defeated::
	applymovement LOCALID_STEVEN, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MeteorFalls_StevensCave_Text_MyPredictionCameTrue, MSGBOX_DEFAULT
	release
	end

MeteorFalls_StevensCave_Text_ShouldKnowHowGoodIAmExpectWorst:
	.string "STEVEN: Oh, wow, {PLAYER}{KUN}.\n"
	.string "I'm amazed you knew where to find me.\p"
	.string "Do you, uh…maybe think of me as\n"
	.string "just a rock maniac?\p"
	.string "No, that can't be right.\p"
	.string "We battled alongside each other at\n"
	.string "the SOOTOPOLIS SPACE CENTER.\p"
	.string "You should have a very good idea\n"
	.string "about how good I am.\p"
	.string "Okay, {PLAYER}{KUN}, if you're going to mount\n"
	.string "a serious challenge, expect the worst!$"

MeteorFalls_StevensCave_Text_StevenDefeat:
	.string "You…\n"
	.string "I had no idea you'd become so strong{PAUSE 5}…{PAUSE 5}$"

MeteorFalls_StevensCave_Text_MyPredictionCameTrue:
	.string "STEVEN: Come to think of it, ever since\n"
	.string "our paths first crossed in GRANITE\l"
	.string "CAVE in DEWFORD, I had this feeling.\p"
	.string "I thought that you would eventually\n"
	.string "become the CHAMPION.\p"
	.string "My predictions usually come true.\p"
	.string "And where will you go from here?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Fufufu, even I couldn't tell you that.$"

StevensCave_Andra_Move_1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

StevensCave_Andra_Move_1.1:
walk_down
walk_down
step_end

StevensCave_Andra_Move_2:
emote_exclamation_mark
step_end

StevensCave_Andra_Move_3:
face_down
step_end

StevensCave_Andra_Move_4:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_up
step_end

StevensCave_Andra_Move_5:
face_right
step_end

StevensCave_Andra_Move_6:
face_up
step_end

StevensCave_Andra_Move_7:
walk_in_place_down
step_end

StevensCave_Andra_Move_8:
face_left
step_end

StevensCave_Andra_Move_9:
walk_in_place_left
step_end

StevensCave_Andra_Move_10:
walk_down
walk_down
walk_right
walk_down
step_end

StevensCave_Andra_Move_11:
walk_in_place_right
step_end

StevensCave_Andra_Move_12:
walk_slow_up
walk_slow_up
step_end

StevensCave_Andra_Move_13:
delay_16
delay_8
face_up
step_end

StevensCave_Andra_Move_14:
walk_down
walk_down
face_right
step_end

StevensCave_Andra_Move_15:
delay_16
face_left
step_end

MeteorFalls_StevensCave_Andra::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, StevensCave_Andra_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 10
msgbox MeteorFalls_StevensCave_Andra_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, StevensCave_Andra_Move_2
waitmovement 0x0
delay 10
applymovement 1, StevensCave_Andra_Move_3
waitmovement 0x0
applymovement 2, StevensCave_Andra_Move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, StevensCave_Andra_Move_1.1
waitmovement 0x0
special RemoveCameraObject
msgbox MeteorFalls_StevensCave_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_5
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_6
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, StevensCave_Andra_Move_2
waitmovement 0x0
applymovement 2, StevensCave_Andra_Move_6
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_3
waitmovement 0x0
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, StevensCave_Andra_Move_2
waitmovement 0x0
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_7
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_8
waitmovement 0x0
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_9
waitmovement 0x0
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_3
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, StevensCave_Andra_Move_2
waitmovement 0x0
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_7
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_10
waitmovement 0x0
applymovement 2, StevensCave_Andra_Move_5
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, StevensCave_Andra_Move_8
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_11
waitmovement 0x0
delay 10
msgbox MeteorFalls_StevensCave_Andra_Texto_18 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_12
applymovement 1, StevensCave_Andra_Move_13
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_3
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_20 MSGBOX_AUTOCLOSE
delay 25
applymovement 1, StevensCave_Andra_Move_3
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_21 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, StevensCave_Andra_Move_7
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_23 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_14
applymovement 1, StevensCave_Andra_Move_15
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_13
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_27 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_16
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_29 MSGBOX_AUTOCLOSE
applymovement 1, StevensCave_Andra_Move_8
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_31 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_17
playse SE_PIN
applymovement 1, StevensCave_Andra_Move_2
waitmovement 0x0
applymovement 1, StevensCave_Andra_Move_3
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_33 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_7
waitmovement 0x0
msgbox MeteorFalls_StevensCave_Andra_Texto_34 MSGBOX_AUTOCLOSE
applymovement 2, StevensCave_Andra_Move_5
waitmovement 0x0
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_35 MSGBOX_AUTOCLOSE
playmoncry SPECIES_SALAMENCE, CRY_MODE_ENCOUNTER
msgbox MeteorFalls_StevensCave_Andra_Texto_36 MSGBOX_AUTOCLOSE
waitmoncry
applymovement 2, StevensCave_Andra_Move_18
waitmovement 0x0
delay 15
msgbox MeteorFalls_StevensCave_Andra_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, StevensCave_Andra_Move_5
waitmovement 0x0
delay 10
msgbox MeteorFalls_StevensCave_Andra_Texto_38 MSGBOX_AUTOCLOSE
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
msgbox MeteorFalls_StevensCave_Andra_Texto_39 MSGBOX_AUTOCLOSE
waitmoncry
setvar VAR_UNUSED_0x40F7, 245
applymovement 1, StevensCave_Andra_Move_19
waitmovement 0x0
warpsilent MAP_SS_TIDAL_CORRIDOR, 3, 11
delay 50
release
end

StevensCave_Andra_Move_19:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
step_end

StevensCave_Andra_Move_18:
walk_down
walk_right
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
step_end

StevensCave_Andra_Move_17:
walk_down
step_end

StevensCave_Andra_Move_16:
walk_in_place_up
step_end

MeteorFalls_StevensCave_Andra_Texto_1:
	.string "????: Interesante lugar, ¿no?$"

MeteorFalls_StevensCave_Andra_Texto_2:
	.string "ANDRA: Tú.$"

MeteorFalls_StevensCave_Andra_Texto_3:
	.string "TRISTANA: Si lo que buscas es un buen\n"
	.string "POKÉMON para tu equipo, te recomiendo\l"
	.string "que captures un BAGON.$"

MeteorFalls_StevensCave_Andra_Texto_4:
	.string "ANDRA: Solo estoy explorando este\n"
	.string "lugar por el mero placer de hacerlo.$"

MeteorFalls_StevensCave_Andra_Texto_5:
	.string "De todos modos, no quiero tus consejos.$"

MeteorFalls_StevensCave_Andra_Texto_6:
	.string "TRISTANA: ¿No? Creí que podíamos\n"
	.string "llevarnos bien después de lo del PILAR\l"
	.string "DUN.$"

MeteorFalls_StevensCave_Andra_Texto_7:
	.string "ANDRA: Habrás podido engañar a\n"
	.string "{PLAYER}, pero no a mí.$"

MeteorFalls_StevensCave_Andra_Texto_8:
	.string "TRISTANA: ¿A qué te refieres?$"

MeteorFalls_StevensCave_Andra_Texto_9:
	.string "ANDRA: Ese DRAGONITE… Era tuyo,\n"
	.string "¿verdad?$"

MeteorFalls_StevensCave_Andra_Texto_10:
	.string "Visité ese lugar más tarde, cuando el\n"
	.string "DRAGONITE desapareció.$"

MeteorFalls_StevensCave_Andra_Texto_11:
	.string "El POKÉMON que usó MIGUEL en TORRE\n"
	.string "RADIO… WRONGSPARCE…$"

MeteorFalls_StevensCave_Andra_Texto_12:
	.string "Solo pudo obtenerlo en un lugar como\n"
	.string "ese, y tú le estabas ayudando.$"

MeteorFalls_StevensCave_Andra_Texto_13:
	.string "Seguro que también trabajas para\n"
	.string "DEVON.$"

MeteorFalls_StevensCave_Andra_Texto_14:
	.string "TRISTANA: Oh, eres muy perspicaz.$"

MeteorFalls_StevensCave_Andra_Texto_15:
	.string "ANDRA: Con permiso.$"

MeteorFalls_StevensCave_Andra_Texto_16:
	.string "TRISTANA: Un momento.$"

MeteorFalls_StevensCave_Andra_Texto_17:
	.string "ANDRA: Qué quieres.$"

MeteorFalls_StevensCave_Andra_Texto_18:
	.string "TRISTANA: Es cierto que trabajo para\n"
	.string "DEVON, pero mis motivos son muy\l"
	.string "diferentes de los que crees.$"

MeteorFalls_StevensCave_Andra_Texto_19:
	.string "Solo quiero mantener el equilibrio de\n"
	.string "HOENN. Conservar la historia y tradición\l"
	.string "de esta región.$"

MeteorFalls_StevensCave_Andra_Texto_20:
	.string "Tenemos más cosas en común de las que\n"
	.string "crees. Yo podría ayudarte a encontrar\l"
	.string "lo que buscas.$"

MeteorFalls_StevensCave_Andra_Texto_21:
	.string "ANDRA: ¿Igual que hiciste con MIGUEL?\n"
	.string "Lo siento pero ese no es mi estilo.$"

MeteorFalls_StevensCave_Andra_Texto_22:
	.string "Aunque me ofrecieras al mismísimo\n"
	.string "POKÉMON ESENCIA, jamás me vendería a\l"
	.string "DEVON.$"

MeteorFalls_StevensCave_Andra_Texto_23:
	.string "TRISTANA: DEVON no sabe que estamos\n"
	.string "teniendo esta conversación.$"

MeteorFalls_StevensCave_Andra_Texto_24:
	.string "Este encuentro ha sido casual, ANDRA.\n"
	.string "CASCADA METEORO es un lugar especial\l"
	.string "para mí, y no busco nada a cambio.$"

MeteorFalls_StevensCave_Andra_Texto_25:
	.string "Que obtengas algo de lo que voy a\n"
	.string "decirte solo depende de ti, si no\l"
	.string "supiera que eres una ENTRENADORA\l"
	.string "excepcional, jamás te lo diría.$"

MeteorFalls_StevensCave_Andra_Texto_26:
	.string "ANDRA: En ese caso, di lo que tengas que\n"
	.string "decir. Yo después haré lo que quiera.$"

MeteorFalls_StevensCave_Andra_Texto_27:
	.string "TRISTANA: ¿Has estado en CIUDAD\n"
	.string "ALGARIA?$"

MeteorFalls_StevensCave_Andra_Texto_28:
	.string "ANDRA: No, me interesan más otros\n"
	.string "lugares como ARRECÍPOLIS.$"

MeteorFalls_StevensCave_Andra_Texto_29:
	.string "Pero… solo me quedan 2 GIMNASIOS de\n"
	.string "HOENN por derrotar.$"

MeteorFalls_StevensCave_Andra_Texto_30:
	.string "El de CIUDAD ALGARIA es uno de ellos,\n"
	.string "así que iré de todos modos.$"

MeteorFalls_StevensCave_Andra_Texto_31:
	.string "TRISTANA: En ese caso, visita la ciudad.\n"
	.string "Pasea por sus calles. Disfruta del\l"
	.string "paisaje y las vistas al mar.$"

MeteorFalls_StevensCave_Andra_Texto_32:
	.string "ANDRA: ¿Eso es todo?$"

MeteorFalls_StevensCave_Andra_Texto_33:
	.string "TRISTANA: Si estás preparada, no\n"
	.string "necesitas más.$"

MeteorFalls_StevensCave_Andra_Texto_34:
	.string "De todos modos, ibas a hacer lo que\n"
	.string "quieras, ¿no?$"

MeteorFalls_StevensCave_Andra_Texto_35:
	.string "¿Verdad, SALAMENCE?$"

MeteorFalls_StevensCave_Andra_Texto_36:
	.string "¡mence!$"

MeteorFalls_StevensCave_Andra_Texto_37:
	.string "ANDRA: Qué impertinente.$"

MeteorFalls_StevensCave_Andra_Texto_38:
	.string "Si volvemos a cruzarnos con ese\n"
	.string "SALAMENCE, ya sabes qué hacer CROBAT.$"

MeteorFalls_StevensCave_Andra_Texto_39:
	.string "¡bat!$"


