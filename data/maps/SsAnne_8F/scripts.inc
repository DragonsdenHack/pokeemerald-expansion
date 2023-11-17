SsAnne_8F_MapScripts::
	.byte 0

SsAnne8F_2::
lock     
faceplayer     
msgbox SsAnne8F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne8F_Text_2:
.string "ANDRA: Be sure that you block any\n"
	.string "possible scape routes for the CAPTAIN.\l"
	.string "We0re gonna have a little chat with him.$"



SsAnne8F_7::
end



SsAnne8F_8::
end



SsAnne8F_9::
end



SsAnne8FDocumento_100::
msgbox SsAnne8FDocumento_Text_100, MSGBOX_SIGN   
end

SsAnne8FDocumento_Text_100:
.string "Eww!\n"
	.string "I shouldn't have looked!$"



SsAnne8FDocumento_101::
msgbox SsAnne8FDocumento_Text_101, MSGBOX_SIGN   
end

SsAnne8FDocumento_Text_101:
.string "How to prevent nausea…\n"
	.string "The CAPTAIN is reading this!$"

SsAnne_8F_Capitan::
applymovement 2, SsAnne_8F_Capitan_move_1
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_2
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_1 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_3
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_2 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_4
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_3 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_4 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_5
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 6
delay 20
playse SE_PIN
applymovement 2, SsAnne_8F_Capitan_move_6
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_5 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_6 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_7 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_8 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_7
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_9 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_10 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_9
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_11 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_12 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_11
applymovement 2, SsAnne_8F_Capitan_move_11
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 3
applymovement 3, SsAnne_8F_Capitan_move_12
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 1
applymovement 1, SsAnne_8F_Capitan_move_13
waitmovement 0x0
playse SE_EXIT
delay 15
addobject 4
applymovement 4, SsAnne_8F_Capitan_move_14
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_1
applymovement 2, SsAnne_8F_Capitan_move_1
applymovement 5, SsAnne_8F_Capitan_move_5
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 6
msgbox SsAnne_8F_Capitan_Text_14 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_15
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_15 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_16 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, SsAnne_8F_Capitan_move_11
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_18 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_19 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_20 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_21 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_22 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_23 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_16
waitmovement 0x0
applymovement 5, SsAnne_8F_Capitan_move_17
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_24 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAPITAN_1, SsAnne_8F_Capitan_Text_25
msgbox SsAnne_8F_Capitan_Text_26 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_18
waitmovement 0x0
delay 15
playmoncry SPECIES_GOLBAT, CRY_MODE_ENCOUNTER
delay 30
playse SE_M_WING_ATTACK
delay 30
playse SE_SUPER_EFFECTIVE
delay 30
playse SE_FAINT
delay 15
applymovement 2, SsAnne_8F_Capitan_move_19
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SsAnne_8F_Capitan_Text_27 MSGBOX_DEFAULT
waitfanfare
msgbox SsAnne_8F_Capitan_Text_28 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_29 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_30 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_20
msgbox SsAnne_8F_Capitan_Text_31 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_32 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_TENTACOOL, CRY_MODE_ENCOUNTER
msgbox SsAnne_8F_Capitan_Text_33 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_SCRATCH
delay 20
playse SE_M_TOXIC
delay 5
msgbox SsAnne_8F_Capitan_Text_34 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_5
applymovement 2, SsAnne_8F_Capitan_move_21
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_35 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, SsAnne_8F_Capitan_move_6
applymovement 3, SsAnne_8F_Capitan_move_6
applymovement 4, SsAnne_8F_Capitan_move_6
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_36 MSGBOX_AUTOCLOSE
applymovement 1, SsAnne_8F_Capitan_move_22
applymovement 3, SsAnne_8F_Capitan_move_22
applymovement 4, SsAnne_8F_Capitan_move_22
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_10
applymovement 2, SsAnne_8F_Capitan_move_1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_37 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_23
waitmovement 0x0
setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 27
release
end

