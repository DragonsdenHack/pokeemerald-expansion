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
playfanfare MUS_RG_OBTAIN_KEY_ITEM
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
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

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
compare VAR_ROUTE105_STATE, 11
goto_if_eq UndergroundPath_7F_Seteo_Metatiles_2
compare VAR_ROUTE105_STATE, 12
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
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

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
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

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
trainerbattle_no_intro TRAINER_TRAINER_216, UndergroundPath_7F_Combate_LtSurge_Texto_15
delay 15
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_16 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 15, UndergroundPath_7F_Combate_LtSurge_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_196, UndergroundPath_7F_Combate_LtSurge_Texto_18
msgbox UndergroundPath_7F_Combate_LtSurge_Texto_18.1 MSGBOX_AUTOCLOSE
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
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

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
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

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

UndergroundPath_7F_Combate_LtSurge_Texto_18.1:
.string "¿Cómo puede ser? Cuando mi fiel RAICHU\n"
	.string "reaccionó a esa nueva PIEDRA\l"
	.string "desarrollada por vosotros, creí que al\l"
	.string "fin podría hacerte caer. Pero ni eso ni\l"
	.string "mis explosivos han sido suficiente.$"

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
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Combate_LtSurge_Texto_24:
.string "¿De verdad estás ya dentro?$"

UndergroundPath_7F_Combate_LtSurge_Texto_25:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

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

UndergroundPath_7F_Escena_Final::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_3
applymovement 16, UndergroundPath_7F_Escena_Final_Move_3
applymovement 23, UndergroundPath_7F_Escena_Final_Move_2
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Escena_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
applymovement 23, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_7
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 16, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_9 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_65 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 23, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_66 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_10
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_67 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_68 MSGBOX_AUTOCLOSE
delay 20
msgbox UndergroundPath_7F_Escena_Final_Texto_69 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_5
applymovement 16, UndergroundPath_7F_Escena_Final_Move_11
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_70 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_71 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_13
applymovement 17, UndergroundPath_7F_Escena_Final_Move_14
applymovement 23, UndergroundPath_7F_Escena_Final_Move_12
applymovement 16, UndergroundPath_7F_Escena_Final_Move_12
waitmovement 0x0
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_11 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_72 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_14
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_73 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 17, UndergroundPath_7F_Escena_Final_Move_16
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_17
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_74 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_3
waitmovement 0x0
applymovement 23, UndergroundPath_7F_Escena_Final_Move_18
applymovement 16, UndergroundPath_7F_Escena_Final_Move_18
waitmovement 0x0
applymovement 23, UndergroundPath_7F_Escena_Final_Move_20
applymovement 16, UndergroundPath_7F_Escena_Final_Move_19
waitmovement 0x0
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_75 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 16, UndergroundPath_7F_Escena_Final_Move_20
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_18 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_195, UndergroundPath_7F_Escena_Final_Texto_19
msgbox UndergroundPath_7F_Escena_Final_Texto_19.1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_6
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_21 MSGBOX_AUTOCLOSE
playse 603
applymovement 17, UndergroundPath_7F_Escena_Final_Move_15
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_22 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_194, UndergroundPath_7F_Escena_Final_Texto_23
msgbox UndergroundPath_7F_Escena_Final_Texto_24 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_25 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 23, UndergroundPath_7F_Escena_Final_Move_20
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_26 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_8
applymovement 16, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
applymovement 17, UndergroundPath_7F_Escena_Final_Move_14
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_14
applymovement 23, UndergroundPath_7F_Escena_Final_Move_21
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_28 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_29 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_30 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_22
applymovement 16, UndergroundPath_7F_Escena_Final_Move_22
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_22
applymovement 23, UndergroundPath_7F_Escena_Final_Move_22
msgbox UndergroundPath_7F_Escena_Final_Texto_31 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 24
applymovement 24, UndergroundPath_7F_Escena_Final_Move_23
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_33 MSGBOX_AUTOCLOSE
applymovement 16, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_34 MSGBOX_AUTOCLOSE
msgbox UndergroundPath_7F_Escena_Final_Texto_35 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_36 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_38 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_39 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_8
applymovement 16, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
applymovement 24, UndergroundPath_7F_Escena_Final_Move_24
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_40 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_25
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_41 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox UndergroundPath_7F_Escena_Final_Texto_43 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_26
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_44 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_45 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
delay 15
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_46 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_25
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_47 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_48 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_24
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_49 MSGBOX_AUTOCLOSE
delay 10
msgbox UndergroundPath_7F_Escena_Final_Texto_49.1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 17, UndergroundPath_7F_Escena_Final_Move_8
applymovement 16, UndergroundPath_7F_Escena_Final_Move_8
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_49.2 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_50 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_51 MSGBOX_AUTOCLOSE
applymovement 17, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_52 MSGBOX_AUTOCLOSE
applymovement 16, UndergroundPath_7F_Escena_Final_Move_4
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_53 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_14
applymovement 16, UndergroundPath_7F_Escena_Final_Move_27
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_54 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_841
fadescreen 1
removeobject 1
removeobject 2
removeobject 3
removeobject 4
removeobject 7
removeobject 9
removeobject 11
removeobject 12
removeobject 14
removeobject 19
removeobject 20
removeobject 21
removeobject 22
removeobject 16
removeobject 17
delay 20
fadescreen 0
delay 10
applymovement 23, UndergroundPath_7F_Escena_Final_Move_28
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_55 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_9
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_56 MSGBOX_AUTOCLOSE
applymovement 23, UndergroundPath_7F_Escena_Final_Move_29
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_57 MSGBOX_AUTOCLOSE
removeobject 23
applymovement 24, UndergroundPath_7F_Escena_Final_Move_30
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_58 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_59 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_6
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_60 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_31
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_61 MSGBOX_AUTOCLOSE
delay 20
applymovement 24, UndergroundPath_7F_Escena_Final_Move_5
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_62 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_1
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_63 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_3
waitmovement 0x0
msgbox UndergroundPath_7F_Escena_Final_Texto_64 MSGBOX_AUTOCLOSE
applymovement 24, UndergroundPath_7F_Escena_Final_Move_29
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_2
setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_2
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 22
removeobject 24
removeobject 15
setvar VAR_ROUTE105_STATE, 13
release
end

