DiglettCave_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, DiglettCave_1F_OnResume
	.byte 0

DiglettCave_1F_OnResume:
	call DiglettCave_1F_SetupEscapeWarp
	end

DiglettCave_1F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE2, 17, 12
	return

DiggletCave1F_1::
lock     
faceplayer     
msgbox DiggletCave1F_Text_1, MSGBOX_DEFAULT
release     
end

DiggletCave1F_Text_1:
	.string "Im FELSTUNNEL ist es stockdunkel und\n"
	.string "furchtbar gruselig! Wenn nur ein\l"
	.string "POKéMON mit einem BLITZ für Licht\l"
	.string "sorgen könnte…$"

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
.string "Ähm!\p"
	.string "Warte!\p"
	.string "Die Umgebung von MARMORIA CITY ist\n"
	.string "momentan voll von Polizisten wegen dem,\l"
	.string "was auf dem MONDBERG passiert ist! Du\l"
	.string "solltest besser darauf achten, dass sie\l"
	.string "dich nicht in der Gegend sehen!$"


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
