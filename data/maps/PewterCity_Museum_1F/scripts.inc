PewterCity_Museum_1F_MapScripts::
	.byte 0

PewterMuseum1::
end



PewterMuseum2::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_2:
.string "Debo de estar agradecido por mi\n"
.string "larga vida.\l"
.string "¡Nunca creí que viviría para ver\l"
.string "los huesos de un dragón!$"



PewterMuseum3::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_3:
.string "Gracias por ayudarnos a\n"
.string "deshacernos de ese ladrón\l"
.string "oportunista.$"



PewterMuseum5::
end



PewterMuseumDocumento_100::
msgbox PewterMuseumDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseumDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre BROCK, LÍDER\n"
	.string "del GIMNASIO de PLATEADA.\p"
	.string "Según fuentes cercanas, BROCK\n"
	.string "casi nunca se ríe, ¡pero una vez\l"
	.string "que empieza, no para!$"



PewterMuseumDocumento_101::
showmonpic SPECIES_AERODACTYL_SKEL, 10, 3   
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_101, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_101:
	.string "FÓSIL de AERODACTYL\n"
	.string "Un primitivo y raro POKÉMON.$"



PewterMuseumDocumento_102::
showmonpic SPECIES_KABUTOPS_SKEL, 10, 3   
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_102, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_102:
	.string "FÓSIL de KABUTOPS\n"
	.string "Un primitivo y raro POKÉMON.$"
