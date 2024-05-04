Route49_Pagoda_P11_MapScripts::
	.byte 0

Route49_Pagoda_P11_Combate_Maestro::
lock
delay 15
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P11_Combate_Maestro_Move_1
waitmovement 0x0
delay 15
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_219, Route49_Pagoda_P11_Combate_Maestro_Texto_7
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P11_Combate_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P11_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 14
release
end

Route49_Pagoda_P11_Combate_Maestro_Move_7:
walk_slow_right
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_6:
face_right
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_5:
walk_left
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_4:
walk_in_place_left
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_3:
delay_4
face_up
delay_4
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_2:
face_left
step_end

Route49_Pagoda_P11_Combate_Maestro_Move_1:
walk_slow_right
walk_slow_right
step_end

Route49_Pagoda_P11_Combate_Maestro_Texto_1:
.string "{PAUSE 15}…{PAUSE 15}…{PAUSE 15}$"

Route49_Pagoda_P11_Combate_Maestro_Texto_2:
.string "Oh{PAUSE 25}…{PAUSE 25} mis más sinceras disculpas. Estaba\n"
	.string "abstraído, meditando.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_3:
.string "Es una técnica muy común aquí. Con ella,\n"
	.string "elevamos nuestro grado de consciencia,\l"
	.string "así, nos conocemos mejor tanto a\l"
	.string "nosotros mismos como a nuestro\l"
	.string "entorno.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_4:
.string "Mientras no logres transformar lo\n"
	.string "inconsciente en consciente, lo\l"
	.string "inconsciente guiará tu vida y tú lo\l"
	.string "llamarás destino.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_5:
.string "Pero eso ya lo sabes, ¿no? Aunque sea\n"
	.string "de forma inconsciente, de lo contrario\l"
	.string "jamás hubieras llegado hasta aquí.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_6:
.string "La cuestión es, ¿hasta qué punto has\n"
	.string "desarrollado el grado de consciencia\l"
	.string "con tu equipo POKÉMON?$"

Route49_Pagoda_P11_Combate_Maestro_Texto_7:
.string "Oh{PAUSE 25}…{PAUSE 25} ya lo veo…$"

Route49_Pagoda_P11_Combate_Maestro_Texto_8:
.string "A pesar de tu corta edad, veo que has\n"
	.string "vivido ya intensas experiencias. Eso ha\l"
	.string "fortalecido el VÍNCULO con tus\l"
	.string "POKÉMON de un modo especial, distinto\l"
	.string "al que se podría alcanzar recluído\l"
	.string "aquí, pero igualmente efectivo.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_9:
.string "No hay duda, vuestra progresión sigue\n"
	.string "los pasos del DRAGÓN SAGRADO.$"

Route49_Pagoda_P11_Combate_Maestro_Texto_10:
.string "Solo espero que no os malogréis por el\n"
	.string "camino.$"



Route49_Pagoda_P11_Encuentro_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P11_Encuentro_Maestro_Texto_1 MSGBOX_NPC
release
end

Route49_Pagoda_P11_Encuentro_Maestro_Texto_1:
.string "Mientras no logres transformar lo\n"
	.string "inconsciente en consciente, lo\l"
	.string "inconsciente guiará tu vida y tú lo\l"
	.string "llamarás destino.$"
