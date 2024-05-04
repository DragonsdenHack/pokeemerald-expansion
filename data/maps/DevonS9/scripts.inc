DevonS9_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, DevonS9_OnFrame
	.byte 0

DevonS9_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 216, DevonS9_Escena_DLC_Escena_Final
	.2byte 0


DevonS9_Escena_DLC_Escena_Final::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DevonS9_Escena_DLC_Escena_Final_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 20
applymovement 37, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement 36, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_3
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_5
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox DevonS10_DLC_Escena_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 35, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 34, DevonS9_Escena_DLC_Escena_Final_Move_2
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_7
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_11 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 34, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 35, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 36, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 37, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
applymovement 40, DevonS9_Escena_DLC_Escena_Final_Move_8
waitmovement 0x0
delay 20
msgbox DevonS10_DLC_Escena_Final_Texto_12 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_14
delay 10
applymovement 40, DevonS9_Escena_DLC_Escena_Final_Move_13
applymovement 34, DevonS9_Escena_DLC_Escena_Final_Move_12
applymovement 35, DevonS9_Escena_DLC_Escena_Final_Move_11
applymovement 36, DevonS9_Escena_DLC_Escena_Final_Move_10
applymovement 37, DevonS9_Escena_DLC_Escena_Final_Move_9
waitmovement 0x0
delay 150
msgbox DevonS10_DLC_Escena_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_15
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox DevonS10_DLC_Escena_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_16
waitmovement 0x0
delay 10
msgbox DevonS10_DLC_Escena_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_3
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_20 MSGBOX_AUTOCLOSE
delay 10
msgbox DevonS10_DLC_Escena_Final_Texto_21 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_22 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_17
waitmovement 0x0
msgbox DevonS10_DLC_Escena_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox DevonS10_DLC_Escena_Final_Texto_24 MSGBOX_AUTOCLOSE
applymovement 25, DevonS9_Escena_DLC_Escena_Final_Move_6
waitmovement 0x0
setflag FLAG_UNUSED_0x26D
removeobject 34
removeobject 35
removeobject 36
removeobject 37
removeobject 40
msgbox DevonS10_DLC_Escena_Final_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_4
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DevonS9_Escena_DLC_Escena_Final_Move_18
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_18
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox DevonS10_DLC_Escena_Final_Texto_26 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 39, DevonS9_Escena_DLC_Escena_Final_Move_19
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 217
delay 40
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
checkplayergender
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end
release
end

DevonS9_Escena_DLC_Escena_Final_Move_19:
walk_down
walk_down
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
step_end

DevonS9_Escena_DLC_Escena_Final_Move_18:
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_left
walk_down
walk_left
walk_left
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_17:
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_16:
delay_8
face_left
step_end

DevonS9_Escena_DLC_Escena_Final_Move_15:
face_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_14:
emote_exclamation_mark
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
delay_8
walk_in_place_up
step_end

DevonS9_Escena_DLC_Escena_Final_Move_13:
walk_down
walk_down
walk_left
walk_down
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
step_end

DevonS9_Escena_DLC_Escena_Final_Move_12:
delay_8
delay_8
walk_in_place_right
walk_left
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
step_end

DevonS9_Escena_DLC_Escena_Final_Move_11:
delay_8
delay_8
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_10:
delay_8
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_9:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_8:
emote_exclamation_mark
step_end

DevonS9_Escena_DLC_Escena_Final_Move_7:
walk_slow_right
step_end

DevonS9_Escena_DLC_Escena_Final_Move_6:
walk_in_place_down
step_end

DevonS9_Escena_DLC_Escena_Final_Move_5:
walk_slow_left
step_end

DevonS9_Escena_DLC_Escena_Final_Move_4:
walk_in_place_up
step_end

DevonS9_Escena_DLC_Escena_Final_Move_3:
face_up
delay_8
step_end

DevonS9_Escena_DLC_Escena_Final_Move_2:
walk_in_place_right
step_end

DevonS9_Escena_DLC_Escena_Final_Move_1:
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

DevonS10_DLC_Escena_Final_Texto_1:
.string "ADM.ZAFIRO: La misión ha sido todo un\n"
	.string "éxito, PRESIDENTE.$"

DevonS10_DLC_Escena_Final_Texto_2:
.string "ADM.AMATISTA: Más que un éxito, su\n"
	.string "tecnología de ondas de radio se\l"
	.string "complementa perfectamente con la\l"
	.string "nuestra, con ello podremos optimizar\l"
	.string "aún más el rendimiento de un POKÉMON.$"

DevonS10_DLC_Escena_Final_Texto_3:
.string "????: Pero hay algo que se nos escapa,\n"
	.string "ese fenómeno del FUERTE VÍNCULO…\l"
	.string "¿Habías experimentado tú algo similar,\l"
	.string "C.MIGUEL?$"

DevonS10_DLC_Escena_Final_Texto_4:
.string "C.MIGUEL: No, yo no{PAUSE 25}…{PAUSE 25} ese fenómeno solo{PAUSE 25}…{PAUSE 5}$"

