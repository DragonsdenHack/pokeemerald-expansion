LagoFuria3_MapScripts::
	.byte 0


LagoFuria_S3_Combate_Ikary::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_CARRACOSTA, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_CARRACOSTA, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_CARRACOSTA, CRY_MODE_ENCOUNTER
msgbox LagoFuria_S3_Combate_Ikary_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_134, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_CARRACOSTA, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox LagoFuria_S3_Combate_Ikary_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_MAUVILLE_CITY_STATE, 5
release
end

LagoFuria_S3_Combate_Ikary_Texto_1:
.string "Ik!$"

LagoFuria_S3_Combate_Ikary_Texto_3:
.string "Ik…$"


LagoFuria_S3_Combates_Cientificos::
lock
clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
addobject 8
addobject 9
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MemorialPillar_Move_1
applymovement OBJ_EVENT_ID_CAMERA, LagoFuria_S3_Combates_Cientificos_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox LagoFuria_S3_Combates_Cientificos_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, LagoFuria_S3_Combates_Cientificos_Move_2
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox LagoFuria_S3_Combates_Cientificos_Texto_3 MSGBOX_AUTOCLOSE
applymovement 9, LagoFuria_S3_Combates_Cientificos_Move_3
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, LagoFuria_S3_Combates_Cientificos_Move_4
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 8, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 5, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 6, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 7, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 9, LagoFuria_S3_Combates_Cientificos_Move_6
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, LagoFuria_S3_Combates_Cientificos_Move_5
waitmovement 0x0
special RemoveCameraObject
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox LagoFuria_S3_Combates_Cientificos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, LagoFuria_S3_Combates_Cientificos_Move_8
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox LagoFuria_S3_Combates_Cientificos_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, LagoFuria_S3_Combates_Cientificos_Move_9
applymovement 5, LagoFuria_S3_Combates_Cientificos_Move_10
applymovement 7, LagoFuria_S3_Combates_Cientificos_Move_2
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
delay 20
fadescreen 1
removeobject 8
removeobject 9
fadescreen 0
applymovement 6, LagoFuria_S3_Combates_Cientificos_Move_9
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CIENTIFICO_1, LagoFuria_S3_Combates_Cientificos_Texto_12
msgbox LagoFuria_S3_Combates_Cientificos_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, LagoFuria_S3_Combates_Cientificos_Move_11
applymovement OBJ_EVENT_ID_PLAYER, LagoFuria_S3_Combates_Cientificos_Move_2
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_14 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CRIMINAL, LagoFuria_S3_Combates_Cientificos_Texto_15
msgbox LagoFuria_S3_Combates_Cientificos_Texto_16 MSGBOX_AUTOCLOSE
applymovement 7, LagoFuria_S3_Combates_Cientificos_Move_12
applymovement OBJ_EVENT_ID_PLAYER, LagoFuria_S3_Combates_Cientificos_Move_10
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CIENTIFICO_3, LagoFuria_S3_Combates_Cientificos_Texto_18
msgbox LagoFuria_S3_Combates_Cientificos_Texto_19 MSGBOX_AUTOCLOSE
setvar VAR_MAUVILLE_CITY_STATE, 6
release
end

LagoFuria_S3_Combates_Cientificos_Move_12:
walk_right
step_end

LagoFuria_S3_Combates_Cientificos_Move_11:
walk_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_10:
face_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_9:
walk_in_place_down
step_end

LagoFuria_S3_Combates_Cientificos_Move_8:
face_up
step_end

LagoFuria_S3_Combates_Cientificos_Move_7:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_6:
face_down
emote_exclamation_mark
step_end

LagoFuria_S3_Combates_Cientificos_Move_5:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
step_end

LagoFuria_S3_Combates_Cientificos_Move_4:
face_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_3:
walk_in_place_right
step_end

LagoFuria_S3_Combates_Cientificos_Move_2:
face_right
step_end

LagoFuria_S3_Combates_Cientificos_Move_1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

LagoFuria_S3_Combates_Cientificos_Texto_1:
	.string "????: These traces are fresh, we are\n"
	.string "near.$"

LagoFuria_S3_Combates_Cientificos_Texto_2:
	.string "FISHERMAN: We still have time to turn\n"
	.string "back. Do you really want to risk your\l"
	.string "life on this expedition?$"

LagoFuria_S3_Combates_Cientificos_Texto_3:
	.string "????: You should be grateful to me.\n"
	.string "You've spent your entire life here and\l"
	.string "have never dared to delve into the\l"
	.string "legacy left by your ancestors. Thanks\l"
	.string "to me, you'll be able to see if the\l"
	.string "legends were true.$"

