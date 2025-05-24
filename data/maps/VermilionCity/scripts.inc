VermilionCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, VermillionCity_OnTransition
	.byte 0

VermillionCity_OnTransition::
setflag FLAG_VISITED_VERMILION_CITY
end

VermilionCity1::
lock     
faceplayer     
msgbox VermilionCity_Text1, MSGBOX_DEFAULT
release     
end

VermilionCity_Text1:
	.string "All die Umweltverschmutzung, die sich\n"
	.string "immer mehr in der Region ausbreitet,\l"
	.string "muss eure Schuld sein! Eure SLEIMA und\l"
	.string "SMOGON zerstören die Umwelt!$"


VermilionCity2::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 32
goto_if_gt VermilionCity2_2
msgbox VermilionCity2_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity2_2::
msgbox VermilionCity2_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity2_Texto_2:
	.string "Die M.S. ANNE ist ausgelaufen! Sie wird\n"
	.string "in einem Jahr wieder hier anlegen.$"

VermilionCity2_Texto_1:
.string "Hast Du gesehen?\n"
	.string "Die M.S. ANNE ankert im Hafen!$"


VermilionCity3::
end


VermilionCity4::
end


VermilionCity5::
end


VermilionCity6::
lock     
faceplayer     
msgbox VermilionCity_Text6, MSGBOX_DEFAULT
release     
end

VermilionCity_Text6:
	.string "Ihr von TEAM ROCKET werdet bald euer\n"
	.string "Recht verlieren, auf unseren Schiffen\l"
	.string "zu reisen! Die LIGA-LEITUNG wird\l"
	.string "nämlich ein Gesetz verabschieden, dass\l"
	.string "den Transport von euch ROCKETs von\l"
	.string "ORANIA CITY nach EILAND FÜNF und\l"
	.string "zurück verbietet!$"


VermilionCity7::
end


VermilionCity8::
end


VermilionCity9::
end


VermilionCity10::
end


VermilionCity11::
end



VermilionCityDocumento_100::
msgbox VermilionCityDocumento_Text_100, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_100:
.string "POKéMON-FANCLUB\n"
	.string "Alle POKéMON-Fans sind willkommen!$"



VermilionCityDocumento_101::
msgbox VermilionCityDocumento_Text_101, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_101:
	.string "ORANIA CITY POKéMON-ARENA\n"
	.string "ARENALEITER: MAJOR BOB\l"
	.string "Der blitzschnelle Arenaleiter!$"



VermilionCityDocumento_102::
msgbox VermilionCityDocumento_Text_102, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_102:
	.string "ORANIA CITY\n"
	.string "Die Hafenstadt der einmaligen\l"
	.string "Sonnenuntergänge!$"



VermilionCityDocumento_103::
msgbox VermilionCityDocumento_Text_103, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_103:
	.string "HAFEN VON ORANIA CITY$"



VermilionCityDocumento_104::
msgbox VermilionCityDocumento_Text_104, MSGBOX_SIGN   
end

VermilionCityDocumento_Text_104:
	.string "ACHTUNG!\p"
.string "ROUTE 12 wird von einem\n"
	.string "schlafenden POKéMON blockiert.\p"
	.string "Umleitung: FELSTUNNEL nach LAVANDIA.\n"
	.string "POLIZEI VON ORANIA CITY$"

VermilionCityDerecha::     
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityDerechaMove1
waitmovement 0
msgbox VermilionCity_Text_Derecha, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityDerechaMove2
waitmovement 0
release     
end

VermilionCity_Text_Derecha:     
.string "-Ich sollte mein Team heilen.\n"
	.string "Nur für alle Fälle.-$"


VermilionCityDerechaMove1:
walk_in_place_slow_down
step_end

VermilionCityDerechaMove2:
walk_down
step_end


VermilionCityIzq::     
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityIzqMove1
waitmovement 0
msgbox VermilionCity_Text_Izq, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCityIzqMove2
waitmovement 0
release     
end

VermilionCity_Text_Izq:     
.string "-Ich sollte mein Team heilen.\n"
	.string "Nur für alle Fälle.-$"


VermilionCityIzqMove1:
walk_in_place_slow_left
step_end

VermilionCityIzqMove2:
walk_left
step_end

VermilionCityFlag::     
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 7
removeobject 12
release     
end

VermilionCitySurge_move_2:
delay_16
face_right
delay_16
delay_16
delay_16
face_down
step_end

VermilionCitySurge_move_3:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
step_end

