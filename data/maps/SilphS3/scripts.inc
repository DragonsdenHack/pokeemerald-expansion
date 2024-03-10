SilphS3_MapScripts::
	.byte 0

SilphS3_EventScript_Policia::
	trainerbattle_single TRAINER_CHARLIE, SilphS3_Text_PoliciaIntro, SilphS3_Text_PoliciaDefeated
	msgbox SilphS3_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS3_3::
lock         
msgbox SilphS3_Text_3, MSGBOX_SIGN
release     
end

SilphS3_Text_3:
    .string "…\n"
	.string "…\l"
	.string "(Está completamente inmerso en la\l"
	.string "tarea que está realizando).$"

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

SilphS3_Miguel_Batalla_Derecha::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_3
waitmovement 0x0
goto SilphS3_Miguel_Batalla

SilphS3_Miguel_Batalla_Izquierda::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Miguel_Batalla_Move_3.1
waitmovement 0x0
goto SilphS3_Miguel_Batalla

SilphS3_Miguel_Batalla::
delay 20
applymovement 2, SilphS3_Miguel_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Miguel_Batalla_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CMIGUEL_3, SilphS3_Miguel_Batalla_Texto_7
msgbox SilphS3_Miguel_Batalla_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Miguel_Batalla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_5
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Miguel_Batalla_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, SilphS3_Miguel_Batalla_Move_7
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 104
release
end

SilphS3_Miguel_Batalla_Texto_1:
.string "????: ¿Tú otra vez?$"

SilphS3_Miguel_Batalla_Texto_2:
.string "C.MIGUEL: Ya nos avisó el\n"
	.string "PRESIDENTE que dentro de poco un\l"
	.string "ROCKET podría hacernos una pequeña\l"
	.string "visita a este lugar privilegiado,\l"
	.string "no sé porqué no me sorprende que\l"
	.string "seas tú de nuevo el encargado.$"

SilphS3_Miguel_Batalla_Texto_3:
.string "Como puedes observar,\n"
	.string "ADMINISTRADOR {PLAYER}, no eres el\l"
	.string "único que ha logrado escalar y\l"
	.string "ascender, mis amplios\l"
	.string "conocimientos y obsesión por los\l"
	.string "FÓSILES atrajeron la atención de\l"
	.string "SILPH que, junto con la\l"
	.string "recomendación de BILL, me\l"
	.string "colocaron en el mejor lugar para\l"
	.string "investigarlos a fondo: este.$"

SilphS3_Miguel_Batalla_Texto_4:
.string "Ahora que he logrado mi objetivo,\n"
	.string "poco me importa lo que estés o no\l"
	.string "estés buscando por aquí, ya he\l"
	.string "formado el equipo que desde\l"
	.string "siempre quise formar, y solo puede\l"
	.string "ir a mejor si avanzo en mis\l"
	.string "investigaciones, sin embargo{PAUSE 15}…{PAUSE 15}$"

SilphS3_Miguel_Batalla_Texto_5:
.string "No todos los días se presenta la\n"
	.string "ocasión de combatir contigo, aquel\l"
	.string "que finalmente pudo derrotar a\l"
	.string "LANCE, al final resultó que no\l"
	.string "perdí con un cualquiera, aunque de\l"
	.string "cara al público lo sigas siendo{PAUSE 15}…{PAUSE 15}$"

SilphS3_Miguel_Batalla_Texto_6:
.string "¡No veo mejor manera de poner a\n"
	.string "prueba el poder primigenio de mis\l"
	.string "FÓSILES que retando al verdadero\l"
	.string "CAMPEÓN de KANTO!$"

SilphS3_Miguel_Batalla_Texto_7:
.string "Tal y como esperaba, sigue sin ser\n"
	.string "suficiente.$"

SilphS3_Miguel_Batalla_Texto_8:
.string "¡Jah!\n"
	.string "¡Nada ha cambiado después de todo!\l"
	.string "Supongo que incluso te tendré que\l"
	.string "estar agradecido, si no hubiera\l"
	.string "enfrentado a alguien de tu nivel\l"
	.string "puede que jamás me hubiese\l"
	.string "empujado de la forma en que lo he\l"
	.string "hecho, de todos modos, mis\l"
	.string "investigaciones están lejos de\l"
	.string "concluir.$"

