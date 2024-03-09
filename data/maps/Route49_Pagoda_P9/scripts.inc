Route49_Pagoda_P9_MapScripts::
	.byte 0


Route49_Pagoda_P9_Combate_Maestro::
lock
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P9_Combate_Maestro_Move_1
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Route49_Pagoda_P9_Combate_Maestro_Move_3
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_2
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_5
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_217, Route49_Pagoda_P9_Combate_Maestro_Texto_7
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_7
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_6
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route49_Pagoda_P9_Combate_Maestro_Move_8
waitmovement 0x0
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 12
release
end

Route49_Pagoda_P9_Combate_Maestro_Move_8:
walk_right
face_up
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_7:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_6:
walk_in_place_left
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_5:
face_up
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_4:
walk_left
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_3:
walk_right
walk_up
walk_right
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_2:
face_left
step_end

Route49_Pagoda_P9_Combate_Maestro_Move_1:
face_right
step_end

Route49_Pagoda_P9_Combate_Maestro_Texto_1:
.string "Debes ser {PLAYER}, ¿verdad?$"

Route49_Pagoda_P9_Combate_Maestro_Texto_2:
.string "El GRAN MAESTRO ya nos advirtió de tu\n"
	.string "llegada.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_3:
.string "La TORRE DUN es{PAUSE 25}…{PAUSE 25} como una cápsula del\n"
	.string "tiempo, ¿no crees? No importa todo lo\l"
	.string "que el mundo haya cambiado, esta\l"
	.string "pagoda conserva intacta la esencia de\l"
	.string "sus primeros días.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_4:
.string "Y por ello, ¿qué mayor honor puede haber\n"
	.string "que combatir aquí, tal y como lo hacían\l"
	.string "los gentiles maestros del pasado?$"

Route49_Pagoda_P9_Combate_Maestro_Texto_5:
.string "Tratar de igualar las cotas que una vez\n"
	.string "alcanzaron y, quién sabe, incluso\l"
	.string "rebasarlas, con nosotros como únicos\l"
	.string "testigos para recrear esa ficción.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_6:
.string "No solo este lugar{PAUSE 25}…{PAUSE 25} ¡mis POKÉMON son\n"
	.string "también similares a los de antaño!$"

Route49_Pagoda_P9_Combate_Maestro_Texto_7:
.string "Eres un maestro de lo viejo{PAUSE 25}…{PAUSE 25} y de lo\n"
	.string "nuevo.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_8:
.string "Está claro, desde EUSINE no vemos a dos\n"
	.string "jóvenes con un potencial así.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_9:
.string "Aún diría más, vuestro potencial es\n"
	.string "mayor, algo aún más meritorio, teniendo\l"
	.string "en cuenta vuestro entorno.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_10:
.string "Mi parte está hecha, aún te queda mucho\n"
	.string "para llegar hasta el final.$"

Route49_Pagoda_P9_Combate_Maestro_Texto_11:
.string "Después de todo, solo estás en el\n"
	.string "noveno piso de una pagoda perdida, al\l"
	.string "borde de un acantilado, ¿verdad?$"

Route49_Pagoda_P9_Dialogo_Maestro::
lock
faceplayer
msgbox Route49_Pagoda_P9_Combate_Maestro_Texto_3 MSGBOX_NPC
release
end
