SafariZone_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_1F_OnFrame
	.byte 0

SafariZone_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 40, SafariZone_1F_Escena_3_Andra
	.2byte 0

SafariZone1F_1::
end



SafariZone1FDocumento_100::
msgbox SafariZone1FDocumento_Text_100, MSGBOX_SIGN   
end

SafariZone1FDocumento_Text_100:
.string "TRAINER TIPS\p"
    .string "Press START to check\n"
    .string "remaining time.$"



SafariZone1FDocumento_101::
msgbox SafariZone1FDocumento_Text_101, MSGBOX_SIGN   
end

SafariZone1FDocumento_Text_101:
.string "REST HOUSE$"



SafariZone1FDocumento_102::
msgbox SafariZone1FDocumento_Text_102, MSGBOX_SIGN   
end

SafariZone1FDocumento_Text_102:
.string "CENTER AREA$"

SafariZone_1F_Escena_3_Andra::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SafariZone_1F_Escena_3_Andra_Move_9
waitmovement 0x0
special RemoveCameraObject
removeobject 8
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SafariZone_1F_Escena_3_Andra_Move_9.1
waitmovement 0x0
special RemoveCameraObject
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_2
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_3.1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_TEDDIURSA, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
playse SE_PIN
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_3.2
waitmovement 0x0
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 4, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 5, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 6, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
delay 5
removeobject 8
addobject 9
delay 5
removeobject 9
addobject 8
playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_PIN
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 4, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 5, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 6, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_4
delay 5
waitse
delay 10
playse MUS_EVOLVED
waitse
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_5
waitmovement 0x0
delay 10
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_6
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
delay 20
msgbox SafariZone_1F_Escena_3_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_6
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_14 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
delay 10
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1.1
waitmovement 0x0
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox SafariZone_1F_Escena_3_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_8.1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_20.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7.1
waitmovement 0x0
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_22 MSGBOX_AUTOCLOSE
delay 30
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7.1
waitmovement 0x0
delay 30
msgbox SafariZone_1F_Escena_3_Andra_Texto_23 MSGBOX_AUTOCLOSE
delay 30
setvar VAR_UNUSED_0x40F7, 41
warpsilent MAP_ROCK_TUNNEL_1F, 18, 36
release
end

SafariZone_1F_Escena_3_Andra_Move_7.1:
delay_8
face_left
delay_16
delay_8
face_right
delay_8
step_end

SafariZone_1F_Escena_3_Andra_Move_8.1:
delay_8
face_left
delay_16
face_up
delay_16
face_right
step_end

SafariZone_1F_Escena_3_Andra_Move_1.1:
delay_8
face_down
delay_16
delay_8
face_right
delay_8
step_end

SafariZone_1F_Escena_3_Andra_Texto_1:
	.string "GRUNT: The total count is; 48 SCYTHER,\n"
	.string "45 TAUROS, 38 KANGASKHAN, 35 CHANSEY\l"
	.string "and 26 DRATINI, HIGH-RANK GRUNT ANDRA.$"

SafariZone_1F_Escena_3_Andra_Texto_2:
	.string "ANDRA: Good job, GRUNT.\p"
	.string "Return to your place.$"

SafariZone_1F_Escena_3_Andra_Texto_3:
	.string "And good job, TEDDIURSA. You have\n"
	.string "shown great bravery facing evolved\l"
	.string "POKÉMON without you having ev…$"

SafariZone_1F_Escena_3_Andra_Texto_4:
	.string "SCIENTIST: Wow{PAUSE 15}…{PAUSE 15} not every day you can\n"
	.string "see an URSARING here in KANTO. Its\l"
	.string "ATTACK is devastating, in KANTO will\l"
	.string "wipe out every POKÉMON with it SLASH,\l"
	.string "trust me.$"

SafariZone_1F_Escena_3_Andra_Texto_5:
	.string "ANDRA: More than those TAUROS and\n"
	.string "SCYTHER that hit so hard?$"

SafariZone_1F_Escena_3_Andra_Texto_6:
	.string "SCIENTIST: Correct. Even for an\n"
	.string "ADMIN.ROCKET is a great POKÉMON.$"

SafariZone_1F_Escena_3_Andra_Texto_7:
	.string "ANDRA: Tell me something, why is that\n"
	.string "blue serpent so expensive to buy in the\l"
	.string "GAME CORNER? To be honest it seems\l"
	.string "very weak.$"

SafariZone_1F_Escena_3_Andra_Texto_8:
	.string "SCIENTIST: Hah, it is pretty clear that\n"
	.string "you are not from here. That blue\l"
	.string "serpent is the pre-evolution of our\l"
	.string "PSEUDO-LEGENDARY, one of the most\l"
	.string "sacred dragons that exists.$"

SafariZone_1F_Escena_3_Andra_Texto_9:
	.string "ANDRA: Really? It's completely\n"
	.string "different from DRAGONITE!$"

SafariZone_1F_Escena_3_Andra_Texto_10:
	.string "SCIENTIST: That is the reason why it is\n"
	.string "so expensive, which the GAME CORNER\l"
	.string "sells is the chance to have the\l"
	.string "PSEUDO-LEGENDARY after a long and\l"
	.string "hard trainment. More than the option, it\l"
	.string "is sold the 'promise' to have one: to be\l"
	.string "honest only one TRAINER has\l"
	.string "accomplished it in this region.$"

