RuinsOfAlph_S5_MapScripts::
	.byte 0

RuinsOfAlph_S5_Final::
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_2
waitmovement 0x0
applymovement 3, RuinsOfAlph_S5_Final_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_5
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
playse SE_BALL
addobject 12
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_AQUA_GRUNT
removeobject 12
delay 15
clearflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
addobject 10
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 40
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
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
setflag FLAG_HIDE_TRICK_HOUSE_ENTRANCE_MAN
removeobject 10
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 40
playse SE_M_TELEPORT
delay 30
playse SE_RG_POKE_JUMP_SUCCESS
delay 40
playse SE_M_MOONLIGHT
delay 40
playse SE_M_CHARGE
delay 40
playse SE_M_COSMIC_POWER
delay 40
playse SE_BANG
delay 40
playse SE_M_EXPLOSION
delay 40
playse SE_RG_POKE_JUMP_SUCCESS
delay 40
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 4
fadescreen 2
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_5
waitmovement 0x0
special RemoveCameraObject
delay 40
playse MUS_B_PYRAMID_TOP
msgbox RuinsOfAlph_S5_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_9 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_6
applymovement 3, RuinsOfAlph_S5_Final_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_7
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
delay 40
msgbox RuinsOfAlph_S5_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 40
msgbox RuinsOfAlph_S5_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
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
	delay 50
	waitse
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
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
delay 15
removeobject 1
playmoncry SPECIES_RESHIRAM, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 10
playse SE_THUNDER
delay 20
playse SE_M_FLAMETHROWER
delay 20
playse SE_M_BLIZZARD2
delay 20
playse SE_M_STAT_INCREASE
delay 40
playse SE_M_CHARGE
delay 40
playse SE_M_HYPER_BEAM
delay 40
playse SE_M_HYPER_BEAM2
delay 40
playse SE_M_EXPLOSION
delay 40
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
addobject 2
clearflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
fadescreen 2
delay 15
playmoncry SPECIES_KYUREM, CRY_MODE_ENCOUNTER
waitmoncry
playse MUS_B_PYRAMID_TOP
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_8
applymovement 3, RuinsOfAlph_S5_Final_Move_8
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
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
	delay 50
	waitse
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
playse SE_M_DETECT
waitse
playfanfare MUS_AWAKEN_LEGEND
fadescreen 3
delay 15
removeobject 7
setflag FLAG_HIDE_ROUTE_119_RIVAL
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
delay 10
playse SE_M_RAZOR_WIND
delay 30
playse SE_RG_POKE_JUMP_SUCCESS
delay 40
playse SE_RG_DEOXYS_MOVE
delay 40
playse SE_M_MOONLIGHT
delay 20
playse SE_M_SOLAR_BEAM
delay 30
playse SE_USE_ITEM
delay 40
delay 15
applymovement 5, RuinsOfAlph_S4_Combate_Zeus_Move_3
waitmovement 0x0
addobject 5
clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
fadescreen 2
delay 15
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
playse MUS_B_PYRAMID_TOP
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_10
applymovement 3, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_11
waitmovement 0x0
special RemoveCameraObject
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
delay 40
msgbox RuinsOfAlph_S5_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 4, RuinsOfAlph_S5_Final_Move_12
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RuinsOfAlph_S5_Final_Move_13
waitmovement 0x0
special RemoveCameraObject
applymovement 3, RuinsOfAlph_S5_Final_Move_3
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox RuinsOfAlph_S5_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_1
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_20 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
setflag FLAG_HIDE_LANETTES_HOUSE_LANETTE
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
trainerbattle_no_intro TRAINER_CULTO_3, RuinsOfAlph_S5_Final_Texto_22
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
msgbox RuinsOfAlph_S5_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_14
applymovement 3, RuinsOfAlph_S5_Final_Move_14
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_10
applymovement 3, RuinsOfAlph_S5_Final_Move_10
waitmovement 0x0
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 55
msgbox RuinsOfAlph_S5_Final_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
delay 20
msgbox RuinsOfAlph_S5_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_NECROZMA, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RuinsOfAlph_S5_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 20
setflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
fadescreen 3
delay 20
playse SE_M_GUST
delay 40
playse SE_M_RAZOR_WIND
delay 40
removeobject 53
playse SE_M_CHARGE
delay 40
playse SE_M_SOLAR_BEAM
delay 40
playse SE_BREAKABLE_DOOR
delay 40
removeobject 3
addobject 12
fadescreen 2
delay 60
playse SE_M_EMBER
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
removeobject 12
delay 40
playse SE_THUNDER
setmetatile 13, 10, 0x334, TRUE
special DrawWholeMapView
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_14
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S5_Final_Move_4
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 177
setflag FLAG_EXPAND_MAX_LEVEL
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
release
end

