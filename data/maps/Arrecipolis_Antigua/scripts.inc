Arrecipolis_Antigua_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Arrecipolis_Antigua_OnFrame
	.byte 0

Arrecipolis_Antigua_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 247, Arrecipolis_Antigua_Andra
	.2byte 0

Arrecipolis_Antigua_Andra_Move_1:
emote_exclamation_mark
step_end

Arrecipolis_Antigua_Andra_Move_2:
face_up
delay_16
delay_8
face_left
delay_16
delay_8
face_down
step_end

Arrecipolis_Antigua_Andra_Move_3:
face_up
step_end

Arrecipolis_Antigua_Andra_Move_4:
face_right
step_end

Arrecipolis_Antigua_Andra_Move_5:
face_down
step_end

Arrecipolis_Antigua_Andra_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
step_end

Arrecipolis_Antigua_Andra_Move_7:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
step_end

Arrecipolis_Antigua_Andra_Move_8:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
step_end

Arrecipolis_Antigua_Andra_Move_8.3:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
step_end

Arrecipolis_Antigua_Andra_Move_8.4:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

Arrecipolis_Antigua_Andra_Move_8.2:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Arrecipolis_Antigua_Andra_Move_8.1:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_up
walk_fast_up
step_end

Arrecipolis_Antigua_Andra_Move_9:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

Arrecipolis_Antigua_Andra_Move_9.1:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

Arrecipolis_Antigua_Andra_Move_10:
walk_in_place_down
step_end

Arrecipolis_Antigua_Andra_Move_11:
lock_facing_direction
walk_fast_up
unlock_facing_direction
step_end

Arrecipolis_Antigua_Andra_Move_12:
walk_fast_down
step_end

Arrecipolis_Antigua_Andra_Move_13:
walk_in_place_left
step_end

Arrecipolis_Antigua_Andra_Move_14:
delay_16
delay_16
face_right
delay_16
delay_16
face_up
delay_16
delay_16
face_down
delay_16
delay_16
face_left
step_end


