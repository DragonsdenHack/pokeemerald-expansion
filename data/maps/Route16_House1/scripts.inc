Route16_House1_MapScripts::
	.byte 0

Route16House1_1::
end



Route16House1_2::
end

Route16_House1_Combate_Vuelo::
lock
faceplayer
compare VAR_UNUSED_0x40A1, 0
goto_if_gt Route16_House1_Combate_Vuelo_2
delay 10
playse SE_PIN
applymovement 1, Route16_House1_Combate_Vuelo_Move_1
waitmovement 0x0
msgbox Route16_House1_Combate_Vuelo_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_House1_Combate_Vuelo_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_House1_Combate_Vuelo_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route16_House1_Combate_Vuelo_3
msgbox Route16_House1_Combate_Vuelo_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VUELO, Route16_House1_Combate_Vuelo_Texto_6
msgbox Route16_House1_Combate_Vuelo_Texto_7 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_HM02_FLY
msgbox Route16_House1_Combate_Vuelo_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox Route16_House1_Combate_Vuelo_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40A1, 1
release
end

Route16_House1_Combate_Vuelo_Texto_1.1:
	.string "You obtained the HM02 FLY from the\n"
	.string "BIRD KEEPER!!$"

Route16_House1_Combate_Vuelo_2::
lock
faceplayer
msgbox Route16_House1_Combate_Vuelo_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route16_House1_Combate_Vuelo_3::
lock
faceplayer
msgbox Route16_House1_Combate_Vuelo_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route16_House1_Combate_Vuelo_Move_1:
emote_exclamation_mark
step_end

Route16_House1_Combate_Vuelo_Texto_1:
	.string "Oh, no! You have discovered my hideout!\n"
	.string "Here is where I secretly train my\l"
	.string "beloved bird POKÉMON, I have always\l"
	.string "been fascinated by the variety of\l"
	.string "species of this type and the way they\l"
	.string "grow.$"

Route16_House1_Combate_Vuelo_Texto_2:
.string "...\n"
	.string "...$"

Route16_House1_Combate_Vuelo_Texto_3:
	.string "Look, if you want to I could teach you\n"
	.string "about the best birds of the region, but\l"
	.string "you should keep this place a secret, is\l"
	.string "it okay?$"

Route16_House1_Combate_Vuelo_Texto_4:
	.string "I think I will change my strategy since\n"
	.string "now, everyone who finds this place I\l"
	.string "will give them a HM02 as prize and that's\l"
	.string "all, my birds POKÉMON don't need to\l"
	.string "prove their worth in a battle, I'm going\l"
	.string "to focus on my next big goal; evolving\l"
	.string "my PIDGEOTTO into a majestic PIDGEOT,\l"
	.string "the non-legendary bird with the\l"
	.string "greatest power in this region.$"

Route16_House1_Combate_Vuelo_Texto_5:
	.string "Cool! It has been a long time since I\n"
	.string "fought against a TRAINER! Get ready, I\l"
	.string "obtained RAINBOW BADGE due this team!$"

Route16_House1_Combate_Vuelo_Texto_6:
	.string "Oh! After this my poor POKÉMON will need\n"
	.string "a long rest.$"

Route16_House1_Combate_Vuelo_Texto_7:
	.string "I didn't expect to lose, or the world\n"
	.string "changed a lot since my exile, or you are\l"
	.string "such a capable TRAINER…{PAUSE 25} If you set\l"
	.string "your mind to it, you could go for all the\l"
	.string "GYM BADGES, someone like you must have\l"
	.string "this.$"

Route16_House1_Combate_Vuelo_Texto_8:
	.string "The HM02 will allow you to use FLY as in\n"
	.string "and out of a fight, you will appreciate\l"
	.string "it a lot when you have to move from one\l"
	.string "city to another, trust me.$"

Route16_House1_Combate_Vuelo_Texto_9:
	.string "Oh? Really? But at least do not tell to\n"
	.string "anyone of this place! Okay?$"
