LilycoveCity_Museo_3F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LilycoveCity_Museo_3F_OnFrame
	.byte 0

LilycoveCity_Museo_3F_OnFrame:
map_script_2 VAR_ROUTE117_STATE, 10, LilycoveCity_Museo_3F_Secundaria
	.2byte 0

Museo_3F_Secundaria_Move_2:
walk_in_place_left
step_end

Museo_3F_Secundaria_Move_1:
face_right
step_end

Museo_3F_Secundaria_Move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_up
walk_up
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
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
face_down
lock_facing_direction
walk_up
unlock_facing_direction
step_end

Museo_3F_Secundaria_Move_4:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_up
walk_up
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
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Museo_3F_Secundaria_Move_5:
walk_slow_left
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Museo_3F_Secundaria_Move_6:
delay_16
face_left
delay_16
delay_16
step_end

Museo_3F_Secundaria_Move_7:
delay_16
walk_down
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
walk_down
walk_down
walk_down
walk_down
walk_left
face_right
step_end

Museo_3F_Secundaria_Move_8:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Museo_3F_Secundaria_Move_9:
emote_exclamation_mark
step_end

Museo_3F_Secundaria_Move_10:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Museo_3F_Secundaria_Move_11:
walk_left
step_end

Museo_3F_Secundaria_Move_12:
walk_in_place_left
step_end

Museo_3F_Secundaria_Move_13:
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
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

Museo_3F_Secundaria_Move_14:
walk_left
walk_up
walk_up
face_left
step_end

Museo_3F_Secundaria_Move_15:
walk_left
walk_left
walk_left
step_end

Museo_3F_Secundaria_Move_15.1:
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
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

Museo_3F_Secundaria_Move_15.2:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Museo_3F_Secundaria_Move_15.3:
walk_up
walk_up
step_end

Museo_3F_Secundaria_Move_15.4:
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
walk_down
walk_down
step_end

Museo_3F_Secundaria_Move_16:
delay_16
delay_16
walk_down
walk_down
walk_left
step_end

Museo_3F_Secundaria_Move_17:
walk_down
walk_down
walk_down
face_left
step_end

Museo_3F_Secundaria_Move_18:
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
face_left
step_end

Museo_3F_Secundaria_Move_19:
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

Museo_3F_Secundaria_Move_20:
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
walk_down
walk_down
face_left
step_end

Museo_3F_Secundaria_Move_21:
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
walk_down
walk_down
walk_down
walk_down
face_left
step_end

Museo_3F_Secundaria_Move_22:
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
walk_down
step_end



