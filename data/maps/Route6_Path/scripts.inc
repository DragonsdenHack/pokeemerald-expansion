Route6_Path_MapScripts::
	.byte 0

Route6Path_1::
end

Route6_Path_Frontera::
lock
playse SE_PIN
applymovement 1, Route6_Path_Frontera_move1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route6_Path_Frontera_move2
waitmovement 0x0
msgbox Route6_Path_Frontera_Text MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route6_Path_Frontera_move3
waitmovement 0x0
release
end

Route6_Path_Frontera_Text:
.string "¿Pero qué clase de broma es esta?\n"
	.string "A esta ciudad solo entra la élite\l"
	.string "de la región, desaparece ROCKET si\l"
	.string "no quieres que te expediente.$"

Route6_Path_Frontera_move1:
emote_exclamation_mark
step_end

Route6_Path_Frontera_move2:
face_right
step_end

Route6_Path_Frontera_move3:
walk_slow_down
step_end
