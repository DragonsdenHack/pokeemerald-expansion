PokemonLeague_6F_MapScripts::
	.byte 0

PokemonLeague_6F_Final_Centro::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final_Der::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2.1
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final_Izq::
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_1.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_2
waitmovement 0x0
playse SE_ICE_CRACK
waitse
delay 15
playse SE_PC_ON
waitse
delay 30
msgbox PokemonLeague_6F_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_2.2
waitmovement 0x0
special RemoveCameraObject
goto PokemonLeague_6F_Final

PokemonLeague_6F_Final::
delay 15
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, PokemonLeague_6F_Final_Move_4
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_4 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_6F_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_5
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, PokemonLeague_6F_Final_Move_4.1
waitmovement 0x0
delay 15
msgbox PokemonLeague_6F_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_6
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonLeague_6F_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_4
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_6F_Final_Move_4.2
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_4.3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_8
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonLeague_6F_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_6F_Final_Move_6.1
waitmovement 0x0
applymovement 1, PokemonLeague_6F_Final_Move_6
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
applymovement 1, PokemonLeague_6F_Final_Move_9
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, PokemonLeague_6F_Final_Move_7
waitmovement 0x0
delay 20
applymovement 2, PokemonLeague_6F_Final_Move_10
waitmovement 0x0
delay 30
msgbox PokemonLeague_6F_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 30
trainerbattle_no_intro TRAINER_ROJO_2, PokemonLeague_6F_Final_Texto_22
delay 20
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_23 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_6F_Final_Move_11
applymovement 2, PokemonLeague_6F_Final_Move_12
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_25 MSGBOX_AUTOCLOSE
playse MUS_DUMMY
delay 20
msgbox PokemonLeague_6F_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 40
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
addobject 3
playse SE_PIN
delay 40
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_13
applymovement 1, PokemonLeague_6F_Final_Move_13
waitmovement 0x0
applymovement 3, PokemonLeague_6F_Final_Move_14
waitmovement 0x0
playse MUS_HALL_OF_FAME_ROOM
applymovement 1, PokemonLeague_6F_Final_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_15
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_6F_Final_Move_16
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, PokemonLeague_6F_Final_Move_17
waitmovement 0x0
delay 15
msgbox PokemonLeague_6F_Final_Texto_29 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_30 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_17.3
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_30.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_31 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 3, PokemonLeague_6F_Final_Move_17.4
applymovement 1, PokemonLeague_6F_Final_Move_17.5
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_6F_Final_Texto_31.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_31.2 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_32 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_6F_Final_Texto_33 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_34.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_34.2 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_35 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_19
applymovement 3, PokemonLeague_6F_Final_Move_20
applymovement 1, PokemonLeague_6F_Final_Move_21
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_8
applymovement 2, PokemonLeague_6F_Final_Move_22
waitmovement 0x0
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 7, 2, 0x248, TRUE
setmetatile 7, 1, 0x240, TRUE
setmetatile 8, 2, 0x16B, TRUE
setmetatile 8, 1, 0x299, TRUE
setmetatile 9, 1, 0x240, TRUE
setmetatile 9, 2, 0x248, TRUE
special DrawWholeMapView
delay 30
applymovement 3, PokemonLeague_6F_Final_Move_24
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_23
waitmovement 0x0
special RemoveCameraObject
playse SE_EXIT
delay 30
applymovement 1, PokemonLeague_6F_Final_Move_25
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_36 MSGBOX_AUTOCLOSE
delay 30
playse SE_EXIT
addobject 3
waitse
delay 10
playse SE_PIN
special SpawnCameraObject
applymovement 3, PokemonLeague_6F_Final_Move_27
applymovement 1, PokemonLeague_6F_Final_Move_26
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_28
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_6F_Final_Move_19
waitmovement 0x0
special RemoveCameraObject
msgbox PokemonLeague_6F_Final_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_38 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_39 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_39.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_40 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_40.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_41 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_27.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_41.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_42 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29.1
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_43 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PokemonLeague_6F_Final_Move_29.2
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_45 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
playse SE_BREAKABLE_DOOR
applymovement 3, PokemonLeague_6F_Final_Move_30
waitmovement 0x0
waitse
delay 10
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
msgbox PokemonLeague_6F_Final_Texto_46 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LANCE_2, PokemonLeague_6F_Final_Texto_47
playse MUS_RG_VICTORY_GYM_LEADER
playse SE_PIN
applymovement 1, PokemonLeague_6F_Final_Move_1
msgbox PokemonLeague_6F_Final_Texto_48 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_49 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLY
addobject 4
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_13
applymovement 1, PokemonLeague_6F_Final_Move_13
applymovement 2, PokemonLeague_6F_Final_Move_13
applymovement 3, PokemonLeague_6F_Final_Move_13
applymovement 4, PokemonLeague_6F_Final_Move_14
waitmovement 0x0
playse 567
msgbox PokemonLeague_6F_Final_Texto_50 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_31
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_51 MSGBOX_AUTOCLOSE
delay 20
playse SE_BALL_THROW
waitse
delay 10
playse SE_BALL_TRAY_EXIT
msgbox PokemonLeague_6F_Final_Texto_52 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_18
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_53 MSGBOX_AUTOCLOSE
applymovement 4, PokemonLeague_6F_Final_Move_3
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_54 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_6F_Final_Texto_55 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, PokemonLeague_6F_Final_Move_28
waitmovement 0x0
msgbox PokemonLeague_6F_Final_Texto_56 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_6F_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PokemonLeague_6F_Final_Move_32
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_57 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PokemonLeague_6F_Final_Move_32
waitmovement 0x0
delay 10
msgbox PokemonLeague_6F_Final_Texto_58 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_6F_Final_Move_33
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
clearflag FLAG_HIDE_RUSTBORO_CITY_DEVON_EMPLOYEE_1
setflag FLAG_NUEVA_854
clearflag FLAG_UNUSED_0x26E
setvar VAR_UNUSED_0x40F7, 94
dofieldeffect FLDEFF_HALL_OF_FAME_RECORD
waitfieldeffect FLDEFF_HALL_OF_FAME_RECORD
delay 40
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
checkplayergender
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

