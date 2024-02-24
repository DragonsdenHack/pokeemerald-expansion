CuevaHypno_4_MapScripts::
	.byte 0


CuevaHypno_4_Lider::
lock
faceplayer
msgbox CuevaHypno_4_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, CuevaHypno_4_Lider_Move_1
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CuevaHypno_4_Lider_Move_2
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, CuevaHypno_4_Lider_Move_3
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CuevaHypno_4_Lider_Move_2
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox CuevaHypno_4_Lider_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox CuevaHypno_4_Lider_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, CuevaHypno_4_Lider_Move_1
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, CuevaHypno_4_Lider_Move_4
waitmovement 0x0
msgbox CuevaHypno_4_Lider_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_TRICK_HOUSE_END_MAN
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_DEWFORD_TOWN_STATE, 2
release
end

CuevaHypno_4_Lider_Move_4:
face_player
step_end

CuevaHypno_4_Lider_Move_3:
face_left
step_end

CuevaHypno_4_Lider_Move_2:
emote_exclamation_mark
face_player
step_end

CuevaHypno_4_Lider_Move_1:
face_up
step_end


CuevaHypno_4_Lider_Texto_1:
	.string "Oh…{PAUSE 20} But how? No one has discovered\n"
	.string "this place in 40 years.$"

CuevaHypno_4_Lider_Texto_2:
	.string "So you saw me when that HYPNO attacked\n"
	.string "the children. But you're not from THREE\l"
	.string "ISLAND, right? BERRY FOREST is already a\l"
	.string "forgotten place for the island\l"
	.string "residents; it wasn't always like this…{PAUSE 20}$"

CuevaHypno_4_Lider_Texto_3:
	.string "Ah! KANTO! You might not believe me, but\n"
	.string "a long time ago, I was a GYM LEADER\l"
	.string "there, back when LAVENDER TOWN had\l"
	.string "one.$"


CuevaHypno_4_Lider_Texto_4:
	.string "AGATHA and I were the top students of\n"
	.string "the only CHAMPION in the region who\l"
	.string "achieved that using GHOST and PSYCHIC\l"
	.string "POKÉMON. Well…{PAUSE 20} at least until I came\l"
	.string "here. Since then, it's been decades\l"
	.string "since I've heard anything from KANTO.$"

CuevaHypno_4_Lider_Texto_5:
	.string "Is AGATHA still part of the ELITE FOUR?\n"
	.string "Well…{PAUSE 20} she's holding up well, then I'm not\l"
	.string "the only one still resisting letting the\l"
	.string "passage of time degrade it. I'm glad to\l"
	.string "know that.$"

CuevaHypno_4_Lider_Texto_6:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

CuevaHypno_4_Lider_Texto_7:
	.string "Now that I observe you closely, despite\n"
	.string "your youth, I predict a great longevity\l"
	.string "for you as well. You seem to have lived a\l"
	.string "lot already, but your adventure has\l"
	.string "only just begun, and you're eager to see\l"
	.string "all that this world has to offer. Isn't\l"
	.string "that so?$"

CuevaHypno_4_Lider_Texto_8:
	.string "Perhaps I can contribute to that.\n"
	.string "Circumstances have forced me to\l"
	.string "seclude myself in this cave, but\l"
	.string "training is something I would do even if\l"
	.string "I were alone on a deserted island, until\l"
	.string "the end of my days.$"


CuevaHypno_4_Lider_Texto_9:
	.string "This is not the right place for a battle.\n"
	.string "If you want a fight, head over to the\l"
	.string "GYM to the north of the cave. If you\l"
	.string "enter, you'll be the first challenger in\l"
	.string "almost four decades…{PAUSE 20}$"

CuevaHypno_4_Cartel::
lock
msgbox CuevaHypno_4_Cartel_Texto_1 MSGBOX_SIGN
release
end

CuevaHypno_4_Cartel_Texto_1:
	.string "HYPNO'S CAVE$"


