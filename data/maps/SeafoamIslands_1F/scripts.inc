SeafoamIslands_1F_MapScripts::
	.byte 0

SeafoamIslands1F_1::
end

SeafoamIslands1F_Escena_6::
setvar VAR_UNUSED_0x40F7, 67
setflag FLAG_HIDE_ROUTE_119_SCOTT
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands1F_Escena_6_Move_1
warpsilent MAP_SILPH_11F, 2, 1
waitmovement 0x0
release
end

SeafoamIslands1F_Escena_6_Move_1:
walk_in_place_up
step_end
