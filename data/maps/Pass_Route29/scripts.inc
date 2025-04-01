Pass_Route29_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Pass_Route29_OnFrame
.byte 0

Pass_Route29_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 118, Pass_Route29_Encuentro_Elm
	.2byte 0

PassRoute29_1::
lock     
faceplayer     
msgbox Pass_Route29_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_1:
	.string "I must be honest. The whole land from\n"
	.string "here to KANTO is precious. I wonder why\l"
	.string "nothing's been built here yet.$"



PassRoute29_3::
lock     
faceplayer     
msgbox Pass_Route29_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_3:
	.string "There's nothing better than going out\n"
	.string "to gather berries in nature!$"



PassRoute29_4::
lock     
faceplayer     
msgbox Pass_Route29_Text_4, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_4:
.string "Ahh!\n"
.string "Food feels so delicious\l"
.string "after a good walk!$"

Pass_Route29_Encuentro_Elm_Move_1.01:
walk_slow_down
step_end

Pass_Route29_Encuentro_Elm_Move_1.02:
walk_slow_up
delay_16
delay_16
step_end

Pass_Route29_Encuentro_Elm_Move_2.1:
walk_in_place_right
step_end


Pass_Route29_Encuentro_Elm::
lock
applymovement OBJ_EVENT_ID_PLAYER, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Pass_Route29_Encuentro_Elm_Move_1.01
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement 1, Pass_Route29_Encuentro_Elm_Move_2.1
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_2
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Pass_Route29_Encuentro_Elm_Move_2.1
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Pass_Route29_Encuentro_Elm_Move_3
waitmovement 0x0
waitse
delay 15
applymovement 2, Pass_Route29_Encuentro_Elm_Move_4
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_5
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Pass_Route29_Encuentro_Elm_Texto_6 MSGBOX_DEFAULT
waitfanfare
additem ITEM_MEGA_RING
msgbox Pass_Route29_Encuentro_Elm_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_6
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_7
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8.1
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8
waitmovement 0x0
delay 10
msgbox Pass_Route29_Encuentro_Elm_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Pass_Route29_Encuentro_Elm_Move_9
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Pass_Route29_Encuentro_Elm_Move_1.02
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
removeobject 2
setflag FLAG_NUEVA_292
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 119
release
end

Pass_Route29_Encuentro_Elm_Move_8.1:
delay_8
face_down
delay_16
delay_8
face_right
delay_16
delay_8
face_player
delay_8
step_end

Pass_Route29_Encuentro_Elm_Texto_1:
	.string "But, professor, the frontier with KANTO\n"
	.string "is on the ROUTE 26, not at the ROUTE 29\l"
	.string "end.$"

Pass_Route29_Encuentro_Elm_Texto_2:
	.string "I know. I'm asking you to blockade that\n"
	.string "zone for a while. My aides and I will\l"
	.string "have an important investigation there.\l"
	.string "There's nothing to see east of ROUTE 29\l"
	.string "anyway. Anyone could still make it to\l"
	.string "any town or city, even with that route\l"
	.string "closed.$"

Pass_Route29_Encuentro_Elm_Texto_3:
	.string "O-okay, professor. I'll send over two\n"
	.string "cops immediately to block off that\l"
	.string "route.$"

Pass_Route29_Encuentro_Elm_Texto_4:
.string "All right.$"

Pass_Route29_Encuentro_Elm_Texto_5:
	.string "????: You're {PLAYER}, aren't you?\p"
	.string "GIOVANNI's already told me of your\n"
	.string "arrival. My name is ELM. I've dedicated\l"
	.string "my entire life to understanding the\l"
	.string "workings of POKÉMON evolution, and\l"
	.string "right now, thanks to TEAM ROCKET's\l"
	.string "investments, I'm finally achieving\l"
	.string "results. The proof is in the object I'll\l"
	.string "give you.$"

Pass_Route29_Encuentro_Elm_Texto_6:
	.string "{PLAYER} received a MEGA RING from\n"
	.string "PROF.ELM.$"

Pass_Route29_Encuentro_Elm_Texto_7:
	.string "I promised GIOVANNI I'd give a MEGA\n"
	.string "RING to each of his CHIEF ADMINs.\p"
	.string "I hope you'll take good care of this.\p"
	.string "With the MEGA RING, you'll rein in\n"
	.string "the wild and unwieldy process known\l"
	.string "as 'MEGA EVOLUTION', if you have the\l"
	.string "right MEGA STONE, of course.$"

Pass_Route29_Encuentro_Elm_Texto_8:
.string "{PAUSE 15}…{PAUSE 15}$"

Pass_Route29_Encuentro_Elm_Texto_9:
	.string "If I'm not wrong, you're here to\n"
	.string "compile data about the top POKÉMON\l"
	.string "of the best TRAINERS in JOHTO.\p"
	.string "That means{PAUSE 15}…{PAUSE 15} better grasp the\n"
	.string "phenomenon you call 'DEEP BOND', right?$"

Pass_Route29_Encuentro_Elm_Texto_10:
	.string "Let me advise you on this: JOHTO's GYMs\n"
	.string "aren't the same as KANTO's. No one's\l"
	.string "obligated to take on challengers. Most\l"
	.string "LEADERs here these days are ready to\l"
	.string "retire, or they're knee-deep in other\l"
	.string "matters.$"

Pass_Route29_Encuentro_Elm_Texto_10.1:
	.string "The war's just some small thing they're\n"
	.string "uninterested in. Instead, they focus on\l"
	.string "their own and their POKÉMON to improve\l"
	.string "their magnificent technique.$"

Pass_Route29_Encuentro_Elm_Texto_11:
	.string "That's to say; you'll have to catch\n"
	.string "their eye to have them give you the\l"
	.string "opportunity for a battle. But that's\l"
	.string "why GIOVANNI sent only you, after all,\l"
	.string "you're the true CHAMPION of KANTO.$"

Pass_Route29_Encuentro_Elm_Texto_12:
	.string "If you're successful in compiling data\n"
	.string "on the characteristic POKÉMON of each\l"
	.string "LEADER, we'll have invaluable\l"
	.string "information that can expand a POKÉMON's\l"
	.string "potential to unimaginable limits.$"
	
Pass_Route29_Encuentro_Elm_Texto_12.1:
	.string "Good luck, {PLAYER}.\n"
	.string "JOHTO awaits you.$"

Pass_Route29_Encuentro_Elm_Move_1:
walk_down
step_end

Pass_Route29_Encuentro_Elm_Move_2:
walk_in_place_left
step_end

Pass_Route29_Encuentro_Elm_Move_3:
emote_exclamation_mark
step_end

Pass_Route29_Encuentro_Elm_Move_4:
walk_right
face_up
step_end

Pass_Route29_Encuentro_Elm_Move_5:
walk_up
step_end

Pass_Route29_Encuentro_Elm_Move_6:
face_down
step_end

Pass_Route29_Encuentro_Elm_Move_7:
face_up
step_end

Pass_Route29_Encuentro_Elm_Move_8:
walk_in_place_up
step_end

Pass_Route29_Encuentro_Elm_Move_9:
walk_down
walk_down
walk_down
step_end
