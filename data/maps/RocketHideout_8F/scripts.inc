RocketHideout_8F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
	.byte 0

RocketHideout_8F_OnFrame:
map_script_2 VAR_UNUSED_0x40DC, 12, RocketHideout_8F_Mision_Silph_Despues
map_script_2 VAR_UNUSED_0x40F7, 803, RocketHideout_8F_Disguise_Player
map_script_2 VAR_UNUSED_0x40F7, 809, RocketHideout_8F_Disguise_Player_3
	.2byte 0

RocketHideout_8F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 802, RocketHideout_8F_Disguise_Player_2
map_script_2 VAR_UNUSED_0x40F7, 808, RocketHideout_8F_Disguise_Player_4
	.2byte 0

RocketHideout_8F_Disguise_Player_2::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 803
end

RocketHideout_8F_Disguise_Player_4::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 809
end

RocketHideout_6F_Disguise_Player_2_Move_1:
face_right
step_end

RocketHideout8F_Mision_Johto_move_12.5:
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
face_up
delay_8
delay_8
face_right
delay_8
delay_8
face_down
delay_8
delay_8
face_left
delay_8
step_end

RocketHideout8F_1::
end



RocketHideout8F_2::
end

RocketHideout_8F_Mision_Articuno_Zapdos::
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
removeobject 7
removeobject 8
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
playse SE_EXIT
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 4
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
playse SE_SHOP
addmoney 140000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_EVIOLITE
waitfanfare
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
setvar VAR_UNUSED_0x40F7, 63
release
end

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1:
	.string "GIOVANNI: What do you think\n"
	.string "{PLAYER}? A much better workplace\l"
	.string "than the B4F dump, don't you think so?\l"
	.string "Did you discover something?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2:
	.string "GIOVANNI: I see, DAISY is also OAK's\n"
	.string "granddaughter and BLUE's sister, based\l"
	.string "on your description, something highly\l"
	.string "unusual is going on in that place.,\l"
	.string "either OAK has teleported using a\l"
	.string "POKÉMON, or that LABORATORY isn't as\l"
	.string "innocent and charitable as it appears.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3:
	.string "ANDRA: So you were able to steal a\n"
	.string "BULBASAUR? Wow so lucky, just a few\l"
	.string "TRAINERS have access to that kind of\l"
	.string "POKÉMON, I won't be left behind, trust\l"
	.string "me!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4:
.string "BLUE: Did you call me, GIOVANNI?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5:
	.string "GIOVANNI: Indeed, BLUE, {PLAYER} has\n"
	.string "visited your precious hometown,\l"
	.string "considering you didn't want to share\l"
	.string "information about the people you've\l"
	.string "known all your life.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6:
.string "BLUE: ... ... ... ...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7:
	.string "BLUE: I already told you GIOVANNI, the\n"
	.string "relation with my grandpa is more like in\l"
	.string "a formal way, basically he took care of\l"
	.string "me and my sister due to the family ties\l"
	.string "that bind us, I've been living with my\l"
	.string "sister DAISY, who gets along better\l"
	.string "with OAK.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8:
	.string "BLUE: Refering to RED, he has always\n"
	.string "been his favorite, his chosen student,\l"
	.string "since I can remember he already was\l"
	.string "teaching him how to battle, it seems as\l"
	.string "if him were his chosen one, destined to\l"
	.string "carry out my grandfather's will…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9:
	.string "BLUE: I can't tell you something else\n"
	.string "because I know nothing GIOVANNI, and I\l"
	.string "dont want to return to PALLET TOWN. Now\l"
	.string "I have some freedom to be the TRAINER\l"
	.string "I want to be, the only thing OAK and\l"
	.string "DAISY wanted for me was to secure a\l"
	.string "good position, so I'd cease to be a\l"
	.string "burden for them, they see me as that, a\l"
	.string "task to deal with, but no, my intention\l"
	.string "is different: to be the best on my own\l"
	.string "terms and demonstrate how much they\l"
	.string "undervalue me, I won't be just another\l"
	.string "subordinate following the ELITE 4's\l"
	.string "orders.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10:
	.string "GIOVANNI: Just a real ROCKET would talk\n"
	.string "like that, BLUE, we won't let that they\l"
	.string "impose their will, trust me, here is your\l"
	.string "home.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11:
.string "BLUE: Th-Thanks sir…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12:
	.string "GIOVANNI: Well, I called you three\n"
	.string "because I consider that you are skilled\l"
	.string "enough to undertake a mission, three to\l"
	.string "be clear, with a crucial importance, but\l"
	.string "before that {PLAYER} here is your\l"
	.string "reward for so valuable information.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13:
.string "You have just earned 140,000 POKÉ!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14:
	.string "GIOVANNI: Also, take this, BLUE and\n"
	.string "ANDRA already have one, it's an insult\l"
	.string "that one of my top men lacks such a\l"
	.string "resource like this one.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15:
	.string "GIOVANNI: An EVIOLITE, there are just\n"
	.string "a very few in this region. Will boost a\l"
	.string "50% on both defenses, in those POKÉMON\l"
	.string "that still could evolve. With this your\l"
	.string "GOLBAT will resist in an extraordinary\l"
	.string "way, not just GOLBAT, MAGMAR,\l"
	.string "ELECTABUZZ, SCYTHER or even RHYDON are\l"
	.string "one of the best users of this equipable\l"
	.string "object. Use it wisely.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1:
.string "GIOVANNI: ...$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16:
	.string "GIOVANNI: The missions I'll assign\n"
	.string "since right now on in this place are\l"
	.string "completely confidential for any\l"
	.string "outsider to the S5 of this base,\l"
	.string "including most of the ROCKETS, this\l"
	.string "should not be discussed with outsiders,\l"
	.string "there's always talk about TEAM ROCKET\l"
	.string "stealing and committing crimes to fund\l"
	.string "their projects. Well, in places like this\l"
	.string "is where the real projects are planned,\l"
	.string "if anyone, a ROCKETt or not, asks what\l"
	.string "are you doing, reply with the most basic\l"
	.string "task that the average ROCKET carries\l"
	.string "out: stealing, be it an item or a\l"
	.string "POKÉMON… Now that you know this, let's\l"
	.string "start…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17:
	.string "GIOVANNI: Do you remember, ANDRA, that\n"
	.string "POWER PLANT that you were so\l"
	.string "interested in, and all that you told me\l"
	.string "about your suspicions of a POKÉMON\l"
	.string "with a great power residing there?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18:
.string "ANDRA: Of course sir, I remember it!$"


RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19:
	.string "At that moment, I didn't want to tell\n"
	.string "you, but we've been investigating the\l"
	.string "whereabouts of the LEGENDARY BIRDS\l"
	.string "for quite some time, three of the\l"
	.string "oldest, most powerful, and sacred\l"
	.string "POKEMON that this region knows. One of\l"
	.string "them, ZAPDOS, perhaps the most\l"
	.string "dangerous and uncontrollable of the\l"
	.string "three, of the dual type\l"
	.string "ELECTRIC-FLYING, is currently located\l"
	.string "in that ANDRA POWER PLANT. It's not\l"
	.string "surprising that you noticed its\l"
	.string "presence; the electric discharges it\l"
	.string "emits are unlike anything you've seen.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20:
	.string "Then we have ARTICUNO, of the\n"
	.string "ICE-FLYING type, perhaps the most\l"
	.string "manageable of the three but equally\l"
	.string "dangerous and very resistant. We know\l"
	.string "that currently, there is a specimen\l"
	.string "located in FOAM ISLANDS, west of\l"
	.string "FUCHSIA CITY.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21:
.string "BLUE: A specimen?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22:
	.string "GIOVANNI: That's correct. We don't\n"
	.string "believe they are unique species, but\l"
	.string "there may be more than one ZAPDOS or\l"
	.string "more than one ARTICUNO. This doesn't\l"
	.string "diminish the fact that they are\l"
	.string "exceptionally rare, powerful, and\l"
	.string "elusive POKEMON. The last of them,\l"
	.string "MOLTRES, has been located at the\l"
	.string "summit of MT. EMBER, a very emblematic\l"
	.string "volcano on KNOT ISLAND.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23:
	.string "GIOVANNI: Your mission is as follows,\n"
	.string "gentlemen. ANDRA will convene with a\l"
	.string "committee of our best scientists and\l"
	.string "strategists to study the best way to\l"
	.string "enter the power plant without being\l"
	.string "seen by the authorities who monitor the\l"
	.string "area. On the other hand, BLUE will head\l"
	.string "straight to ONE ISLAND. I have\l"
	.string "arranged a transfer in VERMILION that\l"
	.string "will take you directly to the island.\l"
	.string "Your objective will be MOLTRES, given\l"
	.string "that you have a BLASTOISE on your\l"
	.string "team. I trust it will be sufficient to\l"
	.string "extinguish the wild flame of the\l"
	.string "Legendary Fire Pokémon.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24:
	.string "GIOVANNI: As for you, {PLAYER}, you\n"
	.string "will go after the Legendary ARTICUNO in\l"
	.string "the FOAM ISLANDS. Security there is not\l"
	.string "as strict as in the POWER PLANT. I\l"
	.string "advise you to take Route 12, south of\l"
	.string "LAVENDER TOWN. It will be a long journey\l"
	.string "to FUCHSIA CITY and then the sea that\l"
	.string "leads to SEAFOAM ISLANDS. However, it\l"
	.string "will serve as preparation to face such a\l"
	.string "POKÉMON. I trust in your abilities as a\l"
	.string "TRAINER to defeat ARTICUNO,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25:
	.string "GIOVANNI: Now, I don't want you to\n"
	.string "capture the birds, I just want you to\l"
	.string "defeat them, so we can obtain a\l"
	.string "feather, which is more than enough for\l"
	.string "the research we desire, this way, we can\l"
	.string "reproduce the power of these POKÉMON\l"
	.string "under controlled conditions without\l"
	.string "others noticing the absence of the\l"
	.string "birds…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26:
	.string "GIOVANNI: I trust that you are aware\n"
	.string "of the importance of this mission, we\l"
	.string "are going to expand the power\l"
	.string "standards, surpass the supposed limits\l"
	.string "set, which will further solidify our\l"
	.string "position as the main resistance against\l"
	.string "the elites of this region…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27:
	.string "GIOVANNI: There's not much more to add,\n"
	.string "you are authorized to enter the room\l"
	.string "right to this office, there, you will\l"
	.string "discover crucial information about the\l"
	.string "LEGENDARY BIRDS and all known\l"
	.string "LEGENDARY POKÉMON in general, and\l"
	.string "that's all, gentlemen, we'll notice you\l"
	.string "on any details that might impact your\l"
	.string "missions.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28:
	.string "ANDRA: I still can't believe this,\n"
	.string "{PLAYER}! We are going in search of a\l"
	.string "LEGENDARY POKÉMON each one of us! This\l"
	.string "is getting insane huh, I will keep you\l"
	.string "informated about how my mission with\l"
	.string "ZAPDOS goes, I hope you do the same!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_2:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_3:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_5:
walk_in_place_down
walk_slow_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_6:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_7:
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_8:
walk_slow_left
walk_in_place_left
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_9:
face_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_10:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_13:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_14:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.1:
face_up
step_end

RocketHideout_8F_Mision_Silph_move4.1:
walk_down
walk_left
walk_left
walk_left
walk_down
step_end


RocketHideout_8F_Mision_Silph_move4.2:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move5.2:
walk_left
walk_down
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.3:
face_right
step_end

RocketHideout_8F_Mision_Silph::
lock
setvar VAR_UNUSED_0x40F7, 71
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
setflag FLAG_NUEVA_839
addobject 3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move2
waitmovement 0x0
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_2 MSGBOX_DEFAULT
waitse
msgbox RocketHideout_8F_Mision_Silph_text_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move5
applymovement 3, RocketHideout_8F_Mision_Silph_move5
waitmovement 0x0
applymovement 3, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.1
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 3, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 3, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 9
playse SE_M_STAT_INCREASE
applymovement 9, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 9, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_7 MSGBOX_AUTOCLOSE
playse SE_SHOP
waitse
delay 10
applymovement 9, RocketHideout_8F_Mision_Silph_move5.3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
applymovement 1, RocketHideout_8F_Mision_Silph_move5.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout8F_Mision_Johto_move_12.6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
changeavatar 2
setvar VAR_UNUSED_0x40F7, 802
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7

RocketHideout8F_Mision_Johto_move_12.6:
walk_in_place_right
step_end




RocketHideout_8F_Disguise_Player::
delay 10
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_8F_Mision_Silph_text_6 MSGBOX_DEFAULT
waitfanfare
showmoneybox 0, 0
msgbox RocketHideout_8F_Mision_Silph_text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_9 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_10 MSGBOX_DEFAULT
waitfanfare
hidemoneybox
delay 40
msgbox RocketHideout_8F_Mision_Silph_text_11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_ULTRA_BALL, 50
waitfanfare
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_12 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Silph_text_13 MSGBOX_DEFAULT
givemon SPECIES_AERODACTYL, 35, ITEM_SHARP_BEAK
waitfanfare
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_14 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_12.7
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.75
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_15 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_790
clearflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
call Script_SetGrayscaleTint
warpsilent MAP_ROUTE27, 37, 12
delay 200
release
end

RocketHideout8F_Mision_Johto_move_12.75:
walk_in_place_up
step_end

