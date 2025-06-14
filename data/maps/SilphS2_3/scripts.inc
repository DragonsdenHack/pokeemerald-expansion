SilphS2_3_MapScripts::
	.byte 0

SilphS2_3_Presidente::
lock
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_1
waitmovement 0x0
msgbox SilphS2_3_Presidente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_2
waitmovement 0x0
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
msgbox SilphS2_3_Presidente_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_4
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_6
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_7
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_8
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_10
applymovement 1, SilphS2_3_Presidente_Move_9
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_13 MSGBOX_AUTOCLOSE
delay 15
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_11
applymovement 1, SilphS2_3_Presidente_Move_12
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_707, SilphS2_3_Presidente_Texto_16
msgbox SilphS2_3_Presidente_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, SilphS2_3_Presidente_Move_13
waitmovement 0x0
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SilphS2_3_Presidente_Texto_19 MSGBOX_DEFAULT
waitfanfare
msgbox SilphS2_3_Presidente_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, SilphS2_3_Presidente_Move_14
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_16
applymovement 1, SilphS2_3_Presidente_Move_15
waitmovement 0x0
delay 20
msgbox SilphS2_3_Presidente_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_17
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_80
clearflag FLAG_HOENN_85
removeobject 1
setvar VAR_UNUSED_0x40F8, 12
release
end

SilphS2_3_Presidente_Move_17:
walk_slow_down
walk_slow_down
walk_slow_right
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end


SilphS2_3_Presidente_Move_16:
delay_16
delay_8
face_down
step_end

SilphS2_3_Presidente_Move_15:
walk_slow_down
walk_slow_down
step_end

SilphS2_3_Presidente_Move_14:
delay_16
delay_8
face_down
delay_16
delay_8
face_right
step_end

SilphS2_3_Presidente_Move_13:
walk_in_place_right
step_end

SilphS2_3_Presidente_Move_12:
walk_down
face_right
step_end

SilphS2_3_Presidente_Move_11:
delay_16
face_left
step_end

SilphS2_3_Presidente_Move_10:
delay_16
delay_8
face_up
step_end

SilphS2_3_Presidente_Move_9:
walk_slow_right
walk_slow_up
delay_16
delay_8
step_end

SilphS2_3_Presidente_Move_8:
walk_in_place_right
step_end

SilphS2_3_Presidente_Move_7:
face_up
step_end

SilphS2_3_Presidente_Move_6:
walk_slow_right
step_end

SilphS2_3_Presidente_Move_5:
face_down
step_end

SilphS2_3_Presidente_Move_4:
walk_slow_down
step_end

SilphS2_3_Presidente_Move_3:
face_right
step_end

SilphS2_3_Presidente_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
face_left
step_end

SilphS2_3_Presidente_Move_1:
walk_in_place_up
step_end

SilphS2_3_Presidente_Texto_1:
	.string "Making a mockery of my security once\n"
	.string "more, young man?$"

SilphS2_3_Presidente_Texto_2:
	.string "Perhaps you're simply unaware of the\n"
	.string "extent of the consequences your\l"
	.string "actions in the LEAGUE will bear.\p"
	.string "Nonetheless, they will ripple\n"
	.string "through history.$"

SilphS2_3_Presidente_Texto_3:
	.string "Well, you got me there, boy.\n"
	.string "I was wrong about TEAM ROCKET.$"

SilphS2_3_Presidente_Texto_4:
	.string "When I saw your LEADER was the\n"
	.string "extraordinary TRAINER who'd ages ago\l"
	.string "conquered KANTO's LEAGUE so many\l"
	.string "times, a myriad of questions struck me.$"

SilphS2_3_Presidente_Texto_5:
	.string "GIOVANNI informed me of his history:\n"
	.string "TEAM ROCKET's founding, the BIRDS,\l"
	.string "MEWTWO, the MASTERBALL, the raid on the\l"
	.string "LEAGUE HQ…$"

SilphS2_3_Presidente_Texto_6:
	.string "He risked me surrendering him to LANCE.\p"
	.string "But he knew that his offer was\n"
	.string "irrefusable.$"

SilphS2_3_Presidente_Texto_7:
	.string "Returning KANTO its autonomy,\n"
	.string "its past glory…$"

SilphS2_3_Presidente_Texto_8:
	.string "GIOVANNI assured me that he would\n"
	.string "watch SILPH's back if anything went\l"
	.string "wrong.$"

SilphS2_3_Presidente_Texto_9:
	.string "But even without that guarantee, I'd\n"
	.string "have no doubt accepted, if only in the\l"
	.string "hopes of renewing the good, old days of\l"
	.string "KANTO.$"

SilphS2_3_Presidente_Texto_10:
	.string "And we're on it now, aren't we?\p"
	.string "That's why you're here.$"

SilphS2_3_Presidente_Texto_11:
	.string "Now that SILPH and TEAM ROCKET are\n"
	.string "together, KANTO will keep its essence.$"

SilphS2_3_Presidente_Texto_12:
	.string "However{PAUSE 15}…{PAUSE 15} it also means that we'll be\n"
	.string "turning this region into a\l"
	.string "technological powerhouse.\p"
	.string "What you're seeing right here\n"
	.string "is barely the beginning.$"

SilphS2_3_Presidente_Texto_13:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

SilphS2_3_Presidente_Texto_14:
	.string "Let me show you what I mean.$"

