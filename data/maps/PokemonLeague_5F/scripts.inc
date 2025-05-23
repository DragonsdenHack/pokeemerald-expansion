PokemonLeague_5F_MapScripts::
	.byte 0

PokemonLeague_5F_Azul_Rojo::
lockall
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
addobject 13
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_2
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_3
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_5
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
msgbox PokemonLeague_5F_Azul_Rojo_Texto_2 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_M_FLAMETHROWER
delay 20
playse SE_SUPER_EFFECTIVE
delay 40
playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
msgbox PokemonLeague_5F_Azul_Rojo_Texto_3 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_FAINT
delay 30
msgbox PokemonLeague_5F_Azul_Rojo_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_5F_Azul_Rojo_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_6
waitmovement 0x0
special RemoveCameraObject
delay 15
playse SE_EXIT
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 2
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_7
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_7
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_9
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_9
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_8
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox PokemonLeague_5F_Azul_Rojo_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_PALLET
msgbox PokemonLeague_5F_Azul_Rojo_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, PokemonLeague_5F_Azul_Rojo_Move_10
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_11
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_12
waitmovement 0x0
delay 19
msgbox PokemonLeague_5F_Azul_Rojo_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_13
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_14
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_15
waitmovement 0x0
delay 20
msgbox PokemonLeague_5F_Azul_Rojo_Texto_10 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_5F_Azul_Rojo_Texto_11 MSGBOX_AUTOCLOSE
delay 13
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_18
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_16
applymovement 13, PokemonLeague_5F_Azul_Rojo_Move_17
delay 110
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
removeobject 2
playse SE_EXIT
waitmovement 0x0
delay 10
playse SE_EXIT
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
removeobject 13
waitmovement 0x0
delay 106
playse SE_UNLOCK
setmetatile 6, 2, 0x293, FALSE
setmetatile 6, 1, 0x28B, TRUE
special DrawWholeMapView
playse MUS_DUMMY
delay 64
clearflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
addobject 14
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_20
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_21
waitmovement 0x0
delay 37
msgbox PokemonLeague_5F_Azul_Rojo_Texto_12 MSGBOX_AUTOCLOSE
delay 37
msgbox PokemonLeague_5F_Azul_Rojo_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_22
waitmovement 0x0
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_14 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_23
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_15 MSGBOX_AUTOCLOSE
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_24
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_14
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_16 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_25
waitmovement 0x0
playse SE_PIN
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_7
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_17 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_26
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_15
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_14
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_18 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_26.2
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_18.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_26.3
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_26.3
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_26.3
clearflag FLAG_HIDE_HO_OH
playse SE_EXIT
delay 25
playse SE_EXIT
delay 25
playse SE_EXIT
delay 55
addobject 7
addobject 8
addobject 9
applymovement 9, PokemonLeague_5F_Azul_Rojo_Move_27
applymovement 8, PokemonLeague_5F_Azul_Rojo_Move_27
applymovement 7, PokemonLeague_5F_Azul_Rojo_Move_28
waitmovement 0x0
playse SE_PIN
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_7
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_7
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_7
waitmovement 0x0
playse MUS_RG_VICTORY_ROAD
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_19 MSGBOX_AUTOCLOSE
delay 32
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_29
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_20 MSGBOX_AUTOCLOSE
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_21 MSGBOX_AUTOCLOSE
delay 32
addobject 10
addobject 11
addobject 12
playse SE_EXIT
delay 25
playse SE_EXIT
delay 25
playse SE_EXIT
delay 55
applymovement 12, PokemonLeague_5F_Azul_Rojo_Move_30
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_31
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_32
waitmovement 0x0
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_22 MSGBOX_AUTOCLOSE
delay 16
msgbox PokemonLeague_5F_Azul_Rojo_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_33
addobject 5
addobject 6
addobject 4
playse SE_EXIT
delay 25
playse SE_EXIT
delay 25
playse SE_EXIT
delay 55
applymovement 4, PokemonLeague_5F_Azul_Rojo_Move_34
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_35
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_36
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_23 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_23.1 MSGBOX_AUTOCLOSE
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_24 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_5F_Azul_Rojo_Texto_25 MSGBOX_AUTOCLOSE
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_26 MSGBOX_AUTOCLOSE
delay 24
playse SE_BREAKABLE_DOOR
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_27 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_5F_Azul_Rojo_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_38
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_29 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HERACROSS, CRY_MODE_ENCOUNTER
msgbox PokemonLeague_5F_Azul_Rojo_Texto_30 MSGBOX_DEFAULT
waitmoncry
applymovement 4, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_38
delay 5
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 12, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_38
waitmovement 0x0
special RemoveCameraObject
playse SE_M_TAKE_DOWN
delay 24
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playse SE_UNLOCK
setmetatile 6, 2, 0x296, FALSE
setmetatile 6, 1, 0x3F2, TRUE
special DrawWholeMapView
playse SE_PIN
applymovement 4, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 12, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 7, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 8, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 9, PokemonLeague_5F_Azul_Rojo_Move_39
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_31 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37.1
waitmovement 0x0
waitse
msgbox PokemonLeague_5F_Azul_Rojo_Texto_32 MSGBOX_AUTOCLOSE
fadenewbgm 627
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_42
applymovement 7, PokemonLeague_5F_Azul_Rojo_Move_40
applymovement 8, PokemonLeague_5F_Azul_Rojo_Move_40
applymovement 9, PokemonLeague_5F_Azul_Rojo_Move_41
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_43
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_44
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_45
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_46
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_47
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_33 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_33.1 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
setflag FLAG_HIDE_HO_OH
release
end

