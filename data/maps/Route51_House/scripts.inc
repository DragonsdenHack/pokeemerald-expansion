Route51_House_MapScripts::
	.byte 0

Route51House1::
lock     
faceplayer     
msgbox Route51_House1_Text_1, MSGBOX_DEFAULT
release     
end

Route51_House1_Text_1:
	.string "Oh, the time flux… It has never stopped,\n"
	.string "and it never will. Soon, the 20th\l"
	.string "century will end to give way to the\l"
	.string "21st, and everything that has happened\l"
	.string "in this present period will gradually\l"
	.string "fade to give way to new events.\l"
	.string "Eventually, it will be perceived much\l"
	.string "like how we now view the 1960s, and from\l"
	.string "there, it will continue to blur into an\l"
	.string "ever-expanding ocean of events.\l"
	.string "However, in the past, nothing is lost;\l"
	.string "for better or worse, everything that\l"
	.string "has occurred becomes indelible,\l"
	.string "immortal… The question is; will you be\l"
	.string "able to influence the things written in\l"
	.string "that book?$"



Route51House2::
lock     
faceplayer     
msgbox Route51_House1_Text_2, MSGBOX_DEFAULT
release     
end

Route51_House1_Text_2:
	.string "I've seen the future! In October 1996,\n"
	.string "that TRAINER began his adventure! In\l"
	.string "November 1999, another TRAINER, with\l"
	.string "similar but enhanced characteristics,\l"
	.string "will embark on his adventure, which, like\l"
	.string "the first one, will be just a sequence\l"
	.string "of orchestrated causes and effects!$"



Route51HouseDocumento_100::
lock     
msgbox Route51HouseDocumento_Text_100, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes2, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes3, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes4, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes5, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes6, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes7, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes8, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes9, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes10, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes11, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes12, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes13, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes14, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes15, MSGBOX_DEFAULT
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes16, MSGBOX_DEFAULT
compare VAR_UNUSED_0x40F7, 152
goto_if_gt Route51House_Post_Reunion
release
end

Route51House_Post_Reunion::
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes17, MSGBOX_DEFAULT
compare VAR_UNUSED_0x40F7, 176
goto_if_gt Route51House_Post_Esencia
release
end

Route51House_Post_Esencia::
msgbox Route51HouseDocumento_Text_100YesNo2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route51HouseDocumento_100No
msgbox Route51HouseDocumento_Text_100Yes18, MSGBOX_DEFAULT
release
end



Route51HouseDocumento_Text_100:
	.string "COMPILATION OF PRINCIPAL EVENTS IN\n"
	.string "THE RECENT HISTORY OF KANTO-JOHTO:$"

Route51HouseDocumento_Text_100YesNo:
.string "Do you want to read it?$"

Route51HouseDocumento_Text_100YesNo2:
.string "Keep reading?$"

Route51HouseDocumento_100No::
release
end

Route51HouseDocumento_Text_100Yes:
	.string "January 15th, 1992: In an unexpected\n"
	.string "move, JOHTO declares war on KANTO,\l"
	.string "driven by LANCE's ambition to dominate\l"
	.string "both regions and assert his power as a\l"
	.string "TRAINER. Nevertheless, JOHTO's forces\l"
	.string "prove inadequate to inflict damage on\l"
	.string "KANTO, which boasts superior\l"
	.string "technology and a roster of seasoned\l"
	.string "trainers, notably including OAK and\l"
	.string "GIOVANNI.$"

Route51HouseDocumento_Text_100Yes2:
	.string "May 6th, 1992: LANCE initiates a new\n"
	.string "offensive, bolstered by the JOHTO\l"
	.string "LEGENDARY BEASTS and LT. SURGE within\l"
	.string "his ranks. The disruption caused by the\l"
	.string "LEGENDARIES, alongside the disciplined\l"
	.string "organization of LT. SURGE's forces in\l"
	.string "JOHTO, brings balance to the conflict.$"

Route51HouseDocumento_Text_100Yes3:
	.string "June 1st, 1992: Considering the\n"
	.string "situation, the top TRAINERS in KANTO\l"
	.string "decide to take action. GIOVANNI, along\l"
	.string "with OAK and an entire research team,\l"
	.string "decide to respond to the surge of\l"
	.string "JOHTO's LEGENDARIES with technology.\l"
	.string "They conclude that the DNA of MEW,\l"
	.string "initially discovered by MADAME BOSS, is\l"
	.string "the most suitable for harnessing a\l"
	.string "POKÉMON's power.$"

