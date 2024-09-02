Route25_BillHouse_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route25_BillHouse_OnFrame
	.byte 0

Route25_BillHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 20, Route25_BillHouse_Evento_Policia
	.2byte 0

Route25BillHouse3::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_3, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_3:
	.string "The only way you'll be leaving\n"
	.string "is in cuffs.$"



Route25BillHouse4::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_4, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_4:
.string "The only way you can leave here is being\n"
	.string "detained.$"



Route25BillHouse5::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_5, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_5:
.string "The only way you can leave here is being\n"
	.string "detained.$"

Route25_BillHouse_Evento_Policia::
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move1
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route25_BillHouse_Evento_Policia_move2
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move3
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route25_BillHouse_Evento_Policia_move4
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_4 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
applymovement 1, Route25_BillHouse_Evento_Policia_move7
waitmovement 0x0
delay 20
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playse SE_EXIT
addobject 5
applymovement 5, Route25_BillHouse_Evento_Policia_move8
waitmovement 0x0
playse SE_PIN
playse MUS_RG_VICTORY_ROAD
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move9
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 4
applymovement 4, Route25_BillHouse_Evento_Policia_move10
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 3
applymovement 3, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
delay 10
applymovement 1, Route25_BillHouse_Evento_Policia_move7
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_5 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move7
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_6 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move11
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 1
playse SE_EXIT
delay 15
applymovement 5, Route25_BillHouse_Evento_Policia_move12
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move13
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, Route25_BillHouse_Evento_Policia_text_8
applymovement 4, Route25_BillHouse_Evento_Policia_move3
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move14
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MARCEL, Route25_BillHouse_Evento_Policia_text_10
applymovement 3, Route25_BillHouse_Evento_Policia_move15
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move16
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALBERTO, Route25_BillHouse_Evento_Policia_text_12
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move16
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_13 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Route25_BillHouse_Evento_Policia_move12
waitmovement 0x0
playse SE_POKENAV_ON
delay 15
msgbox Route25_BillHouse_Evento_Policia_text_14 MSGBOX_AUTOCLOSE
delay 15
playse SE_POKENAV_OFF
applymovement 3, Route25_BillHouse_Evento_Policia_move15
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_15 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 21
release
end

Route25_BillHouse_Evento_Policia_text_1:
	.string "BILL: That SILPH. I'd made myself clear\n"
	.string "when I said I wanted that UP-GRADE for\l"
	.string "my PORYGON. The sooner, the better. I'll\l"
	.string "be the first one in KANTO with a\l"
	.string "PORYGON2, the latest in technology.$"

Route25_BillHouse_Evento_Policia_text_2:
	.string "What kind of joke is this? Get out of my\n"
	.string "house, you ROCKET. I don't do business\l"
	.string "with criminals. Besides, I've got every\l"
	.string "POKÉMON you could offer me.$"

Route25_BillHouse_Evento_Policia_text_3:
.string "…$"

Route25_BillHouse_Evento_Policia_text_4:
	.string "You want my patent for long-distance\n"
	.string "teleportation? Well played, but\l"
	.string "unfortunately for you…$"

Route25_BillHouse_Evento_Policia_text_5:
	.string "The ELITE FOUR government's already\n"
	.string "offered 20-million POKÉ and a license\l"
	.string "to investigate the LEGENDARY BIRDs.\l"
	.string "But your organization's just gotten\l"
	.string "decadent instead. Did you chumps\l"
	.string "seriously think a single ROCKET could\l"
	.string "snap up the intellectual property of\l"
	.string "the great BILL's most superb\l"
	.string "inventions? You're out of your league,\l"
	.string "ROCKET.$"

Route25_BillHouse_Evento_Policia_text_6:
	.string "GUARDs! Sweep up this walking GRIMER. I\n"
	.string "don't want to see it ever again!$"

Route25_BillHouse_Evento_Policia_text_7:
	.string "You're hereby under arrest, ROCKET.\n"
	.string "You'll be sitting in the clank for the\l"
	.string "rest of your days for the attempted\l"
	.string "theft of an essential intellectual\l"
	.string "property of our region. … … Resisting\l"
	.string "arrest? Then we'll judge you to the\l"
	.string "fullest extent of the law!$"

Route25_BillHouse_Evento_Policia_text_8:
.string "You won't beat us all up!$"

Route25_BillHouse_Evento_Policia_text_9:
	.string "Y' know, good behavior might've reduced\n"
	.string "your sentence, pal. Now you'll be\l"
	.string "penalized for resisting authority too!$"

Route25_BillHouse_Evento_Policia_text_10:
.string "I couldn't neither?$"

Route25_BillHouse_Evento_Policia_text_11:
.string "I've seen enough. Justice won't show\n"
	.string "mercy after this play of yours. There\l"
	.string "won't be even a judgment!$"

Route25_BillHouse_Evento_Policia_text_12:
	.string "Three officers beaten at the\n"
	.string "hands of some ROCKET?$"

Route25_BillHouse_Evento_Policia_text_13:
.string "What kind of joke is this? Common\n"
	.string "ROCKETS don't resist this much. You ain't\l"
	.string "getting away with this!$"

Route25_BillHouse_Evento_Policia_text_14:
	.string "Backup requested! I repeat: backup\n"
	.string "requested! A rogue ROCKET's been\l"
	.string "contained in BILL's house for the\l"
	.string "attempted theft of a million-dollar\l"
	.string "patent! We have three men down!\l"
	.string "Reinforcements requested immediately!$"

Route25_BillHouse_Evento_Policia_text_15:
	.string "It's over. Reinforcements will arrive\n"
	.string "soon, and your TEAM's about down. You\l"
	.string "won't be scurrying off. Do whatever you\l"
	.string "like, you'll only be leaving in cuffs.$"

Route25_BillHouse_Evento_Policia_move1:
walk_up
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move2:
emote_exclamation_mark
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move3:
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move4:
emote_exclamation_mark
step_end

Route25_BillHouse_Evento_Policia_move5:
walk_right
walk_right
walk_right
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move6:
face_up
step_end

Route25_BillHouse_Evento_Policia_move7:
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move8:
walk_left
walk_up
walk_in_place_right
step_end

Route25_BillHouse_Evento_Policia_move9:
emote_exclamation_mark
face_down
step_end

Route25_BillHouse_Evento_Policia_move10:
walk_right
walk_up
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move11:
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Route25_BillHouse_Evento_Policia_move12:
walk_in_place_right
step_end

Route25_BillHouse_Evento_Policia_move13:
face_left
step_end

Route25_BillHouse_Evento_Policia_move14:
face_right
step_end

Route25_BillHouse_Evento_Policia_move15:
walk_in_place_up
step_end


Route25_BillHouse_Evento_Policia_move16:
walk_in_place_down
step_end

Route25_BillHouse_Warp_No::
release
end

Route25_BillHouse_Warp::
msgbox Route25_BillHouse_Warp_text_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Warp_move1
waitmovement 0x0
msgbox Route25_BillHouse_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route25_BillHouse_Warp_No
warp MAP_BILL_GARDEN, 6, 47
release
end

Route25_BillHouse_Warp_text_1:
.string "{PAUSE 15}…{PAUSE 15}$"

Route25_BillHouse_Warp_Text_YesNo:
    .string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\l"
    .string "This poster seems to be covering some\l"
	.string "tunnel that leads somewhere else.\l"
	.string "Wanna cross it?$"

Route25_BillHouse_Warp_move1:
emote_exclamation_mark
step_end
