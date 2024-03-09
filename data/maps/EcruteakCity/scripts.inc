EcruteakCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, EcruteakCity_OnTransition
map_script MAP_SCRIPT_ON_FRAME_TABLE, EcruteakCity_OnFrame
	.byte 0

EcruteakCity_OnTransition::
setflag FLAG_VISITED_ECRUTEAK_CITY
end

EcruteakCity_OnFrame:
map_script_2 VAR_UNUSED_0x40FE, 3, Ecruteak_Conversacion_Agatha_Oak
	.2byte 0

EcruteakCity2::
lock         
msgbox EcruteakCity_Text_1, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_1:
.string "¡Así es!\n"
.string "¡Después de 5 años, he vuelto a\l"
.string "ver a esa gran bestia, corriendo\l"
.string "por los pastos con la fuerza de un\l"
.string "volcán en erupción!$"



EcruteakCity3::
lock        
msgbox EcruteakCity_Text_3, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_3:
.string "¡Eso es un buen presagio!\n"
.string "¡Grandes tiempos se avecinan en\l"
.string "nuestra JOHTO!$"



EcruteakCity4::
end



EcruteakCity5::
lock     
faceplayer     
msgbox EcruteakCity_Text_5, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_5:
.string "La huella de la historia aún se\n"
.string "deja entrever en lugares como\l"
.string "este.\l"
.string "Ya no podemos cambiar lo que fue,\l"
.string "pero podemos aprender de ello.$"



EcruteakCity6::
lock     
faceplayer     
msgbox EcruteakCity_Text_6, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_6:
.string "CIUDAD IRIS y MALVA son las únicas\n"
.string "que han conservado su esencia aún\l"
.string "con el paso del tiempo. Esperemos\l"
.string "que perduren en esta forma por\l"
.string "mucho más.$"



EcruteakCity8::
lock     
faceplayer     
msgbox EcruteakCity_Text_8, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_8:
.string "Lo podrás explicar, y la gente\n"
.string "podrá ver lo que han visto tus\l"
.string "ojos.\l"
.string "Podrás hacer fotografías y podrán\l"
.string "escuchar cómo silban los pájaros o\l"
.string "cómo la nieve mece las ramas de\l"
.string "los árboles.\l"
.string "Podrás escribirlo y podrán incluso\l"
.string "sentir el viento en la cara o el\l"
.string "olor a tierra mojada.\l"
.string "Pero nunca podrás lograr que\l"
.string "sientan la emoción que tú has\l"
.string "sentido al estar presente.$"



EcruteakCity9::
lock     
faceplayer     
msgbox EcruteakCity_Text_9, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_9:
.string "CIUDAD IRIS es la más antigua de\n"
.string "JOHTO. Sus dos pagodas se\l"
.string "construyeron hace 700 años, y una\l"
.string "de ellas aún se eleva como ninguna\l"
.string "otra torre en toda la región.\l"
.string "¡Aún más alto que esa aberración\l"
.string "de TRIGAL a la que llaman TORRE\l"
.string "RADIO!$"



EcruteakCity10::
lock     
faceplayer     
msgbox EcruteakCity_Text_10, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_10:
.string "Dos torres se elevaban sobre\n"
.string "CIUDAD IRIS, una al este y otra al\l"
.string "oeste. Ahora únicamente queda una,\l"
.string "y espero que se mantenga por\l"
.string "muchos siglos.$"



EcruteakCity11::
lock     
faceplayer     
msgbox EcruteakCity_Text_11, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_11:
.string "¡El TEATRO DE LA DANZA me viene\n"
.string "que ni pintado para mantenerme en\l"
.string "forma!$"



EcruteakCity12::
lock     
faceplayer     
msgbox EcruteakCity_Text_12, MSGBOX_DEFAULT
release     
end

EcruteakCity_Text_12:
.string "Adoro pasear por estas calles, es\n"
.string "como si continuara escribiendo la\l"
.string "magnífica historia de esta ciudad.$"