RocketHideout8F_Mision_Johto_move_12.7:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_3
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_38 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_39 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_40 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_41 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_42 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_43 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_44 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_45 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_46 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_47 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_48 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_49 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_50 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_51 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_52 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_53 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move10
waitmovement 0x0
applymovement 2, RocketHideout_8F_Mision_Silph_move11
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move12
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_54 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_15
applymovement 9, RocketHideout_8F_Mision_Silph_Despues_Move_13.1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_55 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 9
fadescreen 0
setvar VAR_UNUSED_0x40DC, 13
setvar VAR_UNUSED_0x40F7, 72
setvar VAR_UNUSED_0x40FD, 1
release
end

RocketHideout_8F_Mision_Silph_Despues_Move_15:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_14:
walk_slow_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_13:
walk_slow_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_13.1:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_12:
walk_slow_up
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_11:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_10:
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_9:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_8:
walk_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_7:
walk_in_place_slow_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_6:
walk_right
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_5:
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_4:
walk_in_place_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_3:
face_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

RocketHideout_8F_Mision_Silph_text_1:
	.string "GIOVANNI: Ah, {PLAYER}!, we were\n"
	.string "waiting for you, come in!$"

RocketHideout_8F_Mision_Silph_text_2:
	.string "({PLAYER} handed over the\n"
	.string "ARTICUNO and ZAPDOS feathers).$"

RocketHideout_8F_Mision_Silph_text_3:
	.string "GIOVANNI: What an extraordinary job\n"
	.string "you have done, {PLAYER}! Not only\l"
	.string "your mission with ARTICUNO, but you\l"
	.string "have also taken care of ZAPDOS! KOGA\l"
	.string "also reported to me of how you faced\l"
	.string "BRUNO from the ELITE 4 on CYCLING ROAD\l"
	.string "and defeated him.$"

RocketHideout_8F_Mision_Silph_text_4:
	.string "GIOVANNI: You two have shown\n"
	.string "a performance and valor towards\l"
	.string "TEAM ROCKET that is priceless. PETREL\l"
	.string "has already briefed me on how even 10\l"
	.string "policemen together were not enough to\l"
	.string "overcome you, ANDRA, and you held out\l"
	.string "long enough for us to save you.$"

RocketHideout_8F_Mision_Silph_text_5:
	.string "GIOVANNI: Because of all this, both\n"
	.string "ANDRA and {PLAYER}, you have earned\l"
	.string "my trust, and both of you are promoted\l"
	.string "to ROCKET EXECUTIVES.$"

RocketHideout_8F_Mision_Silph_text_6:
	.string "{PLAYER} has been promoted to ROCKET\n"
	.string "EXECUTIVE!!$"

RocketHideout_8F_Mision_Silph_text_7:
	.string "GIOVANNI: Here is your reward, ANDRA, I\n"
	.string "hope you invest it in your great team.$"

RocketHideout_8F_Mision_Silph_text_8:
	.string "GIOVANNI: About you, {PLAYER}, along\n"
	.string "with your results: two of the KANTO\l"
	.string "BIRDS, BRUNO…$"

RocketHideout_8F_Mision_Silph_text_9:
.string "GIOVANNI: This shall be your reward.$"

RocketHideout_8F_Mision_Silph_text_10:
	.string "(YOU'VE JUST EARNED 500,000 POKÉS)$"

RocketHideout_8F_Mision_Silph_text_11:
	.string "Take this too, someone of your level\n"
	.string "should be able to capture any POKÉMON\l"
	.string "whenever you want: 50 ULTRA BALLS!$"

RocketHideout_8F_Mision_Silph_text_12:
	.string "Lastly, this POKÉMON, the rarest and\n"
	.string "most powerful of the KANTO fossils, I\l"
	.string "am sure that it will be a great addition\l"
	.string "to your team.$"

RocketHideout_8F_Mision_Silph_text_13:
	.string "YOU HAVE RECEIVED A LV.35 AERODACTYL!$"

RocketHideout_8F_Mision_Silph_text_14:
.string "GIOVANNI: ...$"

RocketHideout_8F_Mision_Silph_text_15:
	.string "GIOVANNI: I told you that in due time I\n"
	.string "would tell you the origins of TEAM\l"
	.string "ROCKET and why it is as you know it\l"
	.string "today. Now that you have gained some\l"
	.string "experience in this region and\l"
	.string "considering what is to come, that\l"
	.string "moment has arrived. Listen carefully.$"

RocketHideout_8F_Mision_Silph_text_16:
	.string "Everything started 5 years ago, when\n"
	.string "JOHTO declared war against KANTO. It\l"
	.string "surprised us all, our rustic and pacific\l"
	.string "neighbor, which didn't have as high a\l"
	.string "military force as us.$"

RocketHideout_8F_Mision_Silph_text_17:
	.string "Who caused this trouble was LANCE, the\n"
	.string "old dragon-type master's grandson from\l"
	.string "BLACKTHORN CITY. There is no doubt\l"
	.string "that he was a wonderful TRAINER, and it\l"
	.string "couldn't be otherwise, as a direct\l"
	.string "descendant of the most prestigious\l"
	.string "dragon-type tamer lineage…$"

RocketHideout_8F_Mision_Silph_text_17.1:
	.string "… since young, he was educated in the\n"
	.string "art of training, for many, the strongest\l"
	.string "and holiest type, showed an huge talent\l"
	.string "for unleashing the maximum power of\l"
	.string "DRAGONITE, considered the most\l"
	.string "powerful NON-LEGENDARY POKÉMON,\l"
	.string "surpassing even the power of the\l"
	.string "LEGENDARY BIRDS.$"
	
RocketHideout_8F_Mision_Silph_text_17.2:
	.string "LANCE turned into a feared TRAINER,\n"
	.string "with 3 of these sacred dragons on his\l"
	.string "team, he promptly got in power in JOHTO.$"

RocketHideout_8F_Mision_Silph_text_18:
	.string "However this was not enough to submit\n"
	.string "KANTO as he wanted to, our region had\l"
	.string "always had excellent TRAINERS with\l"
	.string "great talent.$"

RocketHideout_8F_Mision_Silph_text_18.1:
	.string "In those days, both OAK and I were\n"
	.string "competing for the CHAMPIONSHIP,\l"
	.string "frequently swapping it because of the\l"
	.string "intense competition and balance\l"
	.string "between us, when one of us wasn't the\l"
	.string "CHAMPION, the other would step into\l"
	.string "BRUNO's position in the ELITE 4, I\l"
	.string "specialized in the GROUND TYPE, whereas\l"
	.string "OAK focused on the NORMAL TYPE.$"

RocketHideout_8F_Mision_Silph_text_19:
	.string "LANCE knew this: with us defending\n"
	.string "KANTO he would never be able to impose\l"
	.string "his control, even with his dragons. Then\l"
	.string "he started to find that power on the\l"
	.string "sacred and divine…$"

RocketHideout_8F_Mision_Silph_text_20:
	.string "He received information about the\n"
	.string "legendary LUGIA and HO-OH, possessing\l"
	.string "a power nonexistent here in KANTO, but\l"
	.string "he never even came close to finding\l"
	.string "them.$"

RocketHideout_8F_Mision_Silph_text_21:
	.string "Besides that, he eventually learned of\n"
	.string "the legend stating that the legendary\l"
	.string "HO-OH left part of its power and\l"
	.string "essence imprinted on 3 POKÉMON\l"
	.string "destined to perish, last witnessed 150\l"
	.string "years ago in the so-called BURNED\l"
	.string "TOWER MIRACLE when, according to\l"
	.string "legend, these three Pokémon\l"
	.string "reincarnated into the 3 JOHTO BEASTS,\l"
	.string "now roaming the region without\l"
	.string "direction, unable to contain their\l"
	.string "power.$"

RocketHideout_8F_Mision_Silph_text_22:
	.string "LANCE searched in the entire region,\n"
	.string "determined to find the legendary\l"
	.string "beasts. And indeed, it turned out to be\l"
	.string "true, using his dragons, he managed to\l"
	.string "corner and capture one by one these\l"
	.string "POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_23:
	.string "You know the rest of the history; with\n"
	.string "the JOHTO BEASTS under his command, he\l"
	.string "set out to invade KANTO.$"

RocketHideout_8F_Mision_Silph_text_23.1:
	.string "He brought on board an expert in\n"
	.string "military tactics: LT. SURGE.The\l"
	.string "combination of these factors resulted\l"
	.string "in unparalleled chaos in KANTO, those\l"
	.string "beasts, now under LANCE's command,\l"
	.string "took numerous lives and posed a\l"
	.string "formidable challenge in battle for any\l"
	.string "trainer who wasn't OAK or me, LANCE had\l"
	.string "effectively brought chaos and death to\l"
	.string "KANTO.$"

RocketHideout_8F_Mision_Silph_text_24:
	.string "It was at that moment when OAK and I\n"
	.string "decided to do something, realizing that\l"
	.string "it was impossible to pacify the rage of\l"
	.string "those creatures with the resources\l"
	.string "available to us…$"

RocketHideout_8F_Mision_Silph_text_25:
	.string "During that period, I held the position\n"
	.string "of KANTO's most influential\l"
	.string "businessman, while OAK was the most\l"
	.string "famous researcher; together, we\l"
	.string "decided to combine all our resources,\l"
	.string "with the unique purpose of chasing\l"
	.string "that legend… the mythical POKÉMON\l"
	.string "known as MEW.$"
	
RocketHideout_8F_Mision_Silph_text_25.1:
	.string "FUJI took the lead in this project,\n"
	.string "being the one who knew the POKÉMON\l"
	.string "better than anyone else, due to him, we\l"
	.string "managed to reach FARAWAY ISLAND and\l"
	.string "capture MEW.$"

RocketHideout_8F_Mision_Silph_text_25.2:
	.string "MEW, on its own, wouldn't secure our\n"
	.string "victory. Its nature prevented it from\l"
	.string "being involved in any form of conflict,\l"
	.string "we needed an additional element.$"

RocketHideout_8F_Mision_Silph_text_25.3:
	.string "It was that moment when the -MEWTWO\n"
	.string "PROJECT- born. With the goal to\l"
	.string "maximize the MEW's potential and use it\l"
	.string "in the war.$"

RocketHideout_8F_Mision_Silph_text_25.4:
	.string "It was not easy, the results left\n"
	.string "anomalies and deformities from what\l"
	.string "was initially MEW. Retaining only 48% of\l"
	.string "its overall base power, they only\l"
	.string "inherited the transformation ability of\l"
	.string "the LEGENDARY POKÉMON, which proved\l"
	.string "insufficient and led us to discard\l"
	.string "these initial prototypes.$"

RocketHideout_8F_Mision_Silph_text_25.5:
	.string "It is commonly known as DITTO, and\n"
	.string "several specimens have been reported\l"
	.string "in the POKÉMON MANSION itself and some\l"
	.string "routes east of FUCHSIA.$"


RocketHideout_8F_Mision_Silph_text_25.6:
	.string "All combinations led us to DITTO, time\n"
	.string "and funds were running out, if we didn't\l"
	.string "come up with something soon, KANTO had\l"
	.string "no other option than: to surrender to\l"
	.string "LANCE.$"

RocketHideout_8F_Mision_Silph_text_26:
	.string "It was at that moment... after many\n"
	.string "failures, when we finally could improve\l"
	.string "the legendary MEW, creating from its\l"
	.string "DNA a POKÉMON made only for battles...\l"
	.string "And for winning the war.$"

RocketHideout_8F_Mision_Silph_text_27:
	.string "Faster, stronger and more effective\n"
	.string "than the JOHTO beasts, we estimated\l"
	.string "its power to be on par with the\l"
	.string "legendary LUGIA and HO-OH that LANCE\l"
	.string "could never find. It had mental\l"
	.string "capabilities unlike anything we had\l"
	.string "ever seen…$"

RocketHideout_8F_Mision_Silph_text_28:
	.string "With MEWTWO, we could have ended all\n"
	.string "this and taught a lesson to LANCE, it\l"
	.string "was so powerful… so powerful that went\l"
	.string "out of our control when we were doing\l"
	.string "the last testing.$"

RocketHideout_8F_Mision_Silph_text_29:
	.string "The CINNABAR ISLAND laboratory where\n"
	.string "we carried out this desperate plan in\l"
	.string "secret, was destroyed and MEWTWO\l"
	.string "escaped, disappearing forever…$"

RocketHideout_8F_Mision_Silph_text_30:
	.string "Shortly after, KANTO had no choice but\n"
	.string "to surrender to LANCE, who proclaimed\l"
	.string "himself the champion of both JOHTO and\l"
	.string "KANTO simultaneously. It was then time\l"
	.string "to get rid of all possible threats…$"

RocketHideout_8F_Mision_Silph_text_31:
	.string "However, to my surprise, OAK was the\n"
	.string "first to kneel once LANCE seized power,\l"
	.string "offering all his knowledge about\l"
	.string "POKÉMON and promising to assist the\l"
	.string "new government. The worst thing is…$"

RocketHideout_8F_Mision_Silph_text_32:
	.string "… he pointed to me as the main threat to\n"
	.string "his government, and spoke to him about\l"
	.string "our plans to overthrow him. Although he\l"
	.string "never mentioned MEWTWO, he did blame me\l"
	.string "for conspiring, even after the war.$"

