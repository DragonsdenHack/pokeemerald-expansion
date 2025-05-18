Aqua3_MapScripts::
	.byte 0

Aqua3_Combate_Aquiles_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_1
waitmovement 0x0
goto Aqua3_Combate_Aquiles

Aqua3_Combate_Aquiles_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_1.1
waitmovement 0x0
goto Aqua3_Combate_Aquiles

Aqua3_Combate_Aquiles::
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
msgbox Aqua3_Combate_Aquiles_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, Aqua3_Combate_Aquiles_Move_3
waitmovement 0x0
waitse
applymovement 1, Aqua3_Combate_Aquiles_Move_4
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Aqua3_Combate_Aquiles_Move_3.1
waitmovement 0x0
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Aqua3_Combate_Aquiles_Move_3.2
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_2.3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_5
waitmovement 0x0
applymovement 1, Aqua3_Combate_Aquiles_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_7
waitmovement 0x0
special RemoveCameraObject
playbgm MUS_ENCOUNTER_AQUA, FALSE
msgbox Aqua3_Combate_Aquiles_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_3.2 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 17, 42, 0
waitfieldeffect FLDEFF_SPARKLE
closemessage
setvar VAR_RESULT, 2
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
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
goto Aqua3_Combate_Aquiles_2
delay 150
removeobject LOCALID_KYOGRE_SLEEPING
addobject LOCALID_KYOGRE
addobject 4
waitstate
delay 60
applymovement 4, MagmaHideout_4F_Movement_GroudonApproach
waitmovement 0
special FadeOutOrbEffect
waitstate
setvar VAR_0x8004, 2  @ vertical pan
setvar VAR_0x8005, 2  @ horizontal pan
setvar VAR_0x8006, 8  @ num shakes
setvar VAR_0x8007, 5  @ shake delay
special ShakeCamera
waitstate
applymovement 4, MagmaHideout_4F_Movement_GroudonExit
waitmovement 0

Aqua3_Combate_Aquiles_2::
special SpawnCameraObject
applymovement 4, TerraCave_End_Movement_GroudonApproach
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 120
playse SE_BALL_THROW
waitse
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
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
msgbox Aqua3_Combate_Aquiles_Texto_4 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma3_Combate_Magno_Move_10.1
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma3_Combate_Magno_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_11
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_12
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_6.2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AQUILES, Aqua3_Combate_Aquiles_Texto_7
msgbox Aqua3_Combate_Aquiles_Texto_8 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox Aqua3_Combate_Aquiles_Texto_9 MSGBOX_AUTOCLOSE
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
msgbox Aqua3_Combate_Aquiles_Texto_10 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_11 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_12 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma3_Combate_Magno_Move_3.1
waitmovement 0x0
waitse
msgbox Aqua3_Combate_Aquiles_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Magma3_Combate_Magno_Move_14
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_15
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_FLOETTE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_SUPERSONIC
waitse
applymovement 3, Magma3_Combate_Magno_Move_1
waitmovement 0x0
playse SE_BALL_TRADE
waitse
msgbox Aqua3_Combate_Aquiles_Texto_14 MSGBOX_AUTOCLOSE
playse SE_RG_CARD_FLIP
applymovement 1, Magma3_Combate_Magno_Move_15.1
waitmovement 0x0
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_16 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
delay 15
applymovement 3, Magma3_Combate_Magno_Move_17
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_18
waitmovement 0x0
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_21.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_21.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Aqua3_Combate_Aquiles_Move_4
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_22 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Aqua3_Combate_Aquiles_Move_17
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_24 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_19
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_10
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_6
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_26 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_26.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_26.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Aqua3_Combate_Aquiles_Move_20
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_10
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_21
waitmovement 0x0
delay 15
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_29 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_29.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Aqua3_Combate_Aquiles_Move_22
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 3
fadeoutbgm 0
playse 0
delay 100
playse SE_POKENAV_CALL
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_3
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_30 MSGBOX_AUTOCLOSE
delay 25
playse SE_PC_OFF
waitse
delay 20
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setvar VAR_UNUSED_0x40F7, 101
release
end

Magma3_Combate_Magno_Move_10.1:
walk_in_place_up
step_end

Magma3_Combate_Magno_Move_3.1:
walk_in_place_left
step_end

