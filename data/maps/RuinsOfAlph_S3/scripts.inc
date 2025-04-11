RuinsOfAlph_S3_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RuinsOfAlph_S3_OnFrame
	.byte 0

RuinsOfAlph_S3_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 177, RuinsOfAlphS3_Evento_Final
	.2byte 0

RuinsOfAlphS3_1::
end



RuinsOfAlphS3_2::
end



RuinsOfAlphS3_3::
end

RuinsOfAlphS3_Evento_Final::
lockall
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlphS3_Evento_Final_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_2
waitmovement 0x0
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_3
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_2 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
delay 15
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_2
waitmovement 0x0
waitse
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_6
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_5
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_8
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_7
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox RuinsOfAlphS3_Evento_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_9
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Evento_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_10
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_8
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_2
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_2
waitmovement 0x0
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
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
removeobject 2
playse SE_M_EMBER
delay 20
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_11
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_11
waitmovement 0x0
msgbox RuinsOfAlphS3_Evento_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Evento_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_12
waitmovement 0x0
applymovement 3, RuinsOfAlphS3_Evento_Final_Move_13
msgbox RuinsOfAlphS3_Evento_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RuinsOfAlphS3_Evento_Final_Move_12.1
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RuinsOfAlphS3_Evento_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Evento_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 28
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
fadescreenspeed FADE_TO_BLACK, 12
delay 30
warpsilent MAP_ECRUTEAK_TIN_TOWER_ROOF, 6, 13
setvar VAR_UNUSED_0x40F7, 178
release
end

RuinsOfAlphS3_Evento_Final_Move_12.1:
delay_8
face_up
delay_16
delay_8
face_left
step_end

RuinsOfAlphS3_Evento_Final_Texto_1:
.string "GIOVANNI: {PAUSE 35}…{PAUSE 35}$"

RuinsOfAlphS3_Evento_Final_Texto_2:
.string "But how did you?$"

RuinsOfAlphS3_Evento_Final_Texto_3:
	.string "ANDRA: Another golden UNOWN? This\n"
	.string "place never ends, does it?! You won't\l"
	.string "defeat me! I don't care if I have to\l"
	.string "spend ten or twenty hours in here\l"
	.string "fighting-I'll make it to the end!$"

RuinsOfAlphS3_Evento_Final_Texto_4:
.string "GIOVANNI: Wait!$"

RuinsOfAlphS3_Evento_Final_Texto_5:
	.string "That… TRAINER. Have you seen him? He\n"
	.string "must have been the LEADER of the\l"
	.string "LAVENDER sect.$"

RuinsOfAlphS3_Evento_Final_Texto_6:
	.string "ANDRA: If he was, what a\n"
	.string "disappointment! I only saw a guy using\l"
	.string "some very strange magic to pass the\l"
	.string "tests without fighting.$"

RuinsOfAlphS3_Evento_Final_Texto_7:
	.string "GIOVANNI: Indeed. That magic must only\n"
	.string "be within his reach. I wonder if…$"

RuinsOfAlphS3_Evento_Final_Texto_8:
	.string "ANDRA: He won't stand a chance against\n"
	.string "{PLAYER}! We gotta catch up to him.\l"
	.string "We've still got time!$"

RuinsOfAlphS3_Evento_Final_Texto_9:
.string "GIOVANNI: ANDRA!\p"
	.string "Your team isn't ready to deal\n"
	.string "with a PRIMAL LUG…!$"

RuinsOfAlphS3_Evento_Final_Texto_10:
.string "ANDRA: What was that?$"

RuinsOfAlphS3_Evento_Final_Texto_11:
.string "GIOVANNI: ¿L{PAUSE 25}…{PAUSE 25} lo ha logrado?$"

RuinsOfAlphS3_Evento_Final_Texto_12:
	.string "ANDRA: All that energy and tension\n"
	.string "in the air{PAUSE 25}…{PAUSE 25} It's all gone{PAUSE 15}…{PAUSE 15}$"

