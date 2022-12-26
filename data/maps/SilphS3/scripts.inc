SilphS3_MapScripts::
	.byte 0

SilphS3_EventScript_Policia::
	trainerbattle_single TRAINER_CHARLIE, SilphS3_Text_PoliciaIntro, SilphS3_Text_PoliciaDefeated
	msgbox SilphS3_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS3_4::
lock     
faceplayer     
msgbox SilphS3_Text_4, MSGBOX_DEFAULT
release     
end


SilphS3_Text_4:
.string "De grandes atletas pasaron a ser\n"
.string "dioses griegos y, finalmente,\l"
.string "acabaron convertidos en penosos\l"
.string "experimentos fallidos.\l"
.string "¿Hasta qué punto es viable elevar\l"
.string "el rendimiento a toda costa\l"
.string "sacrificando todo lo demás?\l"
.string "Tal vez algo tan\l"
.string "extraordinariamente sobrehumano\l"
.string "deje de ser inspirador\l"
.string "precisamente por eso, por estar\l"
.string "tan a reventar de todo que no\l"
.string "pueda servir de inspiración y\l"
.string "ejemplo para nadie.\l"
.string "Asimismo, ¿con qué ojos veríamos\l"
.string "un POKÉMON con 150 de base en cada\l"
.string "estadística?\l"
.string "Tal vez, lejos de ser admirable,\l"
.string "esté tan fuera de nuestros\l"
.string "parámetros y posibilidades que\l"
.string "perdamos el interés en él al saber\l"
.string "que jamás podremos replicarlo.$"



SilphS3Documento_100::
lock     
showmonpic SPECIES_GENESECT, 10, 3  
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_100:
.string "GENESECT: BICHO/ACERO\p"
	.string "PS: 71\n"
	.string "ATAQUE: 120\l"
	.string "DEFENSA: 95\l"
	.string "ATAQUE ESPECIAL: 120\l"
	.string "DEFENSA ESPECIAL: 95\l"
	.string "VELOCIDAD: 99\l"
	.string "TOTAL: 600\p"
	.string "POKÉMON modificado a partir del\n"
	.string "depredador del tipo BICHO más\l"
	.string "letal de TESELIA hace 300 millones\l"
	.string "de años, del cual desconocemos sus\l"
	.string "STATS BASE, pero lo estimamos en\l"
	.string "520-540, con un ATAQUE ESPECIAL\l"
	.string "realmente bajo de entre 40 y 60\l"
	.string "puntos, consistiendo su principal\l"
	.string "mejora entre el GENESECT original\l"
	.string "y el modificado en ese incremento\l"
	.string "de 60-80 en ATAQUE ESPECIAL que lo\l"
	.string "colocaría en 600 de BASE.\l"
	.string "Queda por estudiar un posible\l"
	.string "parentesco con KABUTOPS.$"



SilphS3Documento_101::
lock     
msgbox SilphS3Documento_Text_101, MSGBOX_DEFAULT
release     
end

SilphS3Documento_Text_101:
	.string "Según nuestras últimas\n"
	.string "investigaciones, la técnica de\l"
	.string "resurrección actual no reproduce\l"
	.string "de forma 100% fiable cómo eran en\l"
	.string "estado salvaje los FÓSILES,\l"
	.string "especialmente el de AERODACTYL, el\l"
	.string "cual se estima era incluso más\l"
	.string "rápido y letal.$"



SilphS3Documento_102::
lock     
showmonpic SPECIES_DARMANITAN_ZEN_MODE, 10, 3  
playmoncry SPECIES_DARMANITAN_ZEN_MODE, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_102:
	.string "DARMANITAN-ZEN:\p"
	.string "PS: 105\n"
	.string "ATAQUE: 30\l"
	.string "DEFENSA: 105\l"
	.string "ATAQUE ESPECIAL: 160\l"
	.string "DEFENSA ESPECIAL: 105\l"
	.string "VELOCIDAD: 55\l"
	.string "TOTAL: 560\p"
	.string "Solo se conocen decenas de\n"
	.string "ejemplares en todo el mundo, se\l"
	.string "cree que provenientes de un\l"
	.string "DARMANITAN que fue capaz de\l"
	.string "alcanzar el estado de iluminación,\l"
	.string "canalizando con ello todo su vigor\l"
	.string "físico hacia su mente, tal fue la\l"
	.string "sabiduría acumulada en el proceso\l"
	.string "que su ATAQUE FÍSICO quedó\l"
	.string "completamente inutilizado, ganando\l"
	.string "en el proceso un ATAQUE ESPECIAL\l"
	.string "aún mayor que su otrora FÍSICO\l"
	.string "como DARMANITAN NORMAL, unos 160\l"
	.string "de BASE que siquiera MEWTWO pudo\l"
	.string "igualar.$"



SilphS3Documento_103::
lock     
showmonpic SPECIES_WISHIWASHI_SCHOOL, 10, 3  
playmoncry SPECIES_WISHIWASHI_SCHOOL, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_103:
	.string "WISHIWASHI BANCO:\p"
	.string "PS: 45\n"
	.string "ATAQUE: 140\l"
	.string "DEFENSA: 130\l"
	.string "ATAQUE ESPECIAL: 140\l"
	.string "DEFENSA ESPECIAL: 135\l"
	.string "VELOCIDAD: 30\l"
	.string "TOTAL: 620\p"
	.string "Conocido como -La bestia del mar-,\n"
	.string "y temido incluso por GYARADOS,\l"
	.string "WISHIWASHI por sí solo es incluso\l"
	.string "más débil que un vulgar MAGIKARP,\l"
	.string "pero es capaz mediante la unión de\l"
	.string "muchos de su especie formar una\l"
	.string "nueva forma, llamada banco, que\l"
	.string "actúa como un solo POKÉMON\l"
	.string "individual, rebasando el poder de\l"
	.string "cualquier PSEUDOLEGENDARIO.$"



SilphS3Documento_104::
lock     
showmonpic SPECIES_PORYGON3, 10, 3  
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER 
msgbox SilphS3Documento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS3Documento_Text_104:
	.string "PORYGON3: NORMAL/FANTASMA\p"
	.string "PS: 85\n"
	.string "ATAQUE: 75\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 155\l"
	.string "DEFENSA ESPECIAL: 95\l"
	.string "VELOCIDAD: 135\l"
	.string "TOTAL: 615\p"
	.string "Después de incontables intentos,\n"
	.string "hemos podido optimizar al 99% el\l"
	.string "máximo potencial alcanzable por la\l"
	.string "base del PORYGON original.\l"
	.string "PORYGON3 ha logrado el imposible\l"
	.string "de romper la barrera de 154 de\l"
	.string "BASE en ATAQUE ESPECIAL impuesta\l"
	.string "por MEWTWO por un solo punto,\l"
	.string "superándole además en VELOCIDAD\l"
	.string "para contar en su conjunto con una\l"
	.string "ofensiva sin precedentes,\l"
	.string "semejante poder destructivo era\l"
	.string "imposible de sostener sin\l"
	.string "sacrificar su defensa física, que\l"
	.string "inevitablemente cayó hasta los 70\l"
	.string "de BASE.$"
	