Aqua3_Combate_Aquiles_Move_3.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

Aqua3_Combate_Aquiles_Move_3.2:
walk_in_place_left
step_end

Aqua3_Combate_Aquiles_Texto_1:
	.string "ARCHIE: Soon, you'll be free, KYOGRE.\p"
	.string "Those who confined you will pay for\n"
	.string "having done such a thing to the one who\l"
	.string "made the proliferation of life possible\l"
	.string "millions of years ago. The sea will\l"
	.string "finally have its creator back.$"

Aqua3_Combate_Aquiles_Texto_2:
.string "Impossible!\p"
	.string "No one from TEAM ROCKET should have\n"
	.string "the level to defeat ADMIN.MATT!$"

Aqua3_Combate_Aquiles_Texto_2.1:
	.string "Perhaps I underestimated you, kid.\n"
	.string "Maybe not all of TEAM ROCKET are as\l"
	.string "the media says after all. You've shown\l"
	.string "great courage and interest in the\l"
	.string "unknown to get this far. With those\l"
	.string "qualities, you'd be a great member of\l"
	.string "our TEAM AQUA.$"

Aqua3_Combate_Aquiles_Texto_2.2:
	.string "Someone like you surely knows how\n"
	.string "to appreciate the spectacle that's\l"
	.string "about to unfold here.\p"
	.string "Come on, ROCKET, walk!$"

Aqua3_Combate_Aquiles_Texto_2.3:
	.string "It's already too late to\n"
	.string "back down; the storm will\l"
	.string "engulf you anyway!$"

Aqua3_Combate_Aquiles_Texto_3:
	.string "KYOGRE sleeps in the depths of this\n"
	.string "small lake. Such a POKÉMON destined to\l"
	.string "rule the oceans…{PAUSE 30} confined to this\l"
	.string "puddle for millennia…{PAUSE 30} is sacrilege that\l"
	.string "I will end right now.$"

Aqua3_Combate_Aquiles_Texto_3.1:
	.string "I will end right now. I just need to make\n"
	.string "the BLUE ORB shine one last time, and\l"
	.string "KYOGRE will make its appearance.$"

Aqua3_Combate_Aquiles_Texto_3.2:
	.string "Watch out, ROCKET! You won't see\n"
	.string "something like this ever again!$"

Aqua3_Combate_Aquiles_Texto_4:
.string "KYOGRE!\p"
	.string "Lord of the seas!\p"
	.string "The world needs your immense power to\n"
	.string "restore balance! With you, the seas\l"
	.string "will regain their original essence!$"

Aqua3_Combate_Aquiles_Texto_4.1:
	.string "Make me worthy to sail under the worst\n"
	.string "storm your fury can unleash!\p"
	.string "My POKÉMON and I are ready!$"

Aqua3_Combate_Aquiles_Texto_5:
.string "Game over, kid.\p"
	.string "It's time for you to face the\n"
	.string "consequences of your actions; courage\l"
	.string "led you to witness KYOGRE's awakening,\l"
	.string "and the thrill of reaching that\l"
	.string "dangerous reward, is what will\l"
	.string "lead to your downfall.$"

Aqua3_Combate_Aquiles_Texto_6:
	.string "I've been through many and very\n"
	.string "dangerous adventures, but all of\l"
	.string "them have made my team better.$"

Aqua3_Combate_Aquiles_Texto_6.1:
	.string "Unlike those GYM LEADERS; MISTY from\n"
	.string "CERULEAN CITY, or JUAN in SOOTOPOLIS,\l"
	.string "my Water-type POKÉMON are made of\l"
	.string "sturdier stuff. They have toughened\l"
	.string "themselves by navigating the roughest\l"
	.string "waters in this world.$"

Aqua3_Combate_Aquiles_Texto_6.2:
	.string "Now, with KYOGRE… all who opposes\n"
	.string "TEAM AQUA will be silenced!!$"

Aqua3_Combate_Aquiles_Texto_7:
	.string "Impossible! Everything was perfect!\n"
	.string "KYOGRE!!$"

Aqua3_Combate_Aquiles_Texto_8:
	.string "What does this mean? KYOGRE was\n"
	.string "performing at full capacity. I've never\l"
	.string "seen aquatic attacks of such power in\l"
	.string "my 20 years of travels. Where did you\l"
	.string "find the strength to deal with this\l"
	.string "ancestral power? My entire plan can't\l"
	.string "fall apart just like that!$"

