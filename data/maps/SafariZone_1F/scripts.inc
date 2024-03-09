SafariZone_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, SafariZone_1F_OnFrame
	.byte 0

SafariZone_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 40, SafariZone_1F_Escena_3_Andra
	.2byte 0

SafariZone1F_1::
end



SafariZone1FDocumento_100::
msgbox SafariZone1FDocumento_Text_100, MSGBOX_SIGN   
end

SafariZone1FDocumento_Text_100:
.string "PISTAS ENTRENADOR\p"
	.string "¡Pulsa START para saber cuánto\n"
	.string "tiempo te queda!$"



SafariZone1FDocumento_101::
msgbox SafariZone1FDocumento_Text_101, MSGBOX_SIGN   
end

SafariZone1FDocumento_Text_101:
.string "CASA DE REPOSO$"



SafariZone1FDocumento_102::
msgbox SafariZone1FDocumento_Text_102, MSGBOX_SIGN   
end

SafariZone1FDocumento_Text_102:
.string "ZONA CENTRAL$"

SafariZone_1F_Escena_3_Andra::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SafariZone_1F_Escena_3_Andra_Move_9
waitmovement 0x0
special RemoveCameraObject
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SafariZone_1F_Escena_3_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_2
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_3
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_TEDDIURSA, CRY_MODE_ENCOUNTER
playse MUS_EVOLUTION_INTRO
waitfanfare
delay 15
playse SE_PIN
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 4, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 5, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 6, SafariZone_1F_Escena_3_Andra_Move_4
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
delay 120
playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
delay 120
playse SE_PIN
playse MUS_EVOLVED
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 4, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 5, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 6, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 7, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
delay 200
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_5
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_6
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
delay 20
msgbox SafariZone_1F_Escena_3_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_4
waitmovement 0x0
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_6
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_14 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox SafariZone_1F_Escena_3_Andra_Texto_16 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_17 MSGBOX_AUTOCLOSE
msgbox SafariZone_1F_Escena_3_Andra_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_8
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, SafariZone_1F_Escena_3_Andra_Move_1
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_20 MSGBOX_AUTOCLOSE
applymovement 3, SafariZone_1F_Escena_3_Andra_Move_7
waitmovement 0x0
msgbox SafariZone_1F_Escena_3_Andra_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox SafariZone_1F_Escena_3_Andra_Texto_22 MSGBOX_AUTOCLOSE
delay 50
msgbox SafariZone_1F_Escena_3_Andra_Texto_23 MSGBOX_AUTOCLOSE
delay 30
setvar VAR_UNUSED_0x40F7, 41
warpsilent MAP_ROCK_TUNNEL_1F, 18, 36
release
end

SafariZone_1F_Escena_3_Andra_Texto_1:
.string "RECLUTA: El recuento total es de 48\n"
	.string "SCYTHER, 45 TAUROS, 38 KANGASKHAN, 35\l"
	.string "CHANSEY y 26 DRATINI, ALTO RANGO\l"
	.string "ANDRA.$"

SafariZone_1F_Escena_3_Andra_Texto_2:
.string "ANDRA: Buen trabajo recluta, vuelve a\n"
	.string "tu puesto.$"

SafariZone_1F_Escena_3_Andra_Texto_3:
.string "Y buen trabajo, TEDDIURSA. Has\n"
	.string "demostrado gran valor enfrentándote a\l"
	.string "POKÉMON evolucionados sin tú…$"

SafariZone_1F_Escena_3_Andra_Texto_4:
.string "CIENTÍFICO: Vaya{PAUSE 25}…{PAUSE 25} no todos los días ve\n"
	.string "uno un URSARING por KANTO. Su ATAQUE\l"
	.string "es devastador, en esta KANTO se pondrá\l"
	.string "las botas con su CUCHILLADA, créeme.$"

SafariZone_1F_Escena_3_Andra_Texto_5:
.string "ANDRA: ¿Más que esos TAUROS y SCYTHER\n"
	.string "que tan duro pegaban?$"

SafariZone_1F_Escena_3_Andra_Texto_6:
.string "CIENTÍFICO: Efectivamente. Incluso\n"
	.string "para un ADMIN.ROCKET es un gran\l"
	.string "POKÉMON.$"

SafariZone_1F_Escena_3_Andra_Texto_7:
.string "ANDRA: Dígame una cosa, ¿por qué esa\n"
	.string "serpiente azul vale tan cara en el\l"
	.string "CASINO? La verdad es que es bastante\l"
	.string "enclenque.$"

SafariZone_1F_Escena_3_Andra_Texto_8:
.string "CIENTÍFICO: Se nota que no eres de\n"
	.string "aquí. Esa serpiente azul es la\l"
	.string "preevolución de nuestro\l"
	.string "PSEUDOLEGENDARIO, uno de los dragones\l"
	.string "más sagrados que existen.$"

SafariZone_1F_Escena_3_Andra_Texto_9:
.string "ANDRA: ¿En serio? ¡No se parece en nada\n"
	.string "a DRAGONITE!$"