DevonS10_DLC_Escena_Final_Texto_5:
.string "????: Ya veo, solo está reservado para\n"
	.string "los entrenadores más capaces, que han\l"
	.string "desarrollado un vínculo especial con\l"
	.string "uno de los suyos.$"

DevonS10_DLC_Escena_Final_Texto_6:
.string "C.MIGUEL: {PAUSE 25}…{PAUSE 25}así es{PAUSE 5}…{PAUSE 5}$"

DevonS10_DLC_Escena_Final_Texto_7:
.string "????: Pero ello no ha impedido crear ese\n"
	.string "SUICUNE-& por medios artificiales. Sin\l"
	.string "mencionar todos esos prototipos, con\l"
	.string "una base similar a los nuestros.$"

DevonS10_DLC_Escena_Final_Texto_8:
.string "ADM.RUBÍ: Recuerde además que esos dos\n"
	.string "investigadores están al tanto de\l"
	.string "DEOXYS, aunque desconocen su más\l"
	.string "valiosa información.$"

DevonS10_DLC_Escena_Final_Texto_9:
.string "ADM.ESMERALDA: ¿Cuál cree que puede\n"
	.string "ser su límite?$"

DevonS10_DLC_Escena_Final_Texto_10:
.string "????: Conociendo su capacidad de mutar\n"
	.string "en condiciones extremas, diría que{PAUSE 15}…{PAUSE 15}$"

DevonS10_DLC_Escena_Final_Texto_11:
.string "{PAUSE 15}…{PAUSE 15}la Luna y las estrellas son su único\n"
	.string "límite.$"

DevonS10_DLC_Escena_Final_Texto_12:
.string "Y ahora, me gustaría hablar a solas con\n"
	.string "el C.MIGUEL.$"

DevonS10_DLC_Escena_Final_Texto_13:
.string "????: JOHTO es una región fascinante,\n"
	.string "¿no? Un fenómeno inexistente en otras\l"
	.string "regiones, parece ser común allí.$"

DevonS10_DLC_Escena_Final_Texto_14:
.string "C.MIGUEL: Ciertamente, mi especialidad\n"
	.string "siempre fueron los FÓSILES. Tuve pocas\l"
	.string "oportunidades de salir de KANTO.$"

DevonS10_DLC_Escena_Final_Texto_15:
.string "????: Por ello decidiste unirte a DEVON,\n"
	.string "¿no? Uno de los puntos fuertes de\l"
	.string "HOENN son sus POKÉMON ancestrales.$"

DevonS10_DLC_Escena_Final_Texto_16:
.string "C.MIGUEL: Por supuesto, los FÓSILES\n"
	.string "siempre fueron mi pasión.$"

DevonS10_DLC_Escena_Final_Texto_17:
.string "Aunque{PAUSE 25}…{PAUSE 25} debo estarle agradecido,\n"
	.string "PRESIDENTE; esa breve expedición a los\l"
	.string "lugares ocultos de JOHTO ha cambiado\l"
	.string "mi forma de ver el mundo. Ahí fue\l"
	.string "cuando acepté definitivamente su\l"
	.string "proposición.$"

DevonS10_DLC_Escena_Final_Texto_18:
.string "????: Oh, desde luego. El DRAGÓN\n"
	.string "SAGRADO que estuvo investigando. Es\l"
	.string "posible que, después de todo, sea un\l"
	.string "FUERTE VÍNCULO, ¿no es así? El FUERTE\l"
	.string "VÍNCULO más puro y poderoso\l"
	.string "registrado.$"

DevonS10_DLC_Escena_Final_Texto_19:
.string "C.MIGUEL: Lo era, aunque{PAUSE 5}…{PAUSE 5}$"

DevonS10_DLC_Escena_Final_Texto_20:
.string "Puede que hubiera más de uno, uno\n"
	.string "similar pero{PAUSE 25}…{PAUSE 25} enterrado por la historia.$"

DevonS10_DLC_Escena_Final_Texto_21:
.string "????: Eso espero, al igual que le ha\n"
	.string "ocurrido a usted, al principio nosotros\l"
	.string "le contratamos por su dilatada\l"
	.string "experiencia con los FÓSILES, pero{PAUSE 5}…{PAUSE 5}$"

DevonS10_DLC_Escena_Final_Texto_22:
.string "El motivo primordial por el que ahora\n"
	.string "ocupa esta posición de privilegio, no\l"
	.string "es ese precisamente.$"

DevonS10_DLC_Escena_Final_Texto_23:
.string "Después de todo, puede que haya\n"
	.string "llegado su ocasión de desenterrar algo\l"
	.string "mucho más grande que cualquier FÓSIL,\l"
	.string "¿nos vamos entendiendo?$"

DevonS10_DLC_Escena_Final_Texto_24:
.string "C.MIGUEL: Nos entendemos\n"
	.string "perfectamente, PRESIDENTE.$"

DevonS10_DLC_Escena_Final_Texto_25:
.string "????: Eso es todo, esperaré con ansias\n"
	.string "sus avances.$"

DevonS10_DLC_Escena_Final_Texto_26:
.string "C.MIGUEL: Les demostraremos a todos tu\n"
	.string "verdadero poder, ¿verdad, WRONGSPACE?$"
