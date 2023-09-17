RuinsOfAlph_S4_MapScripts::
	.byte 0


RuinsOfAlph_S4_Combate_Zeus::
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
addobject 5
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
waitmoncry
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_2
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_6
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_4 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
waitmoncry
special SpawnCameraObject
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_8
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_9
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_5 MSGBOX_AUTOCLOSE
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
special SpawnCameraObject
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_6 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
playse SE_BALL
addobject 2
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 2
delay 15
clearflag FLAG_HIDE_GRANITE_CAVE_STEVEN
addobject 9
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
delay 15
setflag FLAG_HIDE_ROUTE_111_DESERT_FOSSIL
setflag FLAG_HIDE_GRANITE_CAVE_STEVEN
removeobject 7
removeobject 8
removeobject 9
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 20
playmoncry SPECIES_ZEKROM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 20
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 20
playse SE_M_STAT_INCREASE
delay 40
playse SE_M_CHARGE
delay 40
playse SE_M_HYPER_BEAM
delay 40
playse SE_M_HYPER_BEAM2
delay 40
playse SE_M_EXPLOSION
delay 40
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
addobject 3
fadescreen 2
delay 15
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
playse MUS_B_PYRAMID_TOP
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_10 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_11
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S4_Combate_Zeus_Move_12
waitmovement 0x0
special RemoveCameraObject
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_12 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_4, RuinsOfAlph_S4_Combate_Zeus_Texto_13
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
playbgm MUS_RG_VICTORY_GYM_LEADER, FALSE
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
delay 20
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
removeobject 3
playse SE_M_EMBER
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_13
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_15 MSGBOX_AUTOCLOSE
fadedefaultbgm
delay 100
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_14
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_14
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_16 MSGBOX_AUTOCLOSE
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_10
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_10
waitmovement 0x0
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
playse SE_BALL
addobject 2
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 2
delay 15
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
addobject 4
playmoncry SPECIES_YVELTAL, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
clearflag FLAG_HIDE_ROUTE_119_RIVAL
fadescreen 3
delay 20
playse SE_M_GUST
delay 40
playse SE_M_RAZOR_WIND
delay 40
removeobject 53
playse SE_M_CHARGE
delay 40
playse SE_M_SOLAR_BEAM
delay 40
playse SE_BREAKABLE_DOOR
delay 40
removeobject 5
addobject 11
fadescreen 2
delay 15
playse SE_BALL_OPEN
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 4
addobject 2
waitse
delay 15
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_BLEND_MASTER_REPLACEMENT
removeobject 2
delay 15
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 6
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_15
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S4_Combate_Zeus_Move_16
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_17
waitmovement 0x0
delay 15
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_21 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_22 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_18
waitmovement 0x0
delay 15
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_19
waitmovement 0x0
msgbox RuinsOfAlph_S4_Combate_Zeus_Texto_23 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S4_Combate_Zeus_Move_21
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 6
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 7
release
end

RuinsOfAlph_S4_Combate_Zeus_Texto_1:
.string "ZEUS: Impresionante {PLAYER}, pero\n"
	.string "demasiado tarde.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_2:
.string "¿Sientes la energía de este lugar?\n"
	.string "Desconozco el motivo, pero aquí la\l"
	.string "esencia PRIMIGENIA de los POKÉMON\l"
	.string "LEGENDARIOS les es devuelta.\l"
	.string "KYOGRE, GROUDON...es lo que andaba\l"
	.string "buscando, pero aún más\l"
	.string "importante...$"

RuinsOfAlph_S4_Combate_Zeus_Texto_3:
.string "KYUREM, la cáscara vacía del\n"
	.string "DRAGÓN ORIGINAL. Este es el lugar,\l"
	.string "el cómo están dispuestas estas\l"
	.string "ruinas delata su función.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_4:
.string "¡ZEKROM, el POKÉMON YIN, a la\n"
	.string "derecha!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_5:
.string "¡RESHIRAM, el POKÉMON YANG, a la\n"
	.string "izquierda!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_6:
.string "Y por último, ¡KYUREM, el POKÉMON\n"
	.string "CERO, en el centro!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_7:
.string "Los 3 juntos formarán al DRAGÓN\n"
	.string "ORIGINAL, la perfección, el\l"
	.string "equilibrio univers...$"