Aqua3_Combate_Aquiles_Texto_9:
	.string "????: It's already ruined, ARCHIE.\p"
	.string "You'll never be this close to\n"
	.string "controlling KYOGRE again.$"

Aqua3_Combate_Aquiles_Texto_10:
	.string "ARCHIE: YOU!$"

Aqua3_Combate_Aquiles_Texto_11:
	.string "ZEUS: Someone like you can't handle\n"
	.string "such a POKÉMON as if it were a toy. Now\l"
	.string "KYOGRE will be back in the right hands.$"

Aqua3_Combate_Aquiles_Texto_12:
	.string "ARCHIE: The right hands? You don't\n"
	.string "mean yours, do you? Don't make me laugh!\p"
	.string "You know as much about KYOGRE as I do\n"
	.string "about land POKÉMON!$"

Aqua3_Combate_Aquiles_Texto_12.1:
	.string "You're just an opportunist who…!$"

Aqua3_Combate_Aquiles_Texto_13:
	.string "ZEUS: FLOETTE! PSYCHIC!$"

Aqua3_Combate_Aquiles_Texto_14:
	.string "-ZEUS took away all ARCHIE's\n"
	.string "POKÉMON and the BLUE ORB.-$"

Aqua3_Combate_Aquiles_Texto_15:
.string "ARCHIE: {PAUSE 15}…{PAUSE 15}$"

Aqua3_Combate_Aquiles_Texto_16:
.string "W{PAUSE 15}-{PAUSE 15}What am I doing here?$"

Aqua3_Combate_Aquiles_Texto_17:
	.string "ZEUS: That's exactly what we're\n"
	.string "wondering too. This cave doesn't hold\l"
	.string "anything significant. Your companions\l"
	.string "have told us about some POKÉMON named\l"
	.string "KYOGRE and a RED ORB that awakens it,\l"
	.string "but that's in HOENN…{PAUSE 20}$"

Aqua3_Combate_Aquiles_Texto_18:
	.string "ARCHIE: KYOGRE, yes! I must find that\n"
	.string "RED ORB; there's a lot to do!\p"
	.string "We're going back to HOENN!$"

Aqua3_Combate_Aquiles_Texto_19:
	.string "ZEUS: Now, both ARCHIE and MAXIE are\n"
	.string "destined to be incompetent and won't\l"
	.string "pose any threat. Even if they manage to\l"
	.string "recover the orbs, since they are the\l"
	.string "wrong ones, their entire plan would fail\l"
	.string "again.$"

Aqua3_Combate_Aquiles_Texto_20:
.string "{PAUSE 15}…{PAUSE 15}$"

Aqua3_Combate_Aquiles_Texto_21:
	.string "Do you perceive it as unjust that I\n"
	.string "strip away the team they have spent\l"
	.string "decades constructing?$"

Aqua3_Combate_Aquiles_Texto_21.1:
	.string "That's necessary, {PLAYER}. At this\n"
	.string "point, they only know about HOENN.\l"
	.string "What do you anticipate ARCHIE would\l"
	.string "feel upon discovering he possesses a\l"
	.string "POKÉMON named WISHIWASHI?$"

Aqua3_Combate_Aquiles_Texto_21.2:
	.string "Exactly, he'll start making questions,\n"
	.string "and we'll return to the cycle.$"

Aqua3_Combate_Aquiles_Texto_22:
	.string "Either way, both were wrong.$"

Aqua3_Combate_Aquiles_Texto_23:
	.string "More land, more water…{PAUSE 30} What a dumb\n"
	.string "idea. Only the creator of everything\l"
	.string "has the authority to decide about the\l"
	.string "entire planet.$"

Aqua3_Combate_Aquiles_Texto_24:
	.string "Sorry, {PLAYER}, but I didn't give you\n"
	.string "the whole truth. It's true I wanted to\l"
	.string "stop ARCHIE and MAXIE from getting\l"
	.string "KYOGRE and GROUDON…$"
	
Aqua3_Combate_Aquiles_Texto_24.1:
	.string "…but not to lock them away forever.$"