RocketHideout_8F_Mision_Silph_text_33:
	.string "LANCE wasted no time launching a\n"
	.string "tremendous smear campaign against me.\l"
	.string "Despite i have given my all to keep\l"
	.string "KANTO in the hands of its habitants,\l"
	.string "LANCE managed to convince the public\l"
	.string "opinion that i was the villain, and he\l"
	.string "was the savior, according to the\l"
	.string "official version, LANCE only had to\l"
	.string "intervene after a blatant coup attempt\l"
	.string "on my part when i sought to revenew my\l"
	.string "CHAMPION title.$"

RocketHideout_8F_Mision_Silph_text_34:
	.string "This, for sure, is absolutely stupid\n"
	.string "and makes no sense to anyone who lived\l"
	.string "through the war. However, between\l"
	.string "people remaining silent out of fear of\l"
	.string "reprisals from LANCE's government and\l"
	.string "the constant bombardment of news and\l"
	.string "spreading of false information, they\l"
	.string "have managed to blur the truth over\l"
	.string "time, to the extent that even those who\l"
	.string "were actually present in the war now\l"
	.string "doubt what they truly experienced.$"

RocketHideout_8F_Mision_Silph_text_36:
	.string "GIOVANNI: Since then, everything\n"
	.string "associated with my name, once one of\l"
	.string "the most prestigious in the region,\l"
	.string "became the greatest dishonor and\l"
	.string "shame for KANTO.$"

RocketHideout_8F_Mision_Silph_text_37:
	.string "This way, and so it goes, when a power\n"
	.string "subdues you in this manner, making it\l"
	.string "impossible to challenge through\l"
	.string "justice, the only option left is to\l"
	.string "gather an even greater power than\l"
	.string "theirs to return the favor in kind.$"

RocketHideout_8F_Mision_Silph_text_37.1:
	.string "Under that premise, I kept TEAM ROCKET\n"
	.string "alive, and it continues to exist this\l"
	.string "day.$"

RocketHideout_8F_Mision_Silph_text_38:
	.string "Hence the reason for all these research\n"
	.string "areas, why I have sent you to where the\l"
	.string "LEGENDARY BIRDS dwell, and why we\l"
	.string "gather as much money as possible\l"
	.string "through illegitimate means, making the\l"
	.string "system itself impossible to assemble in\l"
	.string "a legitimate way. In such a case, taking\l"
	.string "justice into your own hands is almost a\l"
	.string "duty that aligns with anyone who has\l"
	.string "principles.$"

RocketHideout_8F_Mision_Silph_text_39:
	.string "All that TEAM ROCKET has sought during\n"
	.string "this time has been to try to gather\l"
	.string "enough power to overthrow LANCE and\l"
	.string "put an end to his masked tyranny, while\l"
	.string "appearing to be a weak and clumsy\l"
	.string "organization concerned with trivial\l"
	.string "matters such as money or POKÉMON\l"
	.string "theft. Nothing could be further from\l"
	.string "the truth, what we achieve with this is\l"
	.string "to prevent LANCE from focusing all his\l"
	.string "energies on crushing us, as he does not\l"
	.string "see us as a serious threat... yet.$"

RocketHideout_8F_Mision_Silph_text_40:
	.string "I couldn't tell you all this at a better\n"
	.string "time, as our next mission, the entire\l"
	.string "TEAM ROCKET's mission, is directly\l"
	.string "related to all of this.$"

RocketHideout_8F_Mision_Silph_text_41:
	.string "SILPH C.O, the most important company\n"
	.string "in the entire region, extending its\l"
	.string "influence to the SEVII ISLANDS,\l"
	.string "single-handedly produces the vast\l"
	.string "majority of items for trainers\l"
	.string "throughout KANTO. It has just dropped\l"
	.string "a bombshell, a revolution in the capture\l"
	.string "of POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_42:
	.string "Its MASTER BALL is presumably capable\n"
	.string "of catching any POKÉMON under any\l"
	.string "condition, an infallible POKÉ BALL, the\l"
	.string "dream of any TRAINER, especially any\l"
	.string "collector.$"

RocketHideout_8F_Mision_Silph_text_43:
	.string "An item like that would be crucial to\n"
	.string "retrieve a POKÉMON like MEWTWO,\l"
	.string "especially now when LANCE is unaware of\l"
	.string "its existence. We have certain\l"
	.string "suspicions about where it might be\l"
	.string "after escaping from CINNABAR ISLAND…$"

RocketHideout_8F_Mision_Silph_text_44:
	.string "But that is not the most important\n"
	.string "objective of our assault on SILPH. I\l"
	.string "want everything to go perfectly, so\l"
	.string "that in the eyes of the population,\l"
	.string "TEAM ROCKET appears to be defeated.\l"
	.string "They should lose sight of us just when\l"
	.string "we are at our strongest…$"

RocketHideout_8F_Mision_Silph_text_45:
	.string "By the time this happens, I will have\n"
	.string "already presented the PRESIDENT of\l"
	.string "SILPH with a tempting enough offer for\l"
	.string "him to be on our side. I'm sure he also\l"
	.string "does not approve of all the new\l"
	.string "restrictions and commissions that\l"
	.string "LANCE's government imposes on their\l"
	.string "products.$"


RocketHideout_8F_Mision_Silph_text_46:
	.string "ANDRA! {PLAYER}! Your mission at\n"
	.string "SILPH is as follows: We will force our\l"
	.string "way in using a large portion of our\l"
	.string "units. The two of you will be in charge\l"
	.string "of dealing with the security protecting\l"
	.string "the PRESIDENT. Once this is\l"
	.string "accomplished, I will have a free hand to\l"
	.string "speak calmly with him and explain the\l"
	.string "situation. You will provide me with\l"
	.string "enough time to convince him to\l"
	.string "cooperate with TEAM ROCKET. During this\l"
	.string "time, you must restrain the security\l"
	.string "attempting to access the PRESIDENT's\l"
	.string "office and any TRAINER trying to pass\l"
	.string "through. My conversation with the\l"
	.string "PRESIDENT at that moment must be\l"
	.string "entirely confidential. Is that clear?$"

RocketHideout_8F_Mision_Silph_text_47:
	.string "ANDRA: Not even LANCE will get through\n"
	.string "if he shows up, BOSS!$"

RocketHideout_8F_Mision_Silph_text_48:
	.string "GIOVANNI: Once I have convinced the\n"
	.string "PRESIDENT, we will obtain the MASTER\l"
	.string "BALL, and more importantly, the support\l"
	.string "of SILPH. By then, nothing stops us. As\l"
	.string "soon as I give the signal, you will\l"
	.string "withdraw along with the other\l"
	.string "HIGH-LEVEL ROCKET members and leave\l"
	.string "the building with our less competent\l"
	.string "soldiers, with minimal protection to\l"
	.string "reach me…$"

RocketHideout_8F_Mision_Silph_text_49:
	.string "If everything goes according to plan,\n"
	.string "that meddlesome RED will make an\l"
	.string "appearance. Nothing better than\l"
	.string "pretending a defeat against that\l"
	.string "TRAINER without personality, empty of\l"
	.string "purpose. With RED as the opponent, I\l"
	.string "can lose and then leave, disappearing\l"
	.string "before the word spreads and the police\l"
	.string "show up…$"

RocketHideout_8F_Mision_Silph_text_50:
	.string "Once here, we'll kill three birds with the\n"
	.string "same stone: we'll have the MASTER BALL,\l"
	.string "SILPH's loyalty, and the popular belief\l"
	.string "that we are finished.$"

RocketHideout_8F_Mision_Silph_text_51:
	.string "PROTON: a brilliant plan, sir.$"

RocketHideout_8F_Mision_Silph_text_52:
	.string "GIOVANNI: That is already in motion. At\n"
	.string "this moment, the checkpoints with\l"
	.string "SAFFRON will have been taken, leaving\l"
	.string "our way to the city clear. You should\l"
	.string "get ready, PROTON; you will be part of\l"
	.string "the forces that clear the path.$"

RocketHideout_8F_Mision_Silph_text_53:
.string "PROTON: At your command, BOSS.$"

RocketHideout_8F_Mision_Silph_text_54:
	.string "GIOVANNI: ANDRA, {PLAYER}, I trust in\n"
	.string "your abilities as trainers. SAFFRON\l"
	.string "CITY and SILPH will suppose a new\l"
	.string "challenge to prove yourselves once\l"
	.string "again. Once inside the city, go straight\l"
	.string "to SILPH and take care of clearing the\l"
	.string "building of police.$"

RocketHideout_8F_Mision_Silph_text_55:
.string "ANDRA: We won't let you down, BOSS.$"

RocketHideout_8F_Mision_Silph_move1:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move2:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Silph_move3:
face_left
step_end

RocketHideout_8F_Mision_Silph_move4:
face_down
step_end

RocketHideout_8F_Mision_Silph_move5:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Silph_move6:
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move7:
walk_slow_left
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move8:
face_up
step_end

RocketHideout_8F_Mision_Silph_move9:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move10:
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move11:
walk_down
walk_down
walk_left
walk_left
walk_left
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

RocketHideout_8F_Mision_Silph_move12:
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move13:
walk_down
walk_right
walk_right
walk_right
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

RocketHideout_8F_Mision_Gimnasios::
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 9
addobject 4
playse SE_EXIT
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_3
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_4
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_4 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6 MSGBOX_AUTOCLOSE
playse SE_EXIT
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
addobject 5
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_8 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_9 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Gimnasios_texto_11 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_13 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_12
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 5
playse SE_EXIT
msgbox RocketHideout_8F_Mision_Gimnasios_texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_17 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_18 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_20 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_22 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23 MSGBOX_AUTOCLOSE
playse MUS_RG_OBTAIN_KEY_ITEM
addobject ITEM_TRI_PASS
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23.1 MSGBOX_DEFAULT
waitse
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_27 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_28 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_29 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
playse MUS_RG_VICTORY_GYM_LEADER
msgbox RocketHideout_8F_Mision_Gimnasios_texto_30 MSGBOX_DEFAULT
delay 110
playse 560
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_31 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_32 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_33 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_15
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_34 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_35 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_16
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 9
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_17
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 79
setvar VAR_ROUTE111_STATE, 1
setvar VAR_ROUTE107_STATE, 1
setvar VAR_ROUTE108_STATE, 1
setvar VAR_ROUTE109_STATE, 1
setvar VAR_ROUTE106_STATE, 1
setvar VAR_ROUTE105_STATE, 1
release
end

RocketHideout_8F_Mision_Gimnasios_texto_1:
	.string "BLUE: So you too, GIOVANNI has also\n"
	.string "called ANDRA and me to be here. I hope\l"
	.string "it's important because I only need one\l"
	.string "more GYM BADGE to complete the 8.$"

RocketHideout_8F_Mision_Gimnasios_texto_2:
	.string "GIOVANNI: Alright, ANDRA, {PLAYER},\n"
	.string "BLUE, as you know, we have the MASTER\l"
	.string "BALL in our possession. With it, we can\l"
	.string "capture any POKÉMON, including… you\l"
	.string "know who…$"

RocketHideout_8F_Mision_Gimnasios_texto_3:
	.string "Furthermore, thanks to the samples of\n"
	.string "ARTICUNO, ZAPDOS, and MOLTRES\l"
	.string "collected by you, we have successfully\l"
	.string "cloned these legendary POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_4:
	.string "On the other hand, FUJI has spoken with\n"
	.string "BLAINE and has informed him. BLAINE was\l"
	.string "one of the scientists who worked on the\l"
	.string "MEW project, and we believe he has an\l"
	.string "idea of where MEWTWO might be…$"

RocketHideout_8F_Mision_Gimnasios_texto_5:
	.string "BLUE: Excuse me, GIOVANNI, ¿MEWTWO? I\n"
	.string "had never heard of such a POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_6:
	.string "GIOVANNI: There will be time to catch\n"
	.string "you up, BLUE. What you need to know now\l"
	.string "is that the moment we know its location\l"
	.string "and capture it, we will have everything\l"
	.string "we need to invade the POKÉMON LEAGUE\l"
	.string "and overthrow LANCE once and for all.$"

RocketHideout_8F_Mision_Gimnasios_texto_7:
	.string "RECRUIT: Sir, forgive me for\n"
	.string "interrupting, but it's everywhere. They\l"
	.string "just arrested FUJI at his home in\l"
	.string "LAVENDER TOWN, accusing him of\l"
	.string "collaborating with us.$"

RocketHideout_8F_Mision_Gimnasios_texto_8:
.string "GIOVANNI: This can't be…$"

RocketHideout_8F_Mision_Gimnasios_texto_9:
	.string "That BLAINE… He has betrayed us, there\n"
	.string "is no other explanation. He works for\l"
	.string "LANCE, or worse yet, for OAK.$"

RocketHideout_8F_Mision_Gimnasios_texto_10:
	.string "RECRUIT: That's not all, sir. The ELITE 4\n"
	.string "has issued a statement updating the\l"
	.string "requirements to participate in the\l"
	.string "POKÉMON LEAGUE. I quote: -In addition\l"
	.string "to the 8 GYM BADGES, given that we only\l"
	.string "know of the existence of three\l"
	.string "LEGENDARY BIRDS in our region, which\l"
	.string "are closely protected, it will be\l"
	.string "strictly prohibited to participate with\l"
	.string "any of these three POKÉMON. This is not\l"
	.string "only as a show of respect but also due\l"
	.string "to the impossibility of obtaining them\l"
	.string "through legal means. Therefore, any\l"
	.string "TRAINER in possession of these\l"
	.string "LEGENDARIES will have engaged in\l"
	.string "illegal practices that we by no means\l"
	.string "approve of-.$"

