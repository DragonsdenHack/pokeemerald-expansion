SeafoamIslands_1F_MapScripts::
	.byte 0

SeafoamIslands1F_1::
end

SeafoamIslands1F_Escena_6::
applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands1F_Escena_6_Move_1
warpsilent MAP_SILPH_11F, 2, 1
waitmovement 0x0
release
end

SeafoamIslands1F_Escena_6_Move_1:
walk_in_place_up
step_end
