SsAnne_8F_MapScripts::
	.byte 0

SsAnne8F_2::
lock     
faceplayer     
msgbox SsAnne8F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne8F_Text_2:
	.string "ANDRA: {PLAYER}, make sure the\n"
	.string "Captain can't escape. Let's you and I\l"
	.string "have a little chat with him.$"



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
	.string "Shouldn't have looked!$"



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
	.string "Is there something I can help\n"
	.string "you with, kids?$"

SsAnne_8F_Capitan_Text_2:
	.string "ANDRA: Actually, there is. You see,\n"
	.string "Captain, you're known as a living legend\l"
	.string "in the seafaring world; you've sailed the\l"
	.string "seven seas and seen many rare POKÉMON,\l"
	.string "isn't that right?$"

SsAnne_8F_Capitan_Text_3:
	.string "We were wondering if you might show us a\n"
	.string "glimpse of all those travels by letting\l"
	.string "us see that famous jar - the jar that is\l"
	.string "said to hold one of the greatest\l"
	.string "mysteries in the world…$"

SsAnne_8F_Capitan_Text_4:
	.string "CAPTAIN: You mean, this jar here?$"

SsAnne_8F_Capitan_Text_5:
.string "ANDRA: Wow, it's so… mysterious.$"

SsAnne_8F_Capitan_Text_6:
	.string "CAPTAIN: That's right, kid. The POKÉMON\n"
	.string "this fragment belongs to is unlike\l"
	.string "anything you've ever seen before. Have\l"
	.string "you heard of the legend of the\l"
	.string "Pseudo-Legendary POKÉMON?$"

SsAnne_8F_Capitan_Text_7:
	.string "ANDRA: Pseudo-Legendary POKÉMON, sir?$"

SsAnne_8F_Capitan_Text_8:
	.string "CAPTAIN: In this region, you have\n"
	.string "Lance's Dragonite, for example.$"

SsAnne_8F_Capitan_Text_9:
	.string "CAPTAIN: These are POKÉMON that, while\n"
	.string "not born with the natural qualities of\l"
	.string "Legendaries, can grow and evolve to a\l"
	.string "point where, after a long process, they\l"
	.string "become as powerful-or even superior to- a\l"
	.string "typical Legendary. Pseudo-Legendary\l"
	.string "POKÉMON often represent the unique\l"
	.string "flora and fauna of their region. From\l"
	.string "their earliest stages, they carry within\l"
	.string "them the essence of their homeland,\l"
	.string "which allows them to reach their full\l"
	.string "potential later on.$"

SsAnne_8F_Capitan_Text_10:
	.string "CAPTAIN: POKÉMON chosen from among\n"
	.string "the mortals, given the potential\l"
	.string "opportunity to tread into divine\l"
	.string "territory-that's what\l"
	.string "Pseudo-Legendaries are.$"

SsAnne_8F_Capitan_Text_11:
	.string "CAPTAIN: Scientists who have studied\n"
	.string "this fragment say the POKÉMON it\l"
	.string "belongs to has many of the traits\l"
	.string "usually associated with\l"
	.string "Pseudo-Legendaries, but it also shares\l"
	.string "characteristics with true Legendaries.\l"
	.string "It's truly one of a kind.$"

SsAnne_8F_Capitan_Text_12:
	.string "ANDRA: Impressive. You really are a man\n"
	.string "of wisdom, Captain, with a thousand\l"
	.string "stories to tell.$"

SsAnne_8F_Capitan_Text_13:
	.string "CAPTAIN: And you two seem like young\n"
	.string "people eager to learn. I'd be happy to\l"
	.string "teach you, if it weren't for the fact\l"
	.string "that…$"

SsAnne_8F_Capitan_Text_14:
	.string "CAPTAIN: I know who you are and why\n"
	.string "you're here. One of the crew members\l"
	.string "already alerted us about a certain\l"
	.string "criminal organization called Team\l"
	.string "Rocket, and your outfits match their\l"
	.string "description exactly.$"

SsAnne_8F_Capitan_Text_15:
	.string "You know, I've sailed many seas, but\n"
	.string "none compare to Hoenn's-vast, wild, and\l"
	.string "full of life. They're the only ones that\l"
	.string "truly make you feel free, like you've\l"
	.string "left all the corruption of this world\l"
	.string "far behind. It's a paradise shaped by\l"
	.string "nature over millennia, with so much still\l"
	.string "waiting to be discovered.$"

SsAnne_8F_Capitan_Text_16:
	.string "And now you're telling me that two\n"
	.string "criminals from a region where the\l"
	.string "waters are polluted by the Power Plant\l"
	.string "and Cycling Road are going to just\l"
	.string "waltz in here and steal from me-a\l"
	.string "one-of-a-kind item that reflects my 30\l"
	.string "years of work as a sailor? Oh no, you\l"
	.string "don't have the skill or experience to\l"
	.string "pull that off.$"

