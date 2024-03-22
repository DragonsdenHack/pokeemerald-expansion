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
	.string "and it never will. Soon the 20th century\l"
	.string "will die to give way to the 21st, and\l"
	.string "everything that has happened in this\l"
	.string "living and present period will gradually\l"
	.string "fade away to make room for new events.\l"
	.string "Eventually, it will be perceived much\l"
	.string "like how we now view the 1960s, and from\l"
	.string "there, it will continue to blur into an\l"
	.string "ever-expanding ocean of events.\l"
	.string "However, in the past, nothing is lost;\l"
	.string "for better or worse, everything that\l"
	.string "has occurred becomes indelible,\l"
	.string "immortal…$"



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
	.string "will also embark on his adventure, which,\l"
	.string "like the first one, will be nothing more\l"
	.string "than a sequence of orchestrated\l"
	.string "causes and effects!$"



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
	.string "offensive, now bolstered by the JOHTO\l"
	.string "LEGENDARY BEASTS and LT.SURGE within\l"
	.string "his ranks. The disruption caused by the\l"
	.string "LEGENDARIES, along with the disciplined\l"
	.string "organization of LT.SURGE's forces in\l"
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
	.string "search, GIOVANNI and his team manage\l"
	.string "to spot MEW and obtain its DNA, the\l"
	.string "victory in the war begins to lean in\l"
	.string "favor of JOHTO.$"

Route51HouseDocumento_Text_100Yes5:
	.string "February 6th, 1993: After thousands of\n"
	.string "failed tests and experiments, MEWTWO is\l"
	.string "born, KANTO's great hope, which with its\l"
	.string "PSYCHIC powers will keep the\l"
	.string "LEGENDARIES of JOHTO at bay, which are\l"
	.string "inferior in base power. However, it is\l"
	.string "still far from being viable for combat.$"

Route51HouseDocumento_Text_100Yes6:
	.string "September 1st, 1993: After 20 months\n"
	.string "of war, the decline of KANTO becomes\l"
	.string "increasingly resonant. On the other\l"
	.string "hand, GIOVANNI and OAK preface the\l"
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
	.string "even on a very small scale, insufficient\l"
	.string "to reach the ears of the new\l"
	.string "government.$"

Route51HouseDocumento_Text_100Yes9:
	.string "September 26th, 1996: Nearly 3 years\n"
	.string "after the end of the war, KANTO has\l"
	.string "recovered in record time from all the\l"
	.string "human and material damage caused by\l"
	.string "the war, to the point that, in the eyes\l"
	.string "of any resident placed at this historic\l"
	.string "moment without giving them any\l"
	.string "information from the past, it would\l"
	.string "seem as if such a war had never\l"
	.string "occurred.$"

Route51HouseDocumento_Text_100Yes10:
	.string "October 15th, 1996: A young TRAINER\n"
	.string "begins his adventure in PALLET TOWN\l"
	.string "with the goal of winning the 8 BADGES\l"
	.string "and challenging an ELITE FOUR that has\l"
	.string "remained untouched until now. At the\l"
	.string "same time, another young TRAINER joins\l"
	.string "TEAM ROCKET, an organization that has\l"
	.string "been exponentially growing in recent\l"
	.string "months, with no greater ambition than\l"
	.string "to rise within the organization and\l"
	.string "become the best TRAINER possible. This\l"
	.string "date, October 16th, 1996, is regarded as\l"
	.string "-Year 0-, the reference point from\l"
	.string "which one looks towards the future, and\l"
	.string "the first actions are initiated that,\l"
	.string "indirectly, will become vital for true\l"
	.string "peace between KANTO and JOHTO.$"

Route51HouseDocumento_Text_100Yes11:
	.string "January 20th, 1996: TEAM ROCKET\n"
	.string "invades SILPH in a key strategic move\l"
	.string "against LANCE's government. They feign\l"
	.string "their definitive defeat while\l"
	.string "convincing SILPH to act to change the\l"
	.string "current situation in KANTO. Hopes of\l"
	.string "retrieving MEWTWO by TEAM ROCKET are\l"
	.string "revived, and the coup against the\l"
	.string "POKÉMON LEAGUE begins to be planned.$"

