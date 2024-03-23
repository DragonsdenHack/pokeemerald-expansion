LavenderTown_FujiHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_FujiHouse_OnFrame
	.byte 0

LavenderTown_FujiHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 77, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji
	.2byte 0

FujiHouse1::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_1, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_1:
.string "Ahhhhh!\n"
.string "Don't hurt me please!$"



FujiHouse2::
end



FujiHouse3::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_3:
	.string "No way, get out of here, ROCKET! If FUJI\n"
	.string "were around, you'd get a taste of your\l"
	.string "own medicine!$"



FujiHouse4::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_4:
	.string "MR.FUJI is not here, and even if he were,\n"
	.string "I highly doubt he would want to receive\l"
	.string "a ROCKET as a guest.$"



FujiHouse5::
end



FujiHouseDocumento_100::
msgbox FujiHouseDocumento_Text_100, MSGBOX_SIGN   
end

FujiHouseDocumento_Text_100:
    .string "POKÉMON FAN MAGAZINE\n"
    .string "Monthly Grand Prize Drawing!\p"
    .string "The application form is…\p"
    .string "Gone! It's been clipped out.\n"
    .string "Someone must have applied already.$"



FujiHouseDocumento_101::
msgbox FujiHouseDocumento_Text_101, MSGBOX_SIGN   
end

FujiHouseDocumento_Text_101:
    .string "POKÉMON magazines line the shelf.\p"
    .string "POKÉMON INSIDER…\p"
    .string "POKÉMON FAN…$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement 7, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_2
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_1 MSGBOX_NPC
delay 10
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_2 MSGBOX_NPC
delay 20
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_3 MSGBOX_NPC
delay 20
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_4 MSGBOX_NPC
applymovement 6, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_3
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_5 MSGBOX_NPC
delay 15
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_6 MSGBOX_NPC
applymovement 6, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_4
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_7 MSGBOX_NPC
applymovement 6, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_3
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_8 MSGBOX_NPC
delay 30
playse SE_DOOR
addobject 8
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
waitse
playse SE_PIN
applymovement 4, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5
applymovement 3, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5
applymovement 1, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5
applymovement 6, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5
applymovement 7, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_9 MSGBOX_NPC
playse MUS_RG_VICTORY_ROAD
applymovement 8, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_6
waitmovement 0x0
playse SE_DOOR
addobject 10
applymovement 10, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_7
waitmovement 0x0
playse SE_DOOR
addobject 9
applymovement 9, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_8
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_10 MSGBOX_NPC
playse SE_BREAKABLE_DOOR
applymovement 7, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_9
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_11 MSGBOX_NPC
applymovement 8, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_6
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_12 MSGBOX_NPC
applymovement 6, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_10
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_13 MSGBOX_NPC
delay 10
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_14 MSGBOX_NPC
playse SE_PIN
applymovement 6, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5
applymovement 7, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_15 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_16 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_17 MSGBOX_NPC
applymovement 8, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_11
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_18 MSGBOX_NPC
playse SE_DOOR
addobject 11
applymovement 11, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_12
waitmovement 0x0
playse SE_DOOR
addobject 14
applymovement 14, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_13
waitmovement 0x0
playse SE_DOOR
addobject 12
applymovement 12, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_14
waitmovement 0x0
playse SE_DOOR
addobject 13
delay 30
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_19 MSGBOX_NPC
applymovement 7, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_9
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_20 MSGBOX_NPC
playmoncry SPECIES_SLOWBRO, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_WARP_IN
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 7
waitse
delay 20
playse SE_PIN
applymovement 14, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5.1
delay 5
applymovement 13, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5.1
delay 5
applymovement 12, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5.1
delay 5
applymovement 11, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5.1
delay 5
applymovement 10, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5.1
delay 5
applymovement 9, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5.1
waitmovement 0x0
delay 10
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_21 MSGBOX_NPC
delay 20
applymovement 8, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_11
waitmovement 0x0
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_22 MSGBOX_NPC
delay 20
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_23 MSGBOX_NPC
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
setvar VAR_UNUSED_0x40F7, 78
warpsilent MAP_CINNABAR_MANSION_S2, 13, 28
release
end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_1:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_down
walk_down
walk_down
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_2:
walk_in_place_left
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_3:
face_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_4:
walk_in_place_right
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5.1:
emote_exclamation_mark
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_5:
emote_exclamation_mark
face_down
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_6:
walk_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_7:
walk_left
walk_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_8:
walk_right
walk_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_9:
walk_in_place_down
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_10:
walk_slow_down
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_11:
walk_in_place_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_12:
walk_left
walk_left
walk_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_13:
walk_right
walk_right
walk_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Move_14:
walk_up
step_end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_1:
	.string "PROTON: That's right, FUJI. Soon, we'll\n"
	.string "have clones of the LEGENDARY BIRDS\l"
	.string "ready to use.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_2:
	.string "FUJI: Even with those sacred POKÉMON,\n"
	.string "it might not be enough. Turns out LANCE\l"
	.string "has some legendary power too,\l"
	.string "according to BLAINE.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_3:
.string "PROTON: …{PAUSE 20}…{PAUSE 20}$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_4:
	.string "With MEWTWO, things would change\n"
	.string "completely.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_5:
	.string "FUJI: After the CINNABAR disaster,\n"
	.string "disappeared completely. Making another\l"
	.string "one is possible, but it would take too\l"
	.string "long, especially without OAK's help.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_6:
	.string "PROTON: That OAK…{PAUSE 25} he might even know\n"
	.string "where it is.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_7:
	.string "FUJI: If anyone has a remote idea, it's\n"
	.string "OAK. We must trust GIOVANNI and his\l"
	.string "expertise to devise plans.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_8:
	.string "I will pray at POKÉMON TOWER for the\n"
	.string "future of KANTO, if all goes w…{PAUSE 10}$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_9:
	.string "????: You'll have plenty of time to pray\n"
	.string "in jail, FUJI.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_10:
	.string "LT. SURGE: Even though it won't be\n"
	.string "needed, KANTO is in good hands already.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_11:
	.string "PROTON: SURGE! What are you doing\n"
	.string "here?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_12:
	.string "LT. SURGE: Well, today's a surprise!\n"
	.string "We've got a top dog from TEAM ROCKET in\l"
	.string "the mix too.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_13:
	.string "FUJI: What do you want?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_14:
	.string "LT. SURGE: You are under arrest for\n"
	.string "collaborating and providing valuable\l"
	.string "information to the criminal\l"
	.string "organization TEAM ROCKET.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_15:
	.string "PROTON: What are you talking about?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_16:
	.string "LT. SURGE: You two will come with me.\n"
	.string "What are you? HIGH RANK? EXECUTIVE?\l"
	.string "We're gonna have some fun in the\l"
	.string "interrogation room.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_17:
	.string "PROTON: We are not going anywhere.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_18:
	.string "LT. SURGE: You guys are mistaken if you\n"
	.string "think you have a choice.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_19:
	.string "You come peacefully or…{PAUSE 10}$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_20:
	.string "PROTON: SLOWBRO! TELEPORT!$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_21:
	.string "LT. SURGE: Damn…{PAUSE 20} a ROCKET with a\n"
	.string "SLOWBRO, probably not even from KANTO.$"


LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_22:
	.string "You won't escape, FUJI. It's a shame\n"
	.string "that the escape rope doesn't work here,\l"
	.string "isn't it?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_23:
.string "FUJI: {PAUSE 20}…{PAUSE 15} …{PAUSE 20}$"