LagoFuria_S3_Combates_Cientificos_Texto_4:
	.string "FISHERMAN: Some things are better to\n"
	.string "not get discovered.$"

LagoFuria_S3_Combates_Cientificos_Texto_5:
	.string "????: And some are there precisely for\n"
	.string "people like us to see what can be done\l"
	.string "with them. We will put that POKÉMON to\l"
	.string "the test properly, when D…$"

LagoFuria_S3_Combates_Cientificos_Texto_6:
.string "So we have a visitor.$"

LagoFuria_S3_Combates_Cientificos_Texto_7:
	.string "You must be very strong to have\n"
	.string "reached here.$"

LagoFuria_S3_Combates_Cientificos_Texto_8:
	.string "I don't care if you stumbled upon this\n"
	.string "place by chance, if you just happened\l"
	.string "to find the secret entrance open, or if\l"
	.string "you're here intentionally like us. You're\l"
	.string "just another obstacle that needs to be\l"
	.string "taken care of.$"

LagoFuria_S3_Combates_Cientificos_Texto_9:
.string "Take care of him, he must not follow us.$"

LagoFuria_S3_Combates_Cientificos_Texto_10:
.string "Immediately, sir.$"

LagoFuria_S3_Combates_Cientificos_Texto_11:
	.string "You've been lucky. If our commanding\n"
	.string "officer had decided to deal with you,\l"
	.string "neither you nor your POKÉMON would be\l"
	.string "able to recover from the beating you'd\l"
	.string "receive.$"

LagoFuria_S3_Combates_Cientificos_Texto_12:
	.string "Oh… we have an uncommon specimen here.$"

LagoFuria_S3_Combates_Cientificos_Texto_13:
	.string "Even with those POKÉMON, you wouldn't\n"
	.string "stand a chance against one of our\l"
	.string "EXECUTIVES.$"

LagoFuria_S3_Combates_Cientificos_Texto_14:
	.string "It appears that in this area, folks have\n"
	.string "the unfortunate tendency to poke\l"
	.string "their noses where they don't belong.\l"
	.string "You'll witness how we handle nosy\l"
	.string "individuals like you in our own\l"
	.string "territory!$"

LagoFuria_S3_Combates_Cientificos_Texto_15:
	.string "So you try to resist, we won't have\n"
	.string "mercy on you.$"

LagoFuria_S3_Combates_Cientificos_Texto_16:
	.string "Doesn't care how skilled you are,\n"
	.string "without technology you have nothing to\l"
	.string "do.$"

LagoFuria_S3_Combates_Cientificos_Texto_17:
	.string "Your effort to stay standing is\n"
	.string "commendable, but your little excursion\l"
	.string "to the lake ends here.$"

LagoFuria_S3_Combates_Cientificos_Texto_18:
	.string "This can't be! Your POKÉMON should be\n"
	.string "tired already!$"

LagoFuria_S3_Combates_Cientificos_Texto_19:
	.string "If you were aware of the power wielded\n"
	.string "by our EXECUTIVE, you would be miles\l"
	.string "away from this LAKE and MAHOGANY TOWN\l"
	.string "by now.$"


LagoFuria_S3_Cientifico_1::
lock
faceplayer
msgbox LagoFuria_S3_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

LagoFuria_S3_Cientifico_1_Texto_1:
	.string "Because of you, we've missed the chance\n"
	.string "to see the LAKE POKÉMON's. We can't\l"
	.string "show up there after being defeated,\l"
	.string "but we also can't stop you now…$"



LagoFuria_S3_Cientifico_2::
lock
faceplayer
msgbox LagoFuria_S3_Cientifico_2_Texto_1 MSGBOX_AUTOCLOSE
release
end

LagoFuria_S3_Cientifico_2_Texto_1:
	.string "It seems that POKÉMON is fiercer than\n"
	.string "GYARADOS itself. What do you think its\l"
	.string "BASE STATS will be?$"


LagoFuria_S3_Cientifico_3::
lock
faceplayer
msgbox LagoFuria_S3_Cientifico_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

LagoFuria_S3_Cientifico_3_Texto_1:
	.string "According to our calculations, the LAKE\n"
	.string "POKÉMON must measure around 20 meters.\l"
	.string "If so, it would be the largest POKÉMON\l"
	.string "on record, even surpassing WAILORD.$"

