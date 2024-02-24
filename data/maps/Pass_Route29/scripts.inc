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
	.string "I must be honest, the entire terrain\n"
	.string "from here to KANTO is precious, I wonder\l"
	.string "why something hasn't been built yet.$"



PassRoute29_3::
lock     
faceplayer     
msgbox Pass_Route29_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route29_Text_3:
	.string "There is nothing better than going to\n"
	.string "collect berries in nature!$"



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

Pass_Route29_Encuentro_Elm::
lock
applymovement OBJ_EVENT_ID_PLAYER, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_2
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_2 MSGBOX_AUTOCLOSE
msgbox Pass_Route29_Encuentro_Elm_Texto_3 MSGBOX_AUTOCLOSE
msgbox Pass_Route29_Encuentro_Elm_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Pass_Route29_Encuentro_Elm_Move_3
waitmovement 0x0
delay 15
applymovement 2, Pass_Route29_Encuentro_Elm_Move_4
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_5
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Pass_Route29_Encuentro_Elm_Texto_6 MSGBOX_DEFAULT
waitfanfare
additem ITEM_MEGA_RING
msgbox Pass_Route29_Encuentro_Elm_Texto_7 MSGBOX_AUTOCLOSE
msgbox Pass_Route29_Encuentro_Elm_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_6
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_7
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_8
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_1
waitmovement 0x0
msgbox Pass_Route29_Encuentro_Elm_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, Pass_Route29_Encuentro_Elm_Move_9
waitmovement 0x0
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 119
release
end

Pass_Route29_Encuentro_Elm_Texto_1:
	.string "But professor, the frontier with KANTO\n"
	.string "is on the ROUTE 26, not at the ROUTE 29\l"
	.string "end.$"

Pass_Route29_Encuentro_Elm_Texto_2:
	.string "I know, I'm asking you to block that\n"
	.string "zone just for a while, me and my aides\l"
	.string "are going to do an important\l"
	.string "investigation there, anyway there is\l"
	.string "nothing to see at east of ROUTE 29, you\l"
	.string "still can go to any town or city of\l"
	.string "JOHTO with that route closed.$"

Pass_Route29_Encuentro_Elm_Texto_3:
	.string "O-Okay professor, I will send two cops\n"
	.string "immediately to block that route.$"

Pass_Route29_Encuentro_Elm_Texto_4:
.string "All right.$"

Pass_Route29_Encuentro_Elm_Texto_5:
	.string "????: You must be {PLAYER}, aren't\n"
	.string "you? GIOVANNI already told me of your\l"
	.string "arrive, my name is ELM, I have dedicated\l"
	.string "my entire life to understand how does\l"
	.string "the evolution system of POKÉMON works,\l"
	.string "and right now, due to TEAM ROCKET\l"
	.string "invests, finally I am getting some\l"
	.string "results, proof of that, is the object\l"
	.string "that I will give you.$"

Pass_Route29_Encuentro_Elm_Texto_6:
	.string "{PLAYER} received a MEGA RING from\n"
	.string "PROF.ELM.$"

Pass_Route29_Encuentro_Elm_Texto_7:
	.string "I promised GIOVANNI that I will give a\n"
	.string "MEGA RING to each one CHIEF ADMIN., I\l"
	.string "hope you are conscious about the\l"
	.string "technology that you have now, with the\l"
	.string "MEGA RING you will be able to control a\l"
	.string "so unstable and uncontrolled process\l"
	.string "as the MEGA EVOLUTION is, if you have\l"
	.string "the correct one MEGA STONE, of course.$"

Pass_Route29_Encuentro_Elm_Texto_8:
.string "ELM: ...$"

Pass_Route29_Encuentro_Elm_Texto_9:
	.string "If I'm not wrong, you are here to\n"
	.string "compile info about the POKÉMON of the\l"
	.string "best trainers in this region, and to\l"
	.string "understand it better about that\l"
	.string "phenomenon that you call DEEP BOND,\l"
	.string "don't you?$"

Pass_Route29_Encuentro_Elm_Texto_10:
	.string "Let me advise you this, the JOHTO's\n"
	.string "GYMS are not as the KANTO ones, no one\l"
	.string "is obligated to accept challenges, the\l"
	.string "most of the LEADERS today in JOHTO are\l"
	.string "about to retire or are too busy in other\l"
	.string "things, they are very powerful trainers,\l"
	.string "of course, and very clever, they\l"
	.string "consider the war topic as a trivial\l"
	.string "event that they don't care about, they\l"
	.string "just are ignoring that, focusing on\l"
	.string "their own and their POKÉMON, and\l"
	.string "improving their magnificent technique.$"

Pass_Route29_Encuentro_Elm_Texto_11:
	.string "What I mean is you need to get their\n"
	.string "attention enough to; they give you the\l"
	.string "chance to fight against them, but\l"
	.string "GIOVANNI knows why he sent you and no\l"
	.string "one else, after all, you are the true\l"
	.string "KANTO CHAMPION.$"

Pass_Route29_Encuentro_Elm_Texto_12:
	.string "If you have success, and you can\n"
	.string "compile data about the characteristic\l"
	.string "POKÉMON of each LEADER, we will have\l"
	.string "invaluable information that can expand\l"
	.string "a POKÉMON's potential to unimaginable\l"
	.string "limits. Good luck, {PLAYER}, the region\l"
	.string "of JOHTO awaits you.$"

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
