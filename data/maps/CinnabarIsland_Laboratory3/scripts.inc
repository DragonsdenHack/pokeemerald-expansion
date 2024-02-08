CinnabarIsland_Laboratory3_MapScripts::
	.byte 0

CinnabarIslandLaboratory3_1::
lock     
faceplayer     
msgbox CinnabarIsland_Laboratory3_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Laboratory3_Text_1:
	.string "Even if you had the ARTICUNO itself and\n"
	.string "you just would want me to trade you a\l"
	.string "KOFFING, the POKÉMON that your\l"
	.string "organization has are dirt by the evil of\l"
	.string "your actions.$"



CinnabarIslandLaboratory3_2::
lock
faceplayer
msgbox CinnabarIslandLaboratory3_2_Texto_1 MSGBOX_DEFAULT
delay 20
msgbox CinnabarIslandLaboratory3_2_Texto_2 MSGBOX_DEFAULT
delay 20
applymovement 2, CinnabarIslandLaboratory3_2_Move_1
waitmovement 0x0
playse SE_PIN
msgbox CinnabarIslandLaboratory3_2_Texto_3 MSGBOX_DEFAULT
msgbox CinnabarIslandLaboratory3_2_Texto_4 MSGBOX_DEFAULT
release
end

CinnabarIslandLaboratory3_2_Move_1:
emote_exclamation_mark
step_end

CinnabarIslandLaboratory3_2_Texto_4:
.string "Oh...$"

CinnabarIslandLaboratory3_2_Texto_3:
	.string "So you have an OMANYTE, a KABUTO and an\n"
	.string "AERODACTYL? And you don't need an\l"
	.string "stupid machine to directly obtain the\l"
	.string "POKÉMON without needing to go through\l"
	.string "that resurrection process?$"

CinnabarIslandLaboratory3_2_Texto_2:
.string "... ...$"

CinnabarIslandLaboratory3_2_Texto_1:
	.string "Our FOSSILS revival technology won't be\n"
	.string "used by TEAM ROCKET. You'll have to\l"
	.string "accept seeing them extinct.$"
