Ecruteak_TinTowerRoof_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Ecruteak_TinTowerRoof_OnFrame
	.byte 0

Ecruteak_TinTowerRoof_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 178, Ecruteak_TinTowerRoof_Final
	.2byte 0


Ecruteak_TinTowerRoof_Zeus::
lockall
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
addobject 2
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_1
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_2
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_3
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_JADEN, Ecruteak_TinTowerRoof_Zeus_Texto_5
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_7 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
addobject 1
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_5
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_5
waitmovement 0x0
delay 30
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_6.1
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_7
waitmovement 0x0
delay 40
setvar VAR_TEMP_1, 1
special SpawnCameraObject
setvar VAR_0x8004, 4  @ num loops
setvar VAR_0x8005, 35 @ delay
applymovement 1, NavelRock_Top_Movement_HoOhAppear
applymovement 1, LugiaBattle_Move_1
applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanUp
waitmovement 0
setvar VAR_0x8004, 4  @ num loops
	setvar VAR_0x8005, 35 @ delay
	special LoopWingFlapSE
	applymovement OBJ_EVENT_ID_CAMERA, NavelRock_Top_Movement_CameraPanDown
	applymovement 1, NavelRock_Top_Movement_HoOhApproach
	waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_3
applymovement 1, LugiaBattle_Move_2
waitmovement 0
special RemoveCameraObject
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LugiaBattle_Move_4
waitmovement 0
special RemoveCameraObject
delay 40
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_8 MSGBOX_AUTOCLOSE
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_9 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_10 MSGBOX_AUTOCLOSE
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_11 MSGBOX_AUTOCLOSE
delay 30
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 1, Ecruteak_TinTowerRoof_Zeus_Move_12
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_12 MSGBOX_AUTOCLOSE
delay 30
playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_14
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_14
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Zeus_Move_15
waitmovement 0x0
special RemoveCameraObject
delay 30
fadescreen 1
playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
waitmoncry
addobject 3
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_13 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Zeus_Move_16
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_16
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_1
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
playse SE_BALL
addobject 6
delay 20
playse SE_BALL_OPEN
setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
removeobject 6
delay 15
clearflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
addobject 4
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_14 MSGBOX_AUTOCLOSE
waitmoncry
playse SE_PIN
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_17
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_15 MSGBOX_AUTOCLOSE
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_14 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
delay 15
playse SE_M_ROCK_THROW
waitse
playse SE_SUPER_EFFECTIVE
waitse
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_FAINT
waitse
delay 10
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
removeobject 1
delay 15
setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
removeobject 4
delay 10
addobject 5
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
fadescreen 0
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_18
waitmovement 0x0
delay 15
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_2_BLOCKING_ENTRANCE
removeobject 5
delay 15
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_19
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_20
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_1
waitmovement 0x0
delay 10
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_19 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Zeus_Move_21
waitmovement 0x0
special RemoveCameraObject
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_22
waitmovement 0x0
delay 15
playse SE_USE_ITEM
special HealPlayerParty
delay 20
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_20 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_8
waitmovement 0x0
waitse
delay 10
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_20.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_3, Ecruteak_TinTowerRoof_Zeus_Texto_21
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_22 MSGBOX_AUTOCLOSE
applymovement 3, Ecruteak_TinTowerRoof_Zeus_Move_21
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_23 MSGBOX_AUTOCLOSE
playmoncry SPECIES_RAYQUAZA, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 3
waitfieldeffect FLDEFF_NPCFLY_OUT
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_TinTowerRoof_Zeus_Move_23
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_24
waitmovement 0x0
delay 10
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Ecruteak_TinTowerRoof_Zeus_Move_25
waitmovement 0x0
delay 10
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_26 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_27 MSGBOX_DEFAULT
givemon SPECIES_FLABEBE, 25, ITEM_NONE
waitfanfare
delay 10
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_11.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM60
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_11.2 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_27.1 MSGBOX_NPC
playfanfare MUS_OBTAIN_BADGE
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_27.2 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_TinTowerRoof_Zeus_Texto_28 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setflag FLAG_BADGE12_GET
clearflag FLAG_RECEIVED_SHOAL_SALT_1
setflag FLAG_HIDE_PETALBURG_GYM_WALLY
setvar VAR_UNUSED_0x40FE, 3
setvar VAR_UNUSED_0x40F7, 160
clearflag FLAG_RECEIVED_SHOAL_SALT_3
release
end

Ecruteak_TinTowerRoof_Zeus_Texto_11.2:
.string "¡¡{PLAYER} obtuvo la MT60 PSICOCARGA\n"
	.string "de manos de JADEN!!$"

