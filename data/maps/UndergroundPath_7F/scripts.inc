UndergroundPath_7F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, UndergroundPath_7F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, UndergroundPath_7F_OnFrame
	.byte 0

UndergroundPath_7F_OnFrame:
map_script_2 VAR_ROUTE105_STATE, 7, UndergroundPath_7F_Combates_Motoristas
map_script_2 VAR_TEMP_0, 0, UndergroundPath_7F_Seteo_Metatiles
	.2byte 0

UndergroundPath_7F_Activacion_Zona_Sur::
compare VAR_ROUTE105_STATE, 10
goto_if_gt UndergroundPath_7F_Activacion_Zona_Sur_2
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_3 MSGBOX_AUTOCLOSE
release
end

UndergroundPath_7F_Activacion_Zona_Sur_2::
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_1 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
playse SE_ICE_CRACK
delay 20
playse SE_UNLOCK
setmetatile 35, 110, 0x29C, FALSE
setmetatile 35, 111, 0x29C, FALSE
setmetatile 36, 110, 0x289, FALSE
setmetatile 36, 111, 0x289, FALSE
setmetatile 37, 110, 0x29E, FALSE
setmetatile 37, 111, 0x29E, FALSE
special DrawWholeMapView
release
end

UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_3:
.string "(Parece que esta barrera puede\n"
	.string "desactivarse usando algún tipo de\l"
	.string "llave)$"

UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_1:
.string "Esta barrera puede desactivarse\n"
	.string "usando la LLAVE CABINA SUR.$"

UndergroundPath_7F_Activacion_Zona_Sur_2_Texto_2:
.string "¿Quieres desactivar la barrera?$"

UndergroundPath_7F_Motero_Llave::
lock
faceplayer
compare VAR_ROUTE105_STATE, 9
goto_if_gt UndergroundPath_7F_Motero_Llave_2
msgbox UndergroundPath_7F_Motero_Llave_Texto_1 MSGBOX_NPC
setvar VAR_ROUTE105_STATE, 10
release
end

UndergroundPath_7F_Motero_Llave_2::
msgbox UndergroundPath_7F_Motero_Llave_Texto_1 MSGBOX_NPC
release
end

UndergroundPath_7F_Cajas::
compare VAR_ROUTE105_STATE, 10
goto_if_eq UndergroundPath_7F_Cajas_2
release
end

UndergroundPath_7F_Cajas_2::
delay 10
msgbox UndergroundPath_7F_Cajas_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER UndergroundPath_7F_Combates_Motoristas_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Cajas_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Cajas_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox UndergroundPath_7F_Cajas_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_TEPIG, 15, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM106_POWER_UP_PUNCH
msgbox UndergroundPath_7F_Cajas_Texto_4 MSGBOX_DEFAULT
waitfanfare
delay 10
msgbox UndergroundPath_7F_Cajas_Texto_1 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM106_POWER_UP_PUNCH
msgbox UndergroundPath_7F_Cajas_Texto_5 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE105_STATE, 11
release
end

UndergroundPath_7F_Cajas_Texto_5:
.string "¡¡OBTUVISTE LA LLAVE CABINA SUR!!$"

UndergroundPath_7F_Cajas_Texto_4:
.string "¡¡OBTUVISTE LA MT106 PUÑO INCREMENTO!!$"

UndergroundPath_7F_Cajas_Texto_3:
.string "¡¡OBTUVISTE UN TEPIG AL Nv.15!!$"

UndergroundPath_7F_Cajas_Texto_2:
.string "(En esta CAJA quedan varios objetos\n"
	.string "valiosos).$"

UndergroundPath_7F_Cajas_Texto_1:
.string "... ...$"


