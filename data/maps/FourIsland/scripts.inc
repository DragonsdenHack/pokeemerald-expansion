FourIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
	.byte 0

FourIsland_OnTransition::
setflag FLAG_VISITED_FOUR_ISLAND
end

FourIsland1::
lock
faceplayer
msgbox FourIsland1_texto_1 MSGBOX_NPC
release
end

FourIsland1_texto_1:
	.string "Lo sentimos, pero estamos hasta arriba\n"
	.string "de trabajo, quizás en un futuro podamos\l"
	.string "criar a tus POKÉMON.$"


FourIsland2::
lock     
faceplayer     
msgbox FourIsland_Text_2, MSGBOX_DEFAULT
release     
end

FourIsland_Text_2:
.string "LORELEI ha vuelto.\p"
.string "Creo que el LAPRAS que tiene,\n"
.string "es el mismo que atrapó de pequeña.\p"
.string "Yo creo que se hizo con él\n"
.string "en la CUEVA GLACIADA…\p"
.string "Me parece que lo tiene desde\n"
.string "entonces.$"


FourIsland3::
end


FourIsland4::
lock     
faceplayer     
msgbox FourIsland_Text_4, MSGBOX_DEFAULT
release     
end

FourIsland_Text_4:
.string "¡Uyyy, qué fresquito!\p"
.string "Me he hecho un granizado con\n"
.string "hielo de la CUEVA GLACIADA.\p"
.string "¡Está fresquito y riquísimo!$"


FourIsland5::
lock     
faceplayer     
msgbox FourIsland_Text_5, MSGBOX_DEFAULT
release     
end

FourIsland_Text_5:
.string "¡Me has encontrado!\n"
.string "¡No se lo digas a LORELEI!\p"
.string "¿Sabías que LORELEI tiene un\n"
.string "montón de muñecos de peluche?\p"
.string "¡Cada vez que vuelve a ISLA\n"
.string "QUARTA, aumenta la colección!$"

FourIsland6::
end

FourIsland7::
end



FourIslandDocumento_100::
msgbox FourIslandDocumento_Text_100, MSGBOX_SIGN   
end

FourIslandDocumento_Text_100:
.string "ISLA CUARTA\n"
	.string "El cálido y azul témpano flotante.$"



FourIslandDocumento_101::
msgbox FourIslandDocumento_Text_101, MSGBOX_SIGN   
end

FourIslandDocumento_Text_101:
.string "Casa de LORELEI$"

FourIsland_Encuentro_Zeus_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, FourIsland_Encuentro_Zeus_Move_1
waitmovement 0x0
goto FourIsland_Encuentro_Zeus

FourIsland_Encuentro_Zeus_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, FourIsland_Encuentro_Zeus_Move_1.1
waitmovement 0x0
goto FourIsland_Encuentro_Zeus

FourIsland_Encuentro_Zeus::
msgbox FourIsland_Encuentro_Zeus_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 9, FourIsland_Encuentro_Zeus_Move_2
waitmovement 0x0
delay 15
applymovement 9, FourIsland_Encuentro_Zeus_Move_3
waitmovement 0x0
fadeoutbgm 0
playse 586
msgbox FourIsland_Encuentro_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox FourIsland_Encuentro_Zeus_Texto_3 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, FourIsland_Encuentro_Zeus_Move_4
waitmovement 0x0
msgbox FourIsland_Encuentro_Zeus_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, FourIsland_Encuentro_Zeus_Move_5
waitmovement 0x0
msgbox FourIsland_Encuentro_Zeus_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, FourIsland_Encuentro_Zeus_Move_6
waitmovement 0x0
msgbox FourIsland_Encuentro_Zeus_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox FourIsland_Encuentro_Zeus_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox FourIsland_Encuentro_Zeus_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
fadescreen 1
delay 20
removeobject 9
fadescreen 0
fadeoutbgm 0
playse 548
setvar VAR_UNUSED_0x40F7, 96
release
end

FourIsland_Encuentro_Zeus_Texto_1:
.string "????: Maldición, dónde las habrá\n"
	.string "guardado…$"

FourIsland_Encuentro_Zeus_Texto_2:
.string "No pareces ser de por aquí,\n"
	.string "tampoco pareces ser un entrenador\l"
	.string "normal y corriente, pero qué\l"
	.string "importa eso, todos los\l"
	.string "entrenadores junto a sus POKÉMON\l"
	.string "son iguales ante el creador de\l"
	.string "todo.$"

FourIsland_Encuentro_Zeus_Texto_3:
.string "Voy tras la pista de dos\n"
	.string "peligrosos delincuentes, alguien\l"
	.string "muy sabio confinó en estas islas a\l"
	.string "dos POKÉMON ANCESTRALES hace\l"
	.string "cientos de años, dos POKÉMON de un\l"
	.string "poder capaz de hacer temblar al\l"
	.string "mundo y modificar sus condiciones\l"
	.string "climáticas.$"

