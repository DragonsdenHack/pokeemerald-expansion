CinnabarMansionS1_MapScripts::
	.byte 0

CinnabarMansionS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_CINDY_1, CinnabarMansionS1_Text_CientificoIntro, CinnabarMansionS1_Text_CientificoDefeated
	msgbox CinnabarMansionS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarMansionS1_1::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_1:
	.string "This location was destroyed after\n"
	.string "MEWTWO escaped, many things were lost\l"
	.string "here, but the significance of what\l"
	.string "happened here still resonates in our\l"
	.string "memories.$"



CinnabarMansionS1_3::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_3:
	.string "Nothing withstands the passage of\n"
	.string "time; in three years, this place may not\l"
	.string "exist anymore. Furthermore, the entire\l"
	.string "CINNABAR ISLAND could vanish,\l"
	.string "swallowed by its volcano. However, none\l"
	.string "of that can undo what happened here.$"



CinnabarMansionS1_4::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_4:
	.string "If they can't take you down, you can\n"
	.string "bounce back from the toughest hits and\l"
	.string "come back even stronger than before.\l"
	.string "The way we've kept this place going and\l"
	.string "finally finished our big project despite\l"
	.string "all the craziness is proof; no one, not\l"
	.string "even you, can revert this fact.$"

CinnabarMansionS1_Dalia_Move_1:
walk_in_place_right
step_end

CinnabarMansionS1_Dalia_Move_2:
face_down
step_end

CinnabarMansionS1_Dalia_Move_3:
walk_down
walk_down
face_left
step_end

CinnabarMansionS1_Dalia_Move_4:
face_up
step_end

CinnabarMansionS1_Dalia_Move_5:
face_left
step_end

CinnabarMansionS1_Dalia_Move_6:
walk_in_place_left
step_end

CinnabarMansionS1_Dalia_Move_7:
walk_left
step_end

CinnabarMansionS1_Dalia_Move_8:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

CinnabarMansionS1_Dalia_Move_9:
walk_in_place_up
step_end

CinnabarMansionS1_Dalia_Move_10:
emote_exclamation_mark
step_end

CinnabarMansionS1_Dalia::
lock
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_1
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_3
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_5
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_6
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_7
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_705, CinnabarMansionS1_Dalia_Texto_9
msgbox CinnabarMansionS1_Dalia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS1_Dalia_Move_8
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_9
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_17 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_18 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 5, CinnabarMansionS1_Dalia_Move_10
waitmovement 0x0
delay 10
applymovement 5, CinnabarMansionS1_Dalia_Move_5
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_20 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_11
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_6
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_13
applymovement 5, CinnabarMansionS1_Dalia_Move_12
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_25 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_27 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_14
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_29 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_30 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox CinnabarMansionS1_Dalia_Texto_31 MSGBOX_DEFAULT
waitfanfare
msgbox CinnabarMansionS1_Dalia_Texto_32 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_15
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_34 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_16
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_35 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 28
release
end

CinnabarMansionS1_Dalia_Move_16:
walk_slow_right
walk_slow_up
step_end

CinnabarMansionS1_Dalia_Move_15:
walk_slow_right
step_end

CinnabarMansionS1_Dalia_Move_14:
walk_slow_left
step_end

CinnabarMansionS1_Dalia_Move_13:
delay_16
face_up
step_end

CinnabarMansionS1_Dalia_Move_12:
walk_slow_up
step_end

CinnabarMansionS1_Dalia_Move_11:
walk_left
step_end

CinnabarMansionS1_Dalia_Texto_1:
	.string "So it was you.$"

CinnabarMansionS1_Dalia_Texto_2:
	.string "If it weren't for you, everything would\n"
	.string "be different. The plan for restoring\l"
	.string "KANTO was perfect.$"

CinnabarMansionS1_Dalia_Texto_3:
	.string "But you did the unexpected. At the\n"
	.string "worst possible moment.$"

CinnabarMansionS1_Dalia_Texto_4:
	.string "And here we are, fleeing from the very\n"
	.string "region we were going to save.$"

CinnabarMansionS1_Dalia_Texto_5:
	.string "If we think about it, we both sought\n"
	.string "the same thing. But there's room for\l"
	.string "just one winner, isn't there?$"

CinnabarMansionS1_Dalia_Texto_6:
	.string "If we must, we'll fight for that space.$"

CinnabarMansionS1_Dalia_Texto_7:
	.string "In these last months, GRANDPA's\n"
	.string "harvested the fruits of years of labor.\p"
	.string "A new era's finally come.$"

CinnabarMansionS1_Dalia_Texto_8:
	.string "Then bear witness to it!!$"

CinnabarMansionS1_Dalia_Texto_9:
	.string "What?! TAUROS-X… defeated?!$"

CinnabarMansionS1_Dalia_Texto_10:
	.string "Mmm{PAUSE 20}…{PAUSE 20} In the end, you're here for a\n"
	.string "reason. An upgraded clone alone won't\l"
	.string "be enough to back you down.$"

CinnabarMansionS1_Dalia_Texto_11:
	.string "There's something I like about you.\n"
	.string "Somehow, you stand for the past and\l"
	.string "the antique alike.$"