UndergroundPath_7F_Motero_Llave_Texto_1:
.string "¿Ves esas cajas? Es lo que queda del\n"
	.string "antiguo mercado negro. Estas aún\l"
	.string "tenían varios objetos de valor en su\l"
	.string "interior, al noreste de aquí creo\l"
	.string "recordar que había otro mercado negro,\l"
	.string "pero me da un palo ir hasta allí para\l"
	.string "examinar las cajas...$"



UndergroundPath_7F_Seteo_Metatiles::
compare VAR_ROUTE105_STATE, 9
goto_if_eq UndergroundPath_7F_Seteo_Metatiles_2
compare VAR_ROUTE105_STATE, 10
goto_if_eq UndergroundPath_7F_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

UndergroundPath_7F_Seteo_Metatiles_2::
setmetatile 52, 70, 0x110, TRUE
setmetatile 53, 70, 0x110, TRUE
setmetatile 52, 69, 0x108, TRUE
setmetatile 53, 69, 0x108, TRUE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

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

UndergroundPath_7F_EventScript_Primer_Motero::
	trainerbattle_single TRAINER_TRAINER_201, UndergroundPath_7F_Text_Primer_MoteroIntro, UndergroundPath_7F_Text_Primer_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Primer_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Segundo_Motero::
	trainerbattle_single TRAINER_TRAINER_202, UndergroundPath_7F_Text_Segundo_MoteroIntro, UndergroundPath_7F_Text_Segundo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Segundo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Tercer_Motero::
	trainerbattle_single TRAINER_TRAINER_203, UndergroundPath_7F_Text_Tercer_MoteroIntro, UndergroundPath_7F_Text_Tercer_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Tercer_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Cuarto_Motero::
	trainerbattle_single TRAINER_TRAINER_204, UndergroundPath_7F_Text_Cuarto_MoteroIntro, UndergroundPath_7F_Text_Cuarto_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Cuarto_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Quinto_Motero::
	trainerbattle_single TRAINER_TRAINER_205, UndergroundPath_7F_Text_Quinto_MoteroIntro, UndergroundPath_7F_Text_Quinto_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Quinto_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Sexto_Motero::
	trainerbattle_single TRAINER_TRAINER_206, UndergroundPath_7F_Text_Sexto_MoteroIntro, UndergroundPath_7F_Text_Sexto_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Sexto_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Septimo_Motero::
	trainerbattle_single TRAINER_TRAINER_207, UndergroundPath_7F_Text_Septimo_MoteroIntro, UndergroundPath_7F_Text_Septimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Septimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Octavo_Motero::
	trainerbattle_single TRAINER_TRAINER_208, UndergroundPath_7F_Text_Octavo_MoteroIntro, UndergroundPath_7F_Text_Octavo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Octavo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Noveno_Motero::
	trainerbattle_single TRAINER_TRAINER_209, UndergroundPath_7F_Text_Noveno_MoteroIntro, UndergroundPath_7F_Text_Noveno_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Noveno_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Decimo_Motero::
	trainerbattle_single TRAINER_TRAINER_210, UndergroundPath_7F_Text_Decimo_MoteroIntro, UndergroundPath_7F_Text_Decimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Decimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Undecimo_Motero::
	trainerbattle_single TRAINER_TRAINER_211, UndergroundPath_7F_Text_Undecimo_MoteroIntro, UndergroundPath_7F_Text_Undecimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Undecimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end

UndergroundPath_7F_EventScript_Duodecimo_Motero::
	trainerbattle_single TRAINER_TRAINER_212, UndergroundPath_7F_Text_Duodecimo_MoteroIntro, UndergroundPath_7F_Text_Duodecimo_MoteroDefeated
	msgbox UndergroundPath_7F_Text_Duodecimo_MoteroPostBattle, MSGBOX_AUTOCLOSE
	end


UndergroundPath_7F_Combate_LtSurge::
lock
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_1
waitmovement 0x0
goto UndergroundPath_7F_Combate_LtSurge_2