SafariZone_1F_Escena_3_Andra_Texto_11:
.string "ANDRA: Why?$"

SafariZone_1F_Escena_3_Andra_Texto_12:
	.string "SCIENTIST: You can easily see that the\n"
	.string "region is resourceless to do an optimum\l"
	.string "trainment, at least for the most of the\l"
	.string "population. In these conditions it is\l"
	.string "practically impossible to develop the\l"
	.string "potential of a dragon as DRATINI is.$"

SafariZone_1F_Escena_3_Andra_Texto_13:
.string "ANDRA: Oh, so{PAUSE 25}…{PAUSE 25}\n"
	.string "Is it really that strong?$"

SafariZone_1F_Escena_3_Andra_Texto_14:
.string "SCIENTIST: Even more than some LEGENDARIES.\n"
	.string "Has even more BASE ATTACK than URSARING.$"

SafariZone_1F_Escena_3_Andra_Texto_14.1:
	.string "Moreover, it surpasses it in everything:\n"
	.string "SPEED, HEALTH POINTS, DEFENSE{PAUSE 15}…{PAUSE 15}\l"
	.string "it's a 6-0 in the overall stats.$"

SafariZone_1F_Escena_3_Andra_Texto_15:
.string "ANDRA: {PAUSE 15}…{PAUSE 15}…{PAUSE 15}$"

SafariZone_1F_Escena_3_Andra_Texto_16:
	.string "SCIENTIST: I don't want to offend you,\n"
	.string "URSARING is an excellent POKÉMON, but\l"
	.string "DRAGONITE is just a higher tier, part of\l"
	.string "it has been touched by some divinity.$"

SafariZone_1F_Escena_3_Andra_Texto_17:
	.string "ANDRA: So that's the reason why people\n"
	.string "fear LANCE{PAUSE 15}…{PAUSE 15} I get it.$"

SafariZone_1F_Escena_3_Andra_Texto_18:
	.string "SCIENTIST: That's not the only\n"
	.string "reason, also…$"

SafariZone_1F_Escena_3_Andra_Texto_19:
	.string "ANDRA: I refuse to accept that my\n"
	.string "URSARING will now be worse than a\l"
	.string "DRAGONITE in everything by decree, in\l"
	.string "my mind, this URSARING is capable of\l"
	.string "exceeding that BASE ATTACK{PAUSE 15}…{PAUSE 15} and\l"
	.string "maybe more…$"

SafariZone_1F_Escena_3_Andra_Texto_20:
	.string "SCIENTIST: BASE STATS are invariant.\p"
	.string "It's not about your achievements,\n"
	.string "nor about training.\p"
	.string "Through those means, your URSARING may\n"
	.string "defeat a DRAGONITE{PAUSE 15}…{PAUSE 15} that doesn't fully\l"
	.string "exploit its potential.$"

SafariZone_1F_Escena_3_Andra_Texto_20.1:
	.string "That's about the intrinsic potential of\n"
	.string "each species, nothing to do with that.\p"
	.string "Why do you think MAGIKARPs are so weak?\p"
	.string "To a greater or lesser degree, all\n"
	.string "POKÉMON have limits.$"

SafariZone_1F_Escena_3_Andra_Texto_21:
	.string "ANDRA: Even so{PAUSE 15}…{PAUSE 15} I feel this URSARING\n"
	.string "has a bit of that potential that you\l"
	.string "mean, still to be unlocked{PAUSE 15}…{PAUSE 15}$"

SafariZone_1F_Escena_3_Andra_Texto_22:
	.string "SCIENTIST: If we go to genetic\n"
	.string "engineering, that's another thing. We\l"
	.string "have several candidates who aspire to\l"
	.string "raise their total BASE STATS with it.\p"
	.string "Other way, it's impossible.$"

SafariZone_1F_Escena_3_Andra_Texto_23:
.string "ANDRA: {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15} Who knows{PAUSE 15}…{PAUSE 15}$"

SafariZone_1F_Escena_3_Andra_Move_1:
walk_in_place_right
step_end

SafariZone_1F_Escena_3_Andra_Move_2:
walk_up
walk_up
walk_in_place_down
step_end

SafariZone_1F_Escena_3_Andra_Move_3:
walk_in_place_down
step_end

SafariZone_1F_Escena_3_Andra_Move_3.1:
delay_8
face_right
delay_16
walk_in_place_down
step_end

SafariZone_1F_Escena_3_Andra_Move_3.2:
face_right
emote_exclamation_mark
step_end

SafariZone_1F_Escena_3_Andra_Move_4:
emote_exclamation_mark
step_end

SafariZone_1F_Escena_3_Andra_Move_5:
walk_right
walk_right
walk_right
step_end

SafariZone_1F_Escena_3_Andra_Move_6:
face_left
step_end

SafariZone_1F_Escena_3_Andra_Move_7:
face_down
step_end

SafariZone_1F_Escena_3_Andra_Move_8:
walk_right
step_end

SafariZone_1F_Escena_3_Andra_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

SafariZone_1F_Escena_3_Andra_Move_9.1:
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
step_end
