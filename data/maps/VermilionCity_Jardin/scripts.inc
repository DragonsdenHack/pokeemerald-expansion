VermilionCity_Jardin_MapScripts::
	.byte 0

VermilionCity_Jardin_EventScript_Criador::
	trainerbattle_single TRAINER_TRAINER_709, VermilionCity_Jardin_Text_CriadorIntro, VermilionCity_Jardin_Text_CriadorDefeated
	msgbox VermilionCity_Jardin_Text_CriadorPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_EventScript_Criadora::
	trainerbattle_single TRAINER_TRAINER_710, VermilionCity_Jardin_Text_CriadoraIntro, VermilionCity_Jardin_Text_CriadoraDefeated
	msgbox VermilionCity_Jardin_Text_CriadoraPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_Cazabichos_Pelea::
lock
msgbox VermilionCity_Jardin_Cazabichos_Pelea_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Jardin_Cazabichos_Pelea_Texto_1:
	.string "Sieh dir dieses Chaos an! Ich müsste\n"
	.string "verrückt sein, um euch das zu verzeihen\l"
	.string "…$"

VermilionCity_Jardin_Warp::
lock
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Warp_Move_1
waitmovement 0x0
warp MAP_VERMILION_CITY_SECUNDARIA, 9, 2
delay 150
release
end

VermilionCity_Jardin_Warp_Move_1:
face_down
step_end

VermilionCity_Jardin_Final_Move_2:
walk_in_place_up
step_end

VermilionCity_Jardin_Final_Move_1:
emote_exclamation_mark
step_end

VermilionCity_Jardin_Final_Move_3:
walk_in_place_down
step_end

VermilionCity_Jardin_Final_Move_3.1:
walk_in_place_fast_down
step_end

VermilionCity_Jardin_Final_Move_4:
delay_16
face_right
delay_16
face_down
delay_16
walk_in_place_fast_down
step_end

VermilionCity_Jardin_Final_Move_5:
delay_8
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

VermilionCity_Jardin_Final_Move_6:
face_left
lock_facing_direction
walk_right
unlock_facing_direction
delay_16
delay_8
face_down
step_end

VermilionCity_Jardin_Final_Move_7:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_up
walk_up
walk_up
walk_up
step_end

VermilionCity_Jardin_Final::
lock
faceplayer
delay 10
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 20
msgbox VermilionCity_Jardin_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_3 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, VermilionCity_Jardin_Final_Move_3
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 40
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_6 MSGBOX_AUTOCLOSE
playse 597
delay 10
applymovement 3, VermilionCity_Jardin_Final_Move_3
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_TRAINER_708, VermilionCity_Jardin_Final_Texto_8
delay 10
msgbox VermilionCity_Jardin_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 15
delay 10
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 15
msgbox VermilionCity_Jardin_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 35
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Jardin_Final_Move_4
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_2
waitmovement 0x0
delay 30
playse SE_PIN
applymovement 3, VermilionCity_Jardin_Final_Move_1
waitmovement 0x0
delay 20
applymovement 3, VermilionCity_Jardin_Final_Move_3.1
waitmovement 0x0
delay 10
msgbox VermilionCity_Jardin_Final_Texto_17 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
setflag FLAG_HOENN_84
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_6
applymovement 3, VermilionCity_Jardin_Final_Move_5
waitmovement 0x0
removeobject 3
removeobject 1
removeobject 2
removeobject 5
delay 40
addobject 4
applymovement 4, VermilionCity_Jardin_Final_Move_7
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_9
applymovement 4, VermilionCity_Jardin_Final_Move_8
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_20 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Jardin_Final_Texto_22 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 4, VermilionCity_Jardin_Final_Move_11
waitmovement 0x0
delay 15
msgbox VermilionCity_Jardin_Final_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_13
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_24 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_25 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_26 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_10
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Jardin_Final_Move_12
waitmovement 0x0
msgbox VermilionCity_Jardin_Final_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Jardin_Final_Move_15
applymovement 4, VermilionCity_Jardin_Final_Move_14
waitmovement 0x0
removeobject 4
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_SCOTT_STATE, 4
release
end

VermilionCity_Jardin_Final_Move_15:
delay_16
face_down
step_end

VermilionCity_Jardin_Final_Move_14:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

VermilionCity_Jardin_Final_Move_13:
delay_8
face_left
step_end

VermilionCity_Jardin_Final_Move_12:
walk_in_place_right
step_end

VermilionCity_Jardin_Final_Move_11:
emote_exclamation_mark
delay_16
delay_8
face_right
delay_16
face_up
delay_16
face_up
delay_16
face_right
step_end

VermilionCity_Jardin_Final_Move_10:
delay_8
face_up
delay_16
step_end

VermilionCity_Jardin_Final_Move_9:
delay_16
delay_16
face_left
step_end

VermilionCity_Jardin_Final_Move_8:
walk_up
walk_up
walk_up
face_right
step_end

VermilionCity_Jardin_Final_Texto_1:
	.string "Und du bist?$"

VermilionCity_Jardin_Final_Texto_2:
	.string "SIEGFRIED höchstpersönlich hat uns\n"
	.string "die Nutzung dieses Landes genehmigt.\p"
	.string "Es gehört jetzt uns!$"

VermilionCity_Jardin_Final_Texto_3:
	.string "Wir leisten JOHTO einen großen Dienst.\p"
	.string "Laut der LIGA-LEITUNG sind die\n"
	.string "Bewohner KANTOs für unsere Produkte\l"
	.string "hier ungeeignet.$"

