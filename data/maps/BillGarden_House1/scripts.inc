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
applymovement 2, BillGarden_House1_Bill_Combate_move5
applymovement OBJ_EVENT_ID_PLAYER, BillGarden_House1_Bill_Combate_move6
waitmovement 0x0
msgbox BillGarden_House1_Bill_Combate_Text_5 MSGBOX_AUTOCLOSE
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
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
setvar VAR_UNUSED_0x40F7, 22
release
end

BillGarden_House1_Bill_Combate_Text_1:
.string "BILL: Ni un solo paso más, ROCKET.$"

BillGarden_House1_Bill_Combate_Text_2:
	.string "Debería de haber sido más que\n"
	.string "suficiente con 3 policías. Tal vez\l"
	.string "mi error fue no contratar a 20 en\l"
	.string "lugar de 3.$"

BillGarden_House1_Bill_Combate_Text_3:
.string "Sea como sea, no tienes salida,\n"
	.string "aunque consigas derrotarme, toda\l"
	.string "la policía de CELESTE está de\l"
	.string "camino, has actuado\l"
	.string "precipitadamente...$"

BillGarden_House1_Bill_Combate_Text_4:
.string "No obstante, no es muy común ver a\n"
	.string "alguien desafiar y derrotar a 3\l"
	.string "policías simultáneamente.$"

BillGarden_House1_Bill_Combate_Text_5:
.string "Ya que vas a pasar mucho tiempo\n"
	.string "reflexionando entre rejas, al\l"
	.string "menos te daré el honor de combatir\l"
	.string "conmigo, siéntete afortunado.\l"
	.string "¡No todos los días tiene uno la\l"
	.string "suerte de presenciar la gran\l"
	.string "colección de BILL, el POKEMANÍACO\l"
	.string "número 1!$"

BillGarden_House1_Bill_Combate_Text_6:
.string "Esto debe de ser una broma.$"

BillGarden_House1_Bill_Combate_Text_7:
.string "({PLAYER} robó la patente).$"

BillGarden_House1_Bill_Combate_Text_8:
.string "POLICÍA CELESTE: SR.BILL, le\n"
	.string "informamos de que tenemos\l"
	.string "completamente rodeada la caseta de\l"
	.string "su jardín secreto. Ese ROCKET\l"
	.string "no tiene escapatoria.$"

BillGarden_House1_Bill_Combate_Text_9:
.string "BILL: Perfecto. Aseguráos de\n"
	.string "quitarle la patente antes de\l"
	.string "llevároslo.$"

BillGarden_House1_Bill_Combate_Text_10:
.string "Se acabó. Haz lo que quieras, tu\n"
	.string "única opción es salir y\l"
	.string "entregarte. Disfruta de tus\l"
	.string "últimos momentos con la patente en\l"
	.string "tu poder.$"

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
.string "Se acabó, haz lo que quieras tu\n"
	.string "única opción es salir y\l"
	.string "entregarte, disfruta de tus\l"
	.string "últimos momentos con la patente en\l"
	.string "tu poder.$"