Route51HouseDocumento_Text_100Yes12:
	.string "January 25th, 1996: BLAINE alerts\n"
	.string "LANCE's government about the true\l"
	.string "situation of TEAM ROCKET. In response,\l"
	.string "measures tailored to prevent a possible\l"
	.string "coup against the POKÉMON LEAGUE are\l"
	.string "imposed. In a desperate attempt, TEAM\l"
	.string "ROCKET relies on two of its\l"
	.string "ADMINISTRATORS, who possess\l"
	.string "exceptional abilities for POKÉMON\l"
	.string "battles, to clandestinely seize the\l"
	.string "title of the POKÉMON LEAGUE.$"

Route51HouseDocumento_Text_100Yes13:
	.string "March 9th, 1997: Just 5 months after\n"
	.string "the parallel start of their adventures,\l"
	.string "the two TRAINERS, one limited in\l"
	.string "freedom and will, and the other\l"
	.string "witnessing all reality, but both equally\l"
	.string "representatives of the essence that\l"
	.string "surrounds POKÉMON battles, engage in a\l"
	.string "duel for the title of CHAMPION. The\l"
	.string "combination of actions resulting from\l"
	.string "the free will of the young GRUNT of\l"
	.string "TEAM ROCKET triumphs over the perfect\l"
	.string "pre-established path of the prodigy\l"
	.string "from PALLET TOWN. LANCE, seeing that\l"
	.string "his government was in danger, decides\l"
	.string "to take justice into his own hands once\l"
	.string "again, also challenging the young grunt,\l"
	.string "but still losing despite the brutality\l"
	.string "of his team, which was stopped by the\l"
	.string "wit of the young TRAINER, thereby\l"
	.string "forcing LANCE to cede certain powers.$"

Route51HouseDocumento_Text_100Yes14:
	.string "March 12th, 1997: The transfer of\n"
	.string "powers by LANCE is ratified, and the new\l"
	.string "laws and conditions under which KANTO\l"
	.string "will be governed are made public, much\l"
	.string "less oppressive than the previous ones,\l"
	.string "all thanks to an agreement that, in the\l"
	.string "shadows, TEAM ROCKET forced LANCE to\l"
	.string "accept.$"

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
	.string "young grunt, now CHIEF.ADMIN, of TEAM\l"
	.string "ROCKET. With this, TEAM ROCKET\l"
	.string "establishes contact with JOHTO, aiming\l"
	.string "to recover pre-war relations with KANTO\l"
	.string "and expand them via telecommunications\l"
	.string "and transportation means.$"

Route51HouseDocumento_Text_100Yes17:
	.string "October 12th, 1997: The KANTO-JOHTO\n"
	.string "CONFERENCE, held in GOLDENROD CITY\l"
	.string "behind closed doors, where the protocol\l"
	.string "for the union between regions is\l"
	.string "established, almost a year after the\l"
	.string "'Year 0', with a two-year plan to achieve\l"
	.string "all set objectives. Meanwhile, the young\l"
	.string "TRAINER immerses himself in the history\l"
	.string "and culture of JOHTO, gradually\l"
	.string "reaching that point of balance and flow\l"
	.string "state with his POKÉMON.$"

Route51HouseDocumento_Text_100Yes18:
	.string "November 17th, 1997: The ESSENCE\n"
	.string "POKÉMON, along with the two creators of\l"
	.string "all that is known and unknown, are\l"
	.string "awakened by the current LEADER of the\l"
	.string "LAVENDER CULT. The three POKÉMON,\l"
	.string "representatives of the absolute limit\l"
	.string "of what a POKÉMON can achieve, become\l"
	.string "earthly beings at the moment they are\l"
	.string "handled by the imperfection of a human,\l"
	.string "being omnipotent in the wild, now as\l"
	.string "three more POKÉMON within a regulated\l"
	.string "battle, giving the opportunity to the\l"
	.string "young TRAINER to compete, who with his\l"
	.string "POKÉMON in total harmony and at the\l"
	.string "peak of their possibilities, achieves\l"
	.string "the impossible of prevailing over the\l"
	.string "three POKÉMON, who return to their\l"
	.string "eternal slumber.$"