UndergroundPath_7F_Escena_Final_Move_31:
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_30:
walk_right
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_29:
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_28:
walk_down
walk_down
walk_left
step_end

UndergroundPath_7F_Escena_Final_Move_27:
walk_down
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_26:
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_24:
walk_slow_right
step_end

UndergroundPath_7F_Escena_Final_Move_25:
walk_slow_left
step_end

UndergroundPath_7F_Escena_Final_Move_23:
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_22:
emote_exclamation_mark
face_down
step_end

UndergroundPath_7F_Escena_Final_Move_21:
walk_up
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_20:
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_19:
walk_left
face_up
step_end

UndergroundPath_7F_Escena_Final_Move_18:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath_7F_Escena_Final_Move_17:
walk_right
step_end

UndergroundPath_7F_Escena_Final_Move_16:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

UndergroundPath_7F_Escena_Final_Move_15:
walk_in_place_right
step_end

UndergroundPath_7F_Escena_Final_Move_14:
face_right
step_end

UndergroundPath_7F_Escena_Final_Move_13:
walk_slow_up
walk_slow_up
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_down
walk_down
step_end


UndergroundPath_7F_Escena_Final_Move_11:
walk_right
walk_down
walk_down
step_end

UndergroundPath_7F_Escena_Final_Move_10:
walk_left
step_end

UndergroundPath_7F_Escena_Final_Move_9:
walk_in_place_left
step_end

UndergroundPath_7F_Escena_Final_Move_8:
emote_exclamation_mark
step_end

UndergroundPath_7F_Escena_Final_Move_7:
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_up
step_end

UndergroundPath_7F_Escena_Final_Move_6:
face_left
step_end

UndergroundPath_7F_Escena_Final_Move_5:
face_up
step_end

UndergroundPath_7F_Escena_Final_Move_4:
walk_in_place_down
step_end

UndergroundPath_7F_Escena_Final_Move_3:
face_down
step_end

UndergroundPath_7F_Escena_Final_Move_2:
emote_exclamation_mark
delay_8
face_down
step_end

UndergroundPath_7F_Escena_Final_Move_1:
walk_in_place_up
step_end

UndergroundPath_7F_Escena_Final_Texto_1:
.string "LT.SURGE: ¿Cómo es posible?$"

