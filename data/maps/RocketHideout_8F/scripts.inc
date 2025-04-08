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
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
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
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
playse SE_BREAKABLE_DOOR
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12.1 MSGBOX_AUTOCLOSE
delay 25
playse SE_SHOP
addmoney 175000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_EVIOLITE
waitfanfare
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.2 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
delay 5
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.2 MSGBOX_AUTOCLOSE
delay 10
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
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
addobject 11
delay 15
showmonpic SPECIES_ZAPDOS, 17, 1   
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.2 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
playse SE_PIN
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
showmonpic SPECIES_ARTICUNO, 17, 1   
playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20.1 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.1 MSGBOX_AUTOCLOSE
delay 10
showmonpic SPECIES_MOLTRES, 17, 1   
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.3 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 11
delay 15
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.3
waitmovement 0x0
delay 5
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.3 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.4 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.2 MSGBOX_AUTOCLOSE
delay 10
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

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.4:
face_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1:
face_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2:
face_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.3:
walk_slow_right
delay_16
delay_8
walk_slow_left
delay_16
delay_8
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1:
	.string "GIOVANNI: What do you think, {PLAYER}?\p"
	.string "A better workplace than that\n"
	.string "musty B4F, wouldn't you say?\p"
	.string "So did you discover something?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2:
	.string "I see. DAISY's OAK's granddaughter\n"
	.string "and BLUE's sister.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2.1:
	.string "Per your report, something incredibly\n"
	.string "unusual is taking place there. Either\l"
	.string "OAK's used a POKEMON to vacate the\l"
	.string "premises, or that LABORATORY's not as\l"
	.string "innocent and charitable as it appears.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3:
	.string "ANDRA: So you snagged a BULBASAUR, did\n"
	.string "ya? Wow, nice windfall!\p"
	.string "That kind of POKÉMON are unusual, y'\n"
	.string "know. But hey, I won't be eating your\l"
	.string "dust, trust me!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4:
.string "BLUE: Did you call me, GIOVANNI?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5:
	.string "GIOVANNI: Quite so, BLUE. {PLAYER}'s\n"
	.string "paid your precious hometown a visit.\l"
	.string "After all, you've been withholding key\l"
	.string "intel on the people you've known all your\l"
	.string "life.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} … {PAUSE 10}…{PAUSE 10}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7:
	.string "I've already laid it out, GIOVANNI.\p"
	.string "My relationship with GRAMPS is pretty\n"
	.string "much a formality. Basically, he's just\l"
	.string "taken care of me and DAISY ‘cuz of our\l"
	.string "family ties; I've been living with my\l"
	.string "sister, DAISY, who gets along better\l"
	.string "with him.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8:
	.string "Refering to RED, he's always been\n"
	.string "GRAMPS' favorite. His star pupil.\p"
	.string "As far as I remember, he's always taught\n"
	.string "him how to battle. Kinda like RED's his\l"
	.string "personal pick to carry out his will.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9:
	.string "And that's all there is to say ‘cuz\n"
	.string "I've got nothing else, GIOVANNI.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.1:
	.string "I'm sure as heck not going back. I've\n"
	.string "got the freedom to be the TRAINER I\l"
	.string "wanna be now. All GRAMPS wanted was\l"
	.string "just to nab a good position to pull my\l"
	.string "weight. And that's about all they saw\l"
	.string "in me: just some burden.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.2:
	.string "But, no!\p"
	.string "I have other plans: climb to the top\n"
	.string "on my own terms; I'll prove just how\l"
	.string "much they're underestimating me.\p"
	.string "I'm not falling in line to follow the\n"
	.string "ELITE FOUR's orders!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10:
	.string "GIOVANNI: Only a real ROCKET would talk\n"
	.string "like that, BLUE. Rest assured: they\l"
	.string "won't be imposing on you. Trust me,\l"
	.string "here is where you belong.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11:
.string "BLUE: Th{PAUSE 15}-{PAUSE 15}thanks, SIR…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12:
	.string "GIOVANNI: Now then. You three've been\n"
	.string "summoned because you meet my\l"
	.string "standards for this mission. Rather,\l"
	.string "three missions of the utmost priority.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12.1:
	.string "Before that though, {PLAYER}, this is\n"
	.string "your reward for such invaluable intel.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13:
    .string "You have just earned ¥140,000!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14:
	.string "In addition, this is yours.\p"
	.string "BLUE and ANDRA each have one. But it's\n"
	.string "an insult that one of my top men lacks\l"
	.string "such a resource as this.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15:
	.string "An EVIOLITE.\p"
	.string "So few exist in this region; boost both\n"
	.string "DEFENSE and SP. DEF, up to 50%, for\l"
	.string "these POKÉMON who can evolve yet.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1:
	.string "With that, your GOLBAT would get an\n"
	.string "incredibly bulk, not just GOLBAT.\p"
	.string "MAGMAR, ELECTABUZZ, SCYTHER, and\n"
	.string "even RHYDON are among the most\l"
	.string "suitable holders of this stone.\p"
	.string "Use it wisely.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.2:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16:
	.string "Now, you must know all missions I'll be\n"
	.string "assigning here are confidential in\l"
	.string "totality to any outsider to the B5F of\l"
	.string "this BASE, even for the other GRUNTs.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.1:
	.string "I daresay, with all the hearsay of TEAM\n"
	.string "ROCKET's thefts and crimes for funding\l"
	.string "projects, this is now to be your\l"
	.string "foremost answer when prompted on your\l"
	.string "duties. Whether they be ROCKET or\l"
	.string "otherwise, your only reply should be\l"
	.string "that you're committing theft, be it item\l"
	.string "or POKÉMON…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.2:
    .string "Now that you're aware, we can begin…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17:
	.string "So{PAUSE 15}…{PAUSE 15} ANDRA{PAUSE 15}…{PAUSE 15} do you recall that\n"
	.string "POWER PLANT you'd been interested in?\l"
	.string "All your suspicions of a POKÉMON with\l"
	.string "great power residing there?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18:
.string "ANDRA: Yes, SIR! I remember it!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19:
	.string "GIOVANNI: Well, I withheld you this\n"
	.string "information, but TEAM ROCKET's been\l"
	.string "investigating the whereabouts of the\l"
	.string "LEGENDARY BIRDs for quite some time.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.1:
	.string "Three of the most ancient, overpowered\n"
	.string "and sacred POKÉMON this region knows.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.2:
	.string "One of them, the ELECTRIC-FLYING\n"
	.string "ZAPDOS, perhaps the most dangerous and\l"
	.string "uncontrollable of the three, is now\l"
	.string "nesting in that POWER PLANT.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.3:
    .string "Yes, ANDRA, It's unsurprising you'd\n"
	.string "noticed its presence; its electrical\l"
	.string "discharges are unlike anything you've\l"
	.string "seen.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20:
	.string "The next is the ICE-FLYING ARTICUNO.\p"
	.string "Though it's the most manageable among\n"
	.string "them, it's still equally dangerous and\l"
	.string "considerably resistant.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20.1:
	.string "Refering to ARTICUNO, We're aware of\n"
	.string "a specimen currently nesting in the\l"
	.string "SEAFOAM ISLANDS, just west of FUCHSIA\l"
	.string "CITY.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21:
.string "BLUE: A specimen?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22:
	.string "GIOVANNI: Correct. We don't believe\n"
	.string "they're a unique species. Rather, there\l"
	.string "may be more than one ZAPDOS or more\l"
	.string "than one ARTICUNO.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.1:
    .string "This doesn't diminish the fact\n"
	.string "that they're exceptionally rare,\l"
	.string "powerful and elusive POKÉMON.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.2:
	.string "The final one, MOLTRES, has been located\n"
	.string "at the summit of MT. EMBER, the\l"
	.string "emblematic volcano of KNOT ISLAND.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.3:
	.string "Not as fast as ZAPDOS, with less\n"
	.string "bulk than ARTICUNO, but has the most\l"
	.string "devastating FIRE-TYPE moves.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23:
    .string "GIOVANNI: Your mission is as follows.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.1:
	.string "Firstly, ANDRA will convene with a\n"
	.string "committee of our best scientists and\l"
	.string "strategists to study the best way to\l"
	.string "enter the POWER PLANT without being\l"
	.string "seen by the authorities.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.2:
	.string "On the other hand, BLUE will head\n"
	.string "straight to ONE ISLAND. I have\l"
	.string "arranged a transfer in VERMILION that\l"
	.string "will take you directly to the island.\p"
	.string "Your objective will be MOLTRES, due\n"
	.string "to your BLASTOISE as top POKÉMON.\p"
	.string "I trust it will be enough to\n"
	.string "extinguish the wild flame of the\l"
	.string "FIRE KANTO BIRD.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.3:
	.string "Give him this, and MOLTRES's fire\n"
	.string "could never touch our KANTO STARTER.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.4:
	.string "BLUE obtained an ASSAULT VEST!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.5:
	.string "BLUE: Thanks, SIR!\p"
	.string "Now, my BLASTOISE will be unbeatable!!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24:
	.string "GIOVANNI: As for you, {PLAYER}, you\n"
	.string "will go after the LEGENDARY ARTICUNO,\l"
	.string "in the SEAFOAM ISLANDS.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.1:
    .string "Security there is not as strict\n"
	.string "as in the POWER PLANT.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.2:
	.string "I advise you to take ROUTE 12,\n"
	.string "south o LAVENDER TOWN.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.3:
	.string "Yes, it will be a long journey to\n"
	.string "FUCHSIA CITY, and then the sea that\l"
	.string "leads to SEAFOAM ISLANDS. However, it\l"
	.string "will serve as preparation to face such a\l"
	.string "POKÉMON. I trust in your abilities as a\l"
	.string "TRAINER to defeat ARTICUNO, {PLAYER}.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25:
	.string "Now listen. I don't want you to\n"
	.string "capture the birds, I just want you\l"
	.string "to defeat them, so we can obtain a\l"
	.string "feather, which is more than enough for\l"
	.string "the research we desire, this way, we can\l"
	.string "reproduce the power of these POKÉMON\l"
	.string "under controlled conditions without\l"
	.string "others noticing the absence of the\l"
	.string "birds…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26:
	.string "We are going to expand the power\n"
	.string "standards, surpass the supposed limits\l"
	.string "set, which will further solidify our\l"
	.string "position as the main resistance against\l"
	.string "the elites of this region…$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27:
	.string "Now, you have permission to enter\n"
	.string "the adjoining room, named:\p"
	.string "- RESEARCH AREA ABOUT THE MAXIMUM\n"
	.string " POWER ACHIEVABLE BY A POKÉMON -.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.1:
	.string "There, we compile key information\n"
	.string "about the SACRED BIRDS and any other\l"
	.string "powerful POKÉMON, mainly LEGENDARIES.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.2:
	.string "That's all, and remember, KANTO's\n"
	.string "history is being written now,\l"
	.string "with every step you take.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28:
	.string "ANDRA: I still can't believe this,\n"
	.string "{PLAYER}! We are going in search of a\l"
	.string "LEGENDARY POKÉMON each one of us! This\l"
	.string "is getting insane, huh? I will keep you\l"
	.string "informed about how my mission with\l"
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