LilycoveCity_Museo_3F_Secundaria::
lock
delay 50
applymovement 2, Museo_3F_Secundaria_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Museo_3F_Secundaria_Move_1
waitmovement 0x0
delay 30
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Museo_3F_Secundaria_Move_4
applymovement 2, Museo_3F_Secundaria_Move_3
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Museo_3F_Secundaria_Move_5
waitmovement 0x0
delay 30
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, Museo_3F_Secundaria_Move_6
waitmovement 0x0
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
applymovement 3, Museo_3F_Secundaria_Move_8
applymovement OBJ_EVENT_ID_PLAYER, Museo_3F_Secundaria_Move_7
waitmovement 0x0
setflag FLAG_HOENN_89
removeobject 3
clearflag FLAG_HOENN_651
addobject 7
delay 30
playse SE_BREAKABLE_DOOR
waitse
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Museo_3F_Secundaria_Move_9
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_10
waitmovement 0x0
special RemoveCameraObject
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Museo_3F_Secundaria_Move_11
waitmovement 0x0
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 7, Museo_3F_Secundaria_Move_12
waitmovement 0x0
waitse
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_13
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_14 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
waitse
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_16 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_10
waitmovement 0x0
special RemoveCameraObject
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_17 MSGBOX_AUTOCLOSE
applymovement 7, Museo_3F_Secundaria_Move_14
waitmovement 0x0
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_18 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 7, Museo_3F_Secundaria_Move_12
waitmovement 0x0
waitse
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_19 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 7, Museo_3F_Secundaria_Move_15
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_15
waitmovement 0x0
special RemoveCameraObject
playse SE_BREAKABLE_DOOR
applymovement 7, Museo_3F_Secundaria_Move_12
waitmovement 0x0
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_21 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_15.1
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_24 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_651
clearflag FLAG_HOENN_652
addobject 8
addobject 5
addobject 6
addobject 4
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_15.2
waitmovement 0x0
special RemoveCameraObject
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_25 MSGBOX_AUTOCLOSE
delay 10
special SpawnCameraObject
applymovement 5, Museo_3F_Secundaria_Move_17
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_15.3
waitmovement 0x0
special RemoveCameraObject
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_27 MSGBOX_AUTOCLOSE
addobject 6
addobject 4
applymovement 6, Museo_3F_Secundaria_Move_19
applymovement 4, Museo_3F_Secundaria_Move_18
waitmovement 0x0
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_28 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 4, Museo_3F_Secundaria_Move_20
applymovement 6, Museo_3F_Secundaria_Move_21
applymovement 5, Museo_3F_Secundaria_Move_22
applymovement OBJ_EVENT_ID_CAMERA, Museo_3F_Secundaria_Move_15.4
waitmovement 0x0
special RemoveCameraObject
delay 30
applymovement 6, Museo_3F_Secundaria_Move_12
waitmovement 0x0
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_29 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, Museo_3F_Secundaria_Move_12
waitmovement 0x0
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_30 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_31 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_32 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_33 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_34 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_35 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_36 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_37 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_38 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_39 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_40 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_41 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_42 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_43 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_44 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_45 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_46 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_47 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_48 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_49 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_50 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_51 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_52 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_53 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_54 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_55 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_56 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_57 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_58 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_59 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_60 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_61 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_62 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_63 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_64 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_65 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_Museo_3F_Secundaria_Texto_66 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE117_STATE, 11
release
end

LilycoveCity_Museo_3F_Secundaria_Texto_1:
	.string "Por aquí.$"

LilycoveCity_Museo_3F_Secundaria_Texto_2:
	.string "Hablo con {PLAYER}, ¿verdad?\n"
	.string "Yo soy DESTRA.$"

LilycoveCity_Museo_3F_Secundaria_Texto_3:
	.string "He oído algunos rumores sobre ti.\n"
	.string "Ponte cómodo, por favor.$"

LilycoveCity_Museo_3F_Secundaria_Texto_4:
	.string "Te has entrometido con el orden natural\n"
	.string "de las cosas, {PLAYER}. ¡Y no toleraré\l"
	.string "eso en HOENN!$"

LilycoveCity_Museo_3F_Secundaria_Texto_9:
	.string "¡¿Ha quedado claro?!$"

LilycoveCity_Museo_3F_Secundaria_Texto_10:
	.string "Crees que solo evitaste una mera\n"
	.string "transacción en el mercado negro, pero\l"
	.string "ese no es el caso.$"

LilycoveCity_Museo_3F_Secundaria_Texto_11:
	.string "Docenas de negocios como ese se llevan\n"
	.string "a cabo cada mes, y siempre el dinero se\l"
	.string "nos es devuelto.$"

LilycoveCity_Museo_3F_Secundaria_Texto_12:
	.string "¡Esa es la cuestión! ¿O de verdad\n"
	.string "creías que no estábamos al tanto de\l"
	.string "ello?$"

LilycoveCity_Museo_3F_Secundaria_Texto_13:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

LilycoveCity_Museo_3F_Secundaria_Texto_14:
	.string "Eres un joven que solo piensa en\n"
	.string "términos de regiones y personas.$"

LilycoveCity_Museo_3F_Secundaria_Texto_15:
	.string "¡No hay regiones! ¡No hay personas!$"

LilycoveCity_Museo_3F_Secundaria_Texto_16:
	.string "No existe KANTO, no existe JOHTO,\n"
	.string "¡no existe HOENN!$"

LilycoveCity_Museo_3F_Secundaria_Texto_17:
	.string "Es el sistema monetario el que\n"
	.string "determina la totalidad de la vida en el\l"
	.string "mundo POKEMON.$"

LilycoveCity_Museo_3F_Secundaria_Texto_18:
	.string "Hoy en día, esa es la estructura\n"
	.string "atómica, subatómica y galáctica de las\l"
	.string "cosas.$"