PokemonLeague_6F_Final_Move_1.1:
emote_exclamation_mark
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_29.2:
face_left
step_end

PokemonLeague_6F_Final_Move_29.1:
face_down
step_end

PokemonLeague_6F_Final_Move_27.2:
delay_8
face_down
delay_16
delay_8
face_right
delay_16
delay_8
face_left
delay_16
delay_8
face_up
step_end

PokemonLeague_6F_Final_Move_27.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

PokemonLeague_6F_Final_Move_17.4:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_17.5:
jump_in_place_down
step_end

PokemonLeague_6F_Final_Move_17.1:
face_up
step_end

PokemonLeague_6F_Final_Move_17.2:
face_right
step_end

PokemonLeague_6F_Final_Move_17.3:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

PokemonLeague_6F_Final_Move_6.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

PokemonLeague_6F_Final_Move_4.3:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_7.1:
emote_exclamation_mark
step_end

PokemonLeague_6F_Final_Move_4.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

PokemonLeague_6F_Final_Move_4.2:
walk_in_place_down
step_end

PokemonLeague_6F_Final_Texto_1:
	.string "-EICH ist gerade damit fertig geworden,\n"
	.string "ROTs Daten in die RUHMESHALLE\l"
	.string "einzutragen.-$"

PokemonLeague_6F_Final_Texto_2:
	.string "EICH: Es ist nun offiziell! Du bist der\n"
	.string "neue CHAMPION! Du hast den Zweck\l"
	.string "erfüllt, für den du geschaffen wurdest!$"

PokemonLeague_6F_Final_Texto_3:
.string "…$"

PokemonLeague_6F_Final_Texto_4:
	.string "EICH: Ich weiß, warum du hier bist,\n"
	.string "ROCKET. Du glaubst, dass deine\l"
	.string "Ernennung zum CHAMPION dir genug\l"
	.string "Einfluss verschaffen wird, um TEAM\l"
	.string "ROCKETs Ruf reinzuwaschen und der\l"
	.string "Bevölkerung von KANTO ihre Freiheit\l"
	.string "zurückzugeben.$"

