SsAnne_6F_MapScripts::
	.byte 0

SsAnne6F_1::
lock         
msgbox SsAnne6F_Text_1, MSGBOX_SIGN
release     
end

SsAnne6F_Text_1:
	.string "Ich bin der coolste Typ hier {PAUSE 25}…{PAUSE 25} und das\n"
	.string "weißt du auch!$"



SsAnne6F_2::
lock         
msgbox SsAnne6F_Text_2, MSGBOX_SIGN
release     
end

SsAnne6F_Text_2:
	.string "Ohhh! Was für ein ASS-TRAINER! So {PAUSE 25}…{PAUSE 25}\n"
	.string "cool!$"



SsAnne6F_3::
end



SsAnne6F_4::
end



SsAnne6F_5::
lock     
faceplayer     
msgbox SsAnne6F_Text_5, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_5:
	.string "Ich bin die Sorte Mensch, der bei\n"
	.string "solchen Events lieber beobachtet. Man\l"
	.string "lernt mehr über jemanden, wenn man ihn\l"
	.string "auf einer Party wie dieser beobachtet,\l"
	.string "als wenn man sich stundenlang mit ihm\l"
	.string "unterhält.$"



SsAnne6F_6::
lock     
faceplayer     
msgbox SsAnne6F_Text_6, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_6:
.string "HAHAHA!\n"
.string "Kellner!\p"
.string "Bringen Sie mir noch 'nen\n"
.string "POTTROT Brandy!$"



SsAnne6F_7::
lock     
faceplayer     
msgbox SsAnne6F_Text_7, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_7:
	.string "HA, HA! Weißt du warum … es Leute so\n"
	.string "sehr lieben zu feiern? {PAUSE 25}…{PAUSE 25} Weil sie für 'n\l"
	.string "paar Stunden … all die Probleme … ihres\l"
	.string "elenden Lebens vergessen können! HA!\p"
	.string "Kellner! Noch 'n NOKTUSKA Tequila!$"



SsAnne6F_8::
lock     
faceplayer     
msgbox SsAnne6F_Text_8, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_8:
	.string "Nach all meinen Leiden und Strapazen\n"
	.string "soll das hier die große Belohnung sein?!\p"
	.string "Ironischerweise hatte ich mehr Freude\n"
	.string "auf der Reise hierher. Das Ziel erweist\l"
	.string "sich wohl immer als Enttäuschung,\l"
	.string "Kleiner!$"



SsAnne6F_9::
lock     
faceplayer     
msgbox SsAnne6F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_9:
	.string "Ugh. Ich hatte hier eine wundervolle\n"
	.string "Zeit, bis diese Turteltäubchen\l"
	.string "aufgetaucht sind und begonnen haben,\l"
	.string "sich kitschig aufzuführen.\p"
	.string "Sucht euch gefälligst ein Zimmer!$"



SsAnne6F_10::
lock     
faceplayer     
msgbox SsAnne6F_Text_10, MSGBOX_DEFAULT
release     
end

SsAnne6F_Text_10:
	.string "Ugh … Ich will nicht einmal an diesen\n"
	.string "seltsamen Drink denken, den der Kellner\l"
	.string "da drüben serviert. Ich glaube, ich muss\l"
	.string "kotzen {PAUSE 5}…{PAUSE 5}$"



SsAnne6F_11::
lock     
faceplayer     
msgbox SsAnne6F_Text_11, MSGBOX_NPC
delay 10
msgbox SsAnne6F_Text_11.1, MSGBOX_NPC
delay 10
msgbox SsAnne6F_Text_11.2, MSGBOX_NPC
release     
end

SsAnne6F_Text_11:
	.string "Die Unvorhersehbarkeit des Moments,\n"
	.string "einfach nach dem Bauchgefühl zu\l"
	.string "handeln {PAUSE 15}…{PAUSE 15}$"

SsAnne6F_Text_11.1:
	.string "traducir$"

SsAnne6F_Text_11.2:
	.string "Ich habe immer noch nicht ganz\n"
	.string "verstanden, wie man das Meiste aus\l"
	.string "solchen Feiern herausholt {PAUSE 15}…{PAUSE 15}$"



SsAnne6F_12::
lock         
msgbox SsAnne6F_Text_12, MSGBOX_SIGN
release     
end

SsAnne6F_Text_12:
	.string "Ist das ein Traum? Mir wurde gerade die\n"
	.string "unglaubliche Ehre zuteil, SIEGFRIEDs\l"
	.string "majestätisches und legendäres\l"
	.string "DRAGORAN über die M.S. ANNE\l"
	.string "fliegen sehen zu dürfen!$"



SsAnne6F_13::
lock         
msgbox SsAnne6F_Text_13, MSGBOX_SIGN
release     
end

SsAnne6F_Text_13:
	.string "Das war SIEGFRIED höchstpersönlich!$"