RuinsOfAlphS3_Evento_Final_Texto_13:
.string "GIOVANNI: So{PAUSE 25}…{PAUSE 25}\p"
	.string "{PLAYER}, the DEEP BOND{PAUSE 15}…{PAUSE 15}\n"
	.string "Just succeeded?\p"
	.string "So the teachings of the sages of\n"
	.string "JOHTO were true? Can a mortal POKÉMON\l"
	.string "achieve immortality if we are willing\l"
	.string "to stay on course along with it?\p"
	.string "To believe in it?$"

RuinsOfAlphS3_Evento_Final_Texto_13.1:
	.string "We all start from different points,\n"
	.string "but, at the same time, we are all\l"
	.string "able to touch the same sky?$"

RuinsOfAlphS3_Evento_Final_Texto_14:
.string "{PAUSE 5}…{PAUSE 5}$"

RuinsOfAlphS3_Evento_Final_Texto_15:
	.string "There is still so much to learn{PAUSE 15}…{PAUSE 15}$"

RuinsOfAlphS3_Evento_Final_Move_1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_down
step_end

RuinsOfAlphS3_Evento_Final_Move_2:
emote_exclamation_mark
step_end

RuinsOfAlphS3_Evento_Final_Move_3:
walk_in_place_down
step_end

RuinsOfAlphS3_Evento_Final_Move_4:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

RuinsOfAlphS3_Evento_Final_Move_5:
face_left
step_end

RuinsOfAlphS3_Evento_Final_Move_6:
walk_left
walk_up
step_end

RuinsOfAlphS3_Evento_Final_Move_7:
face_up
step_end

RuinsOfAlphS3_Evento_Final_Move_8:
walk_fast_up
walk_in_place_up
step_end

RuinsOfAlphS3_Evento_Final_Move_9:
face_right
step_end

RuinsOfAlphS3_Evento_Final_Move_10:
walk_fast_right
walk_in_place_down
step_end

RuinsOfAlphS3_Evento_Final_Move_11:
walk_up
step_end

RuinsOfAlphS3_Evento_Final_Move_12:
walk_slow_up
walk_slow_left
walk_in_place_left
step_end

RuinsOfAlphS3_Evento_Final_Move_13:
face_down
step_end

RuinsOfAlphS3_Combate_Giovanni::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Giovanni_Move_1
waitmovement 0x0
waitse
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Giovanni_Move_2
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Giovanni_Move_3
delay 10
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_4
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Giovanni_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_5
waitmovement 0x0
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_5.1
waitmovement 0x0
waitse
delay 10
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_5
waitmovement 0x0
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_4
waitmovement 0x0
delay 15
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox RuinsOfAlphS3_Combate_Giovanni_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RuinsOfAlphS3_Combate_Giovanni_Move_5
waitmovement 0x0
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 5
release
end

RuinsOfAlphS3_Combate_Giovanni_Move_5.1:
walk_in_place_left
step_end

RuinsOfAlphS3_Combate_Giovanni_Texto_1:
	.string "GIOVANNI: This is the final test,\n"
	.string "{PLAYER}. I can feel it.$"

RuinsOfAlphS3_Combate_Giovanni_Texto_2:
	.string "Before, it was the GOLDEN HO-OH.\p"
	.string "Now, it must be…$"

RuinsOfAlphS3_Combate_Giovanni_Texto_3:
.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

RuinsOfAlphS3_Combate_Giovanni_Texto_4:
.string "I won't be able to continue.$"

RuinsOfAlphS3_Combate_Giovanni_Texto_4.1:
	.string "If the legend is true, PRIMAL LUGIA\n"
	.string "regains all the power from the depths\l"
	.string "of the ocean.\l"
	.string "My GROUND TYPE POKÉMON won't stand a\l"
	.string "chance against such a POKÉMON.\p"
	.string "The title of 'MAJOR LEGENDARY' doesn't\n"
	.string "even make justice to his massive level.$"