RocketHideout_8F_Mision_Gimnasios_texto_11:
.string "GIOVANNI: ...$"

RocketHideout_8F_Mision_Gimnasios_texto_12:
	.string "GIOVANNI: -Illegal practices that we\n"
	.string "by no means approve of-. It's amusing\l"
	.string "coming from them.$"

RocketHideout_8F_Mision_Gimnasios_texto_13:
	.string "GIOVANNI: Thank you, you can leave.$"

RocketHideout_8F_Mision_Gimnasios_texto_14:
.string "RECRUIT: Sir… \n"
	.string "Executives… $"

RocketHideout_8F_Mision_Gimnasios_texto_15:
	.string "ANDRA: Damn BLAINE! He has betrayed\n"
	.string "us! FUJI was wrong about his\l"
	.string "loyality. If LANCE would be able\l"
	.string "to find MEWTWO, what could\l"
	.string "happen?$"

RocketHideout_8F_Mision_Gimnasios_texto_16:
	.string "GIOVANNI: No, ANDRA, we must trust\n"
	.string "that, like OAK, he has kept the secret.\l"
	.string "LANCE with MEWTWO in his possession\l"
	.string "would be the greatest catastrophe in\l"
	.string "the history of this region.$"

RocketHideout_8F_Mision_Gimnasios_texto_17:
	.string "Having been pushed to this extreme, all\n"
	.string "that's left is to settle this by the\l"
	.string "old-fashioned way, so a LEAGUE without\l"
	.string "LEGENDARIES…$"

RocketHideout_8F_Mision_Gimnasios_texto_18:
	.string "ANDRA, {PLAYER}, both of you have\n"
	.string "proven to be extraordinary trainers.\l"
	.string "{PLAYER}'s ability to defeat BRUNO is\l"
	.string "evidence that they can compete\l"
	.string "against the best.$"

RocketHideout_8F_Mision_Gimnasios_texto_19:
	.string "Both of you, along with BLUE, will be\n"
	.string "candidates to claim the title of the\l"
	.string "POKÉMON LEAGUE.$"

RocketHideout_8F_Mision_Gimnasios_texto_20:
	.string "You will gather the 8 GYM BADGES and\n"
	.string "head to INDIGO PLATEAU, no cheats, no\l"
	.string "shortcuts with LEGENDARIES... You will\l"
	.string "use the POKÉMON that you have been\l"
	.string "training and raising since you joined\l"
	.string "TEAM ROCKET.$"

RocketHideout_8F_Mision_Gimnasios_texto_21:
	.string "ANDRA: But sir, I thought TEAM ROCKET\n"
	.string "couldn't challenge GYM LEADERS for the\l"
	.string "BADGES.$"

RocketHideout_8F_Mision_Gimnasios_texto_22:
	.string "GIOVANNI: And that's how it is, ANDRA.\n"
	.string "Your status as a ROCKET falls among the\l"
	.string "cases of trainers without a LICENSE,\l"
	.string "which is what is truly needed to\l"
	.string "compete for the BADGES. It is assumed\l"
	.string "that a ROCKET doesn't have a license,\l"
	.string "and that's why you are kicked out of\l"
	.string "the GYMS, not for being a ROCKET, but\l"
	.string "for not having a LICENSE.$"

RocketHideout_8F_Mision_Gimnasios_texto_23:
	.string "GIOVANNI: Here you go, completely\n"
	.string "legal. They won't be able to give you any\l"
	.string "trouble entering any GYM.$"

RocketHideout_8F_Mision_Gimnasios_texto_23.1:
	.string "YOU OBTAINED A TRAINER LICENSE FROM\n"
	.string "GIOVANNI'S HANDS!$"

RocketHideout_8F_Mision_Gimnasios_texto_24:
	.string "Still, of course, they can deny you\n"
	.string "entry for being a ROCKET. What you will\l"
	.string "do is wear our uniform - as a mockery -\l"
	.string "laughing at TEAM ROCKET and ridiculing\l"
	.string "it. Our supposed failure at SILPH will\l"
	.string "fit perfectly with that.$"

RocketHideout_8F_Mision_Gimnasios_texto_25:
	.string "ANDRA: They will smell something fishy,\n"
	.string "and LT. SURGE has already seen us\l"
	.string "several times.$"

RocketHideout_8F_Mision_Gimnasios_texto_26:
	.string "GIOVANNI: LT. SURGE believes that no\n"
	.string "one has a chance against LANCE, and\l"
	.string "moreover, his military code will prevent\l"
	.string "him from denying {PLAYER} a battle\l"
	.string "once he is in front of him.$"

RocketHideout_8F_Mision_Gimnasios_texto_27:
	.string "BLUE, do you know how many BADGES RED\n"
	.string "has right now?$"

RocketHideout_8F_Mision_Gimnasios_texto_28:
	.string "BLUE: I think 6, after SILPH, he went\n"
	.string "straight to the SAFFRON GYM. Right now,\l"
	.string "he must be close to CINNABAR GYM.$"

RocketHideout_8F_Mision_Gimnasios_texto_29:
	.string "GIOVANNI: Mmm... There's no time to\n"
	.string "waste. Your top priority should be\l"
	.string "winning those 7 GYM BADGES as soon as\l"
	.string "possible. As for you, BLUE, since you're\l"
	.string "missing one, I think there's a solution\l"
	.string "for that…$"

RocketHideout_8F_Mision_Gimnasios_texto_30:
	.string "(GIOVANNI GAVE BLUE THE EARTH BADGE).$"

RocketHideout_8F_Mision_Gimnasios_texto_31:
	.string "BLUE: Are you the last GYM LEADER?!$"

RocketHideout_8F_Mision_Gimnasios_texto_32:
	.string "GIOVANNI: Sometimes yes, sometimes no,\n"
	.string "it depends on when it's convenient, and\l"
	.string "now it is.$"

RocketHideout_8F_Mision_Gimnasios_texto_33:
	.string "BLUE: Excuse me, but I need to prepare\n"
	.string "thoroughly for the POKÉMON LEAGUE. I\l"
	.string "won't disappoint you, GIOVANNI.$"

RocketHideout_8F_Mision_Gimnasios_texto_34:
	.string "ANDRA, {PLAYER}, show how far a\n"
	.string "dedicated, disciplined, and committed a\l"
	.string "ROCKET can go with their POKÉMON,\l"
	.string "defeat all the KANTO GYM LEADERS, and I\l"
	.string "will give you the last BADGE just like I\l"
	.string "did with BLUE.$"

RocketHideout_8F_Mision_Gimnasios_texto_35:
	.string "ANDRA: I can't wait any longer! Those\n"
	.string "GYM LEADERS are going to fall like flies!\l"
	.string "Finally, I'll be able to face the\l"
	.string "supposed ELITE of the region!$"

RocketHideout_8F_Mision_Gimnasios_texto_36:
	.string "GIOVANNI: Only a real trainer would\n"
	.string "react like this. She doesn't see the\l"
	.string "LEAGUE restrictions as a problem but as\l"
	.string "an opportunity that will force her to\l"
	.string "improve much more. I hope you also face\l"
	.string "this challenge with the same\l"
	.string "enthusiasm, {PLAYER}. Be careful; the\l"
	.string "GYM LEADERS adjust their power based\l"
	.string "on who they have in front of them. BLUE\l"
	.string "and RED are protected by OAK and, as\l"
	.string "such, have certain privileges, including\l"
	.string "being able to participate in the\l"
	.string "POKÉMON LEAGUE without a LICENSE and\l"
	.string "facing somewhat weakened GYM LEADERS.\l"
	.string "But I don't want that for you and\l"
	.string "ANDRA.$"

RocketHideout_8F_Mision_Gimnasios_texto_37:
	.string "Since you obtained your starter, you\n"
	.string "have faced all kinds of difficulties.\l"
	.string "Everything you have, you have obtained\l"
	.string "through your own merits. You know the\l"
	.string "true face of this region, and you have\l"
	.string "been forced to adapt to it. That gives\l"
	.string "you an advantage and strength that\l"
	.string "cannot be bought. Go and show it to\l"
	.string "everyone!$"

RocketHideout_8F_Mision_Gimnasios_move_1:
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_2:
emote_exclamation_mark
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_5:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_6:
face_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_7:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_8:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Gimnasios_move_10:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_11:
walk_right
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_13:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_14:
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_15:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_16:
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_17:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_6 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_17 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F7, 102
release
end

RocketHideout8F_Mision_Subterraneo_Silph_Text_1:
	.string "GIOVANNI: Oh, {PLAYER}! Fantastic!\n"
	.string "You look a bit changed! I wouldn't say\l"
	.string "you've exactly been taking it easy on\l"
	.string "your vacation. Am I wrong?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2:
	.string "First and foremost, I must give you\n"
	.string "some unfortunate news: OAK has\l"
	.string "completely vanished from the map. After\l"
	.string "the events at the league, we agreed to\l"
	.string "confine him to his laboratory in PALLET\l"
	.string "TOWN, but he has found a way to\l"
	.string "disappear. We suspect he might be\l"
	.string "scheming something with BLAINE, the\l"
	.string "other traitor who, curiously, has also\l"
	.string "vanished. Meanwhile, FUJI is still\l"
	.string "under arrest, fortunately, with his\l"
	.string "return looming.$"


RocketHideout8F_Mision_Subterraneo_Silph_Text_3:
	.string "But I haven't brought back my top\n"
	.string "ROCKET to talk about OAK. The task I'm\l"
	.string "about to assign you is much more\l"
	.string "momentous for the history of our\l"
	.string "region. Listen...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4:
	.string "For as long as anyone can remember,\n"
	.string "KANTO citizens with open minds, those\l"
	.string "who've looked beyond the original 150,\l"
	.string "who've known other regions and\l"
	.string "traveled to neighboring JOHTO or\l"
	.string "distant HOENN, asked a question: Why\l"
	.string "isn't there a POKÉMON in KANTO with the\l"
	.string "characteristics of HO-OH, GROUDON, or\l"
	.string "RAYQUAZA? A pattern seen in all known\l"
	.string "regions without exception, except for\l"
	.string "KANTO, which is quite peculiar...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5:
	.string "Several theories emerged trying to\n"
	.string "answer this question. Some scientists\l"
	.string "and researchers claimed it was MEW.\l"
	.string "However, we can't group MEW with\l"
	.string "RAYQUAZA or LUGIA. It aligns more with\l"
	.string "the profile of JIRACHI in HOENN or...$"


RocketHideout8F_Mision_Subterraneo_Silph_Text_6:
.string "PROTÓN: ...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_7:
	.string "GIOVANNI: ...CELEBI in JOHTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8:
	.string "Some argued that KANTO lacked a\n"
	.string "POKÉMON of such caliber: the most it\l"
	.string "had was DRAGONITE and MEW, both\l"
	.string "capping the region's power at 600 BASE\l"
	.string "STATS. After all, KANTO's history might\l"
	.string "not have provided the conditions for a\l"
	.string "LUGIA or HO-OH to develop here. In that\l"
	.string "sense, it might be a matter of mere\l"
	.string "chance, resulting in a curious\l"
	.string "coincidence. However...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_9:
	.string "One last group of researchers points\n"
	.string "out that such a POKÉMON would indeed\l"
	.string "exist, and the only reason we don't know\l"
	.string "it is precisely that: we haven't found\l"
	.string "it yet.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10:
	.string "This last theory breaks down into two\n"
	.string "others: one says that we don't know\l"
	.string "this POKÉMON because of its elusive\l"
	.string "nature, the other claims its power is so\l"
	.string "great that it exceeds heavyweight\l"
	.string "legendaries from other regions, hence\l"
	.string "making it far from reachable for any\l"
	.string "human. Maybe it's both, or none... I don't\l"
	.string "know.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_11:
.string "GIOVANNI: ...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12:
           .string "This topic has always intrigued me,\n"
	.string "{PLAYER}. The existence of such a\l"
	.string "POKÉMON could reshape our perception\l"
	.string "of KANTO. Between our mission to free\l"
	.string "KANTO from LANCE and the scarce\l"
	.string "information on this matter, TEAM ROCKET\l"
	.string "paused this issue. However, with KANTO\l"
	.string "on the mend and the events during your\l"
	.string "vacation, it's time to kickstart this\l"
	.string "investigation.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_13:
	.string "Since SILPH became our ally, I've had\n"
	.string "the opportunity to meet several times\l"
	.string "with their PRESIDENT, {PLAYER}. The\l"
	.string "thing is, in our last meeting, this topic\l"
	.string "came up precisely, and...$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_14:
	.string "SILPH actually has a huge private\n"
	.string "library in their lower floors, off-limits\l"
	.string "to the public. SILPH isn't just KANTO's\l"
	.string "most successful company, but also one\l"
	.string "of the oldest. In that private library,\l"
	.string "there are some documents talking about\l"
	.string "the existence of a POKÉMON that could\l"
	.string "match the hierarchy of a LUGIA or a\l"
	.string "HO-OH, or even more.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_15:
	.string "Your mission is quite simple,\n"
	.string "{PLAYER}: you just have to return to\l"
	.string "SILPH and speak with the receptionist\l"
	.string "to get access to the lower floors. Thus\l"
	.string "you could reach those potentially\l"
	.string "revealing documents.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_16:
	.string "It's not just me; SILPH PRESIDENT was\n"
	.string "excited about your return to SILPH. In\l"
	.string "that sense, you won't encounter any\l"
	.string "opposition. Your task is simply to\l"
	.string "gather as much information as possible\l"
	.string "about this topic, search for any clues\l"
	.string "that bring us closer to said POKÉMON. Do\l"
	.string "you understand?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_17:
	.string "GIOVANNI: Alright, {PLAYER},\n"
	.string "remember, the SILPH receptionist will\l"
	.string "get you into the lower floors. Say hi to\l"
	.string "the PRESIDENT for me if you run into\l"
	.string "him. That's all!$"