SsAnne6F_EventScript_Marinero::
	trainerbattle_single TRAINER_JESSICA_5, SsAnne6F_Text_MarineroIntro, SsAnne6F_Text_MarineroDefeated
	msgbox SsAnne6F_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



SsAnne6F_EventScript_Marinero2::
	trainerbattle_single TRAINER_WINSTON_1, SsAnne6F_Text_Marinero2Intro, SsAnne6F_Text_Marinero2Defeated
	msgbox SsAnne6F_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end

SSAnne6F_Lance_Surge::
applymovement OBJ_EVENT_ID_PLAYER, SSAnne6F_Lance_Surge_move1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move2
waitmovement 0x0
special RemoveCameraObject
delay 10
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
applymovement 13, SSAnne6F_Lance_Surge_move1.5
applymovement 12, SSAnne6F_Lance_Surge_move1.5
applymovement OBJ_EVENT_ID_PLAYER, SSAnne6F_Lance_Surge_move1.5
waitmoncry
delay 15
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setfieldeffectargument 1, 1
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 15
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 35
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SSAnne6F_Lance_Surge_Text_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SSAnne6F_Lance_Surge_Text_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_3 MSGBOX_AUTOCLOSE
applymovement 15, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SSAnne6F_Lance_Surge_Text_4.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move5
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_5 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, SSAnne6F_Lance_Surge_move3.2
waitmovement 0x0
waitse
delay 10
msgbox SSAnne6F_Lance_Surge_Text_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_7 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_8 MSGBOX_AUTOCLOSE
msgbox SSAnne6F_Lance_Surge_Text_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, SSAnne6F_Lance_Surge_move3.1
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_9.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move6
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, SSAnne6F_Lance_Surge_move6.1
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move6.2
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move6.3
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_10.3 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, SSAnne6F_Lance_Surge_move3
waitmovement 0x0
delay 15
msgbox SSAnne6F_Lance_Surge_Text_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SSAnne6F_Lance_Surge_move7
waitmovement 0x0
delay 10
msgbox SSAnne6F_Lance_Surge_Text_12 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 15
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 20
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
delay 25
applymovement 14, SSAnne6F_Lance_Surge_move4
waitmovement 0x0
msgbox SSAnne6F_Lance_Surge_Text_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ELECTABUZZ, CRY_MODE_ENCOUNTER
delay 20
playse SE_M_TELEPORT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 14
waitse
delay 25
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSAnne6F_Lance_Surge_move8
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 26
release
end

SSAnne6F_Lance_Surge_Text_1:
	.string "????: Es ist mir ein Vergnügen, dich\n"
	.string "wiederzusehen SIEGFRIED, Champion des\l"
	.string "neuen KANTOs. Was führt dich heute\l"
	.string "hierher, an dem Tag der alljährlichen\l"
	.string "Rückkehr der M.S. ANNE?$"

SSAnne6F_Lance_Surge_Text_2:
	.string "SIEGFRIED: Ich fasse mich kurz, BOB.\p"
	.string "Alle großen Städte unterliegen\n"
	.string "routinemäßigen Inspektionen und\l"
	.string "Kontrollen, um die Sicherheit und den\l"
	.string "Komfort unserer Bürger zu\l"
	.string "gewährleisten und sicherzustellen,\l"
	.string "dass die Dinge, die diese Region\l"
	.string "antreiben, einwandfrei funktionieren.$"

SSAnne6F_Lance_Surge_Text_2.1:
	.string "Wie geht es den Menschen in ORANIA,\n"
	.string "MAJOR?$"

SSAnne6F_Lance_Surge_Text_3:
	.string "MAJOR BOB: Alles läuft wie geschmiert,\n"
	.string "Sir. ORANIAs Hafen weitet sein Netzwerk\l"
	.string "an Kontakten mit anderen Regionen\l"
	.string "immer mehr aus.$"

SSAnne6F_Lance_Surge_Text_4:
	.string "SIEGFRIED: Das freut mich zu hören,\n"
	.string "MAJOR. Die Wirtschaft unserer Region\l"
	.string "erlebt einen noch nie dagewesenen\l"
	.string "Aufschwung {PAUSE 5}…{PAUSE 5}$"

SSAnne6F_Lance_Surge_Text_4.1:
	.string "traducir$"

SSAnne6F_Lance_Surge_Text_5:
	.string "SIEGFRIED: Aber {PAUSE 15}...{PAUSE 15} das war nicht meine\n"
	.string "Frage, BOB. Was ich wirklich wissen will,\l"
	.string "ist {PAUSE 5}…{PAUSE 5}$"

SSAnne6F_Lance_Surge_Text_6:
	.string "SIEGFRIED: Wie gehen die Menschen mit\n"
	.string "der Tatsache um, dass einer der\l"
	.string "Befehlshaber der feindlichen Armee im\l"
	.string "Großen Krieg jetzt der Arenaleiter und\l"
	.string "das Aushängeschild von ORANIA ist?$"

SSAnne6F_Lance_Surge_Text_6.1:
	.string "Akzeptieren sie dich?$"