PokemonLeague_6F_Final_Texto_5:
	.string "Ich kenne deinen Anführer sehr gut.\p"
	.string "Er wollte die Region auf seine Weise\n"
	.string "retten, doch hat er sie letzten Endes\l"
	.string "nur noch tiefer in den Ruin getrieben.$"

PokemonLeague_6F_Final_Texto_6:
	.string "Er und seine törichten Anhänger haben\n"
	.string "die Sache aus dem völlig falschen\l"
	.string "Blickwinkel betrachtet. Das wir damals\l"
	.string "ein POKéMON mit solch überwältigender\l"
	.string "Kraft erschaffen haben, konnte nur auf\l"
	.string "eine Weise enden:\p"
	.string "Das wir es nicht kontrollieren können.$"

PokemonLeague_6F_Final_Texto_7:
	.string "Stattdessen haben wir den wichtigsten\n"
	.string "Faktor, der zum Sieg in Kämpfen führt,\l"
	.string "völlig außer Acht gelassen:\p"
	.string "Den TRAINER selbst!$"

PokemonLeague_6F_Final_Texto_8:
	.string "Genauer gesagt einen unbesiegbaren\n"
	.string "TRAINER, der in der Lage ist, völlig\l"
	.string "eigenständig stets die bestmöglichen\l"
	.string "Entscheidungen zu treffen. Sei es bei\l"
	.string "der Auswahl und dem Fangen von\l"
	.string "POKéMON, der Strategie, dem Training\l"
	.string "oder der optimalen Vergabe von Items\l"
	.string "und Attacken, um das bestmögliche Team\l"
	.string "aus sechs POKéMON mit denen ihm zur\l"
	.string "Verfügung stehenden Ressourcen zu\l"
	.string "erschaffen.$"

PokemonLeague_6F_Final_Texto_9:
	.string "Ist das nicht viel besser, als alles auf\n"
	.string "ein einziges, übermächtiges POKéMON zu\l"
	.string "setzen, das von einem fehlerhaften,\l"
	.string "unvollkommenen Menschen genutzt wird?$"

PokemonLeague_6F_Final_Texto_10:
	.string "Für den Rest der Welt wird ROT als das\n"
	.string "Maß aller Dinge gelten, als\l"
	.string "unerreichbar, eben weil er die Grenze\l"
	.string "ist! Ich persönlich habe dafür gesorgt,\l"
	.string "dass er in der Lage ist, jede nur\l"
	.string "erdenkliche Möglichkeit zu registrieren\l"
	.string "und optimal auf sie zu reagieren, die\l"
	.string "einen Kampf beeinflussen könnte!\p"
	.string "Er ist die perfekte Verschmelzung aus\n"
	.string "Mensch und Technologie!$"
	
PokemonLeague_6F_Final_Texto_10.1:
	 .string "Doch das wirklich Entscheidende ist{PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_11:
	.string "… dass ROT bei all seinem\n"
	.string "unermessliches Potenzial und den\l"
	.string "sämtlichen Möglichkeiten, die sie ihm\l"
	.string "bieten, anders als MEWTU, keinem Zweck\l"
	.string "folgt und nichts hinterfragt. Er ist\l"
	.string "schlicht und einfach eine leere Hülle,\l"
	.string "jederzeit bereit, eingesetzt zu werden.$"

PokemonLeague_6F_Final_Texto_11.1:
	.string "Das erlaubt ROT, ohne Komplikationen\n"
	.string "den Willen desjenigen anzunehmen, der\l"
	.string "ihn wie eine Marionette lenkt.$"

PokemonLeague_6F_Final_Texto_12:
	.string "Du verstehst also, wie entscheidend es\n"
	.string "ist, jemanden wie ihn zu haben - in einer\l"
	.string "Welt, in der sich jeder ohne Ausnahme,\l"
	.string "als universelles Prinzip, demjenigen\l"
	.string "fügt, der ihn in einem Kampf besiegt.\p"
	.string "In diesem törichten System kommt der\n"
	.string "Titel des CHAMPIONs mit der Stellung\l"
	.string "des Gouverneurs der Region einher.$"

