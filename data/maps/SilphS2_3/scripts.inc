SilphS2_3_MapScripts::
	.byte 0

SilphS2_3_Presidente::
lock
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_1
waitmovement 0x0
msgbox SilphS2_3_Presidente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_2
waitmovement 0x0
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
msgbox SilphS2_3_Presidente_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_4
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_6
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_7
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_8
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_10
applymovement 1, SilphS2_3_Presidente_Move_9
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_13 MSGBOX_AUTOCLOSE
delay 15
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_11
applymovement 1, SilphS2_3_Presidente_Move_12
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_707, SilphS2_3_Presidente_Texto_16
msgbox SilphS2_3_Presidente_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Presidente_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, SilphS2_3_Presidente_Move_13
waitmovement 0x0
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SilphS2_3_Presidente_Texto_19 MSGBOX_DEFAULT
waitfanfare
msgbox SilphS2_3_Presidente_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, SilphS2_3_Presidente_Move_14
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_5
waitmovement 0x0
delay 10
msgbox SilphS2_3_Presidente_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_3_Presidente_Move_16
applymovement 1, SilphS2_3_Presidente_Move_15
waitmovement 0x0
delay 20
msgbox SilphS2_3_Presidente_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SilphS2_3_Presidente_Move_17
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_80
clearflag FLAG_HOENN_85
removeobject 1
setvar VAR_UNUSED_0x40F8, 12
release
end

SilphS2_3_Presidente_Move_17:
walk_slow_down
walk_slow_down
walk_slow_right
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end


SilphS2_3_Presidente_Move_16:
delay_16
delay_8
face_down
step_end

SilphS2_3_Presidente_Move_15:
walk_slow_down
walk_slow_down
step_end

SilphS2_3_Presidente_Move_14:
delay_16
delay_8
face_down
delay_16
delay_8
face_right
step_end

SilphS2_3_Presidente_Move_13:
walk_in_place_right
step_end

SilphS2_3_Presidente_Move_12:
walk_down
face_right
step_end

SilphS2_3_Presidente_Move_11:
delay_16
face_left
step_end

SilphS2_3_Presidente_Move_10:
delay_16
delay_8
face_up
step_end

SilphS2_3_Presidente_Move_9:
walk_slow_right
walk_slow_up
delay_16
delay_8
step_end

SilphS2_3_Presidente_Move_8:
walk_in_place_right
step_end

SilphS2_3_Presidente_Move_7:
face_up
step_end

SilphS2_3_Presidente_Move_6:
walk_slow_right
step_end

SilphS2_3_Presidente_Move_5:
face_down
step_end

SilphS2_3_Presidente_Move_4:
walk_slow_down
step_end

SilphS2_3_Presidente_Move_3:
face_right
step_end

SilphS2_3_Presidente_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
face_left
step_end

SilphS2_3_Presidente_Move_1:
walk_in_place_up
step_end

SilphS2_3_Presidente_Texto_1:
	.string "Stellst du schon wieder meine\n"
	.string "Sicherheitsvorkehrungen bloß,\l"
	.string "junger Mann?$"

SilphS2_3_Presidente_Texto_2:
	.string "Vielleicht bist du dir einfach noch\n"
	.string "nicht bewusst, welche weitreichenden\l"
	.string "Konsequenzen deine Handlungen - in der\l"
	.string "LIGA - in der Zukunft haben werden -\l"
	.string "schon in der nahen Zukunft. Und doch\l"
	.string "werden sie Spuren in der Geschichte\l"
	.string "hinterlassen.$"

SilphS2_3_Presidente_Texto_3:
	.string "Ich muss zugeben, du hast recht\n"
	.string "behalten, mein Junge. Ich habe mich\l"
	.string "in TEAM ROCKET geirrt.$"

SilphS2_3_Presidente_Texto_4:
	.string "Als ich erkannte, dass euer ANFÜHRER\n"
	.string "jener außergewöhnliche TRAINER war,\l"
	.string "der vor vielen Jahren die LIGA KANTOs\l"
	.string "unzählige Male bezwungen hatte,\l"
	.string "schossen mir unzählige Fragen durch\l"
	.string "den Kopf.$"

