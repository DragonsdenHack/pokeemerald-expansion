GraniteCave_3F_MapScripts::
	.byte 0

GraniteCave_Encuentro_Esmeralda_Move_1:
walk_in_place_up
step_end

GraniteCave_Encuentro_Esmeralda_Move_2:
delay_16
face_down
delay_16
step_end

GraniteCave_Encuentro_Esmeralda_Move_3:
walk_in_place_down
step_end

GraniteCave_Encuentro_Esmeralda_Move_4:
delay_16
face_right
delay_16
face_up
delay_16
step_end

GraniteCave_Encuentro_Esmeralda_Move_5:
walk_up
walk_right
walk_right
walk_up
step_end

GraniteCave_Encuentro_Esmeralda_Move_6:
walk_right
face_left
step_end

GraniteCave_Encuentro_Esmeralda_Move_7:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

GraniteCave_Encuentro_Esmeralda_Move_7.1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

GraniteCave_Encuentro_Esmeralda_Move_8:
delay_16
face_right
step_end

GraniteCave_Encuentro_Esmeralda_Move_9:
walk_in_place_left
step_end

GraniteCave_Encuentro_Esmeralda_Move_10:
emote_exclamation_mark
step_end

GraniteCave_Encuentro_Esmeralda_Move_11:
delay_16
walk_up
walk_right
walk_right
step_end

GraniteCave_Encuentro_Esmeralda_Move_12:
walk_up
face_down
step_end

GraniteCave_Encuentro_Esmeralda_Move_16.1:
walk_left
step_end

GraniteCave_Encuentro_Esmeralda::
lock
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_1
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_2
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_3
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_4
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox GraniteCave_Encuentro_Esmeralda_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox GraniteCave_Encuentro_Esmeralda_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_2
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_5
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_5
waitmovement 0x0
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_Encuentro_Esmeralda_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox GraniteCave_Encuentro_Esmeralda_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox GraniteCave_Encuentro_Esmeralda_Texto_8 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, GraniteCave_Encuentro_Esmeralda_Move_7.1
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_8
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_9
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox GraniteCave_Encuentro_Esmeralda_Texto_10 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_10
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_11
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_12
waitmovement 0x0
delay 50
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_13
waitmovement 0x0
delay 20
msgbox GraniteCave_Encuentro_Esmeralda_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_14
waitmovement 0x0
delay 10
msgbox GraniteCave_Encuentro_Esmeralda_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_9
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_15
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_16
waitmovement 0x0
delay 20
msgbox GraniteCave_Encuentro_Esmeralda_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_16.1
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_607, GraniteCave_Encuentro_Esmeralda_Texto_17
delay 15
msgbox GraniteCave_Encuentro_Esmeralda_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_17
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_10
waitmovement 0x0
delay 15
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_13
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox GraniteCave_Encuentro_Esmeralda_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_9
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_22 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_GALARICA_CUFF
msgbox GraniteCave_Encuentro_Esmeralda_Texto_23 MSGBOX_DEFAULT
waitfanfare
msgbox GraniteCave_Encuentro_Esmeralda_Texto_24 MSGBOX_AUTOCLOSE
delay 20
msgbox GraniteCave_Encuentro_Esmeralda_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_9
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_26 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_10
waitmovement 0x0
delay 35
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_13
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_27 MSGBOX_AUTOCLOSE
delay 35
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_18
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_28 MSGBOX_AUTOCLOSE
applymovement 1, GraniteCave_Encuentro_Esmeralda_Move_19
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, GraniteCave_Encuentro_Esmeralda_Move_13
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_18
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_28.1 MSGBOX_AUTOCLOSE
delay 25
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_16
waitmovement 0x0
msgbox GraniteCave_Encuentro_Esmeralda_Texto_29 MSGBOX_AUTOCLOSE
applymovement 2, GraniteCave_Encuentro_Esmeralda_Move_20
waitmovement 0x0
playse SE_FALL
setflag FLAG_HOENN_13
removeobject 2
waitse
setvar VAR_UNUSED_0x40F7, 242
delay 15
release
end

