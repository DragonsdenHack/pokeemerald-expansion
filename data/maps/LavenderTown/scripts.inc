LavenderTown_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_OnFrame
map_script MAP_SCRIPT_ON_TRANSITION, LavenderTown_OnTransition
	.byte 0

LavenderTown_OnTransition::
setflag FLAG_VISITED_LAVENDER_TOWN
end

LavenderTown_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 185, LavenderTown_Cierre_Torre
	.2byte 0

LavenderTown1::
lock     
faceplayer     
msgbox LavenderTown_Text1, MSGBOX_DEFAULT
release     
end

LavenderTown_Text1:
.string "¡No tenéis vergüenza ni respeto\n"
.string "alguno por las costumbres de\l"
.string "nuestra región!$"


LavenderTown2::
lock     
faceplayer     
msgbox LavenderTown_Text2, MSGBOX_DEFAULT
release     
end

LavenderTown_Text2:
.string "Este pueblo es conocido como el\n"
.string "lugar de descanso de los POKÉMON.\l"
.string "En la TORRE POKÉMON se llevan a\l"
.string "cabo actos conmemorativos.$"



LavenderTownDocumento_100::
msgbox LavenderTownDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_100:
.string "CASA DE VOLUNTARIOS DE LAVANDA$"



LavenderTownDocumento_101::
msgbox LavenderTownDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_101:
.string "¡Nuevo SILPH SCOPE!\n"
	.string "¡Hace visible lo invisible!\p"
	.string "SILPH CO.$"



LavenderTownDocumento_102::
msgbox LavenderTownDocumento_Text_102, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_102:
	.string "PUEBLO LAVANDA\n"
	.string "El noble pueblo púrpura.$"



LavenderTownDocumento_103::
msgbox LavenderTownDocumento_Text_103, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_103:
	.string "TORRE POKÉMON\n"
	.string "Reposo de los espíritus caídos$"


LavenderTown_3::
lock
faceplayer
msgbox LavenderTown_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq LavenderTown_3No
msgbox LavenderTown_3_Text_3Yes, MSGBOX_DEFAULT
release
end



LavenderTown_3_Text_3YesNo:
    .string "¿Crees en los GHOSTS?$"


LavenderTown_3No::
msgbox LavenderTown_3_Text_3No, MSGBOX_DEFAULT
release
end


LavenderTown_3_Text_3Yes:
    .string "¿En serio?\n"
	.string "Hay quien no cree…{PAUSE 5}$"



LavenderTown_3_Text_3No:
	.string "Hahaha, ya lo sabía.\n"
	.string "Esa mano blanca detrás de tu\l"
	.string "hombro no es real.$"

LavenderTown_Barrera_Mision_Kangaskhan::
compare VAR_UNUSED_0x40F7, 54
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 50
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_3
compare VAR_UNUSED_0x40F7, 43
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Mision_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Mision_Kangaskhan_2::
release
end

LavenderTown_Barrera_Mision_Kangaskhan_3::
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Mision_Kangaskhan_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Mision_Kangaskhan_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Mision_Kangaskhan_Texto_1:
.string "(GIOVANNI dejó claro que había que\n"
	.string "alejarse de la TORRE POKÉMON)$"

LavenderTown_Barrera_Mision_Kangaskhan_Texto_2:
.string "(ROJO aún puede estar dentro de\n"
	.string "TORRE POKÉMON)$"

LavenderTown_Barrera_Mision_Kangaskhan_Move_1:
walk_in_place_up
step_end

LavenderTown_Barrera_Mision_Kangaskhan_Move_2:
walk_slow_down
step_end

VermilionCity_Barco_Zarpa::
compare VAR_UNUSED_0x40F7, 94
goto_if_gt VermilionCity_Barco_Zarpa_2
release
end

VermilionCity_Barco_Zarpa_2::
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox VermilionCity_Barco_Zarpa_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

VermilionCity_Barco_Zarpa_Texto_1:
.string "El barco zarpó.$"


LavenderTown_Barrera_Sur::
compare VAR_UNUSED_0x40F7, 62
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox LavenderTown_Barrera_Sur_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

LavenderTown_Barrera_Sur_Texto_1:
.string "(Esa ruta no se corresponde con\n"
	.string "ninguna misión asignada, mejor no\l"
	.string "perder el tiempo).$"

LavenderTown_Barrera_Sur_Move_1:
walk_in_place_down
step_end

LavenderTown_Barrera_Sur_Move_2:
walk_slow_up
step_end