SsAnne_8F_Capitan_Text_1:
.string "CAPTAIN: Is there anything I may do,\n"
	.string "for you young ones?$"

SsAnne_8F_Capitan_Text_2:
.string "ANDRA: Indeed there is, CAPTAIN. It's\n"
	.string "said that you have sailed around the 7\l"
	.string "seas, you are a legend among sailors\l"
	.string "because of the rare POKÉMON that you\l"
	.string "have seen.$"

SsAnne_8F_Capitan_Text_3:
.string "We were just wondering if you could give\n"
	.string "us prove of all those voyages by\l"
	.string "letting us take a look on the famous\l"
	.string "flask of yours, which contains one of\l"
	.string "the biggest mysteries of our world.$"

SsAnne_8F_Capitan_Text_4:
.string "CAPTAIN: You mean this.$"

SsAnne_8F_Capitan_Text_5:
.string "ANDRA: Wow, it is… enigmatic.$"

SsAnne_8F_Capitan_Text_6:
.string "CAPTAIN: Sure it is, young one, the\n"
	.string "POKÉMON that left this fragment is not\l"
	.string "as anything that we have ever seen.\l"
	.string "Have you heard about the\l"
	.string "PSEUDO-LEGENDARIES legends?$"

SsAnne_8F_Capitan_Text_7:
	.string "ANDRA: Not so much, CAPTAIN..$"

SsAnne_8F_Capitan_Text_8:
.string "CAPTAIN: I supposed that. In this\n"
	.string "region you can see LANCE's DRAGONITE,\l"
	.string "for example.$"

SsAnne_8F_Capitan_Text_9:
.string "CAPTAIN: These POKÉMON that, without\n"
	.string "being born with the features which\l"
	.string "LEGENDARIES were gifted with by\l"
	.string "nature, are able to grow and develop so\l"
	.string "that, after a long process, their\l"
	.string "capacities are as high or more than\l"
	.string "LEGENDARIES. PSEUDO-LEGENDARIES\l"
	.string "POKÉMON usually represent their region\l"
	.string "nature. keeping stored inside\l"
	.string "themselves that essence gave buy their\l"
	.string "region which will allow them to reach\l"
	.string "their whole potential.$"

SsAnne_8F_Capitan_Text_10:
.string "CAPTAIN: POKÉMON chosen among the\n"
	.string "mortals, who are gifted with the\l"
	.string "opportunity of entering divine terrain,\l"
	.string "that is what defines a\l"
	.string "PSEUDO-LEGENDARY.$"

SsAnne_8F_Capitan_Text_11:
.string "CAPTAIN: All the scientists that have\n"
	.string "researched about the POKÉMON that\l"
	.string "this fragment belongs to, say that they\l"
	.string "has many of the features that define a\l"
	.string "PSEUDO-LEGENDARY, but also shares\l"
	.string "aspects of pure LEGENDARIES. It's a\l"
	.string "unique case.$"

SsAnne_8F_Capitan_Text_12:
.string "ANDRA: It's impressive. You look like a\n"
	.string "really cultured man, and you may have\l"
	.string "more than a thousand stories to tell.$"

SsAnne_8F_Capitan_Text_13:
.string "CAPTAIN And you two look like two\n"
	.string "younglings who want to learn. I'd be glad\l"
	.string "to teach you anything, nevertheless…$"

SsAnne_8F_Capitan_Text_14:
.string "CAPTAIN: I know who you are and why you\n"
	.string "are here. A crew member warned us about\l"
	.string "certain organization that answers to\l"
	.string "the name of TEAM ROCKET, and your\l"
	.string "clothing matches exactly the\l"
	.string "description.$"

