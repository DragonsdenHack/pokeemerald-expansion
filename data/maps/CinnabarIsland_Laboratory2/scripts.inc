CinnabarIsland_Laboratory2_MapScripts::
	.byte 0

CinnabarIslandLaboratory2_1::
end



CinnabarIslandLaboratory2_2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "EEVEE can evolve into one of three\n"
    .string "kinds of POKÉMON.$"



CinnabarIslandLaboratory2Documento_100::
msgbox CinnabarIslandLaboratory2Documento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandLaboratory2Documento_Text_100:
.string "An amber pipe!$"



CinnabarIslandLaboratory2Documento_101::
msgbox CinnabarIslandLaboratory2Documento_Text_101, MSGBOX_SIGN   
end

CinnabarIslandLaboratory2Documento_Text_101:
.string "There's an e-mail message.\p"
    .string "… … …\p"
    .string "There are three legendary bird\n"
    .string "POKÉMON.\p"
    .string "They are ARTICUNO, ZAPDOS, and\n"
    .string "MOLTRES.\p"
    .string "Their whereabouts are unknown.\p"
    .string "We plan to explore the cavern\n"
    .string "close to CERULEAN.\p"
    .string "From: POKÉMON RESEARCH TEAM…$"

CinnabarIsland_Laboratory2_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE117_STATE, 0
goto_if_gt CinnabarIsland_Laboratory2_Entrenador_Especial_3
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt CinnabarIsland_Laboratory2_Entrenador_Especial_2
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CinnabarIsland_Laboratory2_Entrenador_Especial_3::
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

CinnabarIsland_Laboratory2_Entrenador_Especial_2::
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarIsland_Laboratory2_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CHALECOASALTO, CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_8
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_ASSAULT_VEST
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE117_STATE, 1
release
end


CinnabarIsland_Laboratory2_Entrenador_Especial_2_No::
msgbox CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1.1:
	.string "You obtained an ASSAULT VEST from\n"
	.string "SUPER NERD!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1:
	.string "You have no idea of the vastness of\n"
	.string "variables we can use to our advantage\l"
	.string "to face a POKÉMON battle with higher\l"
	.string "chances of triumph, if the scientists in\l"
	.string "this laboratory at least had a minimum\l"
	.string "of combat knowledge.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_2:
.string "{PAUSE 10}…{PAUSE 10}\n"
	.string "{PAUSE 10}…{PAUSE 10}$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_3:
	.string "Nah, you neither look to have the skill\n"
	.string "enough, maybe if you obtain all the\l"
	.string "BADGES I will give you the chance to\l"
	.string "fight against me.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_4:
	.string "The ASSAULT VEST boosts a 50% the\n"
	.string "SPECIAL DEFENSE of the POKÉMON that\l"
	.string "has equipped it, but it only allows the\l"
	.string "use of direct damage moves, making it a\l"
	.string "perfect item to stop special attackers\l"
	.string "in their tracks, it works very well with\l"
	.string "POKÉMON with the ability REGENERATOR,\l"
	.string "and moves like DRAIN PUNCH or GIGA\l"
	.string "DRAIN!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_5:
	.string "Wow! There seems to be something\n"
	.string "worthwhile amidst the mediocrity of\l"
	.string "this island, so, are you aiming to defeat\l"
	.string "the ELITE 4? If you can defeat me in a\l"
	.string "battle, I'll grant you something to aid\l"
	.string "you in that endeavor.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_7:
.string "That is how a real TRAINER talks.\n"
	.string "You won't regret!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_8:
	.string "Oh! You were not lying about\n"
	.string "challenging the ELITE 4!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_9:
	.string "It's evident that you're the kind of\n"
	.string "person who carefully considers every\l"
	.string "detail during a battle, meticulously\l"
	.string "selecting the best items to construct\l"
	.string "a formidable team, someone like you\l"
	.string "should always have this in their arsenal\l"
	.string "of potential options.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_10:
	.string "You have no idea what you're missing\n"
	.string "out on, kid. I hope when you get struck\l"
	.string "by THUNDERBOLT or PSYCHIC, you get\l"
	.string "knocked out in one shot for refusing\l"
	.string "this battle.$"
