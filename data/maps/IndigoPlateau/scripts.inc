IndigoPlateau_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, IndigoPlateau_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_OnFrame
	.byte 0

IndigoPlateau_OnResume:
map_script_2 VAR_UNUSED_0x40DC, 11, IndigoPlateau_2
	.2byte 0

IndigoPlateau_2::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40DC, 12
end

IndigoPlateau_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 30, IndigoPlateau_Lance_Discurso
map_script_2 VAR_UNUSED_0x40DC, 12, IndigoPlateau_Escena_Lance
	.2byte 0

IndigoPlateau_Lance_Discurso::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IndigoPlateau_Lance_Discurso_move_1
waitmovement 0x0
special RemoveCameraObject
delay 50
playse SE_SLIDING_DOOR
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 1
delay 20
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox RocketHideout_6F_Escena_Lance_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_5
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_9 MSGBOX_AUTOCLOSE
delay 40
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
delay 60
playse SE_PIN
applymovement 5, IndigoPlateau_Lance_Discurso_move_6
applymovement 6, IndigoPlateau_Lance_Discurso_move_6
applymovement 21, IndigoPlateau_Lance_Discurso_move_6
applymovement 3, IndigoPlateau_Lance_Discurso_move_6
applymovement 2, IndigoPlateau_Lance_Discurso_move_6
applymovement 10, IndigoPlateau_Lance_Discurso_move_6
applymovement 4, IndigoPlateau_Lance_Discurso_move_6
applymovement 7, IndigoPlateau_Lance_Discurso_move_6
waitmovement 0x0
delay 60
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
msgbox RocketHideout_6F_Escena_Lance_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_5
delay 30
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 1
setvar VAR_UNUSED_0x40F7, 31
delay 80
warpsilent MAP_ROCKET_HIDEOUT_6F, 5, 27
release
end

RocketHideout_6F_Escena_Lance_Texto_1:
	.string "LANCE: Population of KANTO, this is\n"
	.string "LANCE speaking. New measures are\l"
	.string "coming for the region, and I want all of\l"
	.string "you to listen carefully from your homes,\l"
	.string "workplaces, or wherever you may be.$"

RocketHideout_6F_Escena_Lance_Texto_2:
	.string "Despite the improvements in recent\n"
	.string "months, there is still much work to be\l"
	.string "done before opening up us to the rest\l"
	.string "of the world. SEVII, HOENN, JOHTO... can\l"
	.string "wait. But you don't need to worry; SILPH\l"
	.string "is more than enough to supply all of\l"
	.string "KANTO population.$"

RocketHideout_6F_Escena_Lance_Texto_3:
	.string "That's why I grant full authority\n"
	.string "regarding TRAINER items, they will all\l"
	.string "depart from their headquarters in\l"
	.string "SAFFRON and be distributed mostly at\l"
	.string "the CERULEAN CITY SHOPPING CENTER.\l"
	.string "Small businesses that could compete\l"
	.string "are strictly prohibited, as they\l"
	.string "interfere with the region's general\l"
	.string "interest.$"

RocketHideout_6F_Escena_Lance_Texto_4:
	.string "On the other hand, I've been informed\n"
	.string "about a criminal band identifying\l"
	.string "themselves as -TEAM ROCKET-. Their\l"
	.string "presence is becoming more noticeable,\l"
	.string "and their criminal activities are\l"
	.string "hindering the region's advancement.$"

RocketHideout_6F_Escena_Lance_Texto_5:
	.string "If that is not enough, certain sectors\n"
	.string "of the population even support them.\l"
	.string "The law will face anyone who assists,\l"
	.string "sympathizes with, or conceals any\l"
	.string "information about this gang.$"

RocketHideout_6F_Escena_Lance_Texto_6:
	.string "Since this moment, all the marts at the\n"
	.string "region are totally forbidden for every\l"
	.string "ROCKET. Everyone who would dare to sell\l"
	.string "any product, provide resources or to\l"
	.string "carry out any type of economic deal\l"
	.string "with the TEAM ROCKET, will be severely\l"
	.string "punished.$"

RocketHideout_6F_Escena_Lance_Texto_7:
	.string "And trust me, if it weren't for the moral\n"
	.string "code of the nurses, I wouldn't feel the\l"
	.string "slightest pity in also forbidding them\l"
	.string "entry to any POKÉMON CENTER.$"

RocketHideout_6F_Escena_Lance_Texto_8:
	.string "In counterpart, anyone who provides us\n"
	.string "with information or even captures\l"
	.string "members of the organization on their\l"
	.string "own, will be rewarded.$"

RocketHideout_6F_Escena_Lance_Texto_9:
	.string "If the -TEAM ROCKET- insists, the\n"
	.string "ELITE 4 with LANCE in command will need\l"
	.string "to take action on the matter, and will\l"
	.string "have no mercy with the\l"
	.string "insurrectionists.$"

RocketHideout_6F_Escena_Lance_Texto_10:
	.string "That's all, if we row in the same\n"
	.string "direction, this region could restore its\l"
	.string "old shine… in a few years.$"

IndigoPlateau_Lance_Discurso_move_1:
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
walk_left
walk_left
step_end

IndigoPlateau_Lance_Discurso_move_2:
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_3:
walk_slow_right
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_4:
walk_slow_left
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_5:
face_up
step_end

IndigoPlateau_Lance_Discurso_move_6:
emote_exclamation_mark
step_end

IndigoPlateau_Escena_Lance::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IndigoPlateau_Escena_Lance_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideout_8F_Mision_Silph_text_36 MSGBOX_AUTOCLOSE
applymovement 16, IndigoPlateau_Escena_Lance_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_37 MSGBOX_AUTOCLOSE
applymovement 16, IndigoPlateau_Escena_Lance_Move_4
waitmovement 0x0
delay 20
fadescreen 1
delay 20
call Script_RemoveTint
delay 20
fadescreen 0
msgbox RocketHideout_8F_Mision_Silph_text_37.1 MSGBOX_DEFAULT
delay 100
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7
release
end

IndigoPlateau_Escena_Lance_Move_4:
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

IndigoPlateau_Escena_Lance_Move_3:
walk_slow_down
walk_slow_down
step_end

IndigoPlateau_Escena_Lance_Move_2:
face_down
step_end

IndigoPlateau_Escena_Lance_Move_1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end
