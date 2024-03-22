RuinsOfAlph_S2_MapScripts::
	.byte 0

RuinsOfAlphS2_1::
end



RuinsOfAlphS2_2::
end

RuinsOfAlphS2_Combate_Unown::
lock
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Unown_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Unown_Move_2
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_3
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Unown_Move_4
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS2_Combate_Unown_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_5
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Unown_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_6 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox RuinsOfAlphS2_Combate_Unown_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 3
release
end

RuinsOfAlphS2_Combate_Unown_Texto_1:
.string "????: {PAUSE 15}…{PAUSE 15}$"

RuinsOfAlphS2_Combate_Unown_Texto_2:
	.string "ELDER.M: You too, {PLAYER}, have\n"
	.string "managed to make it this far…$"

RuinsOfAlphS2_Combate_Unown_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}$"

RuinsOfAlphS2_Combate_Unown_Texto_4:
.string "Right ahead is…\n"
	.string "The other test…$"

RuinsOfAlphS2_Combate_Unown_Texto_5:
	.string "I'm sorry, {PLAYER}, I can't face\n"
	.string "something so pure. The nature of this\l"
	.string "place is much more sacred than I\l"
	.string "expected. I know my POKÉMON, and I know\l"
	.string "we would succumb to one of the JOHTO\l"
	.string "LEGENDARIES in all its glory.$"

RuinsOfAlphS2_Combate_Unown_Texto_6:
	.string "Let me at least heal your team, you'll\n"
	.string "need it.$"

RuinsOfAlphS2_Combate_Unown_Texto_7:
	.string "Good luck, {PLAYER}, I trust in you.$"

RuinsOfAlphS2_Combate_Unown_Move_1:
walk_in_place_up
step_end

RuinsOfAlphS2_Combate_Unown_Move_2:
emote_exclamation_mark
step_end

RuinsOfAlphS2_Combate_Unown_Move_3:
face_down
step_end

RuinsOfAlphS2_Combate_Unown_Move_4:
walk_slow_up
step_end

RuinsOfAlphS2_Combate_Unown_Move_5:
face_up
step_end

RuinsOfAlphS2_Combate_Real_Unown::
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 3
goto_if_gt RuinsOfAlphS2_Combate_Real_Unown_2
lock
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
trainerbattle_no_intro TRAINER_ESENCIA_HOOH, RuinsOfAlphS2_Combate_Real_Unown_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_1
applymovement 2, RuinsOfAlphS2_Combate_Real_Unown_Move_1
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
removeobject 1
playse SE_M_EMBER
delay 20
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_2
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Real_Unown_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, RuinsOfAlphS2_Combate_Real_Unown_Move_1
waitmovement 0x0
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_4
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS2_Combate_Real_Unown_Move_5
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
fadescreen 1
delay 20
addobject 1
fadescreen 0
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 4
release
end

RuinsOfAlphS2_Combate_Real_Unown_2::
lock
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlphS2_Combate_Real_Unown_Texto_2:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10}$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_3:
	.string "(The mysterious energy has dissipated)$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_4:
	.string "ELDER.M: Amazing, you've just defeated\n"
	.string "the golden HO-OH.$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_5:
	.string "My dragons couldn't do anything\n"
	.string "against the purity of its FAIRY TYPE;\l"
	.string "that ZEUS knew that HO-OH serves as a\l"
	.string "key to keep advancing to the last room.\l"
	.string "By leaving it here, the essence of this\l"
	.string "place has made it regain its primordial\l"
	.string "form. That's exactly what he's seeking\l"
	.string "with KYUREM. You must prevent that,\l"
	.string "{PLAYER}, no one is prepared for the\l"
	.string "return of the ORIGINAL DRAGON.$"

RuinsOfAlphS2_Combate_Real_Unown_Texto_6:
	.string "You'll do fine, {PLAYER}, you have\n"
	.string "something that can't be bought with\l"
	.string "any LEGENDARY and that ZEUS lacks: an\l"
	.string "unbreakable bond with your POKÉMON.\l"
	.string "Keep going and show him.$"

RuinsOfAlphS2_Combate_Real_Unown_Move_1:
face_up
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_2:
face_down
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_3:
face_right
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_4:
walk_slow_up
walk_slow_up
step_end

RuinsOfAlphS2_Combate_Real_Unown_Move_5:
emote_exclamation_mark
walk_in_place_down
step_end
