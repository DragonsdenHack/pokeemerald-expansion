RuinsOfAlph_S5_MapScripts::
	.byte 0

RuinsOfAlph_S5_Final::
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_2
waitmovement 0x0
applymovement 3, RuinsOfAlph_S5_Final_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_5
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
playse SE_BALL
addobject 12
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
removeobject 12
delay 15
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
addobject 10
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 40
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
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
removeobject 10
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 40
playse SE_M_TELEPORT
delay 30
playse SE_RG_POKE_JUMP_SUCCESS
delay 40
playse SE_M_MOONLIGHT
delay 40
playse SE_M_CHARGE
delay 40
playse SE_M_COSMIC_POWER
delay 40
playse SE_BANG
delay 40
playse SE_M_EXPLOSION
delay 40
playse SE_RG_POKE_JUMP_SUCCESS
delay 40
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 4
fadescreen 2
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_5
waitmovement 0x0
special RemoveCameraObject
delay 40
playse MUS_B_PYRAMID_TOP
msgbox RuinsOfAlph_S5_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_9 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_6
applymovement 3, RuinsOfAlph_S5_Final_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_7
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
delay 40
msgbox RuinsOfAlph_S5_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 40
msgbox RuinsOfAlph_S5_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
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
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
delay 15
removeobject 1
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 10
playse SE_THUNDER
delay 20
playse SE_M_FLAMETHROWER
delay 20
playse SE_M_BLIZZARD2
delay 20
playse SE_M_STAT_INCREASE
delay 40
playse SE_M_CHARGE
delay 40
playse SE_M_HYPER_BEAM
delay 40
playse SE_M_HYPER_BEAM2
delay 40
playse SE_M_EXPLOSION
delay 40
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
addobject 2
clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
fadescreen 2
delay 15
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
playse MUS_B_PYRAMID_TOP
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_8
applymovement 3, RuinsOfAlph_S5_Final_Move_8
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
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
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
delay 15
removeobject 7
setflag FLAG_HIDE_ROUTE_119_RIVAL
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 10
playse SE_M_RAZOR_WIND
delay 30
playse SE_RG_POKE_JUMP_SUCCESS
delay 40
playse SE_RG_DEOXYS_MOVE
delay 40
playse SE_M_MOONLIGHT
delay 20
playse SE_M_SOLAR_BEAM
delay 30
playse SE_USE_ITEM
delay 40
delay 15
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
addobject 5
clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
fadescreen 2
delay 15
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
playse MUS_B_PYRAMID_TOP
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_10
applymovement 3, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_11
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
delay 40
msgbox RuinsOfAlph_S5_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 4, RuinsOfAlph_S5_Final_Move_12
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_13
waitmovement 0x0
special RemoveCameraObject
applymovement 3, RuinsOfAlph_S5_Final_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
trainerbattle_no_intro TRAINER_CULTO_3, RuinsOfAlph_S5_Final_Texto_22
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_14
applymovement 3, RuinsOfAlph_S5_Final_Move_14
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_10
applymovement 3, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 55
msgbox RuinsOfAlph_S5_Final_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
delay 20
msgbox RuinsOfAlph_S5_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 20
setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
fadescreen 3
delay 20
playse SE_M_GUST
delay 40
playse SE_M_RAZOR_WIND
delay 40
removeobject 53
playse SE_M_CHARGE
delay 40
playse SE_M_SOLAR_BEAM
delay 40
playse SE_BREAKABLE_DOOR
delay 40
removeobject 3
addobject 12
fadescreen 2
delay 60
playse SE_M_EMBER
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
removeobject 12
delay 40
playse SE_THUNDER
setmetatile 13, 10, 0x334, TRUE
special DrawWholeMapView
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_14
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 177
setflag FLAG_UNUSED_0x26E
clearflag FLAG_UNUSED_0x26F
setflag FLAG_EXPAND_MAX_LEVEL
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
release
end

RuinsOfAlph_S5_Final_Texto_1:
	.string "JONES: Do you have any idea where we\n"
	.string "are, {PLAYER}?$"

RuinsOfAlph_S5_Final_Texto_2:
	.string "That's correct, at this very moment\n"
	.string "we're buried hundreds of yards below\l"
	.string "ECRUTEAK CITY, right between BELL\l"
	.string "TOWER and the misnamed BURNT TOWER,\l"
	.string "once known as BRASS TOWER.$"

