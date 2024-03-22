Magma3_MapScripts::
	.byte 0

Magma3_Combate_Magno_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_1
waitmovement 0x0
goto Magma3_Combate_Magno

Magma3_Combate_Magno_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_1.1
waitmovement 0x0
goto Magma3_Combate_Magno

Magma3_Combate_Magno::
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
msgbox Magma3_Combate_Magno_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
waitmovement 0x0
applymovement 1, Magma3_Combate_Magno_Move_4
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_5
waitmovement 0x0
applymovement 1, Magma3_Combate_Magno_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox Magma3_Combate_Magno_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 17, 42, 0
waitfieldeffect FLDEFF_SPARKLE
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
delay 75
addobject 1
waitfanfare
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 2
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
goto Magma3_Combate_Magno_2
delay 150
removeobject LOCALID_GROUDON_SLEEPING
addobject LOCALID_GROUDON
waitstate
delay 60
applymovement 4, MagmaHideout_4F_Movement_GroudonApproach
waitmovement 0
special FadeOutOrbEffect
waitstate
setvar VAR_0x8004, 1  @ vertical pan
setvar VAR_0x8005, 1  @ horizontal pan
setvar VAR_0x8006, 8  @ num shakes
setvar VAR_0x8007, 5  @ shake delay
special ShakeCamera
waitstate
applymovement 4, MagmaHideout_4F_Movement_GroudonExit
waitmovement 0

Magma3_Combate_Magno_2::
special SpawnCameraObject
applymovement 4, TerraCave_End_Movement_GroudonApproach
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 120
playse SE_BALL_THROW
waitse
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
removeobject 4
playse SE_BALL_OPEN
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 5
waitse
delay 15
playse SE_RG_BALL_CLICK
waitse
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 5
delay 15
playse MUS_B_PYRAMID_TOP
msgbox Magma3_Combate_Magno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_11
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_12
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAGNO, Magma3_Combate_Magno_Texto_7
msgbox Magma3_Combate_Magno_Texto_8 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox Magma3_Combate_Magno_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_10
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 3
applymovement 3, Magma3_Combate_Magno_Move_13
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_10 MSGBOX_AUTOCLOSE
msgbox Magma3_Combate_Magno_Texto_11 MSGBOX_AUTOCLOSE
msgbox Magma3_Combate_Magno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 3, Magma3_Combate_Magno_Move_14
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_15
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_FLOETTE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_SUPERSONIC
waitse
applymovement 3, Magma3_Combate_Magno_Move_1
waitmovement 0x0
playse SE_BALL_TRADE
waitse
msgbox Magma3_Combate_Magno_Texto_14 MSGBOX_AUTOCLOSE
playse SE_RG_CARD_FLIP
applymovement 1, Magma3_Combate_Magno_Move_15.1
waitmovement 0x0
delay 20
msgbox Magma3_Combate_Magno_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox Magma3_Combate_Magno_Texto_16 MSGBOX_AUTOCLOSE
msgbox Magma3_Combate_Magno_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
delay 15
applymovement 3, Magma3_Combate_Magno_Move_17
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, Magma3_Combate_Magno_Move_18
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_20 MSGBOX_AUTOCLOSE
applymovement 3, Magma3_Combate_Magno_Move_14
waitmovement 0x0
msgbox Magma3_Combate_Magno_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
fadescreen 1
delay 20
removeobject 3
fadescreen 0
fadeoutbgm 0
playse 0
setvar VAR_UNUSED_0x40F7, 99
release
end

Magma3_Combate_Magno_Move_15.1:
emote_question_mark
step_end

Magma3_Combate_Magno_Texto_1:
	.string "MAXIE: You have waited for GROUDON for\n"
	.string "too long, but finally, I present myself\l"
	.string "as a humble servant of your cause.\l"
	.string "Thanks to the RED ORB, I can control\l"
	.string "you, but fear not, I will do nothing but\l"
	.string "fulfill your will to expand the land.$"

Magma3_Combate_Magno_Texto_2:
	.string "So my loyal ADMIN.TABITHA couldn't stop\n"
	.string "you, you must be an exceptional\l"
	.string "TRAINER. You've definitely earned the\l"
	.string "right to witness something grand.\l"
	.string "Everything is ready. Approach, ROCKET!\l"
	.string "Now!$"

Magma3_Combate_Magno_Texto_3:
	.string "GROUDON rests here, all we need to\n"
	.string "summon him is to make the RED ORB shine\l"
	.string "once more.$"

Magma3_Combate_Magno_Texto_4:
	.string "GROUDON! At last! Now you can finally\n"
	.string "complete the noble task assigned to\l"
	.string "you! There will be enough land for\l"
	.string "everyone, thanks to your power, we can\l"
	.string "perfectly regulate how much is needed\l"
	.string "to add or remove! Once our theories are\l"
	.string "proven, the world will have to admit\l"
	.string "that TEAM MAGMA was right!$"

Magma3_Combate_Magno_Texto_5:
	.string "Regarding you, you have seen enough; I\n"
	.string "hope the spectacle was worth it\l"
	.string "because it will be the last thing you\l"
	.string "see before being crushed by millennia\l"
	.string "of contained power. I warned you when I\l"
	.string "saw you wandering around MT.EMBER.$"

Magma3_Combate_Magno_Texto_6:
	.string "I've been traveling the world for over a\n"
	.string "decade, searching for the best team of\l"
	.string "FIRE and GROUND-type POKÉMON, many\l"
	.string "options, discards, changes{PAUSE 20}…{PAUSE 20} POKÉMON\l"
	.string "that more or less fit the essence of my\l"
	.string "plan. But finally, after so much, I've\l"
	.string "achieved it. I've assembled the perfect\l"
	.string "team to build a better land, and now,\l"
	.string "with GROUDON, the lord of the land,\l"
	.string "leading this team, no one can stop me!$"