RuinsOfAlph_S5_Final_Texto_1:
.string "JONES: ¿Tienes idea de dónde\n"
	.string "estamos {PLAYER}?$"

RuinsOfAlph_S5_Final_Texto_2:
.string "Así es, ahora mismo estamos\n"
	.string "enterrados cientos de metros bajo\l"
	.string "CIUDAD IRIS, justo en medio de\l"
	.string "TORRE CAMPANA y la mal llamada\l"
	.string "TORRE QUEMADA, otrora TORRE LATÓN.$"

RuinsOfAlph_S5_Final_Texto_3:
.string "Como ves, no existen los\n"
	.string "accidentes {PLAYER}, todo tiene un\l"
	.string "porqué. ¿Entiendes ahora por qué\l"
	.string "LUGIA y HO-OH eran requeridos para\l"
	.string "llegar hasta aquí?$"

RuinsOfAlph_S5_Final_Texto_4:
.string "Ambas torres llevan 700 años en\n"
	.string "pie...\l"
	.string "Una pequeña fracción comparado con\l"
	.string "el tiempo que nuestro culto lleva\l"
	.string "existiendo. Fue aquí donde emigró\l"
	.string "el POKÉMON ESENCIA después de que\l"
	.string "rechazara a nuestro culto.$"

RuinsOfAlph_S5_Final_Texto_5:
.string "¡Pero a KANTO pertenece!\n"
	.string "¡Y a KANTO volverá!\l"
	.string "¡El POKÉMON ESENCIA!$"

RuinsOfAlph_S5_Final_Texto_6:
.string "¡Observa atentamente {PLAYER}, las\n"
	.string "mayores fuerzas que existen en el\l"
	.string "universo están apunto de aparecer!$"

RuinsOfAlph_S5_Final_Texto_7:
.string "¡MEW!$"

RuinsOfAlph_S5_Final_Texto_8:
.string "Mi culto ha esperado esto por\n"
	.string "milenios, y ahora soy yo quien\l"
	.string "tiene el honor de, no solo\l"
	.string "presenciar, ¡sino también hacer\l"
	.string "uso del POKÉMON ESENCIA!$"

RuinsOfAlph_S5_Final_Texto_9:
.string "3...\n"
	.string "3 son los POKÉMON que, unidos, han\l"
	.string "formado todo cuanto hay, hubo y\l"
	.string "habrá, con sus diferencias,\l"
	.string "iguales entre ellos en poder\l"
	.string "global, de los 3 el más importante\l"
	.string "es el POKÉMON ESENCIA, pues\l"
	.string "gracias a él los otros dos pueden\l"
	.string "recobrar su ESENCIA PRIMIGENIA.$"

RuinsOfAlph_S5_Final_Texto_10:
.string "El DRAGÓN ORIGINAL, representa el\n"
	.string "equilibrio perfecto, la\l"
	.string "perfección, ÉL es el ancestro de\l"
	.string "todos los dragones, ya estaba\l"
	.string "antes de que el otro dios creador\l"
	.string "naciera del huevo que dio origen a\l"
	.string "este universo.$"

