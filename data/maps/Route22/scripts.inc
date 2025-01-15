Route22_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route22_OnFrame
    .byte 0

Route22_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 85, RocketHideoutViridian_Escena_9
	.2byte 0


Route22Documento_100::
msgbox Route22Documento_Text_100, MSGBOX_SIGN   
end

Route22Documento_Text_100:
.string "ENTRADA A LA LIGA POKÉMON$"

Ruta22_No_Puedes_Pasar::
compare VAR_UNUSED_0x40F7, 89
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruta22_No_Puedes_Pasar_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruta22_No_Puedes_Pasar_Texto_1:
.string "(Aquí está toda la POLICÍA de la región,\n"
	.string "no es buena idea entrar).$"

Route22_Combate_Azul_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route22_Combate_Azul_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.1
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
applymovement 1, Route22_Combate_Azul_Move_2
waitmovement 0x0
goto Route22_Combate_Azul

Route22_Combate_Azul_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route22_Combate_Azul_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.1
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
goto Route22_Combate_Azul

Route22_Combate_Azul::
msgbox Route22_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, Route22_Combate_Azul_Move_3
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
msgbox Route22_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_RIVAL
delay 10
applymovement 1, Route22_Combate_Azul_Move_4.1
waitmovement 0x0
delay 10
msgbox Route22_Combate_Azul_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_AZUL_3, Route22_Combate_Azul_Texto_7
msgbox Route22_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6.1
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6.2
waitmovement 0x0
delay 10
msgbox Route22_Combate_Azul_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_7
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.2
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 90
release
end

Route22_Combate_Azul_Move_6.2:
delay_8
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Route22_Combate_Azul_Move_6.1:
face_left
step_end

Route22_Combate_Azul_Move_4.1:
walk_in_place_down
step_end

Route22_Combate_Azul_Move_1.2:
walk_down
walk_down
step_end

Route22_Combate_Azul_Move_1.1:
walk_up
walk_up
step_end

Route22_Combate_Azul_Texto_1:
.string "AZUL: Así que tu también\n"
	.string "estás listo.$"

Route22_Combate_Azul_Texto_2:
.string "Acabo de volver de entrenar en la\n"
	.string "CALLE VICTORIA, aún no me atrevo a\l"
	.string "entrar al ALTO MANDO{PAUSE 5}…{PAUSE 5}$"

Route22_Combate_Azul_Texto_3:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route22_Combate_Azul_Texto_4:
.string "La verdad es que ROJO ha vuelto a\n"
	.string "derrotarme, no puedo entrar a la\l"
	.string "LIGA sabiendo que aún está por\l"
	.string "encima mío.\l"
	.string "Debo asegurarme de que mi equipo es\l"
	.string "mucho mejor que el de ese entonces.$"

Route22_Combate_Azul_Texto_5:
.string "No te preocupes, ROJO siempre ha\n"
	.string "sido un tardón, llegará de todos\l"
	.string "modos después de mí a retar al\l"
	.string "ALTO MANDO.\l"
	.string "Además, he estado en el CENTRO PKMN de\l"
	.string "allí, puedo volver volando en un momento.$"

Route22_Combate_Azul_Texto_6:
.string "Solo estoy buscando algo de\n"
	.string "entrenamiento extra; los\l"
	.string "ENTRENADORES de CALLE VICTORIA\l"
	.string "no son suficiente; necesito algo\l"
	.string "más.$"
	
Route22_Combate_Azul_Texto_6.1:
	.string "¡Vamos, estamos en el mismo bando!\l"
	.string "¡Quiero ver lo preparado que\l"
	.string "estás para afrontar este reto!$"

Route22_Combate_Azul_Texto_7:
.string "¡No puede ser, tú también!$"

Route22_Combate_Azul_Texto_8:
.string "Esto no puede ser, mis POKÉMON\n"
	.string "necesitan más nivel, no pararé\l"
	.string "hasta que sobrepasen del 60, con\l"
	.string "eso nadie podrá toserme.$"

Route22_Combate_Azul_Texto_9:
.string "Por cierto, ¿no sabrás por casualidad\n"
	.string "a esa amiguita tuya, ANDRA?$"