Arrecipolis_Antigua_Andra::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_6
waitmovement 0x0
special RemoveCameraObject
playse SE_PIN
applymovement 13, Arrecipolis_Antigua_Andra_Move_1
waitmovement 0x0
delay 10
playse SE_M_TRI_ATTACK2
applymovement 13, Arrecipolis_Antigua_Andra_Move_2
waitmovement 0x0
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, Arrecipolis_Antigua_Andra_Move_3
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, Arrecipolis_Antigua_Andra_Move_4
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_3 MSGBOX_AUTOCLOSE
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_TRI_ATTACK2
applymovement 13, Arrecipolis_Antigua_Andra_Move_5
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, Arrecipolis_Antigua_Andra_Move_7
applymovement 13, Arrecipolis_Antigua_Andra_Move_7
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_7
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_8
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	waitse
msgbox Arrecipolis_Antigua_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_8 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_11
addobject 8
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_9
waitmovement 0x0
special RemoveCameraObject
applymovement 18, Arrecipolis_Antigua_Andra_Move_10
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_9 MSGBOX_AUTOCLOSE
playmoncry SPECIES_KINGDRA, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Arrecipolis_Antigua_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_HYDRO_PUMP
waitse
delay 5
applymovement 8, Arrecipolis_Antigua_Andra_Move_11
waitmovement 0x0
playse SE_EFFECTIVE
waitse
playse SE_M_WHIRLPOOL
waitse
delay 5
applymovement 8, Arrecipolis_Antigua_Andra_Move_11
waitmovement 0x0
playse SE_SUPER_EFFECTIVE
waitse
delay 5
playmoncry SPECIES_KINGDRA, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
setflag FLAG_HOENN_11
removeobject 8
delay 15
applymovement 18, Arrecipolis_Antigua_Andra_Move_12
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_13 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_9.1
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	waitse
special SpawnCameraObject
removeobject 7
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_8.2
waitmovement 0x0
clearflag FLAG_HOENN_10
addobject 21
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_8.1
waitmovement 0x0
special RemoveCameraObject
msgbox Arrecipolis_Antigua_Andra_Texto_14 MSGBOX_AUTOCLOSE
applymovement 21, Arrecipolis_Antigua_Andra_Move_4
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 21, Arrecipolis_Antigua_Andra_Move_1
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 21, Arrecipolis_Antigua_Andra_Move_5
applymovement 14, Arrecipolis_Antigua_Andra_Move_13
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 21, Arrecipolis_Antigua_Andra_Move_14
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_17 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 21, Arrecipolis_Antigua_Andra_Move_13
waitmovement 0x0
msgbox Arrecipolis_Antigua_Andra_Texto_18 MSGBOX_AUTOCLOSE
addobject 20
clearflag FLAG_HOENN_5
playse SE_BALL_THROW
applymovement 20, Arrecipolis_Antigua_Andra_Move_15.1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_8.3
waitmovement 0x0
special RemoveCameraObject
playse SE_BALL_OPEN
setflag FLAG_HOENN_5
removeobject 20
clearflag FLAG_HOENN_6
addobject 17
playmoncry SPECIES_MILOTIC, CRY_MODE_ENCOUNTER
waitmoncry
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Arrecipolis_Antigua_Andra_Move_8.4
waitmovement 0x0
special RemoveCameraObject
msgbox Arrecipolis_Antigua_Andra_Texto_19 MSGBOX_AUTOCLOSE
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_WHIRLPOOL
applymovement 1, Arrecipolis_Antigua_Andra_Move_16
applymovement 17, Arrecipolis_Antigua_Andra_Move_17
waitmovement 0x0
waitse
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	waitse
playse SE_M_HYDRO_PUMP
applymovement 1, Arrecipolis_Antigua_Andra_Move_16.1
applymovement 17, Arrecipolis_Antigua_Andra_Move_17.1
waitmovement 0x0
waitse
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_21 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MILOTIC, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_WHIRLPOOL
applymovement 1, Arrecipolis_Antigua_Andra_Move_16
applymovement 17, Arrecipolis_Antigua_Andra_Move_17
waitmovement 0x0
waitse
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	waitse
playse SE_M_HYDRO_PUMP
applymovement 1, Arrecipolis_Antigua_Andra_Move_16.1
applymovement 17, Arrecipolis_Antigua_Andra_Move_17.1
waitmovement 0x0
waitse
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_21.1 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MILOTIC, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_ABSORB_2
waitse
playse SE_M_WHIRLPOOL
applymovement 1, Arrecipolis_Antigua_Andra_Move_16
applymovement 17, Arrecipolis_Antigua_Andra_Move_17
waitmovement 0x0
waitse
waitmoncry
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	waitse
playse SE_M_HYDRO_PUMP
applymovement 1, Arrecipolis_Antigua_Andra_Move_16.1
applymovement 17, Arrecipolis_Antigua_Andra_Move_17.1
waitmovement 0x0
waitse
delay 15
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_SNORE
waitse
delay 15
playse SE_M_ABSORB_2
waitse
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Arrecipolis_Antigua_Andra_Texto_23 MSGBOX_AUTOCLOSE
fadescreen 1
delay 200
fadescreen 0
msgbox Arrecipolis_Antigua_Andra_Texto_24 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_25 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_26 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_27 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_28 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_29 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_30 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_31 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_32 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_33 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_34 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_35 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_36 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_37 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_38 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_39 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_40 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_41 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_42 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_43 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_44 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_45 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_46 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_47 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_48 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_49 MSGBOX_AUTOCLOSE
msgbox Arrecipolis_Antigua_Andra_Texto_50 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 248
release
end

Arrecipolis_Antigua_Andra_Move_17:
walk_fast_left
walk_fast_left
step_end

Arrecipolis_Antigua_Andra_Move_17.1:
lock_facing_direction
walk_right
walk_right
unlock_facing_direction
step_end

Arrecipolis_Antigua_Andra_Move_16:
walk_fast_right
walk_fast_right
step_end

Arrecipolis_Antigua_Andra_Move_16.1:
lock_facing_direction
walk_left
walk_left
unlock_facing_direction
step_end

Arrecipolis_Antigua_Andra_Move_15:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

Arrecipolis_Antigua_Andra_Move_15.1:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