FourIsland_Encuentro_Zeus_Texto_4:
.string "Estos dos POKÉMON duermen en algún\n"
	.string "lugar, sellado y alejado de la\l"
	.string "civilización, pero dentro del\l"
	.string "territorio de las ISLAS SETE, eso\l"
	.string "es seguro.$"

FourIsland_Encuentro_Zeus_Texto_5:
.string "Vine hasta aquí por la leyenda que\n"
	.string "había acerca de esta cueva de un\l"
	.string "poderoso POKÉMON del tipo HIELO y\l"
	.string "AGUA, pero lo máximo que he podido\l"
	.string "encontrar son LAPRAS salvajes, no\l"
	.string "parece que haya nada interesante\l"
	.string "aquí.$"

FourIsland_Encuentro_Zeus_Texto_6:
.string "Mi próximo destino es la CUEVA\n"
	.string "CAMBIANTE, al norte de ISLA EXTA,\l"
	.string "allí hay unas enormes pisadas que\l"
	.string "coinciden con las de uno de los\l"
	.string "dos POKÉMON ANCESTRALES.$"

FourIsland_Encuentro_Zeus_Texto_7:
.string "Debo encontrar a esos POKÉMON\n"
	.string "antes de que esos fanáticos lo\l"
	.string "hagan, ahora que saben como\l"
	.string "despertarlos, no puedo permitir\l"
	.string "que eso ocurra.$"

FourIsland_Encuentro_Zeus_Texto_8:
.string "{PAUSE 15}…{PAUSE 15}$"

FourIsland_Encuentro_Zeus_Texto_9:
.string "Si ves algo fuera de lo normal,\n"
	.string "avísame de inmediato, estaré\l"
	.string "investigando en la CUEVA\l"
	.string "CAMBIANTE, hasta la vista,\l"
	.string "-ENTRENADOR-.$"

FourIsland_Encuentro_Zeus_Move_1:
face_right
step_end

FourIsland_Encuentro_Zeus_Move_1.1:
walk_right
walk_in_place_right
step_end

FourIsland_Encuentro_Zeus_Move_2:
emote_exclamation_mark
step_end

FourIsland_Encuentro_Zeus_Move_3:
walk_left
walk_left
walk_left
step_end

FourIsland_Encuentro_Zeus_Move_4:
face_up
step_end

FourIsland_Encuentro_Zeus_Move_5:
face_left
step_end

FourIsland_Encuentro_Zeus_Move_6:
walk_in_place_left
step_end


FourIsland_Secundaria_Anciana::
lock
faceplayer
compare VAR_ROUTE109_STATE, 6
goto_if_eq FourIsland_Secundaria_Anciana_4
compare VAR_ROUTE109_STATE, 5
goto_if_eq FourIsland_Secundaria_Anciana_3
compare VAR_ROUTE109_STATE, 3
goto_if_gt FourIsland_Secundaria_Anciana_2
msgbox FourIsland_Secundaria_Anciana_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FourIsland_Secundaria_Anciana_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_4
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_5
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_5 MSGBOX_AUTOCLOSE
msgbox FourIsland_Secundaria_Anciana_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_4
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_6.1 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_5
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE109_STATE, 4
release
end

FourIsland_Secundaria_Anciana_2::
msgbox FourIsland_Secundaria_Anciana_Texto_7 MSGBOX_AUTOCLOSE
release
end

FourIsland_Secundaria_Anciana_3::
delay 20
msgbox FourIsland_Secundaria_Anciana_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox FourIsland_Secundaria_Anciana_Texto_12 MSGBOX_DEFAULT
waitse
playse SE_PIN
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_8 MSGBOX_AUTOCLOSE
delay 30
msgbox FourIsland_Secundaria_Anciana_Texto_9 MSGBOX_AUTOCLOSE
msgbox FourIsland_Secundaria_Anciana_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM85
msgbox FourIsland_Secundaria_Anciana_Texto_13 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE109_STATE, 6
release
end

FourIsland_Secundaria_Anciana_4::
msgbox FourIsland_Secundaria_Anciana_Texto_11 MSGBOX_AUTOCLOSE
release
end

FourIsland_Secundaria_Anciana_Texto_1:
.string "¿Qué trae a un jovencito como tú a un\n"
	.string "lugar como este? Aquí no hay nada que\l"
	.string "pueda interesarte. Solo LORELEI viene\l"
	.string "por aquí de vez en cuando, es el lugar\l"
	.string "que la vio crecer.$"

