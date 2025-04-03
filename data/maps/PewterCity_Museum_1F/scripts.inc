PewterCity_Museum_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, PewterCity_Museum_1F_OnFrame
	.byte 0

PewterCity_Museum_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 57, PewterCity_Museum_1F_Miguel
	.2byte 0

PewterMuseum1::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 57
goto_if_gt PewterMuseum1_2
msgbox PewterMuseum1_Texto_1 MSGBOX_NPC
release
end

PewterMuseum1_2::
msgbox PewterMuseum1_Texto_2 MSGBOX_NPC
release
end

PewterMuseum1_Texto_2:
	.string "It is clear that appearances deceives,\n"
	.string "in the name of PEWTER MUSEUM, I thank\l"
	.string "you for the things you have done. You\l"
	.string "can enter for free whenever you want.$"

PewterMuseum1_Texto_1:
	.string "Why didn't you pay the entrance fee? We\n"
	.string "know that you don't pay the entrance\l"
	.string "fee anyway, but don't worry, you'll pay\l"
	.string "for everything at once when your time\l"
	.string "comes.$"


PewterMuseum2::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_2:
	.string "I must be grateful for my long life. I\n"
	.string "never thought I would live this long to\l"
	.string "see the bones of a dragon!$"



PewterMuseum3::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_3:
	.string "Thank you so much for helping us get rid\n"
	.string "of that opportunistic thief.$"



PewterMuseum5::
end



PewterMuseumDocumento_100::
msgbox PewterMuseumDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseumDocumento_Text_100:
.string "POKÉMON JOURNAL\p"
	.string "Special Feature: PEWTER GYM\n"
	.string "LEADER BROCK!\p"
	.string "BROCK rarely laughs, but is said to\n"
	.string "be unable to stop if he starts.$"



PewterMuseumDocumento_101::
showmonpic SPECIES_AERODACTYL_SKEL, 10, 3   
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_101, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_101:
.string "AERODACTYL Fossil\n"
    .string "A primitive and rare POKÉMON.$"



PewterMuseumDocumento_102::
showmonpic SPECIES_KABUTOPS_SKEL, 10, 3   
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_102, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_102:
	.string "KABUTOPS Fossil\n"
    .string "A primitive and rare POKÉMON.$"

PewterCity_Museum_1F_Miguel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_1
waitmovement 0x0
delay 10
playse MUS_RG_POKE_MANSION
msgbox PewterCity_Museum_1F_Miguel_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 7, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
waitse
msgbox PewterCity_Museum_1F_Miguel_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_7 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.1
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.2
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.4 MSGBOX_AUTOCLOSE
applymovement 7, PewterCity_Museum_1F_Miguel_Move_7
waitmovement 0x0
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_6.3
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_9 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_10 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.2
waitmovement 0x0
waitse
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_CMIGUEL_2, PewterCity_Museum_1F_Miguel_Texto_11
msgbox PewterCity_Museum_1F_Miguel_Texto_12 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_WARP_OUT
msgbox PewterCity_Museum_1F_Miguel_Texto_14 MSGBOX_AUTOCLOSE
delay 20
removeobject 7
fadescreen 0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_8
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox PewterCity_Museum_1F_Miguel_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_OMANYTE, 30, ITEM_MYSTIC_WATER
waitfanfare
applymovement 3, PewterCity_Museum_1F_Miguel_Move_9
waitmovement 0x0
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.1
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PewterCity_Museum_1F_Miguel_Move_10
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.2
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 6, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
waitse
msgbox PewterCity_Museum_1F_Miguel_Texto_20 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_11
waitmovement 0x0
delay 40
removeobject 4
delay 40
msgbox PewterCity_Museum_1F_Miguel_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_12
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_POISON_BARB
waitfanfare
msgbox PewterCity_Museum_1F_Miguel_Texto_22 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.3
applymovement 6, PewterCity_Museum_1F_Miguel_Move_13
waitmovement 0x0
clearflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_LITTLE_BOY
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 58
release
end

PewterCity_Museum_1F_Miguel_Move_4.3:
delay_16
face_left
delay_16
delay_8
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_4.2:
delay_8
face_up
delay_8
step_end

PewterCity_Museum_1F_Miguel_Move_4.1:
delay_8
face_left
delay_8
step_end

PewterCity_Museum_1F_Miguel_Move_6.1:
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_6.2:
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_6.3:
walk_in_place_up
step_end

PewterCity_Museum_1F_Miguel_Texto_1:
	.string "????: So rumors were true, there is an\n"
	.string "OLD AMBER in this place.$"

PewterCity_Museum_1F_Miguel_Texto_2:
.string "S.MIGUEL: YOU!$"

