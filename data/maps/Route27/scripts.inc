Route27_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Route27_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route27_OnFrame
	.byte 0

Route27_OnResume:
map_script_2 VAR_UNUSED_0x40DC, 0, Route27_Escena_Lance_2
	.2byte 0

Route27_OnFrame:
map_script_2 VAR_UNUSED_0x40DC, 1, Route27_Escena_Lance
	.2byte 0

Route27_Escena_Lance_2::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40DC, 1
end

Route27_1::
lock     
faceplayer     
msgbox Route27_Text_1, MSGBOX_DEFAULT
release     
end

Route27_Text_1:
.string "La RUTA 26 ha sido abierta de\n"
.string "nuevo, pero ve con cuidado, los\l"
.string "POKÉMON salvajes tienen que\l"
.string "acostumbrarse a ver ENTRENADORES.$"



Route27_2::
end



Route27_3::
end



Route27_4::
end



Route27_5::
end



Route27_6::
end



Route27_7::
end



Route27_8::
end



Route27_9::
end



Route27_10::
end



Route27_11::
end



Route27_EventScript_Ornitologo::
	trainerbattle_single TRAINER_HALLE, Route27_Text_OrnitologoIntro, Route27_Text_OrnitologoDefeated
	msgbox Route27_Text_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route27_EventScript_Pescador::
	trainerbattle_single TRAINER_ISAAC_2, Route27_Text_PescadorIntro, Route27_Text_PescadorDefeated
	msgbox Route27_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route27_EventScript_Guay::
	trainerbattle_single TRAINER_MITCHELL, Route27_Text_GuayIntro, Route27_Text_GuayDefeated
	msgbox Route27_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end

Route27_Escena_Lance::
call Script_SetGrayscaleTint
playse MUS_CAVE_OF_ORIGIN
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route27_Escena_Lance_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_16 MSGBOX_AUTOCLOSE
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route27_Escena_Lance_Move_3
delay 80
waitmovement 0x0
special RemoveCameraObject
applymovement 12, Route27_Escena_Lance_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_17 MSGBOX_AUTOCLOSE
applymovement 12, Route27_Escena_Lance_Move_2.1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_17.1 MSGBOX_AUTOCLOSE
applymovement 12, Route27_Escena_Lance_Move_2.2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_17.2 MSGBOX_AUTOCLOSE
applymovement 12, Route27_Escena_Lance_Move_4
waitmovement 0x0
delay 10
applymovement 14, Route27_Escena_Lance_Move_5
applymovement 13, Route27_Escena_Lance_Move_5
waitmovement 0x0
delay 20
applymovement 12, Route27_Escena_Lance_Move_6
waitmovement 0x0
delay 20
applymovement 12, Route27_Escena_Lance_Move_7.1
applymovement 14, Route27_Escena_Lance_Move_7.2
applymovement 13, Route27_Escena_Lance_Move_7
delay 80
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route27_Escena_Lance_Move_8
delay 10
waitmovement 0x0
special RemoveCameraObject
applymovement 15, Route27_Escena_Lance_Move_10
applymovement 16, Route27_Escena_Lance_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_18 MSGBOX_AUTOCLOSE
applymovement 15, Route27_Escena_Lance_Move_11
waitmovement 0x0
delay 20
applymovement 16, Route27_Escena_Lance_Move_12
waitmovement 0x0
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_18.1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40DC, 2
warpsilent MAP_TIN_TOWER_LANCE, 9, 9
call Script_SetGrayscaleTint
release
end

Route27_Escena_Lance_Move_2.2:
walk_down
walk_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_left
step_end

Route27_Escena_Lance_Move_2.1:
walk_slow_up
walk_slow_up
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_up
step_end

Route27_Escena_Lance_Move_12:
walk_in_place_slow_up
step_end

Route27_Escena_Lance_Move_11:
walk_in_place_slow_down
step_end

Route27_Escena_Lance_Move_10:
face_down
step_end

Route27_Escena_Lance_Move_9:
face_up
step_end

Route27_Escena_Lance_Move_8:
walk_right
walk_right
step_end


Route27_Escena_Lance_Move_7:
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_left
step_end

Route27_Escena_Lance_Move_7.1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_left
step_end

Route27_Escena_Lance_Move_7.2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_left
step_end

Route27_Escena_Lance_Move_6:
walk_in_place_slow_up
step_end

Route27_Escena_Lance_Move_5:
walk_right
face_up
step_end

Route27_Escena_Lance_Move_4:
face_up
step_end

Route27_Escena_Lance_Move_3:
walk_slow_left
walk_slow_left
walk_slow_left
step_end


Route27_Escena_Lance_Move_2:
walk_in_place_slow_right
step_end

Route27_Escena_Lance_Move_1:
walk_slow_left
walk_slow_left
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Route27_Cartel::
lock
msgbox Route27_Cartel_Texto_1 MSGBOX_SIGN
delay 10
msgbox Route27_Cartel_Texto_2 MSGBOX_SIGN
release
end

Route27_Cartel_Texto_2:
.string "(Esto último está tachado)$"

Route27_Cartel_Texto_1:
.string "FRONTERA CON KANTO: PROHIBIDO PASAR A\n"
	.string "PARTIR DE ESTE PUNTO$"


Route27_Evento_Encinar::
lock
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
warpsilent MAP_ILEX_FOREST, 15, 53
waitmovement 0x0
delay 100
release
end