UndergroundPath_7F_Combate_LtSurge_2::
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 15
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_2
waitmovement 0x0
delay 15
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_3 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_5.1 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_2
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_9 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_11 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_12 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
playmoncry SPECIES_ELECTRODE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_10
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_13 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
trainerbattle_no_intro TRAINER_ANDRA_1, UndergroundPath_7F_Combate_LtSurge_Texto_15
delay 15
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_16 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_1, UndergroundPath_7F_Combate_LtSurge_Texto_18
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_19 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_11
waitmovement 0x0
playse SE_ICE_CRACK
delay 20
playse SE_UNLOCK
setmetatile 52, 70, 0x110, TRUE
setmetatile 53, 70, 0x110, TRUE
setmetatile 52, 69, 0x108, TRUE
setmetatile 53, 69, 0x108, TRUE
special DrawWholeMapView
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Combate_LtSurge_Move_10
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_20 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_7
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_21 MSGBOX_AUTOCLOSE
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_12
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 15
delay 30
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_24 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_25 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_26 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_27 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
addobject 22
setvar VAR_ROUTE105_STATE, 9
release
end

UndergroundPath_7F_Combate_LtSurge_Move_12:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath_7F_Combate_LtSurge_Move_11:
lock_facing_direction
walk_up
unlock_facing_direction
step_end

UndergroundPath_7F_Combate_LtSurge_Move_10:
emote_exclamation_mark
step_end

UndergroundPath_7F_Combate_LtSurge_Move_9:
walk_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_8:
walk_in_place_up
step_end

UndergroundPath_7F_Combate_LtSurge_Move_7:
walk_in_place_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_6:
face_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_5:
walk_in_place_right
step_end

UndergroundPath_7F_Combate_LtSurge_Move_4:
face_right
step_end

UndergroundPath_7F_Combate_LtSurge_Move_3:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

UndergroundPath_7F_Combate_LtSurge_Move_2:
face_up
step_end

UndergroundPath_7F_Combate_LtSurge_Move_1:
walk_slow_left
face_up
step_end


UndergroundPath_7F_Combate_LtSurge_Texto_1:
.string "????: ¿De verdad crees estar en el\n"
	.string "bando correcto, {PLAYER}?$"

UndergroundPath_7F_Combate_LtSurge_Texto_2:
.string "LT.SURGE: Yo lo estoy, según mis propios\n"
	.string "términos. ¿Lo estás tú según los\l"
	.string "tuyos?$"

UndergroundPath_7F_Combate_LtSurge_Texto_3:
.string "¿Tanto te sorprende verme aquí?$"

UndergroundPath_7F_Combate_LtSurge_Texto_4:
.string "Si te digo la verdad, después de la\n"
	.string "caída de LANCE, todo en KANTO se\l"
	.string "volvió más aburrido. Incluso lamenté la\l"
	.string "compasión que mostró GIOVANNI, lejos\l"
	.string "de tomar represalias, jamás reclamó mi\l"
	.string "cese como LÍDER en CIUDAD CARMÍN.$"

UndergroundPath_7F_Combate_LtSurge_Texto_5:
.string "Honestamente, hubiera preferido acabar\n"
	.string "entre rejas a ser partícipe de la\l"
	.string "anodina etapa de transición en KANTO,\l"
	.string "esa vida no es para mí.$"

UndergroundPath_7F_Combate_LtSurge_Texto_5.1:
	.string "Después de todo, el guerrero vive para\n"
	.string "la guerra, ¿no? Alguien como tú seguro\l"
	.string "que lo entiende.$"

UndergroundPath_7F_Combate_LtSurge_Texto_6:
.string "Por suerte…el propósito de estos\n"
	.string "MOTORISTAS volvió a prender esa chispa\l"
	.string "bélica que siempre tuve.$"

UndergroundPath_7F_Combate_LtSurge_Texto_7:
.string "… …$"

