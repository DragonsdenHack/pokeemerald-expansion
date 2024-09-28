LavenderTown_Pasado_Gym_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_Pasado_Gym_OnFrame
	.byte 0

LavenderTown_Pasado_Gym_OnFrame:
map_script_2 VAR_UNUSED_0x40FF, 18, LavenderTown_Pasado_Gym
	.2byte 0

LavenderTown_Pasado_Gym_Gray::
setvar VAR_UNUSED_0x40FF, 19
end

LavenderTown_Pasado_Gym_Move_1:
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_1.1:
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Move_2:
face_down
step_end

LavenderTown_Pasado_Gym_Move_3:
emote_exclamation_mark
step_end

LavenderTown_Pasado_Gym_Move_4:
face_down
emote_exclamation_mark
step_end

LavenderTown_Pasado_Gym_Move_5:
delay_16
delay_16
face_right
step_end

LavenderTown_Pasado_Gym_Move_6:
delay_16
delay_16
face_up
step_end

LavenderTown_Pasado_Gym_Move_7:
walk_up
walk_up
walk_up
face_left
step_end

LavenderTown_Pasado_Gym_Move_8:
walk_in_place_right
step_end

LavenderTown_Pasado_Gym_Move_9:
face_up
step_end

LavenderTown_Pasado_Gym_Move_10:
face_left
step_end

LavenderTown_Pasado_Gym_Move_11:
face_up
delay_16
delay_8
face_right
step_end

LavenderTown_Pasado_Gym_Move_12:
walk_in_place_left
step_end

LavenderTown_Pasado_Gym_Move_13:
face_down
delay_16
walk_in_place_down
step_end

LavenderTown_Pasado_Gym_Move_14:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Move_14.1:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_15:
walk_right
face_up
step_end

LavenderTown_Pasado_Gym_Move_16:
walk_slow_left
walk_slow_left
face_up
step_end

LavenderTown_Pasado_Gym_Move_17:
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_18:
walk_slow_up
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Move_19:
walk_in_place_up
walk_slow_down
walk_slow_right
walk_slow_right
face_left
step_end

LavenderTown_Pasado_Gym_Move_20:
walk_down
step_end

LavenderTown_Pasado_Gym_Move_21:
face_left
delay_16
face_down
step_end

LavenderTown_Pasado_Gym_Move_22:
jump_in_place_up
step_end

LavenderTown_Pasado_Gym_Move_23:
emote_exclamation_mark
delay_16
face_left
delay_16
delay_8
face_up
delay_16
face_left
step_end

LavenderTown_Pasado_Gym_Move_24:
walk_up
face_down
step_end

LavenderTown_Pasado_Gym_Move_25:
walk_in_place_up
step_end

LavenderTown_Pasado_Gym_Move_26:
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_27:
walk_fast_up
step_end

LavenderTown_Pasado_Gym_Move_28:
delay_16
face_left
delay_16
face_right
delay_16
face_up
step_end

LavenderTown_Pasado_Gym_Move_9.1:
face_up
jump_in_place_up
step_end

LavenderTown_Pasado_Gym_Izq_Move_1:
walk_slow_right
step_end

LavenderTown_Pasado_Gym_Der_Move_1:
walk_slow_left
step_end

LavenderTown_Pasado_Gym_Cen_Move_1:
walk_slow_up
step_end

LavenderTown_Pasado_Gym_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Izq_Move_1
waitmovement 0x0
call Script_SetGrayscaleTint
goto LavenderTown_Pasado_Gym

LavenderTown_Pasado_Gym_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Der_Move_1
waitmovement 0x0
call Script_SetGrayscaleTint
goto LavenderTown_Pasado_Gym

LavenderTown_Pasado_Gym_Cen::
lock
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Cen_Move_1
waitmovement 0x0
call Script_SetGrayscaleTint
goto LavenderTown_Pasado_Gym



