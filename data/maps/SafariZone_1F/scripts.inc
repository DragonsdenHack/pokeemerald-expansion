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
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_2
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_3
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_TEDDIURSA, CRY_MODE_ENCOUNTER
playse MUS_EVOLUTION_INTRO
waitfanfare
delay 15
playse SE_PIN
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 4, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 5, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 6, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
delay 120
playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
delay 120
playse SE_PIN
playse MUS_EVOLVED
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 4, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 5, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 6, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
delay 200
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_5
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_6
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
delay 20
msgbox SafariZone_1F_Escena_3_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
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
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox SafariZone_1F_Escena_3_Andra_Texto_16 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_17 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_8
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_20 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_22 MSGBOX_AUTOCLOSE
delay 50
msgbox SafariZone_1F_Escena_3_Andra_Texto_23 MSGBOX_AUTOCLOSE
delay 30
setvar VAR_UNUSED_0x40F7, 41
warpsilent MAP_ROCK_TUNNEL_1F, 18, 36
release
end

SafariZone_1F_Escena_3_Andra_Texto_1:
	.string "GRUNT: The total count is; 48 SCYTHER,\n"
	.string "45 TAUROS, 38 KANGASKHAN, 35 CHANSEY\l"
	.string "and 26 DRATINI, HIGH RANK GRUNT ANDRA.$"

SafariZone_1F_Escena_3_Andra_Texto_2:
	.string "ANDRA: Good job grunt, return to your\n"
	.string "place.$"

SafariZone_1F_Escena_3_Andra_Texto_3:
	.string "And good job, TEDDIURSA. You have\n"
	.string "shown great bravery facing evolved\l"
	.string "POKÉMON without you having ev…$"

SafariZone_1F_Escena_3_Andra_Texto_4:
	.string "SCIENTIST: Wow… not every day you can\n"
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
	.string "ANDRA: Oh, well… Is it really that\n"
	.string "strong once it is correctly developed?$"

SafariZone_1F_Escena_3_Andra_Texto_14:
	.string "SCIENTIST: Indeed, even more than the\n"
	.string "most of the LEGENDARIES, it surpasses\l"
	.string "URSARING in ATTACK BASE. Moreover, it\l"
	.string "surpasses it in everything: SPEED,\l"
	.string "HEALTH POINTS, DEFENSE… it's 6-0 in\l"
	.string "the overall stats.$"

SafariZone_1F_Escena_3_Andra_Texto_15:
.string "ANDRA: …$"

SafariZone_1F_Escena_3_Andra_Texto_16:
	.string "SCIENTIST: I don't want to offend you,\n"
	.string "URSARING is an excellent POKÉMON, but\l"
	.string "DRAGONITE is just a higher tier, part of\l"
	.string "it has been touched by some divinity.$"

SafariZone_1F_Escena_3_Andra_Texto_17:
	.string "ANDRA: So that is the reason why people\n"
	.string "fear LANCE… I get it.$"

SafariZone_1F_Escena_3_Andra_Texto_18:
	.string "SCIENTIST: That is not the unique\n"
	.string "reason, also…$"

SafariZone_1F_Escena_3_Andra_Texto_19:
	.string "ANDRA: I refuse to accept that my\n"
	.string "URSARING will now be worse than a\l"
	.string "DRAGONITE in everything by decree, in\l"
	.string "my mind, this URSARING is capable of\l"
	.string "exceeding that base in ATTACK… and\l"
	.string "maybe more…$"

SafariZone_1F_Escena_3_Andra_Texto_20:
	.string "SCIENTIST: The BASE STATS are\n"
	.string "invariant, it is not about of your\l"
	.string "achievements or about trainment,\l"
	.string "through those means, your URSARING may\l"
	.string "defeat a DRAGONITE… that doesn't fully\l"
	.string "exploit its potential, but all else being\l"
	.string "equal, there's nothing to be done. Stats\l"
	.string "indicate the intrinsic potential of\l"
	.string "each species, that's how it is. Why do\l"
	.string "you think the MAGIKARP are so weak? To\l"
	.string "a greater or lesser degree, all POKÉMON\l"
	.string "have limits.$"

SafariZone_1F_Escena_3_Andra_Texto_21:
	.string "ANDRA: Even so… I feel this URSARING\n"
	.string "has a bit of that potential that you\l"
	.string "mean, to take advantage of it.$"

SafariZone_1F_Escena_3_Andra_Texto_22:
	.string "SCIENTIST: If we do some experiments\n"
	.string "on it, that is another topic, NIDOKING\l"
	.string "and NIDOQUEEN aspire to raise in 100\l"
	.string "their BASE STATS total due to\l"
	.string "experiments. Out of that, it is\l"
	.string "impossible.$"

SafariZone_1F_Escena_3_Andra_Texto_23:
.string "ANDRA: Who knows…$"

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
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
step_end
