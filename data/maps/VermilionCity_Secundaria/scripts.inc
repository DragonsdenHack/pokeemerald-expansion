VermilionCity_Secundaria_MapScripts::
	.byte 0

VermilionCity_Secundaria_Moteros_Move_1:
walk_in_place_left
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_2:
walk_in_place_right
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_3:
walk_slow_down
walk_slow_down
step_end

VermilionCity_Secundaria_Moteros_Move_3.1:
walk_up
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_4:
walk_in_place_right
step_end

VermilionCity_Secundaria_Moteros_Move_5:
walk_in_place_left
step_end

VermilionCity_Secundaria_Moteros_Move_6:
walk_right
walk_right
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_7:
emote_exclamation_mark
face_up
step_end

VermilionCity_Secundaria_Moteros_Move_8:
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_9:
face_left
step_end

VermilionCity_Secundaria_Moteros_Move_10:
emote_exclamation_mark
step_end

VermilionCity_Secundaria_Moteros_Move_11:
walk_down
walk_right
walk_right
walk_right
step_end

VermilionCity_Secundaria_Moteros_Move_12:
walk_up
walk_up
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_13:
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_14:
delay_16
face_right
step_end

VermilionCity_Secundaria_Moteros_Move_15:
walk_up
walk_right
walk_right
walk_right
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_16:
walk_in_place_up
step_end

VermilionCity_Secundaria_Moteros_Move_17:
face_up
step_end

VermilionCity_Secundaria_Moteros_Move_18:
face_down
step_end


VermilionCity_Secundaria_Moteros::
lock
faceplayer
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_2
applymovement 1, VermilionCity_Secundaria_Moteros_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Secundaria_Moteros_Move_3
waitmovement 0x0
special RemoveCameraObject
applymovement 2, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_Secundaria_Moteros_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 3, VermilionCity_Secundaria_Moteros_Move_7
applymovement 2, VermilionCity_Secundaria_Moteros_Move_7
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_6
msgbox VermilionCity_Secundaria_Moteros_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_8
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, VermilionCity_Secundaria_Moteros_Move_9
waitmovement 0x0
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_Moteros_Move_10
waitmovement 0x0
applymovement 1, VermilionCity_Secundaria_Moteros_Move_14
applymovement 2, VermilionCity_Secundaria_Moteros_Move_15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_11
applymovement 4, VermilionCity_Secundaria_Moteros_Move_12
applymovement 5, VermilionCity_Secundaria_Moteros_Move_13
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_16
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_14
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_11 MSGBOX_AUTOCLOSE
applymovement 3, VermilionCity_Secundaria_Moteros_Move_17
waitmovement 0x0
playse 597
applymovement 1, VermilionCity_Secundaria_Moteros_Move_18
applymovement 5, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, VermilionCity_Secundaria_Moteros_Move_5
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_712, VermilionCity_Secundaria_Moteros_Texto_14
delay 15
applymovement 4, VermilionCity_Secundaria_Moteros_Move_17
waitmovement 0x0
delay 10
msgbox VermilionCity_Secundaria_Moteros_Texto_15 MSGBOX_AUTOCLOSE
applymovement 5, VermilionCity_Secundaria_Moteros_Move_19
applymovement 4, VermilionCity_Secundaria_Moteros_Move_18.1
waitmovement 0x0
delay 15
playse SE_BREAKABLE_DOOR
applymovement 2, VermilionCity_Secundaria_Moteros_Move_20
waitmovement 0x0
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_21
waitmovement 0x0
delay 20
msgbox VermilionCity_Secundaria_Moteros_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, VermilionCity_Secundaria_Moteros_Move_25
applymovement 3, VermilionCity_Secundaria_Moteros_Move_22
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, VermilionCity_Secundaria_Moteros_Move_24
applymovement 3, VermilionCity_Secundaria_Moteros_Move_23
waitmovement 0x0
delay 30
playse SE_BREAKABLE_DOOR
applymovement 4, VermilionCity_Secundaria_Moteros_Move_16
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_18
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_19 MSGBOX_AUTOCLOSE
playse 597
applymovement 4, VermilionCity_Secundaria_Moteros_Move_16
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_20 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_713, VermilionCity_Secundaria_Moteros_Texto_21
applymovement 4, VermilionCity_Secundaria_Moteros_Move_20
waitmovement 0x0
playmoncry SPECIES_BEEDRILL, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 10
applymovement 1, VermilionCity_Secundaria_Moteros_Move_26
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_27
waitmovement 0x0
playse SE_PIN
applymovement 3, VermilionCity_Secundaria_Moteros_Move_28
waitmovement 0x0
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_29
waitmovement 0x0
delay 10
applymovement 3, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_24 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
waitse
delay 15
playse 597
delay 10
msgbox VermilionCity_Secundaria_Moteros_Texto_25 MSGBOX_AUTOCLOSE
delay 15
trainerbattle_no_intro TRAINER_TRAINER_711, VermilionCity_Secundaria_Moteros_Texto_26
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_24
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_27 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_27
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 3, VermilionCity_Secundaria_Moteros_Move_28
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_29 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_31
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_30 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_29
waitmovement 0x0
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_32 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, VermilionCity_Secundaria_Moteros_Move_4
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_33 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 5
removeobject 4
removeobject 3
removeobject 2
delay 10
fadescreen 0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Secundaria_Moteros_Move_3.1
waitmovement 0x0
special RemoveCameraObject
applymovement 1, VermilionCity_Secundaria_Moteros_Move_26
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_17
waitmovement 0x0
delay 5
msgbox VermilionCity_Secundaria_Moteros_Texto_34 MSGBOX_AUTOCLOSE
playse SE_USE_ITEM
special HealPlayerParty
waitse
delay 20
msgbox VermilionCity_Secundaria_Moteros_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_36 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, VermilionCity_Secundaria_Moteros_Move_29
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Secundaria_Moteros_Move_29.1
waitmovement 0x0
msgbox VermilionCity_Secundaria_Moteros_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilionCity_Secundaria_Moteros_Texto_38 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_Secundaria_Moteros_Move_32
waitmovement 0x0
playse SE_EXIT
removeobject 1
waitse
setflag FLAG_HOENN_87
setvar VAR_SCOTT_STATE, 3
release
end

