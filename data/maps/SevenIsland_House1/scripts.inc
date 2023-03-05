SevenIsland_House1_MapScripts::
	.byte 0

SevenIslandHouse1_1::
end

SevenIsland_Secundaria_Anciana::
lock
faceplayer
msgbox SevenIsland_Secundaria_Anciana_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_ROUTE108_STATE, 3
goto_if_gt SevenIsland_Secundaria_Anciana_2
release
end

SevenIsland_Secundaria_Anciana_2::
delay 15
msgbox SevenIsland_Secundaria_Anciana_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, SevenIsland_Secundaria_Anciana_Move_1
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_2
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_3
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_4
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_3
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, SevenIsland_Secundaria_Anciana_Move_4
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_8 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SevenIsland_Secundaria_Anciana_Move_4
applymovement 1, SevenIsland_Secundaria_Anciana_Move_5
waitmovement 0x0
msgbox SevenIsland_Secundaria_Anciana_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SOOTOPOLIS_CITY_WALLACE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_ROUTE108_STATE, 5
release
end

SevenIsland_Secundaria_Anciana_Move_1:
emote_exclamation_mark
step_end

SevenIsland_Secundaria_Anciana_Move_2:
face_right
step_end

SevenIsland_Secundaria_Anciana_Move_3:
face_player
step_end

SevenIsland_Secundaria_Anciana_Move_4:
face_up
step_end

SevenIsland_Secundaria_Anciana_Move_5:
walk_slow_up
walk_slow_up
step_end

SevenIsland_Secundaria_Anciana_Texto_1:
.string "Ahora no lo aparento, pero cuando era\n"
	.string "más joven… Iba volando de aquí para\l"
	.string "allá, desafiando a los ENTRENADORES\l"
	.string "con los que me encontraba. Ahora, me\l"
	.string "conformo recordando recordando viejos\l"
	.string "tiempos y viendo combates.$"

SevenIsland_Secundaria_Anciana_Texto_2:
.string "… …$"

SevenIsland_Secundaria_Anciana_Texto_3:
.string "Así que ATLAS, debes de ser un gran\n"
	.string "ENTRENADOR para haber llamado su\l"
	.string "atención.$"

SevenIsland_Secundaria_Anciana_Texto_4:
.string "Hace tiempo, en ISLAS SETE, también\n"
	.string "había algunos GIMNASIOS, aunque\l"
	.string "acabaron cerrando por inactividad y\l"
	.string "falta de competencia, a pesar de que\l"
	.string "algunos llegaron a alcanzar muy buen\l"
	.string "nivel.$"

SevenIsland_Secundaria_Anciana_Texto_5:
.string "De todos ellos, me consta que el mío es\n"
	.string "el único que sigue en pie… oculto y\l"
	.string "desconocido para el 99% de los\l"
	.string "habitantes de SEVII.$"

SevenIsland_Secundaria_Anciana_Texto_6:
.string "¿Ves esas cajas? Detrás de ellas hay\n"
	.string "una sala contigua, ahí hay una baldosa\l"
	.string "que te teletransporta a la ubicación\l"
	.string "de mi GIMNASIO.$"

SevenIsland_Secundaria_Anciana_Texto_7:
.string "Lo cierto es que solo sirven de\n"
	.string "distracción, para realmente pasar al\l"
	.string "otro cuarto hay una trampilla secreta,\l"
	.string "justo debajo de esas cajas, ¿o crees\l"
	.string "que voy a estar recolocándolas cada\l"
	.string "vez que quiera entrar y salir?$"

SevenIsland_Secundaria_Anciana_Texto_8:
.string "Una vez entres a la habitación secreta,\n"
	.string "verás una baldosa escondida,\l"
	.string "ella te llevará a mi GIMNASIO.$"

SevenIsland_Secundaria_Anciana_Texto_9:
.string "Espero verte por ahí. Que ATLAS te haya\n"
	.string "enviado me ha devuelto el entusiasmo\l"
	.string "por el combate.$"

Isla_Setima_Activador_Entrada::
compare VAR_ROUTE108_STATE, 4
goto_if_gt Isla_Setima_Activador_Entrada_Pasa
release
end

Isla_Setima_Activador_Entrada_Pasa::
delay 15
msgbox Isla_Setima_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Setima_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_SEVEN_ISLAND_HOUSE1_CAJAS, 3, 2
release
end

Isla_Setima_Activador_Entrada_Texto_1:
.string "... ...$"

Isla_Setima_Activador_Entrada_Pasa_Text_YesNo:
.string "Hay una pequeña trampilla bajo las\n"
	.string "cajas. ¿Quieres pasar?$"



Isla_Setima_Activador_Entrada_Pasa_2::
delay 15
msgbox Isla_Setima_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Setima_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_SEVEN_ISLAND_HOUSE1, 4, 2
release
end
