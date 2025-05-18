SilphS2_2_MapScripts::
	.byte 0

SilphS2_2_Cientifico_1::
lock
faceplayer
msgbox SilphS2_2_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

SilphS2_2_Cientifico_1_Texto_1:
	.string "Dedicating time to a non-productive\n"
	.string "objective may lead to a source of\l"
	.string "creativity.$"

SilphS2_2_Cientifico_2::
lock
faceplayer
msgbox SilphS2_2_Cientifico_2_Texto_1 MSGBOX_NPC
delay 10
msgbox SilphS2_2_Cientifico_2_Texto_2 MSGBOX_NPC
release
end

SilphS2_2_Cientifico_2_Texto_1:
	.string "I wonder what'll become of OAK and his\n"
	.string "family now. Those legendary battles\l"
	.string "between him and your LEADER shook\l"
	.string "every soul in the region.$"

SilphS2_2_Cientifico_2_Texto_2:
	.string "I think GIOVANNI would forgive him in\n"
	.string "respect to their old rivalry. But OAK's\l"
	.string "pride may lead him to reject that\l"
	.string "forgiveness.$"

SilphS2_2_Lorelei_Move_1:
walk_down
walk_down
delay_16
face_left
step_end

SilphS2_2_Lorelei_Move_2:
delay_8
walk_in_place_right
step_end

SilphS2_2_Lorelei_Move_3:
emote_exclamation_mark
step_end

SilphS2_2_Lorelei_Move_4:
walk_down
walk_left
step_end

SilphS2_2_Lorelei_Move_5:
walk_right
walk_right
step_end

SilphS2_2_Lorelei_Move_6:
face_up
step_end

SilphS2_2_Lorelei_Move_7:
face_left
step_end

SilphS2_2_Lorelei_Move_8:
walk_in_place_left
step_end

SilphS2_2_Lorelei_Move_9:
face_down
step_end

SilphS2_2_Lorelei_Move_10:
delay_16
delay_16
delay_8
face_left
delay_16
delay_16
delay_8
face_down
delay_16
delay_16
step_end

SilphS2_2_Lorelei_Move_11:
delay_8
face_down
delay_16
face_right
delay_16
face_up
delay_16
step_end

SilphS2_2_Lorelei_Move_12:
walk_down
walk_left
walk_left
walk_up
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
walk_down
walk_down
walk_down
step_end

SilphS2_2_Lorelei_Move_13:
delay_16
face_down
delay_16
delay_16
face_left
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_down
step_end


SilphS2_2_Lorelei::
lock
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
addobject 4
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_2
applymovement 4, SilphS2_2_Lorelei_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, SilphS2_2_Lorelei_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_2_Lorelei_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_5
applymovement 4, SilphS2_2_Lorelei_Move_4
waitmovement 0x0
delay 10
msgbox SilphS2_2_Lorelei_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_6
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, SilphS2_2_Lorelei_Move_9
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_10
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS2_2_Lorelei_Texto_10 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_11 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_9
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_11
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_13
applymovement 4, SilphS2_2_Lorelei_Move_12
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 4
setvar VAR_UNUSED_0x40F8, 11
release
end

SilphS2_2_Lorelei_Texto_1:
	.string "LORELEI: You{PAUSE 15}…{PAUSE 15} {PLAYER}, isn't it?$"

SilphS2_2_Lorelei_Texto_2:
	.string "I didn't expect you'd be so close to\n"
	.string "SILPH's PRESIDENT. Then again, you\l"
	.string "wouldn't be here otherwise.$"

SilphS2_2_Lorelei_Texto_3:
	.string "He's a great TRAINER.$"

SilphS2_2_Lorelei_Texto_4:
	.string "I'd come to offer him my position as a\n"
	.string "member of the ELITE FOUR.$"

SilphS2_2_Lorelei_Texto_5:
	.string "Yet{PAUSE 15}…{PAUSE 15} he seems quite busy with SILPH,\n"
	.string "so the position will remain open.$"

SilphS2_2_Lorelei_Texto_6:
	.string "I'm retiring to FOUR ISLAND. Those\n"
	.string "passionate days of battling are\l"
	.string "dwindling for me nowadays.$"

SilphS2_2_Lorelei_Texto_7:
	.string "I was certain ICE POKÉMON would see me\n"
	.string "through to victory, yet these losses\l"
	.string "have woken me up.$"

SilphS2_2_Lorelei_Texto_8:
	.string "I suppose ICE at its root is rather\n"
	.string "inflexible and stagnant, wouldn't you\l"
	.string "say?$"

SilphS2_2_Lorelei_Texto_9:
	.string "Well{PAUSE 15}…{PAUSE 15} what about you? Tell me!$"

SilphS2_2_Lorelei_Texto_10:
	.string "You were strong, but ultimately, the one\n"
	.string "to reach the peak as CHAMPION was RED.$"

SilphS2_2_Lorelei_Texto_11:
	.string "Frankly, I'd have liked that girl before\n"
	.string "you to have come out on top instead.\l"
	.string "That SNEASEL she carried had great\l"
	.string "potential.$"

SilphS2_2_Lorelei_Texto_12:
	.string "But that's how the cookie crumbles: RED\n"
	.string "defeated BLUE and won the title of\l"
	.string "CHAMPION.$"

SilphS2_2_Lorelei_Texto_13:
	.string "What a waste, that RED. Holing up like a\n"
	.string "hermit in MT. SILVER to train in such a{PAUSE 25}…{PAUSE 25}\l"
	.string "desolate cavern.$"

SilphS2_2_Lorelei_Texto_14:
	.string "There were some old glories there in the\n"
	.string "past, certainly. But now? He'll just\l"
	.string "waste away.$"

SilphS2_2_Lorelei_Texto_15:
	.string "You though{PAUSE 15}…{PAUSE 15}I see you can move forward.$"

SilphS2_2_Lorelei_Texto_16:
	.string "Very few have the privilege to walk\n"
	.string "through these halls. I'm sure you're\l"
	.string "here for a reason.$"

SilphS2_2_Lorelei_Texto_17:
	.string "But this is no longer my business. Now, I\n"
	.string "just want some peace and quiet{PAUSE 15}…{PAUSE 15}to\l"
	.string "return to my roots.$"

SilphS2_2_Lorelei_Texto_18:
	.string "If you happen to stop by FOUR ISLAND,\n"
	.string "don't forget to pay me a visit!$"