CinnabarMansionS1_Dalia_Texto_12:
	.string "{PAUSE 10}…{PAUSE 10} {PAUSE 10}…{PAUSE 10}$"

CinnabarMansionS1_Dalia_Texto_13:
	.string "My brother was too young, but I still\n"
	.string "recall the battles between GRANDPA and\l"
	.string "your BOSS{PAUSE 20}…{PAUSE 20} before it all burst open.$"

CinnabarMansionS1_Dalia_Texto_14:
	.string "They were magnificent for the era, you\n"
	.string "know. They'd drawn out the best from\l"
	.string "the original 150.$"

CinnabarMansionS1_Dalia_Texto_15:
	.string "{PAUSE 10}…{PAUSE 10} {PAUSE 10}…{PAUSE 10}$"

CinnabarMansionS1_Dalia_Texto_16:
	.string "In the end, both tried to save the\n"
	.string "region{PAUSE 20}…{PAUSE 20} in their own ways.$"

CinnabarMansionS1_Dalia_Texto_17:
	.string "GRANDPA from the inside, and\n"
	.string "GIOVANNI from the outside.$"

CinnabarMansionS1_Dalia_Texto_18:
	.string "{PAUSE 10}…{PAUSE 10} {PAUSE 10}…{PAUSE 10}$"

CinnabarMansionS1_Dalia_Texto_19:
	.string "Betrayed, you say?$"

CinnabarMansionS1_Dalia_Texto_20:
	.string "You don't get it, do you, {PLAYER}?$"

CinnabarMansionS1_Dalia_Texto_21:
	.string "Blaming GIOVANNI as the only culprit\n"
	.string "was the only way, don't you understand?$"

CinnabarMansionS1_Dalia_Texto_22:
	.string "Then and only then would LANCE trust\n"
	.string "entirely in one of them: the only ones\l"
	.string "with the real chance of recovering\l"
	.string "KANTO.$"

CinnabarMansionS1_Dalia_Texto_23:
	.string "Besides.$"

CinnabarMansionS1_Dalia_Texto_24:
	.string "GRANDPA knew GIOVANNI better than\n"
	.string "anyone; he knew he'd have the strength\l"
	.string "to keep going no matter what with an\l"
	.string "alternate plan, brilliant on its own and\l"
	.string "separate from his.$"

CinnabarMansionS1_Dalia_Texto_25:
	.string "He did what needed to be done to keep\n"
	.string "KANTO's flames of hope alive, just that.$"

CinnabarMansionS1_Dalia_Texto_26:
	.string "And, deep inside, you know your LEADER\n"
	.string "knows it. He knows the true reasons.$"

CinnabarMansionS1_Dalia_Texto_27:
	.string "The truth is that their rivalry never\n"
	.string "came to an end. GRANDPA saved it.\p"
	.string "However{PAUSE 20}…{PAUSE 20}$"

CinnabarMansionS1_Dalia_Texto_28:
	.string "… No, it's not about a tournament nor a\n"
	.string "title{PAUSE 20}…{PAUSE 20} We're gambling on the future of\l"
	.string "this region.$"

CinnabarMansionS1_Dalia_Texto_29:
	.string "Now that they've accomplished that,\n"
	.string "nothing else matters.$"

CinnabarMansionS1_Dalia_Texto_30:
	.string "Everything comes again to who's the\n"
	.string "better TRAINER. You think you are that\l"
	.string "one?$"

CinnabarMansionS1_Dalia_Texto_31:
	.string "YOU GOT BASEMENT B1 KEY!$"

CinnabarMansionS1_Dalia_Texto_32:
	.string "Well then, keep going.$"

CinnabarMansionS1_Dalia_Texto_33:
	.string "With his current team, not a single\n"
	.string "CHAMPION across KANTO and JOHTO's\l"
	.string "history could beat GRANDPA.$"

CinnabarMansionS1_Dalia_Texto_34:
	.string "That was his childhood dream. Now that\n"
	.string "he's done it, he's raring to go\l"
	.string "toe-to-toe with today's CHAMPION.$"

CinnabarMansionS1_Dalia_Texto_35:
	.string "When he defeats everyone, things will\n"
	.string "get back to normal{PAUSE 20}…{PAUSE 20} at last.$"

CinnabarMansionS1_Dalia_Derrotada::
lock
faceplayer
msgbox CinnabarMansionS1_Dalia_Texto_33 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_35 MSGBOX_AUTOCLOSE
release
end

Cinnabar_S1_Llave::
compare VAR_UNUSED_0x40F8, 27
goto_if_gt Cinnabar_S1_Llave_Despues
delay 10
msgbox Cinnabar_S1_Llave_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Cinnabar_S1_Llave_Despues::
delay 10
msgbox Cinnabar_S1_Llave_Texto_2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 6, 12, 0x284, FALSE
setmetatile 6, 13, 0x284, FALSE
setmetatile 7, 13, 0x284, FALSE
setmetatile 7, 12, 0x2C8, FALSE
special DrawWholeMapView
delay 20
release
end

Cinnabar_S1_Llave_Texto_2:
	.string "Wanna use BASEMENT B1 KEY?$"

Cinnabar_S1_Llave_Texto_1:
	.string "You require a special KEY.$"