PokemonLeague_6F_Final_Texto_12.1:
	.string "Wer also ROT kontrolliert, besitzt die\n"
	.string "Macht, alles zu verändern, sich jeder\l"
	.string "Situation anzupassen und am Ende als\l"
	.string "Sieger hervorzugehen.\p"
	.string "Und es gibt keine Möglichkeit dem\n"
	.string "entgegenzuwirken!$"

PokemonLeague_6F_Final_Texto_13:
	.string "Verstehst du es denn nicht? Niemand,\n"
	.string "nicht einmal ein SIEGFRIED, könnte auf\l"
	.string "lange Sicht gegen einen ROT bestehen,\l"
	.string "wenn er genügend Anreize bekommt,\l"
	.string "sein Team zu perfektionieren.$"

PokemonLeague_6F_Final_Texto_14:
	.string "Glaubst du, ich will ihn nicht nutzen, um\n"
	.string "KANTO vor der Tyrannei SIEGFRIEDs zu\l"
	.string "befreien?\p"
	.string "Oder um meine eigene Diktatur zu errichten?$"

PokemonLeague_6F_Final_Texto_15:
	.string "Nicht einmal die Götter der\n"
	.string "POKéMON-Welt könnten dir diese\l"
	.string "Fragen beantworten, ROCKET!\p"
	.string "Du würdest es nie herausfinden!$"

PokemonLeague_6F_Final_Texto_16:
	.string "Selbst nachdem du all dies gehört hast,\n"
	.string "gedenkst du mich aufzuhalten?$"

PokemonLeague_6F_Final_Texto_17:
	.string "Das ist ganz typisch für Kriminelle wie\n"
	.string "dich. Ihr denkt ihr wäret frei, könnten\l"
	.string "eigenständige Entscheidungen treffen\l"
	.string "und hätten eine Welt voller\l"
	.string "Möglichkeiten zu euren Füßen, bis die\l"
	.string "Realität an eure Tür klopft und euch\l"
	.string "mit einem Schlag auf den Boden der\l"
	.string "Tatsachen befördert, ohne euch auch\l"
	.string "nur Zeit zu geben, zu begreifen, was\l"
	.string "geschehen ist.$"

PokemonLeague_6F_Final_Texto_18:
	.string "Du musst ROTs Verhalten entschuldigen.\p"
	.string "Die RUHMESHALLE zu betreten, war sein\n"
	.string "Daseinszweck. Darüber hinaus und\l"
	.string "sobald er seinen Zweck erfüllt hat,\l"
	.string "wird er sich an nichts, was danach\l"
	.string "geschieht, erinnern können.\p"
	.string "Es existiert für ihn schlicht und\n"
	.string "einfach nicht. Dennoch behält er\l"
	.string "sein Können als Trainer bei.$"

PokemonLeague_6F_Final_Texto_19:
	.string "Niemand war jemals auch nur annähernd\n"
	.string "in der Lage, ihn zu besiegen. Wenn das\l"
	.string "dein Wunsch ist, wird er dir erfüllt\l"
	.string "werden. Du bist lediglich ein weiterer\l"
	.string "Bauer, den ich zum Fallen bringen muss -\l"
	.string "ganz nach den Regeln unseres dämlichen\l"
	.string "Kampf-Kodex.$"

PokemonLeague_6F_Final_Texto_20:
	.string "Nur zu, ROCKET. Tritt der Mauer\n"
	.string "entgegen, die du niemals wirst\l"
	.string "durchbrechen können - ganz gleich,\l"
	.string "wie viel Mühe du dir auch gibst!$"

PokemonLeague_6F_Final_Texto_21:
.string "ROT: …$"

PokemonLeague_6F_Final_Texto_22:
.string "…!$"

PokemonLeague_6F_Final_Texto_23:
.string "NEIN!\p"
	.string "DAS KANN NICHT SEIN!\p"
	.string "UNMÖGLICH!$"

PokemonLeague_6F_Final_Texto_24:
	.string "Du kannst nicht gewonnen haben! ROT\n"
	.string "wurde eigens hierfür geschaffen! Es\l"
	.string "gibt keine Möglichkeit, wie du ihn mit\l"
	.string "den Ressourcen, die dir zur Verfügung\l"
	.string "stehen, und den POKéMON, die hier\l"
	.string "gefangen werden können, besiegen\l"
	.string "konntest!$"

