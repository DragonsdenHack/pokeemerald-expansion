UndergroundPath_2F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UndergroundPath_2F_OnResume
	.byte 0

UndergroundPath_2F_OnResume:
	call UndergroundPath_2F_SetupEscapeWarp
	end

UndergroundPath_2F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE6, 19, 14
	return

UndergroundPath2F_2::
end



UndergroundPath2F_3::
lock
msgbox UndergroundPath2F_3_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_3_Texto_1:
.string "Hohoho… You will see when everyone\n"
	.string "takes a look at my great FLAREON.$"



UndergroundPath2F_4::
lock
msgbox UndergroundPath2F_4_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_4_Texto_1:
	.string "The speculative EEVEE market's growing.\n"
	.string "If I buy five and hold them for years,\l"
	.string "I'll earn double my investment.$"



UndergroundPath2F_5::
lock
msgbox UndergroundPath2F_5_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_5_Texto_1:
	.string "A VAPOREON's all I need to complete my\n"
	.string "show. When it dissipates with ACID\l"
	.string "ARMOR in the water, everyone'll be\l"
	.string "shocked.$"

UndergroundPath2F_Andra::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2
waitmovement 0x0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end

UndergroundPath2F_Andra_Text_1:
	.string "ANDRA: {PLAYER}! Excuse me for going\n"
	.string "on ahead, but I wanted to hatch the egg\l"
	.string "that ARCHER gave me after the mission\l"
	.string "on FIVE ISLAND ASAP. That way, I can\l"
	.string "start on training it.$"

UndergroundPath2F_Andra_Text_2:
	.string "In my rush, I forgot to inform you of\n"
	.string "our newly assigned base for the\l"
	.string "upcoming missions. There's a few things\l"
	.string "that seem to require our intervention.$"

UndergroundPath2F_Andra_Text_3:
	.string "By the way, what're your thoughts on\n"
	.string "the KANTO folks? Seems like they don't\l"
	.string "like us all that much, eh? It looks like\l"
	.string "the ELITE FOUR started a campaign to\l"
	.string "discredit our organization a bit after\l"
	.string "the war.$"

UndergroundPath2F_Andra_Text_4:
	.string "I've had some time since my loss against\n"
	.string "the CONSUL to improve my POKÉMON. I\l"
	.string "very much doubt she could beat me now.\l"
	.string "But I want to test if the results of our\l"
	.string "first battle before ARCHER was just a\l"
	.string "coincidence. Get ready. I'm going all\l"
	.string "out!$"

UndergroundPath2F_Andra_Text_5:
	.string "So it was no coincidence. You truly are\n"
	.string "a remarkable TRAINER.$"

UndergroundPath2F_Andra_Text_6:
	.string "So you're serious. I ought to be\n"
	.string "happy-I'd rather someone on my level\l"
	.string "watch my back, rather than someone\l"
	.string "mediocre. But don't get complacent. I'm\l"
	.string "gonna surpass your level any time now.\l"
	.string "I'll become the strongest, most\l"
	.string "efficient GRUNT in the whole\l"
	.string "organization.$"

UndergroundPath2F_Andra_Text_7:
	.string "A messenger told me that the ROCKET\n"
	.string "ADMINISTRATOR here, PETREL, has\l"
	.string "summoned us to the POKÉMON DAY CARE\l"
	.string "just across this path. He said to enter\l"
	.string "discreetly-no witnesses. That's all, so\l"
	.string "see you there. Hey, don't be late!$"

UndergroundPath2F_Andra_move_1:
walk_in_place_up
step_end

UndergroundPath2F_Andra_move_2:
emote_exclamation_mark
walk_slow_left
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.1:
emote_exclamation_mark
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.2:
emote_exclamation_mark
walk_slow_right
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.3:
emote_exclamation_mark
walk_slow_right
walk_down
walk_slow_right
walk_down
step_end

UndergroundPath2F_Andra_move_3:
walk_in_place_right
walk_in_place_down
step_end

UndergroundPath2F_Andra_move_4:
face_up
step_end

UndergroundPath2F_Andra_move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath2F_Andra2::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.1
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra3::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.2
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra4::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.3
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end

