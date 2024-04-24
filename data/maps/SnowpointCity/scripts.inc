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
msgbox SnowpointCity_Entrada_Texto_1 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Entrada_Texto_2 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Entrada_Texto_3 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Entrada_Texto_4 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Entrada_Texto_5 MSGBOX_AUTOCLOSE
release
end

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
	.string "TEMPLO PUNTANEVA, al norte de la\l"
	.string "ciudad.$"

SnowpointCity_Entrada_Texto_5:
	.string "Seguro que están allí. Yo me adelantaré,\n"
	.string "{PLAYER}. Tú deberías curar antes a\l"
	.string "tus POKÉMON.$"

SnowpointCity_Templo::
lock
msgbox SnowpointCity_Templo_Texto_1 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Templo_Texto_2 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Templo_Texto_3 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Templo_Texto_4 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Templo_Texto_5 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Templo_Texto_6 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Templo_Texto_7 MSGBOX_AUTOCLOSE
msgbox SnowpointCity_Templo_Texto_8 MSGBOX_AUTOCLOSE
release
end

SnowpointCity_Templo_Texto_1:
	.string "ARIANA: Pero le he dicho que venimos\n"
	.string "con los de DEVON.$"

SnowpointCity_Templo_Texto_2:
	.string "Lo siento, a nosotros no nos han dicho\n"
	.string "eso. El TEMPLO PUNTANEVA es muy\l"
	.string "estricto con los permisos que concede,\l"
	.string "tendrá que esper…$"

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