PokemonLeague_6F_Final_Texto_25:
.string "Es gibt keine andere mögliche Erklärung!\p"
	.string "DU!\p"
	.string "DUUUUU!$"

PokemonLeague_6F_Final_Texto_26:
.string "????: Wir hatten eine Abmachung, EICH.$"

PokemonLeague_6F_Final_Texto_27:
.string "EICH: Oh{PAUSE 25}…{PAUSE 25} SIEGFRIED {PAUSE 25}…{PAUSE 25}\p"
	.string "I{PAUSE 25}-{PAUSE 25}Ic{PAUSE 25}…{PAUSE 25}\p"
	.string "ha{PAUSE 5}…{PAUSE 5}$"

PokemonLeague_6F_Final_Texto_28:
	.string "SIEGFRIED: 'Ein TRAINER, der gegen\n"
	.string "niemanden verlieren wird - einen\l"
	.string "garantierten CHAMPION, der mit unseren\l"
	.string "Zielen übereinstimmt, der unantastbar\l"
	.string "ist und der diese Position so lange\l"
	.string "halten wird, wie wir es wollen.'$"

PokemonLeague_6F_Final_Texto_29:
	.string "Das waren deine Worte, EICH, als du mich\n"
	.string "davon überzeugt hast, die Chance, den\l"
	.string "CHAMPION-TITEL zu gewinnen, noch\l"
	.string "einmal zu ermöglichen.$"

PokemonLeague_6F_Final_Texto_30:
	.string "Du hast mir das Ganze als eine\n"
	.string "Möglichkeit präsentiert, eine Illusion\l"
	.string "und obendrein die Hoffnung nach KANTO\l"
	.string "zurückzubringen, zusammen mit einer\l"
	.string "Methode, die schwer zu erlangende\l"
	.string "Loyalität und das Vertrauen in das\l"
	.string "System wiederzuerlangen.$"

PokemonLeague_6F_Final_Texto_30.1:
	.string "Eine brillante Strategie, EICH. So\n"
	.string "könnten wir unsere Ziele erreichen,\l"
	.string "ohne uns zu sehr einmischen zu müssen,\l"
	.string "da die Liga-Meisterschaft für die\l"
	.string "Bürger nur eine Illusion wäre.$"

PokemonLeague_6F_Final_Texto_30.2:
	.string "Stets überlastet von ihrer täglichen\n"
	.string "Arbeit, wäre es für sie unmöglich, sich\l"
	.string "in etwas zu beweisen, das über ihr\l"
	.string "alltägliches Leben hinausgeht.$"

PokemonLeague_6F_Final_Texto_30.3:
	.string "Besonders mit einem TRAINER wie ROT,\n"
	.string "einem Symbol der Perfektion und dem\l"
	.string "ultimativen Stratege im Kampf, wäre es\l"
	.string "eine statistisch unmögliche Leistung,\l"
	.string "in dieser Region Champion zu werden.$"

PokemonLeague_6F_Final_Texto_31:
	.string "Es kommt mir so vor, EICH, als wäre es\n"
	.string "nicht einmal ein Bürger gewesen, der\l"
	.string "dein Meisterwerk geschlagen hat.$"

PokemonLeague_6F_Final_Texto_31.1:
	.string "ES WAR EIN MITGLIED VON TEAM ROCKET,\n"
	.string "EICH! EINER VOM TEAM ROCKET!$"

PokemonLeague_6F_Final_Texto_31.2:
	.string "Vielleicht hast du die Auswirkungen\n"
	.string "dieser -harten Arbeit-, die du so\l"
	.string "abwertend als Leistungsbremse\l"
	.string "bezeichnet hast, unterschätzt.\p"
	.string "Naja, zumindest für diejenigen, die in\n"
	.string "der Lage sind, sie zu überstehen und\l"
	.string "in die richtige Richtung zu lenken.$"

