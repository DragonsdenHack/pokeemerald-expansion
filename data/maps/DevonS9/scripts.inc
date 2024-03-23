DevonS9_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, DevonS9_OnFrame
	.byte 0

DevonS9_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 216, DevonS9_Escena_DLC_Escena_Final
	.2byte 0


DevonS9_Escena_DLC_Escena_Final::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DevonS9_Escena_DLC_Escena_Final_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 20
applymovement 37, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement 36, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_3
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_5
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox DevonS10_DLC_Escena_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 35, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 34, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_7
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_11 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 34, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 35, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 36, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 37, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 40, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
delay 20
msgbox DevonS10_DLC_Escena_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_14
delay 10
applymovement 40, DevonS9_Escena_DLC_Escena_Final_Move_13
applymovement 34, DevonS9_Escena_DLC_Escena_Final_Move_12
applymovement 35, DevonS9_Escena_DLC_Escena_Final_Move_11
applymovement 36, DevonS9_Escena_DLC_Escena_Final_Move_10
applymovement 37, DevonS9_Escena_DLC_Escena_Final_Move_9
waitmovement 0x0
delay 150
msgbox DevonS10_DLC_Escena_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_15
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox DevonS10_DLC_Escena_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_16
waitmovement 0x0
delay 10
msgbox DevonS10_DLC_Escena_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_3
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_20 MSGBOX_AUTOCLOSE
delay 10
msgbox DevonS10_DLC_Escena_Final_Texto_21 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_22 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_17
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox DevonS10_DLC_Escena_Final_Texto_24 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
setflag FLAG_UNUSED_0x26D
removeobject 34
removeobject 35
removeobject 36
removeobject 37
removeobject 40
msgbox DevonS10_DLC_Escena_Final_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DevonS9_Escena_DLC_Escena_Final_Move_18
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_18
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox DevonS10_DLC_Escena_Final_Texto_26 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_19
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 217
delay 40
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
checkplayergender
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end
release
end

DevonS9_Escena_DLC_Escena_Final_Move_19:
walk_down
walk_down
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_18:
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_left
walk_down
walk_left
walk_left
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_17:
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_16:
delay_8
face_left
step_end

DevonS9_Escena_DLC_Escena_Final_Move_15:
face_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_14:
emote_exclamation_mark
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
delay_8
walk_in_place_up
step_end

DevonS9_Escena_DLC_Escena_Final_Move_13:
walk_down
walk_down
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_12:
delay_8
delay_8
walk_in_place_right
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_11:
delay_8
delay_8
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_10:
delay_8
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_9:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_8:
emote_exclamation_mark
step_end

DevonS9_Escena_DLC_Escena_Final_Move_7:
walk_slow_right
step_end

DevonS9_Escena_DLC_Escena_Final_Move_6:
walk_in_place_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_5:
walk_slow_left
step_end

DevonS9_Escena_DLC_Escena_Final_Move_4:
walk_in_place_up
step_end

DevonS9_Escena_DLC_Escena_Final_Move_3:
face_up
delay_8
step_end

DevonS9_Escena_DLC_Escena_Final_Move_2:
walk_in_place_right
step_end

DevonS9_Escena_DLC_Escena_Final_Move_1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

DevonS10_DLC_Escena_Final_Texto_1:
	.string "AMD.SAPPHIRE: The mission has been a\n"
	.string "complete success, PRESIDENT.$"

DevonS10_DLC_Escena_Final_Texto_2:
	.string "ADM.AMATHYST: More than a success,\n"
	.string "their radio wave technology\l"
	.string "complements ours perfectly; with it, we\l"
	.string "can further optimize a POKÉMON's\l"
	.string "performance.$"

DevonS10_DLC_Escena_Final_Texto_3:
	.string "????: But there's something that\n"
	.string "eludes us, that phenomenon of the DEEP\l"
	.string "BOND{PAUSE 25}…{PAUSE 25} Have you experienced anything\l"
	.string "similar, S.MIGUEL?$"

DevonS10_DLC_Escena_Final_Texto_4:
.string "S.MIGUEL: No, I don't{PAUSE 25}…{PAUSE 25} that phenomenon only…$"

DevonS10_DLC_Escena_Final_Texto_5:
	.string "????: I see, it's only reserved for the\n"
	.string "most capable trainers, who have\l"
	.string "developed a special bond with one of\l"
	.string "their own.$"

