SnowpointCity_MapScripts::
	.byte 0


SnowpointCity_Cartel::
msgbox SnowpointCity_Cartel_Texto_1, MSGBOX_SIGN   
end

SnowpointCity_Cartel_Texto_1:
	.string "CIUDAD PUNTANEVA\p"
	.string "Donde vive la nieve$"

SnowpointCity_Primer_Npc::
lock
faceplayer
msgbox SnowpointCity_Primer_Npc_Texto_1, MSGBOX_NPC
release   
end

SnowpointCity_Primer_Npc_Texto_1:
	.string "Aquí no hay nada excepcional. Eso hace\n"
	.string "que PUNTANEVA sea única. Yo soy de lo\l"
	.string "más corriente. ¡Eso es lo que hace que\l"
	.string "destaque!$"


SnowpointCity_Segundo_Npc::
lock
faceplayer
msgbox SnowpointCity_Segundo_Npc_Texto_1, MSGBOX_NPC 
release
end

SnowpointCity_Segundo_Npc_Texto_1:
	.string "INVERNA me está enseñando cosas sobre\n"
	.string "los POKÉMON. Dice que tengo que empezar\l"
	.string "por trabar amistad con ellos.$"

SnowpointCity_Tercer_Npc::
lock
faceplayer
msgbox SnowpointCity_Tercer_Npc_Texto_1, MSGBOX_NPC  
release 
end

SnowpointCity_Tercer_Npc_Texto_1:
	.string "Se cuenta que PUNTANEVA se fundó\n"
	.string "gracias a los POKÉMON. Dicen que el\l"
	.string "TEMPLO PUNTANEVA es su lugar de\l"
	.string "reposo.$"

SnowpointCityDocumento_104::
msgbox SnowpointCityDocumento_Text_104, MSGBOX_SIGN   
end

SnowpointCityDocumento_Text_104:
	.string "LÍDER DE GIMNASIO DE CIUDAD\n"
	.string "PUNTANEVA: INVERNA\l"
	.string "¡La chica diamante!$"

SnowpointCity_Cuarto_Npc::
lock
faceplayer
msgbox SnowpointCity_Cuarto_Npc_Texto_1, MSGBOX_NPC  
release
end

SnowpointCity_Cuarto_Npc_Texto_1:
	.string "Tienes suerte de que sea verano. En\n"
	.string "invierno con ese traje de congelarías\l"
	.string "enseguida en PUNTANEVA. ¡Una bonita y\l"
	.string "calentita bufanda no te vendría nada\l"
	.string "mal!$"


SnowpointCity_Quinto_Npc::
lock
faceplayer
msgbox SnowpointCity_Quinto_Npc_Texto_1, MSGBOX_NPC
release 
end

SnowpointCity_Quinto_Npc_Texto_1:
	.string "Brrr… en esta ciudad hace siempre un\n"
	.string "frío tremendo. Pero los espíritus de\l"
	.string "entrenadores y POKÉMON son ardientes.\l"
	.string "Sobre todo el de la LÍDER DE GIMNASIO.$"

SnowpointCity_Sexto_Npc::
lock
compare VAR_UNUSED_0x40F7, 256
goto_if_gt SnowpointCity_Sexto_Npc_Despues
msgbox SnowpointCity_Templo_Texto_6 MSGBOX_AUTOCLOSE
release
end

SnowpointCity_Sexto_Npc_Despues::
faceplayer
msgbox SnowpointCity_Sexto_Npc_Texto_1, MSGBOX_NPC
release  
end

SnowpointCity_Sexto_Npc_Texto_1:
	.string "Se dice que el templo fue construido en\n"
	.string "tiempos remotos. En honor a los POKÉMON\l"
	.string "de TIPO ROCA, HIELO y ACERO que dan\l"
	.string "forma al terreno. Es lo que cuenta la\l"
	.string "leyenda.$"