LavenderTown_Cierre_Torre::
lock
clearflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
addobject 4
addobject 5
addobject 7
addobject 8
addobject 9
addobject 10
addobject 11
addobject 12
addobject 14
addobject 15
addobject 16
applymovement 3, LavenderTown_Cierre_Torre_Move_2
applymovement 2, LavenderTown_Cierre_Torre_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Cierre_Torre_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 40
playse SE_EXIT
clearflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
addobject 6
msgbox LavenderTown_Cierre_Torre_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, LavenderTown_Cierre_Torre_Move_4
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, LavenderTown_Cierre_Torre_Move_6
applymovement 8, LavenderTown_Cierre_Torre_Move_6
applymovement 9, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_7
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_8
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, LavenderTown_Cierre_Torre_Move_4
applymovement 11, LavenderTown_Cierre_Torre_Move_5
applymovement 9, LavenderTown_Cierre_Torre_Move_5
applymovement 8, LavenderTown_Cierre_Torre_Move_9
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_7 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Cierre_Torre_Texto_8 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
msgbox LavenderTown_Cierre_Torre_Texto_9 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_6
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_10 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_5
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_11 MSGBOX_AUTOCLOSE
applymovement 8, LavenderTown_Cierre_Torre_Move_10
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderTown_Cierre_Torre_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 7, LavenderTown_Cierre_Torre_Move_11
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_14 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 8
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
applymovement 9, LavenderTown_Cierre_Torre_Move_10
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox LavenderTown_Cierre_Torre_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 9, LavenderTown_Cierre_Torre_Move_4
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_17 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_12
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_18 MSGBOX_AUTOCLOSE
applymovement 9, LavenderTown_Cierre_Torre_Move_13
waitmovement 0x0
msgbox LavenderTown_Cierre_Torre_Texto_19 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
delay 10
fadescreen 1
playmoncry SPECIES_SKARMORY, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 9
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
applymovement 11, LavenderTown_Cierre_Torre_Move_16
waitmovement 0x0
delay 10
msgbox LavenderTown_Cierre_Torre_Texto_20 MSGBOX_AUTOCLOSE
addobject 13
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LavenderTown_Cierre_Torre_Move_14
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_CUBONE, CRY_MODE_ENCOUNTER
msgbox LavenderTown_Cierre_Torre_Texto_21 MSGBOX_AUTOCLOSE
waitmoncry
delay 30
applymovement 13, LavenderTown_Cierre_Torre_Move_15
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 186
warpsilent MAP_BASE_ROCKET_HOENN, 29, 34
release
end

LavenderTown_Cierre_Torre_Move_16:
walk_in_place_up
step_end

LavenderTown_Cierre_Torre_Move_15:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

LavenderTown_Cierre_Torre_Move_14:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

LavenderTown_Cierre_Torre_Move_13:
walk_left
step_end

LavenderTown_Cierre_Torre_Move_12:
walk_right
step_end

LavenderTown_Cierre_Torre_Move_11:
emote_exclamation_mark
step_end

LavenderTown_Cierre_Torre_Move_10:
walk_slow_up
step_end

LavenderTown_Cierre_Torre_Move_9:
walk_down
walk_in_place_right
step_end

LavenderTown_Cierre_Torre_Move_8:
walk_slow_down
step_end

LavenderTown_Cierre_Torre_Move_7:
walk_up
face_right
step_end

LavenderTown_Cierre_Torre_Move_6:
face_up
step_end

LavenderTown_Cierre_Torre_Move_5:
face_left
step_end

LavenderTown_Cierre_Torre_Move_4:
face_right
step_end

LavenderTown_Cierre_Torre_Move_3:
walk_down
step_end

LavenderTown_Cierre_Torre_Move_2:
walk_right
face_up
step_end

LavenderTown_Cierre_Torre_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

LavenderTown_Cierre_Torre_Texto_1:
.string "CONSTRUCTOR: Procedo a cerrar la zona,\n"
	.string "a partir de ahora nadie podrá volver a\l"
	.string "entrar al lugar. Todas las tumbas y\l"
	.string "POKÉMON han sido evacuados con éxito.$"

LavenderTown_Cierre_Torre_Texto_2:
.string "FUJI: No te preocupes, AGATHA. Estoy\n"
	.string "construyendo un gran CEMENTERIO\l"
	.string "subterráneo para alojar todas las\l"
	.string "almas desplazadas.$"

LavenderTown_Cierre_Torre_Texto_3:
.string "AGATHA: Oh, FUJI{PAUSE 25}…{PAUSE 25} Es el fin de una era,\n"
	.string "¿qué haremos ahora?$"

