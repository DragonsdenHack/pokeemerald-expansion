BillGarden_House1_MapScripts::
	.byte 0

BillGardenHouse1_3::
end

BillGarden_House1_Bill_Combate::
setvar VAR_UNUSED_0x40F7, 20
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move1
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, BillGarden_House1_Bill_Combate_move2
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_2 MSGBOX_AUTOCLOSE
applymovement 2, BillGarden_House1_Bill_Combate_move3
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_3 MSGBOX_AUTOCLOSE
applymovement 2, BillGarden_House1_Bill_Combate_move4
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_4 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 2, BillGarden_House1_Bill_Combate_move5
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move6
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, BillGarden_House1_Bill_Combate_move5.1
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_5.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BILL_1, Route25_BillHouse_Evento_Policia_text_10
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move7
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
removeobject 3
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox BillGarden_House1_Bill_Combate_Text_7 MSGBOX_DEFAULT
waitfanfare
delay 20
playse SE_POKENAV_ON
delay 5
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move8
msgbox BillGarden_House1_Bill_Combate_Text_8 MSGBOX_AUTOCLOSE
msgbox BillGarden_House1_Bill_Combate_Text_9 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move9
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_10 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setvar VAR_UNUSED_0x40F7, 22
release
end

BillGarden_House1_Bill_Combate_Text_1:
.string "BILL: Keinen Schritt weiter, ROCKET!$"

BillGarden_House1_Bill_Combate_Text_2:
	.string "Eigentlich hätten drei Polizisten\n"
	.string "ausreichen sollen. Aber vielleicht\l"
	.string "war es ein Fehler, nur so wenige\l"
	.string "mitzubringen. Ich hätte stattdessen\l"
	.string "von Anfang an mit 20 aufwarten sollen.$"

BillGarden_House1_Bill_Combate_Text_3:
	.string "Wie dem auch sei. Hier gibt es sowieso\n"
	.string "keinen Ausweg für dich. Nehmen wir an,\l"
	.string "du besiegst mich. Die gesamte\l"
	.string "AZURIA-Polizei ist bereits auf dem Weg\l"
	.string "hierher. Du hast dich einfach\l"
	.string "übernommen, mein Freund{PAUSE 5}…{PAUSE 5}$"

BillGarden_House1_Bill_Combate_Text_4:
	.string "Trotzdem ist es alles andere als\n"
	.string "gewöhnlich, dass sich jemand wie du\l"
	.string "gegen drei Polizisten durchsetzt.$"

BillGarden_House1_Bill_Combate_Text_5:
	.string "Aber da du für eine lange Zeit hinter\n"
	.string "Gittern wandern wirst, erweise ich dir\l"
	.string "zumindest die Ehre, gegen mich zu\l"
	.string "kämpfen.\p"
	.string "Du solltest dich geehrt fühlen.$"

BillGarden_House1_Bill_Combate_Text_5.1:
	.string "Nicht jedem wird das Privileg zuteil,\n"
	.string "die unvergleichliche Sammlung des\l"
	.string "legendären BILL zu bestaunen - der\l"
	.string "Nummer eins unter den POKÉMANIACs!$"

BillGarden_House1_Bill_Combate_Text_6:
	.string "Das kann doch nur ein schlechter\n"
	.string "Scherz sein.$"

BillGarden_House1_Bill_Combate_Text_7:
	.string "-{PLAYER} reißt das Patent an sich.-$"

BillGarden_House1_Bill_Combate_Text_8:
	.string "AZURIA-POLIZEI: HERR BILL! Wir haben\n"
	.string "den Schuppen in ihrem geheimen Garten\l"
	.string "umzingelt. Dieser ROCKET wird\l"
	.string "nirgendwo hingehen!$"

BillGarden_House1_Bill_Combate_Text_9:
	.string "BILL: Perfekt! Stellt sicher, dass ihr\n"
	.string "ihm das Patent abnehmt, bevor ihr ihn\l"
	.string "abführt.$"

BillGarden_House1_Bill_Combate_Text_10:
	.string "Tja, das war's dann wohl. Du kannst tun,\n"
	.string "was du willst, aber letzten Endes bleibt\l"
	.string "dir nur die Möglichkeit, rauszugehen\l"
	.string "und dich zu ergeben. Genieße deine\l"
	.string "letzten Momente mit meinem Patent in\l"
	.string "deinen Händen.$"

BillGarden_House1_Bill_Combate_move1:
walk_in_place_up
step_end

BillGarden_House1_Bill_Combate_move2:
face_down
step_end

BillGarden_House1_Bill_Combate_move3:
walk_in_place_down
step_end

BillGarden_House1_Bill_Combate_move4:
walk_in_place_left
walk_in_place_down
step_end

BillGarden_House1_Bill_Combate_move5:
walk_right
walk_down
walk_in_place_right
step_end

BillGarden_House1_Bill_Combate_move5.1:
walk_in_place_right
step_end

BillGarden_House1_Bill_Combate_move6:
walk_in_place_left
step_end

BillGarden_House1_Bill_Combate_move7:
walk_up
walk_in_place_up
step_end

BillGarden_House1_Bill_Combate_move8:
emote_exclamation_mark
step_end

BillGarden_House1_Bill_Combate_move9:
walk_down
face_left
step_end

BillGarden_House1_Detenido::
lock
faceplayer
msgbox BillGarden_House1_Detenido_text_1 MSGBOX_AUTOCLOSE
release
end

BillGarden_House1_Detenido_text_1:
	.string "Tja, das war's dann wohl. Du kannst tun,\n"
	.string "was du willst, aber letzten Endes bleibt\l"
	.string "dir nur die Möglichkeit, rauszugehen\l"
	.string "und dich zu ergeben.\p"
	.string "Genieße deine letzten Momente mit\n"
	.string "meinem Patent in deinen Händen.$"
