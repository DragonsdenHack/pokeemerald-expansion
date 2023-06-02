Route28_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route28_OnFrame
	.byte 0

Route28_OnFrame:
map_script_2 VAR_UNUSED_0x40DC, 2, Route28_Escena_Lance
	.2byte 0


Route28Documento_100::
msgbox Route28Documento_Text_100, MSGBOX_SIGN   
end

Route28Documento_Text_100:
.string "RUTA 28$"


Route28_Escena_Lance::
call Script_SetGrayscaleTint
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route28_Escena_Lance_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideout_8F_Mision_Silph_text_23 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, Route28_Escena_Lance_Move_2
waitmovement 0x0
delay 40
removeobject 2
delay 40
removeobject 4
delay 40
removeobject 3
delay 60
applymovement 8, Route28_Escena_Lance_Move_3
applymovement 1,  Route28_Escena_Lance_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_23.1 MSGBOX_AUTOCLOSE
applymovement 8, Route28_Escena_Lance_Move_5
waitmovement 0x0
removeobject 8
msgbox RocketHideout_8F_Mision_Silph_text_24 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40DC, 3
warpsilent MAP_FARAWAY_ISLAND_ENTRANCE, 18, 33
call Script_SetGrayscaleTint
release
end

Route28_Escena_Lance_Move_5:
walk_up
walk_up
walk_left
walk_left
walk_up
step_end

Route28_Escena_Lance_Move_4:
delay_4
delay_4
delay_4
delay_4
delay_4
face_right
step_end

Route28_Escena_Lance_Move_3:
walk_slow_up
face_left
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_left
step_end

Route28_Escena_Lance_Move_2:
walk_in_place_slow_up
step_end

Route28_Escena_Lance_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