LavenderTown_Cierre_Torre_Texto_4:
.string "ATLAS: Este puede ser el comienzo de la\n"
	.string "mejor era en la historia de KANTO.$"

LavenderTown_Cierre_Torre_Texto_5:
.string "AGATHA: No podemos olvidar de dónde\n"
	.string "venimos, esta TORRE lleva siglos en pie,\l"
	.string "alojó a todos los caídos tras la\l"
	.string "guerra. Cómo podrá entenderse la\l"
	.string "historia de KANTO sin uno de sus\l"
	.string "mayores símbolos, ¿también ocultarás\l"
	.string "su pasado?$"

LavenderTown_Cierre_Torre_Texto_6:
.string "ATLAS: Lo que TORRE LAVANDA ha sido\n"
	.string "para KANTO está celosamente\l"
	.string "documentado, ya nada podrá borrar su\l"
	.string "papel en la historia. Dentro de 1000\l"
	.string "años sabrán lo mismo que hoy sabemos\l"
	.string "nosotros acerca de este lugar. Su\l"
	.string "memoria perdurará, si es lo que te\l"
	.string "preocupa.$"

LavenderTown_Cierre_Torre_Texto_7:
.string "AGATHA: ¿Pero por qué? ¿Por qué\n"
	.string "destruirla? ¿Por qué no construir una\l"
	.string "torre gemela al este?$"

LavenderTown_Cierre_Torre_Texto_8:
.string "ATLAS: En ocasiones lo viejo debe\n"
	.string "desaparecer, para que lo nuevo pueda\l"
	.string "prosperar.$"

LavenderTown_Cierre_Torre_Texto_9:
.string "AGATHA: ¡Es innecesario!$"

LavenderTown_Cierre_Torre_Texto_10:
.string "ATLAS: Que TORRE LAVANDA desaparezca\n"
	.string "envía un poderoso mensaje a KANTO.\l"
	.string "Prepara a toda la región para nuevos\l"
	.string "tiempos y les libera de su pasado.$"

LavenderTown_Cierre_Torre_Texto_11:
.string "Es necesario, AGATHA. Forma parte del\n"
	.string "proceso de cambio, por mucho que duela.$"

LavenderTown_Cierre_Torre_Texto_12:
.string "AGATHA: Así que{PAUSE 25}…{PAUSE 25} No queda ya nada para\n"
	.string "mí en esta región pues{PAUSE 5}…{PAUSE 5}$"

LavenderTown_Cierre_Torre_Texto_13:
.string "AGATHA: Adiós, FUJI.$"

LavenderTown_Cierre_Torre_Texto_14:
.string "FUJI: ¡Espera, AGATHA!$"

LavenderTown_Cierre_Torre_Texto_15:
.string "ATLAS: Los cambios radicales siempre\n"
	.string "implican este tipo de pérdidas, hay que\l"
	.string "seguir adelante. Espero que esto no\l"
	.string "cambie nada en tu labor para con\l"
	.string "LAVANDA, FUJI.$"

LavenderTown_Cierre_Torre_Texto_16:
.string "FUJI: {PAUSE 5}…{PAUSE 5}$"

LavenderTown_Cierre_Torre_Texto_17:
.string "BILL: ¡Si esa anciana supiera lo que\n"
	.string "vamos a montar dentro de la nueva\l"
	.string "TORRE RADIO! ¡Se hubiera ido aún más\l"
	.string "disgustada!$"

LavenderTown_Cierre_Torre_Texto_18:
.string "ATLAS: Muestra más respeto y sé más\n"
	.string "discreto, BILL. No te hemos contratado\l"
	.string "para que te vayas de la lengua con\l"
	.string "asuntos de este calibre.$"

LavenderTown_Cierre_Torre_Texto_19:
.string "Ya no hay nada que ver aquí, preparáos\n"
	.string "para lo que viene.$"

LavenderTown_Cierre_Torre_Texto_20:
.string "BILL: Bah, ¡solo era una broma!$"

LavenderTown_Cierre_Torre_Texto_21:
.string "¡Bone!$"

LavenderTown_Dialogo_Obrero::
lock
faceplayer
msgbox LavenderTown_Dialogo_Obrero_Texto_1 MSGBOX_AUTOCLOSE
release
end

LavenderTown_Dialogo_Obrero_Texto_1:
.string "Lo siento, pero el tiempo para ver la\n"
	.string "TORRE POKÉMON pasó. Ahora solo podrá\l"
	.string "ser vista a través de los libros de\l"
	.string "historia.$"

