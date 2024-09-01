Cianwood_Gym_MapScripts::
	.byte 0

CianwoodGym1::
end



CianwoodGym2::
end



CianwoodGym3::
end



CianwoodGym4::
end



CianwoodGym5::
end



CianwoodGym6::
end



CianwoodGym7::
end



CianwoodGym8::
end



CianwoodGym9::
end



CianwoodGym_EventScript_Karateka::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_3, CianwoodGym_Text_KaratekaIntro, CianwoodGym_Text_KaratekaDefeated
	msgbox CianwoodGym_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



CianwoodGym_EventScript_Karateka2::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_4, CianwoodGym_Text_Karateka2Intro, CianwoodGym_Text_Karateka2Defeated
	msgbox CianwoodGym_Text_Karateka2PostBattle, MSGBOX_AUTOCLOSE
	end



CianwoodGym_EventScript_Karateka3::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_5, CianwoodGym_Text_Karateka3Intro, CianwoodGym_Text_Karateka3Defeated
	msgbox CianwoodGym_Text_Karateka3PostBattle, MSGBOX_AUTOCLOSE
	end



CianwoodGym_EventScript_Karateka4::
	trainerbattle_single TRAINER_GRUNT_MAGMA_HIDEOUT_2, CianwoodGym_Text_Karateka4Intro, CianwoodGym_Text_Karateka4Defeated
	msgbox CianwoodGym_Text_Karateka4PostBattle, MSGBOX_AUTOCLOSE
	end

Cianwood_Gym_Combate_Anibal::
lock
faceplayer
compare VAR_VERDANTURF_TOWN_STATE, 0
goto_if_gt Cianwood_Gym_Combate_Anibal_3
compare VAR_UNUSED_0x40F7, 149
goto_if_gt Cianwood_Gym_Combate_Anibal_2
compare VAR_UNUSED_0x40F7, 149
goto_if_gt Cianwood_Gym_Combate_Anibal_2
msgbox Cianwood_Gym_Combate_Anibal_Texto_1 MSGBOX_NPC
msgbox Cianwood_Gym_Combate_Anibal_Texto_2 MSGBOX_NPC
msgbox Cianwood_Gym_Combate_Anibal_Texto_3 MSGBOX_NPC
delay 20
msgbox Cianwood_Gym_Combate_Anibal_Texto_4 MSGBOX_NPC
playse 414
delay 40
msgbox Cianwood_Gym_Combate_Anibal_Texto_5 MSGBOX_NPC
delay 20
msgbox Cianwood_Gym_Combate_Anibal_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_ANIBAL, Cianwood_Gym_Combate_Anibal_Texto_7
msgbox Cianwood_Gym_Combate_Anibal_Texto_8 MSGBOX_NPC
msgbox Cianwood_Gym_Combate_Anibal_Texto_9 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox Cianwood_Gym_Combate_Anibal_Texto_9.1 MSGBOX_DEFAULT
waitfanfare
msgbox Cianwood_Gym_Combate_Anibal_Texto_9.2 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox Cianwood_Gym_Combate_Anibal_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_STUFFUL, 25, ITEM_NONE
waitfanfare
msgbox Cianwood_Gym_Combate_Anibal_Texto_11 MSGBOX_NPC
delay 10
msgbox Cianwood_Gym_Combate_Anibal_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM65
msgbox Cianwood_Gym_Combate_Anibal_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Cianwood_Gym_Combate_Anibal_Texto_11.3 MSGBOX_NPC
setflag FLAG_BADGE13_GET
clearflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
setvar VAR_UNUSED_0x40F7, 150
release
end

Cianwood_Gym_Combate_Anibal_Texto_11.1:
.string "Hah! Take this TM with you too!$"

Cianwood_Gym_Combate_Anibal_Texto_11.2:
	.string "{PLAYER} obtained the TM65 LOW SWEEP\n"
	.string "from CHUCK!!$"

Cianwood_Gym_Combate_Anibal_Texto_11.3:
	.string "FIGHTING-TYPE POKÉMON usually don't\n"
	.string "have good SPEED. With this move, not\l"
	.string "only will you deal damage, but you'll\l"
	.string "also slow down your opponents!$"

Cianwood_Gym_Combate_Anibal_2::
msgbox Cianwood_Gym_Combate_Anibal_Texto_12 MSGBOX_NPC
release
end

