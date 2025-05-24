CeladonCity_Shop_5F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonCity_Shop_5F_OnFrame
	.byte 0

CeladonCity_Shop_5F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 6, CeladonCity_Shop_5F_Oak
	.2byte 0
	

CeladonShop5F_1::
end



CeladonShop5F_2::
end



CeladonShop5F_3::
lock     
faceplayer     
msgbox CeladonCity_Shop5F_Text_3, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop5F_Text_3:
	.string "Ich bin wegen der leistungs-fördernden\n"
	.string "Mittel für POKéMON hier. PROTEIN\l"
	.string "steigert die ANGRIFFS-STÄRKE.\p"
	.string "EISEN stärkt die ABWEHR!$"



CeladonShop5F_4::
lock     
faceplayer     
msgbox CeladonCity_Shop5F_Text_4, MSGBOX_DEFAULT
release     
end

CeladonCity_Shop5F_Text_4:
	.string "Nur hier kannst du leistungs-fördernde\n"
	.string "Mittel für deine POKéMON kaufen!\p"
    .string "KP-PLUS hebt die Basis-KP\n"
    .string "eines POKéMON.\p"
    .string "KALZIUM steigert die Stärke\n"
    .string "von SPEZIAL-ATTACKEN!\p"
    .string "ZINK hebt den Basis-Wert\n"
    .string "der SP. VER. eines POKéMON\p"
    .string "CARBON erhöht die\n"
    .string "INITIATIVE.$"



CeladonShop5FDocumento_100::
msgbox CeladonShop5FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonShop5FDocumento_Text_100:
.string "4S: DROGERIE$"

CeladonCity_Shop_5F_Oak::
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CeladonCity_Shop_5F_Oak_move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 5, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_1, MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Shop5F_Text_Oak_2, MSGBOX_AUTOCLOSE
applymovement 5, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_3, MSGBOX_AUTOCLOSE
applymovement 1, CeladonCity_Shop_5F_Oak_move_3
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_4, MSGBOX_AUTOCLOSE
playse SE_FAILURE
applymovement 5, CeladonCity_Shop_5F_Oak_move_4
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_5, MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CeladonCity_Shop_5F_Oak_move_5
applymovement 5, CeladonCity_Shop_5F_Oak_move_6
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 5
delay 80
msgbox CeladonCity_Shop5F_Text_Oak_6, MSGBOX_AUTOCLOSE
delay 20
applymovement 7, CeladonCity_Shop_5F_Oak_move_7
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_7, MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Shop5F_Text_Oak_8, MSGBOX_AUTOCLOSE
applymovement 7, CeladonCity_Shop_5F_Oak_move_8
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_9, MSGBOX_AUTOCLOSE
applymovement 6, CeladonCity_Shop_5F_Oak_move_9
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_10, MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
delay 20
playse SE_PIN
applymovement 7, CeladonCity_Shop_5F_Oak_move_11
applymovement 6, CeladonCity_Shop_5F_Oak_move_10
waitmovement 0x0
delay 20
playse SE_POKENAV_OFF
msgbox CeladonCity_Shop5F_Text_Oak_11, MSGBOX_AUTOCLOSE
applymovement 6, CeladonCity_Shop_5F_Oak_move_3
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_12, MSGBOX_AUTOCLOSE
applymovement 7, CeladonCity_Shop_5F_Oak_move_2
waitmovement 0x0
msgbox CeladonCity_Shop5F_Text_Oak_13, MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_673
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
warp MAP_VERMILION_CITY, 23, 31
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
release
end

CeladonCity_Shop5F_Text_Oak_1:
	.string "STREBER: 9.800¥?! Das ist\n"
	.string "doch Betrug! Vor einem Monat lag der\l"
	.string "Preis noch bei 7.000¥ und vor einem\l"
	.string "Jahr bei 3.000¥!$"

CeladonCity_Shop5F_Text_Oak_2:
	.string "VERKÄUFER: Verzeihen Sie, aber ich bin\n"
	.string "nicht derjenige, der die Preise\l"
	.string "festlegt. Die, die das Sagen haben,\l"
	.string "haben beschlossen, dass das\l"
	.string "EV-TRAINING teurer sein muss.$"