UndergroundPath_7F_Escena_Final_Texto_2:
.string "Esos incompetentes, ya les ordené que\n"
	.string "se deshicieran de todas las llaves.\l"
	.string "Errores como estos son los que\l"
	.string "declinan la balanza.$"

UndergroundPath_7F_Escena_Final_Texto_3:
.string "Pero no esta vez, puede que hayas\n"
	.string "podido conmigo y mis explosivos, o con\l"
	.string "esos 3 infelices, ¡pero no con 2 más\l"
	.string "como y…!$"

UndergroundPath_7F_Escena_Final_Texto_4:
.string "????: ¡Ya basta, SURGE! No podemos\n"
	.string "ocultarlo más, que pase.$"

UndergroundPath_7F_Escena_Final_Texto_5:
.string "LT.SURGE: Jah, la pregunta es, ¿qué\n"
	.string "harás ahora, {PLAYER}?$"

UndergroundPath_7F_Escena_Final_Texto_6:
.string "PETREL: Así es, {PLAYER}. KOGA y yo\n"
	.string "estamos al mando de esta rebelión.$"

UndergroundPath_7F_Escena_Final_Texto_7:
.string "KOGA: Siempre hemos sido fieles al TEAM\n"
	.string "ROCKET, {PLAYER}. Pero no podemos\l"
	.string "permanecer de brazos cruzados ante\l"
	.string "esta situación. Las cosas están\l"
	.string "cambiando demasiado rápido en nuestra\l"
	.string "región.$"

UndergroundPath_7F_Escena_Final_Texto_8:
.string "PETREL: No soy ADMIN.JEFE para saber\n"
	.string "todo lo que habéis estado hablando en\l"
	.string "esas reuniones de TRIGAL. Pero en el\l"
	.string "lapso de un año, KANTO se ha convertido\l"
	.string "en un solar: TORRE POKÉMON demolida,\l"
	.string "SILPH cerrada, ZONA SAFARI cerrada, y\l"
	.string "ahora, las VÍAS SUBTERRÁNEAS cerradas\l"
	.string "también.$"

UndergroundPath_7F_Escena_Final_Texto_9:
.string "KOGA: Todo el que venga de fuera\n"
	.string "pensará que esta es una región vacía,\l"
	.string "y sin embargo, estamos en plena etapa\l"
	.string "de apertura al mundo.$"

UndergroundPath_7F_Escena_Final_Texto_10:
.string "LT.SURGE: Comercio, KOGA, apertura\n"
	.string "comercial. Ya os lo dije, KANTO ahora\l"
	.string "servirá para hacer negocios con otras\l"
	.string "regiones. ¡Olvidaos de sus lugares\l"
	.string "icónicos! ¡O desaparecerán o no podrán\l"
	.string "visitarse!$"

UndergroundPath_7F_Escena_Final_Texto_65:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Escena_Final_Texto_66:
.string "LT.SURGE: ¿Hablar a solas con PETREL?\n"
	.string "¿¡Estás bromeando!?$"

UndergroundPath_7F_Escena_Final_Texto_67:
.string "¡Jah! ¿Qué te has creído chico? Las\n"
	.string "condiciones aquí las ponemos\l"
	.string "nosotros, no vas a volver a campar a\l"
	.string "tus anch…$"

UndergroundPath_7F_Escena_Final_Texto_68:
.string "PETREL: ¡SURGE!$"

UndergroundPath_7F_Escena_Final_Texto_69:
.string "Está bien, {PLAYER} ahora mismo está\n"
	.string "confuso. Ambos somos miembros del TEAM\l"
	.string "ROCKET y merece una explicación en\l"
	.string "privado.$"

UndergroundPath_7F_Escena_Final_Texto_70:
	.string "KOGA: No intentará nada, {PLAYER} ha\n"
	.string "demostrado ser un hombre de palabra.\l"
	.string "SURGE y yo saldremos, tomaos el tiempo\l"
	.string "que consideréis.$"

UndergroundPath_7F_Escena_Final_Texto_71:
	.string "LT.SURGE: …$"

UndergroundPath_7F_Escena_Final_Texto_11:
.string "PETREL: Escucha, {PLAYER}. Que KANTO\n"
	.string "esté vacía o no, eso no es lo\l"
	.string "verdaderamente importante, he sido\l"
	.string "testigo de la tendencia que lleva\l"
	.string "nuestra organización desde que\l"
	.string "derrotaras a LANCE.$"