LilycoveCity_Museo_3F_Secundaria_Texto_19:
	.string "¡Y tú! Tú{PAUSE 25}…{PAUSE 25} has interferido con las leyes\n"
	.string "básicas de nuestro mundo.$"

LilycoveCity_Museo_3F_Secundaria_Texto_20:
	.string "¡Y vas a tener que enmendarlo!$"

LilycoveCity_Museo_3F_Secundaria_Texto_21:
	.string "¿Me entiendes ahora, {PLAYER}?$"

LilycoveCity_Museo_3F_Secundaria_Texto_22:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

LilycoveCity_Museo_3F_Secundaria_Texto_23:
	.string "No quieres entenderlo, muy bien.$"

LilycoveCity_Museo_3F_Secundaria_Texto_24:
	.string "Te lo haré ver a la fuerza.$"

LilycoveCity_Museo_3F_Secundaria_Texto_25:
	.string "Permíteme presentarte al anfitrión\n"
	.string "del futuro gran negocio en HOENN:\l"
	.string "TRETO.$"

LilycoveCity_Museo_3F_Secundaria_Texto_26:
	.string "TRETO: Vaya, vaya. Parece que hay\n"
	.string "talento aquí.$"

LilycoveCity_Museo_3F_Secundaria_Texto_27:
	.string "La cuestión es, ¿cuánto?$"

LilycoveCity_Museo_3F_Secundaria_Texto_28:
	.string "Lo comprobaremos.$"

LilycoveCity_Museo_3F_Secundaria_Texto_29:
	.string "????: Ahora veremos de\n"
	.string "lo que eres capaz.$"

LilycoveCity_Museo_3F_Secundaria_Texto_30:
	.string "????: Veamos esa táctica tuya.\n"
	.string "¡Enséñamela!$"

LilycoveCity_Museo_3F_Secundaria_Texto_31:
	.string "¿Qué ha pasado aquí?$"

LilycoveCity_Museo_3F_Secundaria_Texto_32:
	.string "Grr… Pero cómo…$"

LilycoveCity_Museo_3F_Secundaria_Texto_33:
	.string "SABINO: Este ENTRENADOR…\n"
	.string "Está a otro nivel.$"

LilycoveCity_Museo_3F_Secundaria_Texto_34:
	.string "TACTIO: Aunque odie admitirlo, podrías\n"
	.string "ser una futura superestrella.$"

LilycoveCity_Museo_3F_Secundaria_Texto_35:
	.string "TRETO: Jo, jo, chico. Tienes talento,\n"
	.string "verdadero talento.$"

LilycoveCity_Museo_3F_Secundaria_Texto_36:
	.string "Dime, ¿te interesaría grabar tu nombre\n"
	.string "con letras de oro en la historia?$"

LilycoveCity_Museo_3F_Secundaria_Texto_37:
	.string "Yo puedo hacerte más rico de\n"
	.string "lo que puedas imaginar.$"

LilycoveCity_Museo_3F_Secundaria_Texto_38:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

LilycoveCity_Museo_3F_Secundaria_Texto_39:
	.string "DESTRA: {PLAYER}… {PLAYER}…\n"
	.string "Sigues igual.$"

LilycoveCity_Museo_3F_Secundaria_Texto_40:
	.string "No hay tal cosa como la LIGA POKÉMON,\n"
	.string "no hay ningún MAESTRO, el HALL de la\l"
	.string "FAMA es una fachada.$"

LilycoveCity_Museo_3F_Secundaria_Texto_41:
	.string "Solo existen DEVON, SILPH, ZONA SAFARI,\n"
	.string "los centros comerciales, museos, ligas\l"
	.string "regionales, estaciones, y TORRE RADIO…$"

LilycoveCity_Museo_3F_Secundaria_Texto_42:
	.string "Esas son las regiones del mundo\n"
	.string "POKÉMON hoy.$"

LilycoveCity_Museo_3F_Secundaria_Texto_43:
	.string "Y ahora{PAUSE 25}…{PAUSE 25} el FRENTE BATALLA también.$"

LilycoveCity_Museo_3F_Secundaria_Texto_44:
	.string "¿De qué crees que habla la LIGA POKÉMON\n"
	.string "en sus reuniones?$"