VermilionCitySurge:: 
playse SE_SLIDING_DOOR
opendoor 15, 6
waitdooranim
addobject 12
waitse
playse SE_PIN
applymovement 12, VerdanturfTown_Move_9
applymovement OBJ_EVENT_ID_PLAYER, VermilionCitySurge_move1
waitmovement 0x0
closedoor 15, 6
waitdooranim
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
fadeoutbgm 0
playse 507
delay 20
msgbox VermilionCity_Text_Surge, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilionCitySurge_move_2
applymovement 12, VermilionCitySurge_move_3
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 12
delay 10
fadeoutbgm 0
playse 525
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
setflag FLAG_HOENN_700
setflag FLAG_HOENN_699
setflag FLAG_HOENN_698
setflag FLAG_HOENN_697
setflag FLAG_HOENN_696
setflag FLAG_HOENN_695
setflag FLAG_HOENN_694
setflag FLAG_HOENN_693
setflag FLAG_HOENN_692
setflag FLAG_HOENN_691
setflag FLAG_HOENN_690
setflag FLAG_HOENN_689
setflag FLAG_HOENN_688
setflag FLAG_HOENN_687
setflag FLAG_HOENN_686
setflag FLAG_HOENN_685
setflag FLAG_HOENN_684
setflag FLAG_HOENN_683
setflag FLAG_HOENN_682
setflag FLAG_HOENN_681
setflag FLAG_HOENN_680
setflag FLAG_HOENN_679
setflag FLAG_HOENN_678
setflag FLAG_HOENN_677
setflag FLAG_HOENN_676
setflag FLAG_HOENN_675
setflag FLAG_HOENN_674
setflag FLAG_HOENN_673
setflag FLAG_HOENN_672
setflag FLAG_HOENN_671
setflag FLAG_HOENN_670
setflag FLAG_HOENN_669
setflag FLAG_HOENN_668
setflag FLAG_HOENN_667
setflag FLAG_HOENN_666
setflag FLAG_HOENN_665
setflag FLAG_HOENN_664
setflag FLAG_HOENN_663
setflag FLAG_HOENN_662
setflag FLAG_HOENN_661
setflag FLAG_HOENN_660
setflag FLAG_HOENN_659
setflag FLAG_HOENN_658
setflag FLAG_HOENN_657
setflag FLAG_HOENN_656
setflag FLAG_HOENN_655
setflag FLAG_HOENN_654
setflag FLAG_HOENN_653
setflag FLAG_HOENN_652
setflag FLAG_HOENN_651
setflag FLAG_HOENN_650
setflag FLAG_HOENN_649
setflag FLAG_HOENN_648
setflag FLAG_HOENN_647
setflag FLAG_HOENN_646
setflag FLAG_HOENN_645
setflag FLAG_HOENN_644
setflag FLAG_HOENN_643
setflag FLAG_HOENN_642
setflag FLAG_HOENN_641
setflag FLAG_HOENN_640
setvar VAR_UNUSED_0x40F7, 7
release
end

VermilionCity_Text_Surge:
	.string "????: Vorsicht, Kleiner. Wenn du keine\n"
	.string "Schwierigkeiten haben willst, dann stör\l"
	.string "hier besser den Frieden nicht.\p"
	.string "Ich habe dich gewarnt!$"

VermilionCitySurge_move1:
emote_exclamation_mark
face_up
delay_8
lock_facing_direction
walk_down
unlock_facing_direction
step_end

VermilioCity_Motorista::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2
waitmovement 0x0
goto VermilioCity_Motorista_4

VermilioCity_Motorista_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2.1
waitmovement 0x0
goto VermilioCity_Motorista_4

VermilioCity_Motorista_3::
lockall
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_2.2
waitmovement 0x0
goto VermilioCity_Motorista_4

VermilioCity_Motorista_move_4.1:
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end


VermilioCity_Motorista_4::
delay 5
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 9
applymovement 9, VermilioCity_Motorista_move_3
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_1 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_4
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, VermilioCity_Motorista_move_4.1
waitmovement 0x0
delay 10
msgbox VermilioCity_Motorista_Text_2.1 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilioCity_Motorista_Text_2.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, VermilioCity_Motorista_move_1
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_5
applymovement 9, VermilioCity_Motorista_move_5
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 10
applymovement 10, VermilioCity_Motorista_move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_7
applymovement 9, VermilioCity_Motorista_move_7
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_4 MSGBOX_AUTOCLOSE
applymovement 9, VermilioCity_Motorista_move_8
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_5 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_9
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_6 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_10
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_7 MSGBOX_AUTOCLOSE
delay 15
msgbox VermilioCity_Motorista_Text_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_1
applymovement 9, VermilioCity_Motorista_move_1
waitmovement 0x0
applymovement 10, VermilioCity_Motorista_move_11
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, VermilioCity_Motorista_move_12
waitmovement 0x0
waitse
msgbox VermilioCity_Motorista_Text_10 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, VermilioCity_Motorista_move_12
waitmovement 0x0
waitse
playse SE_BREAKABLE_DOOR
applymovement 5, VermilioCity_Motorista_move_13
waitmovement 0x0
waitse
delay 10
msgbox VermilioCity_Motorista_Text_11 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_14
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_12 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, VermilioCity_Motorista_move_8
waitmovement 0x0
waitse
msgbox VermilioCity_Motorista_Text_13 MSGBOX_AUTOCLOSE
applymovement 10, VermilioCity_Motorista_move_15
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_16
waitmovement 0x0
msgbox VermilioCity_Motorista_Text_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, VermilioCity_Motorista_move_17
applymovement 9, VermilioCity_Motorista_move_17
waitmovement 0x0
delay 10
applymovement 9, VermilioCity_Motorista_move_18
waitmovement 0x0
removeobject 9
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
playse SE_EXIT
addobject 11
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setvar VAR_UNUSED_0x40DC, 1
setvar VAR_UNUSED_0x40F7, 24
release
end