UndergroundPath_7F_Escena_Final_Texto_72:
	.string "El TEAM ROCKET se ha masificado. Ahora\n"
	.string "tenemos sucursales en varias regiones,\l"
	.string "incontables bases secretas, nuevos\l"
	.string "contactos… Pero…$"

UndergroundPath_7F_Escena_Final_Texto_12:
.string "Temo por el hecho de que esta\n"
	.string "masificación nos haga abandonar\l"
	.string "nuestros ideales, y olvidar de dónde\l"
	.string "venimos. La forma en la que se trató el\l"
	.string "tema de los MOTORISTAS, quienes nos\l"
	.string "apoyaron cuando peor estábamos, me\l"
	.string "hizo replantearme muchas cosas.$"

UndergroundPath_7F_Escena_Final_Texto_13:
.string "Es cierto que GIOVANNI tiene mil cosas\n"
	.string "en la cabeza, y no le dio la importancia\l"
	.string "que en otra situación hubiera tenido…$"

UndergroundPath_7F_Escena_Final_Texto_14:
.string "PETREL: Y para eso estamos nosotros,\n"
	.string "{PLAYER}. Aguantando aquí, haremos\l"
	.string "que nos escuche, los MOTORISTAS\l"
	.string "merecen algo mejor después de sus años\l"
	.string "de lealtad al TEAM ROCKET.$"

UndergroundPath_7F_Escena_Final_Texto_73:
	.string "Es su identidad la que está en juego, no\n"
	.string "solo su futuro. Parte de KANTO son\l"
	.string "ellos también.$"

UndergroundPath_7F_Escena_Final_Texto_15:
.string "Tú nos entiendes, ¿verdad?\n"
	.string "¿{PLAYER}?$"

UndergroundPath_7F_Escena_Final_Texto_16:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

UndergroundPath_7F_Escena_Final_Texto_17:
.string "Ya veo. Quieres que primero nos\n"
	.string "entreguemos y pidamos clemencia a\l"
	.string "GIOVANNI. Sabes que eso no es posible.$"

UndergroundPath_7F_Escena_Final_Texto_74:
	.string "Lo siento {PLAYER}, pero no nos dejas\n"
	.string "elección. Nos obligas a hablar en un\l"
	.string "lenguaje que aquí todos podemos\l"
	.string "entender.$"

UndergroundPath_7F_Escena_Final_Texto_75:
	.string "LT.SURGE: ¡El lenguaje de la guerra!$"

UndergroundPath_7F_Escena_Final_Texto_18:
.string "KOGA: Me temo que… ¡no nos queda otra \n"
	.string "que volver a luchar por recuperar\l"
	.string "la vieja KANTO!$"

UndergroundPath_7F_Escena_Final_Texto_19:
.string "¡Mantente fiel a lo que crees!$"

UndergroundPath_7F_Escena_Final_Texto_19.1:
.string "KOGA: Tu trayectoria es\n"
	.string "inconmensurable {PLAYER}. Fue un\l"
	.string "lujo tenerte como aliado pero no esta\l"
	.string "vez. No dejaremos el destino de KANTO\l"
	.string "al azar.$"

UndergroundPath_7F_Escena_Final_Texto_20:
.string "PETREL: Lo siento, {PLAYER}. En este\n"
	.string "caso, el fin está por encima de todo. Si\l"
	.string "debo derrotarte aprovechando tu\l"
	.string "combate con KOGA, lo haré.$"

UndergroundPath_7F_Escena_Final_Texto_21:
.string "Tú no lo entenderías, hemos visto y\n"
	.string "sufrido demasiado en esta región, y no\l"
	.string "dejaré que otros interfieran en algo\l"
	.string "que es nuestro.$"

UndergroundPath_7F_Escena_Final_Texto_22:
.string "¡Lo haremos a nuestro modo!$"

UndergroundPath_7F_Escena_Final_Texto_23:
.string "WEEZING… defendiste el honor de los\n"
	.string "tuyos…$"

UndergroundPath_7F_Escena_Final_Texto_24:
.string "PETREL: Ya veo, tu habilidad en combate\n"
	.string "no tiene par.$"