RuinsOfAlph_S5_Final_Texto_3:
	.string "As you can see, there are no accidents,\n"
	.string "{PLAYER}, everything has a reason. Do\l"
	.string "you now understand why LUGIA and\l"
	.string "HO-OH were needed to get here?$"

RuinsOfAlph_S5_Final_Texto_4:
	.string "Both towers are 700 years stand on… A\n"
	.string "small fraction compared to the time our\l"
	.string "cult has been in existence. It was here\l"
	.string "that the ESSENCE POKÉMON migrated\l"
	.string "after rejecting our cult.$"

RuinsOfAlph_S5_Final_Texto_5:
.string "But it belongs to KANTO!\n"
	.string "And it will return to KANTO!\l"
	.string "The ESSENCE POKÉMON!$"

RuinsOfAlph_S5_Final_Texto_6:
	.string "Watch closely, {PLAYER}, the greatest\n"
	.string "forces in the universe are about to\l"
	.string "appear!$"

RuinsOfAlph_S5_Final_Texto_7:
.string "MEW!$"

RuinsOfAlph_S5_Final_Texto_8:
	.string "My cult has awaited this for millennia,\n"
	.string "and now I have the honor of not only\l"
	.string "witnessing but also using the ESSENCE\l"
	.string "POKÉMON!$"

RuinsOfAlph_S5_Final_Texto_9:
.string "3…\n"
	.string "Three are the POKÉMON that, together,\l"
	.string "have shaped everything there is, was,\l"
	.string "and will be, with their differences,\l"
	.string "equal in overall power. Of the three, the\l"
	.string "most important is the ESSENCE POKÉMON,\l"
	.string "because thanks to it the other two can\l"
	.string "reclaim their PRIMAL ESSENCE.$"

RuinsOfAlph_S5_Final_Texto_10:
	.string "The ORIGINAL DRAGON represents\n"
	.string "perfect balance, perfection. IT is the\l"
	.string "ancestor of all the dragons, existing\l"
	.string "before the other creator god hatched\l"
	.string "from the egg that gave birth to this\l"
	.string "universe.$"

RuinsOfAlph_S5_Final_Texto_11:
	.string "That fool thought that simply uniting\n"
	.string "the 3 UNOVA DRAGONS would be enough,\l"
	.string "but only the ESSENCE POKÉMON can\l"
	.string "restore it to its original form,\l"
	.string "predating the BIG-GANG.\l"
	.string "Watch!$"

RuinsOfAlph_S5_Final_Texto_12:
	.string "Its offense is incomparable, master of\n"
	.string "the ELEMENTAL TYPES, MEGA RAYQUAZA is\l"
	.string "just a crude lizard compared to it.$"

RuinsOfAlph_S5_Final_Texto_13:
.string "ARCEUS…\n"
	.string "The GOD of our universe, diminished over\l"
	.string "15 trillion years by creating\l"
	.string "everything known, but that's over now.$"

RuinsOfAlph_S5_Final_Texto_14:
	.string "150 is the golden number for the GRAND\n"
	.string "LEGENDARIES; it's only natural that it\l"
	.string "should be the standard for the god of\l"
	.string "gods in this universe!$"

RuinsOfAlph_S5_Final_Texto_15:
	.string "And finally, the ESSENCE POKÉMON,\n"
	.string "intermediary between the other two\l"
	.string "deities, its realm is dark matter, the\l"
	.string "mold from which all creation processes\l"
	.string "must pass. We all are part of IT, that's\l"
	.string "why it's omnipresent, and its only\l"
	.string "defined form is found here, just a few\l"
	.string "meters away from us.$"

RuinsOfAlph_S5_Final_Texto_16:
	.string "LUGIA and HO-OH are the key to reach\n"
	.string "this point, but whoever controls MEW\l"
	.string "will be able to utilize the ESSENCE\l"
	.string "POKÉMON. I'm sorry to have to tell you\l"
	.string "this now, but you wouldn't have\l"
	.string "embarked on this quest in the same way.$"

RuinsOfAlph_S5_Final_Texto_17:
	.string "And now. {PLAYER}… The moment of\n"
	.string "truth has arrived. With the ESSENCE\l"
	.string "POKÉMON, the LAVENDER CULT will finally\l"
	.string "attain that state of perfection, an\l"
	.string "eternal nirvana. You will be the first\l"
	.string "one to experience what it feels like to\l"
	.string "battle against something unattainable.$"

RuinsOfAlph_S5_Final_Texto_18:
.string "...$"