VermilioCity_Motorista_Text_1:
.string "ANDRA: Irgendwelche Hinweise, was unsere\n"
.string "geheime Trumpfkarte angeht, mit der\n"
	.string "wir auf die M.S. ANNE gelangen?\p"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "{PAUSE 15}…{PAUSE 15}\p"
	.string "Verstehe.$"

VermilioCity_Motorista_Text_2:
	.string "Es geht bergauf, seit unserem Versagen\n"
	.string "auf dem Mondberg. Es war höchste Zeit,\l"
	.string "dass sie deine Fähigkeiten anerkennen.\p"
	.string "Jetzt sind wir HOCHRANGIGE RÜPEL.$"

VermilioCity_Motorista_Text_2.1:
	.string "Du weißt, was das bedeutet, nicht wahr?\n"
	.string "Sie werden uns wichtigere Missionen\l"
	.string "anvertrauen und wir werden in einem\l"
	.string "Teich mit den großen Fischen der\l"
	.string "Organisation schwimmen. Das hier\l"
	.string "scheint auch keine gewöhnliche Mission\l"
	.string "zu sein.$"

VermilioCity_Motorista_Text_2.2:
	.string "Wie wohl unsere Gesichter ausgesehen\n"
	.string "haben müssen, als wir erfahren haben,\l"
	.string "dass GIOVANNI höchstpersönlich diese\l"
	.string "Mission in Auftrag gegeben hat {PAUSE 15}…{PAUSE 15}$"

VermilioCity_Motorista_Text_3:
	.string "Was auch immer in der Phiole des\n"
	.string "KAPITÄNs ist {PAUSE 15}…{PAUSE 15} wir werden es\l"
	.string "herausfinden. Ob wir wohl irgendwann\l"
	.string "GIOVANNI höchstpersönlich zu Gesicht\l"
	.string "bekommen werden {PAUSE 5}…{PAUSE 5}$"

VermilioCity_Motorista_Text_4:
.string "Ihr seid die ROCKETs, die\n"
	.string "LAMBDA geschickt hat, oder?$"

VermilioCity_Motorista_Text_5:
.string "ANDRA: Genau. Und du bist?$"

VermilioCity_Motorista_Text_6:
	.string "TETSUO, einer der Bosse von der\n"
	.string "KANTO-MOTORRAD-VEREINIGUNG. Aber das\l"
	.string "ist grad nicht wichtig.$"

VermilioCity_Motorista_Text_7:
	.string "TETSUO: Hey, hört mal! Ich sag euch, was\n"
	.string "wir jetzt tun werden. Ich hab den Typen\l"
	.string "da ‘ne Weile beobachtet und gemerkt,\l"
	.string "dass er seine Meeres-POKéMON so\l"
	.string "richtig gern hat. Ich werde ihm auf den\l"
	.string "Sack gehen, damit ihr euch unbemerkt\l"
	.string "auf die M.S. Anne schleichen könnt.$"

VermilioCity_Motorista_Text_8:
	.string "TETSUO: Wenn ich euch das Zeichen gebe,\n"
	.string "rennt ihr zum Schiff und lasst mich den\l"
	.string "Rest regeln {PAUSE 5}…{PAUSE 5}$"

VermilioCity_Motorista_Text_9:
.string "TETSUO: HEY, DU!$"

VermilioCity_Motorista_Text_10:
	.string "Ja, genau du! Warum zum Teufel\n"
	.string "verschwendest du deine Zeit damit,\l"
	.string "diese glitschigen, erbärmlichen\l"
	.string "WASSER-POKéMON anzubeten? Verdammte\l"
	.string "TENTACHA! Alles, wozu sie gut sind, ist,\l"
	.string "uns den Sommer zu ruinieren!$"

