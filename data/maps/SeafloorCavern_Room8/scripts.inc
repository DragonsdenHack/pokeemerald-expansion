SeafloorCavern_Room8_MapScripts::
	.byte 0


SeafloorCavern_Room8_Warp::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
warpsilent MAP_GOLDENROD_RADIO_TOWER_P5, 8, 18
waitmovement 0x0
delay 100
release
end
