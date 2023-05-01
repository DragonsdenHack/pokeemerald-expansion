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


LavenderRadioP6_Reunion::
lock
msgbox LavenderRadioP6_Reunion_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_2 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_4 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_5 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_6 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_7 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_8 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_9 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_10 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Reunion_Texto_11 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP6_Reunion_Texto_1:
.string "????: ¿De verdad es tan peligrosa\n"
	.string "DEVON?$"

LavenderRadioP6_Reunion_Texto_2:
.string "OAK: No sabemos las armas que posee,\n"
	.string "acabamos de descubrir los MOVIMIENTOS\l"
	.string "Z, y ellos ya tenían conocimiento de\l"
	.string "ellos.$"

LavenderRadioP6_Reunion_Texto_3:
.string "ELM: En los próximos meses pondremos\n"
	.string "en marcha el plan gestado en PUEBLO\l"
	.string "PRIMAVERA. Supondrá un antes y un\l"
	.string "después en la forma en que concebimos\l"
	.string "el COMBATE POKÉMON, no podrán superar\l"
	.string "eso.$"

LavenderRadioP6_Reunion_Texto_4:
.string "BILL: Tampoco conocen la tecnología de\n"
	.string "ONDAS DE RADIO, que sepamos.$"

LavenderRadioP6_Reunion_Texto_5:
.string "OAK: ¿Dónde está tu ayudante, BILL?\n"
	.string "Debería ir preparándose para la\l"
	.string "ceremonia.$"

LavenderRadioP6_Reunion_Texto_6:
.string "BILL: Estará con sus FÓSILES, en el S3\n"
	.string "de SILPH, como siempre.$"

LavenderRadioP6_Reunion_Texto_7:
.string "OAK: Debería prepararse para la\n"
	.string "inauguración, después de todo él era\l"
	.string "uno de los mayores interesados.$"

LavenderRadioP6_Reunion_Texto_8:
.string "BILL: ¡Bah! Está obsesionado con unos\n"
	.string "FÓSILES de potencial limitado, hemos\l"
	.string "demostrado que en PORYGON, MEWTWO y\l"
	.string "LEGENDARIOS como las BESTIAS de JOHTO\l"
	.string "está el futuro.$"

LavenderRadioP6_Reunion_Texto_9:
.string "Incluso los NIDORAN clásicos tienen\n"
	.string "más potencial.$"

LavenderRadioP6_Reunion_Texto_10:
.string "PRESIDENTE: ANDRA y {PLAYER} deben\n"
	.string "de estar al caer. Subamos ya, ambos\l"
	.string "quedarán sorprendidos con el\l"
	.string "funcionamiento de las ONDAS DE RADIO.$"

LavenderRadioP6_Reunion_Texto_11:
.string "OAK: Puede que no tanto.$"


LavenderRadioP6_Combate_Bill::
lock
msgbox LavenderRadioP6_Combate_Bill_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_2 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_4 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_5 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_6 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_7 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_8 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_9 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_10 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_11 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Combate_Bill_Texto_12 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP6_Combate_Bill_Texto_1:
.string "BILL: Por fin llegas. Te estaba\n"
	.string "esperando, {PLAYER}. ¿Creías que iba\l"
	.string "a subir igual que los demás?$"

LavenderRadioP6_Combate_Bill_Texto_2:
.string "La azotea es la zona de investigación\n"
	.string "más importante de toda la TORRE RADIO,\l"
	.string "dónde mejor se puede trabajar con las\l"
	.string "ondas. Por eso hay una única vía de\l"
	.string "acceso.$"

LavenderRadioP6_Combate_Bill_Texto_3:
.string "Eso quiere decir que estás obligado a\n"
	.string "pasar por aquí para subir a la azotea,\l"
	.string "pero también…$"

LavenderRadioP6_Combate_Bill_Texto_4:
.string "¡Que estás obligado a combatir conmigo\n"
	.string "una vez más!$"

LavenderRadioP6_Combate_Bill_Texto_5:
.string "¡¿Otra vez?! ¡¿Por qué?!$"

LavenderRadioP6_Combate_Bill_Texto_6:
.string "BILL: ¿Qué clase de poder tienes? ¿Por\n"
	.string "qué en las pruebas y en los informes\l"
	.string "mis POKÉMON machacan a los tuyos, pero\l"
	.string "después en la práctica no ocurre así?$"

LavenderRadioP6_Combate_Bill_Texto_7:
.string "…$"

LavenderRadioP6_Combate_Bill_Texto_8:
.string "¡¿El POKÉMON ESENCIA era real y yo\n"
	.string "estaba equivocado?! ¿Has sido\l"
	.string "bendecido por él y por el FUERTE\l"
	.string "VÍNCULO? ¿Yo nunca seré capaz de\l"
	.string "experimentar algo similar con ningún\l"
	.string "POKÉMON?$"

LavenderRadioP6_Combate_Bill_Texto_9:
.string "¡Bah! Te creía más serio, {PLAYER}.\n"
	.string "¿De verdad crees toda esa basura\l"
	.string "sentimental que acabas de mencionar?$"

LavenderRadioP6_Combate_Bill_Texto_10:
.string "Lo único que vale es lo que podemos\n"
	.string "medir, y por ende mejorar. El resto de\l"
	.string "vagos conceptos sin fundamento serán\l"
	.string "engullidos por el perfeccionamiento de\l"
	.string "lo que sí podemos controlar.$"

LavenderRadioP6_Combate_Bill_Texto_11:
.string "Haré que la diferencia sea tan\n"
	.string "flagrante que esos detalles sin\l"
	.string "importancia sean despreciables.$"

LavenderRadioP6_Combate_Bill_Texto_12:
.string "¡Crearé un PORYGON4, PORYGON5 o 10 si\n"
	.string "es necesario! Cuando matemáticamente\l"
	.string "te derrote siempre de un solo golpe y\l"
	.string "tú no puedas hacer nada, ahí me\l"
	.string "hablarás de vínculos y demás\l"
	.string "historias.$"

LavenderRadioP6_Encuentro_Andra::
lock
msgbox LavenderRadioP6_Encuentro_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Encuentro_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Encuentro_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Encuentro_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Encuentro_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox LavenderRadioP6_Encuentro_Andra_Texto_6 MSGBOX_AUTOCLOSE
release
end

LavenderRadioP6_Encuentro_Andra_Texto_1:
.string "ANDRA: Por una vez llegas antes.$"

LavenderRadioP6_Encuentro_Andra_Texto_2:
.string "…$"

LavenderRadioP6_Encuentro_Andra_Texto_3:
.string "Ya hemos estado en esta situación\n"
	.string "muchas veces, {PLAYER}. Estar\l"
	.string "expectante, apunto de vivir algo sin\l"
	.string "tener ni idea de qué ocurrirá, esa\l"
	.string "incertidumbre...$"

LavenderRadioP6_Encuentro_Andra_Texto_4:
.string "Pero esta vez presiento que será\n"
	.string "diferente, al menos para mí.$"

LavenderRadioP6_Encuentro_Andra_Texto_5:
.string "…$"

LavenderRadioP6_Encuentro_Andra_Texto_6:
.string "No estoy segura de querer ver lo que\n"
	.string "hay más allá de esas escaleras, pero\l"
	.string "las cruzaremos juntos.$"

