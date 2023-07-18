UndergroundPath_7F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, UndergroundPath_7F_OnFrame
	.byte 0

UndergroundPath_7F_OnFrame:
map_script_2 VAR_ROUTE105_STATE, 7, UndergroundPath_7F_Combates_Motoristas
	.2byte 0

UndergroundPath_7F_Combates_Motoristas::
lock
delay 10
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_1 MSGBOX_AUTOCLOSE
delay 5
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_2 MSGBOX_AUTOCLOSE
delay 5
playse SE_PIN
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_2
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, UndergroundPath_7F_Combates_Motoristas_Move_3
applymovement 2, UndergroundPath_7F_Combates_Motoristas_Move_3
applymovement 21, UndergroundPath_7F_Combates_Motoristas_Move_3
waitmovement 0x0
delay 10
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 21, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_9 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_ENCOUNTER_BOY
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_197, UndergroundPath_7F_Combates_Motoristas_Texto_12
delay 5
playse MUS_RG_ENCOUNTER_BOY
applymovement 21, UndergroundPath_7F_Combates_Motoristas_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_198, UndergroundPath_7F_Combates_Motoristas_Texto_14
delay 5
playse MUS_RG_ENCOUNTER_BOY
applymovement 2, UndergroundPath_7F_Combates_Motoristas_Move_6
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combates_Motoristas_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_199, UndergroundPath_7F_Combates_Motoristas_Texto_16
delay 5
playse MUS_RG_ENCOUNTER_BOY
applymovement 3, UndergroundPath_7F_Combates_Motoristas_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combates_Motoristas_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_200, UndergroundPath_7F_Combates_Motoristas_Texto_18
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_10
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combates_Motoristas_Move_1.1
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath_7F_Combates_Motoristas_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_21 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE105_STATE, 8
release
end

UndergroundPath_7F_Combates_Motoristas_Move_10:
lock_facing_direction
walk_down
unlock_facing_direction
step_end


UndergroundPath_7F_Combates_Motoristas_Move_9:
face_right
step_end

UndergroundPath_7F_Combates_Motoristas_Move_8:
walk_left
step_end

UndergroundPath_7F_Combates_Motoristas_Move_7:
face_left
step_end

UndergroundPath_7F_Combates_Motoristas_Move_6:
walk_right
step_end

UndergroundPath_7F_Combates_Motoristas_Move_5:
walk_slow_up
step_end

UndergroundPath_7F_Combates_Motoristas_Move_4:
walk_in_place_up
step_end

UndergroundPath_7F_Combates_Motoristas_Move_3:
emote_exclamation_mark
step_end

UndergroundPath_7F_Combates_Motoristas_Move_2:
emote_exclamation_mark
lock_facing_direction
walk_down
unlock_facing_direction
step_end

UndergroundPath_7F_Combates_Motoristas_Move_1.1:
face_down
step_end

UndergroundPath_7F_Combates_Motoristas_Move_1:
walk_up
step_end

UndergroundPath_7F_Combates_Motoristas_Texto_1:
.string "¡Jah! ¿Otro POLICÍA más? ¿Aún no\n"
	.string "habéis tenido suficiente? ¡No nos\l"
	.string "moveremos de aqu…!$"

UndergroundPath_7F_Combates_Motoristas_Texto_2:
.string "… …$"

UndergroundPath_7F_Combates_Motoristas_Texto_3:
.string "¡Es el ADMIN.JEFE {PLAYER}!$"

UndergroundPath_7F_Combates_Motoristas_Texto_4:
.string "No… no esperábamos verle por aquí.$"

UndergroundPath_7F_Combates_Motoristas_Texto_5:
.string "Escuche… los MOTORISTAS le respetamos\n"
	.string "mucho por lo que hizo al derrotar a\l"
	.string "LANCE. Pero hablando claro, las últimas\l"
	.string "decisiones que ha tomado el TEAM\l"
	.string "ROCKET respecto a KANTO son un asco.$"

UndergroundPath_7F_Combates_Motoristas_Texto_6:
.string "Se suponía que volveríamos a la KANTO\n"
	.string "pre-guerra, no a convertirla en la\l"
	.string "nueva potencia tecnológica.$"

UndergroundPath_7F_Combates_Motoristas_Texto_7:
.string "Le pido que se mantenga al margen, sé\n"
	.string "que no es decisión suya el cerrar la\l"
	.string "VÍA.$"

UndergroundPath_7F_Combates_Motoristas_Texto_8:
.string "¿Decides irte?$"

UndergroundPath_7F_Combates_Motoristas_Texto_9:
.string "… …$"

UndergroundPath_7F_Combates_Motoristas_Texto_10:
.string "Entonces… No nos queda más remedio que\n"
	.string "abatirle entre los 4, tal y como hemos\l"
	.string "hecho con el resto de POLICÍAS.$"

UndergroundPath_7F_Combates_Motoristas_Texto_11:
.string "¡En guardia!$"

UndergroundPath_7F_Combates_Motoristas_Texto_12:
.string "Era esperable…$"

UndergroundPath_7F_Combates_Motoristas_Texto_13:
.string "No vamos a tener contemplaciones, ¡es\n"
	.string "imposible sobrevivir a tantos WEEZING!$"

UndergroundPath_7F_Combates_Motoristas_Texto_14:
.string "Pse… creí que podría hacer algo más.$"

UndergroundPath_7F_Combates_Motoristas_Texto_15:
.string "Hace honor a su fama, pero ya va\n"
	.string "notando el cansancio, ¿no?$"

UndergroundPath_7F_Combates_Motoristas_Texto_16:
.string "Parece que no…$"

UndergroundPath_7F_Combates_Motoristas_Texto_17:
.string "Se acabó, lo siento ADMIN.JEFE. Debo\n"
	.string "rematarle e impedir que entre en los\l"
	.string "refugios de guerra, ¡no puedo fallar!$"

UndergroundPath_7F_Combates_Motoristas_Texto_18:
.string "¡Fallé!$"

UndergroundPath_7F_Combates_Motoristas_Texto_19:
.string "Maldición… Era de esperar que alguien\n"
	.string "que derrotó a las BESTIAS de JOHTO y a\l"
	.string "los 3 DRAGONITE pudiera con nosotros\l"
	.string "cuatro…$"

UndergroundPath_7F_Combates_Motoristas_Texto_20:
.string "Pero este lugar es un inmenso laberinto,\n"
	.string "sirvieron de refugio para toda KANTO,\l"
	.string "en los años de la guerra.$"

UndergroundPath_7F_Combates_Motoristas_Texto_21:
.string "¡Jamás podrás echarnos a todos si no\n"
	.string "conoces el lugar de antemano!$"

UndergroundPath_7F_Primer_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_19 MSGBOX_NPC
release
end

UndergroundPath_7F_Segundo_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Combates_Motoristas_Texto_21 MSGBOX_NPC
release
end

UndergroundPath_7F_Tercer_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Tercer_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Tercer_Motorista_Texto_1:
.string "Este lugar es un inmenso laberinto, que\n"
	.string "sirvió de refugio para toda KANTO,\l"
	.string "en los años de la guerra.$"

UndergroundPath_7F_Cuarto_Motorista::
lock
faceplayer
msgbox UndergroundPath_7F_Cuarto_Motorista_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Cuarto_Motorista_Texto_1:
.string "¿Te pondrás de nuestro lado, o solo\n"
	.string "cumplirás órdenes?$"