SilphS3_Miguel_Batalla_Texto_9:
.string "Ahora que tengo a AERODACTYL y el\n"
	.string "resto de FÓSILES conocidos en\l"
	.string "KANTO y HOENN, es hora de expandir\l"
	.string "lo que hoy sabemos sobre ellos,\l"
	.string "por eso me ha contratado SILPH.$"

SilphS3_Miguel_Batalla_Texto_10:
.string "Si mis teorías están en lo cierto,\n"
	.string "el verdadero potencial de los\l"
	.string "FÓSILES dista mucho de ser el que\l"
	.string "verdaderamente tuvieron antaño en\l"
	.string "estado salvaje, pues en el proceso\l"
	.string "de resurrección se pierde buena\l"
	.string "parte de la esencia que les\l"
	.string "caracterizaba.$"

SilphS3_Miguel_Batalla_Texto_11:
.string "Desde aquí trataré de demostrarlo\n"
	.string "mientras no me estorbes en mi\l"
	.string "búsqueda, puedes hacer lo que\l"
	.string "quieras, ¿nos vamos entendiendo\l"
	.string "no?$"

SilphS3_Miguel_Batalla_Move_1:
walk_in_place_up
step_end

SilphS3_Miguel_Batalla_Move_2:
emote_exclamation_mark
step_end

SilphS3_Miguel_Batalla_Move_3:
walk_slow_up
walk_slow_left
walk_slow_up
step_end

SilphS3_Miguel_Batalla_Move_3.1:
walk_slow_up
walk_slow_up
step_end

SilphS3_Miguel_Batalla_Move_4:
walk_slow_right
walk_slow_down
walk_in_place_down
step_end

SilphS3_Miguel_Batalla_Move_5:
face_up
step_end

SilphS3_Miguel_Batalla_Move_6:
walk_in_place_down
step_end

SilphS3_Miguel_Batalla_Move_7:
walk_slow_up
walk_slow_left
walk_in_place_left
step_end


SilphS3_Bill_Batalla::
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_1
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_1 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_3
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_3 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_5 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 3, SilphS3_Bill_Batalla_Move_5
waitmovement 0x0
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_8 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_4
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS3_Bill_Batalla_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_6
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_7
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_12 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS3_Bill_Batalla_Move_8
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_14 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SilphS3_Bill_Batalla_Texto_15 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BILL_3, SilphS3_Bill_Batalla_Texto_16
msgbox SilphS3_Bill_Batalla_Texto_17 MSGBOX_AUTOCLOSE
msgbox SilphS3_Bill_Batalla_Texto_18 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_2
waitmovement 0x0
msgbox SilphS3_Bill_Batalla_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, SilphS3_Bill_Batalla_Move_9
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 105
release
end

SilphS3_Bill_Batalla_Texto_1:
.string "BILL: Entonces vas tras el POKÉMON\n"
	.string "ESENCIA, ¿me equivoco {PLAYER}?$"

SilphS3_Bill_Batalla_Texto_2:
.string "Cuando me derrotaste en SILPH para\n"
	.string "hacer avanzar vuestro plan de\l"
	.string "conspiración contra el gobierno de\l"
	.string "LANCE, me diste una buena lección,\l"
	.string "he de admitirlo.$"

SilphS3_Bill_Batalla_Texto_3:
.string "Demostraste que un ROCKET, por muy\n"
	.string "ROCKET que sea, puede llegar a\l"
	.string "contar con un gran equipo,\l"
	.string "subestimé lo que los POKÉMON\l"
	.string "corrientes podían llegar a dar con\l"
	.string "un buen entrenamiento, algo que\l"
	.string "llevaste al extremo al derrotar a\l"
	.string "ROJO y después a LANCE, el\l"
	.string "entrenador al que nadie podía\l"
	.string "toserle en KANTO durante el último\l"
	.string "lustro.$"

SilphS3_Bill_Batalla_Texto_4:
.string "Gracias a tu actuación en la LIGA\n"
	.string "POKÉMON liberaste a KANTO del yugo\l"
	.string "invisible al que LANCE sometía a\l"
	.string "sus habitantes, pero también\l"
	.string "acabaste con la serie de\l"
	.string "privilegios que ese gobierno me\l"
	.string "proporcionaba.$"

