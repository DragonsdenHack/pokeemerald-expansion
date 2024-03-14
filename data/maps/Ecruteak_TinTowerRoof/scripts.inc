Ecruteak_TinTowerRoof_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Ecruteak_TinTowerRoof_OnFrame
	.byte 0

Ecruteak_TinTowerRoof_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 178, Ecruteak_TinTowerRoof_Final
	.2byte 0


Ecruteak_TinTowerRoof_Zeus::
lockall
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_1
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_2
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_3
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JADEN, Ecruteak_TinTowerRoof_Zeus_Texto_5
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_7 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
addobject 1
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_5
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_5
waitmovement 0x0
delay 30
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_6.1
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_7
waitmovement 0x0
delay 40
setvar VAR_TEMP_1, 1
special SpawnCameraObject
setvar VAR_0x8004, 4  @ num loops
setvar VAR_0x8005, 35 @ delay
applymovement 1, NavelRock_Top_Movement_HoOhAppear
applymovement 1, LugiaBattle_Move_1
applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
waitmovement 0
setvar VAR_0x8004, 4  @ num loops
	setvar VAR_0x8005, 35 @ delay
	special LoopWingFlapSE
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
	applymovement 1, NavelRock_Top_Movement_HoOhApproach
	waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_3
applymovement 1, LugiaBattle_Move_2
waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_4
waitmovement 0
special RemoveCameraObject
delay 40
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_8 MSGBOX_AUTOCLOSE
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_9 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_10 MSGBOX_AUTOCLOSE
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_11 MSGBOX_AUTOCLOSE
delay 30
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 1, Ecruteak_TinTowerRoof_Zeus_Move_12
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_12 MSGBOX_AUTOCLOSE
delay 30
playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_14
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_14
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Zeus_Move_15
waitmovement 0x0
special RemoveCameraObject
delay 30
fadescreen 1
playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
waitmoncry
addobject 3
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_13 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Zeus_Move_16
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_16
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_1
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
playse SE_BALL
addobject 6
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
removeobject 6
delay 15
clearflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
addobject 4
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_14 MSGBOX_AUTOCLOSE
waitmoncry
playse SE_PIN
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_17
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_15 MSGBOX_AUTOCLOSE
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_14 MSGBOX_AUTOCLOSE
waitmoncry
fadescreen 1
delay 15
playse SE_M_ROCK_THROW
waitse
playse SE_SUPER_EFFECTIVE
waitse
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
removeobject 1
delay 15
setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
removeobject 4
delay 10
addobject 5
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
fadescreen 0
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_18
waitmovement 0x0
delay 15
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
removeobject 5
delay 15
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_19
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_20
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_16 MSGBOX_AUTOCLOSE
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_1
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_17 MSGBOX_AUTOCLOSE
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_19 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Zeus_Move_21
waitmovement 0x0
special RemoveCameraObject
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_22
waitmovement 0x0
delay 15
playse SE_USE_ITEM
special HealPlayerParty
delay 20
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_20 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_3, Ecruteak_TinTowerRoof_Zeus_Texto_21
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_22 MSGBOX_AUTOCLOSE
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_21
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_23 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 3
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
playse SE_M_FLY
delay 15
fadescreen 0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_23
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_24
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_25
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_26 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_27 MSGBOX_DEFAULT
givemon SPECIES_FLABEBE, 25, ITEM_NONE
waitfanfare
delay 10
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM60
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_27.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_BADGE
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_27.2 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_28 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setflag FLAG_BADGE12_GET
clearflag FLAG_RECEIVED_SHOAL_SALT_1
setflag FLAG_HIDE_PETALBURG_GYM_WALLY
setvar VAR_UNUSED_0x40FE, 3
setvar VAR_UNUSED_0x40F7, 160
clearflag FLAG_RECEIVED_SHOAL_SALT_3
release
end

Ecruteak_TinTowerRoof_Zeus_Texto_11.2:
.string "{PLAYER} obtained the TM60\n"
	.string "PSYSHOCK from JADEN!!$"

Ecruteak_TinTowerRoof_Zeus_Texto_11.1:
	.string "And this TM also, you will know how to\n"
	.string "take advantage of this.$"

Ecruteak_TinTowerRoof_Zeus_Texto_1:
	.string "????: Come closer, {PLAYER}, I was\n"
	.string "waiting for you.$"

Ecruteak_TinTowerRoof_Zeus_Texto_2:
	.string "ECRUTEAK.M: Once upon a time, this\n"
	.string "place was the nest of HO-OH, the\l"
	.string "highest point in JOHTO along with BRASS\l"
	.string "TOWER, both points of connection for\l"
	.string "the two legends of our region.$"

Ecruteak_TinTowerRoof_Zeus_Texto_3:
	.string "I know what you're seeking; you want to\n"
	.string "battle me to test yourself and your\l"
	.string "POKÉMON. TRAINERS live for battles,\l"
	.string "don't they?, to reach greater heights.\l"
	.string "That's why we're here, and not confined\l"
	.string "to the GYM in ECRUTEAK CITY.$"

