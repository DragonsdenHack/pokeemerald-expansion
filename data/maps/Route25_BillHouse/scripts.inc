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
.string "The only way you can leave here is being\n"
	.string "detained.$"



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
.string "BILL: This SILPH, i was clear enough\n"
	.string "when i told them that I wanted the\l"
	.string "UP-GRADE for my PORYGON the sooner the\l"
	.string "better. I'll be the first one in KANTO\l"
	.string "with a PORYGON2, the latest in\l"
	.string "technology.$"

Route25_BillHouse_Evento_Policia_text_2:
.string "What kind of joke is this? Get out of my\n"
	.string "house, you ROCKET. I don't make business\l"
	.string "with criminals, I have every POKÉMON\l"
	.string "that you could offer me.$"

Route25_BillHouse_Evento_Policia_text_3:
.string "...$"

Route25_BillHouse_Evento_Policia_text_4:
.string "Don't you want my patent for long\n"
	.string "distance teleportation? Well played,\l"
	.string "but unlucky for you…$"

Route25_BillHouse_Evento_Policia_text_5:
.string "The ELITE 4 government has already\n"
	.string "offered me 20,000,000 POKÉ and a\l"
	.string "license for investigating LEGENDARY\l"
	.string "BIRDS. Your organization is more\l"
	.string "decadent over time. Were you really\l"
	.string "thinking about a single ROCKET stealing\l"
	.string "from the great BILL the intellectual\l"
	.string "property of his greatest inventions?\l"
	.string "This is too much for you, ROCKET.$"

Route25_BillHouse_Evento_Policia_text_6:
.string "GUARDS! Get rid of this trash pile, I\n"
	.string "don't want to see it ever again!$"

Route25_BillHouse_Evento_Policia_text_7:
.string "You are under arrest, ROCKET. You will\n"
	.string "spend the rest of your days in prison\l"
	.string "for attempting against the\l"
	.string "intellectual property of our region. …{PAUSE 25} …{PAUSE 25}\l"
	.string "Still resisting? Well then, we'll need to\l"
	.string "reduce you by force!$"

Route25_BillHouse_Evento_Policia_text_8:
.string "You can't beat up us all!$"

Route25_BillHouse_Evento_Policia_text_9:
.string "There was the possibility of reducing\n"
	.string "your punishment in case of good\l"
	.string "behavior. Now you'll be sentenced to 2\l"
	.string "live penalties because of resistance\l"
	.string "against authority!$"

Route25_BillHouse_Evento_Policia_text_10:
.string "I couldn't neither?$"

Route25_BillHouse_Evento_Policia_text_11:
.string "I've seen enough. Justice won't show\n"
	.string "mercy after this play of yours. There\l"
	.string "won't be even a judgment!$"

Route25_BillHouse_Evento_Policia_text_12:
.string "3 polices losing against a mere ROCKET?$"

Route25_BillHouse_Evento_Policia_text_13:
.string "What kind of joke is this? Common\n"
	.string "ROCKETS don't resist this much. You ain't\l"
	.string "getting away with this!$"

Route25_BillHouse_Evento_Policia_text_14:
.string "Calling up all units. Repeat. Calling up\n"
	.string "all units of CERULEAN CITY! We have a\l"
	.string "rogue rocket contained in BILL's house,\l"
	.string "he was trying to steal a patent which is\l"
	.string "valued in millions! The 3 of us have\l"
	.string "fallen, we demand reinforcements\l"
	.string "immediately!$"

Route25_BillHouse_Evento_Policia_text_15:
.string "It's over. Our reinforcements are almost\n"
	.string "here and your TEAM is beaten up. We ain't\l"
	.string "letting you get away, do as you want,\l"
	.string "the only way you'll be leaving this house\l"
	.string "is detained.$"

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
.string "...$"

Route25_BillHouse_Warp_Text_YesNo:
    .string "...\n"
	.string "...\l"
    .string "This poster seems to be covering some\l"
	.string "tunnel that leads somewhere else.\l"
	.string "Wanna cross it?$"

Route25_BillHouse_Warp_move1:
emote_exclamation_mark
step_end