Aqua3_Combate_Aquiles_Texto_25:
	.string "ARCHIE and MAXIE thought they were\n"
	.string "chasing the most powerful POKÉMON in\l"
	.string "this world. KYOGRE and GROUDON are\l"
	.string "indeed very powerful. You've had a\l"
	.string "chance to see it. But…{PAUSE 30}$"

Aqua3_Combate_Aquiles_Texto_26:
	.string "Their powers are nothing compared to\n"
	.string "the creator of everything.$"

Aqua3_Combate_Aquiles_Texto_26.1:
	.string "KYOGRE and GROUDON, along with RAYQUAZA,\n"
	.string "are KEY POKÉMON that, when combined,\l"
	.string "will summon the original creator of\l"
	.string "everything.$"

Aqua3_Combate_Aquiles_Texto_26.2:
	.string "This is something that can really\n"
	.string "make an impact on world. What's a bit\l"
	.string "more water or land? Compared to a\l"
	.string "POKÉMON that could wipe out everything\l"
	.string "with a single snap, or create the best\l"
	.string "paradises?$"

Aqua3_Combate_Aquiles_Texto_27:
	.string "ARCHIE and MAXIE wondered about the\n"
	.string "reason for their defeats against you.\p"
	.string "They believed in the perfection of\n"
	.string "KYOGRE and GROUDON; however, their\l"
	.string "powers are incomplete.$"

Aqua3_Combate_Aquiles_Texto_28:
	.string "Nothing holds me here anymore; I must\n"
	.string "go after the remaining KEY POKÉMON.\p"
	.string "My next goal is in JOHTO, it seems the\n"
	.string "most powerful and wise TRAINER in the\l"
	.string "region possesses a POKÉMON that fits\l"
	.string "with the description I'm looking for.$"

Aqua3_Combate_Aquiles_Texto_29:
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}I hope, {PLAYER}, you're not\n"
	.string "thinking about going against my will.\l"
	.string "In our practice fight, I used less\l"
	.string "than 50% of my power.$"

Aqua3_Combate_Aquiles_Texto_29.1:
	.string "I wouldn't want to be forced to\n"
	.string "perform at 100% of my abilities,\l"
	.string "but{PAUSE 15}…{PAUSE 15} I won't hesitate if you\l"
	.string "stand in my way.$"

Aqua3_Combate_Aquiles_Texto_30:
	.string "GIOVANNI: ADMIN {PLAYER}? Are you\n"
	.string "still in SEVII ISLANDS?\p"
	.string "We have many matters to discuss.\p"
	.string "I require your presence in my\n"
	.string "office as soon as possible.$"

Aqua3_Combate_Aquiles_Move_1:
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_1.1:
walk_up
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_2:
walk_right
step_end

Aqua3_Combate_Aquiles_Move_3:
emote_exclamation_mark
step_end

Aqua3_Combate_Aquiles_Move_4:
face_left
step_end

Aqua3_Combate_Aquiles_Move_5:
walk_right
walk_right
face_up
step_end

Aqua3_Combate_Aquiles_Move_6:
face_up
step_end

Aqua3_Combate_Aquiles_Move_7:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Aqua3_Combate_Aquiles_Move_8:
slide_down
step_end

Aqua3_Combate_Aquiles_Move_9:
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

Aqua3_Combate_Aquiles_Move_10:
face_left
step_end

Aqua3_Combate_Aquiles_Move_11:
face_right
step_end

Aqua3_Combate_Aquiles_Move_12:
walk_in_place_left
step_end

Aqua3_Combate_Aquiles_Move_13:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Aqua3_Combate_Aquiles_Move_14:
walk_right
walk_right
step_end

Aqua3_Combate_Aquiles_Move_15:
walk_down
face_up
step_end

Aqua3_Combate_Aquiles_Move_16:
emote_question_mark
step_end

Aqua3_Combate_Aquiles_Move_17:
face_down
step_end

Aqua3_Combate_Aquiles_Move_18:
walk_in_place_down
step_end

Aqua3_Combate_Aquiles_Move_19:
walk_left
walk_slow_down
walk_in_place_down
step_end

Aqua3_Combate_Aquiles_Move_20:
walk_slow_up
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_21:
walk_left
walk_left
step_end

Aqua3_Combate_Aquiles_Move_22:
walk_left
walk_left
walk_up
walk_left
walk_left
walk_left
step_end