RocketHideout8F_Mision_Subterraneo_Silph_Move_1:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_3:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_5:
walk_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 50
fadescreen 0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
setvar VAR_UNUSED_0x40F7, 107
release
end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1:
	.string "GIOVANNI: And now? What information\n"
	.string "did you uncover, {PLAYER}?$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2:
	.string "GIOVANNI: Hmmm... From what you're\n"
	.string "telling me, the text you read doesn't\l"
	.string "even question the existence of that\l"
	.string "POKÉMON; it takes it for granted. And it\l"
	.string "seems to be closer than we think, in\l"
	.string "LAVENDER TOWN.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3:
	.string "But... Where exactly? The POKÉMON TOWER\n"
	.string "is the only notable place, but we've\l"
	.string "explored every inch of it.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4:
	.string "Perhaps... It's one of those places\n"
	.string "impossible to access, except for those\l"
	.string "who already know where it is. If that\l"
	.string "were the case, we would remain without\l"
	.string "knowing the truth.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5:
	.string "GIOVANNI: {PLAYER}! We need to\n"
	.string "explore every option! I can't send\l"
	.string "loads of soldiers to comb through every\l"
	.string "bit of LAVENDER TOWN looking for some\l"
	.string "ancient hidden passage; that would\l"
	.string "raise too many suspicions.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6:
	.string "However, with only those present here\n"
	.string "knowing about this, you can discreetly\l"
	.string "be the one to investigate every corner\l"
	.string "of LAVENDER TOWN in search of\l"
	.string "something that has gone unnoticed for\l"
	.string "countless generations. You'll be\l"
	.string "chasing a mirage, {PLAYER}.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_7:
	.string "Nevertheless, the legend doesn't\n"
	.string "specify that such a cult must\l"
	.string "necessarily be in the center of\l"
	.string "LAVENDER TOWN or even the current\l"
	.string "POKÉMON TOWER. Perhaps we should also\l"
	.string "consider the outskirts as potential\l"
	.string "options. Both the end of ROUTE 10, the\l"
	.string "entrance to LAVENDER TOWN, and the\l"
	.string "start of ROUTE 12 to the south of\l"
	.string "LAVENDER TOWN would fit the\l"
	.string "description in the legend.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8:
	.string "That concludes it, {PLAYER}, and bear\n"
	.string "in mind, every step you take could be\l"
	.string "new pages being added to the recent\l"
	.string "history of KANTO. Perhaps we'll uncover\l"
	.string "something that should have been known\l"
	.string "a long time ago.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5:
face_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 109
release
end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1:
	.string "GIOVANNI: Did you find anything,\n"
	.string "{PLAYER}?$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2:
	.string "An incredible story, incredible... Who\n"
	.string "would have thought that such a place is\l"
	.string "right beneath LAVENDER TOWN? It was\l"
	.string "real after all; if that place is real, the\l"
	.string "POKÉMON must be real too.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3:
	.string "So, the cult leader told you straight up\n"
	.string "to keep the way of summoning that\l"
	.string "POKÉMON on the down-low, except for\l"
	.string "the only ones who can take it down in\l"
	.string "that fight, and that's you, plus maybe 1\l"
	.string "or 2 more trainers in KANTO.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4:
.string "GIOVANNI: ... ...$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5:
	.string "I guess he meant OAK and me. There's\n"
	.string "definitely a lot we still don't know.\l"
	.string "You're saying that trainer had MEW,\l"
	.string "missing since MEWTWO's creation, and\l"
	.string "still claimed to be using just 50% of his\l"
	.string "power. But discovering the ultimate\l"
	.string "limits of this world is why TEAM ROCKET\l"
	.string "was formed: we'll go to NAVEL ROCK, now.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6:
	.string "ARCHER has been busy in the SEVEN\n"
	.string "ISLANDS, finding and logging all the\l"
	.string "alternative routes connecting the\l"
	.string "islands.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7:
	.string "Theoretically, there are 7 islands,\n"
	.string "hence the name SEVEN ISLANDS. However,\l"
	.string "practically speaking, one could count\l"
	.string "10 substantial landmasses. The eighth\l"
	.string "is just south of TWO ISLAND, a ninth is\l"
	.string "east of the ruins of SEVEN ISLAND and\l"
	.string "south of SIX ISLAND, and the tenth is\l"
	.string "slightly northwest of ONE ISLAND,\l"
	.string "known as NAVEL ROCK.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8:
	.string "LUGIA and HO-OH have power on par with\n"
	.string "MEWTWO. Our emergency plan to save\l"
	.string "KANTO after MEWTWO's escape was to\l"
	.string "locate these two POKÉMON. However, as\l"
	.string "happened to LANCE, we couldn't find\l"
	.string "them until recently. Following the\l"
	.string "events at the POKÉMON LEAGUE, ARCHER\l"
	.string "sent me a report about this new\l"
	.string "finding: a tenth island in the center of\l"
	.string "the 7, covered by strong tides and\l"
	.string "housing an unexplored cave.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9:
	.string "I can't think of another place where\n"
	.string "these two beasts, last seen decades\l"
	.string "ago, could be.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10:
	.string "{PLAYER}! NAVEL ROCK is relatively\n"
	.string "close to FIVE ISLAND; however, the\l"
	.string "currents between them are the\l"
	.string "strongest of all the SEVEN ISLANDS. It\l"
	.string "would be too risky to attempt to pass\l"
	.string "through there, yet...$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11:
	.string "ARCHER found a different way out from\n"
	.string "TWO ISLAND's port. It's a bit longer, but\l"
	.string "the currents are gentler, and the route\l"
	.string "is more direct. We'll go through that\l"
	.string "way. Don't worry about the caution sign;\l"
	.string "it's more of a precaution to avoid\l"
	.string "trouble than an indication of real\l"
	.string "danger.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12:
	.string "Meet me at NAVEL ROCK, {PLAYER}. This\n"
	.string "time, I'll be there in person to join you\l"
	.string "on this mission.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 2
addobject 10
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_1 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_4 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_7
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_1, RocketHideout8F_Mision_Mansion_Oak_Text_14
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_16 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
addobject 2
addobject 10
delay 20
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_17 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout8F_Mision_Mansion_Oak_Move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_18 MSGBOX_AUTOCLOSE
delay 15
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_19 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F7, 113
release
end

RocketHideout8F_Mision_Mansion_Oak_Text_1:
.string "ANDRA: Sir, that's the whole story.$"

RocketHideout8F_Mision_Mansion_Oak_Text_2:
	.string "GIOVANNI: Excellent job, ANDRA. Both\n"
	.string "you and {PLAYER} have done a great\l"
	.string "job. Now we know that the relic was part\l"
	.string "of DEOXYS, and with both OAK and BLAINE\l"
	.string "under control, KANTO can finally reach\l"
	.string "the peace. We don't know what those lab\l"
	.string "maniacs are up to.$"

RocketHideout8F_Mision_Mansion_Oak_Text_3:
.string "GIOVANNI: ... ...$"

RocketHideout8F_Mision_Mansion_Oak_Text_4:
	.string "EXECUTIVE PROTON, ADMIN. ANDRA, I need\n"
	.string "to speak privately with {PLAYER}.\l"
	.string "Step outside for a moment$"

RocketHideout8F_Mision_Mansion_Oak_Text_5:
	.string "GIOVANNI: So, OAK has challenged you to\n"
	.string "go alone to the POKÉMON MANSION, and\l"
	.string "demonstrate you the recent power he\l"
	.string "has gained. Right?$"

RocketHideout8F_Mision_Mansion_Oak_Text_6:
	.string "Common sense says we should go full\n"
	.string "force into that POKÉMON MANSION and\l"
	.string "obliterate whatever they're up to this\l"
	.string "time.$"

RocketHideout8F_Mision_Mansion_Oak_Text_7:
	.string "OAK is a cautious, cold, and calculated\n"
	.string "man. If he has thrown such a challenge\l"
	.string "at you, having witnessed firsthand how\l"
	.string "you defeated both RED and LANCE, it's\l"
	.string "because he genuinely possesses\l"
	.string "something extraordinary in his power.$"

RocketHideout8F_Mision_Mansion_Oak_Text_8:
	.string "I suspect that, somehow, they have\n"
	.string "recovered MEWTWO. If that's indeed the\l"
	.string "case, and they decide to use it as they\l"
	.string "please, the entire region is in serious\l"
	.string "danger, even greater than in the KANTO\l"
	.string "WAR.$"

RocketHideout8F_Mision_Mansion_Oak_Text_9:
	.string "However, in TEAM ROCKET, we take both\n"
	.string "honor and loyalty very seriously. If OAK\l"
	.string "has personally challenged you, and you\l"
	.string "believe you should go on your own, you\l"
	.string "should do so...$"

RocketHideout8F_Mision_Mansion_Oak_Text_10:
	.string "However, given the significance this\n"
	.string "matter holds for the entire region,\l"
	.string "both ARCHER and me, along with PETREL,\l"
	.string "ANDRA, PROTON, and the other prominent\l"
	.string "members of the organization will stay in\l"
	.string "the background, {PLAYER}, in case\l"
	.string "anything goes wrong.$"

RocketHideout8F_Mision_Mansion_Oak_Text_11:
	.string "I need to ensure, {PLAYER}, that you\n"
	.string "are ready for everything, even for\l"
	.string "MEWTWO.$"

RocketHideout8F_Mision_Mansion_Oak_Text_12:
	.string "Just like ATLAS made sure both you and\n"
	.string "ANDRA were ready for the POKÉMON\l"
	.string "LEAGUE, now it's time for the ultimate\l"
	.string "challenge.$"

RocketHideout8F_Mision_Mansion_Oak_Text_13:
	.string "I, GIOVANNI, TEAM ROCKET LEADER, will\n"
	.string "personally take your POKÉMON to the\l"
	.string "next level!$"

RocketHideout8F_Mision_Mansion_Oak_Text_14:
	.string "I am proud of you, {PLAYER}. With your\n"
	.string "current level, KANTO holds no more\l"
	.string "mysteries for you.$"

RocketHideout8F_Mision_Mansion_Oak_Text_15:
	.string "It's crazy, {PLAYER}, I've improved so\n"
	.string "much since the days when OAK and I were\l"
	.string "going head-to-head for the KANTO\l"
	.string "Championship. Yet, you managed to\l"
	.string "outshine me. You've got the freedom to\l"
	.string "call the shots now.$"

RocketHideout8F_Mision_Mansion_Oak_Text_16:
.string "ANDRA!!\n"
	.string "PROTON!!$"

RocketHideout8F_Mision_Mansion_Oak_Text_17:
	.string "Call ARCHER, PETREL, CHAMPION BLUE, and\n"
	.string "all the ROCKET EXECUTIVES in here. We\l"
	.string "need to make sure OAK and BLAINE stay\l"
	.string "put in the POKÉMON MANSION, and\l"
	.string "{PLAYER} doesn't face any threats.$"


RocketHideout8F_Mision_Mansion_Oak_Text_18:
	.string "PROTON: YES, SIR!$"


RocketHideout8F_Mision_Mansion_Oak_Text_19:
	.string "Go, {PLAYER}, and show OAK where the\n"
	.string "true strength of a TRAINER comes from.$"


RocketHideout8F_Mision_Mansion_Oak_Move_1:
face_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_3:
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_4:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_5:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_6:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_7:
walk_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_8:
walk_up
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Silph_move5.10:
emote_exclamation_mark
face_up
step_end


RocketHideout8F_Mision_Johto::
lock
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
addobject 10
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_1 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout8F_Mision_Johto_move_3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_4
waitmovement 0x0
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout8F_Mision_Johto_Text_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_SHOP
addmoney 1500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout8F_Mision_Johto_Text_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_6 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_7
waitmovement 0x0
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_10 MSGBOX_DEFAULT
givemon SPECIES_RAIKOU, 25, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_11 MSGBOX_DEFAULT
givemon SPECIES_ENTEI, 25, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_12 MSGBOX_DEFAULT
givemon SPECIES_SUICUNE, 25, ITEM_LUM_BERRY
waitfanfare
msgbox RocketHideout8F_Mision_Johto_Text_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_16 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 10, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_10
applymovement 1, RocketHideout8F_Mision_Johto_move_11
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_18 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
applymovement 10, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 10, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 10, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 10
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
playse SE_M_STAT_INCREASE
applymovement 6, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 6, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
playse SE_SHOP
waitse
applymovement 6, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 3, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_6
applymovement 6, RocketHideout8F_Mision_Johto_move_3
applymovement 1, RocketHideout8F_Mision_Johto_move_13
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_22 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_14
applymovement 6, RocketHideout8F_Mision_Johto_move_15
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_24 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_2
applymovement 6, RocketHideout8F_Mision_Johto_move_16
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_17
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_26 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_27.1 MSGBOX_DEFAULT
waitfanfare
additem ITEM_TOWN_MAP
msgbox RocketHideout8F_Mision_Johto_Text_27 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_28 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_18
applymovement 1, RocketHideout8F_Mision_Johto_move_19
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 4
setvar VAR_UNUSED_0x40F7, 808
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7