LavenderTown_Entrevista_Oak::
lock
msgbox LavenderTown_Entrevista_Oak_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_2 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_4 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_5 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_6 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_7 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_8 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_9 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_10 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_11 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_12 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_13 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_14 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_15 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_16 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_17 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_18 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_19 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_20 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_21 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_22 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_23 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_24 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_25 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_26 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_27 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_28 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_29 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_30 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_31 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Entrevista_Oak_Texto_32 MSGBOX_AUTOCLOSE
release
end

LavenderTown_Entrevista_Oak_Texto_1:
	.string "PERIODISTA: Estamos con SAMUEL OAK; 7\n"
	.string "veces CAMPEÓN de la LIGA POKÉMON de\l"
	.string "KANTO durante las décadas de 1970 y\l"
	.string "1980.$"

LavenderTown_Entrevista_Oak_Texto_2:
	.string "Más tarde su figura fue crucial para\n"
	.string "alcanzar la paz con JOHTO.$"

LavenderTown_Entrevista_Oak_Texto_3:
	.string "Investigador de renombre, brillante\n"
	.string "entrenador; para muchos la mayor leyenda\l"
	.string "viva de esta región.$"

LavenderTown_Entrevista_Oak_Texto_4:
	.string "Dígame. Alguien como usted,\n"
	.string "¿qué espera de KANTO?$"

LavenderTown_Entrevista_Oak_Texto_5:
	.string "OAK: Verá, me he llevado muchas\n"
	.string "desilusiones esperando cosas a lo largo\l"
	.string "de estos años.$"

LavenderTown_Entrevista_Oak_Texto_6:
	.string "A estas alturas, si alguien espera algo,\n"
	.string "es la propia KANTO la que espera algo de\l"
	.string "mí.$"

LavenderTown_Entrevista_Oak_Texto_7:
	.string "Ahora trato de servirle humildemente, y\n"
	.string "lo que tenga que venir vendrá.$"

LavenderTown_Entrevista_Oak_Texto_8:
	.string "PERIODISTA: No le ha ido mal con esa\n"
	.string "forma de pensar, recientemente inventó\l"
	.string "la POKÉDEX.$"

LavenderTown_Entrevista_Oak_Texto_9:
	.string "OAK: Así es. El inventar la POKÉDEX para\n"
	.string "jóvenes entrenadores y reabrir el\l"
	.string "campeonato de la liga son dos\l"
	.string "iniciativas de las que me siento muy\l"
	.string "orgulloso.$"

LavenderTown_Entrevista_Oak_Texto_10:
	.string "PERIODISTA: Aún así, muchos dicen que\n"
	.string "ya no es el mismo, que se ha acomodado.\l"
	.string "¿Qué les diría?$"

LavenderTown_Entrevista_Oak_Texto_11:
	.string "OAK: Que el mundo es mucho más amplio\n"
	.string "que un simple combate entre dos\l"
	.string "equipos de seis POKÉMON.$"

LavenderTown_Entrevista_Oak_Texto_12:
	.string "PERIODISTA: Entiendo, estos años ha\n"
	.string "estado con otros menesteres. Una\l"
	.string "última pregunta, esta es un tanto…$"

LavenderTown_Entrevista_Oak_Texto_13:
	.string "OAK: ¿Un tanto?$"

LavenderTown_Entrevista_Oak_Texto_14:
	.string "PERIODISTA: No sé si usted puede\n"
	.string "ayudarnos.$"

LavenderTown_Entrevista_Oak_Texto_15:
	.string "Al consultar los archivos dentro del CG\n"
	.string "de la LIGA POKÉMON, vimos que el título\l"
	.string "de CAMPEÓN figuraba con una 'X' hasta\l"
	.string "en 8 ocasiones durante las décadas de\l"
	.string "1970 y 1980.$"

LavenderTown_Entrevista_Oak_Texto_16:
	.string "¿Sabe usted el motivo? ¿Hay algún\n"
	.string "nombre detrás de esa 'X'?$"

LavenderTown_Entrevista_Oak_Texto_17:
	.string "OAK: Verá, tengo la mala costumbre de\n"
	.string "olvidar todo nombre que no merezca la\l"
	.string "pena ser recordado.$"

LavenderTown_Entrevista_Oak_Texto_18:
	.string "Pero, hablando en serio…$"

LavenderTown_Entrevista_Oak_Texto_19:
	.string "...veo ya tan lejana, tan borrosa la\n"
	.string "KANTO del pasado, que a veces pienso\l"
	.string "que no es más que un sueño. Un sueño\l"
	.string "pavoroso.$"

