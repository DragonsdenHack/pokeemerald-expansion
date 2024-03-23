UndergroundPath_12F_MapScripts::
	.byte 0

UndergroundPath_12F_Combates_Moteros::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_12F_Combates_Moteros_Move_1.1
msgbox UndergroundPath_12F_Combates_Moteros_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_1
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_12F_Combates_Moteros_Move_2
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_3
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_3
applymovement 4, UndergroundPath_12F_Combates_Moteros_Move_3
waitmovement 0x0
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_4
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_12F_Combates_Moteros_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_5
waitmovement 0x0
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_6
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_7
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_8
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_12F_Combates_Moteros_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_12F_Combates_Moteros_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_9
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_8
applymovement 4, UndergroundPath_12F_Combates_Moteros_Move_10
waitmovement 0x0
playse MUS_RG_ENCOUNTER_BOY
msgbox UndergroundPath_12F_Combates_Moteros_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_213, UndergroundPath_12F_Combates_Moteros_Texto_12
playse MUS_RG_ENCOUNTER_BOY
applymovement 3, UndergroundPath_12F_Combates_Moteros_Move_11
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_214, UndergroundPath_12F_Combates_Moteros_Texto_14
playse MUS_RG_ENCOUNTER_BOY
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_8
waitmovement 0x0
delay 5
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_12F_Combates_Moteros_Move_5
waitmovement 0x0
msgbox UndergroundPath_12F_Combates_Moteros_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_12
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_215, UndergroundPath_12F_Combates_Moteros_Texto_16
msgbox UndergroundPath_12F_Combates_Moteros_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, UndergroundPath_12F_Combates_Moteros_Move_1
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox UndergroundPath_12F_Combates_Moteros_Texto_18 MSGBOX_DEFAULT
waitfanfare
msgbox UndergroundPath_12F_Combates_Moteros_Texto_19 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_12F_Combates_Moteros_Texto_20 MSGBOX_AUTOCLOSE
release
setvar VAR_ROUTE105_STATE, 12
end

UndergroundPath_12F_Combates_Moteros_Move_1.1:
walk_in_place_up
step_end

UndergroundPath_12F_Combates_Moteros_Move_12:
walk_down
walk_down
walk_left
walk_left
step_end

UndergroundPath_12F_Combates_Moteros_Move_11:
walk_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_10:
walk_left
walk_down
walk_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_9:
walk_in_place_left
delay_8
walk_in_place_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_8:
walk_in_place_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_7:
face_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_6:
face_left
step_end

UndergroundPath_12F_Combates_Moteros_Move_5:
face_right
step_end

UndergroundPath_12F_Combates_Moteros_Move_4:
walk_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_3:
emote_exclamation_mark
delay_8
face_down
step_end

UndergroundPath_12F_Combates_Moteros_Move_2:
walk_slow_up
walk_slow_up
step_end

UndergroundPath_12F_Combates_Moteros_Move_1:
walk_in_place_left
step_end

UndergroundPath_12F_Combates_Moteros_Texto_1:
	.string "Those fools, they don't know we could be\n"
	.string "here for months. Now they'll have to\l"
	.string "answer to their higher-ups about why\l"
	.string "the UNDERGROUND PATHS are still open.$"

UndergroundPath_12F_Combates_Moteros_Texto_2:
	.string "They'll never be able to reach our\n"
	.string "LEADERS; we're the only ones with the\l"
	.string "KEY that opens the main door, and…$"

UndergroundPath_12F_Combates_Moteros_Texto_3:
.string "Who are you?\n"
	.string "This area should be sealed.$"

UndergroundPath_12F_Combates_Moteros_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_12F_Combates_Moteros_Texto_5:
	.string "S{PAUSE 15}…{PAUSE 15}Sir{PAUSE 15}…{PAUSE 15} It's {PLAYER}, one of the\n"
	.string "strongest ROCKET members.$"

UndergroundPath_12F_Combates_Moteros_Texto_6:
	.string "{PLAYER}? And you want the KEY that\n"
	.string "leads to the main cabin?$"

