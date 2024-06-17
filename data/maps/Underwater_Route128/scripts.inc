Underwater_Route128_MapScripts::
	.byte 0

Underwater_Route128_Barrera::
compare VAR_UNUSED_0x40F8, 10
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Underwater_Route128_Barrera_Move_1
waitmovement 0x0
msgbox Underwater_Route128_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Underwater_Route128_Barrera_Move_2
waitmovement 0x0
release
end

Underwater_Route128_Barrera_Move_1:
walk_in_place_up
step_end

Underwater_Route128_Barrera_Move_2:
walk_slow_down
step_end

Underwater_Route128_Barrera_Texto_1:
	.string "He quedado con ANDRA en CIUDAD ALGARIA,\n"
	.string "debería ir allí antes de explorar.$"