SilphS3_Bill_Batalla_Texto_5:
.string "Sin embargo, yo sé cuidar mis\n"
	.string "contactos, y siempre me llevé bien\l"
	.string "con SILPH, de modo que me han\l"
	.string "colocado a la dirección de uno de\l"
	.string "sus proyectos más importantes,\l"
	.string "algo que al fin y al cabo yo mismo\l"
	.string "iba a intentar por cuenta propia:\l"
	.string "extraer el máximo potencial\l"
	.string "alcanzable de PORYGON.$"

SilphS3_Bill_Batalla_Texto_6:
.string "No quiero decir con esto que dé\n"
	.string "por terminada mi faceta como\l"
	.string "coleccionista, pero KANTO ya\l"
	.string "está{PAUSE 25}…{PAUSE 25}muy visto, tengo todo cuanto\l"
	.string "quiero de esta región: pude\l"
	.string "hacerme con ejemplares de las AVES\l"
	.string "LEGENDARIAS, tengo todos los\l"
	.string "FÓSILES y el pseudolegendario\l"
	.string "DRAGONITE a mi disposición, los\l"
	.string "149 POKÉMON en mi POKÉDEX{PAUSE 25}…{PAUSE 25}solo\l"
	.string "MEW, desaparecido hace casi una\l"
	.string "década, se me resiste, siendo su\l"
	.string "posición actual tan incierta que\l"
	.string "ni merece la pena pensar en ello.$"

SilphS3_Bill_Batalla_Texto_7:
.string "BILL: {PAUSE 15}…{PAUSE 15}$"

SilphS3_Bill_Batalla_Texto_8:
.string "¿El misterioso POKÉMON por el que\n"
	.string "estás aquí?\l"
	.string "¡Ah, si, es cierto!$"

SilphS3_Bill_Batalla_Texto_9:
.string "¿De verdad crees, ROCKET, que si\n"
	.string "considerase la posibilidad de que\l"
	.string "tal POKÉMON existiera, no estaría\l"
	.string "ahí fuera tratando de encontrarlo?\l"
	.string "He leído los documentos referentes\l"
	.string "a tal invención, y he comprobado\l"
	.string "en mis propias manos que nada de\l"
	.string "lo que ahí dice existe, debieron\l"
	.string "de ser escritos por fanáticos\l"
	.string "religiosos más por un acto de fe\l"
	.string "que de conocimiento empírico real.$"

SilphS3_Bill_Batalla_Texto_10:
.string "¿No me crees?$"

SilphS3_Bill_Batalla_Texto_11:
.string "Tienes esos documentos ahí mismo,\n"
	.string "al extremo de mi escritorio,\l"
	.string "compruébalo tú mismo.$"

SilphS3_Bill_Batalla_Texto_12:
.string "BILL: ¡No tan rápido {PLAYER}!$"

SilphS3_Bill_Batalla_Texto_13:
	.string "Acabo de decirte que estoy\n"
	.string "trabajando en nuevos prototipos de\l"
	.string "PORYGON y siquiera te dignas a\l"
	.string "preguntarme por ello.\l"
	.string "¿Tan mal te caigo después de todo?\l"
	.string "Vamos, sé que hemos tenido\l"
	.string "nuestras diferencias, pero en el\l"
	.string "fondo sé valorar a los grandes\l"
	.string "entrenadores, y sé que alguien\l"
	.string "como tú estaría ansioso por saber\l"
	.string "más del potencial de un POKÉMON\l"
	.string "como PORYGON, antes de leer esos\l"
	.string "aburridos documentos escritos por\l"
	.string "alguien que inventó POKÉMON donde\l"
	.string "no los había para oir las\l"
	.string "respuestas que temía darse él\l"
	.string "mismo.$"

SilphS3_Bill_Batalla_Texto_14:
.string "Para tu información, hemos logrado\n"
	.string "superar el poder base de DRAGONITE\l"
	.string "mediante una última actualización,\l"
	.string "siguiendo la línea evolutiva de\l"
	.string "PORYGON2 en lugar de la corrupta\l"
	.string "línea de PORYGON-Z, la capacidad\l"
	.string "ofensiva alcanzada por tal POKÉMON\l"
	.string "no conoce igual en todo KANTO, de\l"
	.string "eso trata esto, ¿no {PLAYER}?\l"
	.string "De números puros y duros, no\l"
	.string "estúpidas supersticiones de\l"
	.string "POKÉMON que siquiera existen.$"


