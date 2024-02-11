TorreDunsparce_P3_MapScripts::
	.byte 0


TorreDunsparce_P3_Encuentro_Zinnia::
lock
playse SE_EXIT
addobject 1
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, TorreDunsparce_P3_Encuentro_Zinnia_Move_1.1
waitmovement 0x0
special RemoveCameraObject
delay 15
playse SE_PIN
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_1
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_2
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_3
applymovement OBJ_EVENT_ID_CAMERA, TorreDunsparce_P3_Encuentro_Zinnia_Move_1.2
waitmovement 0x0
special RemoveCameraObject
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_4
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_5
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_6
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_7
waitmovement 0x0
delay 10
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_8
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_9
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_10
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_11
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, TorreDunsparce_P3_Encuentro_Zinnia_Move_1.3
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_12
waitmovement 0x0
special RemoveCameraObject
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TorreDunsparce_P3_Encuentro_Zinnia_Move_14
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_13
waitmovement 0x0
msgbox TorreDunsparce_P3_Encuentro_Zinnia_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, TorreDunsparce_P3_Encuentro_Zinnia_Move_15
waitmovement 0x0
clearflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 1
setvar VAR_ROUTE118_STATE, 1
release
end

TorreDunsparce_P3_Encuentro_Zinnia_Move_15:
walk_up
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_14:
delay_8
delay_8
face_up
step_end


TorreDunsparce_P3_Encuentro_Zinnia_Move_13:
walk_up
walk_right
walk_up
walk_up
delay_8
delay_8
delay_8
delay_8
delay_8
delay_8
face_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_12:
face_left
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_11:
walk_left
walk_up
delay_8
delay_8
delay_8
face_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_10:
face_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_9:
walk_in_place_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_8:
face_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_7:
walk_in_place_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_6:
walk_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_5:
walk_slow_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_4:
walk_in_place_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_3:
walk_left
walk_up
walk_up
walk_right
walk_right
face_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_2:
walk_slow_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1.3:
walk_up
walk_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1.2:
walk_up
walk_up
walk_right
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1.1:
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Move_1:
emote_exclamation_mark
delay_8
delay_8
face_up
step_end

TorreDunsparce_P3_Encuentro_Zinnia_Texto_1:
.string "????: ¿Eh?\n"
	.string "¿Alguien más aquí, en serio?$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_2:
.string "Creí que este lugar solo era conocido\n"
	.string "por esos monjes tan extraños.\l"
	.string "Aunque poco importa, mis dragones me\l"
	.string "llevaron hasta aquí, atraídos por la\l"
	.string "energía del POKÉMON equivocado.$"


TorreDunsparce_P3_Encuentro_Zinnia_Texto_3:
.string "Según los de la pagoda del sur, fue\n"
	.string "en este lugar donde la voluntad como\l"
	.string "tal alcanzó su máxima expresión.\l"
	.string "Aquí un POKÉMON destinado a ser algo\l"
	.string "que no quería se sobrepuso a todo\l"
	.string "agente externo.\l"
	.string "Escaló hasta el extremo superior de\l"
	.string "sus infinitas posibilidades, y acabó\l"
	.string "convirtiéndose en algo que cualquier\l"
	.string "teórico del mundo POKÉMON tacharía de\l"
	.string "-imposible-.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_4:
.string "Es inspirador, aunque difícil de\n"
	.string "creer, ¿no?\l"
	.string "Pero este lugar, aunque ya muy\l"
	.string "desgastado por el paso del tiempo,\l"
	.string "irradia esa clase de energía, propia\l"
	.string "de grandes leyendas... propia de\l"
	.string "grandes acontecimientos que\l"
	.string "trascendieron la historia y forjaron\l"
	.string "el mundo tal y como hoy lo conocemos.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_5:
.string "Lo cierto es que...\n"
	.string "Este lugar me recuerda mucho a…$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_6:
.string "Qué más da.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_6.1:
	.string "Oye, tú, la chica que hay más arriba\n"
	.string "es amiga tuya, ¿verdad?\l"
	.string "Según ella, el POKÉMON que busco\l"
	.string "volvió a su región de origen.\l"
	.string "¿Crees que es cierto?$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_7:
.string "Ya veo, seguramente tengáis razón.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_8:
.string "Odio tener que decir esto, pero\n"
	.string "parecéis tener un nivel\l"
	.string "extraordinario, ambos.\l"
	.string "Me da en la nariz que tenéis algo\l"
	.string "especial, y no necesito combatir para\l"
	.string "confirmar mis sospechas. Es demasiado\l"
	.string "obvio.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_9:
.string "Irradiáis energía y poder a raudales.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_10:
.string "No me corresponde a mí ser partícipe\n"
	.string "de vuestra historia, pertenecemos a\l"
	.string "mundos diferentes.$"

TorreDunsparce_P3_Encuentro_Zinnia_Texto_11:
.string "Me agrada mucho haberme topado con\n"
	.string "vosotros. En un lugar como este...\l"
	.string "sois como ooparts para mí, pero qué\l"
	.string "más da, no nos volveremos a ver.$"


TorreDunsparce_P3_Encuentro_Zinnia_Texto_12:
.string "Mmm... pensándolo mejor, vuestro\n"
	.string "vínculo con esos POKÉMON, la leyenda\l"
	.string "de este lugar...\l"
	.string "Puede que sea yo el oopart, ¿no\l"
	.string "crees?$"
