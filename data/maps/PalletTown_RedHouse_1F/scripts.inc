PalletTown_RedHouse_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_RedHouse_1F_OnFrame
    .byte 0

PalletTown_RedHouse_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40FA, 0, PalletTown_RedHouse_1F_Encuentro_Madre
	.2byte 0


PalletTown_RedHouse_1F_Encuentro_Madre::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_RedHouse_1F_Encuentro_Madre_Move_1.1
waitmovement 0x0
playse SE_PIN
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_1
waitmovement 0x0
delay 10
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_2
waitmovement 0x0
msgbox PalletTown_RedHouse_1F_Encuentro_Madre_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_3
waitmovement 0x0
msgbox PalletTown_RedHouse_1F_Encuentro_Madre_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_4
waitmovement 0x0
msgbox PalletTown_RedHouse_1F_Encuentro_Madre_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_RedHouse_1F_Encuentro_Madre_Move_2
waitmovement 0x0
warp MAP_PALLET_TOWN, 6, 8
release
end


PalletTown_RedHouse_1F_Encuentro_Madre_Texto_1:
.string "Hmm what?\n"
	.string "RED?\l"
	.string "He is not here.$"

PalletTown_RedHouse_1F_Encuentro_Madre_Texto_2:
.string "... ... ... ... ... ... ...$"

PalletTown_RedHouse_1F_Encuentro_Madre_Texto_3:
	.string "Excuse me but I am busy, I would like\n"
	.string "you to leave me alone, thanks.$"

PalletTown_RedHouse_1F_Encuentro_Madre_Move_1:
emote_exclamation_mark
face_right
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_1.1:
face_up
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_2:
walk_in_place_down
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_3:
walk_in_place_left
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_4:
walk_down
step_end