SnowpointCity_Entrada::
lock
applymovement OBJ_EVENT_ID_PLAYER, SnowpointCity_Templo_Move_1
applymovement 11, SnowpointCity_Entrada_Move_1
waitmovement 0x0
msgbox SnowpointCity_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox SnowpointCity_Entrada_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SnowpointCity_Entrada_Texto_3 MSGBOX_AUTOCLOSE
applymovement 11, SnowpointCity_Entrada_Move_2
waitmovement 0x0
msgbox SnowpointCity_Entrada_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, SnowpointCity_Entrada_Move_3
waitmovement 0x0
msgbox SnowpointCity_Entrada_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, SnowpointCity_Entrada_Move_4
waitmovement 0x0
msgbox SnowpointCity_Entrada_Texto_6 MSGBOX_AUTOCLOSE
applymovement 11, SnowpointCity_Entrada_Move_5
waitmovement 0x0
setflag FLAG_HOENN_18
removeobject 11
setvar VAR_UNUSED_0x40F7, 251
release
end

SnowpointCity_Entrada_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

SnowpointCity_Entrada_Move_4:
walk_up
step_end

SnowpointCity_Entrada_Move_3:
walk_in_place_left
step_end

SnowpointCity_Entrada_Move_2:
face_left
step_end

SnowpointCity_Entrada_Move_1:
face_down
step_end

SnowpointCity_Entrada_Texto_1:
	.string "ARIANA: Le he preguntado al marinero:\n"
	.string "estamos en CIUDAD PUNTANEVA, en la\l"
	.string "región de SINNOH.$"

SnowpointCity_Entrada_Texto_2:
	.string "Nadie viaja hasta tan lejos sin más,\n"
	.string "deben ir tras algo muy importante.$"

SnowpointCity_Entrada_Texto_3:
	.string "En el SUBMARINO dijeron que debía\n"
	.string "regresar a HOENN. ¿A qué se referirá?$"

SnowpointCity_Entrada_Texto_4:
	.string "Solo nos queda explorar la ciudad,\n"
	.string "parece que la respuesta está en el\l"
	.string "TEMPLO PUNTANEVA, al norte.$"

SnowpointCity_Entrada_Texto_5:
	.string "Seguro que están allí. Yo me adelantaré,\n"
	.string "{PLAYER}. Tú deberías curar antes a\l"
	.string "tus POKÉMON.$"

SnowpointCity_Entrada_Texto_6:
	.string "Por muy buen ENTRENADOR que seas, un\n"
	.string "ALTO MANDO es un ALTO MANDO, ¿no?$"

SnowpointCity_Templo_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, SnowpointCity_Templo_Move_1
waitmovement 0x0
goto SnowpointCity_Templo

SnowpointCity_Templo_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, SnowpointCity_Templo_Move_1.1
waitmovement 0x0
goto SnowpointCity_Templo

SnowpointCity_Templo_Move_3:
walk_in_place_up
step_end

SnowpointCity_Templo_Move_4:
delay_16
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_up
delay_16
delay_8
step_end


SnowpointCity_Templo::
lock
msgbox SnowpointCity_Templo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SnowpointCity_Templo_Move_2
waitmovement 0x0
msgbox SnowpointCity_Templo_Texto_2 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 13, SnowpointCity_Templo_Move_3
waitmovement 0x0
msgbox SnowpointCity_Templo_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox SnowpointCity_Templo_Texto_4 MSGBOX_AUTOCLOSE
applymovement 13, SnowpointCity_Templo_Move_4
waitmovement 0x0
msgbox SnowpointCity_Templo_Texto_5 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARBOK, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 9, SnowpointCity_Templo_Move_5
waitmovement 0x0
msgbox SnowpointCity_Templo_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SnowpointCity_Templo_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, SnowpointCity_Templo_Move_6
waitmovement 0x0
msgbox SnowpointCity_Templo_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, SnowpointCity_Templo_Move_7
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 252
release
end

SnowpointCity_Templo_Move_7:
face_up
step_end

SnowpointCity_Templo_Move_6:
face_down
step_end

SnowpointCity_Templo_Move_5:
emote_exclamation_mark
step_end

SnowpointCity_Templo_Move_2:
walk_up
walk_up
walk_up
step_end

SnowpointCity_Templo_Move_1.1:
walk_left
face_up
step_end

SnowpointCity_Templo_Move_1:
walk_in_place_up
step_end

SnowpointCity_Templo_Texto_1:
	.string "ARIANA: Pero le he dicho que venimos\n"
	.string "con los de DEVON.$"

