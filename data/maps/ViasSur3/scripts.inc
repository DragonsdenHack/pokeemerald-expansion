ViasSur3_MapScripts::
	.byte 0

ViasSur3_Evento_Pegaso_Abajo::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasSur3_Evento_Pegaso_Move_1
waitmovement 0x0
goto ViasSur3_Evento_Pegaso


ViasSur3_Evento_Pegaso_Arriba::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, ViasSur3_Evento_Pegaso_Move_1.1
waitmovement 0x0
goto ViasSur3_Evento_Pegaso


ViasSur3_Evento_Pegaso::
delay 20
msgbox ViasSur3_Evento_Pegaso_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, ViasSur3_Evento_Pegaso_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, ViasSur3_Evento_Pegaso_Move_3
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_4
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_3 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, ViasSur3_Evento_Pegaso_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox ViasSur3_Evento_Pegaso_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox ViasSur3_Evento_Pegaso_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, ViasSur3_Evento_Pegaso_Move_6
waitmovement 0x0
special RemoveCameraObject
applymovement 1, ViasSur3_Evento_Pegaso_Move_7
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_8
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_9
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_7
waitmovement 0x0
msgbox ViasSur3_Evento_Pegaso_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, ViasSur3_Evento_Pegaso_Move_10
waitmovement 0x0
setflag FLAG_HIDE_RUSTURF_TUNNEL_PEEKO
removeobject 1
setvar VAR_PACIFIDLOG_TOWN_STATE, 3
release
end

ViasSur3_Evento_Pegaso_Move_10:
walk_left
walk_down
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

ViasSur3_Evento_Pegaso_Move_9:
walk_in_place_down
step_end

ViasSur3_Evento_Pegaso_Move_8:
face_down
step_end

ViasSur3_Evento_Pegaso_Move_7:
face_right
step_end

ViasSur3_Evento_Pegaso_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

ViasSur3_Evento_Pegaso_Move_5:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

ViasSur3_Evento_Pegaso_Move_4:
walk_in_place_left
step_end

ViasSur3_Evento_Pegaso_Move_3:
emote_exclamation_mark
walk_in_place_right
step_end

ViasSur3_Evento_Pegaso_Move_2:
walk_left
walk_down
walk_left
step_end

ViasSur3_Evento_Pegaso_Move_1.1:
walk_down
emote_exclamation_mark
walk_in_place_left
step_end

ViasSur3_Evento_Pegaso_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

ViasSur3_Evento_Pegaso_Texto_1:
.string "????: Está cerca, tú también lo notas.\n"
	.string "¿Verdad, mi fiel POKÉMON?$"

ViasSur3_Evento_Pegaso_Texto_2:
.string "PEGASO: ¡Oh, {PLAYER}! ¡Te las\n"
	.string "arreglas para estar en todos lados!$"

ViasSur3_Evento_Pegaso_Texto_3:
.string "¿Qué te parece este lugar?$"

ViasSur3_Evento_Pegaso_Texto_4:
.string "Aunque la naturaleza ha erosionado la\n"
	.string "mayor parte del terreno, aún quedan\l"
	.string "restos de lo que parece ser una\l"
	.string "antigua población.$"

ViasSur3_Evento_Pegaso_Texto_5:
.string "Tal vez más antigua que RUINAS ALFA,\n"
	.string "quién sabe. Conocemos tan poco acerca\l"
	.string "de nuestra propia región… y es normal.\l"
	.string "Ante la vastedad del tiempo, solo somos\l"
	.string "una simple gota en medio del mar.$"

ViasSur3_Evento_Pegaso_Texto_6:
.string "Hace semanas que mi THUNDURUS está\n"
	.string "alterado. Al parecer, reacciona ante\l"
	.string "una fuerte presencia, cuyo foco\l"
	.string "energético se encuentra por esta zona.$"

ViasSur3_Evento_Pegaso_Texto_7:
.string "He decidido venir aquí a investigar,\n"
	.string "ignoro si tal POKÉMON pertenece\l"
	.string "también al TIPO VOLADOR, pero su carga\l"
	.string "eléctrica es descomunal.$"

ViasSur3_Evento_Pegaso_Texto_8:
.string "Tengo que averiguarlo, como experto en\n"
	.string "aves, es todo un reto para mí. Aunque...\l"
	.string "tengo serias sospechas de lo que\l"
	.string "realmente es.$"

ViasSur3_Evento_Pegaso_Texto_9:
.string "Seguiré por mi cuenta, {PLAYER}. Mis\n"
	.string "POKÉMON están deseosos de\l"
	.string "enfrentarse a un oponente así, y no\l"
	.string "deseo aguarles la fiesta, en una región\l"
	.string "cada vez más predecible.$"

