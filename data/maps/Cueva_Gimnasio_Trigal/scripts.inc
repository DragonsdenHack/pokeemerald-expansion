Cueva_Gimnasio_Trigal_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Cueva_Gimnasio_Trigal_OnResume
	.byte 0

Cueva_Gimnasio_Trigal_OnResume:
	call Cueva_Gimnasio_Trigal_SetupEscapeWarp
	end

Cueva_Gimnasio_Trigal_SetupEscapeWarp::
	setescapewarp MAP_ROUTE53, 23, 1
	return


Cueva_Gimnasio_Trigal_Combate::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 136
goto_if_gt Cueva_Gimnasio_Trigal_Combate_2
playse SE_PIN
applymovement 2, Cueva_Gimnasio_Trigal_Combate_Move_1
waitmovement 0x0
delay 15
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_1 MSGBOX_AUTOCLOSE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_2 MSGBOX_AUTOCLOSE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_4 MSGBOX_AUTOCLOSE
playse 414
delay 40
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VALERIA, Cueva_Gimnasio_Trigal_Combate_Texto_7
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_8 MSGBOX_AUTOCLOSE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_9.2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_VULLABY, 25, ITEM_NONE
waitfanfare
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem 641
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE11_GET
setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
setvar VAR_UNUSED_0x40F7, 137
release
end

Cueva_Gimnasio_Trigal_Combate_Texto_11.1:
.string "And by the way, take this.$"

Cueva_Gimnasio_Trigal_Combate_Texto_11.2:
	.string "{PLAYER} obtained the TM59 HONE\n"
	.string "CLAWS from VALERIA!!$"

Cueva_Gimnasio_Trigal_Combate_Texto_11.3:
	.string "With SHARPEN, not only will you increase\n"
	.string "the POKÉMON's ATTACK, but also its\l"
	.string "ACCURACY. It's great if you have moves\l"
	.string "like ROCK SLIDE, IRON TAIL, or DRAGON\l"
	.string "RUSH!$"



Cueva_Gimnasio_Trigal_Combate_2::
msgbox Cueva_Gimnasio_Trigal_Combate_Texto_12 MSGBOX_AUTOCLOSE
release
end

Cueva_Gimnasio_Trigal_Combate_Move_1:
emote_exclamation_mark
step_end

Cueva_Gimnasio_Trigal_Combate_Texto_1:
	.string "VALERIA: Oh, wow, you've surprised me. I\n"
	.string "never expected you'd be willing to come\l"
	.string "all the way here just for a battle.$"

Cueva_Gimnasio_Trigal_Combate_Texto_2:
	.string "I guess I've gotten used to being\n"
	.string "surrounded by people who care more\l"
	.string "about their POKÉMON's appearance than\l"
	.string "the art of battling itself. Now that I\l"
	.string "see it in perspective, I've endured too\l"
	.string "much in GOLDENROD.$"

Cueva_Gimnasio_Trigal_Combate_Texto_3:
	.string "I'm glad to know that there are still\n"
	.string "young TRAINERS with aspirations, like\l"
	.string "you. The more I train and travel, the\l"
	.string "more I realize how little I know and how\l"
	.string "much room for improvement this vast\l"
	.string "world offers.$"

Cueva_Gimnasio_Trigal_Combate_Texto_4:
.string "{PAUSE 20}…{PAUSE 20}$"

Cueva_Gimnasio_Trigal_Combate_Texto_5:
	.string "You came for a POKÉMON battle, and you\n"
	.string "will have it.$"

Cueva_Gimnasio_Trigal_Combate_Texto_6:
	.string "I'll do my best along with the\n"
	.string "companions who have accompanied me on\l"
	.string "each new journey. {PLAYER}! I hope\l"
	.string "you're up to the challenge!$"

Cueva_Gimnasio_Trigal_Combate_Texto_7:
.string "Was my loyal KINGDRA defeated?$"

Cueva_Gimnasio_Trigal_Combate_Texto_8:
	.string "Oh… You've stunned me. I thought\n"
	.string "nobody could match the power and\l"
	.string "explosiveness of my KINGDRA. When it\l"
	.string "transformed one last time after a\l"
	.string "lifetime together and I witnessed the\l"
	.string "tremendous energy it unleashed, I\l"
	.string "thought it was unbeatable. You've\l"
	.string "proven me wrong.$"

Cueva_Gimnasio_Trigal_Combate_Texto_9:
	.string "Even that elder master from BLACKTHORN\n"
	.string "CITY was impressed, though\l"
	.string "disappointed to see that KINGDRA lost\l"
	.string "the DRAGON TYPE in exchange for the\l"
	.string "DARK TYPE. His granddaughter seemed\l"
	.string "very jealous of my POKÉMON. I think her\l"
	.string "name was CLAIR. I've learned a lot from\l"
	.string "this battle. I want to thank you; I\l"
	.string "can't remember the last time I had such\l"
	.string "a rival in front of me. This POKÉMON is\l"
	.string "for you.$"

Cueva_Gimnasio_Trigal_Combate_Texto_9.1:
	.string "Take this, there you have\n"
	.string "the PLAINBADGE.$"
	
Cueva_Gimnasio_Trigal_Combate_Texto_9.2:
	.string "I want to thank you. I can't remember\n"
	.string "the last time I faced a rival like you.\l"
	.string "This POKÉMON is for you.$"

Cueva_Gimnasio_Trigal_Combate_Texto_10:
.string "YOU OBTAINED A LV.25 VULLABY!!$"

Cueva_Gimnasio_Trigal_Combate_Texto_11:
	.string "Disregard the stereotype of the weak\n"
	.string "and susceptible FLYING TYPE; VULLABY\l"
	.string "has the potential to become an\l"
	.string "exceptional defensive wall. What's more,\l"
	.string "it can learn FOUL PLAY to utilize the\l"
	.string "opponent's PHYSICAL ATTACK against\l"
	.string "them without needing to rely on its own.\l"
	.string "It is great, isn't it?$"

Cueva_Gimnasio_Trigal_Combate_Texto_12:
	.string "I'm enjoying this place for now. It\n"
	.string "gives me the peace I'm looking for. I'll\l"
	.string "recharge my energy here before\l"
	.string "starting a new journey. Pleasure to\l"
	.string "meet you, {PLAYER}!$"

