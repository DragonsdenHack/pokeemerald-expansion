Route25_BillHouse_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route25_BillHouse_OnFrame
	.byte 0

Route25_BillHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 20, Route25_BillHouse_Evento_Policia
	.2byte 0

Route25BillHouse3::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_3, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_3:
.string "La única forma que tienes de salir\n"
.string "de aquí es detenido.$"



Route25BillHouse4::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_4, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_4:
.string "La única forma que tienes de salir\n"
.string "de aquí es detenido.$"



Route25BillHouse5::
lock     
faceplayer     
msgbox Route25_BillHouse_Text_5, MSGBOX_DEFAULT
release     
end

Route25_BillHouse_Text_5:
.string "La única forma que tienes de salir\n"
.string "de aquí es detenido.$"

Route25_BillHouse_Evento_Policia::
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move1
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route25_BillHouse_Evento_Policia_move2
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move3
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route25_BillHouse_Evento_Policia_move4
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_4 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
applymovement 1, Route25_BillHouse_Evento_Policia_move7
waitmovement 0x0
delay 20
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playse SE_EXIT
addobject 5
applymovement 5, Route25_BillHouse_Evento_Policia_move8
waitmovement 0x0
playse SE_PIN
playse MUS_RG_VICTORY_ROAD
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move9
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 4
applymovement 4, Route25_BillHouse_Evento_Policia_move10
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 3
applymovement 3, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
delay 10
applymovement 1, Route25_BillHouse_Evento_Policia_move7
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move6
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_5 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move7
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_6 MSGBOX_AUTOCLOSE
applymovement 1, Route25_BillHouse_Evento_Policia_move11
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 1
playse SE_EXIT
delay 15
applymovement 5, Route25_BillHouse_Evento_Policia_move12
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move13
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, Route25_BillHouse_Evento_Policia_text_8
applymovement 4, Route25_BillHouse_Evento_Policia_move3
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move14
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MARCEL, Route25_BillHouse_Evento_Policia_text_10
applymovement 3, Route25_BillHouse_Evento_Policia_move15
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move16
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALBERTO, Route25_BillHouse_Evento_Policia_text_12
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Evento_Policia_move16
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_13 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Route25_BillHouse_Evento_Policia_move12
waitmovement 0x0
playse SE_POKENAV_ON
delay 15
msgbox Route25_BillHouse_Evento_Policia_text_14 MSGBOX_AUTOCLOSE
delay 15
playse SE_POKENAV_OFF
applymovement 3, Route25_BillHouse_Evento_Policia_move15
waitmovement 0x0
msgbox Route25_BillHouse_Evento_Policia_text_15 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 21
release
end

Route25_BillHouse_Evento_Policia_text_1:
.string "BILL: Esta SILPH, le dejé claro\n"
	.string "que quería lista la MEJORA para\l"
	.string "PORYGON cuanto antes. Voy a ser la\l"
	.string "primera persona de KANTO en contar\l"
	.string "con un PORYGON2, lo último en\l"
	.string "tecnología.$"

Route25_BillHouse_Evento_Policia_text_2:
.string "¿Qué clase de broma es esta?\n"
	.string "Sal inmediatamente de mi casa,\l"
	.string "ROCKET. Yo no hago negocios con\l"
	.string "delincuentes, todos los POKÉMON\l"
	.string "que tenéis para ofrecerme ya los\l"
	.string "tengo.$"

Route25_BillHouse_Evento_Policia_text_3:
.string "...$"

Route25_BillHouse_Evento_Policia_text_4:
.string "¿Quieres mi patente para realizar\n"
	.string "teletransportes a largas\l"
	.string "distancias?\l"
	.string "Buena jugada, pero,\l"
	.string "lamentablemente para ti...$"

Route25_BillHouse_Evento_Policia_text_5:
.string "El gobierno de la ÉLITE 4 ya me ha\n"
	.string "hecho una oferta por la patente,\l"
	.string "20 millones de POKÉS y licencia\l"
	.string "para investigar a las AVES\l"
	.string "LEGENDARIAS. Vuestra organización\l"
	.string "está cada vez más en decadencia.\l"
	.string "¿De verdad pretendían que un pobre\l"
	.string "ROCKET robase al gran BILL la\l"
	.string "propiedad intelectual de uno de\l"
	.string "sus grandes inventos?\l"
	.string "Esto queda demasiado grande para\l"
	.string "ti, ROCKET.$"

Route25_BillHouse_Evento_Policia_text_6:
.string "¡GUARDIAS!\n"
	.string "¡Deshaceos de esta basura, no\l"
	.string "quiero volver a verla!$"