LavenderTown_Pasado_Gym::
lock
call Script_SetGrayscaleTint
delay 15
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_1.1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
waitse
delay 5
playse SE_EXIT
addobject 10
call Script_SetGrayscaleTint
clearflag FLAG_HOENN_70
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 9, LavenderTown_Pasado_Gym_Move_4
waitmovement 0x0
waitse
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_2 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Gym_Move_5
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Pasado_Gym_Move_6
applymovement 10, LavenderTown_Pasado_Gym_Move_7
waitmovement 0x0
applymovement 9, LavenderTown_Pasado_Gym_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 9, LavenderTown_Pasado_Gym_Move_8
applymovement 10, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_6 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 9, LavenderTown_Pasado_Gym_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_8 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Gym_Move_11
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_10 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Pasado_Gym_Move_8
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_11 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_12
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
applymovement 9, LavenderTown_Pasado_Gym_Move_9
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_13 MSGBOX_AUTOCLOSE
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_9.1
applymovement 10, LavenderTown_Pasado_Gym_Move_9.1
waitmovement 0x0
special SpawnCameraObject
applymovement 4, LavenderTown_Pasado_Gym_Move_10
applymovement 10, LavenderTown_Pasado_Gym_Move_15
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Gym_Move_14
waitmovement 0x0
special RemoveCameraObject
msgbox LavenderTown_Pasado_Gym_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_16
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_15 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_16 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_17
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
applymovement 2, LavenderTown_Pasado_Gym_Move_18
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_20 MSGBOX_AUTOCLOSE
applymovement 2, LavenderTown_Pasado_Gym_Move_19
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_20
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_27 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_21
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_29 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_31 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_32 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_23
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_33 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_34 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_24
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_36 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_37 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_2
applymovement 10, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_38 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_39 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_26
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_40 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_41 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_42 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_13
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_43 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_24
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_45 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_46 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_47 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_48 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_49 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_50 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_10
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_51 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_12
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_52 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_2
waitmovement 0x0
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_53 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_54 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 9, LavenderTown_Pasado_Gym_Move_22
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_55 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_56 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_27
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_57 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_28
waitmovement 0x0
delay 10
msgbox LavenderTown_Pasado_Gym_Texto_58 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_59 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_28
waitmovement 0x0
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_60 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_29
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_61 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_62 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitmovement 0x0
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_30
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_63 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, LavenderTown_Pasado_Gym_Move_2
applymovement 9, LavenderTown_Pasado_Gym_Move_25
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_64 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_65 MSGBOX_AUTOCLOSE
applymovement 1, LavenderTown_Pasado_Gym_Move_31
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_66 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, LavenderTown_Pasado_Gym_Move_3
waitse
delay 25
applymovement 1, LavenderTown_Pasado_Gym_Move_9
waitmovement 0x0
delay 25
msgbox LavenderTown_Pasado_Gym_Texto_67 MSGBOX_AUTOCLOSE
applymovement 10, LavenderTown_Pasado_Gym_Move_32.1
applymovement 1, LavenderTown_Pasado_Gym_Move_32
waitmovement 0x0
removeobject 1
playse SE_EXIT
waitse
applymovement 9, LavenderTown_Pasado_Gym_Move_33
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_68 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, LavenderTown_Pasado_Gym_Move_34
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_69 MSGBOX_AUTOCLOSE
delay 15
msgbox LavenderTown_Pasado_Gym_Texto_70 MSGBOX_AUTOCLOSE
applymovement 4, LavenderTown_Pasado_Gym_Move_12
waitmovement 0x0
msgbox LavenderTown_Pasado_Gym_Texto_71 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_70
setflag FLAG_HOENN_71
fadescreen 1
delay 40
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 5
removeobject 6
removeobject 7
removeobject 8
removeobject 9
removeobject 10
delay 40
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Pasado_Gym_Move_14.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40FF, 20
release
end

LavenderTown_Pasado_Gym_Move_34:
walk_down
walk_left
step_end

LavenderTown_Pasado_Gym_Move_33:
walk_up
walk_right
step_end

LavenderTown_Pasado_Gym_Move_32:
walk_up
walk_right
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
step_end

LavenderTown_Pasado_Gym_Move_32.1:
delay_16
delay_16
delay_16
delay_16
delay_16
face_right
step_end


LavenderTown_Pasado_Gym_Move_31:
walk_slow_down
walk_slow_down
step_end

LavenderTown_Pasado_Gym_Move_30:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

LavenderTown_Pasado_Gym_Move_29:
walk_left
walk_up
walk_up
step_end

LavenderTown_Pasado_Gym_Texto_1:
	.string "????: Justo a tiempo.$"

