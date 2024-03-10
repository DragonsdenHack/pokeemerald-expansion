MtMortar4_MapScripts::
	.byte 0

MtMortar4_1::
end



MtMortar4_2::
end



MtMortar4_3::
end



MtMortar4_4::
end



MtMortar4_5::
end

MtMortar4_Encuentro_Anibal::
clearflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
setflag FLAG_HIDE_ROUTE_119_RIVAL
lock
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtMortar4_Encuentro_Anibal_Move_1
waitmovement 0x0
msgbox MtMortar4_Encuentro_Anibal_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtMortar4_Encuentro_Anibal_Move_2
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_MACHOKE, CRY_MODE_ENCOUNTER
msgbox MtMortar4_Encuentro_Anibal_Texto_2 MSGBOX_DEFAULT
waitmoncry
playse SE_M_CUT
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_COMET_PUNCH
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_MEGA_KICK
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_JUMP_KICK
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_SKY_UPPERCUT
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_TAKE_DOWN
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_WING_ATTACK
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
delay 20
playse SE_M_FLY
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_3
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_4
waitmovement 0x0
delay 20
playse SE_M_TWISTER
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_5
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_6
waitmovement 0x0
applymovement 8, CherrygroveCity_Entrenamiento_Pegaso_Move_7
applymovement 6, CherrygroveCity_Entrenamiento_Pegaso_Move_8
waitmovement 0x0
playse SE_M_TAKE_DOWN
msgbox MtMortar4_Encuentro_Anibal_Texto_3 MSGBOX_AUTOCLOSE
msgbox MtMortar4_Encuentro_Anibal_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_MACHOKE, CRY_MODE_ENCOUNTER
msgbox MtMortar4_Encuentro_Anibal_Texto_2 MSGBOX_DEFAULT
waitmoncry
removeobject 8
playse SE_BALL_OPEN
clearflag FLAG_HIDE_ROUTE_110_BIRCH
addobject 9
waitse
delay 15
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_ROUTE_110_BIRCH
removeobject 9
delay 15
msgbox MtMortar4_Encuentro_Anibal_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, MtMortar4_Encuentro_Anibal_Move_9
waitmovement 0x0
msgbox MtMortar4_Encuentro_Anibal_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtMortar4_Encuentro_Anibal_Move_10
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MtMortar4_Encuentro_Anibal_Move_11
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, MtMortar4_Encuentro_Anibal_Move_12
waitmovement 0x0
msgbox MtMortar4_Encuentro_Anibal_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, MtMortar4_Encuentro_Anibal_Move_12
waitmovement 0x0
msgbox MtMortar4_Encuentro_Anibal_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, MtMortar4_Encuentro_Anibal_Move_13
waitmovement 0x0
msgbox MtMortar4_Encuentro_Anibal_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, MtMortar4_Encuentro_Anibal_Move_14
waitmovement 0x0
msgbox MtMortar4_Encuentro_Anibal_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
clearflag FLAG_HIDE_VICTORY_ROAD_EXIT_WALLY
setflag FLAG_HIDE_ROUTE_119_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 149
release
end

MtMortar4_Encuentro_Anibal_Texto_1:
.string "????: ¡Vamos, MACHOKE!\n"
	.string "¡No te reserves, da todo lo que\l"
	.string "tienes!$"

MtMortar4_Encuentro_Anibal_Texto_2:
.string "¡Choke!$"

MtMortar4_Encuentro_Anibal_Texto_3:
.string "Suficiente.$"

MtMortar4_Encuentro_Anibal_Texto_4:
.string "Llevamos horas luchando, toca la\n"
	.string "fase de recuperación bajo la\l"
	.string "cascada.$"

MtMortar4_Encuentro_Anibal_Texto_5:
.string "????: {PAUSE 15}…{PAUSE 15}$"

MtMortar4_Encuentro_Anibal_Texto_6:
.string "¿Quién anda ahí?\n"
	.string "¡Vamos, no te escondas!$"

MtMortar4_Encuentro_Anibal_Texto_7:
.string "Así que buscas al LÍDER ANÍBAL.\n"
	.string "Pues lo tienes delante.$"

MtMortar4_Encuentro_Anibal_Texto_8:
.string "ANÍBAL: ¿Mi mujer quiere que\n"
	.string "regrese ya a ORQUÍDEA?$"

MtMortar4_Encuentro_Anibal_Texto_9:
.string "De todos modos, iba a volver ya,\n"
	.string "este entrenamiento en el\l"
	.string "MT.MORTERO me ha dejado claro que\l"
	.string "ya no puedo seguir el ritmo de mis\l"
	.string "POKÉMON. Ningún luchador que se\l"
	.string "precie permitiría esto sin tomar\l"
	.string "una decisión al respecto.$"

MtMortar4_Encuentro_Anibal_Texto_10:
.string "Volveré a mi GIMNASIO. No tengo\n"
	.string "por costumbre usar a mis más\l"
	.string "fieles compañeros en un combate,\l"
	.string "pero si vienes, te daré un combate\l"
	.string "que merecerá la pena. Si has\l"
	.string "podido llegar a los confines del\l"
	.string "MT.MORTERO, debes ser un notable\l"
	.string "ENTRENADOR, lo veremos.$"

MtMortar4_Encuentro_Anibal_Move_1:
emote_exclamation_mark
walk_in_place_right
step_end

MtMortar4_Encuentro_Anibal_Move_2:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
step_end

MtMortar4_Encuentro_Anibal_Move_3:
step_end

MtMortar4_Encuentro_Anibal_Move_4:
step_end

MtMortar4_Encuentro_Anibal_Move_5:
slide_up
step_end

MtMortar4_Encuentro_Anibal_Move_6:
slide_down
step_end

MtMortar4_Encuentro_Anibal_Move_7:
face_down
step_end

MtMortar4_Encuentro_Anibal_Move_8:
face_up
step_end

MtMortar4_Encuentro_Anibal_Move_9:
walk_up
walk_up
face_left
step_end

MtMortar4_Encuentro_Anibal_Move_10:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
step_end

MtMortar4_Encuentro_Anibal_Move_11:
walk_right
walk_down
walk_right
walk_right
walk_right
step_end

MtMortar4_Encuentro_Anibal_Move_12:
walk_in_place_right
step_end

MtMortar4_Encuentro_Anibal_Move_13:
walk_in_place_down
step_end

MtMortar4_Encuentro_Anibal_Move_14:
walk_left
step_end