Ecruteak_TinTowerRoof_Zeus_Texto_11.1:
.string "Y esta MT también, sabrás usarla.$"

Ecruteak_TinTowerRoof_Zeus_Texto_1:
.string "????: Acércate, {PLAYER}.\p"
	.string "Estaba esperándote.$"

Ecruteak_TinTowerRoof_Zeus_Texto_2:
.string "M.JADEN: Antaño, este lugar era el\n"
	.string "nido de HO-OH, el punto más alto\l"
	.string "de JOHTO junto con TORRE LATÓN.\p"
	.string "Ambos, puntos de unión para las\n"
	.string "dos leyendas de nuestra región.$"

Ecruteak_TinTowerRoof_Zeus_Texto_3:
.string "Sé lo que estás buscando, quieres\n"
	.string "combatir frente a mí para ponerte\l"
	.string "a prueba junto con tus POKÉMON.\p"
	.string "El ENTRENADOR vive para combatir,\n"
	.string "¿no es así? Para alcanzar cotas cada\l"
	.string "vez mayores.\p"
	.string "Por eso estamos aquí, y no encerrados\n"
	.string "en el GIMNASIO de CIUDAD IRIS.$"

Ecruteak_TinTowerRoof_Zeus_Texto_4:
.string "Es aquí donde yo, uno de los 2\n"
	.string "GRANDES MAESTROS de JOHTO, accedo\l"
	.string "a combatir contra ti, con las\l"
	.string "cenizas de lo que una vez fue un\l"
	.string "imponente HO-OH como terreno sobre\l"
	.string "el que desplegaremos nuestro arsenal.\p"
	.string "¡Conocerás de una vez por\n"
	.string "todas JOHTO en toda su esencia!$"

Ecruteak_TinTowerRoof_Zeus_Texto_5:
.string "Los dioses han presenciado este\n"
	.string "combate, no te quepa duda.$"

Ecruteak_TinTowerRoof_Zeus_Texto_6:
.string "Tengo que darte las gracias.\p"
	.string "Tu espíritu inquebrantable ha honrado\n"
	.string "este lugar, con un combate para la\l"
	.string "historia. No, no se equivocaron\l"
	.string "contigo, ni AGATHA ni MIRTO{PAUSE 15}…{PAUSE 15}$"

Ecruteak_TinTowerRoof_Zeus_Texto_7:
.string "Realmente estoy impresionado, el\n"
	.string "intercambio de poder y energías\l"
	.string "aquí acontecido ha rozado la\l"
	.string "perfección, ha sido incluso digno\l"
	.string "de presenciar del mismísimo H{PAUSE 5}…{PAUSE 5}$"

Ecruteak_TinTowerRoof_Zeus_Texto_8:
.string "Es{PAUSE 15}…{PAUSE 15}\p"
	.string "HO-OH{PAUSE 15}…{PAUSE 15}$"

Ecruteak_TinTowerRoof_Zeus_Texto_9:
.string "¿Te das cuenta, {PLAYER}?$"

Ecruteak_TinTowerRoof_Zeus_Texto_10:
.string "El choque de nuestros POKÉMON ha\n"
	.string "llamado la atención de HO-OH, lo ha\l"
	.string "interpretado como una manifestación\l"
	.string "de lo elevado, lo eterno.\p"
	.string "Atraído por esto, ha vuelto a\n"
	.string "TORRE CAMPANA una vez más.$"

Ecruteak_TinTowerRoof_Zeus_Texto_11:
.string "Esta es la prueba, {PLAYER}.\p"
	.string "La prueba de que unos mortales como\n"
	.string "nosotros pueden codearse con las\l"
	.string "fuerzas mayores de este mundo y,\l"
	.string "junto con sus mortales POKÉMON,\l"
	.string "cruzar también el olimpo.$"

Ecruteak_TinTowerRoof_Zeus_Texto_12:
.string "Siempre tuve mis dudas, pero ahora\n"
	.string "estoy seguro, con HO-OH delante\l"
	.string "mía, puedo percibir la grandeza y\l"
	.string "potencial único en cada uno de los\l"
	.string "POKÉMON de est{PAUSE 15}…{PAUSE 15}$"

Ecruteak_TinTowerRoof_Zeus_Texto_13:
.string "????: No me haga reír, no sois más que\n"
	.string "polvo, vosotros y vuestros POKÉMON.$"

Ecruteak_TinTowerRoof_Zeus_Texto_14:
.string "¡Don!$"

Ecruteak_TinTowerRoof_Zeus_Texto_15:
.string "ZEUS: ¡GROUDON!\p"
	.string "¡ROCA AFILADA!$"