LavenderTown_Pasado_Gym_Texto_2:
	.string "AGATHA: ¡Tú! ¡¿Qué haces aquí?!$"

LavenderTown_Pasado_Gym_Texto_3:
	.string "Nunca te has interesado por PUEBLO\n"
	.string "LAVANDA.$"

LavenderTown_Pasado_Gym_Texto_4:
	.string "????: Algún día seré CAMPEÓN de KANTO.\n"
	.string "Tengo que escuchar a uno de verdad\l"
	.string "para hacerme a la idea.$"

LavenderTown_Pasado_Gym_Texto_5:
	.string "AGATHA: Tan arrogante como siempre. No\n"
	.string "tienes remedio, OAK.$"

LavenderTown_Pasado_Gym_Texto_6:
	.string "OAK: Solo es la pura verdad. ¿Quién me\n"
	.string "derrotará? ¿Un GENGAR?$"

LavenderTown_Pasado_Gym_Texto_7:
	.string "AGATHA: ¡Pues sí!$"

LavenderTown_Pasado_Gym_Texto_8:
	.string "OAK: Solo un LEGENDARIO podrá ponerme\n"
	.string "en aprietos, ¡ya lo verás!$"

LavenderTown_Pasado_Gym_Texto_9:
	.string "AGATHA: ¡Pues los POKÉMON FANTASMA de\n"
	.string "mi maestra son tan fuertes como un\l"
	.string "LEGENDARIO! ¡Tiene incluso uno que lo\l"
	.string "es!$"

LavenderTown_Pasado_Gym_Texto_10:
	.string "OAK: No mientas, eso es imposible.$"

LavenderTown_Pasado_Gym_Texto_11:
	.string "AGATHA: ¡No lo es! ¡GASTLY,\n"
	.string "HAUNTER y GENGAR no son los únicos\l"
	.string "fantasmas que hay en PUEBLO LAVANDA!$"

LavenderTown_Pasado_Gym_Texto_12:
	.string "OAK: ¡Ya verás cuand…!$"

LavenderTown_Pasado_Gym_Texto_13:
	.string "¡Silencio! ¡Ya!$"

LavenderTown_Pasado_Gym_Texto_14:
	.string "Estamos ante un acontecimiento\n"
	.string "histórico.$"

LavenderTown_Pasado_Gym_Texto_15:
	.string "Por primera vez, un ENTRENADOR del TIPO\n"
	.string "FANTASMA se hace con el título de\l"
	.string "CAMPEÓN.$"

LavenderTown_Pasado_Gym_Texto_16:
	.string "Un tipo escurridizo, misterioso y\n"
	.string "difícil de entender. Pero que encierra\l"
	.string "un gran poder que muy pocos pueden\l"
	.string "llegar a dominar.$"

LavenderTown_Pasado_Gym_Texto_17:
	.string "Una talentosa joven ha sido quién ha\n"
	.string "llevado esto a su máxima expresión.$"

LavenderTown_Pasado_Gym_Texto_18:
	.string "Fue capaz de doblegar a los poderosos\n"
	.string "dragones del joven maestro de JOHTO, y\l"
	.string "lograr lo imposible.$"

LavenderTown_Pasado_Gym_Texto_19:
	.string "PUEBLO LAVANDA siempre tendrá un lugar\n"
	.string "para nuestra CAMPEONA: FRIDA.$"

LavenderTown_Pasado_Gym_Texto_20:
	.string "C. FRIDA: Gracias por\n"
	.string "tus palabras, maestra.$"

LavenderTown_Pasado_Gym_Texto_21:
	.string "Como todos sabéis, nací en JOHTO.$"

LavenderTown_Pasado_Gym_Texto_22:
	.string "Pero mi corazón siempre estará con\n"
	.string "KANTO, con PUEBLO LAVANDA.$"

LavenderTown_Pasado_Gym_Texto_23:
	.string "Aquí fue donde pude desarrollar todo mi\n"
	.string "potencial como LÍDER de GIMNASIO.$"

LavenderTown_Pasado_Gym_Texto_24:
	.string "Este lugar… todos lo conocéis. Emana\n"
	.string "una energía diferente, hay algo\l"
	.string "espiritual en él.$"

LavenderTown_Pasado_Gym_Texto_25:
	.string "No podemos verlo, tal vez siquiera\n"
	.string "comprenderlo. Pero resulta imposible\l"
	.string "ignorar su poder.$"