Arrecipolis_Antigua_Andra_Texto_1:
	.string "ANDRA: No puedo creerlo, ¿de verdad…\n"
	.string "estoy en el pasado?$"

Arrecipolis_Antigua_Andra_Texto_2:
	.string "JIRACHI: Miles de años atrás.$"

Arrecipolis_Antigua_Andra_Texto_3:
	.string "ANDRA: No es tan distinta a la\n"
	.string "ARRECÍPOLIS que conozco.$"

Arrecipolis_Antigua_Andra_Texto_4:
	.string "Hmmm… Parece que KYOGRE ya está aquí.$"

Arrecipolis_Antigua_Andra_Texto_5:
	.string "Este mismo POKÉMON es el que sigue\n"
	.string "durmiendo en los mares de HOENN en la\l"
	.string "actualidad. Su longevidad es asombrosa.$"

Arrecipolis_Antigua_Andra_Texto_6:
	.string "JIRACHI: Y su poder.$"

Arrecipolis_Antigua_Andra_Texto_7:
	.string "ANDRA: Pero asistiremos a uno aún\n"
	.string "mayor, el que de verdad me interesa.$"

Arrecipolis_Antigua_Andra_Texto_8:
	.string "¡Mira! ¡Debe ser ese ENTRENADOR!$"

Arrecipolis_Antigua_Andra_Texto_9:
	.string "¡KYOGRE! ¡Detente!$"

Arrecipolis_Antigua_Andra_Texto_10:
	.string "¡Dra!$"

Arrecipolis_Antigua_Andra_Texto_11:
	.string "ANDRA: ¿Un KINGDRA? ¡No puede ser!$"

Arrecipolis_Antigua_Andra_Texto_12:
	.string "¡No, KINGDRA!$"

Arrecipolis_Antigua_Andra_Texto_13:
	.string "ANDRA: ¿Qué significa esto? ¿Aparecerá\n"
	.string "ahora ese ENTRENADOR?$"

Arrecipolis_Antigua_Andra_Texto_14:
	.string "Si sigue así, va a inundar toda la\n"
	.string "ciudad. ¿Qué ocurre, JIRACHI?$"

Arrecipolis_Antigua_Andra_Texto_15:
	.string "¿Ha… ha desaparecido?$"

Arrecipolis_Antigua_Andra_Texto_16:
	.string "KYOGRE, ¡te lo ruego! ¡Detente!$"

Arrecipolis_Antigua_Andra_Texto_17:
	.string "ANDRA: Ya es suficiente.$"

Arrecipolis_Antigua_Andra_Texto_18:
	.string "¡MILOTIC!$"

Arrecipolis_Antigua_Andra_Texto_19:
	.string "Esto es lo que querías, ¿no? Estoy\n"
	.string "preparada.$"

Arrecipolis_Antigua_Andra_Texto_20:
	.string "Ese HYDROBOMBA no será suficiente, mis\n"
	.string "POKÉMON han encajado peores golpes.$"

Arrecipolis_Antigua_Andra_Texto_21:
	.string "¡MILOTIC, HYDROBOMBA!$"

Arrecipolis_Antigua_Andra_Texto_21.1:
	.string "¡Sigue! ¡Otra vez! ¡RECUPERACIÓN!$"

Arrecipolis_Antigua_Andra_Texto_22:
	.string "Oh, no… DESCANSO…$"

Arrecipolis_Antigua_Andra_Texto_23:
	.string "Si así lo quieres… MILOTIC y yo podemos\n"
	.string "estar así 3 días, ¿¡me oyes, KYOGRE!?$"

Arrecipolis_Antigua_Andra_Texto_24:
	.string "ANDRA: Jamás nos ganarás en tenacidad,\n"
	.string "después de 8 horas… la balanza al fin\l"
	.string "empiez…$"

Arrecipolis_Antigua_Andra_Texto_25:
	.string "Oh, no…$"

Arrecipolis_Antigua_Andra_Texto_26:
	.string "KYOGRE PRIMIGENIO…$"

Arrecipolis_Antigua_Andra_Texto_27:
	.string "¡MILOTIC! ¡No!$"