Ecruteak_TinTowerRoof_Zeus_Texto_4:
	.string "Here is where I, one of the 2 GRAND\n"
	.string "MASTERS of JOHTO, agree to battle you,\l"
	.string "with the ashes of what once was a\l"
	.string "majestic HO-OH as the ground upon\l"
	.string "which we'll unleash our entire arsenal.\l"
	.string "You'll finally understand JOHTO in all\l"
	.string "its essence!$"

Ecruteak_TinTowerRoof_Zeus_Texto_5:
	.string "The gods have witnessed this fight, do\n"
	.string "not doubt about it.$"

Ecruteak_TinTowerRoof_Zeus_Texto_6:
	.string "I have to thank you, {PLAYER}, your\n"
	.string "unyielding spirit has honored this\l"
	.string "place with a battle for the ages. No,\l"
	.string "AGATHA or ALDER didn't misjudge you…$"

Ecruteak_TinTowerRoof_Zeus_Texto_7:
	.string "I'm truly impressed, the exchange of\n"
	.string "power and energy that occurred here\l"
	.string "has touched perfection, it has even\l"
	.string "been worthy of witnessing from even\l"
	.string "HO-…$"

Ecruteak_TinTowerRoof_Zeus_Texto_8:
.string "It is…\n"
	.string "HO-OH…$"

Ecruteak_TinTowerRoof_Zeus_Texto_9:
.string "Do you get it, {PLAYER}?$"

Ecruteak_TinTowerRoof_Zeus_Texto_10:
	.string "The clash of our POKÉMON has caught\n"
	.string "the attention of HO-OH, it has\l"
	.string "interpreted it as a manifestation of\l"
	.string "the lofty, the eternal. Drawn by this, it\l"
	.string "has returned to BELL TOWER once again.$"

Ecruteak_TinTowerRoof_Zeus_Texto_11:
	.string "This is the proof, {PLAYER}, the proof\n"
	.string "that mortals like us can mingle with the\l"
	.string "greater forces of this world and, along\l"
	.string "with their mortal POKÉMON, ascend to\l"
	.string "the olympus as well.$"

Ecruteak_TinTowerRoof_Zeus_Texto_12:
	.string "I always had my doubts, but now I'm\n"
	.string "sure, with HO-OH in front of me, I can\l"
	.string "perceive the greatness and unique\l"
	.string "potential of each of the POKÉMON on\l"
	.string "thi…$"

Ecruteak_TinTowerRoof_Zeus_Texto_13:
	.string "????: Don't make me laugh, you are not\n"
	.string "more than dust, you and your POKÉMON.$"

Ecruteak_TinTowerRoof_Zeus_Texto_14:
.string "Don!$"

Ecruteak_TinTowerRoof_Zeus_Texto_15:
.string "ZEUS: GROUDON!\n"
	.string "STONE EDGE!$"

Ecruteak_TinTowerRoof_Zeus_Texto_16:
.string "ECRUTEAK.M: You scoundrel! \n"
	.string "How dare you do that\l"
	.string "to something so pure?$"

Ecruteak_TinTowerRoof_Zeus_Texto_17:
	.string "You're just a mercenary who dedicates\n"
	.string "to collecting legendaries by exploiting\l"
	.string "others' talents! How convenient of you\l"
	.string "to appear right after our infernal\l"
	.string "battle! If {PLAYER} or I had our\l"
	.string "POKÉMON fresh, we'd give you a good\l"
	.string "lesson! No matter how many LEGENDARIES\l"
	.string "you use, a rogue like you will never\l"
	.string "connect with that kind of POKÉMON!$"

Ecruteak_TinTowerRoof_Zeus_Texto_18:
	.string "ZEUS: I haven't come all the way here\n"
	.string "for an old geezer from BELL TOWER to\l"
	.string "give me moral lessons.$"

Ecruteak_TinTowerRoof_Zeus_Texto_19:
	.string "I've only come to reclaim what\n"
	.string "rightfully belongs to me, do you think I\l"
	.string "need you, or {PLAYER}, to achieve it?\l"
	.string "Do you really think I need your teams to\l"
	.string "be exhausted? I could crush both of\l"
	.string "you and your POKÉMON at their peak\l"
	.string "without blinking. Want a little\l"
	.string "demonstration? You'll have it.$"

Ecruteak_TinTowerRoof_Zeus_Texto_20:
	.string "The games are over, {PLAYER}. With\n"
	.string "your actions, you have made it clear\l"
	.string "that you interfere with my purpose. You\l"
	.string "leave me no choice but to force myself\l"
	.string "to use 80% of my power. No one will save\l"
	.string "you, the gods that this old man talks\l"
	.string "about... I have those gods!$"

Ecruteak_TinTowerRoof_Zeus_Texto_21:
.string "How is this possible?$"

Ecruteak_TinTowerRoof_Zeus_Texto_22:
.string "ZEUS: This…\n"
	.string "My team is still incomplete, but it\l"
	.string "should be more than enough to crush\l"
	.string "any TRAINER, I don't understand...$"

