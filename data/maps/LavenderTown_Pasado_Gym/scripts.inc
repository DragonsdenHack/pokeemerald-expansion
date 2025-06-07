LavenderTown_Pasado_Gym_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_Pasado_Gym_OnFrame
	.byte 0

LavenderTown_Pasado_Gym_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 18, LavenderTown_Pasado_Gym
	.2byte 0

LavenderTown_Pasado_Gym_Gray::
setvar VAR_UNUSED_0x40F8, 19
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
setvar VAR_UNUSED_0x40F8, 20
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
	.string "????: Gerade noch rechtzeitig.$"

LavenderTown_Pasado_Gym_Texto_2:
	.string "AGATHE: Du! Was machst du denn hier?!$"

LavenderTown_Pasado_Gym_Texto_3:
	.string "Du hast dich doch nie für LAVANDIA\n"
	.string "interessiert.$"

LavenderTown_Pasado_Gym_Texto_4:
	.string "????: Ich werde in der Zukunft KANTOs\n"
	.string "CHAMP sein. Daher dachte ich mir, dass\l"
	.string "es keine schlechte Idee sei, einer\l"
	.string "echten zuzuhören, um einen Eindruck\l"
	.string "zu erhalten.\p"
	.string "Verstehst du?$"

LavenderTown_Pasado_Gym_Texto_5:
	.string "AGATHE: So eingebildet wie eh und je …\n"
	.string "Du bist ein hoffnungsloser Fall, EICH.$"

LavenderTown_Pasado_Gym_Texto_6:
	.string "EICH: Ich sage nur die Wahrheit.\n"
	.string "Wer sollte mich schon schlagen?\p"
	.string "Ein GENGAR?$"

LavenderTown_Pasado_Gym_Texto_7:
	.string "AGATHE: Ganz genau!$"

LavenderTown_Pasado_Gym_Texto_8:
	.string "EICH: Nur ein LEGENDÄRES POKéMON\n"
	.string "könnte mich ins Schwitzen bringen.\p"
	.string "Du wirst schon sehen!$"

LavenderTown_Pasado_Gym_Texto_9:
	.string "AGATHE: Tja - Weißt du was? Die\n"
	.string "GEIST-POKéMON meiner Meisterin sind so\l"
	.string "stark wie ein LEGENDÄRES POKéMON!\p"
	.string "Eins davon ist sogar legendär!$"

LavenderTown_Pasado_Gym_Texto_10:
	.string "EICH: Du bluffst. Das ist unmöglich.$"

LavenderTown_Pasado_Gym_Texto_11:
	.string "AGATHE: Ist es nicht! NEBULAK, ALPOLLO\n"
	.string "und GENGAR sind nicht die einzigen\l"
	.string "Geist-Typen in LAVANDIA.$"

LavenderTown_Pasado_Gym_Texto_12:
	.string "EICH: Du wirst gleich seh…!$"

LavenderTown_Pasado_Gym_Texto_13:
	.string "Genug! Es reicht!$"

LavenderTown_Pasado_Gym_Texto_14:
	.string "Wir haben etwas Historisches zu feiern.$"

LavenderTown_Pasado_Gym_Texto_15:
	.string "Zum ersten Mal überhaupt ist es einer\n"
	.string "GEIST-TYP TRAINERIN gelungen, CHAMP\l"
	.string "zu werden.$"

LavenderTown_Pasado_Gym_Texto_16:
	.string "Ein listiger, geheimnisvoller und schwer\n"
	.string "zu verstehender Typ. Doch lauert in ihm\l"
	.string "eine gewaltige Macht, die nicht jeder zu\l"
	.string "kontrollieren vermag.$"

LavenderTown_Pasado_Gym_Texto_17:
	.string "Eine talentierte TRAINERIN jedoch ist\n"
	.string "es gelungen, das Potenzial dieses Typs\l"
	.string "voll auszuschöpfen.$"

