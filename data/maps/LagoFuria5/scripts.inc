LagoFuria5_MapScripts::
	.byte 0

EventoLagoFuria5_Combate_Final::
lock
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LagoFuria_S3_Combates_Cientificos_Move_15
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement 3, EventoLagoFuria5_Combate_Final_Move_1
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox EventoLagoFuria5_Combate_Final_Texto_2 MSGBOX_AUTOCLOSE
msgbox EventoLagoFuria5_Combate_Final_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_2
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_3
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LagoFuria_S3_Combates_Cientificos_Move_16
waitmovement 0x0
special RemoveCameraObject
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_5
applymovement 2, EventoLagoFuria5_Combate_Final_Move_7
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_6
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_7
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_13
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_13
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_EJECUTIVO_DEVON_1, EventoLagoFuria5_Combate_Final_Texto_10
msgbox EventoLagoFuria5_Combate_Final_Texto_11 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, EventoLagoFuria5_Combate_Final_Move_2
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_12 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_9
applymovement 2, EventoLagoFuria5_Combate_Final_Move_9
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_9
waitmovement 0x0
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
	delay 50
	waitse
delay 20
playse SE_M_WATERFALL
clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
addobject 4
delay 20
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 4, EventoLagoFuria5_Combate_Final_Move_10
waitmovement 0x0
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
msgbox EventoLagoFuria5_Combate_Final_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_136, EventoLagoFuria5_Combate_Final_Texto_14
delay 10
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_DIVE
setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
removeobject 4
msgbox EventoLagoFuria5_Combate_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox EventoLagoFuria5_Combate_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_7
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_3
msgbox EventoLagoFuria5_Combate_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_11
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_18 MSGBOX_AUTOCLOSE
msgbox EventoLagoFuria5_Combate_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_4
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_20 MSGBOX_AUTOCLOSE
msgbox EventoLagoFuria5_Combate_Final_Texto_21 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 2
fadescreen 0
delay 10
applymovement 3, EventoLagoFuria5_Combate_Final_Move_12
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_22 MSGBOX_AUTOCLOSE
applymovement 3, EventoLagoFuria5_Combate_Final_Move_11
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_9
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_11
waitmovement 0x0
delay 20
msgbox EventoLagoFuria5_Combate_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, EventoLagoFuria5_Combate_Final_Move_1
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, EventoLagoFuria5_Combate_Final_Move_7
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_3
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 20
msgbox EventoLagoFuria5_Combate_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, EventoLagoFuria5_Combate_Final_Move_13
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_28 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox EventoLagoFuria5_Combate_Final_Texto_29 MSGBOX_DEFAULT
giveegg SPECIES_KURUSU
waitfanfare
setvar VAR_MAUVILLE_CITY_STATE, 8
addvar VAR_UNUSED_0x40F7, 1
clearflag FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE
msgbox EventoLagoFuria5_Combate_Final_Texto_30 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 183
goto_if_eq Misiones_DLC_Fin_Llamada_Giovanni_Lago
msgbox EventoLagoFuria5_Combate_Final_Texto_31 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventoLagoFuria5_Combate_Final_No
warpsilent MAP_LAKEOF_RAGE, 61, 51
release
end

EventoLagoFuria5_Combate_Final_No::
setflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
fadescreen 1
delay 20
removeobject 3
fadescreen 0
release
end

LagoFuria_S3_Combates_Cientificos_Move_16:
walk_up
walk_up
walk_up
step_end

LagoFuria_S3_Combates_Cientificos_Move_15:
walk_down
walk_down
walk_down
step_end

EventoLagoFuria5_Combate_Final_Move_13:
walk_in_place_right
step_end

EventoLagoFuria5_Combate_Final_Move_12:
walk_down
walk_right
step_end

EventoLagoFuria5_Combate_Final_Move_11:
face_down
step_end

EventoLagoFuria5_Combate_Final_Move_10:
walk_slow_up
walk_slow_up
step_end

EventoLagoFuria5_Combate_Final_Move_9:
emote_exclamation_mark
face_down
step_end

EventoLagoFuria5_Combate_Final_Move_8:
walk_in_place_up
step_end

EventoLagoFuria5_Combate_Final_Move_7:
face_right
step_end

EventoLagoFuria5_Combate_Final_Move_6:
walk_down
walk_down
walk_down
walk_in_place_left
step_end

