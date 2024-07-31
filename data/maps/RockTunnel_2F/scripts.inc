RockTunnel_2F_MapScripts::
	.byte 0

RockTunnel2F_2::
end



RockTunnel2F_3::
end



RockTunnel2F_4::
end



RockTunnel2F_5::
end



RockTunnel2F_6::
end



RockTunnel2F_7::
end



RockTunnel2F_8::
end



RockTunnel2F_9::
end



RockTunnel2F_10::
end



RockTunnel2F_11::
end



RockTunnel2F_12::
end



RockTunnel2F_15::
end



RockTunnel2F_22::
lock     
faceplayer     
msgbox RockTunnel2F_Text_22, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_22:
	.string "ARBOK, PERSIAN, TAUROS or SANDSLASH\n"
	.string "are so appreciated POKÉMON for TAMERS\l"
	.string "like me, but there is not any with a\l"
	.string "KANGASKHAN, do you even imagine how\l"
	.string "successfully will be my shows with that\l"
	.string "POKÉMON under my whip control?$"



RockTunnel2F_28::
lock     
faceplayer     
msgbox RockTunnel2F_Text_28, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_28:
	.string "Do you imagine a BUG CATCHER with a\n"
	.string "KANGASKHAN? All the prejudices labeling\l"
	.string "us as weaklings would finish!$"



RockTunnel2F_EventScript_Necio::
	trainerbattle_single TRAINER_RODNEY, RockTunnel2F_Text_NecioIntro, RockTunnel2F_Text_NecioDefeated
	msgbox RockTunnel2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker::
	trainerbattle_single TRAINER_ATSUSHI, RockTunnel2F_Text_HikerIntro, RockTunnel2F_Text_HikerDefeated
	msgbox RockTunnel2F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica::
	trainerbattle_single TRAINER_SPENCER, RockTunnel2F_Text_ChicaIntro, RockTunnel2F_Text_ChicaDefeated
	msgbox RockTunnel2F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica2::
	trainerbattle_single TRAINER_ROLAND, RockTunnel2F_Text_Chica2Intro, RockTunnel2F_Text_Chica2Defeated
	msgbox RockTunnel2F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio2::
	trainerbattle_single TRAINER_RICHARD, RockTunnel2F_Text_Necio2Intro, RockTunnel2F_Text_Necio2Defeated
	msgbox RockTunnel2F_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio3::
	trainerbattle_single TRAINER_HERMAN, RockTunnel2F_Text_Necio3Intro, RockTunnel2F_Text_Necio3Defeated
	msgbox RockTunnel2F_Text_Necio3PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker2::
	trainerbattle_single TRAINER_KIRK, RockTunnel2F_Text_Hiker2Intro, RockTunnel2F_Text_Hiker2Defeated
	msgbox RockTunnel2F_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, RockTunnel2F_Text_Hiker3Intro, RockTunnel2F_Text_Hiker3Defeated
	msgbox RockTunnel2F_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_2F_Combate_Miguel_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.1
waitmovement 0x0
goto RockTunnel_2F_Combate_Miguel

RockTunnel_2F_Combate_Miguel::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.2
waitmovement 0x0
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
msgbox RockTunnel_2F_Combate_Miguel_Texto_1 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
addobject 12
delay 30
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
delay 15
playse SE_BALL_OPEN
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
removeobject 13
delay 20
playse SE_BALL
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 12
msgbox RockTunnel_2F_Combate_Miguel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_1
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_4 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_5 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Combate_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_3
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_8 MSGBOX_AUTOCLOSE
playse MUS_RG_SILPH
msgbox RockTunnel_2F_Combate_Miguel_Texto_9 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
trainerbattle_no_intro TRAINER_CMIGUEL_1, RockTunnel_2F_Combate_Miguel_Texto_10
msgbox RockTunnel_2F_Combate_Miguel_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_2
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_12 MSGBOX_AUTOCLOSE
playse MUS_RG_ROCKET_HIDEOUT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 29
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_7
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_6
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_8
waitmovement 0x0
playfanfare MUS_OBTAIN_BADGE
msgbox RockTunnel_2F_Combate_Miguel_Texto_14 MSGBOX_DEFAULT
waitfanfare
msgbox RockTunnel_2F_Combate_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_10
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_16 MSGBOX_AUTOCLOSE
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_11
waitmovement 0x0
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 29
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
waitmovement 0x0
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_12
waitmovement 0x0
playse MUS_RG_MT_MOON
fadedefaultbgm
msgbox RockTunnel_2F_Combate_Miguel_Texto_17 MSGBOX_AUTOCLOSE
delay 20
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
fadescreen 1
delay 20
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 43
release
end

