LavenderTown_Pasado_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, LavenderTown_Pasado_OnResume
	.byte 0

LavenderTown_Pasado_OnResume:
map_script_2 VAR_UNUSED_0x40FF, 15, LavenderTown_Pasado_Gray
	.2byte 0

LavenderTown_Pasado_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40FF, 16
end

LavenderTown_PasadoDocumento_100::
msgbox LavenderTown_PasadoDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTown_Pasado_Pantalla_Gris::
lock
call Script_SetGrayscaleTint
release
end

LavenderTown_PasadoDocumento_Text_100:
	.string "GIMNASIO DE PUEBLO LAVANDA$"

LavenderTown_PasadoDocumento_101::
msgbox LavenderTown_PasadoDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTown_PasadoDocumento_Text_101:
	.string "CENTRO PKMN$"


LavenderTown_Pasado_Agatha::
lock
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 5
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Agatha_Move_1
waitmovement 0x0
playmoncry SPECIES_DROWZEE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Agatha_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_1 MSGBOX_AUTOCLOSE
playse SE_M_PSYBEAM
waitse
delay 15
playse SE_SUPER_EFFECTIVE
waitse
delay 15
playmoncry SPECIES_GASTLY, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_3
waitmovement 0x0
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_3.1
waitmovement 0x0
special RemoveCameraObject
applymovement 6, LavenderTown_Pasado_Agatha_Move_4
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_6
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_5
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, LavenderTown_Pasado_Agatha_Move_7
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_8
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, LavenderTown_Pasado_Agatha_Move_4
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_8 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, LavenderTown_Pasado_Agatha_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_9 MSGBOX_AUTOCLOSE
delay 25
playse SE_PIN
applymovement 5, LavenderTown_Pasado_Agatha_Move_2.1
applymovement 6, LavenderTown_Pasado_Agatha_Move_2.1
msgbox LavenderTown_Pasado_Agatha_Texto_10 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 1, LavenderTown_Pasado_Agatha_Move_10
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_11
waitmovement 0x0
special RemoveCameraObject
playse SE_LEDGE
applymovement 5, LavenderTown_Pasado_Agatha_Move_12
waitmovement 0x0
playse SE_LEDGE
applymovement 5, LavenderTown_Pasado_Agatha_Move_12
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Agatha_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, LavenderTown_Pasado_Agatha_Move_15
applymovement 6, LavenderTown_Pasado_Agatha_Move_14
waitmovement 0x0
delay 10
applymovement 1, LavenderTown_Pasado_Agatha_Move_16
waitmovement 0x0
msgbox LavenderTown_Pasado_Agatha_Texto_13 MSGBOX_AUTOCLOSE
delay 35
msgbox LavenderTown_Pasado_Agatha_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Agatha_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Agatha_Move_17
waitmovement 0x0
delay 10
applymovement 5, LavenderTown_Pasado_Agatha_Move_18
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 5
removeobject 6
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Agatha_Move_11.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40FF, 17
release
end

LavenderTown_Pasado_Agatha_Move_18:
walk_slow_up
delay_16
delay_16
face_down
delay_16
delay_16
face_up
delay_16
delay_16
face_down
delay_16
walk_slow_down
delay_16
delay_16
walk_slow_down
walk_slow_right
walk_slow_down
walk_down
walk_down
walk_fast_down
walk_fast_down
step_end


LavenderTown_Pasado_Agatha_Move_17:
walk_down
walk_down
walk_down
walk_down
step_end

LavenderTown_Pasado_Agatha_Move_16:
walk_in_place_up
step_end

LavenderTown_Pasado_Agatha_Move_15:
walk_slow_right
delay_16
walk_slow_right
delay_16
face_up
step_end

LavenderTown_Pasado_Agatha_Move_14:
walk_right
walk_right
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


LavenderTown_Pasado_Agatha_Move_13:
walk_in_place_up
step_end

LavenderTown_Pasado_Agatha_Move_12:
jump_in_place_down
step_end