RocketHideout_8F_Disguise_Player_3::
delay 40
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout8F_Mision_Johto_Text_29.1 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_30 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
setvar VAR_UNUSED_0x40F7, 117
release
end

RocketHideout8F_Mision_Johto_Text_30:
.string "GIOVANNI: I will be waiting for you in\n"
	.string "the MAXIMUM POTENTIAL REACHABLE ROOM.$"

RocketHideout8F_Mision_Johto_Text_27.1:
	.string "{PLAYER} obtained a MAP from GIOVANNI!!$"

RocketHideout8F_Mision_Johto_Text_18.1:
.string "ANDRA got promoted to BOSS ADMIN in\n"
	.string "the HOENN region!!$"

RocketHideout8F_Mision_Johto_Text_29.1:
.string "{PLAYER} got promoted to BOSS ADMIN\n"
	.string "in the JOHTO region!!$"

RocketHideout8F_Mision_Johto_Text_1:
.string "ANDRA: {PLAYER}! You are tireless! I\n"
	.string "was ready to enter forcing the door to\l"
	.string "CINNABAR MANSION, then you went in\l"
	.string "defeating everyone before!$"

RocketHideout8F_Mision_Johto_Text_2:
.string "GIOVANNI: You both have given TEAM\n"
	.string "ROCKET more than no one could have\l"
	.string "expected, your skills as TRAINERS is\l"
	.string "out of any rank that I could offer you\l"
	.string "on TEAM ROCKET, that's why we need to\l"
	.string "talk about your near future, something\l"
	.string "that will be a real challenge and will\l"
	.string "spread out the organization even more,\l"
	.string "but before that… Here are your rewards.$"

RocketHideout8F_Mision_Johto_Text_3:
	.string "YOU JUST INVOICED 1,5 MILLION POKÉS!!$"

RocketHideout8F_Mision_Johto_Text_4:
.string "GIOVANNI: ...$"

RocketHideout8F_Mision_Johto_Text_5:
.string "Are you sure you don't want them,\n"
	.string "ANDRA?$"

RocketHideout8F_Mision_Johto_Text_6:
.string "ANDRA: I'm sure, I don't need them to\n"
	.string "build my best team.$"

RocketHideout8F_Mision_Johto_Text_7:
.string "GIOVANNI: It is your will, so be it.$"

RocketHideout8F_Mision_Johto_Text_8:
.string "You should know, {PLAYER}, that when\n"
	.string "we returned the JOHTO BEASTS to their\l"
	.string "original place, we took the liberty to\l"
	.string "analyze their DNA. The effect is\l"
	.string "obvious: we were able to clone them as\l"
	.string "we did with KANTO BIRDS.$"

RocketHideout8F_Mision_Johto_Text_9:
.string "As one of the BOSS ADMIN, you are\n"
	.string "entitled to a specimen of each one. I\l"
	.string "hope it doesn't bring back painful\l"
	.string "memories for you about your fight\l"
	.string "against LANCE. Keep in mind that those\l"
	.string "are clones.$"

RocketHideout8F_Mision_Johto_Text_10:
.string "YOU OBTAINED A RAIKOU AT LV:25!!$"

RocketHideout8F_Mision_Johto_Text_11:
.string "YOU OBTAINED A ENTEI AT LV:25!!$"

RocketHideout8F_Mision_Johto_Text_12:
.string "YOU OBTAINED A SUICUNE AT LV:25!!$"

RocketHideout8F_Mision_Johto_Text_13:
.string "Now, get comfortable, we have a lot to\n"
	.string "talk about.$"

RocketHideout8F_Mision_Johto_Text_14:
.string "With MEWTWO in our hands, KANTO BIRDS\n"
	.string "clones and JOHTO BEASTS, TEAM ROCKET\l"
	.string "has reached a power greater than\l"
	.string "months ago we could dream.$"
	

RocketHideout8F_Mision_Johto_Text_15:
.string "OAK arrested, LANCE stranded… KANTO is\n"
	.string "totally under our control, finally we\l"
	.string "will be able to bring back all the\l"
	.string "splendor the region had before war,\l"
	.string "that will require just time, which is why\l"
	.string "your destinies are far away from here.$"

RocketHideout8F_Mision_Johto_Text_16:
.string "ANDRA: Where will we go, sir?$"

RocketHideout8F_Mision_Johto_Text_17:
.string "I am going to dedicate all my efforts to\n"
	.string "rebuild KANTO as it should be. Now that\l"
	.string "I have ROCKET like you, I believe it is\l"
	.string "time to delegate totally my powers in\l"
	.string "our JOHTO and HOENN branches.$"

RocketHideout8F_Mision_Johto_Text_18:
.string "ANDRA! Now you will manage the TEAM\n"
	.string "ROCKET on HOENN region! You are\l"
	.string "promoted to BOSS ADMIN ROCKET and\l"
	.string "HOENN LEADER!$"

RocketHideout8F_Mision_Johto_Text_19:
.string "ANDRA: Wow!\n"
	.string "I can't believe it!$"

RocketHideout8F_Mision_Johto_Text_20:
.string "Our branch at HOENN is not totally built\n"
	.string "yet, but you can settle there at least\l"
	.string "ANDRA, unfortunately, the distance\l"
	.string "between both regions prevents to use\l"
	.string "teleportation technology to send you\l"
	.string "there, but do not worry about that, we\l"
	.string "have a FERRY on VERMILION waiting for\l"
	.string "you.$"

RocketHideout8F_Mision_Johto_Text_21:
.string "I know you love mythology and\n"
	.string "ANCESTRAL POKÉMONS, ANDRA, which is\l"
	.string "why I am sending you to HOENN, we will\l"
	.string "dust off that region's mysteries, which\l"
	.string "are probably a lot.$"

RocketHideout8F_Mision_Johto_Text_22:
.string "ANDRA: I guess you mean about those\n"
	.string "RUINS that you can look at the DESERT,\l"
	.string "at DEWFORD TOWN north and at ROUTE\l"
	.string "120.$"

RocketHideout8F_Mision_Johto_Text_23:
.string "GIOVANNI: I see that I don't need to\n"
	.string "tell you anything else, that's all for\l"
	.string "you ANDRA, HOENN is waiting for you.$"

RocketHideout8F_Mision_Johto_Text_24:
.string "ANDRA: Do not expect that I will use\n"
	.string "exotic LEGENDARIES from HOENN in our\l"
	.string "next fight {PLAYER}, I told you that I\l"
	.string "will be the best just using NO\l"
	.string "LEGENDARIES, and I am going to keep it.\l"
	.string "I hope someday you visit HOENN, maybe I\l"
	.string "could go around for JOHTO, as the\l"
	.string "situation requires it!$"

RocketHideout8F_Mision_Johto_Text_25:
.string "GIOVANNI: Well {PLAYER}, you know\n"
	.string "there are a lot loose ends that are not\l"
	.string "solved because OAK interrupted us, but\l"
	.string "you should know before going to JOHTO.$"

RocketHideout8F_Mision_Johto_Text_26:
.string "First, take this.$"

RocketHideout8F_Mision_Johto_Text_27:
.string "With this MAP, you could locate yourself\n"
	.string "as you should be, inside a totally new\l"
	.string "region for you.$"

RocketHideout8F_Mision_Johto_Text_28:
.string "Now, this is not the adequate place to\n"
	.string "explain the goals you will be pursuing in\l"
	.string "JOHTO; that's the area next to here, the\l"
	.string "RESEARCH AREA ABOUT THE MAXIMUM\l"
	.string "POTENTIAL ACHIEVABLE BY A POKÉMON. We\l"
	.string "have finally opened the last zone, and\l"
	.string "that's where I will be waiting for you,\l"
	.string "{PLAYER}. There, you will understand\l"
	.string "the reasons behind the goals you will be\l"
	.string "pursuing in JOHTO.$"

RocketHideout8F_Mision_Johto_Text_29:
.string "GIOVANNI: A last thing {PLAYER},\n"
	.string "since now you are in charge of TEAM\l"
	.string "ROCKET in the JOHTO region! You are\l"
	.string "promoted to BOSS ADMIN ROCKET and\l"
	.string "JOHTO LEADER!$"

RocketHideout8F_Mision_Johto_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Johto_move_2:
face_down
step_end

RocketHideout8F_Mision_Johto_move_3:
face_right
step_end

RocketHideout8F_Mision_Johto_move_4:
walk_up
step_end

RocketHideout8F_Mision_Johto_move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_6:
face_left
step_end

RocketHideout8F_Mision_Johto_move_7:
walk_slow_down
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_8:
walk_slow_up
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_9:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_10:
face_up
step_end

RocketHideout8F_Mision_Johto_move_11:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_12:
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
step_end


RocketHideout8F_Mision_Johto_move_13:
walk_up
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_14:
walk_right
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_15:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout8F_Mision_Johto_move_16:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout8F_Mision_Johto_move_17:
walk_left
walk_in_place_up
step_end

RocketHideout8F_Mision_Johto_move_18:
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_19:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_right
walk_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
addobject 2
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3
waitmovement 0x0
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8 MSGBOX_AUTOCLOSE
fadescreen 1
delay 25
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 168
release
end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1:
	.string "GIOVANNI: As I told you, ANDRA, the\n"
	.string "RUINS OF ALPH must be under strict\l"
	.string "vigilance, since right now.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2:
	.string "GIOVANNI: Do you realize the kind of\n"
	.string "POKÉMON you've just faced? Our\l"
	.string "scientists have estimated its SPECIAL\l"
	.string "ATTACK to be at 190 BASE. Until now, we\l"
	.string "believed that the DEOXYS' 180 were the\l"
	.string "highest point possible, and not only\l"
	.string "that, with just 50 in PHYSICAL ATTACK\l"
	.string "it achieves around 660 BASE. There's no\l"
	.string "doubt that this POKÉMON even\l"
	.string "surpasses LEGENDARY POKÉMON like\l"
	.string "LUGIA and HO-OH in numbers. The limits\l"
	.string "we thought conventional POKÉMON could\l"
	.string "reach have just expanded. The\l"
	.string "information we'll obtain from this\l"
	.string "POKÉMON will help us further perfect\l"
	.string "the SPECIAL ATTACK of new MEWTWO\l"
	.string "prototypes. Perhaps we'll even manage\l"
	.string "to surpass those 190 BASE.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3:
	.string "But we're not here for that. I've\n"
	.string "already briefed ANDRA, and I've asked\l"
	.string "her to be attentive to any strange\l"
	.string "movements that may occur in RUINS OF\l"
	.string "ALPH.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4:
	.string "We don't know what that TRAINER is\n"
	.string "trying to do, but what he looks for must\l"
	.string "be in that place.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5:
	.string "However, we still need information, this\n"
	.string "is where I need your help, {PLAYER}.\l"
	.string "You must visit the LAVENDER TOWN's cult\l"
	.string "again, and explain the situation to the\l"
	.string "LEADER. Perhaps he'll know what to do.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6:
	.string "That's all for now, ATLAS and I are very\n"
	.string "busy with all the points discussed in\l"
	.string "GOLDENROD, but we won't hesitate to\l"
	.string "intervene if necessary. I'll wait for\l"
	.string "your results.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7:
.string "ANDRA: At your command, sir!$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8:
	.string "You didn't tell me that guy had KYOGRE,\n"
	.string "GROUDON and RAYQUAZA {PLAYER}, did\l"
	.string "you really fight the three LEGENDARY\l"
	.string "pokémon from HOENN at once? Be really\l"
	.string "careful, I've been studying the HOENN's\l"
	.string "mythology, and the legend speaks of\l"
	.string "even more powerful PRIMAL FORMS of\l"
	.string "these LEGENDARIES, the ones that truly\l"
	.string "created the land and the sea. I don't\l"
	.string "know if that guy wants to see if the\l"
	.string "legend is true, but keep it in mind.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1:
face_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2:
face_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4:
face_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6:
walk_in_place_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7:
walk_down
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Lago_Furia::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_4
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_7 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_8 MSGBOX_DEFAULT
waitfanfare
hidemoneybox
delay 40
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_LUGIA, 60, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_HO_OH, 60, ITEM_LUM_BERRY
waitfanfare
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_4
waitmovement 0x0
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_19 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
setflag FLAG_SYS_POKEDEX_GET
setflag FLAG_SYS_NATIONAL_DEX
special EnableNationalPokedex
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_20 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_29 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
clearflag FLAG_RECEIVED_SHOAL_SHELL_1
setvar VAR_VERDANTURF_TOWN_STATE, 1
setvar VAR_PACIFIDLOG_TOWN_STATE, 1
setvar VAR_MAUVILLE_CITY_STATE, 1
clearflag FLAG_RECEIVED_SHOAL_SALT_4
setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
setvar VAR_UNUSED_0x40F7, 180
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_30 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 9, 9
release
end

RocketHideout_8F_Mision_Lago_Furia_Texto_30:
.string "¿Quieres ir a tu despacho en JOHTO para\n"
	.string "ver los documentos sobre las nuevas\l"
	.string "misiones?$"