Route22_Combate_Azul_Texto_9.1:
	.string "Si va a retar también al ALTO MANDO,\n"
	.string "es porque también sabe lo que se hace.\l"
	.string "Veré si la encuentro más adelante, me\l"
	.string "servirá para subir unos cuantos\l"
	.string "niveles más.$"

Route22_Combate_Azul_Texto_10:
.string "¡Bah! Me piro, {PLAYER}.\n"
	.string "Llegados este momento, el\l"
	.string "tiempo es oro.$"

Route22_Combate_Azul_Texto_10.1:
	.string "Te deseo suerte, de verdad, si\n"
	.string "quisiera que alguien saliera CAMPEÓN\l"
	.string "CAMPEÓN e hiciera morder el polvo\l"
	.string "a ROJO, ese alguien, aparte de mí,\l"
	.string "serías tú.$"

Route22_Combate_Azul_Texto_11:
.string "¡Ah! Y una última cosa, ni se te ocurra\n"
	.string "recoger los CARAMELO RARO que\l"
	.string "encuentres, ¡son míos!$"

Route22_Combate_Azul_Move_1:
walk_in_place_up
emote_exclamation_mark
step_end

Route22_Combate_Azul_Move_2:
walk_left
walk_in_place_down
step_end

Route22_Combate_Azul_Move_3:
face_left
step_end

Route22_Combate_Azul_Move_4:
walk_in_place_down
step_end

Route22_Combate_Azul_Move_5:
face_up
step_end

Route22_Combate_Azul_Move_6:
walk_up
step_end

Route22_Combate_Azul_Move_7:
face_down
step_end

RocketHideoutViridian_Escena_9::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_9_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideoutViridian_Escena_9_Texto_1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_4.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_6
waitmovement 0x0
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_8 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_7
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_11 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_13 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_16 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, RocketHideoutViridian_Escena_9_Move_8
delay 30
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
removeobject 3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 4
msgbox RocketHideoutViridian_Escena_9_Texto_18 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_19 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_20 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_21 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_9
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_9_Move_10
delay 55
playse SE_PIN
waitmovement 0x0
special RemoveCameraObject
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_22 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_UNUSED_0x40F7, 86
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
warpsilent MAP_ROCKET_HIDEOUT_VIRIDIAN, 25, 7
release
end

RocketHideoutViridian_Escena_9_Move_1:
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
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

RocketHideoutViridian_Escena_9_Move_2:
walk_in_place_left
step_end

RocketHideoutViridian_Escena_9_Move_3:
walk_slow_right
step_end

RocketHideoutViridian_Escena_9_Move_4:
face_left
step_end

RocketHideoutViridian_Escena_9_Move_5:
walk_left
step_end

RocketHideoutViridian_Escena_9_Move_6:
face_right
step_end

RocketHideoutViridian_Escena_9_Move_7:
walk_in_place_right
step_end

RocketHideoutViridian_Escena_9_Move_8:
walk_left
walk_left
walk_left
walk_left
step_end


RocketHideoutViridian_Escena_9_Move_8.1:
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


RocketHideoutViridian_Escena_9_Move_9:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideoutViridian_Escena_9_Move_10:
walk_up
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
walk_down
walk_down
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
step_end

RocketHideoutViridian_Escena_9_Texto_1:
.string "GIOVANNI: Te dije claramente que\n"
	.string "permanecieras en JOHTO, junto a tu\l"
	.string "madre. ¿Sabes el peligro que corres si\l"
	.string "descubren quién eres?$"

RocketHideoutViridian_Escena_9_Texto_2:
.string "????: ¡Qué importa eso! ¿Cómo has\n"
	.string "podido? ¡Disolver la organización por\l"
	.string "la que has luchado todos estos años!\l"
	.string "¡Sois la burla de todos los medios de\l"
	.string "comunicación en KANTO!$"