SafariZone_1F_Escena_3_Andra_Texto_10:
.string "CIENTÍFICO: Por eso es tan cara, se\n"
	.string "vende la opción de tenerlo después de\l"
	.string "un arduo trabajo. Más que la opción, se\l"
	.string "vende la esperanza de contar con uno:\l"
	.string "en la práctica solo un ENTRENADOR ha\l"
	.string "podido lograrlo en esta región.$"

SafariZone_1F_Escena_3_Andra_Texto_11:
.string "ANDRA: ¿Por qué?$"

SafariZone_1F_Escena_3_Andra_Texto_12:
.string "CIENTÍFICO: Salta a la vista que la\n"
	.string "región carece de recursos para llevar\l"
	.string "un entrenamiento óptimo, al menos para\l"
	.string "la gran mayoría. En estas condiciones\l"
	.string "es imposible desarrollar el potencial\l"
	.string "de un dragón como DRATINI.$"

SafariZone_1F_Escena_3_Andra_Texto_13:
.string "ANDRA: Oh, vaya{PAUSE 25}…{PAUSE 25} ¿Tan fuerte es una vez\n"
	.string "desarrollado?$"

SafariZone_1F_Escena_3_Andra_Texto_14:
.string "CIENTÍFICO: Más que varios\n"
	.string "LEGENDARIOS, de hecho, supera en BASE\l"
	.string "de ATAQUE a URSARING. Es más, lo supera\l"
	.string "en todo, VELOCIDAD, SALUD, DEFENSA{PAUSE 25}…{PAUSE 25} es\l"
	.string "un 6 a 0 en stats.$"

SafariZone_1F_Escena_3_Andra_Texto_15:
.string "ANDRA: …$"

SafariZone_1F_Escena_3_Andra_Texto_16:
.string "CIENTÍFICO: No te ofendas, URSARING\n"
	.string "es un POKÉMON excelente, pero\l"
	.string "DRAGONITE es extraordinario, parte de\l"
	.string "él ha sido tocado por los dioses.$"

SafariZone_1F_Escena_3_Andra_Texto_17:
.string "ANDRA: Por eso todos le temen a LANCE…\n"
	.string "ya entiendo.$"

SafariZone_1F_Escena_3_Andra_Texto_18:
.string "CIENTÍFICO: No solo por eso, también\n"
	.string "por…$"

SafariZone_1F_Escena_3_Andra_Texto_19:
.string "ANDRA: Me niego a creer que mi URSARING\n"
	.string "ya será por decreto peor que un\l"
	.string "DRAGONITE en todo, en mi cabeza este\l"
	.string "URSARING es capaz de superar esa base\l"
	.string "en ATAQUE...y tal vez más...$"

SafariZone_1F_Escena_3_Andra_Texto_20:
.string "CIENTÍFICO: Los STATS BASE son\n"
	.string "inamovibles, no se trata de\l"
	.string "merecimientos o de entrenamiento, por\l"
	.string "esas vías tu URSARING podrá derrotar\l"
	.string "a un DRAGONITE{PAUSE 25}…{PAUSE 25} que no explote tanto\l"
	.string "su potencial, pero a igualdad de todo,\l"
	.string "no hay nada que hacer. Los stats\l"
	.string "marcan el potencial intrínseco de cada\l"
	.string "especie, es así. ¿Por qué crees que los\l"
	.string "MAGIKARP son tan débiles? En mayor o\l"
	.string "menor grado, todos tienen límites.$"

SafariZone_1F_Escena_3_Andra_Texto_21:
.string "ANDRA: Aún así{PAUSE 25}…{PAUSE 25} siento en este\n"
	.string "URSARING un poco de ese potencial al\l"
	.string "que te refieres, aún por explotar.$"

SafariZone_1F_Escena_3_Andra_Texto_22:
.string "CIENTÍFICO: Si experimentamos con él,\n"
	.string "eso es otra cosa, NIDOKING y\l"
	.string "NIDOQUEEN aspiran a elevar en 100 su\l"
	.string "total de STATS BASE gracias a ello.\l"
	.string "Fuera de eso, es imposible.$"

SafariZone_1F_Escena_3_Andra_Texto_23:
.string "ANDRA: Quién sabe…$"

SafariZone_1F_Escena_3_Andra_Move_1:
walk_in_place_right
step_end

SafariZone_1F_Escena_3_Andra_Move_2:
walk_up
walk_up
walk_in_place_down
step_end

SafariZone_1F_Escena_3_Andra_Move_3:
walk_in_place_down
step_end

SafariZone_1F_Escena_3_Andra_Move_4:
emote_exclamation_mark
step_end

SafariZone_1F_Escena_3_Andra_Move_5:
walk_right
walk_right
walk_right
step_end

SafariZone_1F_Escena_3_Andra_Move_6:
face_left
step_end

SafariZone_1F_Escena_3_Andra_Move_7:
face_down
step_end

SafariZone_1F_Escena_3_Andra_Move_8:
walk_right
step_end

SafariZone_1F_Escena_3_Andra_Move_9:
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
walk_right
walk_right
walk_right
step_end