RocketHideout_8F_Mision_Silph_No::
fadescreen 1
delay 20
changeavatar 2
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addmoney 500000 0
givemon SPECIES_AERODACTYL, 35, ITEM_SHARP_BEAK
giveitem ITEM_ULTRA_BALL, 50
removeobject 9
fadescreen 0
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
setvar VAR_UNUSED_0x40DC, 13
setvar VAR_UNUSED_0x40F7, 72
setvar VAR_UNUSED_0x40FD, 1
msgbox RocketHideout_8F_Mision_Silph_No_Texto_1, MSGBOX_AUTOCLOSE
release
end

RocketHideout_8F_Mision_Silph_No_Texto_1:
	.string "-You have been promoted to EXECUTIVE,\n"
	.string "received 50 ULTRA BALL, an AERODACTYL\l"
	.string "and ¥500,000.\p"
	.string "Next mission is at SAFFRON CITY -SILPH-.\p"
	.string "To see the skin change, you have to\n"
	.string "leave this room.$"

RocketHideout_8F_Mision_Silph::
lock
msgbox RocketHideout_8F_Mision_Silph_Yes, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_8F_Mision_Silph_No
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
end

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
delay 20
hidemoneybox
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
msgbox RocketHideout_8F_Mision_Silph_text_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_9.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_13.2 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_13.3 MSGBOX_AUTOCLOSE
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_13.4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_13.5 MSGBOX_AUTOCLOSE
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
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_10
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_47 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_48 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_48.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_49 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_49.1 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
applymovement 2, RocketHideout_8F_Mision_Silph_move11
waitmovement 0x0
delay 10
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

RocketHideout_8F_Mision_Silph_Despues_Move_9.1:
face_down
delay_16
delay_8
face_right
delay_8
step_end

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

RocketHideout_8F_Mision_Silph_Yes:
	.string "Keep incoming scene?\n"
	.string "-If you press -YES- and a bug happens,\l"
	.string "you can press -NO- and skip the scene.-$"

RocketHideout_8F_Mision_Silph_text_1:
	.string "GIOVANNI: Ah, {PLAYER}!\p"
	.string "We were waiting for you, come in!$"

RocketHideout_8F_Mision_Silph_text_2:
	.string "-{PLAYER} handed over the\n"
	.string "ARTICUNO and ZAPDOS feathers!-$"

RocketHideout_8F_Mision_Silph_text_3:
	.string "GIOVANNI: What an extraordinary job\n"
	.string "you have done, {PLAYER}! Not only\l"
	.string "your mission with ARTICUNO, but you\l"
	.string "have also taken care of ZAPDOS! KOGA\l"
	.string "also reported to me of how you faced\l"
	.string "BRUNO from the ELITE 4 on CYCLING ROAD\l"
	.string "and defeated him.$"

RocketHideout_8F_Mision_Silph_text_4:
	.string "You have shown a priceless performance\n"
	.string "and valor towards TEAM ROCKET. PETREL\l"
	.string "has already briefed me on how even 10\l"
	.string "policemen together were not enough to\l"
	.string "overcome you, ANDRA, and you held out\l"
	.string "long enough for us to save you.$"

RocketHideout_8F_Mision_Silph_text_5:
	.string "ANDRA, {PLAYER}! You have earned\n"
	.string "my trust, and both of you are promoted\l"
	.string "to ROCKET EXECUTIVEs!!$"

RocketHideout_8F_Mision_Silph_text_6:
	.string "{PLAYER} has been promoted to\n"
	.string "ROCKET EXECUTIVE!!$"

RocketHideout_8F_Mision_Silph_text_7:
	.string "GIOVANNI: Here is your reward, ANDRA, I\n"
	.string "hope you invest it in your great team.$"

RocketHideout_8F_Mision_Silph_text_8:
	.string "About you, {PLAYER}{PAUSE 15}…{PAUSE 15}\n"
	.string "Along with your results: two of\l"
	.string "the KANTO BIRDS, BRUNO…$"

RocketHideout_8F_Mision_Silph_text_9:
.string "This shall be your reward.$"

RocketHideout_8F_Mision_Silph_text_10:
	.string "-YOU'VE JUST EARNED ¥500,000!-$"

RocketHideout_8F_Mision_Silph_text_11:
	.string "Take this too, someone of your level\n"
	.string "should be able to catch any POKÉMON\l"
	.string "whenever you want: 50 ULTRA BALLS!$"

RocketHideout_8F_Mision_Silph_text_12:
	.string "Lastly, this POKÉMON, the rarest and\n"
	.string "most powerful of the KANTO FOSSILS,\l"
	.string "I am sure that it will be a great\l"
	.string "addition to your team.$"

RocketHideout_8F_Mision_Silph_text_13:
.string "YOU HAVE RECEIVED A LV.35 AERODACTYL!$"

RocketHideout_8F_Mision_Silph_text_13.1:
	.string "As ROCKET EXECUTIVEs, you have\n"
	.string "permission to enter at the south\l"
	.string "area of the DEEP BASE.$"

RocketHideout_8F_Mision_Silph_text_13.2:
	.string "Take this.$"

RocketHideout_8F_Mision_Silph_text_13.3:
	.string "YOU OBTAINED THE VIP AREA KEY!$"

RocketHideout_8F_Mision_Silph_text_13.4:
	.string "Some exclusive resources are there,\n"
	.string "to improve even more your teams.$"

RocketHideout_8F_Mision_Silph_text_13.5:
	.string "It serves as a rest area too,\n"
	.string "along with other EXECUTIVEs.$"

RocketHideout_8F_Mision_Silph_text_14:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_15:
	.string "Well. I told you that in due time I\n"
	.string "would tell you the origins of TEAM\l"
	.string "ROCKET and why it is as you know it\l"
	.string "today. Now that you have gained some\l"
	.string "experience in this region and\l"
	.string "considering what is to come, the\l"
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
	.string "dragon-type tamer lineage{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_17.1:
	.string "{PAUSE 15}…{PAUSE 15}since young, he was educated in the\n"
	.string "art of training, for many, the strongest\l"
	.string "and holiest type, showed a huge talent\l"
	.string "for unleashing the maximum power of\l"
	.string "DRAGONITE, considered the most\l"
	.string "powerful NON-LEGENDARY POKÉMON,\l"
	.string "surpassing even the power of the\l"
	.string "LEGENDARY BIRDS.$"
	
RocketHideout_8F_Mision_Silph_text_17.2:
	.string "LANCE turned into a feared TRAINER,\n"
	.string "with 3 of these sacred dragons on his\l"
	.string "team, he took the power in JOHTO.$"

RocketHideout_8F_Mision_Silph_text_18:
	.string "However, this was not enough to submit\n"
	.string "KANTO as he wanted to, our region had\l"
	.string "always had excellent TRAINERS, with\l"
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
	.string "his control, even with his dragons.\p"
	.string "Then, he started to find that power\n"
	.string "on the sacred and divine…$"

RocketHideout_8F_Mision_Silph_text_20:
	.string "He was warned about the JOHTO LEGENDS,\n"
	.string "LUGIA and HO-OH, both possessing a\l"
	.string "nonexistent power here in KANTO, but\l"
	.string "he never even came close to finding\l"
	.string "them.$"

RocketHideout_8F_Mision_Silph_text_21:
	.string "Despite that, he eventually learned of\n"
	.string "the legend stating that the legendary\l"
	.string "HO-OH left part of its power and\l"
	.string "essence imprinted on 3 POKÉMON\l"
	.string "destined to perish, last witnessed 150\l"
	.string "years ago in the so-called BURNED\l"
	.string "TOWER MIRACLE.\p"
	.string "According to legend, these 3 POKÉMON\n"
	.string "reincarnated into the 3 JOHTO BEASTS,\l"
	.string "now roaming the region without\l"
	.string "direction, unable to contain their\l"
	.string "power.$"

RocketHideout_8F_Mision_Silph_text_22:
	.string "LANCE searched in the entire region,\n"
	.string "determined to find the JOHTO BEASTS.\p"
	.string "And{PAUSE 15}…{PAUSE 15} indeed, it turned out to be\n"
	.string "true; using his dragons, he managed\l"
	.string "to corner and capture, one by one,\l"
	.string "these SACRED POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_23:
	.string "The rest of the history is well known;\n"
	.string "with the JOHTO BEASTS under his command,\l"
	.string "he set out to invade KANTO.$"

RocketHideout_8F_Mision_Silph_text_23.1:
	.string "He brought on board an expert in\n"
	.string "military tactics: LT. SURGE. The\l"
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
	.string "that legend{PAUSE 15}…{PAUSE 15} the mythical\l"
	.string "POKÉMON known as MEW.$"
	
RocketHideout_8F_Mision_Silph_text_25.1:
	.string "FUJI took the lead in this project,\n"
	.string "being the one who knew the POKÉMON\l"
	.string "better than anyone else, due to him,\l"
	.string "we managed to reach FARAWAY ISLAND\l"
	.string "and capture MEW.$"

RocketHideout_8F_Mision_Silph_text_25.2:
	.string "MEW, on its own, wouldn't secure our\n"
	.string "victory. Its nature prevented it from\l"
	.string "being involved in any form of conflict,\l"
	.string "we needed an additional element.$"

RocketHideout_8F_Mision_Silph_text_25.3:
	.string "It was at that moment when the - MEWTWO\n"
	.string "PROJECT - born. With the only goal to\l"
	.string "maximize the MEW's potential, and use\l"
	.string "it in the war.$"

RocketHideout_8F_Mision_Silph_text_25.4:
	.string "It was not easy, the results left\n"
	.string "anomalies and deformities from what\l"
	.string "was initially MEW. Retaining only 48% of\l"
	.string "its overall base power, it only\l"
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
	.string "and funds were running out; if we didn't\l"
	.string "come up with something soon, KANTO would\l"
	.string "have no choice but to surrender.$"