EventoLagoFuria5_Combate_Final_Move_5:
face_right
emote_exclamation_mark
step_end

EventoLagoFuria5_Combate_Final_Move_4:
face_up
step_end

EventoLagoFuria5_Combate_Final_Move_3:
face_left
step_end

EventoLagoFuria5_Combate_Final_Move_2:
emote_exclamation_mark
step_end

EventoLagoFuria5_Combate_Final_Move_1:
walk_in_place_down
step_end

EventoLagoFuria5_Combate_Final_Texto_1:
.string "PESCADOR: Te lo dije, aquí no hay nada.$"

EventoLagoFuria5_Combate_Final_Texto_2:
.string "????: No, debe de estar aquí, este es el\n"
	.string "fin de la caverna subterránea. La\l"
	.string "pequeña parcela de agua debe de\l"
	.string "conectar con el resto del LAGO por un\l"
	.string "estrecho túnel.$"

EventoLagoFuria5_Combate_Final_Texto_3:
.string "Una vez aparezca, mis POKÉMON le\n"
	.string "someterán, nos lo llevaremos para\l"
	.string "estudiarlo en profundidad.$"

EventoLagoFuria5_Combate_Final_Texto_4:
.string "PESCADOR: ¡No puedes hacer eso con un\n"
	.string "POKÉMON así!$"

EventoLagoFuria5_Combate_Final_Texto_5:
.string "????: Entonces admites que existe,\n"
	.string "debería dejarte aquí y dejar que\l"
	.string "volvieras solo, seguro que con tus\l"
	.string "mediocres POKÉMON no serías capaz de…$"

EventoLagoFuria5_Combate_Final_Texto_6:
.string "Hablando de POKÉMON mediocres, no\n"
	.string "pareces precisamente el caso.$"

EventoLagoFuria5_Combate_Final_Texto_7:
.string "Ya he oído hablar de esos ENTRENADORES\n"
	.string "legendarios en JOHTO, que se hacen\l"
	.string "llamar MAESTROS, tú eres demasiado\l"
	.string "joven para ser uno de ellos, y sin\l"
	.string "embargo estás aquí.$"

EventoLagoFuria5_Combate_Final_Texto_8:
.string "Pero careces de las herramientas para\n"
	.string "hacer frente a mis POKÉMON.$"

EventoLagoFuria5_Combate_Final_Texto_9:
.string "¡Necesitarás algo más que vagar por los\n"
	.string "pueblos y rutas de esta primitiva\l"
	.string "región para derrotar a uno de los\l"
	.string "EJECUTIVOS de la todopoderosa DEVON!$"

EventoLagoFuria5_Combate_Final_Texto_10:
.string "¿Quién eres tú? ¡Ningún entrenador de\n"
	.string "ruta en esta región podría derrotarme!$"

EventoLagoFuria5_Combate_Final_Texto_11:
.string "Esos POKÉMON{PAUSE 25}…{PAUSE 25} Han vivido algo más que\n"
	.string "vagar sin rumbo por rutas y pueblos,\l"
	.string "son…una mezcla de nuestra tecnología,\l"
	.string "pero también del vínculo con los\l"
	.string "POKÉMON que caracteriza a esta región.$"

EventoLagoFuria5_Combate_Final_Texto_12:
.string "Tú{PAUSE 25}…{PAUSE 25} ¡Debes pertencer a alguna clase de\n"
	.string "organizac…!$"

EventoLagoFuria5_Combate_Final_Texto_13:
.string "¡El POKÉMON salvaje quiere luchar\n"
	.string "contigo!$"

EventoLagoFuria5_Combate_Final_Texto_14:
.string "...$"

EventoLagoFuria5_Combate_Final_Texto_15:
.string "¡El POKÉMON salvaje desapareció!$"

EventoLagoFuria5_Combate_Final_Texto_16:
.string "PESCADOR: S..Si que eran ciertas las\n"
	.string "leyendas.$"

EventoLagoFuria5_Combate_Final_Texto_17:
.string "????: Debo darte las gracias,\n"
	.string "ENTRENADOR, has hecho el trabajo por\l"
	.string "nosotros. Gracias a tu combate con la\l"
	.string "bestia del LAGO, hemos podido reunir\l"
	.string "sus datos fundamentales.$"