PewterCity_Museum_1F_Miguel_Texto_3:
	.string "PETREL: So this is the scientist that\n"
	.string "fooled us at MT.MOON, I thought you\l"
	.string "teached him a lesson at ROCK TUNNEL.$"

PewterCity_Museum_1F_Miguel_Texto_4:
	.string "S.MIGUEL: So it was, you made sure I\n"
	.string "wouldn't come back by taking away all my\l"
	.string "POKÉMON.$"
	
PewterCity_Museum_1F_Miguel_Texto_4.1:
	.string "But to your misfortune, one of\n"
	.string "the top ELITE guys in this region got\l"
	.string "interested in my story, and made me\l"
	.string "his workmate.$"

PewterCity_Museum_1F_Miguel_Texto_4.2:
	.string "With his resources, I have even better\n"
	.string "POKÉMON than the last time we battled,\p"
	.string "Nothing will save you this time!$"

PewterCity_Museum_1F_Miguel_Texto_5:
	.string "The dreaded AERODACTYL…\p"
	.string "Fiercest predator of prehistory, it's\n"
	.string "said his wild form 300 million years\l"
	.string "ago was even stronger than the one\l"
	.string "obtained by current resurrection\l"
	.string "methods.$"

PewterCity_Museum_1F_Miguel_Texto_5.1:
	.string "Even CHAMPION LANCE includes it\n"
	.string "in his dragon army…$"

PewterCity_Museum_1F_Miguel_Texto_6:
	.string "Yes! With a POKÉMON like this, the\n"
	.string "top FOSSIL, my team would take a leap\l"
	.string "to the next level, I would become an\l"
	.string "authority and the envy of POKÉMANIACS!$"

PewterCity_Museum_1F_Miguel_Texto_7:
	.string "S.MUSEUM: You are a shame to the\n"
	.string "scientific community!$"

PewterCity_Museum_1F_Miguel_Texto_8:
.string "S.MIGUEL: And what do you expect me\n"
	.string "to do? Stand by and watch how the\l"
	.string "region is plunged into mediocrity?$"

PewterCity_Museum_1F_Miguel_Texto_8.1:
	.string "I'm tired of seeing the same CUBONE,\n"
	.string "SLOWPOKE, RHYHORN or LICKITUNG.\l"
	.string "TRAINERS with a measly PIDGEOTTO or\l"
	.string "NIDORINO are already considered above\l"
	.string "average.$"

PewterCity_Museum_1F_Miguel_Texto_8.2:
	.string "In the current KANTO, if you want to\n"
	.string "have really strong POKEMON, the only\l"
	.string "ways are: sell your soul to the elites\l"
	.string "or cheating.$"

PewterCity_Museum_1F_Miguel_Texto_8.3:
	.string "But people like you know that fact well.\p"
	.string "Don't you, {PLAYER}? Tell the truth!$"

PewterCity_Museum_1F_Miguel_Texto_8.4:
	.string "Only matters the final result, at the\n"
	.string "end of the day, only BILL, LANCE and\l"
	.string "me will have an AERODACTYL!$"

PewterCity_Museum_1F_Miguel_Texto_9:
	.string "PETREL: You are hallucinating, you have\n"
	.string "a ROCKET EXECUTIVE and one of our top\l"
	.string "HIGH RANKS in front of you; you're not\l"
	.string "going anywhere with that FOSSIL.$"

PewterCity_Museum_1F_Miguel_Texto_10:
	.string "S.MIGUEL: I don't care about you,\n"
	.string "PETREL. My fight is against {PLAYER}.\p"
	.string "I told him that he will pay for the\n"
	.string "ROCK TUNNEL event, and here we are.$"

PewterCity_Museum_1F_Miguel_Texto_10.1:
	.string "Prepare to experience a world\n"
	.string "of pain, {PLAYER}!$"

PewterCity_Museum_1F_Miguel_Texto_11:
	.string "But my POKÉMON are even stronger!!$"

PewterCity_Museum_1F_Miguel_Texto_12:
	.string "S.MIGUEL: Grrrr{PAUSE 15}…{PAUSE 15} So it was not enough.\p"
	.string "I won't let you capture me again\n"
	.string "like last time.$"

PewterCity_Museum_1F_Miguel_Texto_13:
	.string "PETREL: Take away his POKÉMON!$"

PewterCity_Museum_1F_Miguel_Texto_14:
.string "S.MIGUEL USED ESCAPE ROPE!$"

PewterCity_Museum_1F_Miguel_Texto_15:
	.string "PETREL: Damn scientist. The next time\n"
	.string "we won't take away his POKÉMON, we will\l"
	.string "take him directly to the jail, that\l"
	.string "way, he won't cause any more trouble.$"

