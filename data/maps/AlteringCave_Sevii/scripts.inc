AlteringCave_Sevii_MapScripts::
	.byte 0

AlteringCaveSevii1::
end

AlteringCave_Sevii_Commbate_Zeus::
lock
faceplayer
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_ROUTE105_STATE, 4
goto_if_lt AlteringCave_Sevii_Commbate_Zeus_2
compare VAR_UNUSED_0x40F7, 97
goto_if_lt AlteringCave_Sevii_Commbate_Zeus_2
playse SE_PIN
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1
waitmovement 0x0
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_4 MSGBOX_AUTOCLOSE
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1
waitmovement 0x0
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_6 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_1, AlteringCave_Sevii_Commbate_Zeus_Texto_10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_11 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12 MSGBOX_AUTOCLOSE
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13 MSGBOX_AUTOCLOSE
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_2
waitmovement 0x0
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
fadeoutbgm 0
playse 500
release
end



AlteringCave_Sevii_Commbate_Zeus_2::
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_3 MSGBOX_AUTOCLOSE
release
end

AlteringCave_Sevii_Commbate_Zeus_Texto_1:
	.string "????: Did you find something?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_2:
.string "...$"

AlteringCave_Sevii_Commbate_Zeus_Texto_3:
	.string "Don't waste my time, kid; this is no joke.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_4:
	.string "South of SIX ISLAND and north of ONE\n"
	.string "ISLAND?! Were they talking about\l"
	.string "releasing two ancestral POKÉMON right\l"
	.string "there? It must be them!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_5:
	.string "Alright, thanks for your help; now I\n"
	.string "need to put a stop to them before they\l"
	.string "succeed.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_6:
	.string "How? Do you want to come along as well?\n"
	.string "Do you want to see those ancestral\l"
	.string "POKÉMON in person and witness the\l"
	.string "extent of their powers?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_7:
	.string "Don't be stupid, TRAINER; this mission\n"
	.string "isn't for everyone. Only those chosen\l"
	.string "and prepared throughout their entire\l"
	.string "lives, like me, can approach such a task\l"
	.string "with guarantees.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8:
	.string "Champion of your region? Did you defeat\n"
	.string "LANCE? I heard that the Champion is now\l"
	.string "someone named BLUE from PALLET TOWN.\l"
	.string "Nevertheless, it's irrelevant. That\l"
	.string "LANCE thought he had power and didn't\l"
	.string "even scratch the surface of the true\l"
	.string "potential a POKÉMON can reach. I told\l"
	.string "you, all trainers are the same in the\l"
	.string "eyes of the creator of everything,\l"
	.string "regardless of whether or not you're the\l"
	.string "Champion of your region. Your POKÉMON\l"
	.string "would fall just like those of the most\l"
	.string "inexperienced bug catcher.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9:
	.string "So you still persist... Well, just because\n"
	.string "you've helped me, you'll have the\l"
	.string "privilege of witnessing something\l"
	.string "you've never seen before. I won't need\l"
	.string "to use more than 50% of my power to\l"
	.string "make you see that certain laws of this\l"
	.string "world are unquestionable. Go ahead,\l"
	.string "CHAMPION! Show me what your mortal and\l"
	.string "vulnerable POKÉMON can do against the\l"
	.string "gods!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_10:
	.string "My royal and ancient POKÉMON... I surely\n"
	.string "underestimated you.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_11:
	.string "You're the first person in generations\n"
	.string "able to defeat the RAYQUAZA passed\l"
	.string "down through my lineage. It appears I\l"
	.string "underestimated the ultimate limits\l"
	.string "that a trainer in tune with their team\l"
	.string "can achieve, though it remains small\l"
	.string "compared to certain powers.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12:
	.string "Regardless, you've earned the right to\n"
	.string "be part of this mission at your own risk.\l"
	.string "I'll introduce myself; I am ZEUS,\l"
	.string "descendant of the oldest and holiest\l"
	.string "lineage in HOENN, tasked with ensuring\l"
	.string "the balance of the entire region and\l"
	.string "paying homage to the most powerful\l"
	.string "dragon that has ever existed: PRIMAL\l"
	.string "RAYQUAZA. My ancestors, witnessing the\l"
	.string "disasters caused by the clash between\l"
	.string "KYOGRE and GROUDON, the other two\l"
	.string "titans of HOENN, decided to use\l"
	.string "RAYQUAZA as an intermediary, appeasing\l"
	.string "the wrath of these beasts. To prevent\l"
	.string "such a disaster from happening again,\l"
	.string "they decided to confine these two\l"
	.string "POKÉMON to a place far from HOENN,\l"
	.string "where no one could ever find them,\l"
	.string "keeping their dangerous powers dormant\l"
	.string "until the end of time...$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13:
	.string "Until the arrival of ARCHIE and MAXIE,\n"
	.string "two radical extremists who believe the\l"
	.string "world will be a better place by raising\l"
	.string "sea levels or increasing habitable land.\l"
	.string "They have become accomplished\l"
	.string "specialists in this type of POKÉMON.\l"
	.string "Their eagerness to go beyond led them\l"
	.string "to learn everything about the legend of\l"
	.string "these two POKÉMON, to the point of\l"
	.string "finding the RED and BLUE orb, lost for\l"
	.string "millennia, and necessary to awaken both\l"
	.string "legendaries.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_14:
	.string "These orbs also function as a compass,\n"
	.string "as they shine brighter the closer they\l"
	.string "are to their origin: KYOGRE and\l"
	.string "GROUDON. Thanks to this, they have\l"
	.string "eventually found the place where they\l"
	.string "rest, and only I, the possessor of\l"
	.string "RAYQUAZA, can stop them.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_15:
	.string "However, you've just defeated me, and\n"
	.string "we've already lost precious time\l"
	.string "battling and talking.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_16:
	.string "Perhaps it's too late; I need to heal my\n"
	.string "team. In the meantime, you can go ahead,\l"
	.string "return to those places, and stop them\l"
	.string "before there's no turning back.$"

AlteringCave_Sevii_Commbate_Zeus_Move_1:
emote_exclamation_mark
step_end

AlteringCave_Sevii_Commbate_Zeus_Move_2:
face_right
step_end