CeladonCity_Shop5F_Text_Oak_3:
	.string "STREBER: Teuer? Niemand bei klarem\n"
	.string "Menschenverstand wird PROTEIN UND\l"
	.string "KALZIUM zu diesen Preisen kaufen!\p"
	.string "Die Trainer werden auf die NÄHRSTOFFE\n"
	.string "beschränkt sein, die sie in der Gegend\l"
	.string "finden!$"

CeladonCity_Shop5F_Text_Oak_4:
	.string "Das sind die Preise, welche die LEITUNG\n"
	.string "DER POKéMON LIGA festgelegt hat. Wir\l"
	.string "halten uns lediglich an ihre Vorgaben.$"

CeladonCity_Shop5F_Text_Oak_5:
	.string "STREBER: Wie soll ich denn jetzt nur den\n"
	.string "SPEZIAL-ANGRIFF meines MAGNETILOS\l"
	.string "erhöhen? Das ergibt doch alles\l"
	.string "keinen Sinn!$"

CeladonCity_Shop5F_Text_Oak_6:
	.string "????: Ganz im Gegenteil. Es ergibt sehr\n"
	.string "wohl Sinn, wenn man das Gesamtbild\l"
	.string "betrachtet …$"

CeladonCity_Shop5F_Text_Oak_7:
	.string "JUNGE DAME: Was für ein Idiot!\p"
	.string "Er könnte doch einfach in den\n"
	.string "POKéMON-TURM gehen und dort sein\l"
	.string "MAGNETILO trainieren.$"

CeladonCity_Shop5F_Text_Oak_8:
	.string "????: Nicht jeder ist so klug wie du,\n"
	.string "SARAH. Verlässliche Informationen sind\l"
	.string "heutzutage schwer zu finden.\p"
	.string "Es gibt noch immer Menschen, die fest\n"
	.string "davon überzeugt sind, dass nur 150\l"
	.string "POKéMON-Arten existieren. Wenn sie nur\l"
	.string "wüssten, wie groß die Welt in\l"
	.string "Wirklichkeit ist {PAUSE 5}…{PAUSE 5}$"

CeladonCity_Shop5F_Text_Oak_9:
	.string "SARAH: Kein Wunder, dass niemand in den\n"
	.string "letzten Jahren die POKéMON LIGA\l"
	.string "herausgefordert hat. Glaubst du, dass\l"
	.string "die Beiden es packen werden?$"

CeladonCity_Shop5F_Text_Oak_10:
	.string "????: Ihre Reise hat gerade erst\n"
	.string "begonnen. Noch kann ich nichts mit\l"
	.string "Sicherheit sagen, aber ihr Potenzial\l"
	.string "stimmt mich zuversichtlich. Vor allem {PAUSE 5}…{PAUSE 5}$"

CeladonCity_Shop5F_Text_Oak_11:
	.string "Ja? {PAUSE 15}…{PAUSE 35} HERR SIEGFRIED. {PAUSE 35} Natürlich. {PAUSE 35} Ich\n"
	.string "komme sofort. {PAUSE 35}$"

CeladonCity_Shop5F_Text_Oak_12:
	.string "Ein Anruf aus dem HAUPTQUARTIER DER\n"
	.string "POKéMON LIGA. Dann war's das wohl mit\n"
	.string "dem Einkaufen, SARAH.$"

CeladonCity_Shop5F_Text_Oak_13:
	.string "SARAH: Passt schon. Wir haben 50\n"
	.string "NÄHRSTOFFE für alle sechs Werte.\p"
	.string "Das sollte für die Woche reichen.$"

CeladonCity_Shop_5F_Oak_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_2:
walk_in_place_left
step_end


CeladonCity_Shop_5F_Oak_move_3:
walk_in_place_right
step_end

CeladonCity_Shop_5F_Oak_move_4:
face_right
step_end

CeladonCity_Shop_5F_Oak_move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_6:
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_up
walk_right
walk_up
walk_right
step_end

CeladonCity_Shop_5F_Oak_move_7:
face_left
step_end

CeladonCity_Shop_5F_Oak_move_8:
face_up
step_end

CeladonCity_Shop_5F_Oak_move_9:
walk_in_place_down
step_end

CeladonCity_Shop_5F_Oak_move_10:
emote_exclamation_mark
walk_left
step_end

CeladonCity_Shop_5F_Oak_move_11:
emote_exclamation_mark
face_left
step_end
