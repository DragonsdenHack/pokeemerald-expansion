ViasSur5_MapScripts::
	.byte 0


ViasSur5_Combate_Pegaso::
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_1
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasSur5_Combate_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_2
applymovement 2, ViasSur5_Combate_Pegaso_Move_3
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox ViasSur5_Combate_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_4
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_5
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PEGASO_2, ViasSur5_Combate_Pegaso_Texto_7
msgbox ViasSur5_Combate_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
msgbox ViasSur5_Combate_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_6
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_7
waitmovement 0x0
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox ViasSur5_Combate_Pegaso_Texto_10 MSGBOX_AUTOCLOSE
msgbox ViasSur5_Combate_Pegaso_Texto_11 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 2, ViasTren3_Rastro_Zapdos_Move_7
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_6
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_8
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_8
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_13 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_13.1 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasTren3_Rastro_Zapdos_Move_9
waitmovement 0x0
delay 20
applymovement 2, ViasTren3_Rastro_Zapdos_Move_7
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_15 MSGBOX_AUTOCLOSE
delay 10
playse SE_USE_ITEM
special HealPlayerParty
delay 20
applymovement 2, ViasTren3_Rastro_Zapdos_Move_10
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_16 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_151, ViasSur5_Combate_Pegaso_Texto_17
msgbox ViasSur5_Combate_Pegaso_Texto_18 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_8
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, ViasSur5_Combate_Pegaso_Move_11
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_20 MSGBOX_AUTOCLOSE
delay 20
playse SE_BALL_THROW
delay 20
playse SE_BALL_OPEN
playmoncry SPECIES_LANDORUS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_THUNDURUS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_TORNADUS, CRY_MODE_ENCOUNTER
msgbox ViasSur5_Combate_Pegaso_Texto_21 MSGBOX_DEFAULT
waitmoncry
msgbox ViasSur5_Combate_Pegaso_Texto_22 MSGBOX_AUTOCLOSE
applymovement 2, ViasTren3_Rastro_Zapdos_Move_7
waitmovement 0x0
msgbox ViasSur5_Combate_Pegaso_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_24 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 2
playse SE_M_FLY
delay 15
fadescreen 0
delay 30
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasSur5_Combate_Pegaso_Move_12
waitmovement 0x0
delay 20
playse SE_M_FLY
removeobject 1
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_25 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur5_Combate_Pegaso_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
setvar VAR_PACIFIDLOG_TOWN_STATE, 4
addvar VAR_UNUSED_0x40F7, 1
delay 20
compare VAR_UNUSED_0x40F7, 183
goto_if_eq Misiones_DLC_Fin_Llamada_Giovanni_Zapdos
release
end

ViasSur5_Combate_Pegaso_Texto_25:
.string "(PRIMAL ZAPDOS FLEW TOWARDS\n"
	.string "THE EAST)$"

ViasSur5_Combate_Pegaso_Move_12:
face_up
emote_exclamation_mark
step_end

ViasSur5_Combate_Pegaso_Move_11:
walk_slow_left
step_end

ViasSur5_Combate_Pegaso_Texto_13.1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

ViasTren3_Rastro_Zapdos_Move_10:
walk_in_place_right
step_end

ViasTren3_Rastro_Zapdos_Move_9:
walk_in_place_left
step_end

ViasSur5_Combate_Pegaso_Move_8:
face_up
step_end

ViasSur5_Combate_Pegaso_Move_7:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

ViasSur5_Combate_Pegaso_Move_6:
walk_left
walk_in_place_up
step_end

ViasSur5_Combate_Pegaso_Move_5:
walk_in_place_down
step_end

ViasSur5_Combate_Pegaso_Move_4:
face_right
step_end

ViasSur5_Combate_Pegaso_Move_3:
face_down
step_end

ViasSur5_Combate_Pegaso_Move_2:
walk_slow_up
step_end

ViasSur5_Combate_Pegaso_Move_1:
walk_in_place_up
step_end

ViasSur5_Combate_Pegaso_Texto_1:
	.string "My suspicions were confirmed, so you\n"
	.string "were here…$"

ViasSur5_Combate_Pegaso_Texto_2:
	.string "You've managed to push 6 highly trained\n"
	.string "birds to their limits. Your immense\l"
	.string "power lives up to your legend, no doubt.$"