FourIsland_Secundaria_Anciana_Texto_2:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

FourIsland_Secundaria_Anciana_Texto_3:
.string "Así que derrotaste a LORELEI en un\n"
	.string "combate, debes ser muy fuerte.$"

FourIsland_Secundaria_Anciana_Texto_4:
.string "Ella se forjó entrenando en la CUEVA\n"
	.string "GLACIADA. Muchos creen que solo hay\l"
	.string "LAPRAS, pero te diré un secreto, un\l"
	.string "POKÉMON muy poderoso del TIPO HIELO\l"
	.string "vive ahí. Mis abuelos ya contaban\l"
	.string "leyendas.$"

FourIsland_Secundaria_Anciana_Texto_5:
.string "LORELEI nunca pudo encontrarlo,\n"
	.string "tampoco lo buscó más de la cuenta,\l"
	.string "siempre se centró en cuidar de su\l"
	.string "LAPRAS.$"

FourIsland_Secundaria_Anciana_Texto_6:
.string "Pero más allá del pequeño lago tras\n"
	.string "subir la cascada, hay algo{PAUSE 25}…{PAUSE 25} de un poder\l"
	.string "especial.$"

FourIsland_Secundaria_Anciana_Texto_6.1:
	.string "Tal vez si revisas las rocas, puedas\n"
	.string "encontrar un hueco por el que seguir\l"
	.string "adelante, aunque parezca que no es\l"
	.string "posible{PAUSE 15}…{PAUSE 15} Eso es lo que diferencia a los\l"
	.string "entrenadores de verdad, el ir más allá\l"
	.string "de los límites aparentes, ¿no?$"

FourIsland_Secundaria_Anciana_Texto_7:
.string "Si llegaras a encontrar algo, ¿podrías\n"
	.string "mostrarme ese POKÉMON tan especial?$"

FourIsland_Secundaria_Anciana_Texto_8:
.string "¡Oh! Así que al fin y al cabo, la leyenda\n"
	.string "era cierta, nuestra CUEVA GLACIADA\l"
	.string "escondía un POKÉMON tan majestuoso.$"

FourIsland_Secundaria_Anciana_Texto_9:
.string "Mira{PAUSE 25}…{PAUSE 25} es puro hielo, LORELEI sentiría\n"
	.string "muchos celos de ti ahora mismo, chico,\l"
	.string "te lo puedo asegurar.$"

FourIsland_Secundaria_Anciana_Texto_10:
.string "Ten esto, mi regalo por hacer que una\n"
	.string "anciana como yo vuelva a sentir ilusión\l"
	.string "por los misterios de este mundo.$"

FourIsland_Secundaria_Anciana_Texto_11:
.string "Ayyy{PAUSE 25}…{PAUSE 25} Cuantos misterios aún por\n"
	.string "resolver, si LORELEI dedicando toda su\l"
	.string "vida al TIPO HIELO, no ha sabido\l"
	.string "encontrar a ese POKÉMON en su propia\l"
	.string "isla{PAUSE 25}…{PAUSE 25} ¿Cuántos POKÉMON increíbles\l"
	.string "habrá ahí fuera esperando?$"

FourIsland_Secundaria_Anciana_Texto_12:
	.string "¡{PLAYER} mostró el GLASTRIER a la\n"
	.string "ANCIANA!$"

FourIsland_Secundaria_Anciana_Texto_13:
	.string "¡Obtuviste MT85 AVALANCHA\n"
	.string "de manos de ANCIANA!$"



Isla_Cuarta_Activador_Entrada::
compare VAR_ROUTE109_STATE, 3
goto_if_gt Isla_Cuarta_Activador_Entrada_Pasa
release
end

Isla_Cuarta_Activador_Entrada_Pasa::
delay 15
msgbox Isla_Cuarta_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Cuarta_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_2
waitmovement 0x0
release
end

Isla_Cuarta_Activador_Entrada_Pasa_Move_1:
emote_exclamation_mark
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_3:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_4:
face_up
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_5:
face_player
step_end

Isla_Cuarta_Activador_Entrada_Texto_1:
.string "… …$"

Isla_Cuarta_Activador_Entrada_Pasa_Text_YesNo:
.string "Esta roca está prácticamente hundida,\n"
	.string "si vas con cuidado podrías\l"
	.string "atravesarla. ¿Quieres intentarlo?$"



Isla_Cuarta_Activador_Entrada_2::
compare VAR_ROUTE109_STATE, 3
goto_if_gt Isla_Cuarta_Activador_Entrada_Pasa_2
release
end

Isla_Cuarta_Activador_Entrada_Pasa_2::
delay 15
msgbox Isla_Cuarta_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Cuarta_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_3
waitmovement 0x0
release
end