LavenderTown_Pasado_Gym_Texto_26:
	.string "Esa fuerza fue la que ayudó a mi\n"
	.string "POKÉMON a superar sus límites, la misma\l"
	.string "que me convirtió en CAMPEONA, y también\l"
	.string "la que me hizo darme cuenta de una\l"
	.string "verdad inmutable, atemporal.$"

LavenderTown_Pasado_Gym_Texto_27:
	.string "OAK: ¿Y cuál es?$"

LavenderTown_Pasado_Gym_Texto_28:
	.string "C. FRIDA: Que los grandes entrenadores\n"
	.string "pueden provenir de cualquier lugar.$"

LavenderTown_Pasado_Gym_Texto_29:
	.string "OAK: … …$"

LavenderTown_Pasado_Gym_Texto_30:
	.string "AGATHA: ¡Maestra, maestra! ¡Cuéntenos!$"

LavenderTown_Pasado_Gym_Texto_31:
	.string "¿Qué pasó con su NINETALES?$"

LavenderTown_Pasado_Gym_Texto_32:
	.string "¿De verdad pudo derrotar al DRAGONITE\n"
	.string "más fuerte de toda JOHTO tras\l"
	.string "evolucionar?$"

LavenderTown_Pasado_Gym_Texto_33:
	.string "OAK: ¿¡Cómo!?$"

LavenderTown_Pasado_Gym_Texto_34:
	.string "C. FRIDA: Ah, AGATHA. Estás en todo.\n"
	.string "Y tienes razón.$"

LavenderTown_Pasado_Gym_Texto_35:
	.string "Como sabéis, NINETALES fue\n"
	.string "mi primer POKÉMON.$"

LavenderTown_Pasado_Gym_Texto_36:
	.string "Parece que fue ayer cuando lo encontré\n"
	.string "en este mismo GIMNASIO. Era más joven\l"
	.string "que tú, AGATHA.$"

LavenderTown_Pasado_Gym_Texto_37:
	.string "Tal día, esa pequeña niña y aquel\n"
	.string "pequeño VULPIX unieron su destino para\l"
	.string "siempre.$"

LavenderTown_Pasado_Gym_Texto_38:
	.string "OAK: ¡Pero NINETALES no es\n"
	.string "TIPO FANTASMA!$"

LavenderTown_Pasado_Gym_Texto_39:
	.string "C. FRIDA: No, no lo es.$"

LavenderTown_Pasado_Gym_Texto_40:
	.string "Pero… yo siempre supe que ese pequeño,\n"
	.string "aquel que encontré revolviéndose sobre\l"
	.string "una misteriosa tumba, guardaba mucho\l"
	.string "de ese tipo en su interior.$"

LavenderTown_Pasado_Gym_Texto_41:
	.string "Ese VULPIX se convirtió en el\n"
	.string "NINETALES más fuerte que mis ojos\l"
	.string "hayan visto.$"

LavenderTown_Pasado_Gym_Texto_42:
	.string "Sin embargo, el poder de los\n"
	.string "dragones es terrible.$"

LavenderTown_Pasado_Gym_Texto_43:
	.string "Gracias a mi habilidad pude contenerlos.\n"
	.string "Pero el último de sus dragones… su\l"
	.string "poder era tal, que resultaba\l"
	.string "incontrolable.$"

LavenderTown_Pasado_Gym_Texto_44:
	.string "Abriendo brecha en nuestras defensas,\n"
	.string "el destino del combate estaba sellado.$"

LavenderTown_Pasado_Gym_Texto_45:
	.string "Aún así, nunca dejamos de creer.\n"
	.string "Y ocurrió.$"

LavenderTown_Pasado_Gym_Texto_46:
	.string "De algún modo, todo ese potencial,\n"
	.string "todos esos intangibles que siempre\l"
	.string "supe que existían, de repente… estaban\l"
	.string "ahí.$"

LavenderTown_Pasado_Gym_Texto_47:
	.string "Ahora podía verse, olerse y tocarse:\n"
	.string "¡el TIPO FANTASMA que ese VULPIX\l"
	.string "siempre tuvo dentro se materializó!$"

LavenderTown_Pasado_Gym_Texto_48:
	.string "AGATHA: ¡Guau!$"