SsAnne_8F_Capitan_Text_17:
	.string "ANDRA: Excuse me, Captain, but I must\n"
	.string "disagree. No seas compare to those of\l"
	.string "the Sevii Islands, and there is nowhere\l"
	.string "else in the world with more secrets than\l"
	.string "on the Sevii shores.$"

SsAnne_8F_Capitan_Text_18:
	.string "CAPTAIN: Well, you've got good taste,\n"
	.string "girl. I take it you both come from there.$"

SsAnne_8F_Capitan_Text_19:
	.string "You might be right. The Sevii Islands\n"
	.string "are still on my list to fully explore. I've\l"
	.string "heard that among the waters\l"
	.string "connecting the seven main islands,\l"
	.string "there are some islets-unexplored but\l"
	.string "home to certain tribes. And that's not\l"
	.string "all…$"

SsAnne_8F_Capitan_Text_20:
	.string "Topographic maps show 8, 9, and maybe\n"
	.string "even up to 10 islands in the area. The\l"
	.string "name Sevii is just a formality since\l"
	.string "only 7 of those islands are actually\l"
	.string "inhabited.$"

SsAnne_8F_Capitan_Text_21:
	.string "CAPTAIN: But this isn't a geography\n"
	.string "lesson. I'd love to stay and chat about\l"
	.string "all this, but the truth is, you came here\l"
	.string "to steal something precious to me, and\l"
	.string "I'm not about to let that happen.$"

SsAnne_8F_Capitan_Text_22:
.string "CAPTAIN: SAILORS!\n"
	.string "Take care of the girl!$"

SsAnne_8F_Capitan_Text_23:
.string "ANDRA: It's going to be ME\n"
	.string "taking care of YOU!$"

SsAnne_8F_Capitan_Text_24:
	.string "CAPTAIN: I'll deal with you. You have no\n"
	.string "idea what you're in for, you villain. Your\l"
	.string "POKÉMON are no match for my crew,\l"
	.string "hardened by years at sea! I'm going to\l"
	.string "cut you in half and serve what's left of\l"
	.string "you at the party abovedeck!$"

SsAnne_8F_Capitan_Text_25:
.string "Who the hell are you people?!$"

SsAnne_8F_Capitan_Text_26:
.string "ANDRA: GOLBAT, finish this!\n"
	.string "WING ATTACK!$"

SsAnne_8F_Capitan_Text_27:
.string "(ANDRA took the jar\n"
	.string "from the CAPTAIN).$"

SsAnne_8F_Capitan_Text_28:
	.string "CAPTAIN: This can't be happening. My\n"
	.string "crew, outdone and humiliated by a\l"
	.string "couple of young grunts from a local\l"
	.string "gang. What a disgrace!$"

SsAnne_8F_Capitan_Text_29:
	.string "ANDRA: High-ranking grunts, Captain.\n"
	.string "I've respected your rank, so you should\l"
	.string "respect ours.$"

SsAnne_8F_Capitan_Text_30:
	.string "ANDRA: Besides, look on the bright side.\n"
	.string "We'll actually put that jar to good use\l"
	.string "and figure out exactly which POKÉMON it\l"
	.string "came from, instead of just letting it\l"
	.string "gather dust and remind everyone of\l"
	.string "some old has-been's glory days. Don't\l"
	.string "take it personally. As a thank you for\l"
	.string "your cooperation, we'll send you a letter\l"
	.string "with the results of our research. How\l"
	.string "does that sound? That information\l"
	.string "could be worth millions, you know.$"

SsAnne_8F_Capitan_Text_31:
.string "CAPTAIN: You insolent brat!\n"
	.string "No one is leaving this cabin!$"

SsAnne_8F_Capitan_Text_32:
.string "ANDRA: TENTACOOL!\n"
	.string "POISON STING!$"

SsAnne_8F_Capitan_Text_33:
.string "cool!$"

SsAnne_8F_Capitan_Text_34:
.string "CAPTAIN: Hnrgh!$"

SsAnne_8F_Capitan_Text_35:
.string "CAPTAIN: My head…\n"
	.string "That thug poisoned me!$"

SsAnne_8F_Capitan_Text_36:
	.string "SAILORS: CAPTAIN!$"

SsAnne_8F_Capitan_Text_37:
.string "ANDRA: {PLAYER}! Now!\n"
	.string "We need to get out of here, fast!$"

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
.string "This trash can is\n"
	.string "shiny and clean.$"

SsAnne_8F_Capitan_Papelera_Texto_2:
	.string "Gross! Shouldn't have looked!$"

SsAnne_8F_Capitan_Marineros::
msgbox SsAnne_8F_Capitan_Marineros_Text_1 MSGBOX_SIGN
release
end


SsAnne_8F_Capitan_Marineros_Text_1:
.string "CAPTAIN! Are you hurt?\n"
	.string "We'll bring you an ANTIDOTE!$"
