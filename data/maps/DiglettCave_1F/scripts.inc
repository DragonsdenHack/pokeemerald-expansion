DiglettCave_1F_MapScripts::
	.byte 0

DiggletCave1F_1::
lock     
faceplayer     
msgbox DiggletCave1F_Text_1, MSGBOX_DEFAULT
release     
end

DiggletCave1F_Text_1:
.string "I went inside ROCK TUNNEL, but it's\n"
    .string "pitch-black and scary in there.\p"
    .string "If I could get a POKéMON to use\n"
    .string "FLASH and light it up…$"

DiggletCave1F_Frontera:: 
compare VAR_UNUSED_0x40F7, 55
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2   
playse SE_PIN
applymovement 1, DiggletCave1F_Frontera_Move1
applymovement OBJ_EVENT_ID_PLAYER, DiggletCave1F_Frontera_Move2
waitmovement 0
msgbox DiggletCave1F_Frontera_Text_1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, DiggletCave1F_Frontera_Move3
waitmovement 0
release     
end

DiggletCave1F_Frontera_2:: 
compare VAR_UNUSED_0x40F7, 55
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2   
playse SE_PIN
applymovement 1, DiggletCave1F_Frontera_Move1
applymovement OBJ_EVENT_ID_PLAYER, DiggletCave1F_Frontera_Move2
waitmovement 0
msgbox DiggletCave1F_Frontera_Text_1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, DiggletCave1F_Frontera_Move3.1
waitmovement 0
release     
end

DiggletCave1F_Frontera_Text_1:
.string "Ehh!\n"
	.string "Hold on!\l"
	.string "Right now the surroundings of PEWTER\l"
	.string "CITY are full of police due to what\l"
	.string "happened at MT.MOON! You better make\l"
	.string "sure they don't see you around those\l"
	.string "places!$"


DiggletCave1F_Frontera_Move1:
emote_exclamation_mark
face_right
step_end

DiggletCave1F_Frontera_Move2:
walk_in_place_left
step_end

DiggletCave1F_Frontera_Move3:
walk_slow_up
step_end

DiggletCave1F_Frontera_Move3.1:
walk_slow_left
step_end