PokemonLeague_5F_Azul_Rojo_Andra_Seguir::
lock
msgbox PokemonLeague_5F_Azul_Rojo_Texto_33.1 MSGBOX_SIGN
release
end

PokemonLeague_5F_Azul_Rojo_Move_26.3:
delay_8
emote_exclamation_mark
delay_8
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_26.1:
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_26.2:
walk_in_place_right
step_end


PokemonLeague_5F_Azul_Rojo_Texto_1:
	.string "ANDRA: {PLAYER}! Da bist du ja endlich!\p"
	.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "Ich habe eine gute und eine schlechte\n"
	.string "Nachricht. Die Gute ist, BLAU hat\l"
	.string "SIEGFRIED als Erstes besiegt. Die\l"
	.string "Schlechte ist, dass er gerade von ROT\l"
	.string "regelrecht vernichtet wird. Sieh nur …$"

PokemonLeague_5F_Azul_Rojo_Texto_2:
.string "Char!$"

PokemonLeague_5F_Azul_Rojo_Texto_3:
.string "Blas…$"

PokemonLeague_5F_Azul_Rojo_Texto_4:
.string "ROT: {PAUSE 25}…{PAUSE 25}$"

PokemonLeague_5F_Azul_Rojo_Texto_5:
	.string "BLAU: NEIN!\p"
	.string "Das kann nicht wahr sein!\p"
	.string "Meine besten POKÉMON sind geschlagen!\p"
	.string "Mein SIEGESZUG ist schon vorbei?\p"
	.string "Nach all den Anstrengungen\n"
	.string "LIGA-CHAMPION zu werden?\p"
	.string "Das ist nicht fair!$"

PokemonLeague_5F_Azul_Rojo_Texto_6:
	.string "Wieso?\n"
	.string "Wieso habe ich verloren?\p"
	.string "Ich habe meine POKéMON doch sehr\n"
	.string "sorgfältig aufgezogen … Verdammt!\p"
	.string "Du bist der neue CHAMPION der POKéMON\n"
	.string "LIGA! Aber ich gönne dir das nicht!$"

PokemonLeague_5F_Azul_Rojo_Texto_7:
.string "EICH: ROT!$"