Cianwood_Gym_Combate_Anibal_3::
compare VAR_VERDANTURF_TOWN_STATE, 1
goto_if_gt Cianwood_Gym_Combate_Anibal_4
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_1
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_2
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_3 MSGBOX_AUTOCLOSE
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_1
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Cianwood_Gym_Combate_Anibal_3_Move_2
waitmovement 0x0
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_7 MSGBOX_AUTOCLOSE
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_8 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
setvar VAR_VERDANTURF_TOWN_STATE, 2
release
end

Cianwood_Gym_Combate_Anibal_3_Move_1:
face_right
step_end

Cianwood_Gym_Combate_Anibal_3_Move_2:
face_player
step_end

Cianwood_Gym_Combate_Anibal_4::
msgbox Cianwood_Gym_Combate_Anibal_3_Texto_8 MSGBOX_AUTOCLOSE
release
end

Cianwood_Gym_Combate_Anibal_3_Texto_1:
	.string "CHUCK: Oh, {PLAYER}! What brings you\n"
	.string "back? If you wish to battle with me\l"
	.string "again, I'm afraid it's already too late.$"

Cianwood_Gym_Combate_Anibal_3_Texto_2:
	.string "Yeah… a few days ago, I freed my\n"
	.string "POKÉMON, as I told you after our battle\l"
	.string "almost a year ago…$"

Cianwood_Gym_Combate_Anibal_3_Texto_3:
	.string "Well, everything has its time, don't you\n"
	.string "think? Now, I'm humbly raising two little\l"
	.string "POLIWAG and MANKEY without any\l"
	.string "competitive aspirations.$"

Cianwood_Gym_Combate_Anibal_3_Texto_4:
	.string "So, what is the real reason for your\n"
	.string "visit?$"

Cianwood_Gym_Combate_Anibal_3_Texto_5:
.string "{PAUSE 15}…{PAUSE 15}$"

Cianwood_Gym_Combate_Anibal_3_Texto_6:
	.string "Mmm, I see. What you're saying is\n"
	.string "true-that place exists. It was\l"
	.string "discovered by the most skilled HIKERS\l"
	.string "of this city. But the history of the\l"
	.string "origin of that place is much older.$"

Cianwood_Gym_Combate_Anibal_3_Texto_7:
	.string "In the past, I explored it\n"
	.string "myself-decades ago. I wouldn't be able\l"
	.string "to tell you the exact location now.\l"
	.string "However, I know someone who knows it\l"
	.string "perfectly.$"

Cianwood_Gym_Combate_Anibal_3_Texto_8:
	.string "The inhabitant of the small house north\n"
	.string "of the city has returned. He often\l"
	.string "visits the area. I'm certain he'd be\l"
	.string "pleased to join you, once he gets to\l"
	.string "know you better. Good luck, {PLAYER}!$"

Cianwood_Gym_Combate_Anibal_Texto_1:
.string "CHUCK: Ah. {PLAYER}, right?\n"
	.string "Welcome to my humble GYM.$"

Cianwood_Gym_Combate_Anibal_Texto_2:
	.string "Here, humans and POKÉMON battle as\n"
	.string "equals. One of our principles is that if\l"
	.string "you can't lead by example and keep up\l"
	.string "with your own POKÉMON, you're not\l"
	.string "worthy of continuing to train them.$"

Cianwood_Gym_Combate_Anibal_Texto_3:
	.string "Therefore, talking about TRAINERS and\n"
	.string "POKÉMON loses its meaning. We all learn\l"
	.string "and improve together, so when we battle\l"
	.string "against others, we act as a single\l"
	.string "entity.$"

Cianwood_Gym_Combate_Anibal_Texto_4:
.string "{PAUSE 20}…{PAUSE 20}$"

Cianwood_Gym_Combate_Anibal_Texto_5:
	.string "Unfortunately, age has caught up with\n"
	.string "me. Not old age, but the end of my\l"
	.string "physical prime. At 51 years old, I've\l"
	.string "done everything possible to keep up\l"
	.string "with my top POKÉMON, and I've come to\l"
	.string "realize that I can no longer give 100%\l"
	.string "physically.$"