RuinsOfAlph_S5_Final_Texto_11:
.string "Ese iluso creía que bastaba con\n"
	.string "unir a los 3 DRAGONES DE TESELIA,\l"
	.string "pero solo el POKÉMON ESENCIA puede\l"
	.string "devolverle su forma original,\l"
	.string "anterior al BIG-GANG.\l"
	.string "¡Observa!$"

RuinsOfAlph_S5_Final_Texto_12:
.string "Su ofensiva es incomparable, dueño\n"
	.string "de los TIPOS ELEMENTALES,\l"
	.string "MEGA-RAYQUAZA no es más que una\l"
	.string "burda lagartija a su lado.$"

RuinsOfAlph_S5_Final_Texto_13:
.string "ARCEUS...\n"
	.string "El DIOS de nuestro universo, 15\l"
	.string "billones de años mermado por crear\l"
	.string "todo lo conocido, pero eso se\l"
	.string "acabó.$"

RuinsOfAlph_S5_Final_Texto_14:
.string "150 es el número dorado para los\n"
	.string "LEGENDARIOS MAYORES, ¡qué menos que\l"
	.string "sea la norma para el dios de\l"
	.string "dioses de este universo!$"

RuinsOfAlph_S5_Final_Texto_15:
.string "Y por último, el POKÉMON ESENCIA,\n"
	.string "intermediario entre los otros dos\l"
	.string "dioses, su reino es la materia\l"
	.string "oscura, el molde a partir del cual\l"
	.string "debe pasar todo proceso de\l"
	.string "creación, todos formamos parte de\l"
	.string "ÉL, por eso es omnipresente, y su\l"
	.string "única forma definida se encuentra\l"
	.string "aquí, a escasos metros de\l"
	.string "nosotros.$"

RuinsOfAlph_S5_Final_Texto_16:
.string "LUGIA y HO-OH permiten llegar\n"
	.string "hasta aquí, pero aquel que\l"
	.string "controle a MEW podrá hacer uso del\l"
	.string "POKÉMON ESENCIA, lamento tener que\l"
	.string "decírtelo ahora, pero no hubieras\l"
	.string "emprendido esta búsqueda de la\l"
	.string "misma manera.$"

RuinsOfAlph_S5_Final_Texto_17:
.string "Y ahora {PLAYER}...\n"
	.string "Llegó la hora de la verdad. Con el\l"
	.string "POKÉMON ESENCIA, el culto de\l"
	.string "LAVANDA alcanzará al fin ese\l"
	.string "estado de perfección, un nirvana\l"
	.string "eterno. Tú serás el primero en\l"
	.string "experimentar lo que se siente al\l"
	.string "luchar contra algo inalcanzable.$"

RuinsOfAlph_S5_Final_Texto_18:
.string "...$"

RuinsOfAlph_S5_Final_Texto_19:
.string "Los 3 juntos, unidos entre ellos\n"
	.string "ya forman la sinergia perfecta.\l"
	.string "Añadir cualquier otro POKÉMON a\l"
	.string "este equipo de 3 sería romper esa\l"
	.string "perfección. No necesito más que\l"
	.string "estos 3 POKÉMON para coronarme\l"
	.string "como el ENTRENADOR más poderoso de\l"
	.string "todos los tiempos, el resto están\l"
	.string "a años luz.$"

RuinsOfAlph_S5_Final_Texto_20:
.string "No hay posibilidad de escape, solo\n"
	.string "eres una parte del todo que estás\l"
	.string "apunto de enfrentar.$"

RuinsOfAlph_S5_Final_Texto_21:
.string "Lo siento {PLAYER}, habrías sido un\n"
	.string "gran miembro de nuestro culto y\l"
	.string "sabido apreciar al POKÉMON\l"
	.string "ESENCIA, pero...\l"
	.string "¡¡LA INMORTALIDAD ME ESPERA A MÍ!!$"

RuinsOfAlph_S5_Final_Texto_22:
.string "Esto no tiene sentido, ¡todo era\n"
	.string "perfecto!$"