PokemonLeague_5F_Azul_Rojo_Texto_8:
	.string "EICH: Du hast also gewonnen!\n"
	.string "Glückwunsch!\p"
	.string "Du bist der neue Champion\n"
	.string "der POKéMON LIGA!{PAUSE 30}\p"
	.string "Du hast viel dazugelernt, seit du dich\n"
	.string "mit GLUMANDA auf den Weg gemacht hast.\p"
	.string "Du bist schon viel erfahrener!$"

PokemonLeague_5F_Azul_Rojo_Texto_9:
	.string "OAK: EICH: BLAU…{PAUSE 35}\n"
	.string "Du hast mich sehr enttäuscht!\p"
	.string "Als ich hörte, du hättest die TOP VIER\n"
	.string "besiegt, kam ich hierher! Doch als ich\l"
	.string "ankam, warst du der Verlierer! BLAU,\l"
	.string "weißt du, warum du verloren hast?\p"
	.string "Du hast deinen POKéMON nicht genug\n"
	.string "Liebe und Vertrauen entgegengebracht!\p"
	.string "So wirst du niemals Sieger werden!$"

PokemonLeague_5F_Azul_Rojo_Texto_10:
	.string "EICH: ROT!\p"
	.string "Du hast begriffen, dass dein Sieg nicht\n"
	.string "alleine dein Verdienst war!\p"
	.string "Die Beziehung zu deinen POKéMON\n"
	.string "ist vorbildlich!$"

PokemonLeague_5F_Azul_Rojo_Texto_11:
	.string "ROT!\n"
	.string "Folge mir!$"

PokemonLeague_5F_Azul_Rojo_Texto_12:
.string "BLAU: {PAUSE 25}…{PAUSE 25}$"

PokemonLeague_5F_Azul_Rojo_Texto_13:
	.string "O-{PAUSE 45}Opa…{PAUSE 35} Warte…{PAUSE 35} Bitte…{PAUSE 35}\p"
	.string "Ich habe mein Bestes gegeben …!{PAUSE 25}\p"
	.string "Ich habe meine POKéMON von Anfang an\n"
	.string "mit Liebe und Vertrauen behandelt …!\p"
	.string "Ich habe sie nie enttäuscht oder als\n"
	.string "bloße Werkzeuge gesehen, so wie ROT\l"
	.string "es tut …!$"

PokemonLeague_5F_Azul_Rojo_Texto_14:
	.string "Nach allem, was ich durchgestanden\n"
	.string "habe, nach all den Schwierigkeiten,\l"
	.string "dachte ich, du wärst stolz auf mich …\l"
	.string "auch wenn ich gegen ROT verloren habe!\p"
	.string "Ich dachte, du würdest zumindest\n"
	.string "anerkennen, dass ich mein Bestes\l"
	.string "gegeben habe und ein Team aufgebaut\l"
	.string "habe, das stark genug war, um die TOP\l"
	.string "VIER zu besiegen!$"

PokemonLeague_5F_Azul_Rojo_Texto_15:
	.string "Aber das hast du noch nie getan, OPA {PAUSE 15}…{PAUSE 15}\n"
	.string "Ich verstehe jetzt, dass du zu den\l"
	.string "Menschen gehörst, die einen einfach\l"
	.string "fallen lassen, wenn sie nicht mehr die\l"
	.string "Besten sind! Was hier heute passiert\l"
	.string "ist … werde ich nie vergessen!$"

PokemonLeague_5F_Azul_Rojo_Texto_16:
	.string "ANDRA: Komm runter, BLAU! Ich habe den\n"
	.string "Kampf gesehen. Du bist viel besser\l"
	.string "geworden, seit wir das letzte Mal\l"
	.string "gekämpft haben. Du hast genau das\l"
	.string "erreicht, was du wolltest: Ein starkes\l"
	.string "und ausgeglichenes Team. Gib dir nicht\l"
	.string "die Schuld für deine Niederlage gegen\l"
	.string "ROT. Sein Kampfstil {PAUSE 25}…{PAUSE 25} Und die Stärke und\l"
	.string "Energie seiner POKéMON {PAUSE 25}…{PAUSE 25} sind einfach\l"
	.string "nicht normal {PAUSE 25}…{PAUSE 25}$"