LavenderTown_Pasado_Agatha_Move_11.1:
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
step_end

LavenderTown_Pasado_Agatha_Move_11:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

LavenderTown_Pasado_Agatha_Move_10:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

LavenderTown_Pasado_Agatha_Move_9:
face_left
step_end

LavenderTown_Pasado_Agatha_Move_8:
face_up
step_end

LavenderTown_Pasado_Agatha_Move_7:
walk_right
step_end

LavenderTown_Pasado_Agatha_Move_6:
walk_left
step_end

LavenderTown_Pasado_Agatha_Move_5:
walk_in_place_left
step_end

LavenderTown_Pasado_Agatha_Move_4:
walk_in_place_right
step_end

LavenderTown_Pasado_Agatha_Move_3:
walk_slow_down
walk_slow_down
step_end

LavenderTown_Pasado_Agatha_Move_3.1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
step_end

LavenderTown_Pasado_Agatha_Move_2.1:
face_down
emote_exclamation_mark
step_end

LavenderTown_Pasado_Agatha_Move_2:
emote_exclamation_mark
step_end

LavenderTown_Pasado_Agatha_Move_1:
walk_in_place_down
step_end

LavenderTown_Pasado_Agatha_Texto_1:
	.string "¡DROWZEE! ¡CONFUSIÓN!$"

LavenderTown_Pasado_Agatha_Texto_2:
	.string "¡Te he vuelto a ganar!$"

LavenderTown_Pasado_Agatha_Texto_3:
	.string "¡Joh! ¡No vale!$"

LavenderTown_Pasado_Agatha_Texto_4:
	.string "¡Cuando mi GASTLY aprenda\n"
	.string "BOLA SOMBRA, podré ganarte!$"

LavenderTown_Pasado_Agatha_Texto_5:
	.string "¡Qué ganas de que evolucione a HAUNTER!$"

LavenderTown_Pasado_Agatha_Texto_6:
	.string "¡Pero yo ya tendré un HYPNO que resista\n"
	.string "tus ataques!$"

LavenderTown_Pasado_Agatha_Texto_7:
	.string "Sí, pero… GENGAR es el mejor fantasma\n"
	.string "de toda KANTO y JOHTO. Entrenaré lo que\l"
	.string "haga falta para que este pequeño se\l"
	.string "convierta en uno.$"

LavenderTown_Pasado_Agatha_Texto_8:
	.string "Hmmm… ¿HYPNO no puede evolucionar más?$"

LavenderTown_Pasado_Agatha_Texto_9:
	.string "¡Claro que no!$"

LavenderTown_Pasado_Agatha_Texto_10:
	.string "????: ¡Niños! ¡Ya está aquí!$"

LavenderTown_Pasado_Agatha_Texto_11:
	.string "¡Sí! ¡Mi maestra! ¡Lo ha logrado!$"

LavenderTown_Pasado_Agatha_Texto_12:
	.string "Están todos en el GIMNASIO\n"
	.string "esperando, venid ya.$"

LavenderTown_Pasado_Agatha_Texto_13:
	.string "¡AGATHA! ¿Qué haces?$"

LavenderTown_Pasado_Agatha_Texto_14:
	.string "Solo miraba TORRE POKÉMON.$"

LavenderTown_Pasado_Agatha_Texto_15:
	.string "¡Oh, jovencita! ¡Tendrás toda\n"
	.string "la vida para admirarla!$"