DevonS10_DLC_Escena_Final_Texto_6:
.string "S.MIGUEL: {PAUSE 15}…{PAUSE 15}That's right{PAUSE 15}…$"

DevonS10_DLC_Escena_Final_Texto_7:
	.string "????: But that hasn't stopped them\n"
	.string "from creating that SUICUNE-& through\l"
	.string "artificial ways. Not to mention all\l"
	.string "those prototypes, with a similar base\l"
	.string "to ours.$"

DevonS10_DLC_Escena_Final_Texto_8:
	.string "ADM.RUBY: Also, remember that those two\n"
	.string "researchers are aware of DEOXYS,\l"
	.string "although they are unaware of its most\l"
	.string "valuable information.$"

DevonS10_DLC_Escena_Final_Texto_9:
	.string "ADM.EMERALD: What do you think could be\n"
	.string "its limit?$"

DevonS10_DLC_Escena_Final_Texto_10:
	.string "????: Knowing its ability to mutate in\n"
	.string "extreme conditions, I could say{PAUSE 15}…$"

DevonS10_DLC_Escena_Final_Texto_11:
	.string "…the Moon and the stars are its unique\n"
	.string "limit.$"

DevonS10_DLC_Escena_Final_Texto_12:
	.string "And right now, I'd like to speak with\n"
	.string "S.MIGUEL alone.$"

DevonS10_DLC_Escena_Final_Texto_13:
	.string "????: JOHTO is such a fascinating\n"
	.string "region, isn't it? A phenomenon\l"
	.string "nonexistent in other regions seems to\l"
	.string "be common there.$"

DevonS10_DLC_Escena_Final_Texto_14:
	.string "S.MIGUEL: Certainly, my specialty has\n"
	.string "always been FOSSILS. I had few\l"
	.string "opportunities to leave KANTO.$"

DevonS10_DLC_Escena_Final_Texto_15:
	.string "????: That's why you decided to join\n"
	.string "DEVON, right? One of HOENN's strong\l"
	.string "qualities is their ancestral POKÉMON.$"

DevonS10_DLC_Escena_Final_Texto_16:
	.string "S.MIGUEL: Of course, FOSSILS have\n"
	.string "always been my passion.$"

DevonS10_DLC_Escena_Final_Texto_17:
	.string "Although{PAUSE 25}…{PAUSE 25} I must be thankful,\n"
	.string "PRESIDENT, that brief expedition to\l"
	.string "the hidden places of JOHTO has changed\l"
	.string "my way of seeing the world. That's when\l"
	.string "I definitely accepted your proposal.$"

DevonS10_DLC_Escena_Final_Texto_18:
	.string "????: Of course. The SACRED DRAGON you\n"
	.string "were investigating. It's possible that,\l"
	.string "after all, it's a DEEP BOND isn't it? The\l"
	.string "purest and most powerful registered.$"

DevonS10_DLC_Escena_Final_Texto_19:
.string "S.MIGUEL: It was, although…$"

DevonS10_DLC_Escena_Final_Texto_20:
	.string "There may have been more than one, one\n"
	.string "similar but{PAUSE 25}…{PAUSE 25} buried by history.$"

DevonS10_DLC_Escena_Final_Texto_21:
	.string "????: I hope so, just as it happened to\n"
	.string "you, at the beginning we hired you for\l"
	.string "your extensive experience with\l"
	.string "FOSSILS, but…$"

DevonS10_DLC_Escena_Final_Texto_22:
	.string "The main reason that he is in this\n"
	.string "privileged position now is not precisely\l"
	.string "that.$"

DevonS10_DLC_Escena_Final_Texto_23:
	.string "After all, it may be his chance to dig up\n"
	.string "something much bigger than any FOSSIL.\l"
	.string "Are we getting it?$"

DevonS10_DLC_Escena_Final_Texto_24:
	.string "S.MIGUEL: We understand each other\n"
	.string "perfectly, PRESIDENT.$"

DevonS10_DLC_Escena_Final_Texto_25:
	.string "????: That's all, I wait for your\n"
	.string "progress with longing.$"

DevonS10_DLC_Escena_Final_Texto_26:
	.string "S.MIGUEL: Let's show everyone your true\n"
	.string "power, right WRONGSPACE?$"