UndergroundPath_7F_Escena_Final_Texto_25:
.string "Supongo que, después de todo, jamás\n"
	.string "ganamos la guerra. La KANTO que aún\l"
	.string "visionamos ya no existe, y no lo hará\l"
	.string "más.$"

UndergroundPath_7F_Escena_Final_Texto_26:
.string "LT.SURGE: ¡Esto aún no ha acabado!$"

UndergroundPath_7F_Escena_Final_Texto_27:
.string "¡Por eso perdisteis! ¡No sabéis llevar al\n"
	.string "enemigo hasta el límite, los POKÉMON de\l"
	.string "{PLAYER} están cerca del colapso, ¿y\l"
	.string "váis a dejarle ir ahora?$"

UndergroundPath_7F_Escena_Final_Texto_28:
.string "KOGA: SURGE, es suficien…$"

UndergroundPath_7F_Escena_Final_Texto_29:
.string "LT.SURGE: ¡No! ¡Ahora es la ocasión de\n"
	.string "acabar con el enemigo! ¡Para eso estoy\l"
	.string "yo aquí!$"

UndergroundPath_7F_Escena_Final_Texto_30:
.string "¡RAICHU! ¡TRUEN…!$"

UndergroundPath_7F_Escena_Final_Texto_31:
.string "????: ¡Se acabó!$"

UndergroundPath_7F_Escena_Final_Texto_32:
.string "PETREL: A…ANDRA.$"

UndergroundPath_7F_Escena_Final_Texto_33:
.string "ANDRA: Ya veo… Vosotros…$"

UndergroundPath_7F_Escena_Final_Texto_34:
.string "KOGA: No hay vuelta atrás, asumiremos\n"
	.string "nuestras acciones y…$"

UndergroundPath_7F_Escena_Final_Texto_35:
.string "ANDRA: Esperad.$"

UndergroundPath_7F_Escena_Final_Texto_36:
.string "No provengo de KANTO como vosotros,\n"
	.string "pero respeto las costumbres y\l"
	.string "tradiciones de aquellos que estuvieron\l"
	.string "antes que yo.$"

UndergroundPath_7F_Escena_Final_Texto_37:
.string "Tengo una idea, pero debemos actuar\n"
	.string "rápido.$"

UndergroundPath_7F_Escena_Final_Texto_38:
.string "PETREL: Te escuchamos, ANDRA.$"

UndergroundPath_7F_Escena_Final_Texto_39:
.string "ANDRA: Usaré todo mi poder e influencia\n"
	.string "en el TEAM ROCKET para convencer a\l"
	.string "GIOVANNI de que ceda ZONA SAFARI a los\l"
	.string "MOTORISTAS.$"

UndergroundPath_7F_Escena_Final_Texto_40:
.string "Allí podrán instalarse tal y como lo\n"
	.string "hacían aquí, además de volver a\l"
	.string "desarrollar un mercado negro, puesto\l"
	.string "que ZONA SAFARI permanecerá cerrada\l"
	.string "para el gran público.$"

UndergroundPath_7F_Escena_Final_Texto_41:
.string "El lugar está en CIUDAD FUCSIA, al lado\n"
	.string "del CAMINO BICIS, y es un paraíso que\l"
	.string "quedará desaprovechado.$"

UndergroundPath_7F_Escena_Final_Texto_42:
.string "¿Qué decís?$"

UndergroundPath_7F_Escena_Final_Texto_43:
.string "KOGA: Eso… eso sería…$"

UndergroundPath_7F_Escena_Final_Texto_44:
.string "PETREL: Sería un sueño para ellos, para\n"
	.string "nosotros. ¡Aceptaríamos sin duda!$"

UndergroundPath_7F_Escena_Final_Texto_45:
.string "ANDRA: ¿{PLAYER}?$"

UndergroundPath_7F_Escena_Final_Texto_46:
.string "No se hable más, tenéis mi palabra.$"

UndergroundPath_7F_Escena_Final_Texto_47:
.string "Pero ahora debemos actuar con rapidez.\n"
	.string "Por suerte la rebelión lleva poco\l"
	.string "tiempo, y aún no habéis hecho el\l"
	.string "suficiente ruido como para atraer la\l"
	.string "atención de GIOVANNI.$"

