MahoganyHouseCarbon_MapScripts::
	.byte 0


MahoganyHouseCarbon_Secundaria::
compare VAR_FORTREE_CITY_STATE, 1
goto_if_gt MahoganyHouseCarbon_Secundaria_2
lock
msgbox MahoganyHouseCarbon_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox MahoganyHouseCarbon_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_1
waitmovement 0x0
delay 10
msgbox MahoganyHouseCarbon_Secundaria_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MahoganyHouseCarbon_Secundaria_No
msgbox MahoganyHouseCarbon_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_2
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_3
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_4
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
msgbox MahoganyHouseCarbon_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_3
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_2
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_3
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
setvar VAR_FORTREE_CITY_STATE, 2
release
end

MahoganyHouseCarbon_Secundaria_No::
msgbox MahoganyHouseCarbon_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
release
end

MahoganyHouseCarbon_Secundaria_Move_4:
walk_in_place_up
step_end

MahoganyHouseCarbon_Secundaria_Move_2:
face_right
step_end

MahoganyHouseCarbon_Secundaria_Move_3:
face_player
step_end

MahoganyHouseCarbon_Secundaria_Move_1:
emote_exclamation_mark
face_player
step_end

MahoganyHouseCarbon_Secundaria_2::
lock
faceplayer
msgbox MahoganyHouseCarbon_Secundaria_Texto_13 MSGBOX_AUTOCLOSE
release
end

MahoganyHouseCarbon_Secundaria_Texto_1:
	.string "Those damn businessmen… They've\n"
	.string "betrayed us-me and my wife.$"

MahoganyHouseCarbon_Secundaria_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

MahoganyHouseCarbon_Secundaria_Texto_3:
.string "Would you help us?$"

MahoganyHouseCarbon_Secundaria_Texto_4:
.string "I understand. It's very risky.$"

MahoganyHouseCarbon_Secundaria_Texto_5:
	.string "We are the former coal manufacturers in\n"
	.string "AZALEA TOWN. A few months ago, we\l"
	.string "received an offer from a company.$"

MahoganyHouseCarbon_Secundaria_Texto_6:
	.string "They promised to expand our small COAL\n"
	.string "business throughout JOHTO and even to\l"
	.string "other regions. We were indifferent to\l"
	.string "it; we were already happy enough with\l"
	.string "supplying AZALEA TOWN and its\l"
	.string "surroundings.$"

MahoganyHouseCarbon_Secundaria_Texto_7:
	.string "But they ended up convincing us. The\n"
	.string "thing is, the agreement, which initially\l"
	.string "was meant to be a collaboration, ended\l"
	.string "up being the opposite.$"

MahoganyHouseCarbon_Secundaria_Texto_8:
	.string "They scammed us with the contract, and\n"
	.string "in doing so, they took our house in\l"
	.string "AZALEA, along with the small furnace we\l"
	.string "had in our basement.$"

MahoganyHouseCarbon_Secundaria_Texto_9:
	.string "They argued we were no longer capable\n"
	.string "of carrying out that task, and\l"
	.string "eventually, we were forced to come\l"
	.string "here.$"

MahoganyHouseCarbon_Secundaria_Texto_10:
	.string "If you were to go to AZALEA TOWN{PAUSE 15}…{PAUSE 15} to\n"
	.string "what is still our house, perhaps\l"
	.string "someone like you could do something. To\l"
	.string "enter our basement, you just have to\l"
	.string "press a secret button, right behind the\l"
	.string "painting next to the window.$"

MahoganyHouseCarbon_Secundaria_Texto_11:
	.string "There's nothing left for two old elders\n"
	.string "like us to do, but maybe you, young as\l"
	.string "you are, could reclaim by force what\l"
	.string "unfairly has been taken from us.$"

MahoganyHouseCarbon_Secundaria_Texto_12:
	.string "If you were to do so, not only would you\n"
	.string "preserve a part of JOHTO's heritage, my\l"
	.string "wife and I would be grateful to you for\l"
	.string "life.$"

MahoganyHouseCarbon_Secundaria_Texto_13:
	.string "Were you able to enter? Our home in\n"
	.string "AZALEA TOWN is located right beside the\l"
	.string "GYM, on the east side of town. You can\l"
	.string "activate our secret entrance with a\l"
	.string "button behind the painting next to the\l"
	.string "window.$"

MahoganyHouseCarbon_Anciana::
lock
msgbox MahoganyHouseCarbon_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
release
end
