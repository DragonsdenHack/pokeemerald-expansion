TorreDunsparce_P3_MapScripts::
	.byte 0


TorreDunsparce_P3_Encuentro_Zinnia::
lock
playse SE_EXIT
addobject 1
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, TorreDunsparce_P3_Encuentro_Zinnia_Move_1.1
waitmovement 0x0
special RemoveCameraObject
delay 15
playse SE_PIN
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_1
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_2
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_3
applymovement OBJ_EVENT_ID_CAMERA, TorreDunsparce_P3_Encuentro_Zinnia_Move_1.2
waitmovement 0x0
special RemoveCameraObject
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_4
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_5
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_6
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_7
waitmovement 0x0
delay 10
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_8
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_9
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_10
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_11
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, TorreDunsparce_P3_Encuentro_Zinnia_Move_1.3
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_12
waitmovement 0x0
special RemoveCameraObject
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_14
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_13
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_15
waitmovement 0x0
clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 1
setvar VAR_ROUTE118_STATE, 1
release
end

TorreDunsparce_P3_Encuentro_Zinnia_Move_15:
walk_up
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_14:
delay_8
delay_8
face_up
step_end


TorreDunsparce_P3_Encuentro_Zinnia_Move_13:
walk_up
walk_right
walk_up
walk_up
delay_8
delay_8
delay_8
delay_8
delay_8
delay_8
face_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_12:
face_left
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_11:
walk_left
walk_up
delay_8
delay_8
delay_8
face_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_10:
face_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_9:
walk_in_place_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_8:
face_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_7:
walk_in_place_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_6:
walk_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_5:
walk_slow_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_4:
walk_in_place_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_3:
walk_left
walk_up
walk_up
walk_right
walk_right
face_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_2:
walk_slow_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1.3:
walk_up
walk_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1.2:
walk_up
walk_up
walk_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1.1:
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1:
emote_exclamation_mark
delay_8
delay_8
face_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Texto_1:
.string "????: Huh?\n"
	.string "One more person here? Really?$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_2:
	.string "I thought this place was only known for\n"
	.string "those strange monks. But it doesn't\l"
	.string "matter much; my dragons brought me\l"
	.string "here, drawn by the energy of the wrong\l"
	.string "POKÉMON.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_3:
	.string "According to those in the southern\n"
	.string "pagoda, it was in this place where\l"
	.string "willpower itself reached its highest\l"
	.string "expression. Here, a POKÉMON destined to\l"
	.string "be something it didn't want overcame all\l"
	.string "external agents. It climbed to the\l"
	.string "highest extreme of its infinite\l"
	.string "possibilities and ended up becoming\l"
	.string "something that any theorist of the\l"
	.string "POKÉMON world would deem impossible.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_4:
	.string "It's inspiring, albeit difficult to\n"
	.string "believe, isn't it? However, this place,\l"
	.string "although much worn by the passage of\l"
	.string "time, emanates that kind of energy,\l"
	.string "characteristic of great legends...\l"
	.string "characteristic of major events that\l"
	.string "transcended history and forged the\l"
	.string "world as we know it today.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_5:
.string "The true is…\n"
	.string "This place reminds me…$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_6:
	.string "Who cares.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_6.1:
	.string "Hey, you, the girl up there is your\n"
	.string "friend, right? According to her, the\l"
	.string "POKÉMON I'm looking for returned to its\l"
	.string "original region. Do you think it's true?$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_7:
	.string "I see, you're probably right.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_8:
	.string "I hate to say this, but you both seem to\n"
	.string "have an extraordinary level. It's my\l"
	.string "hunch that you have something special,\l"
	.string "and I don't need to battle to confirm my\l"
	.string "suspicions. It's too obvious.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_9:
	.string "You emanate so much energy and power.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_10:
	.string "It's not my role to be involved in your\n"
	.string "story; we belong to different worlds.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_11:
	.string "I'm quite glad to have encountered you.\n"
	.string "In a place like this... you're like\l"
	.string "ooparts to me. Anyway... it doesn't\l"
	.string "matters, we won't cross paths again.$"


TorreDunsparce_P3_Encuentro_Zinnia_Texto_12:
	.string "Mmm... upon further reflection, your\n"
	.string "bond with those POKÉMON, the legend of\l"
	.string "this place... Perhaps I'm the oopart,\l"
	.string "don't you think?$"
