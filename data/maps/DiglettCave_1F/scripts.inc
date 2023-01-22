DiglettCave_1F_MapScripts::
	.byte 0

DiggletCave1F_1::
lock     
faceplayer     
msgbox DiggletCave1F_Text_1, MSGBOX_DEFAULT
release     
end

DiggletCave1F_Text_1:
.string "Fui al TÚNEL ROCA, pero\n"
.string "está oscuro y me da miedo.\p"
.string "¡Si el DESTELLO de un POKéMON\n"
.string "pudiera alumbrarlo…!$"

DiggletCave1F_Frontera::    
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
.string "¡Hee!\n"
	.string "¡Espera!\l"
	.string "¡Ahora mismo los alrededores de\l"
	.string "CIUDAD PLATEADA están llenos de\l"
	.string "policías por lo ocurrido en el\l"
	.string "MT.MOON!\l"
	.string "¡Más te vale que no te vean por\l"
	.string "esos lugares!$"


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