PewterCity_Museum_1F_Miguel_Texto_16:
	.string "He was just about to take the OLD\n"
	.string "AMBER from us, if it weren't for your\l"
	.string "intervention. Take this as a reward,\l"
	.string "young ROCKET.$"

PewterCity_Museum_1F_Miguel_Texto_17:
.string "YOU RECEIVED A LV:30 OMANYTE!$"

PewterCity_Museum_1F_Miguel_Texto_18:
	.string "PETREL: Wow, {PLAYER}!! You became\n"
	.string "stronger since you went to work along\l"
	.string "with GIOVANNI, even an EXECUTIVE as me\l"
	.string "would have had a tough time against the\l"
	.string "team that scientist had.$"

PewterCity_Museum_1F_Miguel_Texto_19:
	.string "S.MUSEUM: After this, we are indebted\n"
	.string "to you, if you want to do some tests\l"
	.string "with the FOSSIL for a while, we are\l"
	.string "fine with that.$"

PewterCity_Museum_1F_Miguel_Texto_20:
	.string "PETREL: Perfect, you won't regret it!\p"
	.string "We will allocate a percentage of our\n"
	.string "profits for your collaboration, TEAM\l"
	.string "ROCKET knows how to reciprocate favors\l"
	.string "like these and generously.$"

PewterCity_Museum_1F_Miguel_Texto_21:
	.string "This was possible due you, {PLAYER}.\p"
	.string "Take this as a personal present.$"

PewterCity_Museum_1F_Miguel_Texto_22:
	.string "The POISON BARB boosts a 20%\n"
	.string "the POISON TYPE moves.\p"
	.string "Will make your GOLBAT's POISON\n"
	.string "FANG even more lethal!$"

PewterCity_Museum_1F_Miguel_Texto_23:
	.string "Cya later, {PLAYER}, scientists…$"

PewterCity_Museum_1F_Miguel_Move_1:
walk_up
walk_in_place_up
step_end

PewterCity_Museum_1F_Miguel_Move_2:
walk_right
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_3:
emote_exclamation_mark
step_end

PewterCity_Museum_1F_Miguel_Move_4:
face_right
step_end

PewterCity_Museum_1F_Miguel_Move_5:
face_up
step_end

PewterCity_Museum_1F_Miguel_Move_6:
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_7:
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_8:
walk_down
walk_right
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_9:
walk_up
walk_up
walk_left
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_10:
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_11:
walk_up
walk_right
walk_up
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_12:
walk_down
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_13:
walk_left
walk_down
walk_down
walk_down
step_end

PewterCity_Museum_1F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE125_STATE, 0
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_3
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_2
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_2::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_Museum_1F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CINTAELEGIDA, PewterCity_Museum_1F_Entrenador_Especial_Texto_8
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHOICE_BAND
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE125_STATE, 1
release
end

PewterCity_Museum_1F_Entrenador_Especial_2_No::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_3::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1:
	.string "You obtained a CHOICE BAND from the\n"
	.string "SCIENTIST!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_1:
	.string "I will be honest, SEISMIC TOSS is a\n"
	.string "lousy move, just would be helpful for\l"
	.string "POKÉMON like CHANSEY who is unable to\l"
	.string "do physical damage, anyone who uses it\l"
	.string "on a CHARIZARD is an incompetent, I'm\l"
	.string "willing to give something that really\l"
	.string "causes damage to the TRAINER capable\l"
	.string "of collecting all 8 GYM BADGES.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_3:
	.string "What a pity, I am so sorry for making\n"
	.string "you waste your time.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_4:
	.string "The CHOICE BAND boosts a 50% the\n"
	.string "physical attack of the POKÉMON that\l"
	.string "it's holding it. But at the cost of\l"
	.string "restricting it to a single move, anyway,\l"
	.string "who cares about that restriction when\l"
	.string "it allows you to sweep everything in one\l"
	.string "hit?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_5:
	.string "Wow! Not everyday you can see someone\n"
	.string "with all the BADGES! I am tired of\l"
	.string "investigating the process of pearl\l"
	.string "formation inside the shell of CLOYSTER!\l"
	.string "If you can defeat me in battle, I'll give\l"
	.string "you an incredible item.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_7:
.string "All right!\n"
	.string "Finally!\l"
	.string "A worthy opponent!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_8:
.string "It was a great battle!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_9:
	.string "I haven't seen a TRAINER like you in all\n"
	.string "my years as a researcher, if you decide\l"
	.string "to take on the POKÉMON LEAGUE\l"
	.string "challenge, it's better to have this with\l"
	.string "you, it will increase your chances of\l"
	.string "success.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_10:
	.string "Blargh! I will keep defeating once again\n"
	.string "my scientist associates with no skills\l"
	.string "to battling!$"