EcruteakCityDocumento_100::
msgbox EcruteakCityDocumento_Text_100, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_100:
.string "TORRE QUEMADA\n"
	.string "Destruida por un misterioso\l"
	.string "incendio hace 150 años.\l"
	.string "¡Atención!\l"
	.string "¡Peligro!$"



EcruteakCityDocumento_101::
msgbox EcruteakCityDocumento_Text_101, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_101:
	.string "GIMNASIO de CIUDAD IRIS\n"
	.string "LÍDER: JADEN\l"
	.string "Una leyenda del pasado en tiempos\l"
	.string "presentes.$"



EcruteakCityDocumento_102::
msgbox EcruteakCityDocumento_Text_102, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_102:
.string "CIUDAD IRIS\n"
	.string "Una ciudad donde conviven el\l"
	.string "pasado y el presente.$"



EcruteakCityDocumento_103::
msgbox EcruteakCityDocumento_Text_103, MSGBOX_SIGN   
end

EcruteakCityDocumento_Text_103:
	.string "TEATRO DE DANZA DE CIUDAD IRIS$"

EcruteakCity_Encuentro_Maestro::
lock
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_1
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
addobject 1
playse SE_EXIT
msgbox EcruteakCity_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
delay 30
fadescreen 1
playmoncry SPECIES_NOIVERN, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 1
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 7
playse SE_EXIT
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_2
waitmovement 0x0
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_4
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_5
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_6
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Encuentro_Maestro_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox EcruteakCity_Encuentro_Maestro_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Encuentro_Maestro_Move_8
waitmovement 0x0
special RemoveCameraObject
special SpawnCameraObject
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_9
applymovement OBJ_EVENT_ID_CAMERA, EcruteakCity_Encuentro_Maestro_Move_10
waitmovement 0x0
special RemoveCameraObject
applymovement 7, EcruteakCity_Encuentro_Maestro_Move_3
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_1
waitmovement 0x0
msgbox EcruteakCity_Encuentro_Maestro_Texto_6 MSGBOX_AUTOCLOSE
delay 20
fadescreen 1
playmoncry SPECIES_SALAMENCE, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 7
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
playse SE_M_FLY
delay 15
fadescreen 0
delay 20
setvar VAR_UNUSED_0x40F7, 158
release
end

EcruteakCity_Encuentro_Maestro_Texto_1:
.string "MIRTO: ...$"

EcruteakCity_Encuentro_Maestro_Texto_2:
.string "M.ANCIANO: Oh, {PLAYER}, qué rápido\n"
	.string "has venido.$"

EcruteakCity_Encuentro_Maestro_Texto_3:
.string "Es una pena lo de ese POKÉMON. Sin\n"
	.string "embargo, mientras dure, su brillo\l"
	.string "será el más intenso de entre los\l"
	.string "POKÉMON mortales. Creo que MIRTO\l"
	.string "está empezando a aceptar ese\l"
	.string "destino, y a darse cuenta de que\l"
	.string "no puede cambiarlo, pero sí elegir\l"
	.string "el modo de afrontarlo.$"

EcruteakCity_Encuentro_Maestro_Texto_4:
.string "Ah, {PLAYER}, mira esto, ¿no es\n"
	.string "magnífico?$"

EcruteakCity_Encuentro_Maestro_Texto_5:
.string "Supongo que no hay nada parecido a\n"
	.string "esto en KANTO, fue construida hace\l"
	.string "700 años. Aún hoy día existe un\l"
	.string "estrecho vínculo entre esta torre\l"
	.string "y HO-OH.$"

EcruteakCity_Encuentro_Maestro_Texto_6:
.string "El MAESTRO y LÍDER de CIUDAD IRIS\n"
	.string "está en la cima, esperándote.\l"
	.string "Adiós, {PLAYER}, seguro que\l"
	.string "tendremos oportunidad de volver a\l"
	.string "conversar.$"

EcruteakCity_Encuentro_Maestro_Move_1:
walk_in_place_right
step_end