GraniteCave_Encuentro_Esmeralda_Move_20:
walk_down
walk_left
walk_left
walk_left
walk_up
walk_up
walk_left
walk_up
walk_left
step_end

GraniteCave_Encuentro_Esmeralda_Move_19:
walk_right
walk_up
step_end

GraniteCave_Encuentro_Esmeralda_Move_18:
face_right
step_end

GraniteCave_Encuentro_Esmeralda_Move_17:
face_up
step_end

GraniteCave_Encuentro_Esmeralda_Move_16:
walk_in_place_right
step_end

GraniteCave_Encuentro_Esmeralda_Move_15:
walk_slow_down
face_left
step_end

GraniteCave_Encuentro_Esmeralda_Move_14:
face_up
delay_16
delay_8
face_left
step_end

GraniteCave_Encuentro_Esmeralda_Move_13:
face_left
step_end

GraniteCave_Encuentro_Esmeralda_Texto_1:
	.string "TRISTANA: ¿Lo ves? ¿Qué esperabas?\n"
	.string "¿Una súper base de 12 sótanos cada uno\l"
	.string "del tamaño de MALVALONA?$"

GraniteCave_Encuentro_Esmeralda_Texto_2:
	.string "¡Vamos, {PLAYER}!$"

GraniteCave_Encuentro_Esmeralda_Texto_3:
	.string "Si de verdad crees eso es porque\n"
	.string "vosotros tenéis algo así por KANTO, ¿o\l"
	.string "me equivoco?$"

GraniteCave_Encuentro_Esmeralda_Texto_4:
	.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

GraniteCave_Encuentro_Esmeralda_Texto_5:
	.string "Te niegas a confirmar o desmentir esa\n"
	.string "información, ¿eh? Eso quiere decir que\l"
	.string "sí. ¿En AZULONA, tal vez?$"

GraniteCave_Encuentro_Esmeralda_Texto_6:
	.string "Pero no te preocupes, a nosotros no nos\n"
	.string "importa. Observa.$"

GraniteCave_Encuentro_Esmeralda_Texto_7:
	.string "DEVON no es como el TEAM ROCKET, aquí\n"
	.string "solo nos dedicamos a estudiar los\l"
	.string "FÓSILES de HOENN en profundidad.$"

GraniteCave_Encuentro_Esmeralda_Texto_8:
	.string "Olvídate de locas teorías de la\n"
	.string "conspiración, en las que solo buscamos\l"
	.string "más poder para controlar HOENN, ¿será\l"
	.string "que vosotros hacéis eso en KANTO?$"

GraniteCave_Encuentro_Esmeralda_Texto_9:
	.string "Te confesaré algo, {PLAYER}. La pista\n"
	.string "que te dí sobre el CASINO MALVALONA\l"
	.string "fue genuina.$"

GraniteCave_Encuentro_Esmeralda_Texto_10:
	.string "Pero que pudieras entrar a MALVALANOVA\n"
	.string "fue iniciativa del DR.RASMUS. Después\l"
	.string "de verte en el MT.CENIZO quiso poner a\l"
	.string "prueba a tu equipo.$"

GraniteCave_Encuentro_Esmeralda_Texto_11:
	.string "De igual forma, si te he enseñado este\n"
	.string "lugar no es porque yo quiera: nuestro\l"
	.string "2do ADMIN en jerarquía quiere tener unas\l"
	.string "palabras contigo.$"

GraniteCave_Encuentro_Esmeralda_Texto_12:
	.string "ADM.ESMERALDA: ADMINISTRADOR JEFE\n"
	.string "{PLAYER}. Ya tuvimos el placer de\l"
	.string "vernos en TORRE LAVANDA, aunque… tu\l"
	.string "presencia me recuerda a la de un\l"
	.string "ENTRENADOR que nos topamos en ISLA\l"
	.string "PRIMA, hace ya tiempo.$"