RocketHideout_8F_Mision_Silph_text_26:
	.string "It was at that moment{PAUSE 20}…{PAUSE 20} after many\n"
	.string "failures, when we finally could improve\l"
	.string "the legendary MEW, creating from its\l"
	.string "DNA a POKÉMON made only for battles{PAUSE 20}…{PAUSE 20}\p"
	.string "And for winning the KANTO WAR.$"

RocketHideout_8F_Mision_Silph_text_27:
	.string "Faster, stronger and more effective\n"
	.string "than the JOHTO BEASTS, we estimated\l"
	.string "its power to be on par with the\l"
	.string "LEGENDARIES LUGIA and HO-OH that LANCE\l"
	.string "could never find.\p"
	.string "Its mental capabilities were far away\n"
	.string "from any other thing knew by us…$"

RocketHideout_8F_Mision_Silph_text_28:
	.string "With MEWTWO, we could have ended all\n"
	.string "this and taught a lesson to LANCE, it\l"
	.string "was so powerful{PAUSE 15}…{PAUSE 15} so powerful that went\l"
	.string "out of our control, just when we were\l"
	.string "doing one of the last tests.$"

RocketHideout_8F_Mision_Silph_text_29:
	.string "The CINNABAR ISLAND laboratory, where\n"
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
	.string "first to kneel, once LANCE seized power.\p"
	.string "He offered all his knowledge about\n"
	.string "POKÉMON and promised to assist the\l"
	.string "new government. The worst thing is…$"

RocketHideout_8F_Mision_Silph_text_32:
	.string "{PAUSE 15}…{PAUSE 15}he pointed to me as the main threat to\n"
	.string "his government, and told LANCE about\l"
	.string "our plans to overthrow him. Although he\l"
	.string "never mentioned MEWTWO, he did blame me\l"
	.string "for conspiring, even after the war.$"

RocketHideout_8F_Mision_Silph_text_33:
	.string "LANCE wasted no time launching a\n"
	.string "tremendous smear campaign against me.\p"
	.string "Despite I have gave my best to keep\n"
	.string "KANTO in the hands of its habitants,\l"
	.string "LANCE managed to convince the public\l"
	.string "opinion that I was the villain, and he\l"
	.string "was the savior; according to the\l"
	.string "official version, LANCE only had to\l"
	.string "intervene after a blatant coup attempt\l"
	.string "on my part when I sought to revenew my\l"
	.string "CHAMPION title.$"

RocketHideout_8F_Mision_Silph_text_34:
	.string "This, for sure, is absolutely stupid\n"
	.string "and makes no sense to anyone who lived\l"
	.string "through the war.\p"
	.string "But the remaining silent out of fear of\n"
	.string "reprisals from LANCE's government and\l"
	.string "the constant bombardment of news and\l"
	.string "spreading of false information, they\l"
	.string "have managed to blur the truth over\l"
	.string "time, to the extent that even those who\l"
	.string "were actually present in the war now\l"
	.string "doubt what they truly experienced.$"

RocketHideout_8F_Mision_Silph_text_36:
	.string "Life hits hard. Since then, everything\n"
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
	.string "theirs, to return the favor in kind.$"

RocketHideout_8F_Mision_Silph_text_37.1:
	.string "Under that premise, I kept TEAM ROCKET\n"
	.string "alive, and it continues to exist until\l"
	.string "this day.$"

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
	.string "matters such as money or POKÉMON theft.\p"
	.string "No{PAUSE 15}…{PAUSE 15} nothing could be further from\n"
	.string "the truth, what we achieve with this is\l"
	.string "to prevent LANCE from focusing all his\l"
	.string "energies on crushing us, as he does not\l"
	.string "see us as a serious threat{PAUSE 20}…{PAUSE 20} yet.$"

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
	.string "majority of items for TRAINERS\l"
	.string "throughout KANTO. It has just dropped\l"
	.string "a bombshell, a revolution in the\l"
	.string "capture of POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_42:
	.string "Its MASTER BALL is presumably capable\n"
	.string "of catching any POKÉMON under any\l"
	.string "condition, an infallible POKÉ BALL, the\l"
	.string "dream of any TRAINER, especially any\l"
	.string "collector.$"

RocketHideout_8F_Mision_Silph_text_43:
	.string "An item like that would be crucial to\n"
	.string "retrieve a POKÉMON like MEWTWO,\l"
	.string "especially now, since LANCE is unaware\l"
	.string "of its existence. We have certain\l"
	.string "suspicions about where it might be\l"
	.string "after escaping from CINNABAR ISLAND…$"

RocketHideout_8F_Mision_Silph_text_44:
	.string "But that is not the most important\n"
	.string "objective of our assault on SILPH. I\l"
	.string "want everything to go perfectly, so\l"
	.string "that in the eyes of the population,\l"
	.string "TEAM ROCKET appears to be defeated.\p"
	.string "They should lose sight of us just when\n"
	.string "we are at our prime…$"

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
.string "ANDRA!\p"
	.string "{PLAYER}!\p"
	.string "Your mission at SILPH\n"
	.string "is as follows!$"

RocketHideout_8F_Mision_Silph_text_46.1:
	.string "To enter in SAFFRON, we'll force the\n"
	.string "paths using a large portion of our\l"
	.string "units. Once in SILPH, you will be in\l"
	.string "charge of dealing with the security\l"
	.string "protecting the PRESIDENT.\p"
	.string "After that, I will have a free hand to\n"
	.string "speak calmly with him and explain the\l"
	.string "situation. You will provide me with\l"
	.string "enough time to convince him to\l"
	.string "cooperate with TEAM ROCKET.$"

RocketHideout_8F_Mision_Silph_text_46.2:
	.string "Meanwhile, you must restrain any\n"
	.string "attempt to access the PRESIDENT's\l"
	.string "office.\p"
	.string "My conversation with him must\n"
	.string "be entirely confidential.\p"
	.string "Is that clear?$"

RocketHideout_8F_Mision_Silph_text_47:
	.string "ANDRA: Not even LANCE will get\n"
	.string "through us if he shows up, BOSS!$"

RocketHideout_8F_Mision_Silph_text_48:
	.string "GIOVANNI: Once I have convinced the\n"
	.string "PRESIDENT, we will obtain the MASTER\l"
	.string "BALL, and more importantly, the support\l"
	.string "of SILPH.$"

RocketHideout_8F_Mision_Silph_text_48.1:
    .string "By then, nothing stops us there.\p"
	.string "As soon as I give the signal, you\n"
	.string "will withdraw along with the other\l"
	.string "HIGH-LEVEL ROCKET members and leave\l"
	.string "the building with our less competent\l"
	.string "soldiers, with minimal protection to\l"
	.string "reach me…$"

RocketHideout_8F_Mision_Silph_text_49:
	.string "If everything goes according to the\n"
	.string "plan, that meddlesome RED will make\l"
	.string "an appearance.$"

RocketHideout_8F_Mision_Silph_text_49.1:
	.string "It's perfect. Nothing better than\n"
	.string "pretending a defeat against that\l"
	.string "TRAINER without personality, empty of\l"
	.string "purpose. With RED as the opponent, I\l"
	.string "can lose and then leave, disappearing\l"
	.string "before the word spreads and the police\l"
	.string "show up…$"

RocketHideout_8F_Mision_Silph_text_50:
	.string "Once here, we'll kill three birds with one\n"
	.string "shot: we'll have the MASTER BALL,\l"
	.string "SILPH's loyalty, and the popular\l"
	.string "belief that we are finished.$"

RocketHideout_8F_Mision_Silph_text_51:
	.string "PROTON: A brilliant plan, SIR.$"

RocketHideout_8F_Mision_Silph_text_52:
	.string "GIOVANNI: Which is already in motion.\n"
	.string "At this moment, the checkpoints with\l"
	.string "SAFFRON should have been taken, leaving\l"
	.string "our way to the city clear. You must\l"
	.string "get ready, PROTON; you will be part of\l"
	.string "the forces that clear the path.$"

RocketHideout_8F_Mision_Silph_text_53:
.string "PROTON: At your command, BOSS.$"

RocketHideout_8F_Mision_Silph_text_54:
	.string "GIOVANNI: ANDRA, {PLAYER}{PAUSE 15}…{PAUSE 15} I trust in\n"
	.string "your abilities as TRAINERS.\p"
	.string "SAFFRON CITY and SILPH will suppose a\n"
	.string "new challenge to prove yourselves once\l"
	.string "again.$"

RocketHideout_8F_Mision_Silph_text_55:
.string "ANDRA: We won't let you down, BOSS!$"

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
delay 10
playse SE_EXIT
addobject 2
setobjectxy 2, 9, 15
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9.3
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.3 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
delay 5
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.6 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_7 MSGBOX_AUTOCLOSE
playse SE_EXIT
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.7
delay 5
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9.6
delay 5
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9.7
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9.7
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
addobject 5
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_8 MSGBOX_AUTOCLOSE
delay 10
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
waitse
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_18 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_22 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_27 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_28 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_33 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_15
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_34 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_35 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_16
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_5.4
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_5.3
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 9
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_17
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37.1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 79
setvar VAR_ROUTE111_STATE, 1
setvar VAR_ROUTE107_STATE, 1
setvar VAR_ROUTE108_STATE, 1
setvar VAR_ROUTE109_STATE, 1
setvar VAR_ROUTE106_STATE, 1
setvar VAR_ROUTE105_STATE, 1
release
end

RocketHideout_8F_Mision_Gimnasios_move_5.3:
delay_8
walk_right
walk_right
walk_right
walk_up
walk_up
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.4:
walk_down
face_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.1:
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.2:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.6:
emote_exclamation_mark
delay_8
face_down
delay_16
delay_8
face_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.7:
emote_exclamation_mark
delay_8
face_down
delay_16
delay_8
face_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.3:
emote_exclamation_mark
face_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.2:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_texto_1:
	.string "BLUE: So you too, GIOVANNI has also\n"
	.string "called ANDRA and me to be here. I hope\l"
	.string "it's important, because I only need one\l"
	.string "more GYM BADGE to have all of them.$"

RocketHideout_8F_Mision_Gimnasios_texto_2:
	.string "GIOVANNI: Alright, ANDRA, {PLAYER}{PAUSE 15}…{PAUSE 15}\p"
	.string "As you know, we have the MASTER\n"
	.string "BALL in our possession. With it, we can\l"
	.string "capture any POKÉMON, including{PAUSE 15}…{PAUSE 15} you\l"
	.string "know who…$"