EcruteakCity_Encuentro_Maestro_Move_2:
emote_exclamation_mark
step_end

EcruteakCity_Encuentro_Maestro_Move_3:
face_left
step_end

EcruteakCity_Encuentro_Maestro_Move_4:
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
walk_in_place_left
step_end

EcruteakCity_Encuentro_Maestro_Move_5:
walk_in_place_up
walk_in_place_left
step_end

EcruteakCity_Encuentro_Maestro_Move_6:
face_up
step_end

EcruteakCity_Encuentro_Maestro_Move_7:
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

EcruteakCity_Encuentro_Maestro_Move_8:
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

EcruteakCity_Encuentro_Maestro_Move_9:
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_in_place_up
step_end

EcruteakCity_Encuentro_Maestro_Move_10:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

Ecruteak_Cientifico_Secundaria::
lock
msgbox RuinsOfAlph_House_Mision_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
release
end

Ecruteak_Conversacion_Agatha_Oak::
lock
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, EcruteakCity_Encuentro_Maestro_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_Conversacion_Agatha_Oak_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_3
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_4
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, Ecruteak_Conversacion_Agatha_Oak_Move_5
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, Ecruteak_Conversacion_Agatha_Oak_Move_4
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_8 MSGBOX_AUTOCLOSE
delay 30
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_6
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement 15, Ecruteak_Conversacion_Agatha_Oak_Move_6
waitmovement 0x0
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 15
playse SE_M_FLY
delay 15
fadescreen 0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 14, EcruteakCity_Encuentro_Maestro_Move_2
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_16 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_2
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Ecruteak_Conversacion_Agatha_Oak_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_17 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Ecruteak_Conversacion_Agatha_Oak_Move_8
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_18 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_4
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_19 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_6
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_20 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_GENGARITE
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_21 MSGBOX_DEFAULT
waitfanfare
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 20
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_24 MSGBOX_AUTOCLOSE
applymovement 14, Ecruteak_Conversacion_Agatha_Oak_Move_5
waitmovement 0x0
msgbox Ecruteak_Conversacion_Agatha_Oak_Texto_25 MSGBOX_AUTOCLOSE
setflag FLAG_RECEIVED_SHOAL_SALT_3
fadescreen 1
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 14
playse SE_M_FLY
delay 15
fadescreen 0
setvar VAR_UNUSED_0x40FE, 4
release
end

Ecruteak_Conversacion_Agatha_Oak_Move_8:
walk_in_place_down
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_7:
walk_down
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_6:
face_up
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_5:
face_down
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_4:
face_right
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_3:
walk_in_place_up
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
step_end

Ecruteak_Conversacion_Agatha_Oak_Move_2:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
step_end

Ecruteak_Conversacion_Agatha_Oak_Texto_1:
.string "AGATHA: Sois incorregibles. El uno peor\n"
	.string "que el otro.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_2:
.string "Si pretendías continuar tu rivalidad\n"
	.string "con él durante todos estos años, al\l"
	.string "menos haberme avisado, creí que\l"
	.string "habías perdido todo entusiasmo por el\l"
	.string "combate.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_3:
.string "OAK: … …$"

Ecruteak_Conversacion_Agatha_Oak_Texto_4:
.string "AGATHA: Típico de ti, hacer todo desde\n"
	.string "las sombras y aparecer únicamente\l"
	.string "cuando el resultado hable por sí solo,\l"
	.string "¿verdad? En el fondo sabía que alguien\l"
	.string "como tú no caería en desesperanza.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_5:
.string "OAK: Hemos visto demasiado como para\n"
	.string "detenernos, no es lo que nuestros\l"
	.string "antepasados nos enseñaron. En cierto\l"
	.string "modo ya estamos ligados a ambas\l"
	.string "regiones, participamos de forma activa\l"
	.string "en su devenir, y su destino es el\l"
	.string "nuestro.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_6:
.string "A ti siempre te gustó CIUDAD IRIS, de\n"
	.string "niños nos llevaban a visitar TORRE\l"
	.string "CAMPANA. Ya ahí mostrabas entusiasmo\l"
	.string "por el TIPO FANTASMA.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_7:
.string "AGATHA: Fíjate en el paisaje{PAUSE 25}…{PAUSE 25} Es cómo\n"
	.string "revivir aquellos días, mis sentidos\l"
	.string "experimentan las mismas sensaciones\l"
	.string "que antaño, su frescura es similar.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_8:
.string "Este lugar no ha cambiado nada,\n"
	.string "¿verdad?$"

Ecruteak_Conversacion_Agatha_Oak_Texto_9:
.string "OAK: No... Hemos cambiado nosotros.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_10:
.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Ecruteak_Conversacion_Agatha_Oak_Texto_11:
.string "Sé que es contraria a la razón, pero\n"
	.string "siento que existe algo{PAUSE 25}…{PAUSE 25} espiritual{PAUSE 25}…{PAUSE 25} en\l"
	.string "este lugar. Y a pesar de no poder\l"
	.string "comprenderlo, es imposible ignorar su\l"
	.string "poder, su presencia.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_12:
.string "AGATHA: Hombres mayores y más sabios\n"
	.string "levantaron TORRE CAMPANA, muchos de\l"
	.string "sus secretos se perdieron en el tiempo.\l"
	.string "No podemos más que imaginar lo que\l"
	.string "pudo ser.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_13:
.string "OAK: Ni siquiera TORRE CAMPANA durará\n"
	.string "para siempre.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_14:
.string "AGATHA: Tan terco como siempre. Es ahí\n"
	.string "donde precisamente reside su valor, en\l"
	.string "su resistencia ante el cambio, dure lo\l"
	.string "que dure.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_15:
.string "…$"

Ecruteak_Conversacion_Agatha_Oak_Texto_16:
.string "¡Oh! ¿{PLAYER}?$"

Ecruteak_Conversacion_Agatha_Oak_Texto_17:
.string "¿Nos has escuchado?$"

Ecruteak_Conversacion_Agatha_Oak_Texto_18:
.string "¡Jah! ¿Qué te parece? Parece que a ese\n"
	.string "viejo carcamal aún le queda algo de\l"
	.string "nostalgia dentro de sí, aunque se\l"
	.string "niegue a reconocerlo.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_19:
.string "He disfrutado mucho este nuevo viaje a\n"
	.string "JOHTO. Por desgracia, también me han\l"
	.string "puesto al día de todo lo acontecido en\l"
	.string "TRIGAL.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_20:
.string "Mi renuncia al ALTO MANDO está cada vez\n"
	.string "más cerca. Por ahora volveré a PUEBLO\l"
	.string "LAVANDA, pero no quiero irme de JOHTO\l"
	.string "sin darte esto, {PLAYER}.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_21:
.string "¡¡OBTUVISTE UNA GENGARITA DE MANOS DE\n"
	.string "AGATHA!!$"

Ecruteak_Conversacion_Agatha_Oak_Texto_22:
.string "Con ese objeto, GENGAR podrá\n"
	.string "exprimir al 100% su potencial, un\l"
	.string "poder que aquellos acostumbrados a\l"
	.string "ver GASTLY y HAUNTER en TORRE\l"
	.string "LAVANDA nunca podrían imaginar en\l"
	.string "un TIPO FANTASMA.$"


Ecruteak_Conversacion_Agatha_Oak_Texto_23:
.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Ecruteak_Conversacion_Agatha_Oak_Texto_24:
.string "Me consta que a ese engendro al que\n"
	.string "llaman MEWTWO lo bautizaron\l"
	.string "erróneamente como el POKÉMON de mayor\l"
	.string "poder especial, MEGA-GENGAR lo supera\l"
	.string "y con creces en ese terreno. Pero\l"
	.string "claro, eso no lo sabían.$"

Ecruteak_Conversacion_Agatha_Oak_Texto_25:
.string "Así de subestimados están los POKÉMON\n"
	.string "mortales en estos tiempos.$"