GraniteCave_Encuentro_Esmeralda_Texto_13:
	.string "Como puedes ver, esta es una humilde\n"
	.string "zona de investigación. Aquí nos\l"
	.string "centramos en extraer el poder latente\l"
	.string "de los FÓSILES endémicos de HOENN:\l"
	.string "ARMALDO, CRADILY y RELICANTH.$"

GraniteCave_Encuentro_Esmeralda_Texto_14:
	.string "Estamos al tanto de vuestros logros\n"
	.string "con AERODACTYL. Además, el AKUERIA que\l"
	.string "el ADMIN.ZAFIRO analizó en el LAGO\l"
	.string "FURIA puede ser también considerado un\l"
	.string "FÓSIL viviente.$"

GraniteCave_Encuentro_Esmeralda_Texto_15:
	.string "Pero en DEVON sabemos que el potencial\n"
	.string "de los FÓSILES y POKÉMON ANCESTRALES\l"
	.string "de HOENN es incomparable.$"

GraniteCave_Encuentro_Esmeralda_Texto_16:
	.string "No hace falta que me creas, {PLAYER}.\n"
	.string "¡Vas a verlo con tus propios ojos!$"

GraniteCave_Encuentro_Esmeralda_Texto_17:
	.string "Impresionante.$"

GraniteCave_Encuentro_Esmeralda_Texto_18:
	.string "No en vano eres el mejor ENTRENADOR de\n"
	.string "entre los ROCKET, ¿o no? Seguro que\l"
	.string "podrías haberle dado más pelea a\l"
	.string "nuestro ADMIN.AMATISTA de lo que la\l"
	.string "otra ADMIN hizo.$"

GraniteCave_Encuentro_Esmeralda_Texto_19:
	.string "Dejando eso de lado, me gustaría que\n"
	.string "aceptes nuestras disculpas.$"

GraniteCave_Encuentro_Esmeralda_Texto_20:
	.string "Lo que hicimos en TORRE RADIO estuvo\n"
	.string "mal, pero era nuestra única opción:\l"
	.string "esas ondas de radio son un recurso muy\l"
	.string "valioso que nos permitirá indagar más\l"
	.string "allá de la superficie.$"

GraniteCave_Encuentro_Esmeralda_Texto_21:
	.string "Aunque tengamos tecnología más\n"
	.string "avanzada en otros sectores, en esa en\l"
	.string "concreto, KANTO y JOHTO son punteras.$"

GraniteCave_Encuentro_Esmeralda_Texto_22:
	.string "Para compensarte, y en señal de paz,\n"
	.string "quiero que tengas esto.$"

GraniteCave_Encuentro_Esmeralda_Texto_23:
	.string "¡{PLAYER} obtuvo una PIEDRA DEVON!$"

GraniteCave_Encuentro_Esmeralda_Texto_24:
	.string "Ya que habéis colaborado en nuestra\n"
	.string "investigación, qué menos que\l"
	.string "entregarte parte de sus frutos.$"

GraniteCave_Encuentro_Esmeralda_Texto_25:
	.string "Con esta piedra podrás evolucionar\n"
	.string "varios de los clásicos FÓSILES de\l"
	.string "HOENN, tienes la lista en el documento\l"
	.string "de al lado.$"

GraniteCave_Encuentro_Esmeralda_Texto_26:
	.string "Ahora, si nos disculpas, estamos muy\n"
	.string "ocupados. Para salir, solo debes tirarte\l"
	.string "por ese agujero, y aparecerás en una\l"
	.string "parte próxima a la salida.$"

GraniteCave_Encuentro_Esmeralda_Texto_27:
	.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

GraniteCave_Encuentro_Esmeralda_Texto_28:
	.string "Chico, si quisiéramos encerrarte, ya lo\n"
	.string "hubiéramos hecho, ahora mismo no tienes\l"
	.string "adónde ir.$"

