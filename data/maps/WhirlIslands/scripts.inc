WhirlIslands_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, WhirlIslands_OnResume
	.byte 0

WhirlIslands_OnResume:
	call WhirlIslands_SetupEscapeWarp
	end

WhirlIslands_SetupEscapeWarp::
	setescapewarp MAP_ROUTE41, 43, 19
	return

WhirlIslands1::
end



WhirlIslands2::
end



WhirlIslands3::
end

WhirIslands_Evento_Cascada::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, WhirIslands_Evento_Cascada_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, WhirIslands_Evento_Cascada_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox WhirIslands_Evento_Cascada_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, WhirIslands_Evento_Cascada_Move_3
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 148
release
end

WhirIslands_Evento_Cascada_Texto_1:
.string "(Apparently a fierce battle occurred here,\n"
	.string "just a few moments ago).$"

WhirIslands_Evento_Cascada_Move_1:
emote_exclamation_mark
face_up
step_end

WhirIslands_Evento_Cascada_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

WhirIslands_Evento_Cascada_Move_3:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end