SSAnne6F_Lance_Surge_Text_7:
	.string "MAJOR BOB: Ich fürchte, der Krieg ist in\n"
	.string "ganz KANTO noch immer ein Tabuthema.\p"
	.string "Besonders hier, Sir. Die Menschen ziehen\n"
	.string "es vor, nicht darüber zu sprechen und\l"
	.string "ihr Leben so weiterzuführen, als wäre\l"
	.string "nichts geschehen.\p"
	.string "Gewisse Gruppierungen hegen vielleicht\n"
	.string "noch immer einen Groll …$"

SSAnne6F_Lance_Surge_Text_8:
	.string "SIEGFRIED: Und mit gewissen\n"
	.string "Gruppierungen meinst du TEAM ROCKET?$"

SSAnne6F_Lance_Surge_Text_9:
	.string "MAJOR BOB: Ich hatte niemand\n"
	.string "Spezielles im Kopf, aber ja. Ich denke,\l"
	.string "sie sind wohl das beste Beispiel.\p"
	.string "Angefangen haben sie als eine\n"
	.string "Protestbewegung, die nach dem Krieg\l"
	.string "unzufrieden mit der neuen Regierung\l"
	.string "war. Doch durch ihre Verbrechen, ihren\l"
	.string "radikalen Idealen und der gezielten\l"
	.string "Hetzkampagne in den letzten Jahren ist\l"
	.string "die öffentliche Meinung über TEAM\l"
	.string "ROCKET zu der geworden, die sie heute\l"
	.string "ist.$"

SSAnne6F_Lance_Surge_Text_9.1:
	.string "Es gibt allerdings noch immer einige\n"
	.string "Gruppen, die mit ihnen sympathisieren\l"
	.string "und ihre anti-patriotischen Ansichten\l"
	.string "teilen. Wie zum Beispiel die BIKER auf\l"
	.string "dem RADWEG.$"

SSAnne6F_Lance_Surge_Text_10:
	.string "SIEGFRIED: {PAUSE 25}…{PAUSE 25} Verstehe. Die LEITUNG DER\n"
	.string "POKéMON LIGA wird diesbezüglich die\l"
	.string "notwendigen Schritte in die Wege\l"
	.string "leiten.$"

SSAnne6F_Lance_Surge_Text_10.1:
	.string "Sorge in der Zwischenzeit weiter für\n"
	.string "Ruhe und Ordnung in ORANIA. Wenn die\l"
	.string "Menschen Verbesserungen sehen, werden\l"
	.string "sie dich als den Beschützer der Stadt\l"
	.string "akzeptieren.$"
	
SSAnne6F_Lance_Surge_Text_10.2:
	.string "Das Gedächtnis des Menschen ist kurz,\n"
	.string "MAJOR. Gute Taten können die\l"
	.string "Vergangenheit vergessen machen.\p"
	.string "Also habe noch ein wenig Geduld.$"

SSAnne6F_Lance_Surge_Text_10.3:
	.string "Mit dem richtigen Fortschritt {PAUSE 25}...{PAUSE 25} wird\n"
	.string "KANTO die neue Weltordnung\l"
	.string "akzeptieren, ohne es überhaupt\l"
	.string "zu merken.$"

SSAnne6F_Lance_Surge_Text_11:
.string "MAJOR BOB: Sir, ja, Sir.$"

SSAnne6F_Lance_Surge_Text_12:
	.string "traducir$"

SSAnne6F_Lance_Surge_Text_13:
	.string "MAJOR BOB: Partys waren noch\n"
	.string "nie mein Ding.\p"
    .string "ELEKTEK!\p"
	.string "Setz TELEPORT ein!$"

SSAnne6F_Lance_Surge_move1.5:
emote_exclamation_mark
delay_16
delay_8
face_right
delay_16
delay_16
face_left
step_end

SSAnne6F_Lance_Surge_move3.2:
emote_exclamation_mark
step_end

SSAnne6F_Lance_Surge_move1:
walk_in_place_left
step_end

SSAnne6F_Lance_Surge_move2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

SSAnne6F_Lance_Surge_move3:
walk_in_place_down
step_end

SSAnne6F_Lance_Surge_move3.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

SSAnne6F_Lance_Surge_move4:
face_left
step_end

SSAnne6F_Lance_Surge_move5:
walk_in_place_up
step_end

SSAnne6F_Lance_Surge_move6:
walk_up
delay_16
delay_8
walk_left
delay_16
step_end

SSAnne6F_Lance_Surge_move6.1:
delay_8
face_right
delay_16
delay_8
face_left
delay_16
walk_in_place_left
delay_8
step_end

SSAnne6F_Lance_Surge_move6.2:
delay_16
face_right
delay_16
delay_8
face_left
delay_8
step_end

SSAnne6F_Lance_Surge_move6.3:
walk_in_place_left
step_end

SSAnne6F_Lance_Surge_move7:
face_right
step_end

SSAnne6F_Lance_Surge_move8:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end