Ecruteak_TinTowerRoof_Zeus_Texto_23:
.string "No...\n"
	.string "The difference between 80% and 100%\l"
	.string "isn't 20%, it's… everything… An\l"
	.string "unapproachable and undeniable power.\l"
	.string "That's it, now I just need one piece to\l"
	.string "bring it together, and I know who has it.$"

Ecruteak_TinTowerRoof_Zeus_Texto_24:
	.string "ECRUTEAK.M: This is terrible… We need to\n"
	.string "notify the DRAGON MASTER of\l"
	.string "BLACKTHORN CITY. It's only a matter of\l"
	.string "time before that lunatic finds the ice\l"
	.string "path to the hidden city among the\l"
	.string "mountains.$"

Ecruteak_TinTowerRoof_Zeus_Texto_25:
	.string "Oh, {PLAYER}! I have no words! This is\n"
	.string "what I was referring to when HO-OH\l"
	.string "appeared! No matter how much he wants\l"
	.string "to deny it, you've shown him that brute\l"
	.string "power and base stats aren't everything.\l"
	.string "Your mortals POKÉMON can compete\l"
	.string "against the greatest gods of this\l"
	.string "world!$"

Ecruteak_TinTowerRoof_Zeus_Texto_26:
	.string "Here you are, {PLAYER}, I want you to\n"
	.string "have this POKÉMON. I brought it from a\l"
	.string "far region, but it loves the ambience of\l"
	.string "ECRUTEAK CITY.$"

Ecruteak_TinTowerRoof_Zeus_Texto_27:
.string "YOU OBTAINED A LV.25 FLABÉBÉ!!$"

Ecruteak_TinTowerRoof_Zeus_Texto_27.1:
	.string "Also, take this badge as a souvenir.$"

Ecruteak_TinTowerRoof_Zeus_Texto_27.2:
	.string "Here you have\n"
	.string "the FOGBADGE!$"

Ecruteak_TinTowerRoof_Zeus_Texto_28:
	.string "I had a feeling that something\n"
	.string "significant would occur with your\l"
	.string "arrival at BELL TOWER, but this has\l"
	.string "surpassed all expectations. If you'll\l"
	.string "excuse me, I must dispatch a messenger\l"
	.string "to BLACKTHORN CITY. It was a pleasure\l"
	.string "to engage in battle with you here.$"

Ecruteak_TinTowerRoof_Zeus_Move_1:
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_2:
walk_up
walk_up
walk_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_3:
walk_in_place_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_4:
face_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_5:
emote_exclamation_mark
face_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_6:
walk_right
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_6.1:
walk_left
walk_up
walk_up
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_7:
walk_right
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_8:
delay_2
delay_4
walk_in_place_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_9:
walk_up
walk_up
walk_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_10:
delay_2
delay_4
walk_down
walk_down
walk_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_11:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_down
delay_2
delay_4
step_end


Ecruteak_TinTowerRoof_Zeus_Move_12:
walk_in_place_down
delay_2
step_end

Ecruteak_TinTowerRoof_Zeus_Move_13:
face_left
step_end

Ecruteak_TinTowerRoof_Zeus_Move_14:
emote_exclamation_mark
face_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_15:
walk_fast_down
walk_fast_down
walk_fast_left
step_end

Ecruteak_TinTowerRoof_Zeus_Move_16:
walk_up
walk_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_17:
emote_exclamation_mark
step_end

Ecruteak_TinTowerRoof_Zeus_Move_18:
face_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_19:
face_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_20:
walk_fast_left
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_21:
walk_right
step_end

Ecruteak_TinTowerRoof_Zeus_Move_22:
walk_left
walk_in_place_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_23:
face_right
step_end

Ecruteak_TinTowerRoof_Zeus_Move_24:
face_left
step_end

Ecruteak_TinTowerRoof_Zeus_Move_25:
walk_in_place_left
step_end


Ecruteak_TinTowerRoof_Final::
lockall
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
addobject 2
applymovement 2, Ecruteak_TinTowerRoof_Final_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Final_Move_2
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
fadescreen 1
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
addobject 1
fadescreen 0
setvar VAR_0x8004, 3  @ num loops
	setvar VAR_0x8005, 40 @ delay
	special LoopWingFlapSE
applymovement 1, Ecruteak_TinTowerRoof_Final_Move_3
waitmovement 0x0
delay 15
msgbox Ecruteak_TinTowerRoof_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_TinTowerRoof_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Ecruteak_TinTowerRoof_Final_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
playse SE_M_FLY
waitse
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
removeobject 2
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 179
delay 28
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
checkplayergender
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

Ecruteak_TinTowerRoof_Final_Texto_1:
.string "M.JADEN: Once again, you have returned.$"

Ecruteak_TinTowerRoof_Final_Texto_2:
.string "…$"

Ecruteak_TinTowerRoof_Final_Texto_3:
	.string "It seems… JOHTO is in good hands.$"

Ecruteak_TinTowerRoof_Final_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Final_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

Ecruteak_TinTowerRoof_Final_Move_3:
walk_slow_down
walk_in_place_down
walk_in_place_down
walk_in_place_down
walk_in_place_down
delay_4
step_end

Ecruteak_TinTowerRoof_Final_Move_4:
face_down
step_end