Arrecipolis_Antigua_Andra_Texto_28:
	.string "Aún… ¿sigues en pie?… Esa DEFENSA\n"
	.string "ESPECIAL… es impresionante…$"

Arrecipolis_Antigua_Andra_Texto_29:
	.string "Me niego a pensar que todo ese\n"
	.string "despliegue defensivo haya sido en vano,\l"
	.string "pero…$"

Arrecipolis_Antigua_Andra_Texto_30:
	.string "¿Qué se puede hacer ante esta\n"
	.string "situación?$"

Arrecipolis_Antigua_Andra_Texto_31:
	.string "JIRACHI: Seguir cuando crees que no\n"
	.string "puedes más es lo que marca toda la\l"
	.string "diferencia.$"

Arrecipolis_Antigua_Andra_Texto_32:
	.string "Creí que sabías cómo funcionaban las\n"
	.string "leyes de este mundo, ANDRA.$"

Arrecipolis_Antigua_Andra_Texto_33:
	.string "Se nos confina en una estrecha parcela\n"
	.string "ya de por sí inabarcable. Aún en esta\l"
	.string "situación, tus posibilidades siguen\l"
	.string "siendo infinitas.$"

Arrecipolis_Antigua_Andra_Texto_34:
	.string "ANDRA: Sí… tienes razón… mientras\n"
	.string "quede aire en nuestros pulmones,\l"
	.string "tenemos una oportunidad.$"

Arrecipolis_Antigua_Andra_Texto_35:
	.string "Muy bien, MILOTIC-&… ahora empieza el\n"
	.string "combate de verdad.$"

Arrecipolis_Antigua_Andra_Texto_36:
	.string "¡Chica, nos has salvado! No olvidaremos\n"
	.string "lo que hoy has hecho.$"

Arrecipolis_Antigua_Andra_Texto_37:
	.string "ANDRA: No… no será olvidado… estoy\n"
	.string "segura de ello.$"

Arrecipolis_Antigua_Andra_Texto_38:
	.string "… …$"

Arrecipolis_Antigua_Andra_Texto_39:
	.string "Mis ojos lo han visto, pero mi cabeza no\n"
	.string "acaba de entender lo que ha ocurrido.$"

Arrecipolis_Antigua_Andra_Texto_40:
	.string "Ahora me siento… diferente.$"

Arrecipolis_Antigua_Andra_Texto_41:
	.string "Antes me hubiera sentido engañada.\n"
	.string "Hubiera pensado que todo está planeado\l"
	.string "por ti, JIRACHI.$"

Arrecipolis_Antigua_Andra_Texto_42:
	.string "Que sabías lo que iba a ocurrir porque…\n"
	.string "ya ocurrió. Pero no es así, ¿verdad?$"

Arrecipolis_Antigua_Andra_Texto_43:
	.string "JIRACHI: Puedo conceder deseos, pero\n"
	.string "no soy omnisciente. Cuando te di a\l"
	.string "elegir, desconocía tu respuesta.$"

Arrecipolis_Antigua_Andra_Texto_44:
	.string "Solo vi a una ENTRENADORA con un\n"
	.string "potencial enorme, que solo necesitaba\l"
	.string "vivir una experiencia vital como esta\l"
	.string "para expandir aún más sus límites.$"

Arrecipolis_Antigua_Andra_Texto_45:
	.string "Un deseo tan simple y puro como el que\n"
	.string "has pedido, lo ha hecho posible.$"

Arrecipolis_Antigua_Andra_Texto_46:
	.string "ANDRA: ¿Y ahora… que ves?$"

Arrecipolis_Antigua_Andra_Texto_47:
	.string "JIRACHI: Veo a alguien capaz de hacer\n"
	.string "que, por una vez… sea yo quien pueda\l"
	.string "cumplir un deseo.$"

Arrecipolis_Antigua_Andra_Texto_48:
	.string "ANDRA: … …$"

Arrecipolis_Antigua_Andra_Texto_49:
	.string "Eres un POKÉMON LEGENDARIO, pero…$"

Arrecipolis_Antigua_Andra_Texto_50:
	.string "Bienvenido, JIRACHI.$"