PokemonLeague_6F_Final_Texto_32:
	.string "EICH: Bitte, SIEGFRIED, lass es mich\n"
	.string "erklären! ROT war noch nicht bereit. Er\n"
	.string "muss noch {PAUSE 5}…{PAUSE 5}$"

PokemonLeague_6F_Final_Texto_33:
	.string "SIEGFRIED: Ich habe mir genug von\n"
	.string "deinem Gelaber angehört, EICH!\p"
	.string "Ich möchte keine Vermutungen hören!\p"
	.string "Ich will Ergebnisse! Wir werden\n"
	.string "das auf meine Weise klären!$"

PokemonLeague_6F_Final_Texto_34:
	.string "Ich hätte wissen müssen, dass\n"
	.string "so etwas passieren würde.$"

PokemonLeague_6F_Final_Texto_34.1:
	.string "Du musst wissen, dass ich gegen dich ein\n"
	.string "Team mit etwas höheren Levels\l"
	.string "eingesetzt habe, als bei den anderen,\l"
	.string "um dich schnell von hier loszuwerden.\p"
	.string "Und trotzdem hast du den Kampf\n"
	.string "unversehrt überstanden.$"

PokemonLeague_6F_Final_Texto_34.2:
	.string "Aber keine Sorge. Nur ein Narr stolpert\n"
	.string "zweimal über denselben Stein.\p"
	.string "Und ich bin kein Narr!$"

PokemonLeague_6F_Final_Texto_35:
.string "EICH: W{PAUSE 25}-{PAUSE 25}was gedenkst du zu tun?$"

PokemonLeague_6F_Final_Texto_36:
.string "EICH: Wir sind verdammt {PAUSE 25}…{PAUSE 25}\p"
	.string "Er {PAUSE 25}…{PAUSE 25}\p"
	.string "wird {PAUSE 15}…{PAUSE 15}\p"
	.string "sie freilassen, die Besti{PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_37:
	.string "SIEGFRIED: CHAMPION, GOUVERNEUR {PAUSE 25}…{PAUSE 25}\n"
	.string "alles nur Worte. Der, der die Macht\l"
	.string "besitzt, wird diese Welt regieren!$"

PokemonLeague_6F_Final_Texto_38:
	.string "Warum glaubst du lieben und verehren\n"
	.string "Menschen LEGENDÄRE POKéMON und\l"
	.string "PSEUDO-LEGENDÄRE so sehr?\p"
	.string "Ganz einfach. Uns interessiert nicht,\n"
	.string "woher sie kommen. Das Einzige, was uns\l"
	.string "interessiert, ist ihre Macht, die\l"
	.string "im Vergleich zu anderen POKéMON\l"
	.string "außergewöhnlich und einzigartig ist!$"

PokemonLeague_6F_Final_Texto_39:
	.string "Darin liegt die Magie - im Unbekannten\n"
	.string "dieser Macht, und in diesem Fall ist sie\l"
	.string "für den Rest unerreichbar.$"

PokemonLeague_6F_Final_Texto_39.1:
	.string "Soweit ich weiß, hat es die\n"
	.string "Wissenschaft noch nicht geschafft,\l"
	.string "herauszufinden, wie man ein LEGENDÄRES\l"
	.string "POKéMON erschafft.$"

PokemonLeague_6F_Final_Texto_40:
	.string "So viele Jahre der harten Arbeit, EICH,\n"
	.string "nur um schließlich festzustellen, dass\l"
	.string "die Natur bessere Früchte\l"
	.string "hervorbringt.$"

PokemonLeague_6F_Final_Texto_40.1:
	.string "Es war töricht von dir zu denken, du\n"
	.string "könntest das Spiel besser beherrschen\l"
	.string "als derjenige, der die Regeln\l"
	.string "geschaffen hat.$"

PokemonLeague_6F_Final_Texto_41:
	.string "Ich werde das tun, was ich schon vor\n"
	.string "Jahren hätte tun sollen: Diese Region\l"
	.string "ohne jegliche Gnade regieren.$"

PokemonLeague_6F_Final_Texto_41.1:
	.string "Und wer wäre besser für den Job\n"
	.string "geeignet als ich, SIEGFRIED, der größte\l"
	.string "Experte des mächtigsten und heiligsten\l"
	.string "Typs: der DRACHEN!$"