LilycoveCity_Museo_3F_Secundaria_Texto_45:
	.string "¿Sobre quién ingresó al HALL de la\n"
	.string "FAMA? ¿El mejor CAMPEÓN de su historia?\l"
	.string "¿Teoría del combate POKÉMON, tal vez?$"

LilycoveCity_Museo_3F_Secundaria_Texto_46:
	.string "No.$"

LilycoveCity_Museo_3F_Secundaria_Texto_47:
	.string "Sacan sus gráficos de programación\n"
	.string "lineal, teorías estadísticas,\l"
	.string "soluciones de costo mínimo y evalúan\l"
	.string "cómo pueden ilusionar a la mayor\l"
	.string "cantidad de niños con la menor\l"
	.string "inversión posible.$"

LilycoveCity_Museo_3F_Secundaria_Texto_48:
	.string "Ya no vivimos en un mundo de ideologías,\n"
	.string "{PLAYER}.$"

LilycoveCity_Museo_3F_Secundaria_Texto_49:
	.string "El mundo es un conjunto de\n"
	.string "corporaciones, determinadas\l"
	.string "inexorablemente por los estatutos\l"
	.string "inmutables de los negocios.$"

LilycoveCity_Museo_3F_Secundaria_Texto_50:
	.string "El mundo{PAUSE 35}…{PAUSE 35} es un negocio, {PLAYER}.$"

LilycoveCity_Museo_3F_Secundaria_Texto_51:
	.string "Y ahora, solo te pido que formes parte\n"
	.string "de la élite en ese mundo perfecto.$"

LilycoveCity_Museo_3F_Secundaria_Texto_52:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

LilycoveCity_Museo_3F_Secundaria_Texto_53:
	.string "De modo que{PAUSE 25}…{PAUSE 25} ya tienes tus propios\n"
	.string "planes para tu futuro.$"

LilycoveCity_Museo_3F_Secundaria_Texto_54:
	.string "En ese caso, te mostraré los míos.$"

LilycoveCity_Museo_3F_Secundaria_Texto_55:
	.string "Vale, he entendido tus planes…$"

LilycoveCity_Museo_3F_Secundaria_Texto_56:
	.string "DESTRA: Hacía tiempo que no sentía\n"
	.string "esta adrenalina al combatir. Te lo\l"
	.string "agradezco.$"

LilycoveCity_Museo_3F_Secundaria_Texto_57:
	.string "Cuando sea la DAMA de TORRE BATALLA,\n"
	.string "deberé limitarme a fingir esa sensación.$"

LilycoveCity_Museo_3F_Secundaria_Texto_58:
	.string "No podría ser de otro modo, dentro de\n"
	.string "las normas del recinto.$"

LilycoveCity_Museo_3F_Secundaria_Texto_59:
	.string "Perfectas para dar espectáculo, para\n"
	.string "dar a la masa lo que quiere ver. Y por\l"
	.string "ello, incapaces de reproducir el\l"
	.string "verdadero esplendor de un combate en\l"
	.string "su estado más puro.$"

LilycoveCity_Museo_3F_Secundaria_Texto_60:
	.string "Así es. No importan tus planes,\n"
	.string "{PLAYER}.$"

LilycoveCity_Museo_3F_Secundaria_Texto_61:
	.string "El FRENTE BATALLA es la fórmula\n"
	.string "perfecta.$"

LilycoveCity_Museo_3F_Secundaria_Texto_62:
	.string "Con ella, la plebe tendrá todo\n"
	.string "cuanto necesita.$"

LilycoveCity_Museo_3F_Secundaria_Texto_63:
	.string "Todas sus necesidades, cubiertas.$"

LilycoveCity_Museo_3F_Secundaria_Texto_64:
	.string "Las ansiedades, calmadas.$"

LilycoveCity_Museo_3F_Secundaria_Texto_65:
	.string "El aburrimiento, eliminado.$"

LilycoveCity_Museo_3F_Secundaria_Texto_66:
	.string "Piensa bien en los pasos que des a\n"
	.string "partir de ahora, {PLAYER}. Si te\l"
	.string "niegas a predicar con esto, tampoco\l"
	.string "podrás silenciarlo.$"
	