ViasSur5_Combate_Pegaso_Texto_3:
	.string "{PLAYER}, You've missed out on a\n"
	.string "sky-high showdown.$"

ViasSur5_Combate_Pegaso_Texto_4:
	.string "I suppose you're curious to see what\n"
	.string "kind of POKÉMON dwells in a place as\l"
	.string "solemn as this.$"

ViasSur5_Combate_Pegaso_Texto_5:
	.string "Don't worry, I've already made my\n"
	.string "decision regarding my team. I just want\l"
	.string "you to grant me this final battle.$"

ViasSur5_Combate_Pegaso_Texto_6:
	.string "I won't make it easy for you, as the\n"
	.string "first time!$"

ViasSur5_Combate_Pegaso_Texto_7:
	.string "You have a grandmaster heart, no doubt.$"

ViasSur5_Combate_Pegaso_Texto_8:
	.string "You were already a master when you\n"
	.string "first visited VIOLET, but now you're\l"
	.string "even better.$"

ViasSur5_Combate_Pegaso_Texto_9:
.string "Take a look…$"

ViasSur5_Combate_Pegaso_Texto_10:
	.string "The POKÉMON you have in front of you is\n"
	.string "a ZAPDOS, but not just any ZAPDOS.$"

ViasSur5_Combate_Pegaso_Texto_11:
	.string "Unlike other ZAPDOS, this one is unique,\n"
	.string "there's only one in the world.$"

ViasSur5_Combate_Pegaso_Texto_12:
	.string "If you've battled PRYCE and the\n"
	.string "BLACKTHORN MASTER, you've faced their\l"
	.string "equivalents in ARTICUNO and MOLTRES.$"

ViasSur5_Combate_Pegaso_Texto_13:
	.string "They are what we used to call PRIMAL\n"
	.string "FORMS. ZAPDOS was the only one of the 3\l"
	.string "that had been missing for decades.$"

ViasSur5_Combate_Pegaso_Texto_14:
	.string "Having the opportunity to control such\n"
	.string "a POKÉMON, even just once, would be a\l"
	.string "dream come true for me.$"

ViasSur5_Combate_Pegaso_Texto_15:
	.string "Well… I see you'll honor me. I see no\n"
	.string "better rival than you for such a\l"
	.string "purpose.$"

ViasSur5_Combate_Pegaso_Texto_16:
.string "ZAPDOS! Let's fly together!$"

ViasSur5_Combate_Pegaso_Texto_17:
.string "Ah, awesome!$"

ViasSur5_Combate_Pegaso_Texto_18:
	.string "I'm not disappointed with the level of\n"
	.string "ZAPDOS, rather impressed with yours.$"

ViasSur5_Combate_Pegaso_Texto_19:
	.string "ZAPDOS is known for being the most\n"
	.string "aggressive of the 3 birds, yet you have\l"
	.string "calmed its fury with absolute mastery.$"

ViasSur5_Combate_Pegaso_Texto_20:
	.string "I have seen everything I could dream\n"
	.string "of, however the time has come.$"

ViasSur5_Combate_Pegaso_Texto_21:
	.string "FALKNER released LANDORUS, THUNDURUS,\n"
	.string "TORNADUS, and ENAMORUS.$"

ViasSur5_Combate_Pegaso_Texto_22:
	.string "We have lived great adventures and\n"
	.string "learned from each other. Now, POKÉMON\l"
	.string "like these must return to their place of\l"
	.string "origin. I hope my humble contribution\l"
	.string "makes them better, and thus continues\l"
	.string "to honor the FLYING TYPE.$"

ViasSur5_Combate_Pegaso_Texto_23:
	.string "The VIOLET GYM will finally be passed\n"
	.string "down to my son. As for me, I will embark\l"
	.string "on a new journey, with the birds that\l"
	.string "have accompanied me since forever.$"

ViasSur5_Combate_Pegaso_Texto_24:
	.string "With you, JOHTO is in good hands, I have\n"
	.string "no doubts.$"

ViasSur5_Combate_Pegaso_Texto_26:
	.string "(My mission seems to be over).$"

Misiones_DLC_Fin_Llamada_Giovanni_Zapdos::
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1
waitmovement 0x0
msgbox Misiones_DLC_Fin_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
msgbox IcePath_Llamada_Giovanni_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_5F, 69, 4
release
end
