VictoryRoad_2F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, VictoryRoad_2F_OnResume
	.byte 0

VictoryRoad_2F_OnResume:
	call VictoryRoad_2F_SetupEscapeWarp
	end

VictoryRoad_2F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE23, 18, 29
	return

VictoryRoad2F_1::
end



VictoryRoad2F_2::
end



VictoryRoad2F_3::
end



VictoryRoad2F_4::
end



VictoryRoad2F_5::
end



VictoryRoad2F_6::
end



VictoryRoad2F_7::
end



VictoryRoad2F_10::
end



VictoryRoad2F_11::
end



VictoryRoad2F_13::
end



VictoryRoad2F_EventScript_Necio::
	trainerbattle_single TRAINER_SANTIAGO, VictoryRoad2F_Text_NecioIntro, VictoryRoad2F_Text_NecioDefeated
	msgbox VictoryRoad2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Karateka::
	trainerbattle_single TRAINER_JAYLEN, VictoryRoad2F_Text_KaratekaIntro, VictoryRoad2F_Text_KaratekaDefeated
	msgbox VictoryRoad2F_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico::
	trainerbattle_single TRAINER_ANNA_AND_MEG_2, VictoryRoad2F_Text_ChicoIntro, VictoryRoad2F_Text_ChicoDefeated
	msgbox VictoryRoad2F_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Chico2::
	trainerbattle_single TRAINER_ANNA_AND_MEG_5, VictoryRoad2F_Text_Chico2Intro, VictoryRoad2F_Text_Chico2Defeated
	msgbox VictoryRoad2F_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



VictoryRoad2F_EventScript_Domador::
	trainerbattle_single TRAINER_VICTORIA, VictoryRoad2F_Text_DomadorIntro, VictoryRoad2F_Text_DomadorDefeated
	msgbox VictoryRoad2F_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end

VictoryRoad_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE115_STATE, 0
goto_if_gt VictoryRoad_2F_Entrenador_Especial_2
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VictoryRoad_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JACOB, VictoryRoad_2F_Entrenador_Especial_Texto_5
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_LIFE_ORB
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE115_STATE, 1
release
end

VictoryRoad_2F_Entrenador_Especial_Texto_1.1:
.string "You obtained a LIFE ORB\n"
	.string "from COOLTRAINER hands!$"

VictoryRoad_2F_Entrenador_Especial_2_No::
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

VictoryRoad_2F_Entrenador_Especial_2::
msgbox VictoryRoad_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

VictoryRoad_2F_Entrenador_Especial_Texto_1:
	.string "Rückstoß-Attacken sind extrem stark,\n"
	.string "aber auch riskant. RISIKOTACKLE ist\l"
	.string "bekannt für seine starke, aber auch\l"
	.string "gefährliche Natur. Ich würde sie dir ja\l"
	.string "gerne beibringen, aber ich habe sie\l"
	.string "bereits jemand anderem beigebracht.\l"
	.string "Wenn du dich aber als würdig erweist,\l"
	.string "kann ich dir eine Alternative bieten.\p"
	.string "Es ist aber nichts, was ich einfach\n"
	.string "so weitergebe.$"

VictoryRoad_2F_Entrenador_Especial_Texto_2:
	.string "Na, nimmst du die Herausforderung\n"
	.string "an oder nicht?$"

VictoryRoad_2F_Entrenador_Especial_Texto_3:
	.string "Der LEBEN-ORB verstärkt Attacken um\n"
	.string "30 %, zieht aber dem Träger jede Runde\l"
	.string "10 % seiner KP ab. Wenn man es richtig\l"
	.string "einsetzt, kann es POKéMON unglaublich\l"
	.string "stark machen. Aber man sollte auch die\l"
	.string "Folgen des Rückstoßschadens bedenken.\p"
	.string "Kombiniert mit Attacken wie\n"
	.string "RISIKOTACKLE oder STURZFLUG kann es\l"
	.string "zwar den Gegner richtig hart treffen,\l"
	.string "aber auch dem Anwender selbst schweren\l"
	.string "Schaden zufügen. Da es selten in KANTO\l"
	.string "ist, solltest du es klug benutzen.$"

VictoryRoad_2F_Entrenador_Especial_Texto_4:
	.string "Okay! Mach dich bereit!\p"
	.string "Ich bin der krasseste ASS-TRAINER\n"
	.string "in der gesamten SIEGESSTRAßE!$"

VictoryRoad_2F_Entrenador_Especial_Texto_5:
	.string "Wow! Du hast es echt drauf! Jemand wie\n"
	.string "du verdient es, das hier zu haben.$"

VictoryRoad_2F_Entrenador_Especial_Texto_6:
	.string "Verdammt, du hast gewonnen!\p"
	.string "Du bist echt krass, weißt du?\p"
	.string "Hier ist deine Belohnung.$"

VictoryRoad_2F_Entrenador_Especial_Texto_7:
	.string "Tja. Ich kann's dir nicht verübeln.\p"
	.string "Nicht jeder hat das Zeug, es mit\n"
	.string "einem echten ASS-TRAINER aufzunehmen.$"

	