GraniteCave_Encuentro_Esmeralda_Texto_28.1:
	.string "Tranquilízate, {PLAYER}.\n"
	.string "No hay ninguna fosa llena de SHARPEDO\l"
	.string "en el fondo de ese agujero.$"

GraniteCave_Encuentro_Esmeralda_Texto_29:
	.string "TRISTANA: De todos modos yo ya me iba.\n"
	.string "Jeh, ya nos veremos, {PLAYER}. ¡HOENN\l"
	.string "es muy grande!$"

GraniteCave_Primer_Cientifico::
lock
faceplayer
msgbox GraniteCave_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

GraniteCave_Primer_Cientifico_Texto_1:
	.string "Cada uno de nuestros ADMIN cuenta con\n"
	.string "un FÓSIL característico. EL\l"
	.string "ADMIN.ZAFIRO decidió quedarse con ese\l"
	.string "raro POKÉMON de JOHTO, mientras que el\l"
	.string "ADMIN.AMATISTA vio mucho potencial en\l"
	.string "RELICANTH.$"

GraniteCave_Segundo_Cientifico::
lock
faceplayer
msgbox GraniteCave_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

GraniteCave_Segundo_Cientifico_Texto_1:
	.string "El CRADILY-P del ADMIN.ESMERALDA\n"
	.string "puede ser terrible. Si logra activar el\l"
	.string "incremento de stats con PODER PASADO,\l"
	.string "¡no habrá forma de echarlo del combate!$"

GraniteCave_Tercer_Cientifico::
lock
faceplayer
msgbox GraniteCave_Tercer_Cientifico_Texto_1 MSGBOX_NPC
release
end

GraniteCave_Tercer_Cientifico_Texto_1:
	.string "El incremento en el total de STAT BASE\n"
	.string "registrado con la PIEDRA DEVON ha sido\l"
	.string "de un +100. ¿El de vuestra PIEDRA\l"
	.string "ROCKET también, verdad?$"

GraniteCave_Cuarto_Cientifico::
lock
faceplayer
msgbox GraniteCave_Cuarto_Cientifico_Texto_1 MSGBOX_NPC
release
end

GraniteCave_Cuarto_Cientifico_Texto_1:
	.string "Somos buscadores de patrones,\n"
	.string "creyentes en un mundo coherente en el\l"
	.string "que las regularidades no se producen\l"
	.string "accidentalmente, sino como efecto de la\l"
	.string "casualidad mecánica o de la intención\l"
	.string "de alguien. Los procesos aleatorios\l"
	.string "producen muchas secuencias que\l"
	.string "convencen a las personas de que el\l"
	.string "proceso no es aleatorio después de\l"
	.string "todo.$"

GraniteCave_Quinto_Cientifico::
lock
faceplayer
msgbox GraniteCave_Quinto_Cientifico_Texto_1 MSGBOX_NPC
release
end

GraniteCave_Quinto_Cientifico_Texto_1:
	.string "¿Has luchado contra el ARMALDO-P del\n"
	.string "ADMIN.RUBÍ? ¡Gracias a mí logró mejorar\l"
	.string "tanto su VELOCIDAD!$"

GraniteCave_Esmeralda_Parado::
lock
msgbox GraniteCave_Esmeralda_Parado_Texto_1 MSGBOX_AUTOCLOSE
release
end

GraniteCave_Esmeralda_Parado_Texto_1:
	.string "Está inmerso en la lectura de esos\n"
	.string "jeroglíficos.$"

GraniteCave_Piedra_Devon::
lock
msgbox GraniteCave_Piedra_Devon_Texto_1 MSGBOX_NPC
release
end

GraniteCave_Piedra_Devon_Texto_1:
.string "- ARMALDO\n"
	.string "- CRADILY\l"
	.string "- RELICANTH$"