LavenderTown_Pasado_Gym_Texto_18:
	.string "Sie zwang den jungen DRACHENMEISTER\n"
	.string "von JOHTO in die Knie und machte somit\l"
	.string "das Unmögliche möglich.$"

LavenderTown_Pasado_Gym_Texto_19:
	.string "LAVANDIA wird in ihrem Herzen stets\n"
	.string "einen besonderen Platz für unseren\l"
	.string "CHAMP FRIDA bewahren.$"

LavenderTown_Pasado_Gym_Texto_20:
	.string "C. FRIDA: Vielen Dank, Meisterin, für\n"
	.string "Ihre netten Worte.$"

LavenderTown_Pasado_Gym_Texto_21:
	.string "Wie ihr alle vielleicht wisst, stamme ich\n"
	.string "aus JOHTO.$"

LavenderTown_Pasado_Gym_Texto_22:
	.string "Aber mein Herz wird immer für KANTO\n"
	.string "schlagen, für LAVANDIA.$"

LavenderTown_Pasado_Gym_Texto_23:
	.string "Hier und nirgendwo sonst konnte ich zu\n"
	.string "der besten ARENALEITERIN werden, die\l"
	.string "ich sein kann.$"

LavenderTown_Pasado_Gym_Texto_24:
	.string "Ihr alle kennt diesen Ort … Er strahlt\n"
	.string "eine besondere Energie aus, etwas …\l"
	.string "Spirituelles.$"

LavenderTown_Pasado_Gym_Texto_25:
	.string "Wir können sie zwar nicht sehen und\n"
	.string "vielleicht werden wir sie niemals\l"
	.string "verstehen, aber wir können keinesfalls\l"
	.string "ihre Macht verleugnen.$"

LavenderTown_Pasado_Gym_Texto_26:
	.string "Das ist es, was es meinen POKéMON und\n"
	.string "mir ermöglicht hat, unsere Grenzen zu\l"
	.string "überwinden und eben das hat mich eine\l"
	.string "unumstößliche Wahrheit erkennen\l"
	.string "lassen. Eine Wahrheit, die schon immer\l"
	.string "da war und immer bestehen wird.$"

LavenderTown_Pasado_Gym_Texto_27:
	.string "EICH: Und diese Wahrheit ist …?$"

LavenderTown_Pasado_Gym_Texto_28:
	.string "C.FRIDA: … Das großartige Trainer von\n"
	.string "überall herkommen können.$"

LavenderTown_Pasado_Gym_Texto_29:
	.string "EICH: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

LavenderTown_Pasado_Gym_Texto_30:
	.string "AGATHE: Meisterin, Meisterin!\n"
	.string "Bitte beantwortet uns folgendes!$"

LavenderTown_Pasado_Gym_Texto_31:
	.string "Was ist mit Ihrem VULNONA geschehen?$"

LavenderTown_Pasado_Gym_Texto_32:
	.string "Hat es wirklich das stärkste DRAGORAN\n"
	.string "westlich vom SILBERBERG besiegt,\l"
	.string "nachdem es sich entwickelt hat?$"

LavenderTown_Pasado_Gym_Texto_33:
	.string "EICH: WAS?!$"

LavenderTown_Pasado_Gym_Texto_34:
	.string "C. FRIDA: Ach, AGATHE. Du bist gut\n"
	.string "informiert. Ja, es stimmt.$"

LavenderTown_Pasado_Gym_Texto_35:
	.string "Wie du weißt, war VULNONA mein erstes\n"
	.string "POKéMON.$"

LavenderTown_Pasado_Gym_Texto_36:
	.string "Es kommt mir so vor, als wäre es gestern\n"
	.string "gewesen, als ich ihn in eben dieser\l"
	.string "ARENA fand. Damals war ich sogar noch\l"
	.string "jünger als du, AGATHE.$"

LavenderTown_Pasado_Gym_Texto_37:
	.string "An diesem Tag verschmolzen die\n"
	.string "Schicksale eines jungen Mädchens und\l"
	.string "eines kleinen VULPIX für immer.$"