UndergroundPath2F_Secundaria_Eevees::
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_1 MSGBOX_DEFAULT
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_DEFAULT
delay 20
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_4 MSGBOX_NPC
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_NPC
delay 20
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_5 MSGBOX_NPC
playse MUS_RG_ENCOUNTER_ROCKET
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_PETE, UndergroundPath2F_Secundaria_Eevees_Texto_7
delay 15
playse SE_PIN
applymovement 3, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
applymovement 3, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_8 MSGBOX_NPC
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
fadescreen 1
delay 20
removeobject 3
removeobject 4
removeobject 5
fadescreen 0
delay 20
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
delay 15
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_9 MSGBOX_NPC
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_NPC
delay 20
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_10 MSGBOX_DEFAULT
waitse
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_11 MSGBOX_NPC
delay 15
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_12 MSGBOX_NPC
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_ROUTE127_STATE, 2
release
end

UndergroundPath2F_Secundaria_Eevees_Move_1:
walk_in_place_up
step_end

UndergroundPath2F_Secundaria_Eevees_Move_2:
emote_exclamation_mark
step_end

UndergroundPath2F_Secundaria_Eevees_Move_3:
face_player
step_end

UndergroundPath2F_Secundaria_Eevees_Texto_1:
	.string "That's it… Everyone in line… Don't you\n"
	.string "worry… There will be enough for\l"
	.string "everyone…$"

UndergroundPath2F_Secundaria_Eevees_Texto_2:
	.string "Bear in mind, ROCKET. You've only\n"
	.string "managed to delay the closure of the\l"
	.string "subways. In three years, there'll be no\l"
	.string "trace of them.$"

UndergroundPath2F_Secundaria_Eevees_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

UndergroundPath2F_Secundaria_Eevees_Texto_4:
	.string "What's your problem, ROCKET? If you\n"
	.string "want an EEVEE, get in line like everyone\l"
	.string "else. I hope you've got the million-POKÉ\l"
	.string "fee. Otherwise, quit wasting my time and\l"
	.string "go back to your…$"

UndergroundPath2F_Secundaria_Eevees_Texto_5:
	.string "That naive SCIENTIST sent you to\n"
	.string "retrieve these EEVEE? I don't know\l"
	.string "what you're talking about, ROCKET. No\l"
	.string "one here cares about where they came\l"
	.string "from. The only thing that matters is\l"
	.string "that they're here and that they've got\l"
	.string "a price. A juicy one, at that.$"

UndergroundPath2F_Secundaria_Eevees_Texto_6:
	.string "Enough! I'm at the end of my rope! What\n"
	.string "a pity the only thing that poor sap can\l"
	.string "do is hire the services of a mediocre\l"
	.string "ROCKET GRUNT who can do nothing in the\l"
	.string "face of the category of POKÉMON that\l"
	.string "are the Eeveelutions!$"

UndergroundPath2F_Secundaria_Eevees_Texto_7:
	.string "But who're you? Wait! Weren't you the\n"
	.string "one who toppled all of SILPH security\l"
	.string "by his lonesome?!$"

UndergroundPath2F_Secundaria_Eevees_Texto_8:
.string "It's {PLAYER}! One of the most\n"
	.string "powerful ROCKET EXECUTIVES! Let's get\l"
	.string "the hell out of here!$"

UndergroundPath2F_Secundaria_Eevees_Texto_9:
.string "Do you have any idea what you just did?$"

UndergroundPath2F_Secundaria_Eevees_Texto_10:
.string "({PLAYER} recovered 60 of the 70\n"
	.string "stolen EEVEES!).$"

UndergroundPath2F_Secundaria_Eevees_Texto_11:
	.string "… … Are you partnered with SILPH now?\n"
	.string "What's the difference?! Anyway, I've\l"
	.string "already pawned off seven EEVEE, and\l"
	.string "with this seven million I'd just made,\l"
	.string "I'll finally get to jump ship from this\l"
	.string "decadent region.$"

UndergroundPath2F_Secundaria_Eevees_Texto_12:
	.string "Good luck to you all staying in KANTO!\n"
	.string "You'll need it!$"