RuinsOfAlph_S4_Combate_Zeus_Texto_8:
.string "¡Al fin!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_9:
.string "El POKÉMON más poderoso de todos\n"
	.string "los tiempos, ahora es mío.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_10:
.string "Ya no hay vuelta atrás, gracias a\n"
	.string "su incuestionable poder podré\l"
	.string "ejercer mi voluntad sin oposición.\l"
	.string "Será lo único que existirá, la\l"
	.string "voluntad de los dioses, como\l"
	.string "siempre debió ser.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_11:
.string "Tú serás el primero, {PLAYER}, has\n"
	.string "tratado de detenerme una y otra\l"
	.string "vez, aquí estamos de nuevo, nada\l"
	.string "de lo que has hecho ha servido\l"
	.string "para que finalmente no ocurra\l"
	.string "lo inevitable.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_12:
.string "Ahora, enfrenta al 100% absoluto,\n"
	.string "no hay posibilidad de escape. ¡El\l"
	.string "mundo POKÉMON me pertenece!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_13:
.string "¡No!\n"
	.string "¡Debe haber algún error, es\l"
	.string "imposible!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_14:
.string "¡KYUREM!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_15:
.string "¿¡No es posible!?\n"
	.string "Los PRIMIGENIOS, el mismísimo dios\l"
	.string "POKÉMON, el DRAGÓN ORIGINAL...\l"
	.string "¿Cómo tú...?$"

RuinsOfAlph_S4_Combate_Zeus_Texto_16:
.string "????: Estúpido iluso, ¿de verdad\n"
	.string "crees que eso era el DRAGÓN\l"
	.string "ORIGINAL?\l"
	.string "Pretender volver a formar algo\l"
	.string "perfecto juntando imperfecciones\l"
	.string "como si fueran piezas de un\l"
	.string "puzzle, patético.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_17:
.string "ZEUS: No entiendo, ¿¡quién eres\n"
	.string "tú!?$"

RuinsOfAlph_S4_Combate_Zeus_Texto_18:
.string "¡TAAAAAAAALL!$"

RuinsOfAlph_S4_Combate_Zeus_Texto_19:
.string "JONES: Alguien que se cree\n"
	.string "superior al resto por la divina\l"
	.string "providencia no merece seguir\l"
	.string "viviendo.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_20:
.string "...$"

RuinsOfAlph_S4_Combate_Zeus_Texto_21:
.string "Ese estúpido ha muerto sin saber\n"
	.string "que todo lo que ha logrado, sus\l"
	.string "FORMAS PRIMIGENIAS, el DRAGÓN\l"
	.string "ORIGINAL incompleto...\l"
	.string "Se lo debe todo al POKÉMON\l"
	.string "ESENCIA, su presencia aquí es lo\l"
	.string "que devuelve a los LEGENDARIOS su\l"
	.string "máximo potencial, pero aún podemos\l"
	.string "acercarnos más a ÉL.$"

RuinsOfAlph_S4_Combate_Zeus_Texto_22:
.string "(JONES recogió todos los POKÉMON\n"
	.string "de ZEUS)$"

RuinsOfAlph_S4_Combate_Zeus_Texto_23:
.string "Podría acabar contigo también\n"
	.string "{PLAYER}, pero a diferencia de ese\l"
	.string "ZEUS yo tengo principios, y por\l"
	.string "respeto a todo lo que has logrado\l"
	.string "llegando hasta aquí con POKÉMON\l"
	.string "mortales, te daré la oportunidad\l"
	.string "de acceder también a la última\l"
	.string "sala. Una más {PLAYER}, y podrás\l"
	.string "conocer la verdad.$"

RuinsOfAlph_S4_Combate_Zeus_Move_1:
walk_in_place_up
emote_exclamation_mark
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_3:
face_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_4:
walk_in_place_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_5:
walk_up
walk_up
walk_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_6:
face_left
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_7:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_8:
face_right
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_9:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end


RuinsOfAlph_S4_Combate_Zeus_Move_10:
emote_exclamation_mark
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_11:
walk_slow_down
walk_in_place_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_12:
walk_down
walk_down
walk_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_13:
walk_fast_up
walk_fast_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_14:
face_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_15:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_16:
walk_in_place_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_17:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_18:
walk_up
walk_in_place_right
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_19:
walk_right
walk_in_place_down
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_20:
walk_in_place_up
step_end

RuinsOfAlph_S4_Combate_Zeus_Move_21:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end