LavenderTown_Pasado_Gym_Texto_38:
	.string "EICH: Aber VULNONA ist kein GEIST-TYP!$"

LavenderTown_Pasado_Gym_Texto_39:
	.string "C. FRIDA: Das ist wahr.$"

LavenderTown_Pasado_Gym_Texto_40:
	.string "Aber … ich habe stets geahnt, dass\n"
	.string "dieser kleine Kerl, den ich einst an\l"
	.string "einem mysteriösen Grabstein fand, tief\l"
	.string "in seinem Inneren das Wesen dieses\l"
	.string "TYPs trug.$"

LavenderTown_Pasado_Gym_Texto_41:
	.string "Dieses VULPIX wurde zum stärksten\n"
	.string "VULNONA, das ich jemals gesehen habe.$"

LavenderTown_Pasado_Gym_Texto_42:
	.string "Aber {PAUSE 15}…{PAUSE 15} die Macht der Drachen ist\n"
	.string "schlichtweg überwältigend.$"

LavenderTown_Pasado_Gym_Texto_43:
	.string "Dank meiner Fähigkeiten konnte ich\n"
	.string "ihren Angriffen standhalten. Doch sein\l"
	.string "letzter Drache … Dessen Kraft war …\l"
	.string "nicht in Worte zu fassen.$"

LavenderTown_Pasado_Gym_Texto_44:
	.string "Ich wusste, dass, wenn unsere\n"
	.string "Verteidigung auch nur etwas nachlassen\l"
	.string "würde, der Ausgang dieses Kampfes\l"
	.string "besiegelt wäre.$"

LavenderTown_Pasado_Gym_Texto_45:
	.string "Doch haben wir nie aufgehört, an uns zu\n"
	.string "glauben. Und dann ist es passiert …$"

LavenderTown_Pasado_Gym_Texto_46:
	.string "Auf eine Art und Weise, die ich mir nicht\n"
	.string "erklären kann, hat sich plötzlich all\l"
	.string "das Potenzial {PAUSE 15}…{PAUSE 15} von dem ich immer\l"
	.string "wusste, dass es da war {PAUSE 15}…{PAUSE 15} manifestiert.$"

LavenderTown_Pasado_Gym_Texto_47:
	.string "Nun konnte man es sehen, riechen und\n"
	.string "fühlen: Der GEIST-TYP, der stets in\l"
	.string "diesem VULPIX geschlummert hat, nahm\l"
	.string "Gestalt an!$"

LavenderTown_Pasado_Gym_Texto_48:
	.string "AGATHE: WOW!$"

LavenderTown_Pasado_Gym_Texto_49:
	.string "C. FRIDA: Zu Beginn glaubten sie, es sei\n"
	.string "nur ein Bluff. Lediglich eine Illusion,\l"
	.string "hervorgerufen durch Hypnose und die\l"
	.string "mit ihr einherkommende Veränderung der\l"
	.string "Sinneswahrnehmung. Aber nein.$"

LavenderTown_Pasado_Gym_Texto_50:
	.string "Es war real, sehr real sogar. Und diese\n"
	.string "Form wird mein VULNONA auf ewig\l"
	.string "behalten.$"

LavenderTown_Pasado_Gym_Texto_51:
	.string "Sein Fell wurde hart wie reiner Stahl.\p"
	.string "Kein Angriff vermochte es zu\n"
	.string "durchdringen.$"

LavenderTown_Pasado_Gym_Texto_52:
	.string "Auch wuchsen seine mentalen\n"
	.string "Fähigkeiten. Dasselbe gilt für seine\l"
	.string "Initiative und seine Leistungen im\l"
	.string "Kampf.$"

LavenderTown_Pasado_Gym_Texto_53:
	.string "Sogar der CHAMP war überrascht. So sehr\n"
	.string "er sich auch ins Zeug legte …\p"
	.string "Er konnte den unvermeidlichen Ausgang\n"
	.string "des Kampfes nur noch hinauszögern.$"