VermilionCity_Jardin_Final_Texto_4:
	.string "Hast du ein Problem damit?!$"

VermilionCity_Jardin_Final_Texto_5:
	.string "Heißt das, es ist Schluss mit der\n"
	.string "Privatisierung? Gibst du den Leuten\l"
	.string "das zurück, was ihnen gehört?$"

VermilionCity_Jardin_Final_Texto_6:
	.string "Und zu was macht dich das dann?\p"
	.string "Zum Retter KANTOs?$"

VermilionCity_Jardin_Final_Texto_7:
	.string "Wenn hier irgendwas weggenommen wird,\n"
	.string "dann ist es dein Team! Ihr könnt uns\l"
	.string "alle als Dünger dienen!$"

VermilionCity_Jardin_Final_Texto_8:
	.string "Nein! Das ist unmöglich!$"

VermilionCity_Jardin_Final_Texto_9:
	.string "Wer bist du überhaupt? SIEGFRIED wird\n"
	.string "der Erste sein, der hiervon erfährt!$"

VermilionCity_Jardin_Final_Texto_10:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

VermilionCity_Jardin_Final_Texto_11:
	.string "Du gehörst du TEAM ROCKET?! Du bist ein\n"
	.string "hochrangiges Mitglied und … stehst im\l"
	.string "direkten Kontakt mit dem BOSS deiner\l"
	.string "Organisation?!$"

VermilionCity_Jardin_Final_Texto_12:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

VermilionCity_Jardin_Final_Texto_13:
	.string "Okay{PAUSE 25}…{PAUSE 25} Überstürz nichts, Kumpel!$"

VermilionCity_Jardin_Final_Texto_14:
	.string "Wir haben uns einfach auf dem falschen\n"
	.string "Fuß erwischt. Es gibt doch keinen Grund,\l"
	.string "deinen BOSS für die kleine\l"
	.string "Angelegenheit hier einzuschalten! Wir\l"
	.string "sind schon weg!$"

VermilionCity_Jardin_Final_Texto_15:
	.string "Ich sage SIEGFRIED einfach, dass die\n"
	.string "Ländereien hier unfruchtbar geworden\l"
	.string "sind. Klingt doch gut, oder?$"

VermilionCity_Jardin_Final_Texto_16:
	.string "Dieser dumme KÄFERSAMMLER kann sie\n"
	.string "wiederhaben, okay!$"

VermilionCity_Jardin_Final_Texto_17:
	.string "Ich gehe zurück nach JOHTO! Das\n"
	.string "hektische Leben auf der rauen See\l"
	.string "reizt mich mehr, als ein verzierter\l"
	.string "Grabstein im POKéMON-TURM!$"

VermilionCity_Jardin_Final_Texto_18:
    .string "Ich kann's nicht glauben!\n"
	.string "Du hast es wirklich geschafft!$"

VermilionCity_Jardin_Final_Texto_19:
	.string "Ich habe sein HUNDEMON gesehen. Es\n"
	.string "hätte meine armen KÄFER geröstet. Dass\l"
	.string "ich meinen Garten zurückhabe, habe ich\l"
	.string "nur dir zu verdanken!$"

VermilionCity_Jardin_Final_Texto_20:
	.string "Hey, schau mal dort! Diese Beeren waren\n"
	.string "beim letzten Mal noch nicht da.$"

VermilionCity_Jardin_Final_Texto_21:
	.string "Sie haben alles vollgepflanzt … um\n"
	.string "maximalen Profit zu erzielen.$"

VermilionCity_Jardin_Final_Texto_22:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

VermilionCity_Jardin_Final_Texto_23:
	.string "Ich hab's! Ich weiß, wie ich mich für\n"
	.string "deine Hilfe erkenntlich zeigen kann!$"

VermilionCity_Jardin_Final_Texto_24:
	.string "Ich werd das Land wieder\n"
	.string "bewirtschaften. Selbst mit den\l"
	.string "gewöhnlichen Beeren kann ich mein\l"
	.string "Geschäft wiederaufbauen. Ich muss\l"
	.string "einfach nur unter dem Radar bleiben.$"

VermilionCity_Jardin_Final_Texto_25:
	.string "Komm ruhig vorbei, wann immer du willst.\p"
	.string "Alles, was auf den nördlichen Feldern\n"
	.string "wächst, kannst du gerne mitnehmen.$"

VermilionCity_Jardin_Final_Texto_26:
	.string "Ein Haufen Trainer wollen diese Dinge:\n"
	.string "Beeren, die EVs reduzieren und Minzen,\l"
	.string "welche das WESEN eines POKéMON\l"
	.string "verändern.$"

VermilionCity_Jardin_Final_Texto_27:
	.string "Je nach Jahreszeit wachsen die Minzen\n"
	.string "unterschiedlich. Schau einfach ab und\l"
	.string "zu vorbei und sieh nach, was gerade\l"
	.string "wächst. Und keine Panik - die wachsen\l"
	.string "schon nach.$"

VermilionCity_Jardin_Final_Texto_28:
	.string "Und jetzt bin ich wirklich wieder im\n"
	.string "Geschäft!$"

VermilionCity_Jardin_Cazabichos_Despues::
lock
faceplayer
msgbox VermilionCity_Jardin_Cazabichos_Despues_Texto_1 MSGBOX_NPC
release
end

VermilionCity_Jardin_Cazabichos_Despues_Texto_1:
	.string "Hi! Wie geht's dir?\n"
	.string "Haben dir meine Minzen gute\l"
	.string "Dienste geleistet?$"