VermilioCity_Motorista_Text_11:
	.string "MATROSE: Was hast du gesagt?\p"
	.string "Sag das nochmal, du GIFT liebende\n"
	.string "Hohlbirne! Nur zu deiner Info! TENTACHA\l"
	.string "sind auch GIFT-POKéMON!$"

VermilioCity_Motorista_Text_12:
	.string "TETSUO: Das ist ja das Problem! Echte\n"
	.string "GIFT-POKéMON wie SMOGMOG, GENGAR oder\l"
	.string "GOLBAT machen ihre stärksten Feinde\l"
	.string "problemlos platt! Du weißt schon:\l"
	.string "BODEN-POKéMON! Aber TENTACHA und\l"
	.string "TENTOXA? All das Wasser hilft den ‘nen\l"
	.string "Scheiß, wenn sie lebendig begraben\l"
	.string "werden. Es wäscht nur alles weg, was ein\l"
	.string "GIFT-POKéMON krass macht! Alles wozu\l"
	.string "WASSER-Typen gut sind, ist alles Geile\l"
	.string "zu ersaufen, was ihr anderer Typ hat!$"

VermilioCity_Motorista_Text_13:
	.string "MATROSE: Jetzt reicht's! Du wirst für\n"
	.string "das bezahlen, was du mit deiner\l"
	.string "Motorfresse über die Reinheit von\l"
	.string "WASSER-POKéMON geschwafelt hast! Ich\l"
	.string "zeig dir jetzt, wie falsch du liegst!$"

VermilioCity_Motorista_Text_14:
.string "ANDRA: {PLAYER}! Jetzt!$"

VermilioCity_Motorista_move_1:
walk_in_place_left
step_end

VermilioCity_Motorista_move_2:
emote_exclamation_mark
walk_down
walk_down
walk_in_place_right
step_end

VermilioCity_Motorista_move_2.1:
emote_exclamation_mark
walk_down
walk_in_place_right
step_end

VermilioCity_Motorista_move_2.2:
emote_exclamation_mark
walk_in_place_right
step_end

VermilioCity_Motorista_move_3:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilioCity_Motorista_move_4:
walk_in_place_up
walk_in_place_left
step_end

VermilioCity_Motorista_move_5:
emote_exclamation_mark
walk_in_place_right
step_end

VermilioCity_Motorista_move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilioCity_Motorista_move_7:
face_up
step_end

VermilioCity_Motorista_move_8:
walk_in_place_up
step_end

VermilioCity_Motorista_move_9:
walk_in_place_down
step_end

VermilioCity_Motorista_move_10:
walk_in_place_left
walk_in_place_down
step_end

VermilioCity_Motorista_move_11:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
step_end

VermilioCity_Motorista_move_12:
emote_exclamation_mark
step_end

VermilioCity_Motorista_move_13:
delay_16
walk_in_place_up
delay_8
step_end

VermilioCity_Motorista_move_14:
walk_down
step_end

VermilioCity_Motorista_move_15:
walk_in_place_up
walk_in_place_down
step_end

VermilioCity_Motorista_move_16:
walk_in_place_right
step_end

VermilioCity_Motorista_move_17:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
step_end

VermilioCity_Motorista_move_18:
walk_in_place_left
walk_in_place_down
walk_slow_down
walk_slow_down
step_end

VermilionCity_Rojo::
lockall
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Rojo_move1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Rojo_move2
waitmovement 0x0
special RemoveCameraObject
delay 25
playse SE_SLIDING_DOOR
opendoor 29, 17
waitdooranim
addobject 7
applymovement 7, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 29, 17
waitdooranim
applymovement 7, VermilionCity_Rojo_move3
waitmovement 0x0
delay 20
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 7
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, VermilionCity_Rojo_move4
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_PETALBURG_CITY_WALLY
setvar VAR_UNUSED_0x40F7, 29
release
end

VermilionCity_Rojo_move1:
emote_exclamation_mark
walk_in_place_down
step_end

VermilionCity_Rojo_move2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end


VermilionCity_Rojo_move3:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


VermilionCity_Rojo_move4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

VermilionCity_Secundaria_AncianoMachop::
lock
faceplayer
compare VAR_UNUSED_0x409B, 2
goto_if_gt VermilionCity_Secundaria_AncianoMachop_6
compare VAR_UNUSED_0x409B, 2
goto_if_eq VermilionCity_Secundaria_AncianoMachop_5
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_2 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409B, 1
goto_if_eq VermilionCity_Secundaria_AncianoMachop_4
compare VAR_UNUSED_0x40F7, 22
goto_if_gt VermilionCity_Secundaria_AncianoMachop_2
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_3 MSGBOX_AUTOCLOSE
release
end





VermilionCity_Secundaria_AncianoMachop_2::
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_Secundaria_AncianoMachop_3
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_10 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_11 MSGBOX_AUTOCLOSE
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 1
release
end