Magma3_Combate_Magno_Texto_7:
	.string "Impossible! What is the source of your\n"
	.string "power?$"

Magma3_Combate_Magno_Texto_8:
	.string "B-{PAUSE 20}but{PAUSE 20}…{PAUSE 20} I had everything{PAUSE 20}…{PAUSE 20} G{PAUSE 20}-GROUDON\n"
	.string "was here, in front of me, and has\l"
	.string "displayed the immense power that the\l"
	.string "legend talks about{PAUSE 20}…{PAUSE 20} How could a ROCKET,\l"
	.string "no matter how top ADMIN is, match, and\l"
	.string "even surpass, such power using common\l"
	.string "POKÉMON? It doesn't make sense!$"

Magma3_Combate_Magno_Texto_9:
	.string "????: That's enough, MAXIE, you've gone\n"
	.string "far enough.$"

Magma3_Combate_Magno_Texto_10:
	.string "MAXIE: YOU!$"

Magma3_Combate_Magno_Texto_11:
	.string "ZEUS: Your calculations have proven\n"
	.string "wrong, you should never have come so\l"
	.string "far, although I have to thank you,\l"
	.string "without your obsession with GROUDON,\l"
	.string "you could never have brought me to this\l"
	.string "place.$"

Magma3_Combate_Magno_Texto_12:
	.string "MAXIE: Trinket collector! I won't let\n"
	.string "GROUDON become a mere piece among…!$"

Magma3_Combate_Magno_Texto_13:
	.string "ZEUS:FLOETTE! PSYCHIC!$"

Magma3_Combate_Magno_Texto_14:
	.string "(ZEUS took all of MAXIE's POKÉMON and\n"
	.string "the RED SPHERE).$"

Magma3_Combate_Magno_Texto_15:
.string "MAXIE: {PAUSE 20}…{PAUSE 20}$"

Magma3_Combate_Magno_Texto_16:
	.string "What am I doing here?$"

Magma3_Combate_Magno_Texto_17:
	.string "ZEUS: That's exactly what we're\n"
	.string "wondering too; this cave holds nothing\l"
	.string "significant. Your companions have told\l"
	.string "us about some POKÉMON, named GROUDON,\l"
	.string "and a BLUE ORB that awakens it, but\l"
	.string "that's in HOENN…$"

Magma3_Combate_Magno_Texto_18:
	.string "MAXIE: GROUDON, yes! I must find that\n"
	.string "BLUE SPHERE; there's a lot to do! We're\l"
	.string "going back to HOENN!$"

Magma3_Combate_Magno_Texto_19:
	.string "ZEUS: Don't worry, {PLAYER}, I've only\n"
	.string "erased that part of the memory related\l"
	.string "to the RED ORB and the rest of the\l"
	.string "regions and journeys he has undertaken\l"
	.string "all these years. Now, he is limited to\l"
	.string "HOENN, and that's it. He can never\l"
	.string "assemble a team like the one you just\l"
	.string "saw. It's for the best for everyone,\l"
	.string "even for him. Thanks to his new acquired\l"
	.string "ignorance, he has a clear purpose once\l"
	.string "again, and this time he won't endanger\l"
	.string "anyone, even if he were to acquire the\l"
	.string "BLUE ORB…$"

Magma3_Combate_Magno_Texto_20:
	.string "Once again, you've impressed me,\n"
	.string "{PLAYER}. There's no doubt that you\l"
	.string "know how to battle and bring out the\l"
	.string "maximum potential in your POKÉMON. I'm\l"
	.string "starting to believe that you truly are\l"
	.string "the real CHAMPION of KANTO.$"

Magma3_Combate_Magno_Texto_21:
	.string "ARCHIE is still out there, you said you\n"
	.string "saw him south of SIX ISLAND. After what\l"
	.string "you've done here, I hope to see you in\l"
	.string "action there too. A part of me tells me\l"
	.string "that deep down you enjoy this, anyone\l"
	.string "else would have run away at the moment\l"
	.string "they saw GROUDON, but for you, going\l"
	.string "through these events is part of the\l"
	.string "journey, to keep moving forward, am I\l"
	.string "wrong?$"

Magma3_Combate_Magno_Move_1:
walk_in_place_right
step_end

Magma3_Combate_Magno_Move_1.1:
walk_up
walk_in_place_right
step_end

Magma3_Combate_Magno_Move_2:
walk_right
step_end

Magma3_Combate_Magno_Move_3:
emote_exclamation_mark
step_end

Magma3_Combate_Magno_Move_4:
face_left
step_end

Magma3_Combate_Magno_Move_5:
walk_right
walk_right
face_up
step_end

Magma3_Combate_Magno_Move_6:
face_up
step_end

Magma3_Combate_Magno_Move_7:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Magma3_Combate_Magno_Move_8:
slide_down
step_end

Magma3_Combate_Magno_Move_9:
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

Magma3_Combate_Magno_Move_10:
face_left
step_end

Magma3_Combate_Magno_Move_11:
face_right
step_end

Magma3_Combate_Magno_Move_12:
walk_in_place_left
step_end

Magma3_Combate_Magno_Move_13:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Magma3_Combate_Magno_Move_14:
walk_right
walk_right
step_end

Magma3_Combate_Magno_Move_15:
walk_down
face_up
step_end

Magma3_Combate_Magno_Move_16:
emote_question_mark
step_end

Magma3_Combate_Magno_Move_17:
face_down
step_end

Magma3_Combate_Magno_Move_18:
walk_in_place_down
step_end
