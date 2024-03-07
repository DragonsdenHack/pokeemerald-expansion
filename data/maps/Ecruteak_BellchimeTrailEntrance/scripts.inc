Ecruteak_BellchimeTrailEntrance_MapScripts::
	.byte 0

BellchimeTrailEntrance2::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_2:
	.string "ECRUTEAK CITY cannot risk another\n"
	.string "tragedy that threatens the last\l"
	.string "historic refuge of JOHTO: BELL TOWER.\l"
	.string "That's why we are extremely vigilant\l"
	.string "about who comes and goes from that\l"
	.string "sacred place; its preservation is our\l"
	.string "main concern.$"



BellchimeTrailEntrance3::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_3:
	.string "When the LEGENDARY POKÉMON appeared…\n"
	.string "they struck fear into those who\l"
	.string "witnessed their rise. And… some even\l"
	.string "attacked in vain. The LEGENDARY\l"
	.string "POKÉMON, aware of their own power, fled\l"
	.string "and left the frightened people behind.$"



BellchimeTrailEntrance4::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_4:
	.string "BELLCHIME TRAIL is behind these stairs\n"
	.string "and, further, BELL TOWER.$"



BellchimeTrailEntrance6::
end



BellchimeTrailEntrance9::
lock     
faceplayer     
msgbox Ecruteak_Bellchimetrailentrance_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_Bellchimetrailentrance_Text_6:
	.string "BELLCHIME TRAIL is behind these stairs\n"
	.string "and, further, BELL TOWER.$"

Ecruteak_BellchimeTrailEntrance_Mirto::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_4
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_5
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_6
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_5 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_6 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_5
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_8 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_7
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_8
waitmovement 0x0
delay 15
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_5
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_9 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_11 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_3
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
addobject 5
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_7
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_9
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_10
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_11
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_15 MSGBOX_AUTOCLOSE
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_12
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_11
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_11
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_16 MSGBOX_AUTOCLOSE
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_9
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_17 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_18 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_1
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_19 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_1
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
delay 20
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_21 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_22 MSGBOX_AUTOCLOSE
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_13
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_14
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_23 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER
applymovement 5, Ecruteak_BellchimeTrailEntrance_Mirto_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_12
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_EAST_EXPANSION
applymovement 8, Ecruteak_BellchimeTrailEntrance_Mirto_Move_16
waitmovement 0x0
removeobject 8
playse SE_EXIT
delay 60
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_25 MSGBOX_AUTOCLOSE
delay 20
clearflag FLAG_HIDE_GRANITE_CAVE_STEVEN
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN 
addobject 7
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BellchimeTrailEntrance_Mirto_Move_6
applymovement 7, Ecruteak_BellchimeTrailEntrance_Mirto_Move_17
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_26 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_27 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_28 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, Ecruteak_BellchimeTrailEntrance_Mirto_Move_2
waitmovement 0x0
msgbox Ecruteak_BellchimeTrailEntrance_Mirto_Texto_29 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN 
applymovement 7, Ecruteak_BellchimeTrailEntrance_Mirto_Move_18
waitmovement 0x0
removeobject 7
playse SE_EXIT
delay 20
setvar VAR_UNUSED_0x40F7, 140
clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
release
end

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_1:
	.string "ALDER: Ah, you are here, {PLAYER}.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_2:
	.string "Thanks once more. I understand I came\n"
	.string "off a bit harsh when we first met in\l"
	.string "AZALEA TOWN. We both sensed that\l"
	.string "unmistakable energy of skilled\l"
	.string "TRAINERS, yet I opted to keep my\l"
	.string "distance. The reality is, my journey\l"
	.string "across JOHTO is a race against the\l"
	.string "clock, and since you've agreed to\l"
	.string "assist me, I'll clarify why.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_3:
	.string "My loyal friend, VOLCARONA, underwent\n"
	.string "one final transformation. After a\l"
	.string "lifetime together, it acquired a power\l"
	.string "greater than anything I had ever seen,\l"
	.string "surpassing even that of the\l"
	.string "LEGENDARIES I know.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_4:
	.string "But it appears that immense power is\n"
	.string "taking its toll. It's a remarkable sight\l"
	.string "to witness its magnificence, yes, but it\l"
	.string "switches between periods of absolute\l"
	.string "vitality and others where it can hardly\l"
	.string "move, as if it were the cost of all the\l"
	.string "energy expended earlier.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_5:
	.string "JOHTO is one of the few regions that\n"
	.string "might hold a solution for my POKÉMON.\l"
	.string "Its knowledge in POKÉMON medicine and\l"
	.string "physiology is ancient.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_6:
	.string "The GRAND MASTER of BELL TOWER is one\n"
	.string "the person that could help me. He saw\l"
	.string "the LEGENDARY HO-OH and masters\l"
	.string "perfectly the healing properties of its\l"
	.string "SACRED ASH, but to speak with him, I\l"
	.string "have to climb to the top of BELL TOWER…$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_7:
	.string "You say you're the KANTO CHAMPION. I'm\n"
	.string "not well-versed in the region's recent\l"
	.string "history, but I'll trust your statement.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_8:
.string "Enough talking!\n"
	.string "Let's see if we can cross!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_9:
	.string "The access to BELL TOWER and\n"
	.string "BELLCHIME TRAIL is restricted to\l"
	.string "certain individuals. I kindly ask you to\l"
	.string "turn around, gentlemen.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_10:
	.string "ALDER: The KANTO-JOHTO CHAMPION is\n"
	.string "one of those individuals, right?. Here in\l"
	.string "front of you is the true KANTO\l"
	.string "CHAMPION: {PLAYER}.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_11:
.string "{PLAYER}?\n"
	.string "I apologize, but without evidence to\l"
	.string "support your claim, you won't be allowed\l"
	.string "to proceed. The current state of the\l"
	.string "POKÉMON LEAGUE is in turmoil. I've heard\l"
	.string "that a person named RED won the\l"
	.string "championship, but he's being\l"
	.string "substituted by BLUE. Additionally,\l"
	.string "ELITE FOUR member AGATHA has recently\l"
	.string "just resigne…$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_12:
.string "????: {PLAYER}!\n"
	.string "It is a pleasure to see you again!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_13:
	.string "E…ELITE FOUR AGATHA, it is an honor to\n"
	.string "see you again.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_14:
	.string "AGATHA: Who would have thought you'd\n"
	.string "end up visiting JOHTO? At this rate,\l"
	.string "you'll end up exploring every corner of\l"
	.string "the POKÉMON world. So active and\l"
	.string "willing, blessed youth.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_15:
	.string "AGATHA: They're telling the truth. I\n"
	.string "know that the BELL TOWER and you, its\l"
	.string "SAGES, are discreet. Therefore, you\l"
	.string "should know that you're facing the true\l"
	.string "CHAMPION of KANTO.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_16:
	.string "Please accept my apologies, it's truly\n"
	.string "an honor for someone of your stature\l"
	.string "to grace our temple with your presence.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_17:
.string "ALDER: So…\n"
	.string "Can we enter all together?$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_18:
	.string "This is an extraordinary circumstance.\n"
	.string "While AGATHA is typically regarded as\l"
	.string "one of our own, in this instance, the\l"
	.string "ultimate decision lies with our GRAND\l"
	.string "MASTER.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_19:
.string "ALDER: But…\n"
	.string "My POKÉMON is sick, your GRAND MASTER\l"
	.string "could help to heal it.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_20:
	.string "AGATHA: Your partner is quite a unique\n"
	.string "POKÉMON, as KURT told me. You must\l"
	.string "understand, SAGE, that his POKÉMON has\l"
	.string "not only undergone the DEEP BOND, but\l"
	.string "it represents the most extreme case\l"
	.string "known.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_21:
.string "Oh…\n"
	.string "I see…\l"
	.string "I see…\l"
	.string "Something like this undoubtedly\l"
	.string "deserves to be seen immediately; our\l"
	.string "GRAND MASTER will be delighted to see\l"
	.string "your POKÉMON.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_22:
.string "ALDER: Thank you so much.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_23:
	.string "AGATHA: Don't worry, {PLAYER}, I will\n"
	.string "speak with the GRAND MASTER, and he will\l"
	.string "understand perfectly. You will be able\l"
	.string "to enter BELL TOWER once this matter is\l"
	.string "resolved.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_24:
	.string "ALDER: Without your intervention,\n"
	.string "{PLAYER} wouldn't have been able to\l"
	.string "proceed.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_25:
.string "WARNING!\n"
	.string "WARNING!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_26:
	.string "A lunatic is wreaking havoc in BURNED\n"
	.string "TOWER!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_27:
	.string "Send some of our SAGES.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_28:
	.string "We already did it, but his POKÉMON are\n"
	.string "indestructible; none of us can touch\l"
	.string "him. If he keeps this up, he's going to\l"
	.string "seriously damage what's left of our\l"
	.string "heritage.$"

Ecruteak_BellchimeTrailEntrance_Mirto_Texto_29:
.string "...\n"
	.string "...\l"
	.string "In this case, we must tell to the GRAND\l"
	.string "MASTER. Climb up to BELL TOWER and tell\l"
	.string "him what just happened.\l"
	.string "Hurry up!$"

Ecruteak_BellchimeTrailEntrance_Mirto_Move_1:
walk_in_place_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_2:
emote_exclamation_mark
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_3:
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_4:
walk_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_5:
walk_in_place_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_6:
face_right
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_7:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_8:
walk_up
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_9:
walk_right
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_10:
face_left
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_11:
face_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_12:
walk_left
walk_in_place_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_13:
walk_right
walk_up
walk_up
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_14:
walk_up
walk_up
walk_up
face_down
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_15:
walk_left
walk_up
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_16:
walk_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_17:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

Ecruteak_BellchimeTrailEntrance_Mirto_Move_18:
walk_fast_right
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
step_end


Torre_Campana_Frontera_Izquierda::
compare VAR_RECYCLE_GOODS, 0
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 156
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
lock
applymovement 4, Torre_Campana_Frontera_Move_1
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_2
waitmovement 0x0
msgbox Torre_Campana_Frontera_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, Torre_Campana_Frontera_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_4
waitmovement 0x0
release
end

Torre_Campana_Frontera_Texto_1:
	.string "No one can pass through here without\n"
	.string "the consent of our GRAND MASTER; you'll\l"
	.string "have to wait.$"

Torre_Campana_Frontera_Move_1:
face_left
step_end

Torre_Campana_Frontera_Move_2:
face_right
step_end

Torre_Campana_Frontera_Move_3:
face_down
step_end

Torre_Campana_Frontera_Move_4:
walk_slow_down
step_end

Torre_Campana_Frontera_Derecha::
compare VAR_RECYCLE_GOODS, 0
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 156
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
lock
applymovement 4, Torre_Campana_Frontera_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_1
waitmovement 0x0
msgbox Torre_Campana_Frontera_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, Torre_Campana_Frontera_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Torre_Campana_Frontera_Move_4
waitmovement 0x0
release
end
