ResortGeorgeous_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, ResortGeorgeous_House1_OnFrame
	.byte 0

ResortGeorgeous_House1_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 4, ResortGeorgeous_House1_Consul
	.2byte 0



ResortGeorgeousDocumento_100::
msgbox ResortGeorgeousDocumento_Text_100, MSGBOX_SIGN   
end

ResortGeorgeousDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre BLAINE, LÍDER\n"
	.string "del GIMNASIO de CANELA.\p"
	.string "Según fuentes cercanas, BLAINE\n"
	.string "sólo se quita las gafas de sol\l"
	.string "cuando contesta a preguntas.$"


ResortGeorgeous_House1_Consul::
lockall
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_1.1
waitmovement 0x0
applymovement 1, ResortGeorgeous_House1_Consul_move_1
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_1, MSGBOX_AUTOCLOSE
applymovement 2, ResortGeorgeous_House1_Consul_move_2
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_2, MSGBOX_AUTOCLOSE
applymovement 1, ResortGeorgeous_House1_Consul_move_1
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_3, MSGBOX_AUTOCLOSE
applymovement 1, ResortGeorgeous_House1_Consul_move_3
applymovement 2, ResortGeorgeous_House1_Consul_move_4
waitmovement 0x0
playse SE_PIN
applymovement 1, ResortGeorgeous_House1_Consul_move_5
applymovement 2, ResortGeorgeous_House1_Consul_move_5
msgbox ResortGeorgeous_House1_Text_Consul_4, MSGBOX_AUTOCLOSE
msgbox ResortGeorgeous_House1_Text_Consul_5, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_CONSUL, ResortGeorgeous_House1_Text_Consul_6
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_7
msgbox ResortGeorgeous_House1_Text_Consul_7, MSGBOX_AUTOCLOSE
delay 40
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare 
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playse SE_EXIT
addobject 3
delay 20
playse SE_PIN
applymovement 3, ResortGeorgeous_House1_Consul_move_8
applymovement 1, ResortGeorgeous_House1_Consul_move_5
applymovement 2, ResortGeorgeous_House1_Consul_move_5
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_4
addobject 4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_7
applymovement 4, ResortGeorgeous_House1_Consul_move_9
msgbox ResortGeorgeous_House1_Text_Consul_8, MSGBOX_AUTOCLOSE
msgbox ResortGeorgeous_House1_Text_Consul_9, MSGBOX_AUTOCLOSE
applymovement 3, ResortGeorgeous_House1_Consul_move_10
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_10, MSGBOX_AUTOCLOSE
applymovement 3, ResortGeorgeous_House1_Consul_move_10
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_11, MSGBOX_AUTOCLOSE
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
fadescreen 1
removeobject 1
removeobject 3
removeobject 4
delay 20
fadescreen 0
fadeoutbgm 0
playse MUS_RG_SEVII_45
applymovement 2, ResortGeorgeous_House1_Consul_move_11
applymovement OBJ_EVENT_ID_PLAYER, ResortGeorgeous_House1_Consul_move_12
waitmovement 0x0
msgbox ResortGeorgeous_House1_Text_Consul_12, MSGBOX_AUTOCLOSE
applymovement 2, ResortGeorgeous_House1_Consul_move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 2
setvar VAR_UNUSED_0x40F7, 5
release
end



ResortGeorgeous_House1_Text_Consul_1:
.string "CÓNSUL: ¿En serio creías que con\n"
	.string "un equipo tan pobre ibas a poder\l"
	.string "coaccionarme para que acepte\l"
	.string "vuestras condiciones?\l"
	.string "Ya le dije a ATLAS que no puede\l"
	.string "competir con las prestaciones que\l"
	.string "el GOBIERNO DE KANTO me ofrece.$"

ResortGeorgeous_House1_Text_Consul_2:
.string "ANDRA: Pensaba que teníamos un\n"
	.string "trato, ¿dónde queda tu lealtad\l"
	.string "hacia el TEAM ROCKET?\l"
	.string "Sin nosotros nunca hubieras sido\l"
	.string "elegida CÓNSUL del lugar, y ahora\l"
	.string "quieres lastrar el negocio que te\l"
	.string "dio esta potestad.$"

