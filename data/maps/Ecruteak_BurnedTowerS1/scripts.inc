Ecruteak_BurnedTowerS1_MapScripts::
	.byte 0

BurnedTowerS1_2::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_2:
.string "We couldn't do anything…$"



BurnedTowerS1_3::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_3:
	.string "If this continues, it will eventually\n"
	.string "collapse what remains of BURNED TOWER.$"



BurnedTowerS1_6::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_6:
.string "That guy……\n"
.string "He has devastated all our\l"
.string "POKÉMON without any effort……$"



BurnedTowerS1_7::
lock     
faceplayer     
msgbox Ecruteak_BurnedTower_Text_7, MSGBOX_DEFAULT
release     
end

Ecruteak_BurnedTower_Text_7:
	.string "I have never seen such brute force.\n"
	.string "Could it be a LEGENDARY from some\l"
	.string "distant region?$"

Ecruteak_BurnedTower_S1_Zeus_Combate::
lockall
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
addobject 4
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_1
waitmovement 0x0
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_2
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_3
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_2 MSGBOX_DEFAULT
waitmoncry
delay 28
delay 15
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
removeobject 4
playse SE_BALL_OPEN
clearflag FLAG_HIDE_ROUTE_110_BIRCH
addobject 1
waitse
delay 15
playse SE_RG_BALL_CLICK
waitse
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_ROUTE_110_BIRCH
removeobject 1
delay 15
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_3 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_5 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_5
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_6 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_6
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7
waitmovement 0x0
special RemoveCameraObject
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_8 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_2, Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_10
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_11 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_12 MSGBOX_AUTOCLOSE
applymovement 8, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_8
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 8
playse SE_WARP_OUT
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_14 MSGBOX_AUTOCLOSE
waitse
delay 10
fadescreen 0
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
addobject 9
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_9
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_10
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.2
waitmovement 0x0
special RemoveCameraObject
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_15 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_16 MSGBOX_AUTOCLOSE
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_11
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_17 MSGBOX_AUTOCLOSE
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_1
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_18 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_19 MSGBOX_AUTOCLOSE
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_20 MSGBOX_AUTOCLOSE
applymovement 9, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_10
waitmovement 0x0
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
setflag FLAG_HIDE_ROUTE_109_MR_BRINEY
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
setflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
fadescreen 1
delay 20
removeobject 3
removeobject 2
removeobject 6
removeobject 7
removeobject 9
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 141
release
end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.1:
walk_up
walk_up
walk_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7.2:
walk_down
walk_down
walk_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_1:
.string "????: You again?$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_2:
.string "Don!$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_3:
	.string "ZEUS: I was expecting to find\n"
	.string "something interesting here, but the\l"
	.string "LEGENDARY LUGIA left this place long\l"
	.string "ago, never to return.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_4:
	.string "Here is where HO-OH saved 3 POKÉMON\n"
	.string "from a cruel fate, turning them into the\l"
	.string "3 wandering beasts.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_5:
	.string "Nothing could be further from the\n"
	.string "truth; the power of those 3 POKÉMON is\l"
	.string "mediocre. They don't even come close to\l"
	.string "reaching the lowest stats of the\l"
	.string "creator of all. LANCE believed he\l"
	.string "wielded great power with them under\l"
	.string "control, but he was merely another\l"
	.string "misguided soul.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_6:
	.string "Instead, HO-OH… BELL TOWER… I have a\n"
	.string "feeling it will return. It could sweep\l"
	.string "aside all those SAGES obstructing the\l"
	.string "path to BELLCHIME TRAIL, but it's too\l"
	.string "early to make such a fuss. My destiny is\l"
	.string "different now.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_7:
	.string "I thought our brief meeting at SPROUT\n"
	.string "TOWER was just a coincidence. Yet, here\l"
	.string "you are again, coincidentally, while I\l"
	.string "was attempting to see if this place\l"
	.string "concealed anything intriguing.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_8:
	.string "I already warned you that I wouldn't\n"
	.string "hesitate to take you down if you are on\l"
	.string "my way. It appears you need a reminder\l"
	.string "of the vast power I wield. 50% wasn't\l"
	.string "enough, was it?$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_9:
	.string "Let's see then, what you can do against\n"
	.string "65% of my power.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_10:
	.string "So, three MAJOR LEGENDARIES aren't\n"
	.string "enough, how interesting.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_11:
	.string "I must applaud you, {PLAYER}, you're\n"
	.string "one of those who brings out the best in\l"
	.string "each of your 6 POKÉMON and clings to\l"
	.string "the battle until you win. People like you\l"
	.string "must be crushed with a single blow\l"
	.string "before you have time to react.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_12:
	.string "Unfortunately for you and your\n"
	.string "POKÉMON, you have reached your limit. My\l"
	.string "team, on the other hand, is not even a\l"
	.string "crude sketch of what it will be when I\l"
	.string "achieve my goal.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_13:
	.string "For your own good, I hope there are no\n"
	.string "more coincidences like this one, or\l"
	.string "you'll force me to raise the bar even\l"
	.string "further.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_14:
.string "(ZEUS used ESCAPE ROPE).$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_15:
	.string "????: Who is the one who has been\n"
	.string "causing all this rampage?$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_16:
	.string "MASTER JAREN, on the contrary, this\n"
	.string "TRAINER just defeated the lunatic in a\l"
	.string "battle...$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_17:
	.string "JAREN: Hmmm… You must be {PLAYER},\n"
	.string "AGATHA has already told me about you.\l"
	.string "On behalf of ECRUTEAK CITY, I thank you\l"
	.string "for what you've done.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_18:
	.string "Your presence at BELL TOWER would be\n"
	.string "greatly appreciated, but your stay will\l"
	.string "need to be extended a little longer.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_19:
	.string "I am intrigued by your friend ALDER, his\n"
	.string "DEEP BOND POKÉMON is so interesting,\l"
	.string "and I will be quite occupied studying it\l"
	.string "in detail.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_20:
	.string "Additionally, the other GRAND MASTER of\n"
	.string "JOHTO will come to visit me soon. I\l"
	.string "promise you, {PLAYER}, that in due\l"
	.string "time, you will be able to see BELL TOWER.\l"
	.string "I will let you know.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_21:
.string "No se hable más.\n"
	.string "¡TORRE QUEMADA sigue en pie, y la\l"
	.string "energía de las 3 bestias errantes,\l"
	.string "que puedo percibir en esta sala,\l"
	.string "intacta!\l"
	.string "Volvamos a TORRE CAMPANA.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_1:
walk_in_place_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_2:
emote_exclamation_mark
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_4:
walk_in_place_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_5:
face_right
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_6:
walk_down
walk_down
walk_down
walk_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_7:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_8:
face_up
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_9:
walk_slow_right
walk_slow_up
walk_slow_right
walk_slow_up
walk_slow_up
walk_in_place_up
face_right
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_10:
face_down
step_end

Ecruteak_BurnedTower_S1_Zeus_Combate_Move_11:
walk_slow_up
walk_in_place_up
step_end
