RuinsOfAlph_S1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinsOfAlph_S1_OnFrame
	.byte 0

RuinsOfAlph_S1_OnFrame:
map_script_2 VAR_UNUSED_0x40FE, 4, RuinsOfAlph_S1_Apertura
	.2byte 0

RuinsOfAlphS1_Rocket_Cadaver::
lock
msgbox RuinsOfAlphS1_Rocket_Cadaver_Texto_1 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlphS1_Rocket_Cadaver_Texto_1:
	.string "(Seems like one of the ROCKET members\n"
	.string "who entered the ruins…)$"

RuinsOfAlphS1_Atlas_Piedra::
lock
msgbox RuinsOfAlphS1_Atlas_Piedra_Texto_1 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlphS1_Atlas_Piedra_Texto_1:
	.string "(The CHIEF ADMIN. ARCHER is completely\n"
	.string "petrified)$"

RuinsOfAlphS1_Andra::
lock
faceplayer
msgbox RuinsOfAlphS1_Andra_Texto_1 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlphS1_Andra_Texto_1:
	.string "{PLAYER}! What's happening in this\n"
	.string "place? I've never seen POKÉMON like\l"
	.string "this before; several of ours have\l"
	.string "already fallen. Those horrible\l"
	.string "skeletons must have had something to\l"
	.string "do with it{PAUSE 15}…{PAUSE 15} We must be careful,\l"
	.string "{PLAYER}, the DRAGON MASTER was\l"
	.string "right, this place is dangerous.$"

RuinsOfAlphS1_Unown_Despues::
lock
msgbox RuinsOfAlphS1_Unown_Despues_texto_1 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlphS1_Unown_Despues_texto_1:
.string "{PAUSE 15}…{PAUSE 15}$"


RuinsOfAlph_S1_Combate_UnownDorado::
lock
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
trainerbattle_no_intro TRAINER_ESENCIA_5, RuinsOfAlph_S1_Combate_UnownDorado_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_UnownDorado_Move_1
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_ROUTE_111_PLAYER_DESCENT
removeobject 11
playse SE_M_EMBER
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_3 MSGBOX_AUTOCLOSE
delay 20
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 12
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_2
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_UnownDorado_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_UnownDorado_Move_5
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_6
waitmovement 0x0
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_5 MSGBOX_AUTOCLOSE
delay 40
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_UnownDorado_Move_7
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_7
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
fadescreen 1
delay 20
addobject 2
fadescreen 0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_UnownDorado_Move_4
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_4
waitmovement 0x0
playse SE_BREAKABLE_DOOR
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_UnownDorado_Move_5
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_8
waitmovement 0x0
delay 10
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_7 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_8 MSGBOX_AUTOCLOSE
applymovement 12, RuinsOfAlph_S1_Combate_UnownDorado_Move_9
waitmovement 0x0
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_9 MSGBOX_AUTOCLOSE
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
setvar VAR_SECRET_BASE_STEP_COUNTER, 1
setvar VAR_SECRET_BASE_LAST_ITEM_USED, 1
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 1
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 1
setvar VAR_UNUSED_0x40FE, 5
release
end

RuinsOfAlph_S1_Combate_UnownDorado_Texto_1:
.string "{PAUSE 15}…{PAUSE 15}$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_2:
.string "…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10}$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_3:
	.string "(The mysterious energy has dissipated).$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_4:
	.string "ANDRA: Was that the UNOWN causing all\n"
	.string "this?$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_5:
	.string "ARCHER doesn't respond. I'm surprised\n"
	.string "GIOVANNI left him like this; something\l"
	.string "must have happened.$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_6:
	.string "Come on, {PLAYER}, we must keep\n"
	.string "moving forward and trust that\l"
	.string "everything will return to normal when\l"
	.string "this is over. This time we'll go together.$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_7:
.string "ANDRA: H-how?$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_8:
	.string "Now I understand, {PLAYER}, UNOWN\n"
	.string "tests you individually. We can only pass\l"
	.string "one at a time, and to do that, we have to\l"
	.string "defeat this UNOWN. GIOVANNI should\l"
	.string "have been able to, ARCHER…$"

RuinsOfAlph_S1_Combate_UnownDorado_Texto_9:
	.string "Keep going, {PLAYER}, I'll be fine. I've\n"
	.string "been preparing for this, to face deities\l"
	.string "with mortal POKÉMON. Let's go, CROBAT!\l"
	.string "Let's show to this relic the power of\l"
	.string "our DEEP BOND!$"

RuinsOfAlph_S1_Combate_UnownDorado_Move_1:
face_up
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_2:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_3:
emote_exclamation_mark
face_right
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_4:
emote_exclamation_mark
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_5:
face_down
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_6:
walk_slow_left
walk_slow_left
walk_slow_left
face_down
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_7:
walk_slow_up
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_8:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

RuinsOfAlph_S1_Combate_UnownDorado_Move_9:
walk_in_place_up
step_end

RuinsOfAlph_S1_Apertura::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Apertura_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Apertura_Move_2
waitmovement 0x0
delay 10
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
waitmoncry
setvar VAR_SECRET_BASE_STEP_COUNTER, 1
setvar VAR_SECRET_BASE_LAST_ITEM_USED, 1
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 1
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 1
setvar VAR_UNUSED_0x40FE, 5
playse SE_BANG
setmetatile 20, 112, 0x288, FALSE
setmetatile 20, 113, 0x2B5, TRUE
special DrawWholeMapView
msgbox RuinsOfAlph_S1_Apertura_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
clearflag FLAG_HIDE_ROUTE_111_PLAYER_DESCENT
clearflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
setflag FLAG_HIDE_ROUTE_119_RIVAL
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
release
end

RuinsOfAlph_S1_Apertura_Texto_1:
	.string "(It seems you've activated something\n"
	.string "very dangerous by stepping into this\l"
	.string "area)$"

RuinsOfAlph_S1_Apertura_Move_1:
emote_exclamation_mark
step_end

RuinsOfAlph_S1_Apertura_Move_2:
walk_in_place_fast_down
step_end

RuinsOfAlph_S1_Combate_Kabutops::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ESENCIA_1, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 2
release
end

RuinsOfAlph_S1_Combate_Kabutops_Texto_1:
.string "(A mysterious energy attacks you!)$"

RuinsOfAlph_S1_Combate_Kabutops_Texto_2:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10}$"

RuinsOfAlph_S1_Combate_Kabutops_Texto_3:
	.string "(The mysterious energy has dissipated)$"


RuinsOfAlph_S1_Combate_Kabutops_Move_1:
emote_exclamation_mark
walk_in_place_left
walk_in_place_right
walk_in_place_up
walk_in_place_down
step_end

RuinsOfAlph_S1_Combate_Aerodactyl::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ESENCIA_2, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_HIGH_TV_FLAGS, 2
release
end


RuinsOfAlph_S1_Combate_Marowak::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ESENCIA_3, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_STEP_COUNTER, 2
release
end


RuinsOfAlph_S1_Combate_Xatu::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ESENCIA_6, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40FE, 6
release
end


RuinsOfAlph_S1_Combate_Jirachi::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ESENCIA_4, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox RuinsOfAlph_S1_Combate_Kabutops_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LAST_ITEM_USED, 2
release
end

RuinsOfAlph_Warpsilent::
lock
warpsilent MAP_RUINS_OF_ALPH_UNDERGROUND_PASS, 4, 28
release
end