SilphS3_Bill_Batalla_Texto_15:
.string "También, según nuestras últimas\n"
	.string "estimaciones, el poder global de\l"
	.string "mi actual equipo de 6 POKÉMON ya\l"
	.string "ha superado el nivel del equipo\l"
	.string "con el que LANCE pudo someter a\l"
	.string "KANTO, el mismo que tú enfrentaste\l"
	.string "a las puertas del HALL DE LA FAMA.\l"
	.string "La cuestión es{PAUSE 25}…{PAUSE 25}\l"
	.string "¿¡Podría este equipo, lo último en\l"
	.string "tecnología, derrocar también al\l"
	.string "máximo exponente del duro\l"
	.string "entrenamiento?!$"

SilphS3_Bill_Batalla_Texto_16:
.string "Impresionante, tengo que admitir\n"
	.string "que tu equipo está hecho de otra\l"
	.string "pasta.$"

SilphS3_Bill_Batalla_Texto_17:
.string "Ni en mis mejores sueños pude\n"
	.string "imaginar que llegaría a ver tal\l"
	.string "POKÉMON como PORYGON3, es{PAUSE 25}…{PAUSE 25}casi\l"
	.string "perfecto, su combinación de tipos\l"
	.string "con 3 inmunidades, ofensiva\l"
	.string "descomunal y VELOCIDAD, de no ser\l"
	.string "por su DEFENSA FÍSICA{PAUSE 15}…{PAUSE 15},{PAUSE 15} sería\l"
	.string "perfecto.$"

SilphS3_Bill_Batalla_Texto_18:
.string "Y aún así has podido derrotarme,\n"
	.string "entiendo cómo alguien como LANCE\l"
	.string "pudo caer también derrotado, pero\l"
	.string "no creas que he dicho mi última\l"
	.string "palabra ROCKET, sé valorar a mis\l"
	.string "rivales y aprender de ellos, aún\l"
	.string "queda mucho para alcanzar el\l"
	.string "máximo potencial alcanzable de\l"
	.string "PORYGON, a pesar de que presiento\l"
	.string "que ya nos hallamos en un punto\l"
	.string "donde las mejoras serán ya\l"
	.string "bastante despreciables, lucharemos\l"
	.string "por elevar algo más esa curva\l"
	.string "antes de que inevitablente se\l"
	.string "vuelva imposible mejorar siquiera\l"
	.string "un 0,01%, la ley de beneficios\l"
	.string "decrecientes es dura chico.$"

SilphS3_Bill_Batalla_Texto_19:
.string "En fin, vuelvo al trabajo, a falta\n"
	.string "de nuevos POKÉMON que añadir a mi\l"
	.string "colección, este proyecto me\l"
	.string "ilusiona, si no puedes tener a más\l"
	.string "POKÉMON raros y poderosos, ¿qué\l"
	.string "mejor que comenzar a crearlos tú\l"
	.string "mismo?$"

SilphS3_Bill_Batalla_Move_1:
walk_in_place_up
step_end

SilphS3_Bill_Batalla_Move_2:
walk_in_place_down
step_end

SilphS3_Bill_Batalla_Move_3:
walk_up
walk_up
face_left
step_end

SilphS3_Bill_Batalla_Move_4:
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_5:
emote_exclamation_mark
step_end

SilphS3_Bill_Batalla_Move_6:
walk_in_place_left
walk_in_place_right
step_end

SilphS3_Bill_Batalla_Move_7:
walk_slow_left
walk_slow_left
walk_in_place_left
step_end

SilphS3_Bill_Batalla_Move_8:
face_up
step_end

SilphS3_Bill_Batalla_Move_9:
face_left
step_end

SilphS3_Documento_Pokemon_Esencia::
compare VAR_UNUSED_0x40F7, 105
goto_if_gt SilphS3_Documento_Pokemon_Esencia_2
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1 MSGBOX_AUTOCLOSE
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 106
release
end