UndergroundPath_7F_Combate_LtSurge_Texto_8:
.string "He de admitir que los habitantes de\n"
	.string "KANTO son aguerridos y tenaces,\l"
	.string "construir semejante red subterránea…\l"
	.string "aquí debió refugiarse media KANTO\l"
	.string "durante la guerra. Puedes imaginarte lo\l"
	.string "que hubiera ocurrido de haber contado\l"
	.string "con esta información hace unos años.$"

UndergroundPath_7F_Combate_LtSurge_Texto_9:
.string "Pero los tiempos han cambiado, ahora\n"
	.string "soy yo el que defiende este lugar, y el\l"
	.string "supuesto -salvador- de KANTO, el que\l"
	.string "pretende acabar con él. Qué ironía,\l"
	.string "¿no?$"

UndergroundPath_7F_Combate_LtSurge_Texto_10:
.string "… …$"

UndergroundPath_7F_Combate_LtSurge_Texto_11:
.string "Jah, ¿derrotarme fácilmente?$"

UndergroundPath_7F_Combate_LtSurge_Texto_12:
.string "No estamos en un combate homologado,\n"
	.string "CAMPEÓN… esto…$"

UndergroundPath_7F_Combate_LtSurge_Texto_13:
.string "(LT.SURGE soltó numerosos POKÉMON\n"
	.string "explosivos)$"

UndergroundPath_7F_Combate_LtSurge_Texto_14:
.string "¡Es una guerra de guerrillas!$"

UndergroundPath_7F_Combate_LtSurge_Texto_15:
.string "…$"

UndergroundPath_7F_Combate_LtSurge_Texto_16:
.string "¿Qué te ha parecido esa pequeña\n"
	.string "escaramuza? Ahora…$"

UndergroundPath_7F_Combate_LtSurge_Texto_17:
.string "¡Empieza la guerra de verdad!$"

UndergroundPath_7F_Combate_LtSurge_Texto_18:
.string "Perdí la batalla y… ¿la guerra?$"

UndergroundPath_7F_Combate_LtSurge_Texto_19:
.string "Grrrr… parece que te has vuelto aún\n"
	.string "mejor ENTRENADOR, no me dejas\l"
	.string "elección.$"

UndergroundPath_7F_Combate_LtSurge_Texto_20:
.string "Por algo me han contratado, {PLAYER}.\n"
	.string "Podrás ganarme en un combate POKÉMON,\l"
	.string "pero aquí dentro estoy en mi hábitat.\l"
	.string "Sin la llave, jamás podrás entrar.$"

UndergroundPath_7F_Combate_LtSurge_Texto_21:
.string "Ahora, tendrás que disculparme,\n"
	.string "debemos seguir trazando el plan de\l"
	.string "acción. Mientras, puedes seguir\l"
	.string "deambulando por los refugios si así lo\l"
	.string "deseas.$"

UndergroundPath_7F_Combate_LtSurge_Texto_22:
.string "ANDRA: ¿¡{PLAYER}!? El POLICÍA de\n"
	.string "PUEBLO LAVANDA acaba de contarme\l"
	.string "todo.$"

UndergroundPath_7F_Combate_LtSurge_Texto_23:
.string "… …$"

UndergroundPath_7F_Combate_LtSurge_Texto_24:
.string "¿De verdad estás ya dentro?$"

UndergroundPath_7F_Combate_LtSurge_Texto_25:
.string "… …$"

UndergroundPath_7F_Combate_LtSurge_Texto_26:
.string "Ese SURGE… Escucha, {PLAYER}. Debe\n"
	.string "haber alguna LLAVE, puede que alguno\l"
	.string "de los MOTORISTAS tenga una… o sepa\l"
	.string "algo. Si fuera tú, hablaría con todos e\l"
	.string "intentaría sacarles algo.$"

UndergroundPath_7F_Combate_LtSurge_Texto_27:
.string "Sea como sea, sigue resistiendo. Yo\n"
	.string "llegaré pronto, y llegaremos al fondo\l"
	.string "de todo este asunto.$"