PokemonLeague_5F_Azul_Rojo_Texto_17:
.string "BLAU: {PLAYER}!!!\p"
	.string "Da bist du ja!$"

PokemonLeague_5F_Azul_Rojo_Texto_18:
	.string "So kann es nicht enden! Ich habe es so\n"
	.string "satt, diese Aura der Unbesiegbarkeit um\l"
	.string "ROT herum zu spüren! Ich habe genug\l"
	.string "davon, dass er als unantastbarer und\l"
	.string "makelloser TRAINER dargestellt wird,\l"
	.string "der nie verliert! Und dann noch dieses\l"
	.string "geheimnisvolle Getue gepaart mit dieser\l"
	.string "Respektlosigkeit, dir nicht mal ein\l"
	.string "einziges Wort zu sagen, nachdem er dich\l"
	.string "vernichtet hat! Das ist so respektlos!$"

PokemonLeague_5F_Azul_Rojo_Texto_18.1:
	.string "{PLAYER}!\p"
	.string "Du musst ihn fertig ma…!{PAUSE 25}$"

PokemonLeague_5F_Azul_Rojo_Texto_19:
	.string "POLIZIST: Die Party ist vorbei, Kinder!\p"
	.string "Wir haben einen neuen CHAMPION!\p"
	.string "Die POKéMON LIGA Herausforderung\n"
	.string "ist hiermit offiziell vorbei!$"

PokemonLeague_5F_Azul_Rojo_Texto_20:
	.string "ANDRA: Moment mal! {PLAYER} und ich\n"
	.string "haben gerade ebenfalls die TOP VIER\l"
	.string "besiegt! So wie ROT vorhin die Chance\l"
	.string "hatte, gegen BLAU zu kämpfen,\l"
	.string "verdienen wir es, ROT um den Titel\l"
	.string "herauszufordern! Immerhin haben wir\l"
	.string "es bis hierher geschafft!$"

PokemonLeague_5F_Azul_Rojo_Texto_21:
	.string "POLIZIST: Du bist wirklich nicht in der\n"
	.string "Position, hier irgendwelche Forderungen\l"
	.string "zu stellen, Kleine!$"

PokemonLeague_5F_Azul_Rojo_Texto_22:
.string "Ihr verdient es nicht, hier zu stehen!\p"
	.string "Ihr seid eine Schande für EICH!$"

PokemonLeague_5F_Azul_Rojo_Texto_23:
	.string "BRUNO hat uns die ganze Sache erklärt.\p"
	.string "Sowohl die POKéMON LIGA, als auch eure\n"
	.string "Freiheit enden hier und jetzt!$"

PokemonLeague_5F_Azul_Rojo_Texto_23.1:
	.string "Wir haben genug Beweise, um euch\n"
	.string "lebenslang hinter Gitter zu bringen!\p"
	.string "Wenn ihr kooperiert und keinen\n"
	.string "Widerstand leistet, lassen wir euch\l"
	.string "vielleicht in ein paar Jahrzehnten\l"
	.string "wieder frei!$"

PokemonLeague_5F_Azul_Rojo_Texto_24:
.string "ANDRA: {PAUSE 15}…{PAUSE 15} Neun{PAUSE 15}…{PAUSE 15} Bullen{PAUSE 15}…{PAUSE 15}$"

PokemonLeague_5F_Azul_Rojo_Texto_25:
.string "POLIZIST: Wie war das?$"

PokemonLeague_5F_Azul_Rojo_Texto_26:
	.string "ANDRA: Du solltest wissen, wen du hier\n"
	.string "vor dir hast.\p"
	.string "Wir haben vorhin die TOP VIER besiegt {PAUSE 25}…{PAUSE 25}$"

PokemonLeague_5F_Azul_Rojo_Texto_27:
.string "DAS SOLL ALLES SEIN?\p"
	.string "KOMMT SCHON! SCHICKT NOCH MEHR!\p"
	.string "10!{PAUSE 20}…{PAUSE 20}\n"
	.string "20!{PAUSE 20}…{PAUSE 20}\p"
	.string "50!{PAUSE 20}…{PAUSE 20}\p"
	.string "Ich werdet schon mehr brauchen, um\n"
	.string "unseren Willen und den unserer\l"
	.string "POKéMON zu brechen!$"

