LavenderRadioP6_MapScripts::
	.byte 0

LavenderRadioP6_2::
lock     
faceplayer     
msgbox LavenderRadioP6_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadioP6_Text_2:
.string "Fui a un congreso sobre la felicidad; los\n"
.string "investigadores parecían muy infelices.$"




LavenderRadioP6_4::
lock     
faceplayer     
msgbox LavenderRadioP6_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP6_Text_4:
.string "Las decisiones evidentes no necesitan\n"
.string "más que una sola razón. ¡El progreso es\l"
.string "esa razón!$"




LavenderRadioP6_6::
lock     
faceplayer     
msgbox LavenderRadioP6_Text_6, MSGBOX_DEFAULT
release     
end

LavenderRadioP6_Text_6:
.string "Estuve allí cuando el TEAM ROCKET llegó\n"
.string "a AZAFRÁN. La invasión a SILPH hizo\l"
.string "replantearme muchas cosas.$"



LavenderRadioP6_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_5, LavenderRadioP6_Text_CientificoIntro, LavenderRadioP6_Text_CientificoDefeated
	msgbox LavenderRadioP6_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


LavenderRadioP6Documento_100::
lock     
showmonpic SPECIES_PORYGONZ_X, 10, 3  
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER 
msgbox LavenderRadioP6Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

LavenderRadioP6Documento_Text_100:
.string "PORYGONZ-X:\p"
	.string "PS: 85\n"
	.string "ATAQUE: 125\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 95\l"
	.string "DEFENSA ESPECIAL: 85\l"
	.string "VELOCIDAD: 185\l"
	.string "TOTAL: 645\p"
	.string "NORMAL/VOLADOR\n"
	.string "Explota al 99,99% la capacidad ofensiva\l"
	.string "física de PORYGON. Lejos de arreglar su\l"
	.string "vulnerabilidad por el lado físico,\l"
	.string "entrega todos sus recursos a la\l"
	.string "VELOCIDAD. Gracias a conservar el\l"
	.string "ADAPTABLE heredado de PORYGON-Z, sus\l"
	.string "125 puntos en ATAQUE golpearán con\l"
	.string "una potencia descomunal, con acceso a\l"
	.string "PÁJARO OSADO o DOBLE-FILO por STAB.$"



LavenderRadioP6Documento_101::
lock     
showmonpic SPECIES_PORYGONZ_Y, 10, 3  
playmoncry SPECIES_PORYGON2, CRY_MODE_ENCOUNTER 
msgbox LavenderRadioP6Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

LavenderRadioP6Documento_Text_101:
.string "PORYGONZ-Y:\p"
	.string "PS: 85\n"
	.string "ATAQUE: 70\l"
	.string "DEFENSA: 80\l"
	.string "ATAQUE ESPECIAL: 185\l"
	.string "DEFENSA ESPECIAL: 105\l"
	.string "VELOCIDAD: 120\l"
	.string "TOTAL: 645\p"
	.string "NORMAL/ELÉCTRICO\n"
    .string "Explota al 99,99% la capacidad ofensiva\l"
	.string "especial de PORYGON. Llevando su\l"
	.string "ATAQUE ESPECIAL al extremo (185), ganó\l"
	.string "como efecto secundario el TIPO\l"
	.string "ELÉCTRICO, siendo LEVITACIÓN la\l"
	.string "HABILIDAD más conveniente para\l"
	.string "amoldarse a este cambio. Sin\l"
	.string "ADAPTABLE, esos 185 quedan sin la\l"
	.string "contundencia que caracteriza a otros\l"
	.string "prototipos recientes, sin embargo, su\l"
	.string "gran combinación de tipos, muy notable\l"
	.string "VELOCIDAD (120), y decente bulk\l"
	.string "especial (105), lo ponen a la altura de\l"
	.string "otros experimentos cumbre.$"



LavenderRadioP6Documento_102::
lock     
showmonpic SPECIES_PORYGONZ_Y, 10, 3  
playmoncry SPECIES_PORYGON_Z, CRY_MODE_ENCOUNTER 
msgbox LavenderRadioP6Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

LavenderRadioP6Documento_Text_102:
.string "PORYGONZ-MEGA:\p"
	.string "PS: 85\n"
	.string "ATAQUE: 80\l"
	.string "DEFENSA: 90\l"
	.string "ATAQUE ESPECIAL: 165\l"
	.string "DEFENSA ESPECIAL: 115\l"
	.string "VELOCIDAD: 110\l"
	.string "TOTAL: 645\p"
	.string "NORMAL/PSÍQUICO\n"
   .string "En propias palabras de BILL, se exprimió\l"
	.string "hasta la última gota de rendimiento a\l"
	.string "la que un PORYGON podría aspirar en la\l"
	.string "concepción de esta MEGAEVOLUCIÓN. A\l"
	.string "pesar de mantener su ATAQUE como\l"
	.string "PORYGON-Z (80), esta será su mejor\l"
	.string "opción ofensiva, gracias al milagro de\l"
	.string "insertar POTENCIA a un POKÉMON de\l"
	.string "estas características sin que todo su\l"
	.string "ser colapse por completo. Logra aún\l"
	.string "mejorar el extraordinario ATAQUE\l"
	.string "ESPECIAL que siempre le ha\l"
	.string "caracterizado, ascendiendo a 165 y\l"
	.string "colocándolo en el debate por el mejor\l"
	.string "ATACANTE MIXTO existente. Su bulk\l"
	.string "especial (115) e incluso físico (90),\l"
	.string "son excepcionales teniendo en cuenta\l"
	.string "el resto.$"



LavenderRadioP6Documento_103::
msgbox LavenderRadioP6Documento_Text_103, MSGBOX_SIGN   
end

LavenderRadioP6Documento_Text_103:
.string "6to Desarrollo & Reuniones$"



LavenderRadioP6Documento_104::
msgbox LavenderRadioP6Documento_Text_104, MSGBOX_SIGN   
end

LavenderRadioP6Documento_Text_104:
.string "-Cuanta más luz hay la sombra es más\n"
	.string "oscura-.$"