Route25_BillHouse_Evento_Policia_text_7:
.string "Quedas detenido ROCKET. Vas a\n"
	.string "pasar el resto de tus días en\l"
	.string "prisión por atentar contra la\l"
	.string "propiedad intelectual de nuestra\l"
	.string "región.\l"
	.string "...\l"
	.string "...\l"
	.string "¿Te resistes?\l"
	.string "¡Entonces te reduciremos por la\l"
	.string "fuerza!$"

Route25_BillHouse_Evento_Policia_text_8:
.string "¡No podrás con todos nosotros!$"

Route25_BillHouse_Evento_Policia_text_9:
.string "Aún cabía la posibilidad de\n"
	.string "disminuir tu pena en caso de buen\l"
	.string "comportamiento.\l"
	.string "¡Ahora vas a ser condenado a 2\l"
	.string "cadenas perpetuas por resistencia\l"
	.string "a la autoridad!$"

Route25_BillHouse_Evento_Policia_text_10:
.string "¿Yo tampoco pude?$"

Route25_BillHouse_Evento_Policia_text_11:
.string "Ya he visto suficiente. La\n"
	.string "justicia no tendrá piedad contigo\l"
	.string "después de este numerito.\l"
	.string "¡Siquiera habrá juicio!$"

Route25_BillHouse_Evento_Policia_text_12:
.string "¿3 policías pierden con un vulgar\n"
	.string "ROCKET?$"

Route25_BillHouse_Evento_Policia_text_13:
.string "¿Qué clase de broma es esta?\n"
	.string "Los ROCKETS comunes no oponen\l"
	.string "tanta resistencia.\l"
	.string "¡No vas a salirte con la tuya!$"

Route25_BillHouse_Evento_Policia_text_14:
.string "¡Llamando a todas las unidades\n"
	.string "repito llamando a todas las\l"
	.string "unidades de CIUDAD CELESTE!\l"
	.string "¡Tenemos un ROCKET rebelde\l"
	.string "contenido en la casa de BILL,\l"
	.string "pretendía robar una patente\l"
	.string "valorada en millones. Los 3\l"
	.string "policías que estamos hemos caído,\l"
	.string "exigimos refuerzos inmediatamente!$"

Route25_BillHouse_Evento_Policia_text_15:
.string "Se acabó. Los refuerzos están al\n"
	.string "caer, y tu equipo POKÉMON mermado.\l"
	.string "No vamos a dejar que salgas de\l"
	.string "aquí, haz lo que quieras, la única\l"
	.string "forma que tienes de salir de casa\l"
	.string "de BILL es detenido.$"

Route25_BillHouse_Evento_Policia_move1:
walk_up
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move2:
emote_exclamation_mark
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move3:
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move4:
emote_exclamation_mark
step_end

Route25_BillHouse_Evento_Policia_move5:
walk_right
walk_right
walk_right
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move6:
face_up
step_end

Route25_BillHouse_Evento_Policia_move7:
walk_in_place_down
step_end

Route25_BillHouse_Evento_Policia_move8:
walk_left
walk_up
walk_in_place_right
step_end

Route25_BillHouse_Evento_Policia_move9:
emote_exclamation_mark
face_down
step_end

Route25_BillHouse_Evento_Policia_move10:
walk_right
walk_up
walk_in_place_left
step_end

Route25_BillHouse_Evento_Policia_move11:
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Route25_BillHouse_Evento_Policia_move12:
walk_in_place_right
step_end

Route25_BillHouse_Evento_Policia_move13:
face_left
step_end

Route25_BillHouse_Evento_Policia_move14:
face_right
step_end

Route25_BillHouse_Evento_Policia_move15:
walk_in_place_up
step_end


Route25_BillHouse_Evento_Policia_move16:
walk_in_place_down
step_end

Route25_BillHouse_Warp_No::
release
end

Route25_BillHouse_Warp::
msgbox Route25_BillHouse_Warp_text_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route25_BillHouse_Warp_move1
waitmovement 0x0
msgbox Route25_BillHouse_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route25_BillHouse_Warp_No
warp MAP_BILL_GARDEN, 6, 47
release
end

Route25_BillHouse_Warp_text_1:
.string "...$"

Route25_BillHouse_Warp_Text_YesNo:
    .string "...\n"
	.string "...\l"
	.string "Este póster está cubriendo un\l"
	.string "pequeño túnel que lleva a algún\l"
	.string "otro lugar.\l"
	.string "¿Quieres arrastrarte por el túnel?$"

Route25_BillHouse_Warp_move1:
emote_exclamation_mark
step_end