VermilionCity_Secundaria_AncianoMachop_3::
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_13 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Secundaria_AncianoMachop_4::
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_8 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Secundaria_AncianoMachop_5:
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 4, VermilionCity_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_HITMONLEE, 20, ITEM_SCOPE_LENS
waitfanfare
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 3
release
end

VermilionCity_Secundaria_AncianoMachop_6:
msgbox VermilionCity_Secundaria_AncianoMachop_Texto_4 MSGBOX_AUTOCLOSE
release
end



VermilionCity_Secundaria_AncianoMachop_Texto_1:
	.string "Mann! Diese großkotzigen Schnösel aus\n"
	.string "dem FANCLUB machen sich ständig über\l"
	.string "mein Projekt lustig! Sie denken, sie\l"
	.string "wären etwas Besseres, nur weil sie ein\l"
	.string "paar seltene POKéMON haben! Wenn ich\l"
	.string "außer meinem geliebten MACHOLLO noch\l"
	.string "ein paar weitere POKéMON hätte, würde\l"
	.string "ich ihnen eine Lektion erteilen, die sie\l"
	.string "nicht so schnell vergessen!$"

VermilionCity_Secundaria_AncianoMachop_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

VermilionCity_Secundaria_AncianoMachop_Texto_3:
	.string "Du wirkst selbst noch ein bisschen zu\n"
	.string "grün hinter den Ohren, um gegen deren\l"
	.string "VORSITZENDEN zu kämpfen. Komm zurück,\l"
	.string "wenn du stärker geworden bist und ein\l"
	.string "gutes Geschäft machen willst.$"

VermilionCity_Secundaria_AncianoMachop_Texto_4:
	.string "Mein Projekt läuft richtig gut! In drei\n"
	.string "Jahren wird hier an diesem Ort ein noch\l"
	.string "größeres Gebäude stehen, als das\l"
	.string "HAUPTGEBÄUDE der SILPH COMPANY von\l"
	.string "SAFFRONIA CITY! Du wirst schon sehen!$"

VermilionCity_Secundaria_AncianoMachop_Texto_5:
	.string "Du hast also den Boden mit ihm\n"
	.string "gewischt! Ich hatte ehrlich gesagt\l"
	.string "meine Zweifel, was dich angeht! Ich\l"
	.string "gebe zu, dass seine POKéMON hier in der\l"
	.string "Gegend durchaus selten sind. Ich wette,\l"
	.string "sein Ego leidet ordentlich nach dieser\l"
	.string "Niederlage vor allen seinen Anhängern!\l"
	.string "Ich bin sicher, dass du mein KICKLEE\l"
	.string "gut nutzen wirst!$"

VermilionCity_Secundaria_AncianoMachop_Texto_6:
.string "DU ERHÄLTST EIN LEVEL 20 KICKLEE!!$"

VermilionCity_Secundaria_AncianoMachop_Texto_7:
	.string "Das hier ist eines der seltensten und\n"
	.string "angesehensten KAMPF-POKéMON in ganz\l"
	.string "KANTO! Es hat richtig harte Tritt drauf!\p"
	.string "Für mich ist es zu gut, aber irgendetwas\n"
	.string "sagt mir, dass es bei dir in guten\l"
	.string "Händen ist.$"

VermilionCity_Secundaria_AncianoMachop_Texto_8:
	.string "Wie läuft die Mission?$"

VermilionCity_Secundaria_AncianoMachop_Texto_9:
	.string "Oh!\p"
	.string "Ein HOCHRANGIGER RÜPEL?\p"
	.string "Hm{PAUSE 15}…{PAUSE 15} ja, deine POKéMON scheinen kräftig zu sein.\p"
	.string "Sag mal, hättest du Lust, einen kleinen\n"
	.string "Job für mich zu erledigen?$"

VermilionCity_Secundaria_AncianoMachop_Texto_10:
	.string "Gut! Hör zu! Der VORSITZENDE des\n"
	.string "lokalen FANCLUBS ist eine große Nummer\l"
	.string "hier und macht sich seit einiger Zeit\l"
	.string "über meine Ambitionen lustig. Er hat\l"
	.string "sich über mein Projekt beschwert und\l"
	.string "behauptet, dass dieser Ort hier in drei\l"
	.string "Jahren immer noch leer sein wird und ich\l"
	.string "längst verschwunden sein werde.$"

VermilionCity_Secundaria_AncianoMachop_Texto_11:
	.string "Pass auf! Ich will, dass du ihm vor allen\n"
	.string "seinen Anhängern eine Lektion erteilst.\p"
	.string "Er gibt immer damit an, was für ein\n"
	.string "starker TRAINER er sei, wie er über 100\l"
	.string "POKéMON gefangen habe und es mit\l"
	.string "ARENALEITERN aufnehmen könne. Wenn du\l"
	.string "ihn besiegst, wird das seinen Ruf\l"
	.string "ruinieren und damit auch seine gesamte\l"
	.string "Glaubwürdigkeit!$"