Route51HouseDocumento_Text_100Yes4:
	.string "July 5th, 1992: After an exhaustive\n"
	.string "search, GIOVANNI and his team find MEW\l"
	.string "and obtain its DNA, and victory in the\l"
	.string "war begins to lean in favor of JOHTO.$"

Route51HouseDocumento_Text_100Yes5:
	.string "February 6th, 1993: After thousands of\n"
	.string "failed tests and experiments, MEWTWO is\l"
	.string "born: KANTO's great hope which, with its\l"
	.string "PSYCHIC powers, will keep the\l"
	.string "LEGENDARIES of JOHTO at bay, which are\l"
	.string "inferior in base power. However, it is\l"
	.string "still far from being viable for combat.$"

Route51HouseDocumento_Text_100Yes6:
	.string "September 1st, 1993: After twenty\n"
	.string "months of war, KANTO's decline becomes\l"
	.string "increasingly resonant. On the other\l"
	.string "hand, GIOVANNI and OAK prolong their\l"
	.string "surrender, with hopes placed on MEWTWO\l"
	.string "as an inflection point. However, as they\l"
	.string "finalize preparations for its entry\l"
	.string "into the war, its immense power spirals\l"
	.string "out of control, destroying the\l"
	.string "laboratory and disappearing forever.$"

Route51HouseDocumento_Text_100Yes7:
	.string "September 17th, 1993: KANTO has no\n"
	.string "choice but to surrender, with GIOVANNI\l"
	.string "taking all the responsibilities for the\l"
	.string "losing side, while OAK offers his\l"
	.string "services as a scientist to the orders\l"
	.string "of the new government led by LANCE.\l"
	.string "GIOVANNI disappears before being\l"
	.string "arrested.$"

Route51HouseDocumento_Text_100Yes8:
	.string "March 12th, 1994: The first actions of\n"
	.string "TEAM ROCKET as a criminal organization,\l"
	.string "even on a tiny scale, were insufficient\l"
	.string "to reach the ears of the new\l"
	.string "government.$"

Route51HouseDocumento_Text_100Yes9:
	.string "September 26th, 1996: Nearly three\n"
	.string "years after the end of the war, KANTO\l"
	.string "has recovered in record time from all\l"
	.string "the human and material damage caused\l"
	.string "by the war. In the eyes of any\l"
	.string "resident placed at this historic\l"
	.string "moment without giving them any\l"
	.string "information from the past, it would\l"
	.string "seem as if such a war had never\l"
	.string "occurred.$"

Route51HouseDocumento_Text_100Yes10:
	.string "October 15th, 1996: A young TRAINER\n"
	.string "begins his adventure in PALLET TOWN,\l"
	.string "intending to win the eight BADGES and\l"
	.string "challenge an ELITE FOUR that has\l"
	.string "remained untouched until now. At the\l"
	.string "same time, another young TRAINER joins\l"
	.string "TEAM ROCKET, an organization having\l"
	.string "grown exponentially in recent months,\l"
	.string "with no greater ambition than to rise\l"
	.string "within the organization and become the\l"
	.string "best TRAINER possible. This date,\l"
	.string "October 16th, 1996, is regarded as\l"
	.string "-Year 0-, the reference point from\l"
	.string "which one looks toward the future, and\l"
	.string "they initiate the first actions that,\l"
	.string "indirectly, will become vital for true\l"
	.string "peace between KANTO and JOHTO.$"

Route51HouseDocumento_Text_100Yes11:
	.string "January 20th, 1996: TEAM ROCKET\n"
	.string "invades SILPH in a critical strategic\l"
	.string "move against LANCE's government. They\l"
	.string "feign their definitive defeat while\l"
	.string "convincing SILPH to act to change the\l"
	.string "current situation in KANTO. TEAM ROCKET\l"
	.string "revives hopes of retrieving MEWTWO and\l"
	.string "begins planning the coup against the\l"
	.string "POKÉMON LEAGUE.$"