UndergroundPath_7F_Escena_Final_Texto_48:
.string "LT.SURGE: Por poco tiempo, si ven que\n"
	.string "{PLAYER} tarda más en regresar,\l"
	.string "llamarán al PRESIDENTE de SILPH, y de\l"
	.string "ahí se extenderá la cadena a GIOVANNI.$"

UndergroundPath_7F_Escena_Final_Texto_49:
.string "ANDRA: A lo que voy, es que GIOVANNI\n"
	.string "aún no es consciente de lo que habéis\l"
	.string "hecho. Estáis a tiempo de rectificar, y\l"
	.string "convencer a todos los MOTORISTAS.$"

UndergroundPath_7F_Escena_Final_Texto_49.1:
.string "Además, él confía en vosotros. ¿Sabes\n"
	.string "lo que dijo en TRIGAL, KOGA? Que tú\l"
	.string "ibas a ocupar la plaza vacante de\l"
	.string "AGATHA en el ALTO MANDO.$"

UndergroundPath_7F_Escena_Final_Texto_49.2:
.string "KOGA: Oh...$"

UndergroundPath_7F_Escena_Final_Texto_50:
.string "Ya sabéis que contáis con la palabra de\n"
	.string "{PLAYER} y la mía propia, de\l"
	.string "convencer a GIOVANNI para que os ceda\l"
	.string "la ZONA SAFARI.$"

UndergroundPath_7F_Escena_Final_Texto_51:
.string "Junto con ATLAS, somos los ROCKET de\n"
	.string "mayor rango, ¡nos hará caso!$"

UndergroundPath_7F_Escena_Final_Texto_52:
.string "PETREL: ¡No se hable más! Confiamos en\n"
	.string "vuestra palabra.$"

UndergroundPath_7F_Escena_Final_Texto_53:
.string "¡KOGA! ¡En marcha!$"

UndergroundPath_7F_Escena_Final_Texto_54:
.string "KOGA: Muchacha, por gente como tú, esta\n"
	.string "región y el TEAM ROCKET tienen futuro.\l"
	.string "Definitivamente, los grandes pueden\l"
	.string "venir de cualquier lugar, incluso de una\l"
	.string "pequeña isla.$"

UndergroundPath_7F_Escena_Final_Texto_55:
.string "LT.SURGE: ¡Chica insolente! Me has\n"
	.string "aguado la fiesta justo cuando iba a\l"
	.string "rematar a {PLAYER}.$"

UndergroundPath_7F_Escena_Final_Texto_56:
.string "¡Debí haberme encargado de ti ese día\n"
	.string "en la CENTRAL ENERGÍA, cuando apenas\l"
	.string "te quedaban fuerzas, en lugar de ir a\l"
	.string "por {PLAYER}!$"

UndergroundPath_7F_Escena_Final_Texto_57:
.string "ANDRA: ¡Jah! Le está bien empleado,\n"
	.string "ahora se va sin combatir porque sabe\l"
	.string "que en un 1 contra 1 no tiene opciones.$"

UndergroundPath_7F_Escena_Final_Texto_58:
.string "Por cierto, vi a FUJI en PUEBLO LAVANDA.\n"
	.string "Justo iban a abrir la TORRE RADIO, para\l"
	.string "estas alturas debería estarla ya.$"

UndergroundPath_7F_Escena_Final_Texto_59:
.string "El caso es que FUJI te estaba buscando,\n"
	.string "creo que tiene algo importante que\l"
	.string "decirte.$"

UndergroundPath_7F_Escena_Final_Texto_60:
.string "Yo mientras iré a hablar con GIOVANNI,\n"
	.string "no te preocupes, seguro que accede.$"

UndergroundPath_7F_Escena_Final_Texto_61:
.string "Ya nos veremos en TORRE RADIO LAVANDA.$"

UndergroundPath_7F_Escena_Final_Texto_62:
.string "Si te digo la verdad, siento algo de\n"
	.string "vértigo por todo lo que ese lugar tenga\l"
	.string "en sus pisos superiores.$"

UndergroundPath_7F_Escena_Final_Texto_63:
.string "Pero... no es momento de echarse atrás,\n"
	.string "¿verdad? Hemos llegado demasiado\l"
	.string "lejos y visto mucho, es solo otro\l"
	.string "maldito evento más.$"

UndergroundPath_7F_Escena_Final_Texto_64:
.string "¡Todo saldrá bien!$"