RocketHideout_8F_Mision_Gimnasios_texto_3:
	.string "Furthermore, thanks to the samples of\n"
	.string "ARTICUNO, ZAPDOS, and MOLTRES, we\l"
	.string "have successfully cloned these\l"
	.string "LEGENDARY POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_4:
	.string "On the other hand, FUJI has spoken with\n"
	.string "BLAINE and has informed him. BLAINE was\l"
	.string "one of the scientists who worked on the\l"
	.string "MEW project, and we believe he knows\l"
	.string "something about where MEWTWO might be…$"

RocketHideout_8F_Mision_Gimnasios_texto_5:
	.string "BLUE: Excuse me, GIOVANNI, MEWTWO?\p"
	.string "I had never heard of such a POKÉMON!$"

RocketHideout_8F_Mision_Gimnasios_texto_6:
	.string "GIOVANNI: There will be time to catch\n"
	.string "you up, BLUE. What you need to know now\l"
	.string "is… at the moment we know its location\l"
	.string "and capture it, we will have everything\l"
	.string "we need to invade the POKÉMON LEAGUE\l"
	.string "and overthrow LANCE once and for…$"

RocketHideout_8F_Mision_Gimnasios_texto_6.1:
	.string "????: They are warned.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.2:
	.string "GIOVANNI: PROTON, what happens?$"

RocketHideout_8F_Mision_Gimnasios_texto_6.3:
	.string "I came back to talk with FUJI,\n"
	.string "as well as you said, SIR.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.4:
	.string "Someone tipped us off, the KANTO\n"
	.string "POLICE arrived at LAVENDER TOWN.\p"
	.string "FUJI was arrested, and I was able\n"
	.string "to escape, thanks to TELEPORT.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.5:
	.string "GIOVANNI: This{PAUSE 25}…{PAUSE 25} can't be{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_6.6:
	.string "Moreover, they're aware about all\n"
	.string "our projects with the KANTO BIRDS.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.7:
	.string "Someone must have informed them about\n"
	.string "the latest news in genetic engineering,\l"
	.string "and how it's possible to clone them.$"

RocketHideout_8F_Mision_Gimnasios_texto_7:
	.string "That BLAINE{PAUSE 15}…{PAUSE 15} He has betrayed us, there\n"
	.string "is no other explanation. He works for\l"
	.string "LANCE, or worse yet, for OAK.$"

RocketHideout_8F_Mision_Gimnasios_texto_8:
	.string "H.R.GRUNT: SIR, forgive me for\n"
	.string "interrupting, but it's urgent.\p"
	.string "The POKÉMON LEAGUE HQ updated\n"
	.string "the points required to compete\l"
	.string "in the KANTO POKÉMON LEAGUE.$"

RocketHideout_8F_Mision_Gimnasios_texto_9:
	.string "Well, SIR, I'll quote: - In addition\n"
	.string "to the 8 GYM BADGES, given that we\l"
	.string "only know of the existence of three\l"
	.string "LEGENDARY BIRDS in our region, which\l"
	.string "are closely protected, it will be\l"
	.string "strictly prohibited to participate with\l"
	.string "any of these three POKÉMON. This is not\l"
	.string "only as a show of respect but also due\l"
	.string "to the impossibility of obtaining them\l"
	.string "through legal means. Therefore, any\l"
	.string "TRAINER in possession of these\l"
	.string "LEGENDARIES will have engaged in\l"
	.string "illegal practices that we, by no\l"
	.string "means, approve of-.$"

RocketHideout_8F_Mision_Gimnasios_texto_10:
	.string "GIOVANNI: I see{PAUSE 15}…{PAUSE 15} those who make\n"
	.string "the law, can shape it to their liking.$"

RocketHideout_8F_Mision_Gimnasios_texto_11:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_12:
	.string "-Illegal practices that we, by\n"
	.string "no means, approve of-.\p"
	.string "It's amusing coming from them.$"

RocketHideout_8F_Mision_Gimnasios_texto_13:
.string "Thanks, HIGH-RANK.\p"
	.string "Can retire.$"

RocketHideout_8F_Mision_Gimnasios_texto_14:
.string "HIGH-RANK: SIR{PAUSE 15}…{PAUSE 15}\p"
	.string "EXECUTIVEs{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_15:
	.string "ANDRA: Damn BLAINE! He betrayed us!\p"
	.string "FUJI was wrong about his loyality!\p"
	.string "If LANCE would be able to find\n"
	.string "MEWTWO, what could happen?$"

RocketHideout_8F_Mision_Gimnasios_texto_16:
	.string "GIOVANNI: No, ANDRA, we must trust\n"
	.string "that, like OAK, he has kept the secret.\p"
	.string "LANCE with MEWTWO in his possession\n"
	.string "would be the greatest catastrophe in\l"
	.string "the history of this region.$"

RocketHideout_8F_Mision_Gimnasios_texto_17:
	.string "Having been pushed to this extreme, all\n"
	.string "that's left is to settle this by the\l"
	.string "old school way.\p"
	.string "So{PAUSE 15}…{PAUSE 15} a LEAGUE without LEGENDARIES…$"

RocketHideout_8F_Mision_Gimnasios_texto_18:
	.string "ANDRA, {PLAYER}, both of you have\n"
	.string "proven to be extraordinary TRAINERS.\l"
	.string "{PLAYER}'s ability to defeat BRUNO is\l"
	.string "evidence that you can compete\l"
	.string "against the top KANTO TRAINERS.$"

RocketHideout_8F_Mision_Gimnasios_texto_19:
	.string "Both of you, along with BLUE, will be\n"
	.string "candidates to claim the title of the\l"
	.string "POKÉMON LEAGUE.$"

RocketHideout_8F_Mision_Gimnasios_texto_20:
	.string "You will gather the 8 GYM BADGES and\n"
	.string "head to INDIGO PLATEAU, no cheats, no\l"
	.string "shortcuts with LEGENDARIES{PAUSE 20}…{PAUSE 20} You'll\l"
	.string "use the same POKÉMON that you have been\l"
	.string "training and raising since you joined\l"
	.string "TEAM ROCKET.$"

RocketHideout_8F_Mision_Gimnasios_texto_21:
	.string "ANDRA: But, SIR! I thought TEAM ROCKET\n"
	.string "couldn't challenge GYM LEADERS for the\l"
	.string "BADGES!$"

RocketHideout_8F_Mision_Gimnasios_texto_22:
	.string "GIOVANNI: And that's how it is, ANDRA.\p"
	.string "Your status as a ROCKET falls among the\n"
	.string "cases of TRAINERS without a LICENSE,\l"
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
	.string "You obtained a TRAINER LICENSE from\n"
	.string "GIOVANNI's hands!$"

RocketHideout_8F_Mision_Gimnasios_texto_24:
	.string "Still, of course, they can deny you\n"
	.string "entry for being a ROCKET. What you will\l"
	.string "do is wear our uniform - as a mockery -\l"
	.string "laughing at TEAM ROCKET and ridiculing\l"
	.string "it. Our supposed failure at SILPH will\l"
	.string "fit perfectly with that.$"

RocketHideout_8F_Mision_Gimnasios_texto_25:
	.string "ANDRA: They will smell something fishy,\n"
	.string "and LT. SURGE{PAUSE 15}…{PAUSE 15} he has already\l"
	.string "seen us several times.$"

RocketHideout_8F_Mision_Gimnasios_texto_26:
	.string "GIOVANNI: LT. SURGE believes that no\n"
	.string "one has a chance against LANCE, and\l"
	.string "moreover, his military code will prevent\l"
	.string "him from denying {PLAYER} a battle,\l"
	.string "once he is in front of him.$"

RocketHideout_8F_Mision_Gimnasios_texto_27:
	.string "BLUE, do you know how many BADGES RED\n"
	.string "has right now?$"

RocketHideout_8F_Mision_Gimnasios_texto_28:
	.string "BLUE: I think 6. After SILPH, he went\n"
	.string "straight to the SAFFRON GYM. Right now,\l"
	.string "he must be close to CINNABAR GYM.$"

RocketHideout_8F_Mision_Gimnasios_texto_29:
	.string "GIOVANNI: Mmm{PAUSE 20}…{PAUSE 20} There's no time to\n"
	.string "waste. Your top priority should be\l"
	.string "winning those 7 GYM BADGES as soon as\l"
	.string "possible. As for you, BLUE, since you're\l"
	.string "missing one, I think there's a solution\l"
	.string "for that…$"

RocketHideout_8F_Mision_Gimnasios_texto_30:
	.string "-GIOVANNI GAVE BLUE THE EARTH BADGE!-$"

RocketHideout_8F_Mision_Gimnasios_texto_31:
	.string "BLUE: A{PAUSE 20}-{PAUSE 20}Are you the last GYM LEADER?!$"

RocketHideout_8F_Mision_Gimnasios_texto_32:
	.string "GIOVANNI: Sometimes yes, sometimes no,\n"
	.string "it depends on when it's convenient,\l"
	.string "and now, indeed, it is.$"

RocketHideout_8F_Mision_Gimnasios_texto_33:
	.string "BLUE: Excuse me, but I need to prepare\n"
	.string "thoroughly for the POKÉMON LEAGUE.\l"
	.string "I won't disappoint you, GIOVANNI!$"

RocketHideout_8F_Mision_Gimnasios_texto_34:
	.string "ANDRA, {PLAYER}, show how far a\n"
	.string "dedicated, disciplined, and committed\l"
	.string "ROCKET can go with their POKÉMON.\p"
	.string "Defeat all the KANTO GYM LEADERS, and I\n"
	.string "will give you the last BADGE, just like\l"
	.string "I did with BLUE.$"

RocketHideout_8F_Mision_Gimnasios_texto_35:
	.string "ANDRA: I can't wait anymore!\p"
	.string "GYM LEADERS are going to fall like flies!\p"
	.string "Finally, I'll be able to face the\n"
	.string "supposed ELITE of the region!$"

RocketHideout_8F_Mision_Gimnasios_texto_36:
	.string "GIOVANNI: Only a real TRAINER would\n"
	.string "react like this. She doesn't see the\l"
	.string "LEAGUE restrictions as a problem but as\l"
	.string "an opportunity that will force her to\l"
	.string "improve much more.$"

RocketHideout_8F_Mision_Gimnasios_texto_36.1:
	.string "{PLAYER}{PAUSE 15}…{PAUSE 15} I hope you also face this\n"
	.string "challenge with the same enthusiasm.\p"
	.string "GYM LEADERS adjust their power based\n"
	.string "on who they have in front of them. BLUE\l"
	.string "and RED are protected by OAK and, as\l"
	.string "such, have certain privileges.$"

RocketHideout_8F_Mision_Gimnasios_texto_36.2:
	.string "Including being able to compete in the\n"
	.string "POKÉMON LEAGUE without a LICENSE, and\l"
	.string "facing somewhat weakened GYM LEADERS.\p"
	.string "But I don't want that for you.$"