PokemonLeague_6F_Final_Texto_42:
	.string "Was dich angeht {PAUSE 15}…{PAUSE 15}\p"
	.string "Nachdem ich dich wie ein mickriges\n"
	.string "Insekt zerstampft habe, werde an dir\l"
	.string "und dem, was von deinem Team übrig\l"
	.string "bleibt, ein Exempel statuieren - als\l"
	.string "Beispiel und Warnung für alle, die es\l"
	.string "wagen, auch nur den geringsten\l"
	.string "Widerstand gegen meine Regierung\l"
	.string "zu leisten!$"

PokemonLeague_6F_Final_Texto_43:
	.string "Sei stolz, ROCKET!\p"
	.string "Du wirst als derjenige in Erinnerung\n"
	.string "bleiben, der SIEGFRIED I. dazu brachte,\l"
	.string "seine heiligen POKéMON einzusetzen -\l"
	.string "kurz vor dem Beginn der neuen Ära\l"
	.string "seines Regimes {PAUSE 5}…{PAUSE 5}$"

PokemonLeague_6F_Final_Texto_44:
.string "SIEGFRIED: {PAUSE 15}…{PAUSE 15}$"

PokemonLeague_6F_Final_Texto_45:
	.string "Aber es ist keine Leistung, einen\n"
	.string "geschwächten Gegner zu bezwingen.\p"
	.string "Ich will, dass du mit eigenen Augen\n"
	.string "siehst, wie ich dein Team auf dem\l"
	.string "Höhepunkt seiner Stärke zermalme!\p"
	.string "Du wirst ein für alle Mal verstehen,\n"
	.string "dass es Mächte gibt, von denen\l"
	.string "Sterbliche wie du nur träumen können!$"

PokemonLeague_6F_Final_Texto_46:
	.string "ICH BIN DER STAAT!!$"

PokemonLeague_6F_Final_Texto_47:
.string "Meine Drachen!\p"
	.string "Meine Legendären Bestien!\p"
	.string "Wie kann das sein!$"

PokemonLeague_6F_Final_Texto_48:
	.string "SIEGFRIED: Das ist unmöglich! Niemand\n"
	.string "hatte jemals eine Chance gegen meine\l"
	.string "besten POKéMON! Sie sind die Besten der\l"
	.string "Besten!\p"
	.string "Es gibt keine Besseren in ganz KANTO!$"

PokemonLeague_6F_Final_Texto_49:
	.string "????: Da liegst du falsch, SIEGFRIED.$"

PokemonLeague_6F_Final_Texto_50:
	.string "GIOVANNI: Dein Ego und deine Arroganz\n"
	.string "sind dein Untergang. Während du dich in\l"
	.string "der Sicherheit einer Macht wiegtest,\l"
	.string "deren Ursprung dir unbekannt war,\l"
	.string "haben wir anderen unermüdlich\l"
	.string "gearbeitet. Wir kannten deine Grenzen\l"
	.string "und strebten Tag für Tag danach, eine\l"
	.string "noch größere Macht zu erschaffen.$"

PokemonLeague_6F_Final_Texto_51:
	.string "Ohne die Notwendigkeit noch stärker zu\n"
	.string "werden, wurdest du schwächer. In dieser\l"
	.string "Zeit lag unsere größte Motivation\l"
	.string "darin, deiner Tyrannei ein Ende zu\l"
	.string "setzen. Jetzt ist es Zeit, dass du der\l"
	.string "Natur das zurückgibst, was ihr gehört.$"

PokemonLeague_6F_Final_Texto_52:
.string "SIEGFRIED: NO! ENTEI, RAIKOU, SUICUNE!$"