RockTunnel_2F_Combate_Miguel_Texto_1:
	.string "Finally! So the rumors were true! I have\n"
	.string "the MATERNAL POKÉMON in front of me, I\l"
	.string "am just at one-step away from catching\l"
	.string "it!$"

RockTunnel_2F_Combate_Miguel_Texto_2:
	.string "Perfect! With this POKÉMON my\n"
	.string "collection of strong and uncommon\l"
	.string "POKÉMON will be almost finished!$"

RockTunnel_2F_Combate_Miguel_Texto_3:
	.string "Did you lose something? So unlucky\n"
	.string "ROCKET, I saw it first, so this\l"
	.string "KANGASKHAN belongs to my POKÉMON team,\l"
	.string "so excuse m…$"

RockTunnel_2F_Combate_Miguel_Texto_4:
	.string "Hold on! You're that ROCKET I made the\n"
	.string "FOSSILS bet with, in MT. MOON!$"

RockTunnel_2F_Combate_Miguel_Texto_5:
	.string "I must admit that you were so unlucky\n"
	.string "and I was so lucky…$"

RockTunnel_2F_Combate_Miguel_Texto_6:
	.string "That fool might be as strong as he\n"
	.string "wants, but he's socially inept, he would\l"
	.string "accept any ideal you propose without\l"
	.string "denying it, despite having the power of\l"
	.string "his POKÉMON, fortunately just a few\l"
	.string "words claiming my ownership of those\l"
	.string "two FOSSILS were enough, along with\l"
	.string "telling him a few useful hints like where\l"
	.string "to revive those FOSSILS, to convince\l"
	.string "him to share them with me when he could\l"
	.string "have easily kept bot, hah!$"

RockTunnel_2F_Combate_Miguel_Texto_7:
	.string "You are definitely an unfortunate\n"
	.string "GRUNT, you missed your chance in\l"
	.string "MT.MOON at the last moment, and now you\l"
	.string "are seeing how I catch this valuable\l"
	.string "KANGASKHAN in front of you.$"

RockTunnel_2F_Combate_Miguel_Texto_8:
	.string "What? Is nobody going anywhere and\n"
	.string "that KANGASKHAN is yours?$"

RockTunnel_2F_Combate_Miguel_Texto_9:
	.string "Poor dreamer, you think I'm the same as\n"
	.string "back then, but for your information,\l"
	.string "I've been training in the secret floors\l"
	.string "of the all-mighty SILPH, where they had\l"
	.string "optimized my POKÉMON's potential, all\l"
	.string "TRAINERS around me are like ants\l"
	.string "besides me, so unfortunate, it has\l"
	.string "never been given to you ROCKET. You\l"
	.string "were never at the moment nor place nor\l"
	.string "favorable circumstances!$"

RockTunnel_2F_Combate_Miguel_Texto_10:
	.string "But what kind of joke is this!$"

RockTunnel_2F_Combate_Miguel_Texto_11:
	.string "At SILPH they told me that I would be\n"
	.string "able to defeat even a GYM LEADER with\l"
	.string "this last update! They scammed me!$"

RockTunnel_2F_Combate_Miguel_Texto_12:
	.string "????: And it's said by someone who built\n"
	.string "his current team by scamming people.$"

RockTunnel_2F_Combate_Miguel_Texto_13:
	.string "PROTON: Good job {PLAYER}, you've\n"
	.string "just disarmed a dangerous trainer along\l"
	.string "with the KANGASKHAN, I'll make sure to\l"
	.string "put him in his place before he escapes\l"
	.string "using the ESCAPE ROPE, this rougue\l"
	.string "knows all the tricks.$"

RockTunnel_2F_Combate_Miguel_Texto_14:
	.string "(PROTON TOOK ALL POKÉMON FROM\n"
	.string "SCIENTIST MIGUEL).$"

RockTunnel_2F_Combate_Miguel_Texto_15:
.string "SCIENTIST: Grrrrrrrr…$"

RockTunnel_2F_Combate_Miguel_Texto_16:
	.string "PROTON: So the rumors were true, who\n"
	.string "would say that in this cave would\l"
	.string "inhabit a KANGASKHAN{PAUSE 15}…{PAUSE 20} Okay, Imma\l"
	.string "return immediately to the headquarter\l"
	.string "{PLAYER}, the importance of what I\l"
	.string "carry with me requires it. You should\l"
	.string "also return as soon as possible,\l"
	.string "GIOVANNI will be pleased to reward you\l"
	.string "and inquire about the mission's details.\l"
	.string "Long live the GIOVANNI!$"

