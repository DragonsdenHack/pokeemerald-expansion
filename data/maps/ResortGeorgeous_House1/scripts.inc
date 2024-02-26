ResortGeorgeous_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, ResortGeorgeous_House1_OnFrame
	.byte 0

ResortGeorgeous_House1_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 4, ResortGeorgeous_House1_Consul
	.2byte 0



ResortGeorgeousDocumento_100::
msgbox ResortGeorgeousDocumento_Text_100, MSGBOX_SIGN   
end

ResortGeorgeousDocumento_Text_100:
	.string "POKÉMON JOURNAL\p"
	.string "Special Feature: CINNABAR GYM\n"
	.string "LEADER BLAINE!\p"
	.string "BLAINE is said to remove his dark\n"
	.string "shades only when he is thinking up\l"
	.string "new quiz questions.$"


ResortGeorgeous_House1_Consul::
lockall
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_1.1
waitmovement 0x0
applymovement 1, ResortGeorgeous_House1_Consul_move_1
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_1, MSGBOX_AUTOCLOSE
applymovement 2, ResortGeorgeous_House1_Consul_move_2
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_2, MSGBOX_AUTOCLOSE
applymovement 1, ResortGeorgeous_House1_Consul_move_1
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_3, MSGBOX_AUTOCLOSE
applymovement 1, ResortGeorgeous_House1_Consul_move_3
applymovement 2, ResortGeorgeous_House1_Consul_move_4
waitmovement 0x0
playse SE_PIN
applymovement 1, ResortGeorgeous_House1_Consul_move_5
applymovement 2, ResortGeorgeous_House1_Consul_move_5
msgbox ResortGeorgeous_House1_Text_Consul_4, MSGBOX_AUTOCLOSE
msgbox ResortGeorgeous_House1_Text_Consul_5, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_CONSUL, ResortGeorgeous_House1_Text_Consul_6
delay 5
applymovement 1, CuevaTesoro4_Jefe_Final_Move_9
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_7
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_7, MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare 
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playse SE_DOOR
addobject 3
delay 20
playse SE_DOOR
addobject 4
delay 20
playse SE_PIN
applymovement 3, ResortGeorgeous_House1_Consul_move_8
applymovement 1, ResortGeorgeous_House1_Consul_move_5
applymovement 2, ResortGeorgeous_House1_Consul_move_5
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_7
applymovement 4, ResortGeorgeous_House1_Consul_move_9
msgbox ResortGeorgeous_House1_Text_Consul_8, MSGBOX_AUTOCLOSE
msgbox ResortGeorgeous_House1_Text_Consul_9, MSGBOX_AUTOCLOSE
applymovement 3, ResortGeorgeous_House1_Consul_move_10
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_10, MSGBOX_AUTOCLOSE
applymovement 3, ResortGeorgeous_House1_Consul_move_10
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_11, MSGBOX_AUTOCLOSE
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
clearflag FLAG_HIDE_ROUTE_104_WHITE_HERB_FLORIST
fadescreen 1
playse SE_BALL_THROW
removeobject 1
removeobject 3
removeobject 4
addobject 5
delay 20
fadescreen 0
fadeoutbgm 0
playse MUS_RG_SEVII_45
applymovement 2, ResortGeorgeous_House1_Consul_move_11
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_12
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_12, MSGBOX_AUTOCLOSE
applymovement 2, ResortGeorgeous_House1_Consul_move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 2
setvar VAR_UNUSED_0x40F7, 5
release
end



ResortGeorgeous_House1_Text_Consul_1:
	.string "Did you really think that with such a\n"
	.string "weak team, you could force me to accept\l"
	.string "your terms? I already told ARCHER that\l"
	.string "it can't match the benefits that the\l"
	.string "KANTO GOVERNMENT offers me.$"

ResortGeorgeous_House1_Text_Consul_2:
	.string "ANDRA: I thought we had an agreement.\n"
	.string "Where is your loyalty to TEAM ROCKET?\l"
	.string "Without us, you would never have been\l"
	.string "chosen as CONSUL of this place, and now\l"
	.string "you want to undermine the business\l"
	.string "that granted you this authority.$"

ResortGeorgeous_House1_Text_Consul_3:
	.string "CONSUL: That's right, as you said 'granted\n"
	.string "me' is past. I don't need you anymore, and\l"
	.string "you're just holding me back from my new\l"
	.string "goals. If ARCHER really wants to stop\l"
	.string "me, he can come himself. No other\l"
	.string "pathetic ROCKET can stop my POKÉMON,\l"
	.string "imported from the best breeding\l"
	.string "centers. Now, excuse me, I need to talk\l"
	.string "to the KANTO representative. Hohohoho!$"

ResortGeorgeous_House1_Text_Consul_4:
	.string "ANDRA: {PLAYER}!$"

ResortGeorgeous_House1_Text_Consul_5:
	.string "CONSUL: It seems there was still some\n"
	.string "garbage left to remove; let's put an end\l"
	.string "to this as soon as possible. I hope your\l"
	.string "ZUBAT can entertain my MAREEP more\l"
	.string "than your companion's ZUBAT did!$"

ResortGeorgeous_House1_Text_Consul_6:
	.string "Wait, what? Did my high-class POKÉMON\n"
	.string "just lose to some basic ROCKET GRUNT?$"

ResortGeorgeous_House1_Text_Consul_7:
	.string "This is unreal. You can't mess with my\n"
	.string "career!$"

ResortGeorgeous_House1_Text_Consul_8:
	.string "Game over, CONSUL. You messed up by\n"
	.string "thinking you were the smartest,\l"
	.string "betraying us when it suited you.\l"
	.string "Now, you'll pay for it. A period of\l"
	.string "reflection in the LOST CAVE won't hurt\l"
    .string "you.$"

ResortGeorgeous_House1_Text_Consul_9:
.string "CONSUL: {PAUSE 20}…{PAUSE 20}$"

ResortGeorgeous_House1_Text_Consul_10:
	.string "As for you guys, you can be proud. This\n"
	.string "was serious staff, and you've done a\l"
	.string "good job. ARCHER will be in the\l"
	.string "WAREHOUSE waiting to give you props.$"

ResortGeorgeous_House1_Text_Consul_11:
	.string "Let's go 'CONSUL'!!!$"

ResortGeorgeous_House1_Text_Consul_12:
	.string "ANDRA: {PAUSE 20}…{PAUSE 20}…{PAUSE 20} I'll see you later.$"


ResortGeorgeous_House1_Consul_move_1:
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_1.1:
walk_in_place_up
step_end

ResortGeorgeous_House1_Consul_move_2:
walk_in_place_right
step_end

ResortGeorgeous_House1_Consul_move_3:
walk_down
step_end

ResortGeorgeous_House1_Consul_move_4:
face_down
step_end

ResortGeorgeous_House1_Consul_move_5:
emote_exclamation_mark
step_end

ResortGeorgeous_House1_Consul_move_6:
walk_up
step_end

ResortGeorgeous_House1_Consul_move_7:
face_up
step_end

ResortGeorgeous_House1_Consul_move_8:
walk_left
walk_up
walk_up
face_right
step_end

ResortGeorgeous_House1_Consul_move_9:
walk_right
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_10:
walk_in_place_up
walk_in_place_right
step_end

ResortGeorgeous_House1_Consul_move_11:
walk_slow_down
walk_slow_down
face_right
step_end

ResortGeorgeous_House1_Consul_move_12:
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_13:
walk_slow_down
walk_right
step_end