VermilionCity_Secundaria_AncianoMachop_Texto_12:
	.string "Ich werde keinen Schritt von hier\n"
	.string "weichen. Ich werde genau hier mit einer\l"
	.string "schönen Belohnung auf dich warten,\l"
	.string "wenn du es schaffst.$"

VermilionCity_Secundaria_AncianoMachop_Texto_13:
.string "Nein? In Ordnung …{PAUSE 15}…{PAUSE 15}\n"
	.string "Falls du es dir anders überlegst-ich bin hier.$"

VermilionCity_Secundaria_AncianoMachop_Move_1:
emote_exclamation_mark
step_end


VermilionCity_Primer_NPC::
lock
faceplayer
msgbox VermilionCity_Primer_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Primer_NPC_Texto_1:
	.string "All die Umweltverschmutzung, die sich\n"
	.string "immer mehr in der Region ausbreitet,\l"
	.string "muss eure Schuld sein! Eure SLEIMA und\l"
	.string "SMOGON zerstören die Umwelt!$"

VermilionCity_Barco::
lock
compare VAR_UNUSED_0x40F7, 24
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 25
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 26
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 27
goto_if_eq VermilionCity_Barco_3
compare VAR_UNUSED_0x40F7, 95
goto_if_lt VermilionCity_Barco_2
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAS, 0
switch VAR_RESULT
case 0, EventScript_Prima
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

VermilionCity_Marinero::
compare VAR_UNUSED_0x40F7, 24
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 25
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 26
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 27
lock
faceplayer
goto_if_eq VermilionCity_Marinero_3
compare VAR_UNUSED_0x40F7, 95
goto_if_lt VermilionCity_Marinero_2
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAS, 0
switch VAR_RESULT
case 0, EventScript_Prima
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_4
waitmovement 0x0
release
end

VermilionCity_Marinero_2::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Marinero_3::
msgbox VermilionCity_Marinero_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Marinero_Texto_1:
	.string "Motormouth! A pack of WAILORD could\n"
	.string "wash away your BIKE PATH with their\l"
	.string "WATER SPOUT and leave you high and dry!\l"
	.string "So you tell me again just how useless\l"
	.string "they are!$"

VermilionCity_Barco_3::
release
end

VermilionCity_Barco_2::
applymovement 5, VermilionCity_Barco_Move_1
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_2
waitmovement 0x0
msgbox VermilionCity_Barco_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, VermilionCity_Barco_Move_3
applymovement OBJ_EVENT_ID_PLAYER, VermilionCity_Barco_Move_4
waitmovement 0x0
release
end

VermilionCity_Barco_Move_1:
face_left
step_end

VermilionCity_Barco_Move_2:
face_right
step_end

VermilionCity_Barco_Move_3:
face_up
step_end

VermilionCity_Barco_Move_4:
walk_slow_up
walk_slow_up
step_end

EventScript_Mas::
multichoice 22, 0, MULTI_ISLAS2, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Exta
case 3, EventScript_Setima
release
end

VermilionCity_Barco_Texto_1:
	.string "Niemand gelangt ohne meine Erlaubnis an\n"
	.string "Bord, ROCKET! Und jetzt verschwinde!$"

VermilionCity_Barco_Texto_2:
	.string "Ah, du hast den BUNT-PASS. Möchtest du\n"
	.string "an Bord der SEESPRINT-Fähre?$"

VermilionCity_Barco_Texto_3:
.string "O.K.! Alles klar!\p"
	.string "SEESPRINT TEMPO 7\n"
	.string "wird in Kürze ablegen.$"

VermilionCity_Barco_Texto_4:
.string "In Ordnung!\p"
.string "Los, SEESPRINT\n"
	.string "TEMPO 7!$"

EventScript_Setima::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 33 @BANCO DE MAPA
setvar VAR_0x8001 4 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Exta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 32 @BANCO DE MAPA
setvar VAR_0x8001 1 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Inta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 31 @BANCO DE MAPA
setvar VAR_0x8001 1 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Cuarta::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 30 @BANCO DE MAPA
setvar VAR_0x8001 4 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end


EventScript_Prima::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 27 @BANCO DE MAPA
setvar VAR_0x8001 3 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Secunda::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 28 @BANCO DE MAPA
setvar VAR_0x8001 3 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

EventScript_Tera::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 34 @BANCO DE MAPA
setvar VAR_0x8001 0 @NUMERO DE MAPA
setvar VAR_0x8002 8 @POSICION X
setvar VAR_0x8003 5 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end