LavenderTown_Pasado_Lider::
lock
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_3
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_4
waitmovement 0x0
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_5
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Lider_Move_6
msgbox LavenderTown_Pasado_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_7
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_7
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Lider_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, LavenderTown_Pasado_Lider_Move_10
waitmovement 0x0
msgbox LavenderTown_Pasado_Lider_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Lider_Move_11
waitmovement 0x0
playse SE_DOOR
opendoor 9, 16
waitdooranim
applymovement 9, LavenderTown_Pasado_Lider_Move_12
waitmovement 0x0
removeobject 9
playse SE_EXIT
delay 20
applymovement 7, LavenderTown_Pasado_Lider_Move_1
waitmovement 0x0
delay 20
msgbox LavenderTown_Pasado_Lider_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, LavenderTown_Pasado_Lider_Move_13
waitmovement 0x0
removeobject 7
playse SE_EXIT
delay 30
applymovement 8, LavenderTown_Pasado_Lider_Move_14
waitmovement 0x0
removeobject 8
closedoor 9, 16
waitdooranim
setflag FLAG_HOENN_70
setvar VAR_UNUSED_0x40FF, 18
release
end

LavenderTown_Pasado_Lider_Move_14:
face_up
delay_16
delay_8
walk_slow_up
delay_16
walk_left
walk_up
step_end

LavenderTown_Pasado_Lider_Move_13:
walk_left
walk_left
walk_up
step_end

LavenderTown_Pasado_Lider_Move_12:
walk_up
step_end

LavenderTown_Pasado_Lider_Move_11:
walk_in_place_up
step_end

LavenderTown_Pasado_Lider_Move_10:
walk_slow_up
step_end

LavenderTown_Pasado_Lider_Move_9:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

LavenderTown_Pasado_Lider_Move_8:
delay_8
face_up
delay_16
delay_8
face_right
delay_16
delay_8
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_7:
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_6:
walk_down
face_right
step_end

LavenderTown_Pasado_Lider_Move_5:
face_down
step_end

LavenderTown_Pasado_Lider_Move_3:
face_up
step_end

LavenderTown_Pasado_Lider_Move_4:
walk_slow_left
step_end

LavenderTown_Pasado_Lider_Move_2:
delay_8
face_up
delay_16
delay_8
walk_in_place_right
step_end

LavenderTown_Pasado_Lider_Move_1:
walk_in_place_left
step_end

LavenderTown_Pasado_Lider_Texto_1:
	.string "¿Es cierto que dejará pronto\n"
	.string "el puesto de LÍDER?$"

LavenderTown_Pasado_Lider_Texto_2:
	.string "Así es, MORFEO. Mi esposa y yo nos\n"
	.string "mudamos el año que viene.$"

LavenderTown_Pasado_Lider_Texto_3:
	.string "MORFEO: He aprendido mucho con usted\n"
	.string "¡Seguiré sus pasos!$"

LavenderTown_Pasado_Lider_Texto_4:
	.string "Algún día, chico. Algún día.$"

LavenderTown_Pasado_Lider_Texto_5:
	.string "MORFEO: Pero… Dicen que las ciudades\n"
	.string "están cada vez más interesadas en\l"
	.string "combatir.$"

LavenderTown_Pasado_Lider_Texto_6:
	.string "Solo puede haber 8 GIMNASIOS. Si cada\n"
	.string "ciudad tuviera uno, entonces, este…$"

LavenderTown_Pasado_Lider_Texto_7:
	.string "¡Tranquilo, tranquilo!$"

LavenderTown_Pasado_Lider_Texto_8:
	.string "Nada dura para siempre, pero para que\n"
	.string "eso ocurra aún quedan muchos años.$"

LavenderTown_Pasado_Lider_Texto_9:
	.string "Os he visto, cada día lo hago. Ambos\n"
	.string "tenéis talento, y más importante:\l"
	.string "derrocháis ilusión y pasión.$"

LavenderTown_Pasado_Lider_Texto_10:
	.string "Te convertiras en un gran ENTRENADOR\n"
	.string "antes de que eso pase. Este GIMNASIO\l"
	.string "te verá como LÍDER antes de que sus\l"
	.string "días acaben, puedes estar seguro.$"

LavenderTown_Pasado_Lider_Texto_11:
	.string "Y ahora, entremos. ¡No hagamos esperar\n"
	.string "más a nuestra CAMPEONA!$"

LavenderTown_Pasado_Lider_Texto_12:
	.string "AGATHA: ¡Vamos!$"