SilphS2_3_Presidente_Texto_15:
	.string "You'll be squaring up against a true\n"
	.string "old-school team of KANTO, and even\l"
	.string "the new one!$"

SilphS2_3_Presidente_Texto_16:
	.string "And once again… you returned me to the\n"
	.string "past.$"

SilphS2_3_Presidente_Texto_17:
	.string "Your talent is obvious, {PLAYER}. I\n"
	.string "hope you use it for the good of KANTO.$"

SilphS2_3_Presidente_Texto_18:
	.string "And as far as I'm concerned, you've got\n"
	.string "SILPH's full backing.$"

SilphS2_3_Presidente_Texto_19:
	.string "{PLAYER} obtained SILPH's B3 KEY!$"

SilphS2_3_Presidente_Texto_20:
	.string "With this, you'll be able to explore\n"
	.string "further in the library.\p"
	.string "But bear in mind that many things\n"
	.string "were lost over the years.$"

SilphS2_3_Presidente_Texto_21:
	.string "You may find what you seek down there.{PAUSE 25}\n"
	.string "Though it may be impossible to show now.\p"
	.string "History weathers without fail, eroding\n"
	.string "even the things that were once\l"
	.string "everyday occurrences.$"

SilphS2_3_Presidente_Texto_22:
	.string "Now, the question is: are you capable of\n"
	.string "finding things whose existences we're\l"
	.string "not even aware of?$"

SilphS2_3_Presidente_Texto_23:
	.string "KANTO watches you, ho, ho, ho!$"

SilphS2_3_Carta_No::
release
end

SilphS2_3_Carta::
lock
msgbox SilphS2_3_Carta_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SilphS2_3_Carta_No
delay 15
msgbox SilphS2_3_Carta_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_16 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SilphS2_3_Carta_No
delay 15
msgbox SilphS2_3_Carta_Texto_17 MSGBOX_AUTOCLOSE
release
end

SilphS2_3_Carta_Texto_1:
	.string "It's a letter signed by GIOVANNI.$"

SilphS2_3_Carta_Texto_2:
	.string "Wanna read it?$"

SilphS2_3_Carta_Texto_3:
	.string "Dear PRESIDENT:$"

SilphS2_3_Carta_Texto_4:
	.string "As I told you, I can confirm that most\n"
	.string "of KANTO's POKÉMON still had potential\l"
	.string "yet to be discovered.$"

SilphS2_3_Carta_Texto_5:
	.string "Our isolation from the world at large\n"
	.string "has blinded us to facts commonplace to\l"
	.string "that very world.$"

SilphS2_3_Carta_Texto_6:
	.string "However, the methods for obtaining\n"
	.string "these results aren't conclusive at all.\p"
	.string "They have never appeared to be either\n"
	.string "clear or standardized.$"

SilphS2_3_Carta_Texto_7:
	.string "Yet now, we have a most elementary\n"
	.string "advantage to those regions. We have\l"
	.string "created a special stone to evolve\l"
	.string "these POKÉMON as efficiently as\l"
	.string "possible.$"

SilphS2_3_Carta_Texto_8:
	.string "We have named it the LINK STONE.$"

SilphS2_3_Carta_Texto_9:
	.string "Its market price\n"
	.string "would be ¥9,800.$"

SilphS2_3_Carta_Texto_10:
	.string "However, as with the MASTER BALL, it\n"
	.string "shall never be made available. Nor will\l"
	.string "the public know its existence.$"

SilphS2_3_Carta_Texto_11:
	.string "I'm sure you'll understand the power of\n"
	.string "this tool.$"

SilphS2_3_Carta_Texto_12:
	.string "A great era of progress and innovation\n"
	.string "is approaching.$"

SilphS2_3_Carta_Texto_13:
	.string "The LINK STONE is merely the beginning.\p"
	.string "The first of many advancements that\n"
	.string "will forever shape our understanding\l"
	.string "of the art of battle.$"

SilphS2_3_Carta_Texto_14:
    .string "With appreciation:\p"
	.string "Giovanni. April 5th, 1997.$"

SilphS2_3_Carta_Texto_15:
	.string "PS: I've attached a list of all the\n"
	.string "POKÉMON that can be evolved through\l"
	.string "this method.$"

SilphS2_3_Carta_Texto_16:
	.string "Wanna read it?$"

SilphS2_3_Carta_Texto_17:
.string "- SLOWPOKE to SLOWKING\n"
	.string "- MAGNETON to MAGNEZONE\l"
	.string "- ONIX to STEELIX\l"
	.string "- LICKITUNG to LICKILICKY\l"
	.string "- RHYDON to RHYPERIOR\l"
	.string "- TANGELA to TANGROWTH\l"
	.string "- SEADRA to KINGDRA\l"
	.string "- SCYTHER to SCIZOR\l"
	.string "- ELECTABUZZ to ELECTIVIRE\l"
	.string "- MAGMAR to MAGMORTAR\l"
	.string "- GLIGAR to GLISCOR\l"
	.string "- SNEASEL to WEAVILE\l"
	.string "- PILOSWINE to MAMOSWINE\l"
	.string "- DUSCLOPS to DUSKNOIR\l"
	.string "- GURDURR to CONKELDURR\l"
	.string "- KARRABLAST to ESCAVALIER\l"
	.string "- SHELMET to ACCELGOR\l"
	.string "- SPRITZEE to AROMATISSE$"