VermilionCity_Secundaria_Moteros_Move_32:
walk_right
walk_down
walk_right
walk_right
walk_right
walk_up
walk_right
walk_right
walk_up
step_end

VermilionCity_Secundaria_Moteros_Move_31:
delay_16
face_left
delay_16
face_down
delay_16
walk_in_place_down
step_end

VermilionCity_Secundaria_Moteros_Move_30:
walk_right
step_end

VermilionCity_Secundaria_Moteros_Move_29.1:
delay_16
delay_8
face_right
step_end

VermilionCity_Secundaria_Moteros_Move_29:
face_right
step_end

VermilionCity_Secundaria_Moteros_Move_28:
emote_exclamation_mark
step_end

VermilionCity_Secundaria_Moteros_Move_27:
walk_left
step_end

VermilionCity_Secundaria_Moteros_Move_26:
walk_in_place_down
step_end

VermilionCity_Secundaria_Moteros_Move_25:
delay_16
face_down
step_end

VermilionCity_Secundaria_Moteros_Move_24:
face_right
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

VermilionCity_Secundaria_Moteros_Move_23:
delay_8
walk_slow_up
walk_slow_up
step_end

VermilionCity_Secundaria_Moteros_Move_22:
walk_slow_up
delay_16
step_end

VermilionCity_Secundaria_Moteros_Move_21:
emote_exclamation_mark
delay_8
face_left
step_end


VermilionCity_Secundaria_Moteros_Move_20:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

VermilionCity_Secundaria_Moteros_Move_19:
face_down
delay_16
face_left
delay_16
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

VermilionCity_Secundaria_Moteros_Move_18.1:
walk_left
face_up
step_end

VermilionCity_Secundaria_Moteros_Texto_1:
	.string "Ey, das nervt! Den ganzen Tag hocken\n"
	.string "wir hier nur rum und machen nichts!$"

VermilionCity_Secundaria_Moteros_Texto_2:
	.string "Halt's Maul, du Dummkopf! Willst du\n"
	.string "rausgehen, damit uns jeder bemerkt?$"

VermilionCity_Secundaria_Moteros_Texto_3:
	.string "Der BOSS war deutlich: Wir dürfen die\n"
	.string "Waren nur morgens zwischen 04:00 und\l"
	.string "06:00 Uhr rausbringen!$"

VermilionCity_Secundaria_Moteros_Texto_4:
	.string "Wir haben eine Aufgabe, eine einzige.\n"
	.string "Und dafür gibt's ordentlich Kohle, ohne\l"
	.string "dass wir 'nen Finger krumm machen\l"
	.string "müssen.$"

VermilionCity_Secundaria_Moteros_Texto_5:
	.string "Hast ja recht. Die Schnösel von DUKATIA\n"
	.string "CITY sind alle verrückt nach diesen\l"
	.string "Minzen.$"

VermilionCity_Secundaria_Moteros_Texto_6:
	.string "In JOHTO findet man die kaum. Ist also\n"
	.string "eine kleine, nette Marktlücke.$"

VermilionCity_Secundaria_Moteros_Texto_7:
	.string "Wer ist da? Zeig dich, verdammt!$"