LavenderTown_Entrevista_Oak_Texto_20:
	.string "Puede haber mil motivos: Datos que se\n"
	.string "perdieron tras la guerra, años en los\l"
	.string "que no se celebró, victorias de\l"
	.string "entrenadores extranjeros…$"

LavenderTown_Entrevista_Oak_Texto_21:
	.string "PERIODISTA: Entiendo. Pero no deja de\n"
	.string "ser un misterio fascinante.$"

LavenderTown_Entrevista_Oak_Texto_22:
	.string "OAK: ¡Oh, desde luego!$"

LavenderTown_Entrevista_Oak_Texto_23:
	.string "Cuestionar la realidad e imaginar un\n"
	.string "mundo que va más allá de lo que ven\l"
	.string "nuestros ojos, es un gran ejercicio.$"

LavenderTown_Entrevista_Oak_Texto_24:
	.string "Yo también soy un soñador, ¿sabe? Y a\n"
	.string "veces creo en imposibles.$"

LavenderTown_Entrevista_Oak_Texto_25:
	.string "'El ENTRENADOR -X- que ganó 8\n"
	.string "campeonatos de la liga y fue borrado de\l"
	.string "la historia '.$"

LavenderTown_Entrevista_Oak_Texto_26:
	.string "Sería una agradable ficción.$"

LavenderTown_Entrevista_Oak_Texto_27:
	.string "Pero yo estuve ahí, y lamento decirle\n"
	.string "que ese entrenador no existe.$"

LavenderTown_Entrevista_Oak_Texto_28:
	.string "PERIODISTA: Muchas gracias por su\n"
	.string "tiempo.$"

LavenderTown_Entrevista_Oak_Texto_29:
	.string "Ahora nos espera su antigua amiga,\n"
	.string "AGATHA, dentro de TORRE POKÉMON. ¿No\l"
	.string "nos acompaña?$"

LavenderTown_Entrevista_Oak_Texto_30:
	.string "OAK: … …$"

LavenderTown_Entrevista_Oak_Texto_31:
	.string "Aún es pronto para eso.$"

LavenderTown_Entrevista_Oak_Texto_32:
	.string "PERIODISTA: Oh, vaya. Como usted\n"
	.string "quiera.$"

LavenderTown_Agatha::
lock
msgbox LavenderTown_Agatha_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_2 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_4 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_5 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_6 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_7 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_8 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_9 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_10 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_11 MSGBOX_AUTOCLOSE
msgbox LavenderTown_Agatha_Texto_12 MSGBOX_AUTOCLOSE
release
end

LavenderTown_Agatha_Texto_1:
	.string "¡{PLAYER}! ¡Obraste el milagro!$"

LavenderTown_Agatha_Texto_2:
	.string "¡Tu gesta en la LIGA POKÉMON es lo más\n"
	.string "grande que he presenciado en décadas!$"

LavenderTown_Agatha_Texto_3:
	.string "Ahora, cada vez que paseo por estas\n"
	.string "calles, no veo más que brotes verdes y\l"
	.string "rayos de esperanza para KANTO.$"

LavenderTown_Agatha_Texto_4:
	.string "Y esa paz, aunque provisional, es\n"
	.string "gracias a ti.$"

LavenderTown_Agatha_Texto_5:
	.string "Que estemos atravesando tiempos tan\n"
	.string "inciertos me ha hecho más consciente\l"
	.string "de lo afortunados que somos.$"

LavenderTown_Agatha_Texto_6:
	.string "Solo... mira TORRE POKÉMON.$"

LavenderTown_Agatha_Texto_7:
	.string "Yo crecí en este lugar. Después de\n"
	.string "tantos años, vuelvo a valorarla como\l"
	.string "merece.$"

LavenderTown_Agatha_Texto_8:
	.string "Aquí aprendí todo lo que sé sobre el\n"
	.string "tipo fantasma, y si algo me quedó claro,\l"
	.string "es que los grandes misterios del mundo\l"
	.string "van más allá de lo que podemos ver con\l"
	.string "los ojos.$"

LavenderTown_Agatha_Texto_9:
	.string "Pero no has venido hasta aquí para oír\n"
	.string "los arrebatos de nostalgia de una\l"
	.string "anciana como yo, ¿verdad?$"

LavenderTown_Agatha_Texto_10:
	.string "… …$"

LavenderTown_Agatha_Texto_11:
	.string "¡Oh, vas tras más misterios! En ese caso\n"
	.string "quizás pueda ayudarte.$"

LavenderTown_Agatha_Texto_12:
	.string "Acompáñame.$"