UndergroundPath_12F_Combates_Moteros_Texto_7:
	.string "No matter who you are, I've been hired to\n"
	.string "guard this place, and that's what I'll do.$"

UndergroundPath_12F_Combates_Moteros_Texto_8:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_12F_Combates_Moteros_Texto_9:
	.string "So you've defeated the 4 BIKERS\n"
	.string "guarding the entrance. Don't compare us\l"
	.string "to those clowns; there may be 3 of us,\l"
	.string "but we could handle 10 of them.$"

UndergroundPath_12F_Combates_Moteros_Texto_10:
.string "Prove it!$"

UndergroundPath_12F_Combates_Moteros_Texto_11:
	.string "You helped defeat BRUNO in the CYCLING\n"
	.string "ROAD, but that was years ago{PAUSE 15}…{PAUSE 15} times\l"
	.string "have changed{PAUSE 15}…{PAUSE 15} We won't show you any\l"
	.string "mercy!$"

UndergroundPath_12F_Combates_Moteros_Texto_12:
.string "You've kept getting stronger…$"

UndergroundPath_12F_Combates_Moteros_Texto_13:
	.string "We thought TEAM ROCKET would support\n"
	.string "us, but you were the first to surrender\l"
	.string "to the NEW ORDER!$"

UndergroundPath_12F_Combates_Moteros_Texto_14:
.string "In the end, JOHTO is still giving us orders…$"

UndergroundPath_12F_Combates_Moteros_Texto_15:
	.string "Enough already! If I want something\n"
	.string "done right, I have to do it myself. You\l"
	.string "and your POKÉMON will suffer my wrath!$"

UndergroundPath_12F_Combates_Moteros_Texto_16:
.string "No! HYDREIGON, SHARPEDO! Keep fighting!$"

UndergroundPath_12F_Combates_Moteros_Texto_17:
	.string "Grrrr{PAUSE 15}…{PAUSE 15} It seems you have your\n"
	.string "reputation well-deserved. You leave me\l"
	.string "no choice.$"

UndergroundPath_12F_Combates_Moteros_Texto_18:
	.string "({PLAYER} obtained the NORTH CABIN\n"
	.string "KEY from the BIKER!!)$"

UndergroundPath_12F_Combates_Moteros_Texto_19:
	.string "With it, you'll be able to enter the main\n"
	.string "CABIN…$"

UndergroundPath_12F_Combates_Moteros_Texto_20:
	.string "But I warn you: you may not like what\n"
	.string "you find there.$"


UndergroundPath_7F_Activacion_Zona_Norte::
compare VAR_ROUTE105_STATE, 11
goto_if_gt UndergroundPath_7F_Activacion_Zona_Norte_2
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_3 MSGBOX_AUTOCLOSE
release
end

UndergroundPath_7F_Activacion_Zona_Norte_2::
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_1 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_ICE_CRACK
delay 20
playse SE_UNLOCK
setmetatile 52, 69, 0x29C, FALSE
setmetatile 52, 70, 0x29C, FALSE
setmetatile 53, 69, 0x29E, FALSE
setmetatile 53, 70, 0x29E, FALSE
special DrawWholeMapView
release
end

UndergroundPath_7F_Primero_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Primero_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Primero_Motorista_Texto_1:
	.string "You may not like what you find there.$"

UndergroundPath_7F_Segundoo_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Segundoo_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Segundoo_Motorista_Texto_1:
	.string "We thought TEAM ROCKET would support\n"
	.string "us, but you were the first to surrender\l"
	.string "to the NEW ORDER!$"

UndergroundPath_7F_Tercero_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Tercero_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Tercero_Motorista_Texto_1:
.string "In the end, JOHTO is still giving us orders… $"

Pokedex_Set::
lock
setflag FLAG_SYS_POKEDEX_GET
setflag FLAG_SYS_NATIONAL_DEX
special EnableNationalPokedex
msgbox UndergroundPath_7F_Tercero_Motorista_Texto_1 MSGBOX_NPC
release
end