RuinsOfAlph_S5_Final_Texto_23:
.string "No puede ser, estos 3 POKÉMON solo\n"
	.string "pueden derrotarse entre ellos,\l"
	.string "juntos forman un equipo\l"
	.string "invencible, ¿qué ha fallado?$"

RuinsOfAlph_S5_Final_Texto_24:
.string "¡k4nv%bjs&!$"

RuinsOfAlph_S5_Final_Texto_25:
.string "A...\n"
	.string "Ahora lo entiendo...\l"
	.string "He sido yo el que ha fallado...$"

RuinsOfAlph_S5_Final_Texto_26:
.string "Supongo que la perfección es\n"
	.string "algo relativo, ¿no, {PLAYER}?$"

RuinsOfAlph_S5_Final_Move_1:
walk_in_place_up
step_end

RuinsOfAlph_S5_Final_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

RuinsOfAlph_S5_Final_Move_3:
face_down
step_end

RuinsOfAlph_S5_Final_Move_4:
walk_in_place_down
step_end

RuinsOfAlph_S5_Final_Move_5:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

RuinsOfAlph_S5_Final_Move_6:
face_left
step_end

RuinsOfAlph_S5_Final_Move_7:
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
walk_fast_down
step_end

RuinsOfAlph_S5_Final_Move_8:
face_right
step_end

RuinsOfAlph_S5_Final_Move_9:
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

RuinsOfAlph_S5_Final_Move_10:
face_up
step_end

RuinsOfAlph_S5_Final_Move_11:
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
walk_fast_up
walk_fast_up
walk_fast_up
step_end


RuinsOfAlph_S5_Final_Move_12:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RuinsOfAlph_S5_Final_Move_13:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

RuinsOfAlph_S5_Final_Move_14:
emote_exclamation_mark
step_end


RuinsOfAlph_S5_Combate_Unown::
playse MUS_DUMMY
delay 50
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
applymovement 6, RuinsOfAlph_S5_Combate_Unown_Despierta
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_UNOWN, CRY_MODE_ENCOUNTER
waitmoncry
waitmovement 0x0
delay 20
msgbox RuinsOfAlph_S1_Combate_UnownDorado_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, RuinsOfAlph_S5_Combate_Unown_Despierta2
waitmovement 0x0
playse SE_BANG
waitse
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_ESENCIA_ZIGARDE, RuinsOfAlph_S5_Combate_Unown_Texto_2
playmoncry SPECIES_ARCEUS, CRY_MODE_ENCOUNTER
waitmoncry
setflag FLAG_HIDE_MT_CHIMNEY_TRAINERS
removeobject 6
playse SE_M_EMBER
msgbox RuinsOfAlph_S5_Combate_Unown_Texto_3 MSGBOX_AUTOCLOSE
release
end

RuinsOfAlph_S5_Combate_Unown_Texto_2:
.string "... ... ... ...$"

RuinsOfAlph_S5_Combate_Unown_Texto_3:
.string "(La energía misteriosa se ha\n"
	.string "esfumado)$"

RuinsOfAlph_S5_Combate_Unown_Despierta2:
walk_in_place_down
delay_4
face_left
step_end


RuinsOfAlph_S5_Combate_Unown_Despierta:
face_down
delay_4
face_up
delay_4
face_left
delay_4
walk_in_place_down
delay_4
walk_in_place_down
delay_4
walk_in_place_up
delay_4
walk_in_place_down
delay_4
walk_in_place_left
delay_4
walk_in_place_left
delay_4
step_end


RuinsOfAlph_S5_Mensaje_Esencia::
lockall
braillemessage RuinsOfAlph_S5_Mensaje_Esencia_Texto_1
delay 40
fadescreenspeed FADE_TO_BLACK, 12
delay 30
warpsilent MAP_RUINS_OF_ALPH_S3, 14, 10
release
end


RuinsOfAlph_S5_Mensaje_Esencia_Texto_1:
brailleformat 5, 0, 25, 19, 8, 3
	.braille "AHORA\n"
	.braille "ERES JOHTO.$"

