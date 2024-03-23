Olivine_Pub_MapScripts::
	.byte 0

OlivinePub1::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_1, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_1:
	.string "This place is open 24 hours a day. It\n"
	.string "was very popular among sailors to come\l"
	.string "here at 5-6 am, until it became a\l"
	.string "meeting point for retired sailors or\l"
	.string "those returning from work. The\l"
	.string "tradition has persisted to this day.$"



OlivinePub2::
end



OlivinePub3::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_3:
	.string "The CELADON CITY restaurant is a joke\n"
	.string "compared to this place. Here they bring\l"
	.string "you everything freshly caught from the\l"
	.string "sea, I'm going to feast!$"



OlivinePub4::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_4:
.string "In the sea, you can only trust yourself!\n"
.string "And I'm in my best!$"



OlivinePub5::
lock     
faceplayer     
msgbox OlivineCity_Pub_Text_5, MSGBOX_DEFAULT
release     
end

OlivineCity_Pub_Text_5:
.string "Hey, sailor!\n"
.string "Never forget you have to be willing\l"
.string "to get lost to find unreachable\l"
.string "destinations!\l"
.string "Waiter!\l"
.string "Another drink!$"

Olivine_Pub_Mision_Secundaria::
lock
faceplayer
compare VAR_EVER_GRANDE_CITY_STATE, 4
goto_if_gt Olivine_Pub_Mision_Secundaria_4
compare VAR_EVER_GRANDE_CITY_STATE, 3
goto_if_gt Olivine_Pub_Mision_Secundaria_3
compare VAR_EVER_GRANDE_CITY_STATE, 0
goto_if_gt Olivine_Pub_Mision_Secundaria_2
msgbox Olivine_Pub_Mision_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Olivine_Pub_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
msgbox Olivine_Pub_Mision_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_2
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_EVER_GRANDE_CITY_STATE, 1
release
end

Olivine_Pub_Mision_Secundaria_4::
msgbox Olivine_Pub_Mision_Secundaria_Texto_15 MSGBOX_AUTOCLOSE
release
end

Olivine_Pub_Mision_Secundaria_3::
delay 20
msgbox Olivine_Pub_Mision_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_BADGE
msgbox Olivine_Pub_Mision_Secundaria_Texto_9 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_1
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Olivine_Pub_Mision_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_2
waitmovement 0x0
applymovement 6, Olivine_Pub_Mision_Secundaria_Move_3
waitmovement 0x0
msgbox Olivine_Pub_Mision_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Olivine_Pub_Mision_Secundaria_Texto_13 MSGBOX_DEFAULT
givemon SPECIES_FROAKIE, 15, ITEM_WATER_GEM
waitfanfare
msgbox Olivine_Pub_Mision_Secundaria_Texto_14 MSGBOX_AUTOCLOSE
setvar VAR_EVER_GRANDE_CITY_STATE, 5
release
end

Olivine_Pub_Mision_Secundaria_2::
msgbox Olivine_Pub_Mision_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
release
end

Olivine_Pub_Mision_Secundaria_Move_3:
face_player
step_end

Olivine_Pub_Mision_Secundaria_Move_2:
face_up
step_end

Olivine_Pub_Mision_Secundaria_Move_1:
emote_exclamation_mark
step_end

Olivine_Pub_Mision_Secundaria_Texto_1:
	.string "I'm trying to get my life back on track\n"
	.string "after years of choosing the fast and\l"
	.string "easy path. Now It's time for me to make\l"
	.string "up for lost time…$"

Olivine_Pub_Mision_Secundaria_Texto_2:
.string "{PAUSE 20} …{PAUSE 20} …{PAUSE 20}$"

Olivine_Pub_Mision_Secundaria_Texto_3:
	.string "Oh{PAUSE 15}…{PAUSE 15} So you're something more than those\n"
	.string "GOLDENROD executives, maybe you can…$"

Olivine_Pub_Mision_Secundaria_Texto_4:
	.string "Listen, GOLDENROD is very big. I used to\n"
	.string "be part of a large network of POKÉMON\l"
	.string "trafficking. Eventually, I left, I\l"
	.string "couldn't stand some of their practices.\l"
	.string "Now I'm here, trying to become a SAILOR.$"

Olivine_Pub_Mision_Secundaria_Texto_5:
	.string "I only regret one thing: leaving behind\n"
	.string "my dear SNUBBULL; poor thing is still\l"
	.string "there. It's impossible for me to return,\l"
	.string "but you{PAUSE 15}…{PAUSE 15} Maybe you can make your way\l"
	.string "through that place and bring SNUBBULL\l"
	.string "back to me.$"

Olivine_Pub_Mision_Secundaria_Texto_6:
	.string "The network of POKÉ-TRAFFICKING is on\n"
	.string "the GOLDENROD underground, it's always\l"
	.string "protected by some BIKER. The only way\l"
	.string "to reach the boss is fighting. There's no\l"
	.string "other option. I trust you.$"

Olivine_Pub_Mision_Secundaria_Texto_7:
	.string "Have you been able to get in? remember\n"
	.string "the POKÉ-TRAFFICKING is on the\l"
	.string "GOLDENROD underground, always\l"
	.string "protected by some BIKER.$"

Olivine_Pub_Mision_Secundaria_Texto_8:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Olivine_Pub_Mision_Secundaria_Texto_9:
.string "{PLAYER} handed over the\n"
	.string "SNUBBULL to the SAILOR.$"

Olivine_Pub_Mision_Secundaria_Texto_10:
.string "Oh{PAUSE 15}…{PAUSE 15} My SNUBBULL…\n"
	.string "I thought I'd never see it again.$"

Olivine_Pub_Mision_Secundaria_Texto_11:
	.string "You're amazing, {PLAYER}? You must be\n"
	.string "one of the most powerful TRAINERS in\l"
	.string "this region, if not the most powerful.$"

Olivine_Pub_Mision_Secundaria_Texto_12:
	.string "I know this isn't a lot for someone like\n"
	.string "you, but I rescued this strange\l"
	.string "POKÉMON from being selled in the black\l"
	.string "market. It's yours.$"

Olivine_Pub_Mision_Secundaria_Texto_13:
.string "YOU OBTAINED A FROAKIE AT LEVEL 15!$"

Olivine_Pub_Mision_Secundaria_Texto_14:
	.string "I think it's the starter from some\n"
	.string "distant region. it can change type\l"
	.string "depending on the move it executes. It's\l"
	.string "very versatile!$"

Olivine_Pub_Mision_Secundaria_Texto_15:
	.string "Following an honest life will give you\n"
	.string "more satisfaction than a cheating life.\l"
	.string "Even with all the rewards in the word,\l"
	.string "the latter won't provide it. Keep that in\l"
	.string "mind.$"