ResortGeorgeous_House1_Text_Consul_3:
.string "CÓNSUL: Exacto, tú lo has dicho,\n"
	.string "me dio, a día de hoy ya no os\l"
	.string "necesito y solo sóis un lastre\l"
	.string "para mis nuevas aspiraciones, si\l"
	.string "ATLAS de verdad quiere detenerme\l"
	.string "que venga en persona, ningún\l"
	.string "mísero ROCKET aparte de él podrá\l"
	.string "detener a mis POKÉMON importados\l"
	.string "desde los centros de crianza más\l"
	.string "selectos.\l"
	.string "Ahora si me disculpas, tengo que\l"
	.string "hablar con el representante de\l"
	.string "KANTO, ¡hohohoho!$"

ResortGeorgeous_House1_Text_Consul_4:
.string "ANDRA: ¡{PLAYER}!$"

ResortGeorgeous_House1_Text_Consul_5:
.string "CÓNSUL: De modo que aún quedaba\n"
	.string "basura por recoger, acabemos con\l"
	.string "esto cuanto antes.\l"
	.string "¡Espero que tu ZUBAT pueda darle\l"
	.string "algo más de diversión a mi MAREEP\l"
	.string "de lo que le dio el ZUBAT de tu\l"
	.string "compañera!$"

ResortGeorgeous_House1_Text_Consul_6:
.string "¿Cómo?\n"
	.string "¿Mis POKÉMON de clase alta\l"
	.string "perdieron ante un simple ROCKET?$"

ResortGeorgeous_House1_Text_Consul_7:
.string "Esto no puede estar pasando.\n"
	.string "¡Tú no puedes interferir en mi\l"
	.string "carrera!$"

ResortGeorgeous_House1_Text_Consul_8:
.string "Se acabó el juego CÓNSUL, has\n"
	.string "mordido a la mano que te dio de\l"
	.string "comer, te creiste la más lista de\l"
	.string "la clase traicionándonos cuando te\l"
	.string "convenía y ahora lo pagarás, un\l"
	.string "período de reflexión en la CUEVA\l"
	.string "CAMBIANTE no te vendrá mal.$"

ResortGeorgeous_House1_Text_Consul_9:
.string "CÓNSUL: ....$"

ResortGeorgeous_House1_Text_Consul_10:
.string "En cuanto a vosotros, podéis estar\n"
	.string "orgullosos, se os ha dado una\l"
	.string "oportunidad y habéis cumplido\l"
	.string "satisfactoriamente, ATLAS estará\l"
	.string "en el ALMACÉN esperando a daros la\l"
	.string "enhorabuena.$"

ResortGeorgeous_House1_Text_Consul_11:
.string "¡¡¡ANDANDO -CÓNSUL-!!!$"

ResortGeorgeous_House1_Text_Consul_12:
.string "ANDRA: ...\n"
	.string "...\l"
	.string "Nos vemos en el cuartel.$"


ResortGeorgeous_House1_Consul_move_1:
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_1.1:
walk_in_place_up
step_end

ResortGeorgeous_House1_Consul_move_2:
walk_in_place_right
step_end

ResortGeorgeous_House1_Consul_move_3:
walk_down
step_end

ResortGeorgeous_House1_Consul_move_4:
face_down
step_end

ResortGeorgeous_House1_Consul_move_5:
emote_exclamation_mark
step_end

ResortGeorgeous_House1_Consul_move_6:
walk_up
step_end

ResortGeorgeous_House1_Consul_move_7:
face_up
step_end

ResortGeorgeous_House1_Consul_move_8:
walk_left
walk_up
walk_up
face_right
step_end

ResortGeorgeous_House1_Consul_move_9:
walk_right
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_10:
walk_in_place_up
walk_in_place_right
step_end

ResortGeorgeous_House1_Consul_move_11:
walk_slow_down
walk_slow_down
face_right
step_end

ResortGeorgeous_House1_Consul_move_12:
walk_in_place_left
step_end

ResortGeorgeous_House1_Consul_move_13:
walk_slow_down
walk_right
step_end