Route51HouseDocumento_Text_100Yes12:
	.string "January 25th, 1996: BLAINE alerts\n"
	.string "LANCE's government about the true\l"
	.string "situation of TEAM ROCKET. In response,\l"
	.string "LANCE tailored measures to prevent a\l"
	.string "coup against the POKÉMON LEAGUE. In a\l"
	.string "desperate attempt, TEAM ROCKET relies\l"
	.string "on two of its ADMINISTRATORS, who\l"
	.string "possess exceptional abilities for\l"
	.string "POKÉMON battles, to clandestinely\l"
	.string "seize the title of the POKÉMON LEAGUE.$"

Route51HouseDocumento_Text_100Yes13:
	.string "March 9th, 1997: Just five months after\n"
	.string "the parallel start of their adventures,\l"
	.string "the two TRAINERS, one limited in\l"
	.string "freedom and will, and the other\l"
	.string "witnessing all reality, but both equally\l"
	.string "representative of the essence that\l"
	.string "surrounds POKÉMON battles, engage in a\l"
	.string "duel for the title of CHAMPION. The\l"
	.string "combination of actions resulting from\l"
	.string "the free will of the young recruit of\l"
	.string "TEAM ROCKET triumphs over the perfect\l"
	.string "pre-established path of the prodigy\l"
	.string "from PALLET TOWN. LANCE, seeing that\l"
	.string "his government is in danger, decides to\l"
	.string "take justice into his own hands once\l"
	.string "again, also challenging the young grunt,\l"
	.string "but still losing despite the brutality\l"
	.string "of his team, which was stopped by the\l"
	.string "wit of the young TRAINER, thereby\l"
	.string "forcing LANCE to cede certain powers.$"

Route51HouseDocumento_Text_100Yes14:
	.string "March 12th, 1997: The transfer of\n"
	.string "powers by LANCE is ratified, and the new\l"
	.string "laws and conditions under which KANTO\l"
	.string "will be governed are made public much\l"
	.string "less oppressive than the previous\l"
	.string "ones, all thanks to an agreement that, in\l"
	.string "the shadows, TEAM ROCKET forced LANCE\l"
	.string "to accept.$"

Route51HouseDocumento_Text_100Yes15:
	.string "May 1st, 1997: OAK and BLAINE discover\n"
	.string "the location of MEWTWO, which, combined\l"
	.string "with several experiments they\l"
	.string "conducted behind LANCE's government's\l"
	.string "back, leads them to disappear. Faced\l"
	.string "with the uncertain transitional period\l"
	.string "in KANTO, they seize power to establish\l"
	.string "a scientific despotism.$"

Route51HouseDocumento_Text_100Yes16:
	.string "June 30th, 1997: OAK is defeated by the\n"
	.string "young grunt, now CHIEF ADMIN. of TEAM\l"
	.string "ROCKET. With this, TEAM ROCKET\l"
	.string "establishes contact with JOHTO, aiming\l"
	.string "to recover pre-war relations with KANTO\l"
	.string "and expand them via telecommunications\l"
	.string "and transportation.$"

Route51HouseDocumento_Text_100Yes17:
	.string "October 12th, 1997: The KANTO-JOHTO\n"
	.string "CONFERENCE, held in GOLDENROD CITY\l"
	.string "behind closed doors, where the protocol\l"
	.string "for the union between regions is\l"
	.string "established, almost a year after 'Year\l"
	.string "0' with a two-year plan to achieve all\l"
	.string "set objectives. Meanwhile, the young\l"
	.string "TRAINER immerses himself in the history\l"
	.string "and culture of JOHTO, gradually\l"
	.string "reaching that point of balance and flow\l"
	.string "state with his POKÉMON.$"

Route51HouseDocumento_Text_100Yes18:
	.string "November 17th, 1997: The ESSENCE\n"
	.string "POKÉMON, along with the two creators of\l"
	.string "all known and unknown, are awakened by\l"
	.string "the current LEADER of the LAVENDER\l"
	.string "CULT. The three POKÉMON,\l"
	.string "representatives of the absolute limit\l"
	.string "of what a POKÉMON can achieve, become\l"
	.string "earthly beings at the moment they are\l"
	.string "handled by the imperfection of a human.\l"
	.string "Once omnipotent in the wild, now as\l"
	.string "three POKÉMON within a regulated\l"
	.string "battle. Such allowed the young TRAINER\l"
	.string "to compete, who with his POKÉMON in\l"
	.string "total harmony and at the peak of their\l"
	.string "possibilities, achieves the impossible\l"
	.string "of prevailing over the three POKÉMON,\l"
	.string "who return to their eternal slumber.$"