SsAnne_8F_Capitan_Text_15:
	.string "You know, among all the seas that I've\n"
	.string "sailed across, HOENN's are, with no\l"
	.string "doubt, the wadest, wildest and with the\l"
	.string "hugest diversity, but those were the\l"
	.string "only ones that could give me a true\l"
	.string "feeling of freedom. The feeling of\l"
	.string "knowing that you are far, far away from\l"
	.string "the darn corruption; a paradise gifted\l"
	.string "by nature with millennia of history,\l"
	.string "still to be discovered.$"

SsAnne_8F_Capitan_Text_16:
.string "And now, you come to tell me that two\n"
	.string "criminals, who came form a region whose\l"
	.string "water is polluted by the POWER PLANT\l"
	.string "and the CYCLING ROAD, are coming to\l"
	.string "steal from ME an unique item that\l"
	.string "reflects my labor as a sailor for the\l"
	.string "last 30 years. Oh, no, you don't have an\l"
	.string "enough level nor experience to do such\l"
	.string "thing.$"

SsAnne_8F_Capitan_Text_17:
.string "ANDRA: I'm sorry, CAPTAIN, but I\n"
	.string "disagree. There aren't seas as SEVII\l"
	.string "ISLANDS, which are truly enigmatic.$"

SsAnne_8F_Capitan_Text_18:
.string "CAPTAIN: Well, I'll admit you have a good\n"
	.string "taste. I supose that both of you come\l"
	.string "from there.$"

SsAnne_8F_Capitan_Text_19:
.string "And you may be right. SEVII ISLANDS is a\n"
	.string "place that I still have to fully explore.\l"
	.string "I've heard that among the waters that\l"
	.string "connect those 7 islands, there are a\l"
	.string "few pieces of land, non-explored, but\l"
	.string "inhabited by certain tribes, and as if it\l"
	.string "wasn't enough…$"

SsAnne_8F_Capitan_Text_20:
.string "Topographic maps suggest that there\n"
	.string "may be 8, 9 or maybe 10 islands on the\l"
	.string "surroundings. The name SEVII is just a\l"
	.string "formality due to the fact that only 7\l"
	.string "islands are inhabited.$"

SsAnne_8F_Capitan_Text_21:
.string "But… let's stop talking about\n"
	.string "geography, this is not a class. I'd be\l"
	.string "glad to keep talking for the rest of the\l"
	.string "day, but unluckily for you, you have\l"
	.string "come here to steal me something that I\l"
	.string "appreciate, and I won't let that happen.$"

SsAnne_8F_Capitan_Text_22:
.string "CAPTAIN: SAILORS, YOU TAKE CARE THE\n"
	.string "GIRL!$"

SsAnne_8F_Capitan_Text_23:
.string "ANDRA: Don't bother! It's ME who's gonna\n"
	.string "take care of YOU!$"

SsAnne_8F_Capitan_Text_24:
.string "CAPTAIN: I'll take care of you. Got any\n"
	.string "idea of what will happen to you? Sure\l"
	.string "don't, vile scoundrel. Your POKÉMON won't\l"
	.string "be able to scratch even a little my\l"
	.string "precious crew, which have been trained\l"
	.string "in the sea for years! I'll cut you in half\l"
	.string "and serve what's left of you in the bow's\l"
	.string "party!$"

SsAnne_8F_Capitan_Text_25:
.string "Who the hell are you?!$"

SsAnne_8F_Capitan_Text_26:
.string "ANDRA: GOLBAT, finish this! WING\n"
	.string "ATTACK!$"

SsAnne_8F_Capitan_Text_27:
.string "(ANDRA took the flask from the\n"
	.string "CAPTAIN).$"

SsAnne_8F_Capitan_Text_28:
.string "CAPTAIN: This can't be happening. Mi\n"
	.string "crew… you made fun of them, you made\l"
	.string "them look ridiculous and you are just\l"
	.string "two young grunts of a local gang. How\l"
	.string "dishonoring!$"

SsAnne_8F_Capitan_Text_29:
.string "ANDRA: HIGH RANK grunts, CAPTAIN. I've\n"
	.string "respected your rank, so please, do the\l"
	.string "same with ours.$"