RocketHideoutViridian_Escena_9_Texto_3:
.string "GIOVANNI: Eres demasiado joven aún, y\n"
	.string "no mereces estar implicado en todo\l"
	.string "esto. Los motivos de mi disolución\l"
	.string "escapan a tu comprensión del mundo,\l"
	.string "algún día, cuando todo esto acabe,\l"
	.string "tendrás respuestas y lo entenderás,\l"
	.string "tienes mi palabra.$"

RocketHideoutViridian_Escena_9_Texto_4:
.string "????: ¡No hay nada que entender, has\n"
	.string "fracasado y ya está! ¡Te han derrotado\l"
	.string "y te has rendido!$"

RocketHideoutViridian_Escena_9_Texto_4.1:
.string "A veces no todo es tan simple como\n"
	.string "ganar o perder. Los eventos acaecidos\l"
	.string "obedecen a un fin mayor, son imposibles\l"
	.string "de comprender si los ves uno por uno\l"
	.string "desde fuera, como un mero espectador,\l"
	.string "pero en su conjunto{PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_9_Texto_5:
.string "El mejor…¡Dijiste que querías ser el\n"
	.string "mejor ENTRENADOR del mundo!$"

RocketHideoutViridian_Escena_9_Texto_6:
.string "¿Y ahora piensas abandonar?\p"
.string "¿Y qué piensas hacer entonces?$"

RocketHideoutViridian_Escena_9_Texto_7:
.string "{PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_9_Texto_8:
.string "GIOVANNI: Un hombre que no sabe\n"
	.string "reconocer la derrota es incapaz de\l"
	.string "progresar{PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_9_Texto_9:
.string "Debo estar solo un tiempo para poder\n"
	.string "crear una organización más poderosa.$"

RocketHideoutViridian_Escena_9_Texto_10:
.string "????: ¡Bah! Una organización repleta de\n"
	.string "esbirros que en el momento de la verdad\l"
	.string "se deja vencer por alguien tan joven.\l"
	.string "¡Qué vergüenza!$"

RocketHideoutViridian_Escena_9_Texto_11:
.string "GIOVANNI: Una organización bien\n"
	.string "estructurada y con los efectivos\l"
	.string "suficientes, debería ser capaz de\l"
	.string "ejercer un gran poder.$"

RocketHideoutViridian_Escena_9_Texto_12:
.string "Ese es el objetivo de una organización.$"

RocketHideoutViridian_Escena_9_Texto_13:
.string "Yo no he sabido aprovechar el potencial\n"
	.string "de mis subordinados{PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_9_Texto_14:
.string "¡Juro que un día resucitaré al TEAM\n"
	.string "ROCKET!$"

RocketHideoutViridian_Escena_9_Texto_15:
.string "????: ¡No entiendo toda esa palabrería\n"
	.string "sin sentido!$"

RocketHideoutViridian_Escena_9_Texto_16:
.string "¡No entiendo nada de tus desvaríos!$"

RocketHideoutViridian_Escena_9_Texto_17:
.string "{PAUSE 25}…{PAUSE 25} Tú también lo comprenderás algún día.$"

RocketHideoutViridian_Escena_9_Texto_18:
.string "????: ¡Prefiero no entenderlo!$"

RocketHideoutViridian_Escena_9_Texto_19:
.string "¡No pienso acabar como tú! Con esbirros\n"
	.string "miserables a tu alrededor, que se unen\l"
	.string "a tu organización para sentirse\l"
	.string "importantes porque solos no son nadie.$"

RocketHideoutViridian_Escena_9_Texto_20:
.string "¡Seré un hombre fuerte por mí mismo, sin\n"
	.string "la ayuda de nadie! ¡Yo solo!$"

RocketHideoutViridian_Escena_9_Texto_21:
.string "¡YO SOLO!$"

RocketHideoutViridian_Escena_9_Texto_22:
.string "GIOVANNI: Eso espero PLATA, es lo mejor\n"
	.string "para ambos. Crece alejado de esta\l"
	.string "farsa, mejora por tu cuenta. Mientras…\l"
	.string "Yo me encargaré de moldear como es\l"
	.string "debido la región sobre la que vives{PAUSE 25}…{PAUSE 25} a\l"
	.string "cualquier precio.$"

