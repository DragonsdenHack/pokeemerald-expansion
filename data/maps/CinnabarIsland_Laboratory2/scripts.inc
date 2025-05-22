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
	.string "EVOLI kann sich zu einem von drei\n"
	.string "verschiedenen POKéMON entwickeln.$"



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
	.string "-Du erhältst eine OFFENSIVWESTE\n"
	.string "vom STREBER!-$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_1:
	.string "Du hast keine Vorstellung davon, wie\n"
	.string "viele Variablen wir zu unserem Vorteil\l"
	.string "nutzen können, um unsere\l"
	.string "Erfolgschancen in einem POKéMON-Kampf\l"
	.string "zu maximieren! Wenn die\l"
	.string "WISSENSCHAFTLER in diesem Labor doch\l"
	.string "nur ein wenig Kampferfahrung hätten …$"


CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_2:
.string "{PAUSE 10}…{PAUSE 10}\n"
	.string "{PAUSE 10}…{PAUSE 10}$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_3:
	.string "Nee. Du scheinst noch nicht gut genug\n"
	.string "zu sein. Vielleicht gebe ich dir eine\l"
	.string "Chance, wenn du alle ORDEN gesammelt\l"
	.string "hast.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_4:
	.string "Die OFFENSIVWESTE erhöht die\n"
	.string "SPEZIAL-VERTEIDIGUNG des TRÄGERS um\l"
	.string "50 %, erlaubt aber nur die Ausführung\l"
	.string "von Attacken, die direkten Schaden\l"
	.string "verursachen. Sie ist perfekt gegen\l"
	.string "spezielle Angreifer und harmoniert\l"
	.string "gut mit POKéMON, die die Fähigkeit\l"
	.string "BELEBEKRAFT oder Attacken wie\l"
	.string "ABLEITHIEB oder GIGASAUGER haben.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_5:
	.string "Wow! Es gibt ja doch noch Hoffnung auf\n"
	.string "dieser auf dieser ansonsten\l"
	.string "mittelmäßigen Insel. Du willst also die\l"
	.string "TOP VIER fertigmachen, was? Wenn du\l"
	.string "mich besiegst, bekommst du von mir\l"
	.string "etwas, das dir dabei helfen wird!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_6:
	.string "Also, stellst du dich der\n"
	.string "Herausforderung?$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_7:
	.string "So spricht ein wahrer TRAINER!\p"
	.string "Du wirst es nicht bereuen!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_8:
	.string "Oh! Du hast es echt ernst gemeint, als\n"
	.string "du gesagt hast, dass du die TOP VIER\l"
	.string "herausfordern willst.$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_9:
	.string "Es ist offensichtlich, dass du die Art\n"
	.string "von TRAINER bist, der jedes Detail\l"
	.string "eines Kampfes genau durchdenkt und\l"
	.string "sorgfältig die besten Items auswählt,\l"
	.string "um ein starkes Team zusammenzustellen.\p"
	.string "Jemand wie du sollte das hier besitzen!$"

CinnabarIsland_Laboratory2_Entrenador_Especial_Texto_10:
	.string "Du hast keine Ahnung, was dir entgeht,\n"
	.string "Kleiner! Ich hoffe, dass, wenn dein\l"
	.string "POKéMON von einem DONNERBLITZ oder\l"
	.string "einer PSYCHOKINESE getroffen wird, es\l"
	.string "sofort k.o. geht! Und das alles nur, weil\l"
	.string "du diesen einen Kampf abgelehnt hast!$"


