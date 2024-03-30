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