RocketHideout_8F_Mision_Gimnasios_texto_37:
	.string "Since you obtained your starter, you\n"
	.string "have faced all kinds of difficulties.\l"
	.string "Everything you have, you have obtained\l"
	.string "through your own merits; you know the\l"
	.string "true face of this region, and you have\l"
	.string "been forced to adapt to it.$"

RocketHideout_8F_Mision_Gimnasios_texto_37.1:
	.string "That{PAUSE 15}…{PAUSE 15} overall{PAUSE 15}…{PAUSE 15} will give\n"
	.string "you some kind of strtength that can't\l"
	.string "be bought, ¡go and show it to KANTO!$"

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
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_16:
walk_down
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_17:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_1.4:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Subterraneo_Silph::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1.4
waitmovement 0x0
waitse
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_6 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_17 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_85
delay 15
setvar VAR_UNUSED_0x40F7, 102
release
end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4.1:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Text_1:
.string "GIOVANNI: Oh, {PLAYER}!\p"
.string "You look a bit changed!\p"
	.string "I wouldn't say you've exactly been\n"
	.string "taking it easy on your vacation.\p"
	.string "Am I wrong?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2:
	.string "First and foremost, I must give you\n"
	.string "some unfortunate news: OAK has\l"
	.string "completely vanished from the map.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2.1:
	.string "After the POKÉMON LEAGUE, we agreed to\n"
	.string "confine him to his laboratory in PALLET\l"
	.string "TOWN, but he has found a way to\l"
	.string "disappear.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2.2:
	.string "The thing is{PAUSE 15}…{PAUSE 15} we suspect he might be\n"
	.string "scheming something with BLAINE, the\l"
	.string "other traitor who, curiously, has also\l"
	.string "vanished.\p"
	.string "Meanwhile, FUJI is still under arrest…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_3:
	.string "But I haven't brought back my top\n"
	.string "ROCKET to talk about OAK. The task I'm\l"
	.string "about to assign you is much more\l"
	.string "transcendental for the history of\l"
	.string "our region. Listen…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4:
	.string "For as long as anyone can remember,\n"
	.string "KANTO citizens with open minds, those\l"
	.string "who've looked beyond the original 150,\l"
	.string "who've known about other regions, like\l"
	.string "JOHTO or HOENN, asked about{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4.1:
	.string "Why isn't here, in KANTO, a POKÉMON with\n"
	.string "the characteristics of HO-OH, GROUDON,\l"
	.string "or RAYQUAZA? Each region has, at least,\l"
	.string "one 'MAJOR LEGENDARY', except for\l"
	.string "KANTO, which is quite peculiar…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4.2:
	.string "Each region has, at least, one\n"
	.string "'MAJOR LEGENDARY', except for\l"
	.string "KANTO, which is quite peculiar…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5:
	.string "Several theories emerged trying to\n"
	.string "answer this question. Some scientists\l"
	.string "and researchers claimed it was MEW.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5.1:
	.string "However, we can't group MEW with\n"
	.string "RAYQUAZA or LUGIA. It aligns more with\l"
	.string "the profile of JIRACHI in HOENN or…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_6:
.string "PROTON: {PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_7:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}CELEBI in JOHTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8:
	.string "Some argued that KANTO just didn't\n"
	.string "have one single MAJOR LEGENDARY.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.1:
	.string "Then, DRAGONITE and MEW would be the\n"
	.string "top power here.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.2:
	.string "After all, KANTO's history might not\n"
	.string "have provided the conditions for a\l"
	.string "LUGIA or HO-OH to develop here. In that\l"
	.string "sense, it might be a matter of mere\l"
	.string "chance, natural selection.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.3:
	.string "If this were the case, it would be a\n"
	.string "curious coincidence, but{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_9:
	.string "One last group of researchers points\n"
	.string "out that such a POKÉMON would, indeed,\l"
	.string "exist; the only reason we don't know\l"
	.string "about it's precisely that: we haven't\l"
	.string "found it yet.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10:
	.string "This last theory breaks down\n"
	.string "into two others.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10.1:
	.string "One says we don't know about this\n"
	.string "POKÉMON because of its elusive nature.$"
	
RocketHideout8F_Mision_Subterraneo_Silph_Text_10.2:
	.string "The other claims its power is so great\n"
	.string "that it exceeds even the 'MAJOR\l"
	.string "LEGENDARIES' ones, so powerful that it\l"
	.string "would be able to become invisible to\l"
	.string "human eyes.\p"
	.string "Maybe it's both, or none{PAUSE 20}…{PAUSE 20} I don't know.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_11:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12:
    .string "This topic has always intrigued me,\n"
	.string "{PLAYER}. The existence of such a\l"
	.string "POKÉMON could reshape our perception\l"
	.string "of KANTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12.1:
	.string "Due to our main goal: saving KANTO\n"
	.string "from LANCE, and the lack of information\l"
	.string "about this, we paused the research.\p"
	.string "But now it's time to kickstart this\n"
	.string "investigation.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_13:
	.string "Since SILPH became our ally, I've had\n"
	.string "the opportunity to meet several times\l"
	.string "with the PRESIDENT.\p"
	.string "The thing is, in our last meeting,\n"
	.string "this topic came up, and…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_14:
	.string "SILPH actually has a huge private\n"
	.string "library in their lower floors, off-limits\l"
	.string "to the public. SILPH isn't just KANTO's\l"
	.string "most successful company, but also one\l"
	.string "of the oldest. In that private library,\l"
	.string "there are some documents talking about\l"
	.string "the existence of a POKÉMON that could\l"
	.string "fit with what we're looking for.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_15:
	.string "Your mission is quite simple,\n"
	.string "{PLAYER}: you just have to return to\l"
	.string "SILPH and speak with the receptionist\l"
	.string "to get access to the lower floors.\p"
	.string "Thus you could reach those potentially\n"
	.string "revealing documents.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_16:
	.string "It's not just me; SILPH PRESIDENT was\n"
	.string "excited about your return to SILPH.\l"
	.string "In that sense, you won't encounter\l"
	.string "any opposition.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_17:
	.string "GIOVANNI: Alright, {PLAYER},\n"
	.string "remember, the SILPH receptionist will\l"
	.string "get you into the lower floors.\l"
	.string "Send my regards to the PRESIDENT for me,\l"
	.string "if you get to see him.\p"
	.string "That's all!$"

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
delay_16
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
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5
waitmovement 0x0
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_676
setflag FLAG_HOENN_675
clearflag FLAG_HOENN_70
clearflag FLAG_HOENN_71
setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
clearflag FLAG_HOENN_81
clearflag FLAG_HOENN_82
setvar VAR_UNUSED_0x40F8, 11
setvar VAR_UNUSED_0x40F7, 107
release
end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3.1:
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1:
	.string "GIOVANNI: And? What information\n"
	.string "did you uncover, {PLAYER}?$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2:
.string "Mmm{PAUSE 25}…{PAUSE 25}\p"
	.string "So{PAUSE 20}…{PAUSE 20} From what you're\n"
	.string "telling me, the text you read doesn't\l"
	.string "even question the existence of that\l"
	.string "POKÉMON; it takes it for granted.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3:
.string "But{PAUSE 25}…{PAUSE 25}\p"
	.string "Where?\p"
	.string "The POKÉMON TOWER is the only notable\n"
	.string "place, but we've explored every inch\l"
	.string "of it.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4:
	.string "Perhaps{PAUSE 20}…{PAUSE 20} It's one of those places\n"
	.string "impossible to access, except for those\l"
	.string "who already know where it is. If that\l"
	.string "were the case, we would remain without\l"
	.string "knowing the truth.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5:
.string "{PLAYER}!\p"
	.string "We must explore every option!\p"
	.string "I can't send tons of ROCKET GRUNTs\n"
	.string "to comb through every corner of\l"
	.string "LAVENDER TOWN, just to looking for\l"
	.string "some ancient hidden passage; that\l"
	.string "would raise too many suspicions.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6:
	.string "However, with only those present here\n"
	.string "knowing about this, you can discreetly\l"
	.string "be the one to investigate it.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6.1:
	.string "You'll go after something that has\n"
	.string "gone unnoticed for countless\l"
	.string "generations, after a mirage, {PLAYER}.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8:
	.string "That concludes it, {PLAYER}.\p"
	.string "Keep this in mind; every step you take\n"
	.string "could add new pages to the recent\l"
	.string "history of KANTO. Perhaps{PAUSE 25}…{PAUSE 25} we'll\l"
	.string "uncover something that should have been\l"
	.string "known a long time ago.$"

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
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4:
walk_slow_right
delay_16
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
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.1
waitmovement 0x0
waitse
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 109
release
end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1:
	.string "GIOVANNI: Did you find anything,\n"
	.string "{PLAYER}?$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2:
	.string "An incredible story, incredible{PAUSE 20}…{PAUSE 20} Who\n"
	.string "would have thought that such a place is\l"
	.string "right beneath LAVENDER TOWN? It was\l"
	.string "real after all; if that place is real,\l"
	.string "the POKÉMON must be real too.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3:
	.string "And the cult LEADER expressly asked\n"
	.string "you to keep secret the way to summon\l"
	.string "such a POKEMON. Except for the very top\l"
	.string "KANTO TRAINERS{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5:
	.string "I guess he meant OAK and me. There's\n"
	.string "definitely a lot we still don't know.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.1:
	.string "The fact of having MEW, missed since we\n"
	.string "created MEWTWO{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.2:
	.string "That's the reason TEAM ROCKET was\n"
	.string "founded for, to unlock the ultimate\l"
	.string "limits of the world. And that's why we\l"
	.string "are now going to NAVEL ROCK.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6:
	.string "ARCHER has been busy in the SEVII\n"
	.string "ISLANDS, finding and logging all the\l"
	.string "alternative routes connecting the\l"
	.string "islands.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7:
	.string "Theoretically, there are 7 islands,\n"
	.string "hence the name 'SEVII'.\l"
	.string "However, actually we could count 10\l"
	.string "substantial landmasses.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.1:
	.string "'EIGHT ISLAND' is south of TWO ISLAND.\p"
	.string "'NINE ISLAND' is east of SEVEN ISLAND.\p"
	.string "'TEN ISLAND' is northwest of ONE ISLAND.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.2:
	.string "This 'TEN ISLAND' is called NAVEL ROCK.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8:
	.string "LUGIA and HO-OH have power on par with\n"
	.string "MEWTWO. Our emergency plan to save\l"
	.string "KANTO after MEWTWO's escape was to\l"
	.string "locate these two POKÉMON.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.1:
	.string "However, as happened to LANCE,\n"
	.string "we were not able to do it.\p"
	.string "After the POKÉMON LEAGUE, ARCHER\n"
	.string "sent me a report about this new\l"
	.string "discovery.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.2:
	.string "A tenth island, just in the center of\n"
	.string "the 7, covered by strong tides and\l"
	.string "hiding an unexplored cave.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9:
	.string "I can't think on another place where\n"
	.string "these two beasts, last seen decades\l"
	.string "ago, could be.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10:
.string "{PLAYER}!\p"
	.string "NAVEL ROCK is relatively close to\n"
	.string "FIVE ISLAND; however, the currents\l"
	.string "between them are the strongest of\l"
	.string "all the SEVEN ISLANDS.\l"
	.string "It would be too risky to attempt\l"
	.string "to pass through there, fortunately{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11:
	.string "ARCHER discovered an alternative\n"
	.string "route, starting from the TWO ISLAND\l"
	.string "port. It's longer, but the currents are\l"
	.string "less treacherous.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11.1:
	.string "We'll go through that way.\p"
	.string "Don't worry about the caution sign;\n"
	.string "it's more of a precaution to avoid\l"
	.string "trouble than an indication of real\l"
	.string "danger.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12:
	.string "I'll wait you there, {PLAYER}.\p"
	.string "This time, it's me who's gonna\n"
	.string "join you on this mission.$"

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
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4:
walk_slow_right
delay_16
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
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2.1 MSGBOX_AUTOCLOSE
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
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_6.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
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
delay 20
addobject 2
addobject 10
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
setvar VAR_UNUSED_0x40F8, 27
setvar VAR_UNUSED_0x40F7, 113
release
end

RocketHideout8F_Mision_Mansion_Oak_Move_6.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Mansion_Oak_Text_1:
.string "ANDRA: SIR, that's the whole story.$"

RocketHideout8F_Mision_Mansion_Oak_Text_2:
	.string "GIOVANNI: Excellent job, ANDRA. Both\n"
	.string "you and {PLAYER} have done a great\l"
	.string "job. Now we know that the relic was part\l"
	.string "of DEOXYS, and with both OAK and BLAINE\l"
	.string "under control, KANTO can finally reach\l"
	.string "the peace. We don't know what those lab\l"
	.string "maniacs are up to.$"
	
RocketHideout8F_Mision_Mansion_Oak_Text_2.1:
	.string "And{PAUSE 25}…{PAUSE 25} once both OAK and BLAINE are\n"
	.string "under control, KANTO will finally be\l"
	.string "able to reach the peace. But…\p"
	.string "We don't know what those two are up to.$"

RocketHideout8F_Mision_Mansion_Oak_Text_3:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout8F_Mision_Mansion_Oak_Text_4:
	.string "EXECUTIVE PROTON, ADMIN. ANDRA, I need\n"
	.string "to speak privately with {PLAYER}.\p"
	.string "Step outside for a moment.$"

RocketHideout8F_Mision_Mansion_Oak_Text_5:
	.string "GIOVANNI: So, OAK has challenged you to\n"
	.string "go alone to the POKÉMON MANSION{PAUSE 15}…{PAUSE 15}$"

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
	.string "recovered MEWTWO, too.$"

RocketHideout8F_Mision_Mansion_Oak_Text_8.1:
	.string "If that's indeed the case, and they\n"
	.string "decide to use it as they please, the\l"
	.string "entire region is in serious danger.$"

RocketHideout8F_Mision_Mansion_Oak_Text_9:
	.string "However, in TEAM ROCKET, we take both\n"
	.string "honor and loyalty very seriously. If OAK\l"
	.string "has personally challenged you, and you\l"
	.string "believe you should go on your own, you\l"
	.string "should do so…$"

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
	.string "Just like ARCHER made sure both you and\n"
	.string "ANDRA were ready for the POKÉMON\l"
	.string "LEAGUE, now it's time for the\l"
	.string "ultimate challenge.$"

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
	.string "all the ROCKET EXECUTIVEs in here. We\l"
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

RocketHideout8F_Mision_Johto_move_9.1:
face_left
delay_8
delay_16
face_down
step_end


RocketHideout8F_Mision_Johto::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setflag FLAG_NUEVA_292
addobject 1
addobject 10
removeobject 2
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
delay 50
hidemoneybox
msgbox RocketHideout8F_Mision_Johto_Text_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Johto_Text_6 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_7
waitmovement 0x0
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_10 MSGBOX_DEFAULT
givemon SPECIES_RAIKOU, 70, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_11 MSGBOX_DEFAULT
givemon SPECIES_ENTEI, 70, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_12 MSGBOX_DEFAULT
givemon SPECIES_SUICUNE, 70, ITEM_LUM_BERRY
waitfanfare
msgbox RocketHideout8F_Mision_Johto_Text_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_15 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_16 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_21 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_22 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
waitse
applymovement 1, RocketHideout8F_Mision_Johto_move_9.1
waitmovement 0x0
delay 10
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
setflag FLAG_HOENN_672
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
	.string "but before that{PAUSE 15}…{PAUSE 15} Here are your rewards.$"

RocketHideout8F_Mision_Johto_Text_3:
	.string "YOU JUST INVOICED ¥1,500,000!!$"

RocketHideout8F_Mision_Johto_Text_4:
.string "GIOVANNI: {PAUSE 25}…{PAUSE 25}$"

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
.string "OAK arrested, LANCE stranded{PAUSE 15}…{PAUSE 15} KANTO is\n"
	.string "totally under our control, finally we\l"
	.string "will be able to bring back all the\l"
	.string "splendor the region had before war,\l"
	.string "that will require just time, which is why\l"
	.string "your destinies are far away from here.$"

RocketHideout8F_Mision_Johto_Text_16:
.string "ANDRA: Where will we go, SIR?$"

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
	.string "ANCESTRAL POKÉMON, ANDRA, which is\l"
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
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_8:
walk_slow_up
delay_16
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
delay_16
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
delay_8
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
delay 10
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.3
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
playse SE_EXIT
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 168
release
end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.2:
delay_16
face_left
delay_16
face_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.3:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1:
	.string "GIOVANNI: As I told you, ANDRA, the\n"
	.string "RUINS OF ALPH must be under strict\l"
	.string "vigilance, as of now.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2:
	.string "GIOVANNI: Do you realize the kind of\n"
	.string "POKÉMON you've just faced? Our\l"
	.string "scientists have estimated it to have\l"
	.string "190 BASE SPECIAL ATTACK-far\l"
	.string "outstripping that of the highest\l"
	.string "recorded, DEOXYS' 180. Together with\l"
	.string "its other STATs, it achieves a total of\l"
	.string "660. There isn't a shred of doubt this\l"
	.string "POKÉMON surpasses even LEGENDARY\l"
	.string "POKÉMON like LUGIA and HO-OH in\l"
	.string "numbers. The limits of conventional\l"
	.string "POKÉMON have just been shattered, and\l"
	.string "the information from this POKÉMON will\l"
	.string "allow us to further perfect the\l"
	.string "SPECIAL ATTACK of newer MEWTWO\l"
	.string "prototypes. Perhaps, we'll even surpass\l"
	.string "that BASE of 190 too.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3:
	.string "But we're not here for that. I've\n"
	.string "already briefed ANDRA and asked her to\l"
	.string "be keen to any peculiar activities in\l"
	.string "the RUINS OF ALPH.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4:
	.string "We don't know that TRAINER's aims, but\n"
	.string "whatever he's after must be in there.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5:
	.string "However, we still need information. This\n"
	.string "is where I need your help, {PLAYER}.\l"
	.string "You must pay a visit to that cult in\l"
	.string "LAVENDER TOWN again and explain the\l"
	.string "situation to the LEADER. Perhaps he'll\l"
	.string "know what to do.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6:
	.string "That's all for now. ARCHER and I are\n"
	.string "really busy with all the stuff that we\l"
	.string "discussed back in GOLDENROD, although\l"
	.string "we won't hesitate to intervene if\l"
	.string "necessary. I'll be eager to hear about\l"
	.string "you.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7:
.string "ANDRA: SIR, yes, SIR!$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8:
.string "No me dijiste que ese tipo contaba\n"
	.string "con KYOGRE, GROUDON y RAYQUAZA.\l"
	.string "¿De verdad enfrentaste a los tres\l"
	.string "LEGENDARIOS de HOENN a la vez?\p"
	.string "Ten mucho cuidado, he estudiado su\n"
	.string "mitología, y la leyenda habla de\l"
	.string "FORMAS PRIMIGENIAS aún más poderosas.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8.1:
	.string "Así es, las que de verdad crearon\n"
	.string "la tierra y el mar.\p"
	.string "No sé si ese tipo querrá comprobar la\n"
	.string "veracidad de esa leyenda, pero tenlo\l"
	.string "en cuenta.$"

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
waitse
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_4
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
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
delay 20
hidemoneybox
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_LUGIA, 90, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_HO_OH, 90, ITEM_LUM_BERRY
waitfanfare
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_4
waitmovement 0x0
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_9
waitmovement 0x0
delay 10
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
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_29 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setflag FLAG_HOENN_108
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_NUEVA_292
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
	.string "Do you want to go to your office in\n"
	.string "JOHTO to see the documents regarding\l"
	.string "the new missions?$"

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
	.string "GIOVANNI: {PLAYER}! You're\n"
	.string "extraordinary, you defeated the three\l"
	.string "most powerful POKÉMON of all time!\p"
	.string "Do you understand the reason for your\n"
	.string "victory? The moment the immortality of\l"
	.string "such POKÉMON was subject to the rules\l"
	.string "governing POKÉMON battles between two\l"
	.string "TRAINERS, their powers ceased to be\l"
	.string "infinite and, therefore, vulnerable.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_2:
	.string "That TRAINER tried to use them as\n"
	.string "conventional POKÉMON, and that's where\l"
	.string "they lost their essence.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_3:
	.string "However, only a TRAINER who has\n"
	.string "reached an unparalleled state of\l"
	.string "balance with their team could defeat\l"
	.string "them even in a POKÉMON battle. You were\l"
	.string "the only one who could do it,\l"
	.string "{PLAYER}…$"

RocketHideout_8F_Mision_Lago_Furia_Texto_6:
	.string "As is customary, after each major\n"
	.string "event, I gather you all here to assess\l"
	.string "everything{PAUSE 25}…{PAUSE 25} and to look to the future.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_7:
.string "Before anything else, your rewards.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_8:
.string "YOU JUST EARNED ¥2,000,000!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_9:
	.string "And not only that, thanks to all the\n"
	.string "commotion caused by ZEUS, and the\l"
	.string "entry to RUINS OF ALPH, we were able to\l"
	.string "extract the DNA of LUGIA and HO-OH,\l"
	.string "not their primordial forms, but the ones\l"
	.string "known by JOHTO's culture.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_10:
	.string "ANDRA finds it dishonorable to use this\n"
	.string "kind of POKÉMON, so only you will\l"
	.string "receive cloned specimens, {PLAYER}.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_11:
.string "YOU OBTAINED A LV.60 LUGIA!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_12:
.string "YOU OBTAINED A LV.60 HO-OH!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_13:
	.string "ANDRA: Don't think I won't know how to\n"
	.string "deal with them if you use them against\l"
	.string "me, {PLAYER}. I've already defeated\l"
	.string "the golden HO-OH, a form even more\l"
	.string "powerful than those clones, don't\l"
	.string "forget!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_14:
	.string "GIOVANNI: Alright, now let's talk about\n"
	.string "your future missions.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_15:
	.string "{PLAYER} did an excellent job\n"
	.string "gathering information about the DEEP\l"
	.string "BONDS of JOHTO. All this information has\l"
	.string "served our SCIENTISTS to optimize and\l"
	.string "further expand the power of future\l"
	.string "prototypes, just as MEWTWO once was.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_16:
	.string "However, JOHTO is much more than its\n"
	.string "TOWNS and CITIES; unlike KANTO, it has\l"
	.string "many places yet to be explored$"

RocketHideout_8F_Mision_Lago_Furia_Texto_17:
	.string "We have strong suspicions that these\n"
	.string "places hide unique POKÉMON, whose data\l"
	.string "could continue to provide fundamental\l"
	.string "information for our research.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_18:
	.string "The opening of the station connecting\n"
	.string "GOLDENROD with SAFFRON, and the\l"
	.string "demolition of POKÉMON TOWER, are\l"
	.string "approaching, but while awaiting these\l"
	.string "events, your mission will be to continue\l"
	.string "expanding what we know about POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_19:
	.string "Therefore, I'll give you something you\n"
	.string "should have had a long time ago.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_20:
.string "YOU OBTAINED A POKEDEX!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_21:
	.string "Courtesy of OAK, thanks to his\n"
	.string "invention, not only will the information\l"
	.string "of every new POKÉMON you encounter be\l"
	.string "sent to our database, it will also be\l"
	.string "recorded for your own use. You'll even\l"
	.string "be able to see the BASE STATs if you\l"
	.string "manage to catch the POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_22:
	.string "ANDRA: So this is what that spoiled\n"
	.string "brat RED used, I know several\l"
	.string "POKÉMANIACS who would give everything\l"
	.string "they have for an artifact like this. We\l"
	.string "will give it the best possible use, right,\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_23:
	.string "Does that mean I'm not returning to\n"
	.string "HOENN, SIR?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_24:
	.string "GIOVANNI: That's right, ANDRA, for now\n"
	.string "you will stay in JOHTO and perform the\l"
	.string "same task that {PLAYER} has been\l"
	.string "doing. Both of you are the strongest\l"
	.string "TRAINERS in the entire organization, and\l"
	.string "a mission like this, where you could\l"
	.string "face anything, requires the highest\l"
	.string "possible preparation.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_25:
.string "ANDRA: And where should we start?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_26:
	.string "GIOVANNI: I have left documents for\n"
	.string "you, with a detailed explanation of\l"
	.string "each of the missions you will undertake,\l"
	.string "in your respective offices. Don't worry,\l"
	.string "ANDRA, there is already a teleportation\l"
	.string "connection with the BASE in HOENN.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_27:
	.string "The order in which you decide to tackle\n"
	.string "them is up to you, though I would like\l"
	.string "you to delve as deeply as possible into\l"
	.string "each one. Once you've researched\l"
	.string "enough, return to my office.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_28:
.string "ANDRA: Cool, let's explore JOHTO!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_29:
	.string "Did you hear that, {PLAYER}? The most\n"
	.string "remote places of JOHTO await us. What\l"
	.string "mysteries will be waiting for us?$"

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
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
waitse
delay 10
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
delay 10
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
delay 10
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_10
waitmovement 0x0
delay 10
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
delay_16
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
	.string "ANDRA: Hah! I knew you were going to\n"
	.string "appear soon, {PLAYER}! I just\l"
	.string "completed my missions too!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_2:
	.string "GIOVANNI: Our database has gathered\n"
	.string "valuable information from your\l"
	.string "expeditions, but I would like to hear\l"
	.string "from you. Tell me all the details…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_3:
	.string "I see{PAUSE 15}…{PAUSE 15} So JOHTO has several species\n"
	.string "believed to be extinct, and they\l"
	.string "inhabit that great paradise known as\l"
	.string "the west zone of CIANWOOD.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4:
	.string "It's not surprising; there are only 100\n"
	.string "original species cataloged in JOHTO, a\l"
	.string "very small number compared to the 151\l"
	.string "in KANTO or the 135 in HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1:
	.string "On the other hand, that SACRED DRAGON…\n"
	.string "ANDRA has already told me how her\l"
	.string "URSARING evolved thanks to the GOLDEN\l"
	.string "STONE.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2:
	.string "The number of POKÉMON it can react to\n"
	.string "is quite a mystery. I'll send ARCHER to\l"
	.string "that place to investigate and find one.\l"
	.string "Then, our top scientists will try to\l"
	.string "reproduce that sacred object so we can\l"
	.string "commercialize it among the best ROCKET\l"
	.string "members.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3:
	.string "ANDRA: Oh…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_5:
	.string "GIOVANNI: As for that guy EUSINE, don't\n"
	.string "worry, {PLAYER}. I'll send someone to\l"
	.string "find him. Everything he's seen and\l"
	.string "experienced in that pagoda will be of\l"
	.string "enormous use to our investigations.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_6:
	.string "What really worries me is your mission\n"
	.string "at the LAKE OF RAGE, {PLAYER}.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_7:
	.string "The result has been outstanding, and\n"
	.string "the POKÉMON found there, are\l"
	.string "exceptional. But those SCIENTISTS{PAUSE 15}…\l"
	.string "they don't work for us, they seem to\l"
	.string "pursue similar objectives to ours.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_8:
	.string "ANDRA: I also encountered scientists\n"
	.string "like that in HOENN, in the midst of\l"
	.string "searching for the REGIS…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_9:
	.string "GIOVANNI: As I expected, everything\n"
	.string "points to DEVON C.O.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_10:
.string "ANDRA: DEVON?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_11:
	.string "GIOVANNI: OAK and BLAINE contacted\n"
	.string "them in the past, before {PLAYER}\l"
	.string "defeated them. Thanks to that, they\l"
	.string "obtained the necessary funding to\l"
	.string "clone MEWTWO again and resurrect\l"
	.string "DEOXYS.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_12:
.string "ANDRA: And{PAUSE 15}…?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_13:
	.string "GIOVANNI: And DEVON agreed, with the\n"
	.string "condition of providing all the material\l"
	.string "related to DEOXYS. Fortunately, they\l"
	.string "didn't say a word about MEWTWO.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_14:
.string "Maybe is too soon, but{PAUSE 15}…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_15:
	.string "{PLAYER}! I want you to go with ANDRA\n"
	.string "to our HOENN branch, and she'll give you\l"
	.string "a general overview of the region.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_16:
	.string "The demolition of LAVENDER TOWN'S\n"
	.string "TOWER is imminent; Meanwhile, there's\l"
	.string "nothing holding you here, and our HOENN\l"
	.string "BASE is the only one you haven't visited\l"
	.string "yet.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_17:
	.string "Once LAVENDER TOWN'S TOWER is\n"
	.string "demolished, construction will begin at\l"
	.string "record speed on the new RADIO TOWER. In\l"
	.string "the meantime, I inform you that the II\l"
	.string "GRAND MEETING IN GOLDENROD CITY is\l"
	.string "scheduled soon.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_18:
	.string "ANDRA: Wow! Now that KANTO and JOHTO\n"
	.string "are about to achieve the unity\l"
	.string "proposed in the I GRAND MEETING…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_19:
	.string "GIOVANNI: We have everything to make\n"
	.string "the KANTO-JOHTO duo into a global\l"
	.string "power of the POKÉMON WORLD.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_20:
.string "ANDRA: Sounds{PAUSE 25}…{PAUSE 15} shocking.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_21:
	.string "GIOVANNI: And it will be, you'll see when\n"
	.string "you see what there is to show, but for\l"
	.string "now{PAUSE 25}…{PAUSE 15} You have at your disposal the\l"
	.string "teleportation that sends you to HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_22:
	.string "I hope you guide {PLAYER} correctly\n"
	.string "through HOENN, stay attentive to my\l"
	.string "call.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_23:
	.string "ANDRA: Don't worry, SIR. {PLAYER} won't\n"
	.string "waste any time there, I'm sure!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_24:
	.string "I'll wait for you at the entrance to the\n"
	.string "HOENN base; I'll be your tour guide!$"

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
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_1.1
waitmovement 0x0
waitse
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Neo_Canela_Move_6
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_8.1
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_8.2
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8.3
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
delay 20
removeobject 7
removeobject 8
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 191
release
end

RocketHideout_8F_Mision_Neo_Canela_Move_8.1:
delay_8
face_right
delay_16
face_down
delay_16
face_right
delay_16
delay_16
delay_16
face_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_8.2:
walk_in_place_left
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_8.3:
face_left
delay_16
delay_8
walk_left
delay_16
walk_in_place_left
delay_8
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


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

RocketHideout_8F_Mision_Neo_Canela_Move_1.1:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_1:
walk_up
walk_up
walk_up
walk_up
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Texto_1:
	.string "????: I was able to escape at the last\n"
	.string "moment, due to the TELEPORT of my\l"
	.string "MAGMORTAR.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_2:
	.string "GIOVANNI: {PLAYER}, your absence\n"
	.string "from KANTO-JOHTO has prevented you\l"
	.string "from finding out, but the phenomenon\l"
	.string "has been felt in both regions: the\l"
	.string "volcano on CINNABAR ISLAND has\l"
	.string "erupted, engulfing everything in its\l"
	.string "path.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_3:
	.string "BLAINE: The LABORATORY{PAUSE 25}…{PAUSE 25} the POKÉMON\n"
	.string "MANSION{PAUSE 25}…{PAUSE 25} the GYM{PAUSE 25}…{PAUSE 25} now everything lies\l"
	.string "at the bottom of the sea{PAUSE 15}…$"