SilphS2_3_Presidente_Texto_5:
	.string "GIOVANNI hat mir mittlerweile alles\n"
	.string "erzählt: Von der Gründung TEAM\l"
	.string "ROCKETs, MEWTU, den LEGENDÄREN VÖGELN,\l"
	.string "dem MEISTERBALL und eurem Angriff auf\l"
	.string "das INDIGO-PLATEAU …$"

SilphS2_3_Presidente_Texto_6:
	.string "Er ging das Risiko ein, dass ich ihn an\n"
	.string "SIEGFRIED ausliefere. Aber er wusste\l"
	.string "ganz genau, dass ich sein Angebot nicht\l"
	.string "ablehnen konnte.$"

SilphS2_3_Presidente_Texto_7:
	.string "Der KANTO Region ihre Freiheit\n"
	.string "zurückzugeben und sie wieder im alten\l"
	.string "Glanz erstrahlen zu lassen …$"

SilphS2_3_Presidente_Texto_8:
	.string "GIOVANNI versicherte mir, dass er SILPH\n"
	.string "beistehen würde, falls etwas schief\l"
	.string "läuft.$"

SilphS2_3_Presidente_Texto_9:
	.string "Aber selbst ohne diese Zusicherung\n"
	.string "hätte ich ohne Zögern zugestimmt -\l"
	.string "alleine aufgrund der bloßen Hoffnung,\l"
	.string "KANTOs ruhmreiche Tage wieder aufleben\l"
	.string "zu lassen.$"

SilphS2_3_Presidente_Texto_10:
	.string "Und genau daran arbeiten wir jetzt\n"
	.string "gerade, nicht wahr? Aus diesem Grund\l"
	.string "bist du hierhergekommen.$"

SilphS2_3_Presidente_Texto_11:
	.string "Jetzt, wo SILPH und TEAM ROCKET\n"
	.string "zusammenarbeiten, wird KANTO sein\l"
	.string "wahres Wesen bewahren.$"

SilphS2_3_Presidente_Texto_12:
	.string "Allerdings {PAUSE 15}…{PAUSE 15} haben wir auch vor, diese\n"
	.string "Region in eine technologische\l"
	.string "Supermacht zu verwandeln. Was du hier\l"
	.string "siehst, ist gerade mal der Anfang.$"

SilphS2_3_Presidente_Texto_13:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

SilphS2_3_Presidente_Texto_14:
	.string "Gestatte mir, dir zu demonstrieren, was\n"
	.string "ich meine.$"

SilphS2_3_Presidente_Texto_15:
	.string "Du wirst es mit einem waschechten Team\n"
	.string "der alten Schule KANTOs zu tun\l"
	.string "bekommen - und sogar mit der neuen\l"
	.string "Schule!$"

SilphS2_3_Presidente_Texto_16:
	.string "Und schon wieder … erinnerst du mich an\n"
	.string "die alten Zeiten.$"

SilphS2_3_Presidente_Texto_17:
	.string "Du besitzt unglaubliches Talent,\n"
	.string "{PLAYER}. Ich hoffe, du wirst es zum\l"
	.string "Wohle KANTOs einsetzen.$"

SilphS2_3_Presidente_Texto_18:
	.string "Was mich angeht, genießt du SILPHs\n"
	.string "volle Unterstützung.$"

SilphS2_3_Presidente_Texto_19:
	.string "{PLAYER} erhält den SILPH\n"
	.string "U3-SCHLÜSSEL!$"

SilphS2_3_Presidente_Texto_20:
	.string "Damit wirst du in der Lage sein, die\n"
	.string "Bibliothek noch gründlicher zu\l"
	.string "durchsuchen. Aber bedenke, dass im\l"
	.string "Laufe der Jahre vieles verloren\l"
	.string "gegangen ist.$"

SilphS2_3_Presidente_Texto_21:
	.string "Vielleicht findest du dort unten,\n"
	.string "wonach du suchst. {PAUSE 25} Auch wenn wir uns\l"
	.string "dessen Existenz vielleicht noch nicht\l"
	.string "bewusst sind. Der Lauf der Zeit\l"
	.string "schreitet stetig voran und lässt\l"
	.string "selbst die Dinge in Vergessenheit\l"
	.string "geraten, die einst Teil des alltäglichen\l"
	.string "Lebens waren.$"

SilphS2_3_Presidente_Texto_22:
	.string "Nun stellt sich die Frage, ob du in der\n"
	.string "Lage bist, Dinge zu finden, von denen\l"
	.string "wir nicht einmal wissen, dass sie\l"
	.string "existieren …$"

