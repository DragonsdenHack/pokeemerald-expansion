PewterCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, PewterCity_OnTransition
	.byte 0

PewterCity_OnTransition::
setflag FLAG_VISITED_PEWTER_CITY
end

PewterCity1::
end

PewterCity2::
lock     
faceplayer     
msgbox PewterCity_Text1, MSGBOX_DEFAULT
release     
end

PewterCity_Text1:
	.string "I don't want to deal with you, bastard!\n"
	.string "Do not you dare even make eye contact\l"
	.string "with me!$"

PewterCity3::
end


PewterCity4::
lock     
faceplayer     
msgbox PewterCity_Text4, MSGBOX_DEFAULT
release     
end

PewterCity_Text4:
	.string "You are so lucky, not long ago this\n"
	.string "place was full of police. They'll catch\l"
	.string "you next time!$"


PewterCity5::
lock     
faceplayer     
msgbox PewterCity_Text5, MSGBOX_DEFAULT
release     
end

PewterCity_Text5:
	.string "CLEFAIRY came from the moon. That's\n"
	.string "what the rumor is. They appeared after\l"
	.string "MOON STONES fell on MT. MOON.$"


PewterCity6::
end



PewterCityDocumento_100::
msgbox PewterCityDocumento_Text_100, MSGBOX_SIGN   
end

PewterCityDocumento_Text_100:
	.string "MARMORIA CITY WISSENSCHAFTS-MUSEUM$"




PewterCityDocumento_101::
msgbox PewterCityDocumento_Text_101, MSGBOX_SIGN   
end

PewterCityDocumento_Text_101:
.string "MARMORIA CITY POKéMON-ARENA\n"
    .string "ARENALEITER: ROCKO\l"
    .string "Der Steinharte POKéMON TRAINER!$"



PewterCityDocumento_102::
msgbox PewterCityDocumento_Text_102, MSGBOX_SIGN   
end

PewterCityDocumento_Text_102:
.string "ACHTUNG!\p"
	.string "Diebe haben POKéMON-Fossilien vom\n"
	.string "MONDBERG gestohlen! Wenn Sie\l"
	.string "sachdienliche Hinweise haben, wenden\l"
	.string "Sie sich bitte an die Polizei in\l"
	.string "MARMORIA CITY!$"



PewterCityDocumento_103::
msgbox PewterCityDocumento_Text_103, MSGBOX_SIGN   
end

PewterCityDocumento_Text_103:
	.string "MARMORIA CITY\n"
    .string "Die steingraue Stadt!$"



PewterCityDocumento_104::
msgbox PewterCityDocumento_Text_104, MSGBOX_SIGN   
end

PewterCityDocumento_Text_104:
.string "TIPPS FÜR TRAINER\p"
	.string "Unabhängig von der Dauer seines\n"
	.string "Einsatzes erhält jedes POKéMON für\l"
	.string "die Teilnahme an einem Kampf\l"
	.string "Erfahrungspunkte, E.-Punkte!$"



PewterCity_3::
lock
faceplayer
msgbox PewterCity_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_3No
msgbox PewterCity_3_Text_3Yes, MSGBOX_NPC
goto PewterCity_3_Cazabichos
release
end



PewterCity_3_Text_3YesNo:
.string "Pst!\n"
    .string "Weißt du, was ich hier mache?$"


PewterCity_3No::
msgbox PewterCity_3_Text_3No, MSGBOX_NPC
goto PewterCity_3_Cazabichos
release
end


PewterCity_3_Text_3Yes:
.string "Stimmt!\n"
    .string "Es ist harte Arbeit!$"

PewterCity_3_Text_3No:
	.string "Ich versprühe SCHUTZ, um POKéMON von\n"
	.string "meinem Garten fernzuhalten!$"

PewterCity_3_Cazabichos_Move_1:
emote_exclamation_mark
step_end

PewterCity_3_Cazabichos_Move_2:
face_up
delay_16
delay_8
face_player
delay_8
step_end

PewterCity_3_Cazabichos_Move_3:
face_up
step_end

PewterCity_3_Cazabichos_Move_4:
delay_16
face_player
delay_16
face_up
delay_16
delay_8
walk_in_place_up
step_end

PewterCity_3_Cazabichos_Move_5:
face_player
step_end