RocketHideout_8F_Mision_Neo_Canela_Texto_4:
	.string "OAK: The issue is that, after the I\n"
	.string "GOLDENROD CONFERENCE, we continued\l"
	.string "our investigations there. A very\l"
	.string "important part of our recent projects\l"
	.string "is now lost, dozens of meters\l"
	.string "underground.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_5:
	.string "BLAINE: Fortunately, the most\n"
	.string "important underground areas were made\l"
	.string "to withstand any natural disaster.\l"
	.string "After {PLAYER} defeated us, we built\l"
	.string "many more underground floors; they are\l"
	.string "like an underground bunker.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_6:
	.string "GIOVANNI: So there's still a chance\n"
	.string "that it is not destroyed yet.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_7:
	.string "OAK: We must verify it; you know as well\n"
	.string "as I do, the valuable information we\l"
	.string "keep there.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_8:
	.string "BLAINE: However, not anyone can go; the\n"
	.string "eruption may have unleashed all the\l"
	.string "prototypes we had there in the testing\l"
	.string "phase.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_9:
	.string "GIOVANNI: We agree, the most suitable\n"
	.string "person to carry out this mission is\l"
	.string "{PLAYER}. They have more than enough\l"
	.string "experience in this kind of situations.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_10:
	.string "OAK: That's right, I'll be waiting for\n"
	.string "you on CINNABAR ISLAND, {PLAYER}.\l"
	.string "There, I'll tell you exactly what you\l"
	.string "need to do.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_11:
	.string "BLAINE: It's a relief to have a TRAINER\n"
	.string "like you on our side; I hope you can\l"
	.string "recover as much as possible from this\l"
	.string "catastrophe.$"

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
delay 20
hidemoneybox
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_5 MSGBOX_DEFAULT
givemon SPECIES_SILVALLY, 90, ITEM_NONE
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
delay 10
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
clearflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
clearflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
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
	.string "-{PLAYER} gave the HARD DRIVE\n"
	.string "to GIOVANNI!-$"

RocketHideout_8F_Mision_Central_Energia_Texto_2:
	.string "GIOVANNI: I knew you wouldn't\n"
	.string "disappoint, {PLAYER}. There's no\l"
	.string "reward that can compare to the\l"
	.string "information you've just brought back.\l"
	.string "There are millions invested in research\l"
	.string "here, so it's only appropriate to give\l"
	.string "you some of them.$"

RocketHideout_8F_Mision_Central_Energia_Texto_3:
	.string "-{PLAYER} JUST EARNED ¥2,000,000!-$"

RocketHideout_8F_Mision_Central_Energia_Texto_4:
	.string "Take this as well, it's a project that\n"
	.string "comes from a distant region, some of\l"
	.string "our best scientists have made contact\l"
	.string "with it.$"

RocketHideout_8F_Mision_Central_Energia_Texto_5:
.string "YOU OBTAINED A LV.70 SILVALLY!!$"

RocketHideout_8F_Mision_Central_Energia_Texto_6:
	.string "It seems it can change its type\n"
	.string "depending on the object it is holding\l"
	.string "it. Inside the top floors of KANTO\l"
	.string "RADIO TOWER, they will be sold, very\l"
	.string "soon you will be able to enter,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Central_Energia_Texto_7:
	.string "Returning to the issue of CINNABAR\n"
	.string "ISLAND{PAUSE 25}…{PAUSE 15} I would appreciate it if you\l"
	.string "didn't speak with anyone about\l"
	.string "whatever you may have seen there, not\l"
	.string "even with ANDRA.$"

RocketHideout_8F_Mision_Central_Energia_Texto_8:
	.string "Many of the prototypes we left there\n"
	.string "are in the testing phase, they are\l"
	.string "volatile and still need to get better.\l"
	.string "However, you must have felt the\l"
	.string "tremendous potential of some of them.$"

RocketHideout_8F_Mision_Central_Energia_Texto_9:
	.string "Until we are certain we have something\n"
	.string "truly significant, something we can\l"
	.string "control with complete confidence{PAUSE 15}…\l"
	.string "those projects are completely\l"
	.string "confidential, do you understand\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Central_Energia_Texto_10:
	.string "Now, let's talk about your next mission:\n"
	.string "finish the issue about the roads to\l"
	.string "SAFFRON CITY.$"

RocketHideout_8F_Mision_Central_Energia_Texto_11:
	.string "It seems that strange POKÉMON has\n"
	.string "returned, and it's interfering with the\l"
	.string "final phase of the construction.$"

RocketHideout_8F_Mision_Central_Energia_Texto_12:
	.string "I'm afraid there's no choice but to\n"
	.string "capture it so it definitively doesn't\l"
	.string "cause any more problems.$"

RocketHideout_8F_Mision_Central_Energia_Texto_13:
	.string "So, your mission will be, on the eve of\n"
	.string "the II GRAND MEETING in GOLDENROD, to\l"
	.string "take charge of that POKÉMON.$"

RocketHideout_8F_Mision_Central_Energia_Texto_14:
	.string "I'll be heading to GOLDENROD now; I have\n"
	.string "to organize the preparations for the\l"
	.string "meeting with the DIRECTOR.$"

RocketHideout_8F_Mision_Central_Energia_Texto_15:
	.string "It's time to start reaping the rewards\n"
	.string "of our work, {PLAYER}. In a very short\l"
	.string "time, we're witnessing significant\l"
	.string "transformations in both regions, the\l"
	.string "same ones that have been brewing for a\l"
	.string "year now, since the I GRAND MEETING or\l"
	.string "even before.$"



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
givemon SPECIES_MEWTWO, 100, ITEM_MEWTWONITE_Y
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
	.string "GIOVANNI: {PLAYER}! ARCHER and I\n"
	.string "should have been there. Tell me\l"
	.string "everything. What happened to ANDRA?$"

RocketHideout_8F_Final_DLC_Texto_2:
	.string "I understand. We should have realized\n"
	.string "that the atmosphere and role of DEVON\l"
	.string "were very appealing to someone like\l"
	.string "BILL's assistant. I suppose he was\l"
	.string "right; we never paid him enough\l"
	.string "attention.$"

RocketHideout_8F_Final_DLC_Texto_3:
	.string "As for ANDRA{PAUSE 15}…{PAUSE 15} perhaps it's for the best\n"
	.string "this way. After all, her quest may lead\l"
	.string "to a discovery more significant than all\l"
	.string "the research we're conducting{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_4:
	.string "Meanwhile, DEVON has taken action.\n"
	.string "Nevertheless, this doesn't affect our\l"
	.string "plans, even though they are privy to\l"
	.string "everything discussed at the II GRAND\l"
	.string "MEETING.$"

RocketHideout_8F_Final_DLC_Texto_5:
	.string "With ANDRA's absence, our base in HOENN\n"
	.string "has been left without a LEADER, and you\l"
	.string "will be in charge. After the events at\l"
	.string "the RUINS OF ALPH, all the LEGENDARY\l"
	.string "POKÉMON that gathered there returned\l"
	.string "to their original locations. This means\l"
	.string "that the THREE LEGENDARY POKÉMON of\l"
	.string "HOENN: KYOGRE, GROUDON and RAYQUAZA,\l"
	.string "will be there. One of your objectives\l"
	.string "will be to find them in order to study\l"
	.string "them. However{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_6:
	.string "Your main objective will be to gather as\n"
	.string "much information as possible about\l"
	.string "DEVON.$"

RocketHideout_8F_Final_DLC_Texto_7:
	.string "Where it operates, where its research\n"
	.string "laboratories are located, what its\l"
	.string "projects and ambitions are{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_8:
	.string "OAK came just before you; he was the\n"
	.string "one to inform me initially.$"

RocketHideout_8F_Final_DLC_Texto_9:
	.string "He personally confronted his PRESIDENT\n"
	.string "and was defeated. This occurred while\l"
	.string "the EXECUTIVEs restrained BILL, ANDRA\l"
	.string "and ELM.$"

RocketHideout_8F_Final_DLC_Texto_10:
	.string "There's no doubt they have resources\n"
	.string "and are well-versed in the art of\l"
	.string "POKÉMON combat.$"

RocketHideout_8F_Final_DLC_Texto_11:
	.string "Perhaps they can push you to your\n"
	.string "limits more than in the RUINS OF ALPH,\l"
	.string "who knows.$"

RocketHideout_8F_Final_DLC_Texto_12:
	.string "That's why, {PLAYER}, I want to test\n"
	.string "you again, this time using our most\l"
	.string "advanced projects.$"

RocketHideout_8F_Final_DLC_Texto_13:
	.string "Now, face the full power of the\n"
	.string "technology developed by two regions!$"

RocketHideout_8F_Final_DLC_Texto_14:
.string "Really amazing, you are still on the top.$"

RocketHideout_8F_Final_DLC_Texto_15:
	.string "There's no doubt, you are the most\n"
	.string "valuable asset that TEAM ROCKET\l"
	.string "possesses. Your story as a LEGENDARY\l"
	.string "TRAINER still has much to offer, trust\l"
	.string "me.$"

RocketHideout_8F_Final_DLC_Texto_16:
	.string "I want you to have this. I know you\n"
	.string "won't resort to it as a cure-all that\l"
	.string "will solve everything, as we tried in the\l"
	.string "past, but consider it as another option.$"

RocketHideout_8F_Final_DLC_Texto_17:
.string "YOU OBTAINED A MEWTWO AT LV.100!!$"

RocketHideout_8F_Final_DLC_Texto_18:
.string "The original MEWTWO is yours, {PLAYER}.$"

RocketHideout_8F_Final_DLC_Texto_19:
	.string "Of course, it is equipped with the\n"
	.string "latest in technology: the MEGA STONE\l"
	.string "that transforms it into its Y form. As I\l"
	.string "mentioned in the meeting, the\l"
	.string "&-VOLCARONA you faced was crucial in\l"
	.string "boosting its SPECIAL ATTACK to\l"
	.string "stratospheric levels.$"

RocketHideout_8F_Final_DLC_Texto_20:
	.string "That's all, {PLAYER}. I recommend\n"
	.string "exploring and gradually adapting to\l"
	.string "HOENN. DEVON's headquarters are in\l"
	.string "RUSTBORO CITY, however, we don't know\l"
	.string "if that's their main operational center.$"

RocketHideout_8F_Final_DLC_Texto_21:
	.string "Meanwhile, we are still developing the\n"
	.string "prototypes of level II and{PAUSE 35}…{PAUSE 35} III. Until\l"
	.string "then{PAUSE 15}…{PAUSE 15} keep improving.$"

