Route5_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route5_House1_OnFrame
	.byte 0

Route5_House1_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 8, Route5_House1_Criador
	.2byte 0

Route5House1_1::
end

Route5_House1_Criador::
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move1.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 1, Route5_House1_Criador_1_move1
applymovement 2, Route5_House1_Criador_1_move1
waitmovement 0x0
msgbox Route5_House1_Criador_1, MSGBOX_AUTOCLOSE
applymovement 2, Route5_House1_Criador_1_move2
waitmovement 0x0
msgbox Route5_House1_Criador_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move3
applymovement 2, Route5_House1_Criador_1_move4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move5
waitmovement 0x0
playse SE_M_VICEGRIP
msgbox Route5_House1_Criador_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move6
waitmovement 0x0
msgbox Route5_House1_Criador_4, MSGBOX_AUTOCLOSE
msgbox Route5_House1_Criador_5, MSGBOX_AUTOCLOSE
msgbox Route5_House1_Criador_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move4
waitmovement 0x0
playse SE_DOOR
msgbox Route5_House1_Criador_7, MSGBOX_AUTOCLOSE
applymovement 1, Route5_House1_Criador_1_move7
waitmovement 0x0
msgbox Route5_House1_Criador_8, MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Route5_House1_Criador_1_move8
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_9, MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 9
release
end

Route5_House1_Criador_1:
    .string "CRIAPOKÉMON: Bien… ya estáis aquí,\n"
	.string "sabed que la información que voy a\l"
	.string "revelaros a partir de ahora es\l"
	.string "totalmente confidencial, la sola\l"
	.string "insinuación de dicha información\l"
	.string "fuera del ámbito ROCKET es\l"
	.string "castigada con la pena máxima aquí.\l"
	.string "Ya sois ROCKET por lo que\l"
	.string "presupongo que estáis dispuestos a\l"
	.string "aceptar estas condiciones.$"

Route5_House1_Criador_2:
    .string "ANDRA: ¡Claro!\n"
	.string "¡Hable!$"

Route5_House1_Criador_3:
    .string "(El CRIAPOKÉMON CERRÓ CON CANDADO\n"
	.string "LA PUERTA).$"

Route5_House1_Criador_4:
    .string "CRIAPOKÉMON: Bien, como\n"
	.string "sospecharéis, esta no es una\l"
	.string "guardería normal, se trata de una\l"
	.string "BASE ROCKET encubierta, uno de\l"
	.string "nuestros tantos negocios en la\l"
	.string "sombra.\l"
	.string "Básicamente sí, hacemos lo que\l"
	.string "prometemos, cuidar de los queridos\l"
	.string "POKÉMON de los entrenadores, no\l"
	.string "obstante, el contrato no habla de\l"
	.string "las condiciones ni de la comisión\l"
	.string "extra que cobramos por ello, esto\l"
	.string "es, el negocio aquí proviene de\l"
	.string "emparejar aquellos POKÉMON cedidos\l"
	.string "que son de la misma especie para\l"
	.string "crear HUEVOS POKÉMON, es decir,\l"
	.string "nuestros beneficios. Algunos de\l"
	.string "ellos como el caso de CLEFAIRY o\l"
	.string "ABRA son enviados al CASINO, otros\l"
	.string "directamente vendidos en el\l"
	.string "mercado negro. Vuestra querida\l"
	.string "CÓNSUL de INTA, sin ir más\l"
	.string "lejos, compró un MEOWTH proveniente\l"
	.string "de un HUEVO nacido aquí.$"

Route5_House1_Criador_5:
    .string "ANDRA: ¡Ingenioso!\n"
	.string "¡De modo que la BASE DE AZULONA no\l"
	.string "es la única que el TEAM ROCKET\l"
	.string "maneja por esta región!\l"
	.string "¡No tenía ni idea, es el\l"
	.string "negocio perfecto!$"

Route5_House1_Criador_6:
    .string "CRIAPOKÉMON: Ya te enterarás de\n"
	.string "varias cosas más si sigues aquí lo\l"
	.string "suficiente joven recluta, por el\l"
	.string "momento, PETREL os está esperando\l"
	.string "abajo en su despacho. Para bajar\l"
	.string "solo tenéis que acercaros a la\l"
	.string "zona superior izquierda de color\l"
	.string "verde. Si prestáis atención\l"
	.string "lograréis ver una trampilla que se\l"
	.string "difumina con el pavimento, esa es\l"
	.string "la entrada secreta.$"

Route5_House1_Criador_7:
    .string "(EL CRIAPOKÉMON VOLVIÓ A ABRIR LA\n"
	.string "PUERTA)$"

Route5_House1_Criador_8:
    .string "CRIAPOKÉMON: Y ahora, daos prisa,\n"
	.string "pueden llegar clientes en\l"
	.string "cualquier momento y no hay nada\l"
	.string "peor para la reputación de un\l"
	.string "negocio en estos tiempos que\l"
	.string "mezclarse con los ROCKET.\l"
	.string "¡Vamos!$"

Route5_House1_Criador_9:
    .string "ANDRA: ¡Sí que era cierto!$"


Route5_House1_Criador_1_move1:
emote_exclamation_mark
face_down
step_end

Route5_House1_Criador_1_move1.1:
face_up
step_end

Route5_House1_Criador_1_move2:
walk_in_place_right
step_end

Route5_House1_Criador_1_move3:
walk_down
walk_down
walk_down
step_end

Route5_House1_Criador_1_move4:
face_down
step_end

Route5_House1_Criador_1_move5:
walk_slow_right
walk_slow_up
walk_in_place_down
step_end

Route5_House1_Criador_1_move6:
face_up
step_end

Route5_House1_Criador_1_move7:
walk_up
walk_up
walk_up
walk_in_place_down
step_end

Route5_House1_Criador_1_move8:
walk_left
walk_left
walk_up
walk_up
walk_left
walk_in_place_down
step_end

Route5_House1_Warp::
msgbox Route5_House1_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route5_House1_Warp_No
warp MAP_ROCKET_HIDEOUT_6F, 1, 27
release
end

Route5_House1_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Warp_move1
release
end

Route5_House1_Warp_Text_YesNo:
    .string "Hay una trampilla que asoma\n"
	.string "sutilmente unas escaleras que\l"
	.string "conducen a una zona subterránea,\l"
	.string "¿quieres entrar en la BASE ROCKET?$"

Route5_House1_Warp_move1:
walk_slow_right
step_end