LavenderTown_Pasado_Gym_Texto_49:
	.string "C. FRIDA: Al principio, creyeron que era\n"
	.string "una estrategia. Pensaron que estaba\l"
	.string "nublando sus sentidos por medio de la\l"
	.string "hipnosis.$"

LavenderTown_Pasado_Gym_Texto_50:
	.string "Pero no, era real. Y esa será la forma\n"
	.string "que mi NINETALES tendrá por el resto\l"
	.string "de sus días.$"

LavenderTown_Pasado_Gym_Texto_51:
	.string "Su pelaje se volvió duro como\n"
	.string "el acero, impenetrable.$"

LavenderTown_Pasado_Gym_Texto_52:
	.string "Sus poderes mentales se dispararon.\n"
	.string "También su agilidad y fluidez en combate.$"

LavenderTown_Pasado_Gym_Texto_53:
	.string "Tal evento sorprendió al CAMPEÓN que, a\n"
	.string "pesar de seguir luchando, no pudo hacer\l"
	.string "nada.$"

LavenderTown_Pasado_Gym_Texto_54:
	.string "Su POKÉMON, símbolo de lo sagrado, fue\n"
	.string "derrotado por primera vez.$"

LavenderTown_Pasado_Gym_Texto_55:
	.string "AGATHA: Es increíble.$"

LavenderTown_Pasado_Gym_Texto_56:
	.string "C. FRIDA: Puede que, sin saberlo…\n"
	.string "lleváramos toda la vida preparándonos\l"
	.string "para ese momento.$"

LavenderTown_Pasado_Gym_Texto_57:
	.string "OAK: Entonces, ¡ha hecho un gran\n"
	.string "descubrimiento! ¡NINETALES puede\l"
	.string "evolucionar!$"

LavenderTown_Pasado_Gym_Texto_58:
	.string "Seguro que es más fuerte que ARCANINE,\n"
	.string "¡incluso que MOLTRES!$"

LavenderTown_Pasado_Gym_Texto_59:
	.string "MORFEO: OAK…$"

LavenderTown_Pasado_Gym_Texto_60:
	.string "OAK: Entrenaré uno hasta que\n"
	.string "evolucione también. Con esa\l"
	.string "incorporación mi equipo será aún más\l"
	.string "fuerte y equilibrado.$"

LavenderTown_Pasado_Gym_Texto_61:
	.string "Dime, CAMPEONA. ¿A qué nivel\n"
	.string "está ahora tu NINETALES?$"

LavenderTown_Pasado_Gym_Texto_62:
	.string "C. FRIDA: No es tan simple, jovencito. El\n"
	.string "nivel no importa aquí.$"

LavenderTown_Pasado_Gym_Texto_63:
	.string "OAK: ¿Qué?$"

LavenderTown_Pasado_Gym_Texto_64:
	.string "AGATHA: ¿No has escuchado nada de lo\n"
	.string "que ha dicho? Su NINETALES evolucionó\l"
	.string "porque estaban conectados, un vínculo\l"
	.string "especial y único lo hizo posible.$"

LavenderTown_Pasado_Gym_Texto_65:
	.string "OAK: ¡Bah, tonterías! Solo fue\n"
	.string "casualidad. Subió de nivel en el momento\l"
	.string "justo, no hay misterio en eso.$"

LavenderTown_Pasado_Gym_Texto_66:
	.string "C. FRIDA: Al contrario, joven. A veces,\n"
	.string "los mayores misterios se encuentran\l"
	.string "camuflados en lo más ordinario, en lo\l"
	.string "que está a la vista de todos.$"

LavenderTown_Pasado_Gym_Texto_67:
	.string "Si me disculpáis.$"

LavenderTown_Pasado_Gym_Texto_68:
	.string "AGATHA: ¡Maestra, espere!$"

LavenderTown_Pasado_Gym_Texto_69:
	.string "Déjale descansar. El combate por el\n"
	.string "título ha sido duro, y el viaje\l"
	.string "desde JOHTO largo.$"

LavenderTown_Pasado_Gym_Texto_70:
	.string "AGATHA: Jo… Quería que viera lo mucho\n"
	.string "que ha crecido mi GASTLY.$"

LavenderTown_Pasado_Gym_Texto_71:
	.string "Mañana podrás enseñárselo.$"