Ecruteak_TinTowerRoof_Zeus_Texto_16:
.string "M.JADEN: ¡Vil canalla!\p"
	.string "¿Cómo te atreves a hacer\n"
	.string "eso con algo tan puro?$"

Ecruteak_TinTowerRoof_Zeus_Texto_17:
.string "¡No eres más que un mercenario que\n"
	.string "se dedica a recolectar LEGENDARIOS,\l"
	.string "aprovechando el talento de otros!\l"
	.string "¡Qué conveniente que aparezcas\l"
	.string "justo después de nuestro combate!\p"
	.string "¡Si {PLAYER} o yo tuvieramos a\n"
	.string "nuestros POKÉMON frescos, nos\l"
	.string "encargaríamos de darte una buena\l"
	.string "lección! ¡Así uses a todos los\l"
	.string "LEGENDARIOS del mundo, un bellaco\l"
	.string "como tú jamás podrá conectar con\l"
	.string "esa clase de fuerzas divinas!$"

Ecruteak_TinTowerRoof_Zeus_Texto_18:
.string "ZEUS: No he venido hasta aquí para\n"
	.string "que un vejestorio de TORRE CAMPANA\l"
	.string "me dé lecciones morales.$"

Ecruteak_TinTowerRoof_Zeus_Texto_19:
.string "Solo he venido a recuperar lo que\n"
	.string "por derecho propio me pertenece.\p"
	.string "¿Crees que te necesito a ti, o\n"
	.string "a {PLAYER}, para lograrlo?\p"
	.string "¿De verdad crees que necesito que\n"
	.string "vuestros equipos estén mermados?\p"
	.string "Podría aplastaros a los 2 juntos\n"
	.string "y a vuestros POKÉMON en plenitud\l"
	.string "sin pestañear.\p"
	.string "¿Quieres una pequeña prueba?\p"
	.string "La tendrás.$"

Ecruteak_TinTowerRoof_Zeus_Texto_20:
.string "Se acabaron los juegos, {PLAYER}.\n"
	.string "Con tus acciones, me has dejado\l"
	.string "claro que te entrometes en mi\l"
	.string "propósito. No me dejas otra opción\l"
	.string "que obligarme a usar el 80% de mi\l"
	.string "poder.\p"
	.string "Nadie te salvará, los dioses de\n"
	.string "los que este anciano habla{PAUSE 15}…{PAUSE 15}$"

Ecruteak_TinTowerRoof_Zeus_Texto_20.1:
	.string "¡¡Yo tengo a esos dioses!!$"

Ecruteak_TinTowerRoof_Zeus_Texto_21:
.string "¿Cómo puede ser esto posible?$"

Ecruteak_TinTowerRoof_Zeus_Texto_22:
.string "ZEUS: Esto{PAUSE 15}…{PAUSE 15}\p"
	.string "Mi equipo aún es incompleto, pero ya\n"
	.string "debería de ser más que suficiente para\l"
	.string "arrollar a cualquier ENTRENADOR.\p"
	.string "No lo comprendo{PAUSE 15}…{PAUSE 15}$"

Ecruteak_TinTowerRoof_Zeus_Texto_23:
.string "No{PAUSE 25}…{PAUSE 25}\p"
	.string "La diferencia entre el 80% y el\n"
	.string "100% no es del 20%, es{PAUSE 25}…{PAUSE 25} todo…\p"
	.string "Un poder inabordable, indiscutible.\p"
	.string "Eso es, ahora solo me falta una pieza\n"
	.string "para reunirlo, y sé quién la tiene.$"

Ecruteak_TinTowerRoof_Zeus_Texto_24:
.string "M.JADEN: Esto es terrible…\p"
	.string "¡Tenemos que avisar al MAESTRO\n"
	.string "DRAGÓN de CIUDAD ENDRINO!\p"
	.string "¡Solo es cuestión de tiempo que ese\n"
	.string "loco encuentre el paso helado que\l"
	.string "conduce a la ciudad oculta entre\l"
	.string "las montañas!$"

Ecruteak_TinTowerRoof_Zeus_Texto_25:
.string "¡Oh, {PLAYER}!\p"
	.string "¡No tengo palabras!\p"
	.string "¡A eso me refería cuando\n"
	.string "HO-OH apareció!\p"
	.string "Por mucho que quiera negarlo, le\n"
	.string "has demostrado que la fuerza bruta\l"
	.string "y los STATS BASE no lo son todo.\p"
	.string "¡Tus POKÉMON mortales pueden\n"
	.string "competir contra las mayores\l"
	.string "deidades de este mundo!$"