IslaPrima_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAPRIMA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Secunda
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

EventScript_Carmin::
msgbox VermilionCity_Barco_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_CUSTOM_SEAGALLOP     @FLAG QUE HAY QUE ACTIVAR PARA COMPORTAMIENTO ESPECIAL
setvar VAR_0x8000 1 @BANCO DE MAPA
setvar VAR_0x8001 5 @NUMERO DE MAPA
setvar VAR_0x8002 23 @POSICION X
setvar VAR_0x8003 31 @POSICION Y
callnative DoSeagallopFerryScene
waitstate
release
end

IslaPrima_Secunda::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLASECUNDA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Tera
case 3, EventScript_Mas
release
end

IslaTera_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLATERA, 0
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Secunda
case 3, EventScript_Mas
release
end

IslaCuarta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLACUARTA, 0
switch VAR_RESULT
case 0, EventScript_Inta
case 1, EventScript_Exta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

EventScript_Mas2::
multichoice 22, 0, MULTI_ISLASCLASIC, 0	
switch VAR_RESULT
case 0, EventScript_Carmin
case 1, EventScript_Prima
case 2, EventScript_Secunda
case 3, EventScript_Tera
release
end

IslaInta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAINTA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Exta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

IslaExta_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLAEXTA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Setima
case 3, EventScript_Mas2
release
end

IslaSetima_Barco::
lock
faceplayer
msgbox VermilionCity_Barco_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ISLASETIMA, 0
switch VAR_RESULT
case 0, EventScript_Cuarta
case 1, EventScript_Inta
case 2, EventScript_Exta
case 3, EventScript_Mas2
release
end

Vermilion_Motorista::
lock
msgbox Vermilion_Motorista_Texto_1 MSGBOX_DEFAULT
release
end

Vermilion_Motorista_Texto_1:
	.string "Wusstest du, dass SMOGMOG DONNERBLITZ\n"
	.string "lernen kann? Damit brate ich all deine\l"
	.string "POKéMON!$"

Vermilion_Anciano_Bill::
lock
msgbox Vermilion_Anciano_Bill_Texto_1 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_2 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_3 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_4 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_5 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_6 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_7 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_8 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_9 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_10 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_11 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_12 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_13 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_14 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_15 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_16 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_17 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_18 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_19 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_20 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_21 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_22 MSGBOX_AUTOCLOSE
msgbox Vermilion_Anciano_Bill_Texto_23 MSGBOX_AUTOCLOSE
release
end

Vermilion_Anciano_Bill_Texto_1:
	.string "Ha sido duro, MACHOP, pero ya tenemos\n"
	.string "todo listo para iniciar la construcción.$"

Vermilion_Anciano_Bill_Texto_2:
	.string "¡Vamos a honrar la región de KANTO y el\n"
	.string "ARCHI7 como ningún otro lugar lo hizo\l"
	.string "antes!$"

Vermilion_Anciano_Bill_Texto_3:
	.string "¡Chop!$"

Vermilion_Anciano_Bill_Texto_4:
	.string "POLICÍA de MESETA AÑIL.$"

Vermilion_Anciano_Bill_Texto_5:
	.string "¿Q-qué ocurre?$"

Vermilion_Anciano_Bill_Texto_6:
	.string "Hemos identificado irregularidades en\n"
	.string "este terreno. No es apto para la\l"
	.string "construcción, y está usted incurriendo\l"
	.string "en un delito.$"

Vermilion_Anciano_Bill_Texto_7:
	.string "Eso… ¡eso es imposible! Me dijeron que\n"
	.string "todo estaba en regla, íbamos a empezar\l"
	.string "a construir mañana.$"

Vermilion_Anciano_Bill_Texto_8:
	.string "La legislatura ha cambiado.$"

Vermilion_Anciano_Bill_Texto_9:
	.string "No… ¡no podéis hacerme esto!$"

Vermilion_Anciano_Bill_Texto_10:
	.string "¿Tenéis idea de todo lo que he pasado\n"
	.string "para llegar hasta aquí? ¿La cantidad de\l"
	.string "trabajo y dinero que he invertido para\l"
	.string "ello?$"

Vermilion_Anciano_Bill_Texto_11:
	.string "¡Llevo toda la vida trabajando por este\n"
	.string "sueño!$"

Vermilion_Anciano_Bill_Texto_12:
	.string "Los sueños a veces no se cumplen,\n"
	.string "anciano. De hecho, lo normal, es que no\l"
	.string "lo hagan. Bienvenido al mundo real.$"

Vermilion_Anciano_Bill_Texto_13:
	.string "¡No! ¡No tenéis derecho!$"

Vermilion_Anciano_Bill_Texto_14:
	.string "¡Lleváoslo de aquí!$"