SsAnne_8F_Capitan_Text_30:
.string "ANDRA: Moreover, we're going to make\n"
	.string "good use of this flask. We are going to\l"
	.string "investigate the darn POKÉMON that\l"
	.string "matches with the sample, instead of\l"
	.string "leaving it for being watched ‘till the\l"
	.string "end of times for remembering your good\l"
	.string "old days. Don't take it personally, we'll\l"
	.string "be sending you a letter with the\l"
	.string "results of our research, is it OK? That\l"
	.string "intel may be worthed few million bucks.$"

SsAnne_8F_Capitan_Text_31:
.string "CAPTAIN: You insolent young one! No\n"
	.string "one is getting out of here!$"

SsAnne_8F_Capitan_Text_32:
.string "ANDRA: TENTACOOL! Use Poison sting\n"
	.string "against the CAPTAIN!$"

SsAnne_8F_Capitan_Text_33:
.string "¡cool!$"

SsAnne_8F_Capitan_Text_34:
.string "CAPTAIN: Ugh!$"

SsAnne_8F_Capitan_Text_35:
.string "CAPTAIN: My head… Damn you, you\n"
	.string "poisoned me!$"

SsAnne_8F_Capitan_Text_36:
	.string "SAILORS: CAPTAIN! You OK?$"

SsAnne_8F_Capitan_Text_37:
.string "{PLAYER}! Now! This is the perfect\n"
	.string "moment for us to flee!$"

SsAnne_8F_Capitan_move_1:
face_up
step_end

SsAnne_8F_Capitan_move_2:
walk_in_place_left
step_end

SsAnne_8F_Capitan_move_3:
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_4:
walk_in_place_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_5:
walk_right
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_6:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_move_7:
walk_left
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_8:
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_9:
face_right
step_end

SsAnne_8F_Capitan_move_10:
face_down
step_end

SsAnne_8F_Capitan_move_11:
emote_exclamation_mark
face_down
step_end

SsAnne_8F_Capitan_move_12:
walk_right
walk_right
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_13:
walk_right
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_14:
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_15:
walk_right
walk_right
face_up
step_end

SsAnne_8F_Capitan_move_16:
walk_right
walk_right
walk_right
walk_down
step_end


SsAnne_8F_Capitan_move_17:
walk_left
walk_in_place_down
step_end


SsAnne_8F_Capitan_move_18:
walk_down
walk_down
walk_left
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_19:
walk_left
walk_up
walk_up
walk_up
step_end

SsAnne_8F_Capitan_move_20:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_move_21:
walk_down
walk_down
walk_down
walk_left
walk_in_place_right
step_end

SsAnne_8F_Capitan_move_22:
walk_up
walk_up
walk_up
step_end

SsAnne_8F_Capitan_move_23:
walk_down
walk_in_place_left
step_end

SsAnne_8F_Capitan_Papelera::
compare VAR_UNUSED_0x40F7, 26
goto_if_gt SsAnne_8F_Capitan_Papelera_2
msgbox SsAnne_8F_Capitan_Papelera_Texto_1 MSGBOX_AUTOCLOSE
release
end

SsAnne_8F_Capitan_Papelera_2::
msgbox SsAnne_8F_Capitan_Papelera_Texto_2 MSGBOX_AUTOCLOSE
release
end

SsAnne_8F_Capitan_Papelera_Texto_1:
.string "It's a trash can, pretty clean by the\n"
	.string "way.$"

SsAnne_8F_Capitan_Papelera_Texto_2:
	.string "Eww! I shouldn't have looked.$"

SsAnne_8F_Capitan_Marineros::
msgbox SsAnne_8F_Capitan_Marineros_Text_1 MSGBOX_SIGN
release
end


SsAnne_8F_Capitan_Marineros_Text_1:
.string "You OK, CAPTAIN?! We'll bring you\n"
	.string "something for the headache!$"