RuinsOfAlph_S5_Final_Texto_19:
	.string "The 3 of them together, united, already\n"
	.string "form the perfect synergy. Adding any\l"
	.string "other POKÉMON to this team of 3 would\l"
	.string "break that perfection. I need nothing\l"
	.string "more than these 3 POKÉMON to crown\l"
	.string "myself as the most powerful TRAINER of\l"
	.string "all time; the rest are light-years\l"
	.string "behind.$"

RuinsOfAlph_S5_Final_Texto_20:
	.string "There's no chance of escape, you're\n"
	.string "just a part of the whole you're about to\l"
	.string "face.$"

RuinsOfAlph_S5_Final_Texto_21:
	.string "I'm sorry, {PLAYER}, you would have\n"
	.string "been a great member of our cult and\l"
	.string "appreciated the ESSENCE POKÉMON, but…\l"
	.string "THE IMMORTALITY IS MINE!!$"

RuinsOfAlph_S5_Final_Texto_22:
	.string "This makes no sense, everything was\n"
	.string "perfect!$"

RuinsOfAlph_S5_Final_Texto_23:
	.string "It can't be, these 3 POKÉMON can only\n"
	.string "defeat each other. Together, they form\l"
	.string "an unbeatable team. What went wrong?$"

RuinsOfAlph_S5_Final_Texto_24:
.string "k4nv%bjs&!$"

RuinsOfAlph_S5_Final_Texto_25:
.string "N…\n"
	.string "Now I get it…\l"
	.string "I was the one who failed…$"

RuinsOfAlph_S5_Final_Texto_26:
.string "I guess… perfection is something\n"
	.string "relative, isn't it, {PLAYER}?$"

RuinsOfAlph_S5_Final_Move_1:
walk_in_place_up
step_end

RuinsOfAlph_S5_Final_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

RuinsOfAlph_S5_Final_Move_3:
face_down
step_end

RuinsOfAlph_S5_Final_Move_4:
walk_in_place_down
step_end

RuinsOfAlph_S5_Final_Move_5:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

RuinsOfAlph_S5_Final_Move_6:
face_left
step_end

RuinsOfAlph_S5_Final_Move_7:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RuinsOfAlph_S5_Final_Move_8:
face_right
step_end

RuinsOfAlph_S5_Final_Move_9:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

RuinsOfAlph_S5_Final_Move_10:
face_up
step_end

RuinsOfAlph_S5_Final_Move_11:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_up
walk_fast_up
walk_fast_up
step_end


RuinsOfAlph_S5_Final_Move_12:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RuinsOfAlph_S5_Final_Move_13:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

RuinsOfAlph_S5_Final_Move_14:
emote_exclamation_mark
step_end


RuinsOfAlph_S5_Combate_Unown::
playse MUS_DUMMY
delay 50
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
applymovement 6, RuinsOfAlph_S5_Combate_Unown_Despierta
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
waitmovement 0x0
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S5_Combate_Unown_Despierta2
waitmovement 0x0
playse SE_BANG
waitse
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_ESENCIA_ZIGARDE, RuinsOfAlph_S5_Combate_Unown_Texto_2
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 6
setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
removeobject 6
playse SE_M_EMBER
msgbox RuinsOfAlph_S5_Combate_Unown_Texto_3 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlph_S5_Combate_Unown_Texto_2:
.string "... ... ... ...$"

RuinsOfAlph_S5_Combate_Unown_Texto_3:
.string "(La energía misteriosa se ha\n"
	.string "esfumado)$"

RuinsOfAlph_S5_Combate_Unown_Despierta2:
walk_in_place_down
delay_4
face_left
step_end


RuinsOfAlph_S5_Combate_Unown_Despierta:
face_down
delay_4
face_up
delay_4
face_left
delay_4
walk_in_place_down
delay_4
walk_in_place_down
delay_4
walk_in_place_up
delay_4
walk_in_place_down
delay_4
walk_in_place_left
delay_4
walk_in_place_left
delay_4
step_end


RuinsOfAlph_S5_Mensaje_Esencia::
lockall
braillemessage RuinsOfAlph_S5_Mensaje_Esencia_Texto_1
delay 40
fadescreenspeed FADE_TO_BLACK, 12
delay 30
warpsilent MAP_RUINS_OF_ALPH_S3, 14, 10
release
end


RuinsOfAlph_S5_Mensaje_Esencia_Texto_1:
brailleformat 5, 0, 25, 19, 8, 3
	.braille "AHORA\n"
	.braille "ERES JOHTO.$"