SilphS3_Documento_Pokemon_Esencia_2::
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_1 MSGBOX_AUTOCLOSE
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
msgbox SilphS3_Documento_Pokemon_Esencia_Texto_3 MSGBOX_AUTOCLOSE
release
end

SilphS3_Documento_Pokemon_Esencia_Texto_1:
.string "-LA LEYENDA DEL POKÉMON ESENCIA,\n"
	.string "AQUEL QUE DA SENTIDO A KANTO:\l"
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}\l"
	.string "Que PUEBLO LAVANDA y su TORRE\l"
	.string "POKÉMON se asentaran al sur del\l"
	.string "TÚNEL ROCA no es mera casualidad,\l"
	.string "fue allí donde sus primeros\l"
	.string "habitantes lograron establecer\l"
	.string "contacto con aquel que llamaron\l"
	.string "-POKÉMON ESENCIA-, este, a\l"
	.string "diferencia del resto de POKÉMON,\l"
	.string "no contaba con una forma definida,\l"
	.string "podía presentarse en cualquier\l"
	.string "lugar y forma, un POKÉMON de tal\l"
	.string "poder y presencia que forma parte\l"
	.string "de cada uno de los píxeles que\l"
	.string "conforman KANTO, en cada buena o\l"
	.string "mala acción, momento de calma o\l"
	.string "iluminación, el POKÉMON ESENCIA se\l"
	.string "encontrará allí, simplemente\l"
	.string "observando el devenir de\l"
	.string "acontecimientos de la región de\l"
	.string "KANTO, atento a aquel momento de\l"
	.string "incertidumbre previo a la acción{PAUSE 15}…{PAUSE 15}$"

SilphS3_Documento_Pokemon_Esencia_Texto_2:
.string "¿Seguir leyendo?$"

SilphS3_Documento_Pokemon_Esencia_Texto_3:
.string "Un ser de tal naturaleza,\n"
	.string "omnipresente y, para algunos,\l"
	.string "también omnipotente, no podía ser\l"
	.string "catalogado con los parámetros que\l"
	.string "rigen al resto de POKÉMON, el mero\l"
	.string "hecho de ser categorizado\l"
	.string "produciría automáticamente una\l"
	.string "reducción de la auténtica\l"
	.string "complejidad de tal ser, no\l"
	.string "obstante, aquellos primeros\l"
	.string "habitantes de PUEBLO LAVANDA\l"
	.string "alcanzaron tal nivel de\l"
	.string "espiritualidad que lograron entrar\l"
	.string "en contacto con -EL POKÉMON\l"
	.string "ESENCIA-, formando un culto en\l"
	.string "torno a este ser, estos,\l"
	.string "iluminados por la sabiduría del\l"
	.string "POKÉMON ESENCIA, perdieron todo\l"
	.string "apego por el mundo material, y con\l"
	.string "ello el contacto con el resto de\l"
	.string "la población de KANTO, hasta el\l"
	.string "punto de que, con el paso de las\l"
	.string "generaciones, nadie vive ahora\l"
	.string "para recordar la existencia de\l"
	.string "este culto, mucho menos la del\l"
	.string "-POKÉMON ESENCIA-, si la leyenda\l"
	.string "es cierta, dicho culto aún existe,\l"
	.string "oculto en algún rincón de PUEBLO\l"
	.string "LAVANDA…$"

SilphS3_Sotano::
lock
msgbox SilphS3_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS3_Sotano_Texto_1:
.string "ARCHIVOS PRIVADOS DE SILPH S.A.\n"
	.string "S3$"

SilphS2_Sotano::
lock
msgbox SilphS2_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS2_Sotano_Texto_1:
.string "ARCHIVOS PRIVADOS DE SILPH S.A.\n"
	.string "S2$"


SilphS1_Sotano::
lock
msgbox SilphS1_Sotano_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_Texto_1:
.string "ARCHIVOS PRIVADOS DE SILPH S.A.\n"
	.string "S1$"


SilphS1_Sotano_2::
lock
msgbox SilphS1_Sotano_2_Texto_1 MSGBOX_SIGN
release
end

SilphS1_Sotano_2_Texto_1:
.string "BIBLIOTECA PRIVADA DE SILPH S.A.$"