PokemonLeague_5F_Azul_Rojo_Texto_28:
	.string "POLIZIST: Du unverschämte Göre!\p"
	.string "Wage es ja nicht …!$"

PokemonLeague_5F_Azul_Rojo_Texto_29:
.string "ANDRA: SKARABORN!\p"
	.string "SETZE NAHKAMPF GEGEN DIE TÜR\n"
	.string "DER RUHMESHALLE EIN!$"

PokemonLeague_5F_Azul_Rojo_Texto_30:
.string "cross!$"

PokemonLeague_5F_Azul_Rojo_Texto_31:
	.string "BLAU: Wow! Dieses SKARABORN ist seit\n"
	.string "dem letzten Mal noch stärker geworden!\p"
	.string "Was für eine Kraft!$"

PokemonLeague_5F_Azul_Rojo_Texto_32:
.string "ANDRA: {PLAYER}!\p"
	.string "Lauf!$"

PokemonLeague_5F_Azul_Rojo_Texto_33:
	.string "ANDRA: {PLAYER}!\p"
	.string "Geh rein!\p"
	.string "Ich kümmer mich schon um diese\n"
	.string "Schwächlinge! Mach dir also keine\l"
	.string "Sorgen! Nachdem ich ROT gerade in\l"
	.string "Aktion gesehen habe, ist mir klar\l"
	.string "geworden, dass du der Einzige bist, der\l"
	.string "eine Chance gegen diese Dampfwalze\l"
	.string "hat, die Trainer wie Dominosteine\l"
	.string "umhaut.$"

PokemonLeague_5F_Azul_Rojo_Texto_33.1:
	.string "Im Namen von TEAM ROCKET!\p"
	.string "Das ist deine Chance!\p"
	.string "Du bist nicht mehr der TRAINER, der\n"
	.string "damals gegen ihn im MONDBERG verloren\l"
	.string "hat! Du hast ein KANTO gesehen, das\l"
	.string "dieser ROT niemals kennenlernen wird!\p"
	.string "Ich glaube an dich und all die\n"
	.string "Fortschritte, die du gemacht hast!\p"
	.string "Zeig ihm ein für alle mal, was du\n"
	.string "wirklich drauf hast!$"

PokemonLeague_5F_Azul_Rojo_Move_1:
walk_in_place_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_2:
emote_exclamation_mark
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_3:
walk_right
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_4:
walk_left
walk_in_place_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_7:
emote_exclamation_mark
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_8:
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_9:
walk_in_place_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_10:
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_11:
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_12:
delay_4
delay_4
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
walk_up
face_down
delay_4
step_end

PokemonLeague_5F_Azul_Rojo_Move_13:
face_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_14:
face_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_15:
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_16:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_17:
delay_4
walk_left
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
delay_4
step_end

PokemonLeague_5F_Azul_Rojo_Move_18:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_19:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_20:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_21:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_22:
face_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_23:
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_24:
walk_up
walk_up
face_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_25:
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_26:
walk_down
face_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_27:
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_28:
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_29:
walk_down
walk_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_30:
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_31:
walk_left
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_32:
walk_left
walk_left
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
walk_in_place_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_33:
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_34:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_35:
walk_up
walk_right
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_36:
walk_up
walk_right
walk_right
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_37:
walk_fast_right
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_37.1:
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_38:
face_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_39:
emote_exclamation_mark
step_end

PokemonLeague_5F_Azul_Rojo_Move_40:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_41:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_42:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
walk_fast_up
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_43:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_44:
walk_fast_right
walk_fast_right
walk_fast_up
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_45:
walk_fast_right
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_46:
walk_fast_left
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_47:
walk_fast_left
walk_fast_left
walk_fast_up
walk_fast_up
walk_fast_up
step_end