PewterCity_3_Cazabichos::
lockall
delay 15
msgbox PewterCity_3_Texto_1 MSGBOX_NPC
delay 15
msgbox PewterCity_3_Texto_2 MSGBOX_NPC
playse SE_PIN
applymovement 3, PewterCity_3_Cazabichos_Move_1
waitmovement 0x0
msgbox PewterCity_3_Texto_3 MSGBOX_NPC
delay 10
msgbox PewterCity_3_Texto_4 MSGBOX_NPC
faceplayer
lockall
msgbox PewterCity_3_Texto_5, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_3_Cazabichos_No
msgbox PewterCity_3_Texto_7 MSGBOX_NPC
applymovement 3, PewterCity_3_Cazabichos_Move_2
waitmovement 0x0
msgbox PewterCity_3_Texto_8 MSGBOX_NPC
delay 10
applymovement 3, PewterCity_3_Cazabichos_Move_3
waitmovement 0x0
delay 10
msgbox PewterCity_3_Texto_9 MSGBOX_NPC
delay 10
applymovement 3, PewterCity_3_Cazabichos_Move_4
waitmovement 0x0
delay 10
msgbox PewterCity_3_Texto_10 MSGBOX_NPC
delay 15
msgbox PewterCity_3_Texto_11 MSGBOX_NPC
delay 10
applymovement 3, PewterCity_3_Cazabichos_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_3_Texto_12 MSGBOX_NPC
delay 15
msgbox PewterCity_3_Texto_13 MSGBOX_NPC
setflag FLAG_HOENN_86
fadescreen 1
delay 20
removeobject 3
fadescreen 0
clearflag FLAG_HOENN_673
setvar VAR_SCOTT_STATE, 1
release
end

PewterCity_3_Cazabichos_No::
msgbox PewterCity_3_Texto_6 MSGBOX_NPC
release
end

PewterCity_3_Texto_1:
	.string "… …$"

PewterCity_3_Texto_2:
	.string "Hey, du! Warte mal!$"

PewterCity_3_Texto_3:
	.string "Du bist doch von TEAM ROCKET!$"

PewterCity_3_Texto_4:
	.string "Und du scheinst ein hohes Tier zu sein.\p"
	.string "Ist doch so, oder?$"

PewterCity_3_Texto_5:
	.string "Könntest du mir bei etwas helfen?$"

PewterCity_3_Texto_6:
	.string "Hm … Ich versteh schon. Na ja. Ist\n"
	.string "glaube ich sowieso kein Job, den einer\l"
	.string "alleine erledigen könnte …$"

PewterCity_3_Texto_7:
	.string "Im Ernst? Ich kann's nicht glauben!\n"
	.string "Dich hat der Himmel geschickt!$"

PewterCity_3_Texto_8:
	.string "Okay, hör zu. Vor einiger Zeit habe ich\n"
	.string "noch in ORANIA CITY gearbeitet. Ich\l"
	.string "besaß einen Garten dort, der viel größer\l"
	.string "als der hier war - voller ungewöhnlicher\l"
	.string "Beeren und Gewürzen.$"

PewterCity_3_Texto_9:
	.string "Ich habe sie zu hohen Preisen verkauft\n"
	.string "und alle mochten meine Produkte.$"

PewterCity_3_Texto_10:
	.string "Aber alles ging bergab, als\n"
	.string "SIEGFRIED an die Macht kam.$"

PewterCity_3_Texto_11:
	.string "Seine Regierung hat meine Ländereien\n"
	.string "an sich gerissen und dann ein paar\l"
	.string "Idioten aus JOHTO einreisen lassen, um\l"
	.string "sie in ihrem Namen zu verwalten!$"

PewterCity_3_Texto_12:
	.string "Und jetzt ernten sie buchstäblich die\n"
	.string "Früchte meiner Arbeit, indem sie die\l"
	.string "Erzeugnisse außerhalb der Region für\l"
	.string "ein Vermögen verkaufen!$"

PewterCity_3_Texto_13:
	.string "Ich sehe dich in ORANIA CITY. Die Stadt\n"
	.string "ist direkt mit ROUTE 6 verbunden.$"


PewterCity_Petrel_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.1
goto PewterCity_Petrel

PewterCity_Petrel_3::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.2
goto PewterCity_Petrel

PewterCity_Petrel_4::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
goto PewterCity_Petrel

PewterCity_Petrel_5::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.3
waitmovement 0x0
goto PewterCity_Petrel

PewterCity_Petrel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
delay 20
msgbox PewterCity_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_3
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_5
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_6
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_8.1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Petrel_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_10 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_8
waitmovement 0x0
setflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_BOY
removeobject 6
setvar VAR_UNUSED_0x40F7, 57
release
end

PewterCity_Petrel_Texto_1:
	.string "Was für eine Überraschung, dich\n"
	.string "hier zu sehen, {PLAYER}!$"

PewterCity_Petrel_Texto_2:
	.string "Eine wichtige Mission in ALABASTIA,\n"
	.string "also. Du bist unermüdlich, was?\p"
	.string "GIOVANNI hat mir schon gesagt, dass du\n"
	.string "super Arbeit leistest.$"

PewterCity_Petrel_Texto_3:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10}$"