RuinsOfAlphS3_Combate_Giovanni_Texto_4.2:
	.string "If only we could have accelerated\n"
	.string "a bit more the latest versions of\l"
	.string "MEWTWO…$"

RuinsOfAlphS3_Combate_Giovanni_Texto_5:
	.string "Now it's up to you, {PLAYER}. DRAGONs\n"
	.string "flee the GOLDEN HO-OH on sight, and\l"
	.string "GROUND POKÉMON are impotent against\l"
	.string "PRIMAL LUGIA. We'd absolutely\l"
	.string "underestimated this place, but you're\l"
	.string "the only one I know is closest to\l"
	.string "push until the limit achievable by any\l"
	.string "TRAINER.\p"
	.string "JOHTO's fate will be up to you.$"

RuinsOfAlphS3_Combate_Giovanni_Texto_6:
	.string "That's all I can do for you now. Your\n"
	.string "POKÉMON team is back in full strength.\l"
	.string "Show those LEGENDARIES the power of\l"
	.string "the DEEP BOND!$"

RuinsOfAlphS3_Combate_Giovanni_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_1.1:
emote_exclamation_mark
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_2:
walk_up
walk_left
walk_up
walk_up
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_3:
face_right
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_4:
face_left
step_end

RuinsOfAlphS3_Combate_Giovanni_Move_5:
face_up
step_end


RuinsOfAlphS3_Combate_Unown::
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 5
goto_if_gt RuinsOfAlphS2_Combate_Real_Unown_2
lock
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
trainerbattle_no_intro TRAINER_ESENCIA_LUGIA, RuinsOfAlphS3_Combate_Unown_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_1
applymovement 1, RuinsOfAlphS3_Combate_Unown_Move_1
waitmovement 0x0
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
removeobject 2
playse SE_M_EMBER
delay 20
msgbox RuinsOfAlphS2_Combate_Real_Unown_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_2
applymovement 1, RuinsOfAlphS3_Combate_Unown_Move_3
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Combate_Unown_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlphS3_Combate_Unown_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RuinsOfAlphS3_Combate_Unown_Move_4
waitmovement 0x0
delay 10
msgbox RuinsOfAlphS3_Combate_Unown_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_5
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlphS3_Combate_Unown_Move_6
waitmovement 0x0
waitse
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
fadescreen 1
delay 20
addobject 2
fadescreen 0
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 6
release
end

RuinsOfAlphS3_Combate_Unown_Texto_2:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10}$"

RuinsOfAlphS3_Combate_Unown_Texto_4:
	.string "GIOVANNI: I knew it! I knew\n"
	.string "you could do it!$"

RuinsOfAlphS3_Combate_Unown_Texto_5:
	.string "Now I understand the words of the\n"
	.string "ELDER MASTER better. He doesn't want\l"
	.string "to see the region at the mercy of a\l"
	.string "POKÉMON with uncontrolled power. If the\l"
	.string "PRIMAL FORMS of LUGIA and HO-OH are\l"
	.string "just the tests, I don't want to imagine\l"
	.string "the power of that ORIGINAL DRAGON.\l"
	.string "Something like that could cause a\l"
	.string "catastrophe worse than war. We're not\l"
	.string "going to risk that just to obtain\l"
	.string "information that could provide us with\l"
	.string "weapons to defend the region.$"

RuinsOfAlphS3_Combate_Unown_Texto_6:
	.string "You must prevent that person from\n"
	.string "returning KYUREM to its original form.\l"
	.string "We'll have time to investigate it,\l"
	.string "{PLAYER}, when all of JOHTO and KANTO\l"
	.string "are safe…$"


RuinsOfAlphS3_Combate_Unown_Move_1:
face_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_2:
face_down
step_end

RuinsOfAlphS3_Combate_Unown_Move_3:
walk_slow_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_4:
walk_in_place_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_5:
walk_slow_up
walk_slow_up
step_end

RuinsOfAlphS3_Combate_Unown_Move_6:
emote_exclamation_mark
walk_in_place_down
step_end