LavenderTown_Pasado_Gym_Texto_54:
	.string "Sein mächtigstes POKéMON, ein Symbol\n"
	.string "von Heiligkeit, wurde zum ersten Mal\l"
	.string "überhaupt besiegt.$"

LavenderTown_Pasado_Gym_Texto_55:
	.string "AGATHE: Das ist … unfassbar.$"

LavenderTown_Pasado_Gym_Texto_56:
	.string "C. FRIDA: Vielleicht haben wir, ohne es\n"
	.string "zu wissen … all die Jahre auf genau\l"
	.string "diesen Moment hingearbeitet.$"

LavenderTown_Pasado_Gym_Texto_57:
	.string "EICH: Es scheint, als hättest du eine\n"
	.string "bedeutende Entdeckung gemacht!\p"
	.string "VULNONA kann sich weiterentwickeln!$"

LavenderTown_Pasado_Gym_Texto_58:
	.string "Ich wette, seine Stärke übertrifft die\n"
	.string "von ARKANI. Ja, sogar die von LAVADOS!$"

LavenderTown_Pasado_Gym_Texto_59:
	.string "MORPHEUS: EICH …$"

LavenderTown_Pasado_Gym_Texto_60:
	.string "EICH: Ich werde ebenfalls eins\n"
	.string "trainieren, bis es sich\l"
	.string "weiterentwickelt. Mit dieser wertvollen\l"
	.string "Ergänzung in meiner Sammlung wird mein\l"
	.string "Team noch stärker und ausgeglichener\l"
	.string "sein.$"

LavenderTown_Pasado_Gym_Texto_61:
	.string "Sagen Sie mir eins, CHAMP.\p"
	.string "Auf welchem Level befindet sich\n"
	.string "ihr VULNONA aktuell?$"

LavenderTown_Pasado_Gym_Texto_62:
	.string "C. FRIDA: So einfach ist das nicht,\n"
	.string "junger Mann. Das Level eines POKéMON\l"
	.string "spielt hierbei keine Rolle.$"

LavenderTown_Pasado_Gym_Texto_63:
	.string "EICH: Wie bitte?$"

LavenderTown_Pasado_Gym_Texto_64:
	.string "AGATHE: Hast du ihr nicht zugehört? Ihr\n"
	.string "VULNONA hat sich weiterentwickelt, weil\l"
	.string "zwischen ihm und Meisterin FRIDA eine\l"
	.string "ganz besondere - ja einzigartige\l"
	.string "Verbindung herrscht.$"

LavenderTown_Pasado_Gym_Texto_65:
	.string "EICH: Was für ein Quatsch!\n"
	.string "Das war doch nur purer Zufall!\p"
	.string "Ein glücklicher Levelaufstieg!\p"
	.string "Mehr nicht!$"

LavenderTown_Pasado_Gym_Texto_66:
	.string "C. FRIDA: Ganz im Gegenteil, junger\n"
	.string "Mann. Oft finden sich die Antworten auf\l"
	.string "die größten Geheimnisse in den\l"
	.string "einfachsten Dingen {PAUSE 15}…{PAUSE 15} sichtbar für\l"
	.string "jedermann.$"

LavenderTown_Pasado_Gym_Texto_67:
	.string "Nun, wenn ihr mich mich entschuldigen\n"
	.string "würdet.$"

LavenderTown_Pasado_Gym_Texto_68:
	.string "AGATHE: Meisterin! Wartet!$"

LavenderTown_Pasado_Gym_Texto_69:
	.string "Lass sie sich ausruhen. Der Kampf den\n"
	.string "sie gewonnen hat, war lang und hart.\p"
	.string "Und es ist ein weiter Weg von JOHTO.$"

LavenderTown_Pasado_Gym_Texto_70:
	.string "AGATHE: Verdammt … Ich wollte ihr\n"
	.string "unbedingt zeigen, wie viel stärker\l"
	.string "mein NEBULAK geworden ist …$"

LavenderTown_Pasado_Gym_Texto_71:
	.string "Das kannst du auch noch morgen tun.$"  