SnowpointCity_Templo_Texto_2:
	.string "Lo siento, a nosotros no nos han dicho\n"
	.string "eso. El TEMPLO PUNTANEVA es muy\l"
	.string "estricto con los permisos que concede,\l"
	.string "tendrá que esper{PAUSE 5}…{PAUSE 5}$"

SnowpointCity_Templo_Texto_3:
	.string "ARIANA: ¿Esperar? ¡Hemos venido desde\n"
	.string "HOENN!$"

SnowpointCity_Templo_Texto_4:
	.string "Son las normas, lo siento.$"

SnowpointCity_Templo_Texto_5:
	.string "¿Las normas? Ya me he cansado de ser\n"
	.string "correcta, voy a enseñarte la única ley\l"
	.string "que todos pueden reconocer de\l"
	.string "inmediato, ¡ARBOK!$"

SnowpointCity_Templo_Texto_6:
	.string "¡Ahhhh! ¡Ayuda!$"

SnowpointCity_Templo_Texto_7:
	.string "ARIANA: Vamos a entrar por las buenas o\n"
	.string "por las malas.$"

SnowpointCity_Templo_Texto_8:
	.string "¡{PLAYER}! Tú adelántate, no podemos\n"
	.string "darle más ventaja a DEVON.$"


SnowpointCity_Templo_Ariana_Arbok::
lock
msgbox SnowpointCity_Templo_Texto_8 MSGBOX_AUTOCLOSE
release
end

SnowpointCity_Salida::
lock
msgbox SnowpointCity_Salida_Texto_1 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Salida_Texto_2 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Salida_Texto_3 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Salida_Texto_4 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Salida_Texto_5 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Salida_Texto_6 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Salida_Texto_7 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Salida_Texto_8 MSGBOX_AUTOCLOSE
release
end

SnowpointCity_Salida_Texto_1:
	.string "ARIANA: ¿Derrotaste al\n"
	.string "ADMIN.AMATISTA?$"

SnowpointCity_Salida_Texto_2:
	.string "Ya veo, yo{PAUSE 25}…{PAUSE 25} no puedo decir lo mismo.$"

SnowpointCity_Salida_Texto_3:
	.string "Ese DOCTOR usaba POKÉMON que jamás\n"
	.string "había visto, toda esta expedición no ha\l"
	.string "hecho más que aumentar mis temores\l"
	.string "hacia DEVON y el futuro de HOENN.$"

SnowpointCity_Salida_Texto_4:
	.string "Un futuro que ahora es incierto para\n"
	.string "mí{PAUSE 25}…{PAUSE 25} después de esto, ¿cómo volveré al\l"
	.string "CASINO MALVALONA? Ahora sé demasiadas\l"
	.string "cosas.$"

SnowpointCity_Salida_Texto_5:
	.string "{PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

SnowpointCity_Salida_Texto_6:
	.string "¡¿GIOVANNI está de camino?!$"

SnowpointCity_Salida_Texto_7:
	.string "Hmph, entonces, así va a ser{PAUSE 5}…{PAUSE 5}$"

SnowpointCity_Salida_Texto_8:
	.string "Estaré en el CENTRO POKÉMON. Si te\n"
	.string "aburres, puedes intentar ganar la\l"
	.string "medalla de este GIMNASIO. Yo necesito\l"
	.string "descansar.$"

SnowpointCity_Barrera_Gimnasio_Move_1:
walk_in_place_up
step_end

SnowpointCity_Barrera_Gimnasio_Move_2:
walk_slow_down
step_end

SnowpointCity_Barrera_Gimnasio::
lock
compare VAR_UNUSED_0x40F7, 252
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, SnowpointCity_Barrera_Gimnasio_Move_1
waitmovement 0x0
msgbox SnowpointCity_Barrera_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SnowpointCity_Barrera_Gimnasio_Move_2
waitmovement 0x0
release
end

SnowpointCity_Barrera_Gimnasio_Texto_1:
	.string "No es momento de perder el tiempo\n"
	.string "retando a un LÍDER de GIMNASIO.$"

SnowpointCity_Templo_Sign::
lock
msgbox SnowpointCity_Templo_Sign_Texto_1 MSGBOX_SIGN
release
end

SnowpointCity_Templo_Sign_Texto_1:
	.string "TEMPLO PUNTANEVA$"