EventoLagoFuria5_Combate_Final_Texto_18:
.string "Así que 82 de BASE en VELOCIDAD{PAUSE 25}…{PAUSE 25} Debe\n"
	.string "haber evolucionado durante millones de\l"
	.string "años, hasta convertirse en un\l"
	.string "depredador de GYARADOS, su sólida\l"
	.string "DEFENSA y unos STATS BASE totales 1\l"
	.string "solo punto superiores a GYARADOS MEGA\l"
	.string "refuerzan este hecho…$"

EventoLagoFuria5_Combate_Final_Texto_19:
.string "Mmm{PAUSE 25}…{PAUSE 25} Se trata de un POKÉMON a medio\n"
	.string "camino entre un LEGENDARIO MENOR, y un\l"
	.string "LEGENDARIO MAYOR, al menos en cuanto a\l"
	.string "poder. Sus abundantes PS podrían\l"
	.string "implicar algún parentesco lejano con\l"
	.string "LAPRAS, también…$"

EventoLagoFuria5_Combate_Final_Texto_20:
.string "Expectativas cumplidas, con esto\n"
	.string "tenemos suficiente. Una pena que\l"
	.string "hayas espantado al monstruo, ni tú ni\l"
	.string "yo podremos tenerlo al fin y al cabo,\l"
	.string "pero nosotros al menos tenemos los\l"
	.string "datos que queríamos.$"

EventoLagoFuria5_Combate_Final_Texto_21:
.string "Que tengáis un buen día, espero por tu\n"
	.string "bien que no nos volvamos a ver, de no\l"
	.string "ser así, tu destino será completamente\l"
	.string "distinto a lo ocurrido aquí hoy.$"

EventoLagoFuria5_Combate_Final_Texto_22:
.string "PESCADOR: Me has salvado.\n"
	.string "¿{PLAYER}? Te debo un gran favor,\l"
	.string "quién sabe lo que esos tipos me\l"
	.string "hubieran hecho una vez obtenido lo que\l"
	.string "querían.$"

EventoLagoFuria5_Combate_Final_Texto_23:
.string "Aunque tenía razón en lo que dijo, ese\n"
	.string "POKÉMON parece hecho a medida para\l"
	.string "derrotar a GYARADOS, su fuerza y\l"
	.string "velocidad son mayores, deben quedar\l"
	.string "poquísimos ejemplares, de lo contrario\l"
	.string "no quedarían GYARADOS en el LAGO. Me\l"
	.string "pregunto si este será el último\l"
	.string "ejemplar vivo que qued…$"

EventoLagoFuria5_Combate_Final_Texto_24:
.string "¡Espera!$"

EventoLagoFuria5_Combate_Final_Texto_25:
.string "¡Parece que el POKÉMON ha dejado un\n"
	.string "HUEVO!$"

EventoLagoFuria5_Combate_Final_Texto_26:
.string "Entonces, ¿no es LEGENDARIO? ¿Contará\n"
	.string "con una línea evolutiva igual que el\l"
	.string "resto de POKÉMON normales?$"

EventoLagoFuria5_Combate_Final_Texto_27:
.string "No creo que a esos tipos les agrade\n"
	.string "haber ignorado esta información, ¿no\l"
	.string "crees?$"

EventoLagoFuria5_Combate_Final_Texto_28:
.string "Si alguien debe de tener este HUEVO,\n"
	.string "eres tú, has demostrado cuidar de tus\l"
	.string "POKÉMON como lo haría el más sabio de\l"
	.string "nuestros maestros en JOHTO.$"

EventoLagoFuria5_Combate_Final_Texto_29:
.string "¡OBTUVISTE UN HUEVO MISTERIOSO!$"

EventoLagoFuria5_Combate_Final_Texto_30:
.string "Te estaré siempre agradecido, si\n"
	.string "quieres visitar mi casa del LAGO,\l"
	.string "estaré encantado de hablar contigo.$"

EventoLagoFuria5_Combate_Final_Texto_31:
	.string "¿Quieres volver al exterior conmigo?$"

Misiones_DLC_Fin_Llamada_Giovanni_Lago::
setflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
fadescreen 1
delay 20
removeobject 3
fadescreen 0
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1
waitmovement 0x0
msgbox Misiones_DLC_Fin_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
msgbox IcePath_Llamada_Giovanni_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_5F, 69, 4
release
end
