Goldenrod_RadioTowerP7_MapScripts::
	.byte 0

Goldenrod_RadioTowerP7_NPC_2::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_2_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_2_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_2_Texto_1:
	.string "The greatness of this place will remain\n"
	.string "incomprehensible for the most.$"

Goldenrod_RadioTowerP7_NPC_2_Texto_2:
	.string "That said… If you leave your value to\n"
	.string "the world's determination, it'll see only\l"
	.string "nil.$"

Goldenrod_RadioTowerP7_NPC_3::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_3_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_3_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_3_Texto_1:
	.string "It is from 5F on that RADIO TOWER means\n"
	.string "really something.$"

Goldenrod_RadioTowerP7_NPC_3_Texto_2:
	.string "The other departments actually open to\n"
	.string "the public are but a front to fund the\l"
	.string "research people like me take on here.$"

Goldenrod_RadioTowerP7_NPC_4::
lock
faceplayer
goto_if_set FLAG_HOENN_104, Goldenrod_RadioTowerP7_EventScript_ReceivedTM78
msgbox Goldenrod_RadioTowerP7_NPC_4_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_4_Texto_2 MSGBOX_NPC
giveitem ITEM_TM162
setflag FLAG_HOENN_104
delay 10
release
end

Goldenrod_RadioTowerP7_EventScript_ReceivedTM78::
msgbox Goldenrod_RadioTowerP7_NPC_4_Texto_4 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_4_Texto_1:
	.string "Everyday, we discover new interesting\n"
	.string "facts about waves. Some are more\l"
	.string "interesting than others though.$"

Goldenrod_RadioTowerP7_NPC_4_Texto_2:
	.string "I think you might like this.$"

Goldenrod_RadioTowerP7_NPC_4_Texto_3:
	.string "{PLAYER} obtained TM78 HEAT WAVE\n"
	.string "from the scientist.!$"

Goldenrod_RadioTowerP7_NPC_4_Texto_4:
	.string "The world is changing at an outstanding\n"
	.string "speed. Heh, only God can know where we\l"
	.string "will be a year from now.$"

Goldenrod_RadioTowerP7_NPC_5::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_5_Texto_1 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_5_Texto_1:
	.string "The DIRECTOR isn't that good with\n"
	.string "POKËMON. He focused on economics and\l"
	.string "business instead.$"

Goldenrod_RadioTowerP7_NPC_6::
lock
faceplayer
msgbox Goldenrod_RadioTowerP7_NPC_6_Texto_1 MSGBOX_NPC
delay 10
msgbox Goldenrod_RadioTowerP7_NPC_6_Texto_2 MSGBOX_NPC
release
end

Goldenrod_RadioTowerP7_NPC_6_Texto_1:
	.string "JOHTO's POLICE is getting modernized.$"

Goldenrod_RadioTowerP7_NPC_6_Texto_2:
	.string "They're bringing us POKÉMON from all\n"
	.string "over the world so we can improve our\l"
	.string "performance on duty. My personal\l"
	.string "favourites are MANECTRIC and\l"
	.string "ARCANINE.$"

Goldenrod_RadioTowerP7_EventScript_Policia::
	trainerbattle_single TRAINER_TRAINER_717, Goldenrod_RadioTowerP7_Text_PoliciaIntro, Goldenrod_RadioTowerP7_Text_PoliciaDefeated
	msgbox Goldenrod_RadioTowerP7_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