PewterCity_Petrel_Texto_4:
	.string "LAMBDA: -Warnung! Diebe haben\n"
	.string "FOSSILIEN vom MONDBERG gestohlen.\p"
	.string "Bitte verständigen sie umgehend die\n"
	.string "MARMORIA CITY POLIZEI, wenn sie\l"
	.string "Hinweise haben, die bei der Ergreifung\l"
	.string "der Täter helfen könnten.-$"

PewterCity_Petrel_Texto_5:
	.string "Offensichtlich meint er mit -Dieben-\n"
	.string "unsere Organisation. Es ist lustig. Ich\l"
	.string "liebe die Doppelmoral dieser Region.$"

PewterCity_Petrel_Texto_6:
	.string "Wenn ein Forscher ein FOSSIL\n"
	.string "vom MONDBERG mitnimmt, ist das kein\l"
	.string "Problem, denn es dient ja nur\l"
	.string "seiner Forschung.$"

PewterCity_Petrel_Texto_7:
	.string "Wenn ein paar verwöhnte Bälger die\n"
	.string "Höhlen von FOSSILIEN befreien,\l"
	.string "interessiert es kein Schwein, denn\l"
	.string "natürlich können sie ihren POKéDEX\l"
	.string "nicht unvollständig lassen. Sie müssen\l"
	.string "unbedingt noch eins in ihre -Sammlung-\l"
	.string "aufnehmen, als wären POKéMON nur\l"
	.string "austauschbare Sammelkarten.$"

PewterCity_Petrel_Texto_7.1:
    .string "Es ist einfach nur lächerlich!$"

PewterCity_Petrel_Texto_8:
	.string "Wenn eine Privatgruppe wie wir\n"
	.string "beschließt, Fossilien zu sammeln,\l"
	.string "um eine Nachfrage der Bevölkerung\l"
	.string "zu erfüllen, dann sind wir\l"
	.string "Schwerverbrecher.$"

PewterCity_Petrel_Texto_8.1:
	.string "Als ob diese FOSSILIEN irgendjemandem\n"
	.string "gehören würden, wenn jeder x-beliebige\l"
	.string "Idiot sie mitnehmen kann, sobald er sie\l"
	.string "findet.$"

PewterCity_Petrel_Texto_9:
	.string "Apropos FOSSILIEN. Ich bin hier, um\n"
	.string "einen alten Kumpel zu besuchen, der das\l"
	.string "Glück hat, eine große Nummer im\l"
	.string "WISSENSCHAFTSMUSEUM von MARMORIA\l"
	.string "CITY zu sein.$"

PewterCity_Petrel_Texto_9.1:
	.string "Es scheint, dass sie ein Exemplar von\n"
	.string "ALTBERNSTEIN gefunden haben - das\l"
	.string "mächtigste und wertvollste FOSSIL\l"
	.string "der ganzen Region.$"

PewterCity_Petrel_Texto_9.2:
	.string "Ich glaube, dass ich ihn dazu bringen\n"
	.string "kann, es uns für Forschungszwecke zu\l"
	.string "leihen. Du musst wissen, wir haben ein\l"
	.string "Klonverfahren entwickelt, dass diesen\l"
	.string "ALTBERNSTEIN zu geringeren Kosten als\l"
	.string "den Marktpreis duplizieren könnte.\p"
	.string "Deswegen muss ich diese Chance nutzen.$"

PewterCity_Petrel_Texto_10:
	.string "Falls du Lust hast, kannst du zum\n"
	.string "Treffen kommen. Nimm den\l"
	.string "Seiteneingang, wo man Zerschneider\l"
	.string "einsetzen muss. Ich warte dort auf\l"
	.string "dich, falls du dich entscheidest, zu\l"
	.string "kommen.$"

PewterCity_Petrel_Move_1:
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.1:
walk_down
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.2:
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.3:
walk_up
walk_in_place_left
step_end

PewterCity_Petrel_Move_2:
emote_exclamation_mark
walk_in_place_right
step_end

PewterCity_Petrel_Move_3:
walk_right
walk_right
walk_right
step_end

PewterCity_Petrel_Move_4:
face_up
step_end

PewterCity_Petrel_Move_5:
walk_left
walk_in_place_up
step_end

PewterCity_Petrel_Move_6:
walk_right
walk_in_place_right
step_end

PewterCity_Petrel_Move_7:
walk_in_place_up
walk_in_place_right
step_end

PewterCity_Petrel_Move_8:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PewterCity_Ayuda::
lock
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_1
waitmovement 0x0
msgbox PewterCity_Ayuda_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_2
waitmovement 0x0
release
end

PewterCity_Ayuda_Move_2:
walk_slow_down
step_end

PewterCity_Ayuda_Move_1:
walk_in_place_up
step_end



PewterCity_Ayuda_Texto_1:
	.string "-Ich sollte an LAMBDAs Treffen\n"
	.string "teilnehmen, welches ich durch\l"
	.string "den Seiteneingang erreiche.-$"
