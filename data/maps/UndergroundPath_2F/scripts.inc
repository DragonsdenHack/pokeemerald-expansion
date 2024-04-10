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
.string "The speculation with EEVEE is growing,\n"
	.string "if I buy 5 and I keep them for a lot of\l"
	.string "years, I can earn the double that I\l"
	.string "inverted.$"



UndergroundPath2F_5::
lock
msgbox UndergroundPath2F_5_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_5_Texto_1:
.string "A VAPOREON is all that I need to\n"
	.string "complete my spectaculous, when\l"
	.string "VAPOREON uses ACID ARMOR in the water,\l"
	.string "everyone will be shocked.$"

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
	.string "further than you, but I wanted to\l"
	.string "hatch my egg as soon as possible\l"
	.string "after ARCHER gave it to us after completing\l"
	.string "our CHRONO ISLAND mission. So that way\l"
	.string "I can begin to train it.$"

UndergroundPath2F_Andra_Text_2:
    .string "In the rush I forgot to inform you\n"
	.string "about the place that has assigned us\l"
	.string "for the next missions, there are\l"
	.string "several topics that seem to require\l"
	.string "our intervention.$"

UndergroundPath2F_Andra_Text_3:
    .string "Meanwhile, what do you think about\n"
	.string "KANTO people? Seems like they don't\l"
	.string "like us too much, eh? It looks like\l"
	.string "ELITE FOUR started a discredit\l"
	.string "campaign against our organization, a\l"
	.string "bit later than war happened.$"

UndergroundPath2F_Andra_Text_4:
    .string "I have had time since my defeat against\n"
	.string "the CONSUL to improve my POKÉMON TEAM,\l"
	.string "I very much doubt that she can beat me\l"
	.string "now, however, I want to test if the\l"
	.string "outcome of our first fight in the\l"
	.string "presence of ARCHER was a coincidence\l"
	.string "or not, get ready, I will go all out!$"

UndergroundPath2F_Andra_Text_5:
    .string "So it was no coincidence, you are truly\n"
	.string "a remarkable TRAINER.$"

UndergroundPath2F_Andra_Text_6:
    .string "So you are going hard, uh? I should be\n"
	.string "happy, I prefer someone like you at my\l"
	.string "side on future missions than someone\l"
	.string "mediocre, but don't fool yourself. I'm\l"
	.string "going to surpass your level at any\l"
	.string "moment. I will become the strongest\l"
	.string "and most efficient GRUNT in the whole\l"
	.string "organization.$"

UndergroundPath2F_Andra_Text_7:
	.string "A messenger told me that the ROCKET\n"
	.string "ADMINISTRATOR of this area, PETREL,\l"
	.string "has summoned us to the POKÉMON DAY\l"
	.string "CARE center that is across this\l"
	.string "underground, he said that we should\l"
	.string "enter the place secretly and without\l"
	.string "being seen, that's all. So see you\l"
	.string "there. Don't be late, okay!$"

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
.string "That's it{PAUSE 15}…{PAUSE 15} Everyone in line{PAUSE 15}…{PAUSE 15} Do not\n"
	.string "worry{PAUSE 15}…{PAUSE 15} There will be for everyone…$"

UndergroundPath2F_Secundaria_Eevees_Texto_2:
.string "Keep it in mind ROCKET, you have only\n"
	.string "managed to delay the date on which\l"
	.string "those subways will close, in 3 years\l"
	.string "there will be no trace of them.$"

UndergroundPath2F_Secundaria_Eevees_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

UndergroundPath2F_Secundaria_Eevees_Texto_4:
.string "What's your problem, ROCKET? If you\n"
	.string "want an EEVEE, get in line like everyone\l"
	.string "else, I hope you have the million POKÉ\l"
	.string "that it costs. Otherwise, don't waste\l"
	.string "my time anymore and go back to your…$"

UndergroundPath2F_Secundaria_Eevees_Texto_5:
.string "That naive SCIENTIST sends you to\n"
	.string "retrieve these EEVEES? I don't know\l"
	.string "what you're talking about ROCKET,\l"
	.string "nobody here cares about the origin of\l"
	.string "the EEVEES, the only thing that\l"
	.string "matters is that they are here and they\l"
	.string "have a price, quite juicy by the way.$"

UndergroundPath2F_Secundaria_Eevees_Texto_6:
.string "Enough! I'm at the end of my rope! What\n"
	.string "a pity that the only thing that poor\l"
	.string "fool can aspire to is to hire the\l"
	.string "services of a mediocre GRUNT ROCKET\l"
	.string "who can do nothing in the face of the\l"
	.string "category of POKÉMON that are the\l"
	.string "evolutions of EEVEE!$"

UndergroundPath2F_Secundaria_Eevees_Texto_7:
.string "But who are you? Wait! You weren't the\n"
	.string "one who knocked down lonely to all the\l"
	.string "security of SILPH?!$"

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
.string "Stupid ROCKET! I thought this black\n"
	.string "market stuff was your kind of things\l"
	.string "too! {PAUSE 15}…{PAUSE 15} …{PAUSE 15} Are you now working together\l"
	.string "with SILPH? What's the difference!\l"
	.string "Anyway, I have already managed to sell\l"
	.string "7 EEVEES, with the 7 million I've got,\l"
	.string "I'll be able to finally escape from this\l"
	.string "decadent region.$"

UndergroundPath2F_Secundaria_Eevees_Texto_12:
.string "Good luck to those of you who stay in\n"
	.string "KANTO! You will need it!$"