SilphS2_3_Presidente_Texto_23:
	.string "KANTO wacht über dich. Ho, ho, ho!$"

SilphS2_3_Carta_No::
release
end

SilphS2_3_Carta::
lock
msgbox SilphS2_3_Carta_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SilphS2_3_Carta_No
delay 15
msgbox SilphS2_3_Carta_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_3_Carta_Texto_16 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SilphS2_3_Carta_No
delay 15
msgbox SilphS2_3_Carta_Texto_17 MSGBOX_AUTOCLOSE
release
end

SilphS2_3_Carta_Texto_1:
	.string "Es ist ein Brief, der von GIOVANNI\n"
	.string "unterzeichnet wurde.$"

SilphS2_3_Carta_Texto_2:
	.string "Möchtest du ihn lesen?$"

SilphS2_3_Carta_Texto_3:
	.string "Sehr geehrter Herr PRÄSIDENT,$"

SilphS2_3_Carta_Texto_4:
	.string "wie ich Ihnen bereits sagte, besitzen\n"
	.string "die meisten POKéMON aus KANTO noch\l"
	.string "unentdecktes Potenzial.$"

SilphS2_3_Carta_Texto_5:
	.string "Unsere Abschottung vom Rest der Welt\n"
	.string "hat uns blind gegenüber Tatsachen\l"
	.string "gemacht, die dort als\l"
	.string "selbstverständlich gelten.$"

SilphS2_3_Carta_Texto_6:
	.string "However, the methods for obtaining\n"
	.string "these results aren't conclusive at all.\l"
	.string "They have never appeared to be either\l"
	.string "clear or standardized.$"

SilphS2_3_Carta_Texto_7:
	.string "Yet now, we have a most elementary\n"
	.string "advantage to those regions. We have\l"
	.string "created a special stone to evolve\l"
	.string "these POKÉMON as efficiently as\l"
	.string "possible.$"

SilphS2_3_Carta_Texto_8:
	.string "We have named it the LINK STONE.$"

SilphS2_3_Carta_Texto_9:
	.string "Its market price\n"
	.string "would be ¥9,800.$"

SilphS2_3_Carta_Texto_10:
	.string "However, as with the MASTER BALL, it\n"
	.string "shall never be made available. Nor will\l"
	.string "the public know its existence.$"

SilphS2_3_Carta_Texto_11:
	.string "I'm sure you'll understand the power of\n"
	.string "this tool.$"

SilphS2_3_Carta_Texto_12:
	.string "A great era of progress and innovation\n"
	.string "is approaching.$"

SilphS2_3_Carta_Texto_13:
	.string "The LINK STONE is merely the beginning.\n"
	.string "The first of many advancements that\l"
	.string "will forever shape our understanding of\l"
	.string "the art of battle.$"

SilphS2_3_Carta_Texto_14:
    .string "With appreciation:\p"
	.string "Giovanni. April 5th, 1997.$"

SilphS2_3_Carta_Texto_15:
	.string "PS: I've attached a list of all the\n"
	.string "POKÉMON that can be evolved through\l"
	.string "this method.$"

SilphS2_3_Carta_Texto_16:
	.string "Wanna read it?$"

SilphS2_3_Carta_Texto_17:
.string "- SLOWPOKE to SLOWKING\n"
	.string "- MAGNETON to MAGNEZONE\l"
	.string "- ONIX to STEELIX\l"
	.string "- LICKITUNG to LICKILICKY\l"
	.string "- RHYDON to RHYPERIOR\l"
	.string "- TANGELA to TANGROWTH\l"
	.string "- SEADRA to KINGDRA\l"
	.string "- SCYTHER to SCIZOR\l"
	.string "- ELECTABUZZ to ELECTIVIRE\l"
	.string "- MAGMAR to MAGMORTAR\l"
	.string "- GLIGAR to GLISCOR\l"
	.string "- SNEASEL to WEAVILE\l"
	.string "- PILOSWINE to MAMOSWINE\l"
	.string "- DUSCLOPS to DUSKNOIR\l"
	.string "- GURDURR to CONKELDURR\l"
	.string "- KARRABLAST to ESCAVALIER\l"
	.string "- SHELMET to ACCELGOR\l"
	.string "- SPRITZEE to AROMATISSE$"