RocketHideout_8F_Mision_Lago_Furia_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_10:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_9:
walk_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_8:
walk_slow_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_7:
walk_slow_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_6:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_5:
face_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_3:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_2:
face_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_1:
face_down
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Texto_1:
.string "GIOVANNI: ¡{PLAYER}! ¡Eres\n"
	.string "extraordinario, pudiste con los 3\l"
	.string "POKÉMON más poderosos de todos los\l"
	.string "tiempos! ¿Entiendes el motivo de tu\l"
	.string "victoria? En el momento en que la\l"
	.string "inmortalidad de tales POKÉMON se vio\l"
	.string "sujeta a las reglas que rigen el\l"
	.string "combate POKÉMON entre dos\l"
	.string "ENTRENADORES, sus poderes dejaron de\l"
	.string "ser infinitos y, por tanto, vulnerables.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_2:
.string "Ese ENTRENADOR quiso usarlos como\n"
	.string "POKÉMON convencionales, y ahí\l"
	.string "perdieron su esencia.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_3:
.string "No obstante, solo un ENTRENADOR que ha\n"
	.string "alcanzado un estado de equilibrio sin\l"
	.string "igual con su equipo, podría llegar a\l"
	.string "batirles aún siendo un combate\l"
	.string "POKÉMON. Tú eras el único que podía\l"
	.string "hacerlo, {PLAYER}...$"

RocketHideout_8F_Mision_Lago_Furia_Texto_6:
.string "Como ya es habitual, después de cada\n"
	.string "gran acontecimiento, os reúno aquí\l"
	.string "para hacer balance de todo… y mirar a\l"
	.string "futuro.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_7:
.string "Antes de nada, vuestras recompensas.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_8:
.string "¡¡OBTUVISTE 2 MILLONES DE POKÉS!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_9:
.string "Y no solo eso, gracias a todo el revuelo\n"
	.string "causado por ZEUS, y la entrada a\l"
	.string "RUINAS ALFA, pudimos extraer los ADN\l"
	.string "de LUGIA y HO-OH, no de sus formas\l"
	.string "primigenias, pero sí las conocidas por\l"
	.string "la cultura de JOHTO.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_10:
.string "ANDRA ve deshonroso usar esta clase de\n"
	.string "POKÉMON, de modo que únicamente tú\l"
	.string "recibirás ejemplares clonados,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_11:
.string "¡¡OBTUVISTE UN LUGIA AL NV.60!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_12:
.string "¡¡OBTUVISTE UN HO-OH AL NV.60!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_13:
.string "ANDRA: No creas que no sabré cómo\n"
	.string "lidiar con ellos en caso de que los uses\l"
	.string "contra mí, {PLAYER}. Ya derroté al\l"
	.string "HO-OH dorado, una forma aún más\l"
	.string "poderosa que esos clones, ¡no lo\l"
	.string "olvides!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_14:
.string "GIOVANNI: Bien, ahora, hablemos de\n"
	.string "vuestras futuras misiones.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_15:
.string "{PLAYER} hizo un trabajo excelente\n"
	.string "recopilando información sobre los\l"
	.string "FUERTE VÍNCULO de JOHTO, toda esta\l"
	.string "información ha servido a nuestros\l"
	.string "CIENTÍFICOS para optimizar y expandir\l"
	.string "aún más el poder de futuros\l"
	.string "prototipos, tal y como en su día lo fue\l"
	.string "MEWTWO.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_16:
.string "No obstante, JOHTO es mucho más que\n"
	.string "sus pueblos y ciudades, a diferencia de\l"
	.string "KANTO, cuenta con muchos lugares aún\l"
	.string "por explorar.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_17:
.string "Tenemos serias sospechas de que estos\n"
	.string "lugares esconden POKÉMON únicos,\l"
	.string "cuyos datos podrían seguir aportando\l"
	.string "información fundamental para nuestras\l"
	.string "investigaciones.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_18:
.string "La apertura de la estación que conecta\n"
	.string "TRIGAL con AZAFRÁN, y la demolición de\l"
	.string "la TORRE LAVANDA se aproximan, pero a\l"
	.string "la espera de estos acontecimientos,\l"
	.string "vuestra misión será seguir expandiendo\l"
	.string "lo que sabemos sobre los POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_19:
.string "Por ello, os daré algo que deberíais\n"
	.string "haber tenido hace mucho.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_20:
.string "¡OBTUVISTE UNA POKÉDEX!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_21:
.string "Cortesía de OAK, gracias a su invento,\n"
	.string "no solo se enviará la información de\l"
	.string "todo nuevo POKÉMON que encontréis a\l"
	.string "nuestra base de datos, también\l"
	.string "quedará registrada para uso propio,\l"
	.string "incluso podréis ver los STATS BASE, si\l"
	.string "llegáis a capturar al POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_22:
.string "ANDRA: De modo que esto es lo que ese\n"
	.string "malcriado de ROJO usaba, sé de varios\l"
	.string "POKEMANÍACOS que darían todo lo que\l"
	.string "tienen por un artefacto como este.\l"
	.string "Nosotros le daremos el mejor uso\l"
	.string "posible, ¿verdad, {PLAYER}?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_23:
.string "¿Quiere decir entonces que no regreso a\n"
	.string "HOENN, señor?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_24:
.string "GIOVANNI: Así es, ANDRA. Por ahora te\n"
	.string "quedarás en JOHTO y harás la misma\l"
	.string "tarea que ha estado haciendo\l"
	.string "{PLAYER}. Sois los dos entrenadores\l"
	.string "más fuertes de toda la organización, y\l"
	.string "una misión así, en la que podéis\l"
	.string "enfrentaros a cualquier cosa, requiere\l"
	.string "de la mayor preparación posible.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_25:
.string "ANDRA: ¿Y por dónde empezamos?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_26:
.string "GIOVANNI: Os he dejado documentos, con\n"
	.string "una explicación detallada sobre cada\l"
	.string "una de las misiones que abordareis, en\l"
	.string "vuestros respectivos despachos. No te\l"
	.string "preocupes ANDRA, ya hay conexión vía\l"
	.string "teletransporte con la BASE en HOENN.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_27:
.string "El orden en el que decidáis hacerlas es\n"
	.string "cosa vuestra, aunque me gustaría que\l"
	.string "indagárais lo máximo posible en cada\l"
	.string "una de ellas. Una vez investigado lo\l"
	.string "suficiente, regresad a mi despacho.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_28:
.string "ANDRA: ¡Genial, vamos a explorar JOHTO!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_29:
.string "¿Has oído, {PLAYER}? Los lugares más\n"
	.string "recónditos de JOHTO nos esperan, ¿qué\l"
	.string "misterios estarán esperándonos?$"

RocketHideout_8F_Mision_Base_Hoenn::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_2 MSGBOX_AUTOCLOSE
fadescreen 1
delay 60
fadescreen 0
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_22 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 184
release
end

RocketHideout_8F_Mision_Base_Hoenn_Move_10:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_8:
walk_slow_left
walk_in_place_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_7:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_6:
face_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_5:
walk_slow_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_2:
face_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_4:
face_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_1:
walk_in_place_down
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Texto_1:
.string "ANDRA: ¡Jah! ¡Sabía que aparecerías\n"
	.string "pronto, {PLAYER}! ¡Yo acabo de\l"
	.string "completar también mis misiones!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_2:
.string "GIOVANNI: Nuestra base de datos ha\n"
	.string "recogido información muy valiosa de\l"
	.string "vuestras expediciones, pero me\l"
	.string "gustaría oíros a vosotros. Contadme\l"
	.string "todos los detalles…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_3:
.string "Ya veo… Así que JOHTO cuenta con\n"
	.string "varias especies creídas extintas, y\l"
	.string "que habitan en ese gran paraíso que es\l"
	.string "la zona oeste de ORQUÍDEA.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4:
.string "No me extraña, únicamente hay\n"
	.string "catalogadas 100 especies originales de\l"
	.string "JOHTO, un número muy pequeño si lo\l"
	.string "comparamos con las 151 de KANTO, o las\l"
	.string "135 de HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1:
	.string "Por otro lado, ese DRAGÓN SAGRADO...\n"
	.string "ANDRA ya me ha hablado de cómo su\l"
	.string "URSARING evolucionó gracias a la\l"
	.string "PIEDRA DORADA.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2:
	.string "La cantidad de POKÉMON a la que pueda\n"
	.string "reaccionar es todo un misterio, enviaré\l"
	.string "a ATLAS a ese lugar para que lo\l"
	.string "investigue y encuentre una. Después,\l"
	.string "nuestros mejores científicos tratarán\l"
	.string "de reproducir ese objeto sagrado, para\l"
	.string "así poder comercializarlo entre los\l"
	.string "mejores ROCKET.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3:
	.string "ANDRA: Oh...$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_5:
.string "GIOVANNI: En cuanto a lo de ese tal\n"
	.string "EUSINE, no te preocupes {PLAYER}, mandaré\l"
	.string "a buscarle. Todo lo que él ha visto y\l"
	.string "vivido en esa pagoda nos será de\l"
	.string "enorme utilidad para nuestras\l"
	.string "investigaciones.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_6:
.string "Lo que realmente me preocupa es tu\n"
	.string "misión en el LAGO DE LA FURIA,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_7:
.string "El resultado ha sido inmejorable, y el\n"
	.string "POKÉMON hallado ahí excepcional. Pero\l"
	.string "esos CIENTÍFICOS… no trabajan para\l"
	.string "nosotros, parecen perseguir objetivos\l"
	.string "similares a los nuestros.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_8:
.string "ANDRA: Yo también me crucé con\n"
	.string "personajes así en HOENN, en plena\l"
	.string "búsqueda de los REGIS…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_9:
.string "GIOVANNI: Tal y como temía, todo apunta\n"
	.string "a que se trata de DEVON S.A.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_10:
.string "ANDRA: ¿DEVON?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_11:
.string "GIOVANNI: OAK y BLAINE contactaron\n"
	.string "con ellos en el pasado, antes de que\l"
	.string "{PLAYER} les derrotara. Gracias a\l"
	.string "ello obtuvieron la financiación\l"
	.string "necesaria para clonar de nuevo a\l"
	.string "MEWTWO y resucitar a DEOXYS.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_12:
.string "ANDRA: ¿Y…?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_13:
.string "GIOVANNI: Y DEVON accedió, con la\n"
	.string "condición de entregar todo el material\l"
	.string "referente a DEOXYS. Afortunadamente,\l"
	.string "de MEWTWO no dijeron una sola palabra.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_14:
.string "Tal vez sea algo pronto, pero…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_15:
.string "¡{PLAYER}! Quiero que acompañes a\n"
	.string "ANDRA a nuestra sucursal en HOENN, y\l"
	.string "te dé nociones generales sobre la\l"
	.string "región.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_16:
.string "La demolición de TORRE LAVANDA es\n"
	.string "inminente, en este momento ya deben de\l"
	.string "haber evacuado todo para llevarla a\l"
	.string "cabo. Mientras, nada os retiene aquí, y\l"
	.string "nuestra BASE en HOENN es la única que\l"
	.string "aún no has visitado.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_17:
.string "En cuanto TORRE LAVANDA sea demolida,\n"
	.string "comenzará la construcción en tiempo\l"
	.string "récord de la nueva TORRE RADIO.\l"
	.string "Entretanto, os informo de que se\l"
	.string "celebrará la II GRAN REUNIÓN EN\l"
	.string "TRIGAL.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_18:
.string "ANDRA: ¡Wow! Ahora que KANTO y JOHTO\n"
	.string "están a punto de lograr la unión que se\l"
	.string "propuso en la I GRAN REUNIÓN…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_19:
.string "GIOVANNI: Tenemos todo para convertir\n"
	.string "al binomio KANTO-JOHTO en la principal\l"
	.string "potencia del MUNDO POKÉMON.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_20:
.string "ANDRA: Suena… impactante.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_21:
.string "GIOVANNI: Y lo será, ya lo verás cuando\n"
	.string "veas lo que hay por mostrar, pero por el\l"
	.string "momento… Tenéis a vuestra disposición\l"
	.string "el teletransporte que manda a HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_22:
.string "Espero que guíes correctamente a\n"
	.string "{PLAYER} por HOENN, estad atentos a\l"
	.string "mi llamada.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_23:
.string "ANDRA: No se preocupe, {PLAYER} no\n"
	.string "perderá el tiempo allí, ¡seguro!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_24:
.string "Te espero en la entrada a la base de\n"
	.string "HOENN, ¡haré de guía turística!$"

RocketHideout_8F_Mision_Neo_Canela::
lock
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 7
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_1
waitmovement 0x0
playse SE_PIN
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_6 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Neo_Canela_Move_6
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_9 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
fadescreen 1
delay 20
removeobject 7
removeobject 8
fadescreen 0
setvar VAR_UNUSED_0x40F7, 191
release
end

RocketHideout_8F_Mision_Neo_Canela_Move_8:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_7:
face_right
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_5:
face_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_4:
face_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_2:
walk_slow_up
walk_slow_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_1:
walk_up
walk_up
walk_up
walk_up
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Texto_1:
.string "????: Logré escapar en el último\n"
	.string "momento, gracias al TELETRANSPORTE de\l"
	.string "mi MAGMORTAR.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_2:
.string "GIOVANNI: {PLAYER}, tu ausencia en\n"
	.string "KANTO-JOHTO te ha impedido enterarte,\l"
	.string "pero el fenómeno se ha sentido en las\l"
	.string "dos regiones: el volcán de ISLA CANELA\l"
	.string "ha estallado, y ha engullido todo a su\l"
	.string "paso.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_3:
.string "BLAINE: El LABORATORIO… la MANSIÓN\n"
	.string "POKÉMON… el GIMNASIO… todo yace ahora\l"
	.string "en el fondo del mar.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_4:
.string "OAK: La cuestión es que, después de la I\n"
	.string "CONFERENCIA DE TRIGAL, continuamos\l"
	.string "con nuestras investigaciones allí. Una\l"
	.string "parte muy importante de nuestros\l"
	.string "últimos proyectos está ahora perdida,\l"
	.string "decenas de metros bajo tierra.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_5:
.string "BLAINE: Por suerte, las zonas\n"
	.string "subterráneas más importantes fueron\l"
	.string "hechas a prueba de todo desastre\l"
	.string "natural. Después de que {PLAYER}\l"
	.string "nos derrotara, construimos\l"
	.string "muchos pisos subterráneos más, son\l"
	.string "como un búnker subterráneo.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_6:
.string "GIOVANNI: Cabe entonces la posibilidad\n"
	.string "de que no hayan sido destruidos.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_7:
.string "OAK: Debemos comprobarlo, sabes tan\n"
	.string "bien como yo la preciada información\l"
	.string "que guardamos ahí dentro.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_8:
.string "BLAINE: Pero no puede ir cualquiera, la\n"
	.string "erupción habrá liberado a todos los\l"
	.string "prototipos que ahí teníamos en fase\l"
	.string "de prueba.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_9:
.string "GIOVANNI: Estamos de acuerdo, el más\n"
	.string "indicado para realizar esta misión es\l"
	.string "{PLAYER}. Cuenta con experiencia más que\l"
	.string "sobrada en esta clase de situaciones.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_10:
.string "OAK: Así es, te estaré esperando en\n"
	.string "ISLA CANELA, {PLAYER}, ahí te diré\l"
	.string "exactamente lo que debes hacer.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_11:
.string "BLAINE: Es un alivio tener a un\n"
	.string "ENTRENADOR como tú de nuestro lado,\l"
	.string "espero que puedas recuperar todo lo\l"
	.string "posible de esta catástrofe.$"

RocketHideout_8F_Mision_Central_Energia::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_1 MSGBOX_DEFAULT
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_2 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_3 MSGBOX_DEFAULT
waitfanfare
hidemoneybox
delay 40
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_5 MSGBOX_DEFAULT
givemon SPECIES_SILVALLY, 70, ITEM_NONE
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_11 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_UNUSED_0x272
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 202
release
end

RocketHideout_8F_Mision_Central_Energia_Move_5:
walk_slow_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Central_Energia_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Mision_Central_Energia_Move_1:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Central_Energia_Texto_1:
.string "({PLAYER} entregó a GIOVANNI el\n"
	.string "DISCO DURO)$"

RocketHideout_8F_Mision_Central_Energia_Texto_2:
.string "GIOVANNI: No esperaba menos de ti,\n"
	.string "{PLAYER}. No hay recompensa que\l"
	.string "pueda igualar la información que\l"
	.string "acabas de recuperar. Hay millones\l"
	.string "invertidos en investigación aquí\l"
	.string "dentro, qué menos que darte unos\l"
	.string "tantos de ellos.$"

RocketHideout_8F_Mision_Central_Energia_Texto_3:
.string "¡{PLAYER} OBTUVO 2 MILLONES DE\n"
	.string "POKÉS!$"

RocketHideout_8F_Mision_Central_Energia_Texto_4:
.string "Toma esto también, es un proyecto\n"
	.string "proveniente de una región lejana,\l"
	.string "algunos de nuestros mejores\l"
	.string "científicos han tenido contacto con\l"
	.string "él.$"

RocketHideout_8F_Mision_Central_Energia_Texto_5:
.string "¡OBTUVISTE UN SILVALLY AL NV.70!$"

RocketHideout_8F_Mision_Central_Energia_Texto_6:
.string "Al parecer, puede cambiar de tipo en\n"
	.string "función del objeto que lleve equipado.\l"
	.string "En los pisos superiores de la TORRE\l"
	.string "RADIO de LAVANDA se venderán, dentro\l"
	.string "de muy poco podrás entrar, {PLAYER}.$"

RocketHideout_8F_Mision_Central_Energia_Texto_7:
.string "Volviendo al tema de CANELA…\n"
	.string "Agradecería que no hablaras con nadie\l"
	.string "sobre lo que hayas podido ver ahí, ni\l"
	.string "siquiera con ANDRA.$"

RocketHideout_8F_Mision_Central_Energia_Texto_8:
.string "Muchos de los prototipos que ahí\n"
	.string "dejamos están en fase de prueba, son\l"
	.string "inestables y están por perfeccionar.\l"
	.string "Aún así, habrás sentido el tremendo\l"
	.string "potencial de algunos.$"

RocketHideout_8F_Mision_Central_Energia_Texto_9:
.string "Hasta que no estemos seguros de tener\n"
	.string "algo grande de verdad, que podamos\l"
	.string "controlar con total garantía… esos\l"
	.string "proyectos son totalmente\l"
	.string "confidenciales, ¿me entiendes\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Central_Energia_Texto_10:
.string "Ahora, hablemos de tu próxima misión:\n"
	.string "finiquitar el asunto de las vías hacia\l"
	.string "AZAFRÁN.$"

RocketHideout_8F_Mision_Central_Energia_Texto_11:
.string "Al parecer, ese extraño POKÉMON ha\n"
	.string "vuelto, y está interfiriendo con la\l"
	.string "fase final de la construcción.$"

RocketHideout_8F_Mision_Central_Energia_Texto_12:
.string "Me temo que no queda otra que\n"
	.string "capturarlo para que definitivamente no\l"
	.string "cause más problemas.$"

RocketHideout_8F_Mision_Central_Energia_Texto_13:
.string "De modo que tu misión será, a las\n"
	.string "vísperas de la II GRAN REUNIÓN en\l"
	.string "TRIGAL, hacerte cargo de ese POKÉMON.$"

RocketHideout_8F_Mision_Central_Energia_Texto_14:
.string "Yo partiré ya hacia TRIGAL, debo montar\n"
	.string "los preparativos de la reunión junto\l"
	.string "con el PRESIDENTE.$"

RocketHideout_8F_Mision_Central_Energia_Texto_15:
.string "Es el momento de ir recogiendo los\n"
	.string "frutos de nuestro trabajo, {PLAYER}.\l"
	.string "En muy poco tiempo estamos viviendo\l"
	.string "grandes transformaciones en ambas\l"
	.string "regiones, esas mismas que llevan 1 año\l"
	.string "fraguándose, desde la I GRAN REUNIÓN o\l"
	.string "incluso antes.$"



RocketHideout_8F_Final_DLC::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Final_DLC_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_2, RocketHideout_8F_Final_DLC_Texto_14
applymovement 1, CuevaTesoro4_Jefe_Final_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Final_DLC_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_MEWTWO, 70, ITEM_MEWTWONITE_Y
waitfanfare
msgbox RocketHideout_8F_Final_DLC_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Final_DLC_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_21 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 216
delay 50
warpsilent MAP_DEVON_S9, 40, 7
release
end

RocketHideout_8F_Final_DLC_Move_7:
walk_slow_down
step_end

RocketHideout_8F_Final_DLC_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_5:
face_up
step_end

RocketHideout_8F_Final_DLC_Move_4:
walk_slow_left
step_end

RocketHideout_8F_Final_DLC_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Final_DLC_Move_2:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_1:
face_right
step_end

RocketHideout_8F_Final_DLC_Texto_1:
.string "GIOVANNI: ¡{PLAYER}! Debimos estar\n"
	.string "ahí ATLAS y yo. Cuéntame todo, ¿y\l"
	.string "ANDRA?$"

RocketHideout_8F_Final_DLC_Texto_2:
.string "Ya veo. Debimos suponer que el ambiente\n"
	.string "y rol de DEVON eran muy atractivos para\l"
	.string "alguien como el ayudante de BILL.\l"
	.string "Supongo que tenía razón, nunca le\l"
	.string "prestamos la atención suficiente.$"

RocketHideout_8F_Final_DLC_Texto_3:
.string "En cuanto a ANDRA… tal vez sea mejor\n"
	.string "así. Después de todo, puede que su\l"
	.string "búsqueda concluya en un\l"
	.string "descubrimiento más importante que\l"
	.string "todas las investigaciones que estamos\l"
	.string "llevando a cabo…$"

RocketHideout_8F_Final_DLC_Texto_4:
.string "Por otro lado, DEVON ha movido ficha.\n"
	.string "Esto no cambia en nada nuestros\l"
	.string "planes, a pesar de que sepan todo lo\l"
	.string "hablado en la II GRAN REUNIÓN.$"

RocketHideout_8F_Final_DLC_Texto_5:
.string "Ante la ausencia de ANDRA, nuestra BASE\n"
	.string "de HOENN ha quedado sin un LÍDER, tú\l"
	.string "estarás al mando. Después de lo de\l"
	.string "RUINAS ALFA, todos los POKÉMON\l"
	.string "LEGENDARIOS que allí se concentraron\l"
	.string "volvieron a su lugar de origen. Esto\l"
	.string "implica que los 3 LEGENDARIOS de\l"
	.string "HOENN: KYOGRE, GROUDON y RAYQUAZA,\l"
	.string "estarán allí, uno de tus objetivos será\l"
	.string "encontrarlos, para poder estudiarlos.\l"
	.string "Sin embargo…$"

RocketHideout_8F_Final_DLC_Texto_6:
.string "Tu misión primordial será obtener toda\n"
	.string "la información posible sobre DEVON.$"

RocketHideout_8F_Final_DLC_Texto_7:
.string "Dónde opera, en qué lugar asienta sus\n"
	.string "laboratorios de investigación, cuáles\l"
	.string "son sus proyectos y ambiciones…$"

RocketHideout_8F_Final_DLC_Texto_8:
.string "OAK vino poco antes que tú, fue el\n"
	.string "primero en ponerme al tanto.$"

RocketHideout_8F_Final_DLC_Texto_9:
.string "Se enfrentó personalmente a su\n"
	.string "PRESIDENTE, y fue derrotado. Esto al\l"
	.string "tiempo que sus EJECUTIVOS contuvieron\l"
	.string "a BILL, ANDRA y ELM.$"

RocketHideout_8F_Final_DLC_Texto_10:
.string "No hay duda de que cuentan con\n"
	.string "recursos, y conocen bien el arte del\l"
	.string "combate POKÉMON.$"

RocketHideout_8F_Final_DLC_Texto_11:
.string "Tal vez puedan llevarte al límite de tu\n"
	.string "nivel, más aún que en RUINAS ALFA,\l"
	.string "quién sabe.$"

RocketHideout_8F_Final_DLC_Texto_12:
.string "Es por ello, {PLAYER}, que quiero\n"
	.string "volver a ponerte a prueba, esta vez\l"
	.string "haciendo uso de nuestros proyectos\l"
	.string "más punteros.$"

RocketHideout_8F_Final_DLC_Texto_13:
.string "Ahora, ¡enfrenta todo el poder de la\n"
	.string "tecnología desarrollada por 2\l"
	.string "regiones!$"

RocketHideout_8F_Final_DLC_Texto_14:
.string "Asombroso, sigues estando en la cima.$"

RocketHideout_8F_Final_DLC_Texto_15:
.string "No hay duda, eres el activo más valioso\n"
	.string "con el que el TEAM ROCKET cuenta. Tu\l"
	.string "historia como ENTRENADOR LEGENDARIO\l"
	.string "tiene aún mucho por ofrecer, créeme.$"

RocketHideout_8F_Final_DLC_Texto_16:
.string "Quiero que tengas esto, sé que no\n"
	.string "recurrirás a ello como una panacea que\l"
	.string "solucionará todo, tal y como nosotros\l"
	.string "intentamos en el pasado, pero\l"
	.string "considéralo una opción más.$"

RocketHideout_8F_Final_DLC_Texto_17:
.string "¡¡OBTUVISTE UN MEWTWO AL NV.70!!$"

RocketHideout_8F_Final_DLC_Texto_18:
.string "El MEWTWO original es tuyo, {PLAYER}.$"

RocketHideout_8F_Final_DLC_Texto_19:
.string "Por supuesto, viene con lo último en\n"
	.string "tecnología: la MEGA-PIEDRA que le\l"
	.string "convierte en su forma Y. Como dije en la\l"
	.string "reunión, el &-VOLCARONA que\l"
	.string "enfrentaste fue vital en la mejora de\l"
	.string "su ATAQUE ESPECIAL hasta niveles\l"
	.string "estratosféricos.$"

RocketHideout_8F_Final_DLC_Texto_20:
.string "Eso es todo, {PLAYER}. Te recomiendo\n"
	.string "explorar y adaptarte poco a poco a\l"
	.string "HOENN. La sede de DEVON está en CIUDAD\l"
	.string "FÉRRICA, sin embargo, no sabemos si ese\l"
	.string "es o no su centro de operaciones.$"

RocketHideout_8F_Final_DLC_Texto_21:
.string "Mientras, seguiremos desarrollando los\n"
	.string "prototipos de nivel II y …III. Hasta\l"
	.string "entonces… mantente mejorando.$"

