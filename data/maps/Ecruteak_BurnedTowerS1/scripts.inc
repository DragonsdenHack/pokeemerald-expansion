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
delay 15
msgbox Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_21.1 MSGBOX_AUTOCLOSE
delay 15
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
	.string "ZEUS: I'd expected to find something\n"
	.string "truly extraordinary in this place, yet\l"
	.string "the LEGENDARY LUGIA has long since\l"
	.string "vacated this domain and has not once\l"
	.string "graced this ground since.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_4:
	.string "It's stated that HO-OH had rebirthed\n"
	.string "three POKÉMON from an untimely demise\l"
	.string "here by transfiguring them into a trio\l"
	.string "of roaming beasts.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_5:
	.string "Yet nothing is further from the truth.\n"
	.string "Mediocrity is the utmost those three\l"
	.string "POKÉMON could achieve. They're far\l"
	.string "beneath even the lowest thresholds of\l"
	.string "a creator of all. LANCE had believed his\l"
	.string "power through them was almighty, yet he\l"
	.string "was merely another misguided soul.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_6:
	.string "Instead, HO-OH{PAUSE 15}…{PAUSE 15} BELL TOWER{PAUSE 15}…{PAUSE 15} I have a\n"
	.string "feeling it will return. It could sweep\l"
	.string "aside all those SAGES obstructing the\l"
	.string "path to BELLCHIME TRAIL, but it's too\l"
	.string "early to make such a fuss. My destiny is\l"
	.string "different now.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_7:
	.string "I'd considered our brief encounter at\n"
	.string "SPROUT TOWER to be but a mere\l"
	.string "coincidence. Yet that same coincidence\l"
	.string "has joined our paths here as I'd\l"
	.string "attempted to unearth anything\l"
	.string "worthwhile here.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_8:
	.string "I'd already warned I'd strike you down\n"
	.string "should you bar my path. Yet it appears\l"
	.string "you need a reminder of the vast power I\l"
	.string "wield. I suppose half won't do for you,\l"
	.string "no.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_9:
	.string "Let's see what you can do against\n"
	.string "65% of my power.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_10:
	.string "Curiouser and curiouser. Even three\n"
	.string "GREATER LEGENDARIES can't halt your\l"
	.string "advance.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_11:
	.string "I must applaud you, {PLAYER}. You're\n"
	.string "among the handful to call on the\l"
	.string "pinnacle of your six POKÉMON to endure\l"
	.string "the hardship of battle and seize\l"
	.string "victory. Only a singular, decisive strike\l"
	.string "could topple those like you.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_12:
	.string "But that said, you and your POKÉMON\n"
	.string "have hit your potential's ceiling. The\l"
	.string "team I'd displayed here is but chicken\l"
	.string "scratch to what it can achieve once my\l"
	.string "goal's been met.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_13:
	.string "For your own good, I hope there are no\n"
	.string "more coincidences like this one, or\l"
	.string "you'll force me to raise the bar even\l"
	.string "further.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_14:
.string "(ZEUS used ESCAPE ROPE.)$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_15:
	.string "????: Who is the one who has been\n"
	.string "causing all this rampage?$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_16:
	.string "MASTER JAREN. Please stay your hand.\n"
	.string "This TRAINER just defeated the lunatic\l"
	.string "in a battle…$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_17:
	.string "JAREN: Hmmm{PAUSE 15}…{PAUSE 15} You must be {PLAYER}.\n"
	.string "AGATHA has already told me about you.\l"
	.string "On behalf of ECRUTEAK CITY, I thank you\l"
	.string "for what you've done.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_18:
	.string "Your presence at BELL TOWER would be\n"
	.string "greatly appreciated, but your stay will\l"
	.string "need to be extended a little longer.$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_19:
	.string "I am intrigued by your friend ALDER. His\n"
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
	.string "No more talk. BURNED TOWER still stands,\n"
	.string "and the energy of the three wandering\l"
	.string "beasts I'd perceived here remains\l"
	.string "intact!$"

Ecruteak_BurnedTower_S1_Zeus_Combate_Texto_21.1:
	.string "Let's go back to BELL TOWER.$"

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
