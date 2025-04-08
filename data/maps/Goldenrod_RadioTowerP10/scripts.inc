Goldenrod_RadioTowerP10_MapScripts::
	.byte 0

Goldenrod_RadioTowerP10_NPC_1::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_1_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_1_Texto_1:
	.string "By studying radio waves, we're\n"
	.string "discovering new moves, some of them we\l"
	.string "find quite interesting.$"

Goldenrod_RadioTowerP10_NPC_2::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_2_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_2_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_2_Texto_1:
	.string "The power of a MINOR LEGENDARY can be\n"
	.string "surpassed by technology.$"

Goldenrod_RadioTowerP10_NPC_2_Texto_2:
	.string "But a MAJOR one like LUGIA or HO-OH…\n"
	.string "Well, that's a whole different story,\l"
	.string "and I doubt they will be surpassed this\l"
	.string "easily.$"

Goldenrod_RadioTowerP10_NPC_3::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_3_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_3_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_3_Texto_1:
	.string "The DIRECTOR invests a lot in security.$"

Goldenrod_RadioTowerP10_NPC_3_Texto_2:
	.string "Yet it is a very low percentage of the\n"
	.string "whole budget of this tower.$"

Goldenrod_RadioTowerP10_NPC_4::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_4_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_4_Texto_1:
	.string "Above us is the meeting room for…\n"
	.string "those who are above us.$"

Goldenrod_RadioTowerP10_NPC_5::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_5_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_5_Texto_2 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_5_Texto_3 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_5_Texto_1:
	.string "At your service SIR, BOSS ADMIN\n"
	.string "{PLAYER}.$"

Goldenrod_RadioTowerP10_NPC_5_Texto_2:
	.string "I am but one of the most powerful\n"
	.string "ROCKET EXECUTIVEs.$"

Goldenrod_RadioTowerP10_NPC_5_Texto_3:
	.string "GIOVANNI put me in here. As a sign of\n"
	.string "the KANTO-JOHTO union, he didn't\l"
	.string "hesitate to fund the RADIO TOWER.$"

Goldenrod_RadioTowerP10_NPC_6::
lock
faceplayer
msgbox Goldenrod_RadioTowerP10_NPC_6_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_6_Texto_1:
	.string "SILPH, the RADIO TOWER, and TEAM\n"
	.string "ROCKET are the triumvirate of the new\l"
	.string "KANTO-JOHTO.$"

Goldenrod_RadioTowerP10_NPC_7::
lock
faceplayer
checkitem ITEM_WISHING_PIECE
goto_if_eq VAR_RESULT, FALSE, Goldenrod_RadioTowerP10_NPC_7_Ala
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_4 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_5 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP10_NPC_7_Ala::
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP10_NPC_7_Texto_2 MSGBOX_NPC
delay 10
giveitem ITEM_WISHING_PIECE
delay 10
release
end

Goldenrod_RadioTowerP10_NPC_7_Texto_1:
	.string "SACRED ASH is very rare to see. On the\n"
	.string "other hand, there are some parts of\l"
	.string "HO-OH's body that are extremely rare.\l"
	.string "Parts that weren't reduced to dust.$"

Goldenrod_RadioTowerP10_NPC_7_Texto_2:
	.string "It is known as the RAINBOW WING. Here\n"
	.string "you are.$"

Goldenrod_RadioTowerP10_NPC_7_Texto_3:
.string "YOU OBTAINED A RAINBOW WING!$"

Goldenrod_RadioTowerP10_NPC_7_Texto_4:
	.string "Our studies have concluded that this\n"
	.string "item can increase HO-OH's attack and\l"
	.string "defense by 20%.$"

Goldenrod_RadioTowerP10_NPC_7_Texto_5:
	.string "In reality, it's impossible, but if you\n"
	.string "managed to get a HO-OH, you'd have a\l"
	.string "great battler.$"

Goldenrod_RadioTowerP10_Llave_1::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 2, 8, 0x335, FALSE
setmetatile 2, 7, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP10_Llave_2::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 11, 0x335, FALSE
setmetatile 14, 10, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP10_Llave_3::
msgbox Goldenrod_RadioTowerP10_Llave_1_Texto_1, MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 7, 0x335, FALSE
setmetatile 14, 6, 0x335, FALSE
special DrawWholeMapView
delay 60
release
end

Goldenrod_RadioTowerP10_Llave_1_Texto_1:
.string "You used the RADIO KEY.$"