PokemonLeague_6F_Final_Texto_53:
	.string "GIOVANNI: {PLAYER}! Ich hätte\n"
	.string "niemals gedacht, dass du es so weit\l"
	.string "bringen würdest! {PAUSE 25} Nachdem ANDRA mich\l"
	.string "über die Lage und deinen Einzug in die\l"
	.string "RUHMESHALLE informiert hatte,\l"
	.string "beschloss ich, persönlich\l"
	.string "hierherzukommen, auch wenn ich damit\l"
	.string "das Risiko eingehe, die Aufmerksamkeit\l"
	.string "der Medien auf mich zu ziehen! {PAUSE 25}\p"
	.string "Du hast den unschätzbaren Wert von gut\n"
	.string "trainierten POKéMON bewiesen und das\l"
	.string "sie, unabhängig von ihrer Herkunft,\l"
	.string "zu echten Champions werden können,\l"
	.string "imstande jede Situation zu meistern!$"

PokemonLeague_6F_Final_Texto_54:
	.string "Diejenigen, die dachten, sie hätten die\n"
	.string "volle Kontrolle über alles um sie herum\l"
	.string "und das sie alles auf eine einfache\l"
	.string "Gleichung reduzieren könnten.$"

PokemonLeague_6F_Final_Texto_55:
.string "EICH: …$"

PokemonLeague_6F_Final_Texto_56:
	.string "Und jene, die Gott spielten, überzeugt\n"
	.string "davon, der restlichen Welt allein durch\l"
	.string "ihre Herkunft überlegen zu sein.$"

PokemonLeague_6F_Final_Texto_57:
	.string "GIOVANNI: Du hast bewiesen, dass\n"
	.string "letzten Endes nichts die Macht einer\n"
	.string "Handlung übertrifft, die von einem\l"
	.string "unerschütterlichen Willen angetrieben\l"
	.string "wird, ein Ziel zu erreichen.$"

PokemonLeague_6F_Final_Texto_58:
	.string "GIOVANNI: {PLAYER}! Nur jemand wie\n"
	.string "du verdient einen Platz in den\l"
	.string "Geschichtsbüchern - für immer in der\l"
	.string "RUHMESHALLE verewigt zu werden!$"

PokemonLeague_6F_Final_Move_1:
emote_exclamation_mark
step_end

PokemonLeague_6F_Final_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_2.1:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_2.2:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_3:
face_left
step_end

PokemonLeague_6F_Final_Move_4:
walk_slow_down
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_5:
walk_in_place_up
delay_1
delay_2
face_down
step_end

PokemonLeague_6F_Final_Move_6:
walk_slow_up
face_down
step_end

PokemonLeague_6F_Final_Move_7:
face_down
step_end

PokemonLeague_6F_Final_Move_8:
face_up
step_end

PokemonLeague_6F_Final_Move_9:
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_10:
walk_slow_down
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_11:
walk_fast_down
walk_fast_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_12:
walk_up
face_down
step_end

PokemonLeague_6F_Final_Move_13:
emote_exclamation_mark
face_down
step_end

PokemonLeague_6F_Final_Move_14:
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_15:
slide_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_16:
delay_8
walk_slow_up
delay_16
walk_in_place_up
delay_8
step_end

PokemonLeague_6F_Final_Move_17:
delay_8
walk_slow_right
delay_16
walk_in_place_right
delay_8
step_end

PokemonLeague_6F_Final_Move_18:
walk_left
delay_16
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_19:
delay_8
walk_slow_up
walk_slow_up
step_end

PokemonLeague_6F_Final_Move_20:
walk_right
walk_up
walk_up
walk_up
step_end

PokemonLeague_6F_Final_Move_21:
walk_right
delay_16
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_22:
walk_left
walk_in_place_down
step_end

PokemonLeague_6F_Final_Move_23:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

PokemonLeague_6F_Final_Move_24:
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_up
step_end


PokemonLeague_6F_Final_Move_25:
walk_up
walk_left
walk_left
walk_left
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_26:
emote_exclamation_mark
face_right
step_end

PokemonLeague_6F_Final_Move_27:
walk_fast_down
walk_fast_left
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
walk_slow_down
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_28:
face_right
step_end

PokemonLeague_6F_Final_Move_29:
walk_slow_down
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_30:
walk_in_place_left
step_end

PokemonLeague_6F_Final_Move_31:
walk_up
step_end

PokemonLeague_6F_Final_Move_32:
walk_in_place_up
step_end

PokemonLeague_6F_Final_Move_33:
walk_slow_up
walk_slow_right
walk_slow_up
walk_in_place_up
step_end