Cianwood_Gym_Combate_Anibal_Texto_6:
	.string "Recovering from big efforts takes me\n"
	.string "longer now, and I struggle to start\l"
	.string "before doing it, but I'll tell you\l"
	.string "something: when it comes to battle, I'm\l"
	.string "still the same old me.$"

Cianwood_Gym_Combate_Anibal_Texto_7:
	.string "Hell yeah, I knew that I was able to\n"
	.string "reach this level once again!$"

Cianwood_Gym_Combate_Anibal_Texto_8:
	.string "You're a great TRAINER, {PLAYER}.\n"
	.string "Just the challenge I needed to know\l"
	.string "exactly what my skill level is now.\l"
	.string "You've shown me that I can still hold on\l"
	.string "a little longer before my best POKÉMON\l"
	.string "continue their journey without me.$"

Cianwood_Gym_Combate_Anibal_Texto_9:
	.string "I'd like you to keep this POKÉMON; it has\n"
	.string "great fighting abilities.$"

Cianwood_Gym_Combate_Anibal_Texto_9.1:
	.string "Take this, here you have\n"
	.string "the STORMBADGE.$"

Cianwood_Gym_Combate_Anibal_Texto_9.2:
	.string "I'd like you to keep this POKÉMON. It\n"
	.string "has great fighting abilities.$"

Cianwood_Gym_Combate_Anibal_Texto_10:
.string "YOU OBTAINED A LV.25 STUFFUL!!$"

Cianwood_Gym_Combate_Anibal_Texto_11:
	.string "You won't find a FIGHTING TYPE POKÉMON\n"
	.string "like this anywhere in KANTO or JOHTO. It\l"
	.string "has the knack for taking physical hits\l"
	.string "like no other while delivering powerful\l"
	.string "blows.$"

Cianwood_Gym_Combate_Anibal_Texto_12:
	.string "I think I can hold on for one more year;\n"
	.string "after that, I'll release my POKÉMON and\l"
	.string "start fresh with a MANKEY and a\l"
	.string "POLIWAG-without any pretenses or\l"
	.string "pressure.$"

CianwoodGym_Gym_Dude::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 149
goto_if_gt CianwoodGym_Gym_Dude_2
msgbox CianwoodGym_Gym_Dude_Texto_1 MSGBOX_NPC
release
end

CianwoodGym_Gym_Dude_2::
msgbox CianwoodGym_Gym_Dude_Texto_2 MSGBOX_NPC
release
end

CianwoodGym_Gym_Dude_Texto_1:
	.string "It looks like CHUCK is going to take you\n"
	.string "seriously, kid. If you want a chance,\l"
	.string "you should listen to me and avoid close\l"
	.string "combat at all costs. CHUCK is\l"
	.string "indestructible in that regard. Focus on\l"
	.string "long-range PSYCHIC or FLYING TYPE\l"
	.string "attacks. Using POKÉMON with\l"
	.string "INTIMIDATE, ROCKY HELMET, and\l"
	.string "significant physical resilience will\l"
	.string "help you better counter the formidable\l"
	.string "force of his expertly trained\l"
	.string "FIGHTING-TYPE POKÉMON. I hope you\l"
	.string "make a great show!$"

CianwoodGym_Gym_Dude_Texto_2:
	.string "What an intense battle! CHUCK's\n"
	.string "POKÉMON almost broke the GYM in half\l"
	.string "trying to defeat yours! You're\l"
	.string "incredibly talented!$"




CianwoodGym_Estatua::
lock
compare VAR_UNUSED_0x40F7, 149
goto_if_gt CianwoodGym_Estatua_2
msgbox CianwoodGym_Estatua_Texto_1 MSGBOX_AUTOCLOSE
release
end

CianwoodGym_Estatua_2::
msgbox CianwoodGym_Estatua_Texto_2 MSGBOX_AUTOCLOSE
release
end


CianwoodGym_Estatua_Texto_1:
	.string "CIANWOOD POKÉMON GYM\n"
	.string "LEADER: CHUCK\p"
	.string "WINNING TRAINERS:\n"
	.string "(It is empty!)$"


CianwoodGym_Estatua_Texto_2:
	.string "CIANWOOD POKÉMON GYM\n"
	.string "LEADER: CHUCK\p"
	.string "WINNING TRAINERS:\n"
	.string "{PLAYER}$"

