Route5_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route5_House1_OnFrame
	.byte 0

Route5_House1_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 8, Route5_House1_Criador
	.2byte 0

Route5House1_1::
end

Route5_House1_Criador::
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move1.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 1, Route5_House1_Criador_1_move1
applymovement 2, Route5_House1_Criador_1_move1
waitmovement 0x0
msgbox Route5_House1_Criador_1, MSGBOX_AUTOCLOSE
applymovement 2, Route5_House1_Criador_1_move2
waitmovement 0x0
msgbox Route5_House1_Criador_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move3
applymovement 2, Route5_House1_Criador_1_move4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move5
waitmovement 0x0
playse SE_M_VICEGRIP
msgbox Route5_House1_Criador_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move6
waitmovement 0x0
msgbox Route5_House1_Criador_4, MSGBOX_AUTOCLOSE
msgbox Route5_House1_Criador_5, MSGBOX_AUTOCLOSE
msgbox Route5_House1_Criador_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move4
waitmovement 0x0
playse SE_DOOR
msgbox Route5_House1_Criador_7, MSGBOX_AUTOCLOSE
applymovement 1, Route5_House1_Criador_1_move7
waitmovement 0x0
msgbox Route5_House1_Criador_8, MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Route5_House1_Criador_1_move8
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_9, MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 9
release
end

Route5_House1_Criador_1:
.string "POKÉMON BREEDER: Right, you are here,\n"
	.string "you know that this info that I will give\l"
	.string "you two since right now is totally\l"
	.string "confidential, the slightest word about\l"
	.string "this out of ROCKET organization is\l"
	.string "punished by maximum penalty. You are\l"
	.string "already ROCKET so I guess you are\l"
	.string "prepared to accept these conditions.$"

Route5_House1_Criador_2:
    .string "ANDRA: Yes!\n"
	.string "Go ahead!$"

Route5_House1_Criador_3:
    .string "(THE POKÉMON BREEDER BLOCKED THE DOOR\n"
	.string "WITH A LOCK)$"

Route5_House1_Criador_4:
    .string "POKÉMON BREEDER: Well, as you might\n"
	.string "suspect, this is not a normal daycare,\l"
	.string "this is a covert ROCKET BASE, one of\l"
	.string "our many shadow businesses. Basically\l"
	.string "yes, we do what we promise, taking care\l"
	.string "of the trainers' beloved POKÉMON,\l"
	.string "however, the contract does not talk\l"
	.string "about the conditions or the extra\l"
	.string "commission that we charge for it, that\l"
	.string "is, the business here comes from\l"
	.string "pairing those transferred POKÉMON\l"
	.string "that are of the same species to create\l"
	.string "POKÉMON EGGS, that is, our benefits.\l"
	.string "Some of them, such as CLEFAIRY or\l"
	.string "ABRA, are sent to the CASINO, others\l"
	.string "are sold directly on the black market.\l"
	.string "In fact, Your dear CHRONO ISLAND\l"
	.string "CONSUL, without going any further, she\l"
	.string "bought a MEOWTH from an EGG born here.$"

Route5_House1_Criador_5:
    .string "ANDRA: Ingenious! So the CELADON BASE\n"
	.string "isn't the only one that TEAM ROCKET\l"
	.string "runs in this region! I had no idea, it's\l"
	.string "the perfect business!$"

Route5_House1_Criador_6:
    .string "POKÉMON BREEDER: You will discover a\n"
	.string "few more things if you stay here long\l"
	.string "enough, young recruit. For the moment,\l"
	.string "PETREL is waiting for you downstairs in\l"
	.string "his office. To get down, just go to the\l"
	.string "green area at the top left. If you pay\l"
	.string "attention, you'll see a trapdoor that\l"
	.string "blurs with the pavement, that's the\l"
	.string "secret entrance.$"

Route5_House1_Criador_7:
    .string "(POKÉMON BEEDER OPENED THE DOOR\n"
	.string "AGAIN)$"

Route5_House1_Criador_8:
    .string "POKÉMON BREEDER: Now hurry up, some\n"
	.string "clients could arrive soon and there is\l"
	.string "nothing worse for business actually\l"
	.string "that getting mixed with ROCKET. Come\l"
	.string "on!$"

Route5_House1_Criador_9:
    .string "ANDRA: It was true!$"


Route5_House1_Criador_1_move1:
emote_exclamation_mark
face_down
step_end

Route5_House1_Criador_1_move1.1:
face_up
step_end

Route5_House1_Criador_1_move2:
walk_in_place_right
step_end

Route5_House1_Criador_1_move3:
walk_down
walk_down
walk_down
step_end

Route5_House1_Criador_1_move4:
face_down
step_end

Route5_House1_Criador_1_move5:
walk_slow_right
walk_slow_up
walk_in_place_down
step_end

Route5_House1_Criador_1_move6:
face_up
step_end

Route5_House1_Criador_1_move7:
walk_up
walk_up
walk_up
walk_in_place_down
step_end

Route5_House1_Criador_1_move8:
walk_left
walk_left
walk_up
walk_up
walk_left
walk_in_place_down
step_end

Route5_House1_Warp::
msgbox Route5_House1_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route5_House1_Warp_No
warp MAP_ROCKET_HIDEOUT_6F, 1, 27
release
end

Route5_House1_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Warp_move1
release
end

Route5_House1_Warp_Text_YesNo:
.string "There is a trapdoor that appears subtly\n"
	.string "some stairs that lead to an\l"
	.string "underground area Do you wanna enter\l"
	.string "into the ROCKET BASE?$"

Route5_House1_Warp_move1:
walk_slow_right
step_end