VermilionCity_Secundaria_Moteros_Texto_8:
	.string "Hahaha… Endlich mal 'n bisschen Action.$"

VermilionCity_Secundaria_Moteros_Texto_9:
	.string "Na toll … Unvorbereitet sind die nicht\n"
	.string "hergekommen.$"

VermilionCity_Secundaria_Moteros_Texto_10:
	.string "Keiner von euch kommt hier lebend raus!\n"
	.string "Den kleinen KÄFERSAMMLER fesseln wir!$"

VermilionCity_Secundaria_Moteros_Texto_11:
	.string "Und ihr … Ihr schnappt euch den ROCKET!$"

VermilionCity_Secundaria_Moteros_Texto_12:
	.string "Wurde auch Zeit! Keine Bücher und\n"
	.string "Wachrunden mehr für mich!$"

VermilionCity_Secundaria_Moteros_Texto_13:
	.string "Ich werd dir zeigen, was\n"
	.string "TOXIN wirklich ist!$"

VermilionCity_Secundaria_Moteros_Texto_14:
	.string "Was? Das war's schon?$"

VermilionCity_Secundaria_Moteros_Texto_15:
	.string "Du bist nutzlos! Ich regel das!$"

VermilionCity_Secundaria_Moteros_Texto_16:
	.string "Verdammt! Wie konnte ich gegen 'nen\n"
	.string "KÄFERSAMMLER verlieren?$"

VermilionCity_Secundaria_Moteros_Texto_17:
	.string "Ich mach ihn fertig.$"

VermilionCity_Secundaria_Moteros_Texto_18:
	.string "Ey, du! Ja, du!$"

VermilionCity_Secundaria_Moteros_Texto_19:
	.string "Kämpfen wir jetzt, oder was?$"

VermilionCity_Secundaria_Moteros_Texto_20:
	.string "Ihr ROCKETs wisst 'n Scheiß über die\n"
	.string "POKéMON aus JOHTO. Zeit für 'ne kleine\l"
	.string "Lehrstunde!$"

VermilionCity_Secundaria_Moteros_Texto_21:
	.string "Du bist nicht aus KANTO!$"

VermilionCity_Secundaria_Moteros_Texto_22:
	.string "BIBOR! Nein!$"

VermilionCity_Secundaria_Moteros_Texto_23:
	.string "Das war's, Kumpel. Zeit für dich, die\n"
	.string "Konsequenzen zu tra…$"

VermilionCity_Secundaria_Moteros_Texto_24:
	.string "Versager … Ihr alle! Von einem ROCKET\n"
	.string "und einem KÄFERSAMMLER besiegt! Ihr\l"
	.string "seid alle nutzlose Hau… pff. Ach, was\l"
	.string "soll's!$"

VermilionCity_Secundaria_Moteros_Texto_25:
	.string "Ich erledige das selbst!$"

VermilionCity_Secundaria_Moteros_Texto_26:
	.string "Du kannst kein ROCKET sein!$"

VermilionCity_Secundaria_Moteros_Texto_27:
	.string "Das ist übel … Dem Boss wird das\n"
	.string "überhaupt nicht gefallen …$"

VermilionCity_Secundaria_Moteros_Texto_28:
	.string "Was? Du schmeißt uns raus?$"

VermilionCity_Secundaria_Moteros_Texto_29:
	.string "… …$"

VermilionCity_Secundaria_Moteros_Texto_30:
	.string "Ihr habt ihn gehört, Jungs! Also raus\n"
	.string "hier! Und bleibt bloß unentdeckt!$"

VermilionCity_Secundaria_Moteros_Texto_31:
	.string "Und was dich betrifft … Man sieht sich\n"
	.string "immer zweimal im Leben.$"

VermilionCity_Secundaria_Moteros_Texto_32:
	.string "Die POKéMON von unserem BOSS sind\n"
	.string "furchterregend.$"

VermilionCity_Secundaria_Moteros_Texto_33:
	.string "Er wird dich plattmachen! Und dann\n"
	.string "kommen wir wieder zurück und geben dir\l"
	.string "den Rest!$"

VermilionCity_Secundaria_Moteros_Texto_34:
	.string "Warte kurz.$"

VermilionCity_Secundaria_Moteros_Texto_35:
	.string "So. Jetzt sind deine\n"
	.string "POKéMON wieder fit.$"

VermilionCity_Secundaria_Moteros_Texto_36:
	.string "…$"

VermilionCity_Secundaria_Moteros_Texto_37:
	.string "Hinter dieser Tür liegt mein Garten.$"

VermilionCity_Secundaria_Moteros_Texto_38:
	.string "Es ist Zeit, dass ich mir endlich das\n"
	.string "zurückhole, was mir gehört!$"