Vermilion_Anciano_Bill_Texto_15:
	.string "¡Chop!$"

Vermilion_Anciano_Bill_Texto_16:
	.string "El COMITÉ de la LIGA POKÉMON se\n"
	.string "encargará de ti.$"

Vermilion_Anciano_Bill_Texto_17:
	.string "????: ¿Y bien?$"

Vermilion_Anciano_Bill_Texto_18:
	.string "SR.BILL. Misión cumplida, el ANCIANO y\n"
	.string "su MACHOP no interferirán en su\l"
	.string "proyecto.$"

Vermilion_Anciano_Bill_Texto_19:
	.string "BILL: Perfecto.$"

Vermilion_Anciano_Bill_Texto_20:
	.string "¿Quiere que eliminemos también el claro\n"
	.string "de tierra?$"

Vermilion_Anciano_Bill_Texto_21:
	.string "BILL: No, es irrelevante. Jamás hizo\n"
	.string "pública la naturaleza de su proyecto.$"

Vermilion_Anciano_Bill_Texto_22:
	.string "BILL: Quedará como un vestigio de lo\n"
	.string "que una vez pudo ser. La gente\l"
	.string "inventará divertidas historias,\l"
	.string "elucubrará teorías… y yo me reiré de\l"
	.string "todas ellas desde arriba.$"

Vermilion_Anciano_Bill_Texto_23:
	.string "Como usted guste, SR.BILL.$"

Vermilion_Cazabichos::
lock
delay 15
msgbox Vermilion_Cazabichos_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, Vermilion_Cazabichos_Move_2
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Vermilion_Cazabichos_Move_3
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Vermilion_Cazabichos_Move_5
applymovement 13, Vermilion_Cazabichos_Move_4
waitmovement 0x0
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Vermilion_Cazabichos_Move_4.1
waitmovement 0x0
special RemoveCameraObject
msgbox Vermilion_Cazabichos_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Cazabichos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Vermilion_Cazabichos_Move_6
waitmovement 0x0
msgbox Vermilion_Cazabichos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Vermilion_Cazabichos_Move_1
waitmovement 0x0
setflag FLAG_HOENN_673
removeobject 13
playse SE_EXIT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Vermilion_Cazabichos_Move_4.2
waitmovement 0x0
special RemoveCameraObject
setvar VAR_SCOTT_STATE, 2
release
end

Vermilion_Cazabichos_Move_4.1:
walk_up
step_end

Vermilion_Cazabichos_Move_4.2:
walk_down
step_end

Vermilion_Cazabichos_Move_6:
face_down
step_end

Vermilion_Cazabichos_Move_5:
walk_down
walk_left
walk_left
face_up
step_end

Vermilion_Cazabichos_Move_4:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
face_right
step_end

Vermilion_Cazabichos_Move_3:
face_left
step_end

Vermilion_Cazabichos_Move_2:
face_player
step_end

Vermilion_Cazabichos_Move_1:
face_right
delay_16
walk_in_place_right
step_end

Vermilion_Cazabichos_Texto_1:
	.string "Look at those rats…$"

Vermilion_Cazabichos_Texto_2:
	.string "They hid the door so no one would ask\n"
	.string "questions.$"

Vermilion_Cazabichos_Texto_3:
	.string "But I know every inch of my house.$"

Vermilion_Cazabichos_Texto_4:
	.string "Ha! Just as I thought. Those gorillas\n"
	.string "didn't even see it.$"

Vermilion_Cazabichos_Texto_5:
	.string "… …$"

Vermilion_Cazabichos_Texto_6:
	.string "I ain't a good TRAINER, but if lending\n"
	.string "you a helping hand would make a\l"
	.string "difference, I'll do it.$"

Vermilion_Cazabichos_Texto_7:
	.string "Those last announcements LANCE made\n"
	.string "made me lose my faith.$"

Vermilion_Cazabichos_Texto_8:
	.string "But now that I see you here, I realized\n"
	.string "we have one last resort: using sheer\l"
	.string "force.$"


Vermilion_Activador_Entrada::
compare VAR_SCOTT_STATE, 1
goto_if_gt Vermilion_Activador_Entrada_Pasa
release
end

Vermilion_Activador_Entrada_Pasa::
delay 15
msgbox Vermilion_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Vermilion_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Vermilion_Activador_Entrada_Pasa_No
warp MAP_VERMILION_CITY_SECUNDARIA, 0, 2
release
end

Vermilion_Activador_Entrada_Texto_1:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Vermilion_Activador_Entrada_Pasa_Text_YesNo:
	.string "You can access the house via this\n"
	.string "passage. Wanna go through?$"

Vermilion_Activador_Entrada_Pasa_No::
release
end
