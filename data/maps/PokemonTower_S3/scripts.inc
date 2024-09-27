PokemonTower_S3_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonTower_S3_OnResume
	.byte 0

PokemonTower_S3_OnResume:
map_script_2 VAR_UNUSED_0x40FF, 24, PokemonTower_S3_Gray
	.2byte 0

PokemonTower_S3_Gray::
call Script_RemoveTint
setvar VAR_UNUSED_0x40FF, 25
end

PokemonTower_S3_Tumba_Move_1:
emote_exclamation_mark
step_end

PokemonTower_S3_Tumba_Move_2:
walk_slow_down
delay_16
step_end

PokemonTower_S3_Tumba_Move_2.1:
walk_slow_up
delay_16
step_end

PokemonTower_S3_Tumba::
lock
msgbox PokemonTower_S3_Tumba_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_12 MSGBOX_AUTOCLOSE
delay 50
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
delay 20
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_S3_Tumba_Move_1
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower_S3_Tumba_Move_4
waitmovement 0x0
special RemoveCameraObject
playse SE_M_PSYBEAM2
clearflag FLAG_HOENN_675
addobject 1
delay 50
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 50
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox PokemonTower_S3_Tumba_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
special SpawnCameraObject
applymovement 1, PokemonTower_S3_Tumba_Move_2
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower_S3_Tumba_Move_4.1
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox PokemonTower_S3_Tumba_Texto_14 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
trainerbattle_no_intro TRAINER_TRAINER_703, PokemonTower_S3_Tumba_Texto_15
delay 30
msgbox PokemonTower_S3_Tumba_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_S3_Tumba_Move_3
waitmovement 0x0
delay 25
msgbox PokemonTower_S3_Tumba_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_19 MSGBOX_AUTOCLOSE
delay 50
special SpawnCameraObject
applymovement 1, PokemonTower_S3_Tumba_Move_2.1
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower_S3_Tumba_Move_4
waitmovement 0x0
special RemoveCameraObject
delay 50
msgbox PokemonTower_S3_Tumba_Texto_20 MSGBOX_AUTOCLOSE
delay 15
addobject 1
delay 50
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
msgbox PokemonTower_S3_Tumba_Texto_21 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_S3_Tumba_Move_1
waitmovement 0x0
delay 15
msgbox PokemonTower_S3_Tumba_Texto_23 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 20
setvar VAR_UNUSED_0x40FF, 15
setflag FLAG_HOENN_675
delay 20
playse SE_M_DETECT
dofieldeffectsparkle 11, 6, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_10
setvar VAR_RESULT, 4
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
special HealPlayerParty
warpsilent MAP_LAVENDER_TOWN_PASADO, 8, 0
delay 150
release
release
end

PokemonTower_S3_Tumba_Move_4.1:
walk_slow_down
delay_16
walk_slow_down
delay_16
step_end

PokemonTower_S3_Tumba_Move_4:
walk_up
walk_up
step_end

PokemonTower_S3_Tumba_Move_3:
walk_in_place_up
step_end

PokemonTower_S3_Tumba_Texto_1:
	.string "Esta lápida es antiquísima.$"

PokemonTower_S3_Tumba_Texto_2:
	.string "Aún así, se aprecian grabados en\n"
	.string "ella, con letras de oro y plata.$"

PokemonTower_S3_Tumba_Texto_3:
	.string "… …$"

PokemonTower_S3_Tumba_Texto_4:
	.string "'el ENTRENADOR que aquí yace logró todo\n"
	.string "cuanto se puede lograr en el mundo…$"

PokemonTower_S3_Tumba_Texto_5:
	.string "…CAMPEÓN invicto de su región por\n"
	.string "décadas, 32 MEDALLAS de GIMNASIO,\l"
	.string "todos los POKÉMON conocidos en su\l"
	.string "haber…$"

PokemonTower_S3_Tumba_Texto_6:
	.string "…cualquiera que fuere el reto, por más\n"
	.string "que se elevaran las cotas, nada estaba\l"
	.string "fuera de su alcance…$"

PokemonTower_S3_Tumba_Texto_7:
	.string "…pero, a pesar de sus innumerables\n"
	.string "batallas, incontables viajes e infinitas\l"
	.string "hazañas…$"

PokemonTower_S3_Tumba_Texto_8:
	.string "…sin importar sus esfuerzos…, por muy\n"
	.string "buen maestro que fuera…$"

PokemonTower_S3_Tumba_Texto_9:
	.string "…fue incapaz de evitar a la muerte…$"

PokemonTower_S3_Tumba_Texto_10:
	.string "…todo cuanto queda de su leyenda yace\n"
	.string "aquí. El resto de sus coetáneos fueron\l"
	.string "borrados por el ineludible paso del\l"
	.string "tiempo…$"

PokemonTower_S3_Tumba_Texto_11:
	.string "…después de todo, puede que su\n"
	.string "recuerdo fuera la forma de inmortalidad\l"
	.string "que en el fondo anhelaba…$"

PokemonTower_S3_Tumba_Texto_12:
	.string "… …$"

PokemonTower_S3_Tumba_Texto_13:
	.string "????: ¿CAMPEÓN…?$"

PokemonTower_S3_Tumba_Texto_14:
	.string "… veámoslo…$"

PokemonTower_S3_Tumba_Texto_15:
	.string "… …$"

PokemonTower_S3_Tumba_Texto_16:
	.string "CAMPEÓN… ¿verdadero?$"

PokemonTower_S3_Tumba_Texto_17:
	.string "… …$"

PokemonTower_S3_Tumba_Texto_18:
	.string "¿Culto Lavanda?$"

PokemonTower_S3_Tumba_Texto_19:
	.string "No puedo llevarte.$"

PokemonTower_S3_Tumba_Texto_20:
	.string "… …$"

PokemonTower_S3_Tumba_Texto_21:
	.string "Pero te lo puedo mostrar.$"

PokemonTower_S3_Tumba_Texto_22:
	.string "… …$"

PokemonTower_S3_Tumba_Texto_23:
	.string "Retrocedamos 50 años en el tiempo.$"

PokemonTower_S3_Epitafio::
lock
msgbox PokemonTower_S3_Tumba_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_11 MSGBOX_AUTOCLOSE
delay 15
release
end