Ecruteak_TinTowerRoof_Zeus_Texto_26:
.string "Toma, {PLAYER}, quiero que tengas a\n"
	.string "este POKÉMON. Lo traje de una\l"
	.string "región lejana, pero el ambiente de\l"
	.string "CIUDAD IRIS le encanta.$"

Ecruteak_TinTowerRoof_Zeus_Texto_27:
.string "¡¡OBTUVISTE UN FLABÉBÉ AL Nv.25!!$"

Ecruteak_TinTowerRoof_Zeus_Texto_27.1:
	.string "Además, llévate nuestra\n"
	.string "medalla como recuerdo.$"

Ecruteak_TinTowerRoof_Zeus_Texto_27.2:
	.string "¡Aquí tienes la\n"
	.string "MEDALLA NIEBLA!$"

Ecruteak_TinTowerRoof_Zeus_Texto_28:
.string "Presentía que algo grande\n"
	.string "ocurriría con tu llegada a TORRE\l"
	.string "CAMPANA, pero esto ha superado\l"
	.string "toda expectativa. Si me disculpas,\l"
	.string "tengo que enviar a un mensajero\l"
	.string "hacia CIUDAD ENDRINO, ha sido un\l"
	.string "placer poder combatir contigo aquí.$"

Ecruteak_TinTowerRoof_Zeus_Move_1:
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_2:
walk_up
walk_up
walk_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_3:
walk_in_place_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_4:
face_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_5:
emote_exclamation_mark
face_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_6:
walk_right
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_6.1:
walk_left
walk_up
walk_up
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_7:
walk_right
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_8:
delay_2
delay_4
walk_in_place_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_9:
walk_up
walk_up
walk_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_10:
delay_2
delay_4
walk_down
walk_down
walk_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_11:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_down
delay_2
delay_4
step_end


Ecruteak_TinTowerRoof_Zeus_Move_12:
walk_in_place_down
delay_2
step_end

Ecruteak_TinTowerRoof_Zeus_Move_13:
face_left
step_end

Ecruteak_TinTowerRoof_Zeus_Move_14:
emote_exclamation_mark
face_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_15:
walk_fast_down
walk_fast_down
walk_fast_left
step_end

Ecruteak_TinTowerRoof_Zeus_Move_16:
walk_up
walk_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_17:
emote_exclamation_mark
step_end

Ecruteak_TinTowerRoof_Zeus_Move_18:
face_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_19:
face_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_20:
walk_fast_left
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Zeus_Move_21:
walk_right
step_end

Ecruteak_TinTowerRoof_Zeus_Move_22:
walk_left
walk_in_place_down
step_end

Ecruteak_TinTowerRoof_Zeus_Move_23:
face_right
step_end

Ecruteak_TinTowerRoof_Zeus_Move_24:
face_left
step_end

Ecruteak_TinTowerRoof_Zeus_Move_25:
walk_in_place_left
step_end


Ecruteak_TinTowerRoof_Final::
lockall
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
addobject 2
applymovement 2, Ecruteak_TinTowerRoof_Final_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_TinTowerRoof_Final_Move_2
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
fadescreen 1
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
addobject 1
fadescreen 0
setvar VAR_0x8004, 3  @ num loops
	setvar VAR_0x8005, 40 @ delay
	special LoopWingFlapSE
applymovement 1, Ecruteak_TinTowerRoof_Final_Move_3
waitmovement 0x0
delay 15
msgbox Ecruteak_TinTowerRoof_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Ecruteak_TinTowerRoof_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Ecruteak_TinTowerRoof_Final_Move_4
waitmovement 0x0
msgbox Ecruteak_TinTowerRoof_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
playmoncry SPECIES_HO_OH, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
playse SE_M_FLY
waitse
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_2F_POKE_BALL
setflag FLAG_HIDE_AQUA_HIDEOUT_1F_GRUNT_1_BLOCKING_ENTRANCE
removeobject 2
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 179
delay 28
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
checkplayergender
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

Ecruteak_TinTowerRoof_Final_Texto_1:
.string "M.JADEN: Una vez más, has vuelto.$"

Ecruteak_TinTowerRoof_Final_Texto_2:
.string "{PAUSE 35}…{PAUSE 35}$"

Ecruteak_TinTowerRoof_Final_Texto_3:
.string "Parece que JOHTO está en buenas\n"
	.string "manos.$"

Ecruteak_TinTowerRoof_Final_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_up
step_end

Ecruteak_TinTowerRoof_Final_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

Ecruteak_TinTowerRoof_Final_Move_3:
walk_slow_down
walk_in_place_down
walk_in_place_down
walk_in_place_down
walk_in_place_down
delay_4
step_end

Ecruteak_TinTowerRoof_Final_Move_4:
face_down
step_end