RockTunnel_2F_Combate_Miguel_Texto_17:
	.string "SCIENTIST: You do not have\n"
	.string "forgiveness, I lost the team that took\l"
	.string "me years to build just in a few seconds.\l"
	.string "Don't forget my words {PLAYER}! I\l"
	.string "won't rest until I witness your\l"
	.string "downfall!$"

RockTunnel_2F_Combate_Miguel_Move_1:
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_1.1:
walk_down
walk_in_place_right
step_end

RockTunnel_2F_Combate_Miguel_Move_1.2:
walk_in_place_right
step_end

RockTunnel_2F_Combate_Miguel_Move_2:
emote_exclamation_mark
step_end

RockTunnel_2F_Combate_Miguel_Move_3:
walk_in_place_up
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_4:
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

RockTunnel_2F_Combate_Miguel_Move_6:
walk_in_place_down
step_end

RockTunnel_2F_Combate_Miguel_Move_7:
walk_in_place_up
step_end

RockTunnel_2F_Combate_Miguel_Move_8:
walk_right
walk_right
walk_down
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_9:
walk_left
walk_up
walk_left
face_down
step_end

RockTunnel_2F_Combate_Miguel_Move_10:
face_up
step_end

RockTunnel_2F_Combate_Miguel_Move_11:
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
walk_down
walk_down
step_end

RockTunnel_2F_Combate_Miguel_Move_12:
walk_left
walk_left
step_end

RockTunnel_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE123_STATE, 0
goto_if_gt RockTunnel_2F_Entrenador_Especial_3
msgbox RockTunnel_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RockTunnel_2F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt RockTunnel_2F_Entrenador_Especial_2
msgbox RockTunnel_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

RockTunnel_2F_Entrenador_Especial_2::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RockTunnel_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox RockTunnel_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ROCAAFILADA, RockTunnel_2F_Entrenador_Especial_Texto_8
msgbox RockTunnel_2F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM56
msgbox RockTunnel_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox RockTunnel_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE123_STATE, 1
release
end

RockTunnel_2F_Entrenador_Especial_2_No::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end




RockTunnel_2F_Entrenador_Especial_3::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

RockTunnel_2F_Entrenador_Especial_Texto_1.1:
	.string "You obtained TM71 STONE EDGE from a\n"
	.string "TRAINER!$"

RockTunnel_2F_Entrenador_Especial_Texto_1:
	.string "ROCK SLIDE is a great move, but\n"
	.string "sometimes its power is not enough, and\l"
	.string "that flinch bonus is not worthy many of\l"
	.string "ROCK-types as GOLEM or RHYDON due\l"
	.string "their poor speed, It's been a while\l"
	.string "since I've been looking for a TRAINER\l"
	.string "worthy of battling me. You have no idea\l"
	.string "how long I've been training in this cave,\l"
	.string "those HIKERS and POKÉMANIACS already\l"
	.string "bore me due their low level, I will fight\l"
	.string "you against someone that have the 8\l"
	.string "GYM BADGES, if you have them and defeat\l"
	.string "me, I will give you something even more\l"
	.string "devastating than ROCK SLIDE.$"

RockTunnel_2F_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

RockTunnel_2F_Entrenador_Especial_Texto_3:
	.string "Nah, seems like that you are not ready\n"
	.string "enough yet, I will keep training alone\l"
	.string "here until a worthy opponent appears.$"

RockTunnel_2F_Entrenador_Especial_Texto_4:
	.string "STONE EDGE has 100 of POWER and 80 of\n"
	.string "ACCURATE, although it improvable\l"
	.string "ACCURATION, it has an high critical-hit\l"
	.string "chance, and it is perfect coverage for\l"
	.string "EARTHQUAKE, POKÉMON as RHYDON, GOLEM,\l"
	.string "AERODACTYL, or even MACHAMP will\l"
	.string "destroy battles with this movement.$"

RockTunnel_2F_Entrenador_Especial_Texto_5:
	.string "Is it what I think it is? You must be\n"
	.string "very strong to defeat all LEADERS! My\l"
	.string "team is excited to discover its limits\l"
	.string "at once!$"

RockTunnel_2F_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

RockTunnel_2F_Entrenador_Especial_Texto_7:
	.string "Let's see if you are able to get me out\n"
	.string "of my boredom.$"

RockTunnel_2F_Entrenador_Especial_Texto_8:
	.string "It was the best fight I had since I\n"
	.string "came here!$"

RockTunnel_2F_Entrenador_Especial_Texto_9:
	.string "Hell, definitely, you have the skill of\n"
	.string "the best TRAINERS on this region, as I\l"
	.string "said, here you have.$"

RockTunnel_2F_Entrenador_Especial_Texto_10:
	.string "Sadly, I'll have to keep training with\n"
	.string "the same HIKERS and POKÉMANIACS\l"
	.string "again…$"
