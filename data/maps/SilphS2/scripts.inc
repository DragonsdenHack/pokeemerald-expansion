SilphS2_MapScripts::
	.byte 0

SilphS2_EventScript_Policia::
	trainerbattle_single TRAINER_LOLA_5, SilphS2_Text_PoliciaIntro, SilphS2_Text_PoliciaDefeated
	msgbox SilphS2_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico::
	trainerbattle_single TRAINER_LOLA_3, SilphS2_Text_CientificoIntro, SilphS2_Text_CientificoDefeated
	msgbox SilphS2_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico2::
	trainerbattle_single TRAINER_ELI, SilphS2_Text_Cientifico2Intro, SilphS2_Text_Cientifico2Defeated
	msgbox SilphS2_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Policia2::
	trainerbattle_single TRAINER_RICKY_1, SilphS2_Text_Policia2Intro, SilphS2_Text_Policia2Defeated
	msgbox SilphS2_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico3::
	trainerbattle_single TRAINER_LOLA_4, SilphS2_Text_Cientifico3Intro, SilphS2_Text_Cientifico3Defeated
	msgbox SilphS2_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Policia3::
	trainerbattle_single TRAINER_SIMON, SilphS2_Text_Policia3Intro, SilphS2_Text_Policia3Defeated
	msgbox SilphS2_Text_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_EventScript_Cientifico4::
	trainerbattle_single TRAINER_ERNEST_5, SilphS2_Text_Cientifico4Intro, SilphS2_Text_Cientifico4Defeated
	msgbox SilphS2_Text_Cientifico4PostBattle, MSGBOX_AUTOCLOSE
	end



SilphS2_3::
lock     
faceplayer     
msgbox SilphS2_Text_3, MSGBOX_DEFAULT
release     
end


SilphS2_Text_3:
.string "La mayoría es tan ciega a las\n"
.string "probabilidades que trata casi del\l"
.string "mismo modo a la de una entre mil\l"
.string "que la de una entre un millón, de\l"
.string "ahí que juegos como la lotería\l"
.string "tengan tanto éxito, ¡pero no para\l"
.string "un científico de SILPH!$"


SilphS2_4::
lock     
faceplayer     
msgbox SilphS2_Text_4, MSGBOX_DEFAULT
release     
end


SilphS2_Text_4:
.string "Ahora que hemos puesto a LANCE en\n"
.string "su lugar puede que la relación con\l"
.string "JOHTO mejore, tal vez incluso\l"
.string "establezcamos conexiones con la\l"
.string "región vecina.$"



SilphS2_5::
lock     
faceplayer     
msgbox SilphS2_Text_5, MSGBOX_DEFAULT
release     
end


SilphS2_Text_5:
.string "A veces debemos autoobligarnos a\n"
.string "llevarnos al límite para ver\l"
.string "realmente de qué somos capaces,\l"
.string "solemos proyectar esa imagen\l"
.string "mental de tener todo bajo control\l"
.string "funcionando a pleno rendimiento\l"
.string "como el ideal a alcanzar, sin\l"
.string "embargo en la práctica la inmensa\l"
.string "mayoría de las veces tener todo\l"
.string "bajo control es sinónimo de ir\l"
.string "demasiado despacio, la mayoría de\l"
.string "grandes obras o logros se han\l"
.string "alcanzado después de pasar por\l"
.string "muchos momentos de incertidumbre,\l"
.string "desorden y remar sin saber a\l"
.string "ciencia cierta donde se acabará,\l"
.string "esos períodos son también\l"
.string "necesarios para afianzar otras\l"
.string "fases de -control-.$"



SilphS2_6::
lock     
faceplayer     
msgbox SilphS2_Text_6, MSGBOX_DEFAULT
release     
end


SilphS2_Text_6:
.string "Antiguamente el rey cobraba el\n"
.string "diezmo a sus súbditos, que\l"
.string "consistía en el 10% de las\l"
.string "cosechas que generaban dentro del\l"
.string "territorio, como pago por su\l"
.string "protección.\p"
.string "Pues bien, LANCE ha estado a punto\n"
.string "de aplicar aquí el diezmo pero a\l"
.string "la inversa, ¿en qué consiste?\p"
.string "Fácil, el ciudadano de KANTO se\n"
.string "queda con el 10% de lo que\l"
.string "produce, mientras que LANCE y su\l"
.string "gobierno con el resto.\p"
.string "Lo más gracioso es que la mayoría\n"
.string "le aplaudía y reconocía a quien\l"
.string "les asfixiaba como su salvador,\l"
.string "esto no es más que otra muestra de\l"
.string "hasta qué punto puede torcerse la\l"
.string "realidad.$"



SilphS2_7::
lock     
faceplayer     
msgbox SilphS2_Text_7, MSGBOX_DEFAULT
release     
end


SilphS2_Text_7: 
.string "Espero que a partir de ahora\n"
.string "iniciemos una verdadera etapa de\l"
.string "progreso y desarrollo, distinta a\l"
.string "las aspiraciones de LANCE, a costa\l"
.string "de mantener en la ignorancia al\l"
.string "pueblo.\p"
.string "He oído que hay un proyecto para\n"
.string "conectar AZAFRÁN con TRIGAL, en JOHTO.\l"
.string "También que van a expandir el PUERTO\l"
.string "de CARMÍN para abarcar más regiones.\p"
.string "¡El tiempo pasa, chico,\n"
.string "y no espera a nadie!$"



SilphS2_8::
lock     
faceplayer     
msgbox SilphS2_Text_8, MSGBOX_DEFAULT
release     
end


SilphS2_Text_8:
.string "La libertad de la capacidad\n"
.string "engendra incluso más coerciones\l"
.string "que ese deber disciplinario que\l"
.string "dicta mandatos y prohibiciones.\p"
.string "El deber tiene un límite.\n"
.string "La capacidad, por el contrario, no\l"
.string "lo tiene, está abierta por arriba.\p"
.string "De ahí que la coerción que viene\n"
.string "de la capacidad resulte ilimitada.$"



SilphS2_9::
lock     
faceplayer     
msgbox SilphS2_Text_9, MSGBOX_DEFAULT
release     
end


SilphS2_Text_9:
.string "Actúa como si vivieras por segunda\n"
.string "vez, y la primera lo hubieras hecho\l"
.string "tan desacertadamente como estás a\l"
.string "punto de hacerlo ahora.$"



SilphS2_10::
lock     
faceplayer     
msgbox SilphS2_Text_10, MSGBOX_DEFAULT
release     
end


SilphS2_Text_10:
.string "Hicimos progresos notables sobre\n"
.string "el prototipo -PORYGON2- en las\l"
.string "últimas semanas.\p"
.string "Ahora, su capacidad ofensiva se ha\n"
.string "incrementado en un 50%, a costa de\l"
.string "perder solo un 10% de su defensa.$"



SilphS2_11::
lock     
faceplayer     
msgbox SilphS2_Text_11, MSGBOX_DEFAULT
release     
end


SilphS2_Text_11:
.string "El mejor plan solo vale lo que valgan\n"
.string "las unidades que lo pongan en práctica.$"



SilphS2_12::
lock     
faceplayer     
msgbox SilphS2_Text_12, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_12.1, MSGBOX_DEFAULT
release     
end


SilphS2_Text_12:
.string "Si quieres pedirle algo a alguien,\n"
.string "que sea una persona ocupada; esta\l"
.string "llevará tal inercia de trabajo que\l"
.string "tu petición no será más que otra\l"
.string "tarea más a realizar sobre la marcha.$"

SilphS2_Text_12.1:
.string "En cambio, quien no tiene nada que\n"
.string "hacer, deberá poner mucha más energía\l"
.string "en ponerse en movimiento exclusivamente\l"
.string "para llevar a cabo tu petición.\p"
.string "Las leyes de inercia y coeficiente\n"
.string "de rozamiento también pueden ser\l"
.string "aplicables a las personas.$"



SilphS2_13::
lock     
faceplayer     
msgbox SilphS2_Text_13, MSGBOX_DEFAULT
release     
end


SilphS2_Text_13:
.string "La TORRE DE RADIO de TRIGAL demostró\n"
.string "ser un éxito rotundo en JOHTO.\l"
.string "Mucho está tardando alguna gran\l"
.string "empresa de aquí en copiar la idea.$"



SilphS2_14::
lock     
faceplayer     
msgbox SilphS2_Text_14, MSGBOX_DEFAULT
release     
end


SilphS2_Text_14:
.string "Los humanos estamos ávidos de reglas\n"
.string "porque necesitamos reducir la dimensión\l"
.string "de las cosas para que nos puedan caber\l"
.string "en la cabeza.\p"
.string "Cuanto más aleatoria es la información,\n"
.string "mayor es la dimensionalidad y, por\l"
.string "consiguiente, más difícil de resumir.\p"
.string "Cuanto más se resume, más orden se\n"
.string "pone y menor es lo aleatorio.\p"
.string "De aquí que la misma condición que\n"
.string "nos hace simplificar nos empuja a\l"
.string "pensar que el mundo es menos aleatorio\l"
.string "de lo que realmente es.$"



SilphS2_15::
lock     
faceplayer     
msgbox SilphS2_Text_15, MSGBOX_DEFAULT
release     
end


SilphS2_Text_15:
.string "Algunos se pasan toda una vida yendo\n"
.string "tras un momento futuro perfecto que\l"
.string "no llega o, incluso cuando este llega,\l"
.string "lo ignoran y pasan a buscar otro más.\l"
.string "Esto reduce tu presente a un mero fin\l"
.string "futuro, cuando no se dan cuenta de que\l"
.string "el momento en que están escalando\l"
.string "para llegar a ese supuesto paraíso.\p"
.string "puede ser más placentero que el\n"
.string "estar en el propio paraíso del que\l"
.string "por cierto, una vez llegues y pases\l"
.string "un tiempo allí, acabarás por aburrirte.$"



SilphS2_16::
lock     
faceplayer     
msgbox SilphS2_Text_16, MSGBOX_DEFAULT
release     
end


SilphS2_Text_16:
.string "¡Ahora que SILPH y el TEAM ROCKET\n"
.string "trabajan a la par, grandes cosas\l"
.string "se avecinan en KANTO!\l"
.string "¡El futuro es nuestro!$"



SilphS2_17::
lock     
faceplayer     
msgbox SilphS2_Text_17, MSGBOX_DEFAULT
release     
end


SilphS2_Text_17:
.string "Después del gran golpe que disteis\n"
.string "en la LIGA POKÉMON, nos liberásteis\l"
.string "del control que ejercía LANCE sobre\l"
.string "nuestra empresa.\p"
.string "Ahora no tenemos que rendir cuentas de\n"
.string "nuestros movimientos, y lo que en esta\l"
.string "sede ocurra, permanecerá oculto al\l"
.string "público a partir de ahora.$"



SilphS2_19::
lock     
faceplayer     
msgbox SilphS2_Text_19, MSGBOX_DEFAULT
release     
end


SilphS2_Text_19:
.string "Prefiero invertir mi tiempo en hacer\n"
.string "la tarea, que en malgastarlo en hablar\l"
.string "y formular 1000 teorías acerca de\l"
.string "cómo hacer la tarea.$"

SilphS2_20_5::
lock     
faceplayer     
msgbox SilphS2_Text_20_5, MSGBOX_DEFAULT
release     
end


SilphS2_Text_20_5:
	.string "Trabajamos y somos explotados durante\n"
	.string "el año para poder viajar y explotar a\l"
	.string "otros en verano.$"



SilphS2_20::
lock     
faceplayer     
msgbox SilphS2_Text_20, MSGBOX_DEFAULT
release     
end


SilphS2_Text_20:
.string "¿Crees que estoy maquinando algún\n"
.string "plan maléfico?\l"
.string "¿O creando algún Pokémon\l"
.string "invencible desde mi computadora?\l"
.string "{PAUSE 15}…{PAUSE 15}\l"
.string "¡Estás en lo cierto!$"

SilphS2_Text_20_EventScript_TM132::
	lock
	faceplayer
	goto_if_set FLAG_HOENN_171, SilphS2_Text_20_EventScript_ReceivedTM33
	msgbox SilphS2_Text_20_Text_TM33, MSGBOX_DEFAULT
	giveitem ITEM_TM132
	setflag FLAG_HOENN_171
	msgbox SilphS2_Text_20_Text_ExplainTM33, MSGBOX_DEFAULT
	release
	end

SilphS2_Text_20_EventScript_ReceivedTM33::
	msgbox SilphS2_Text_20_Text_ExplainTM33, MSGBOX_DEFAULT
	release
	end

SilphS2_Text_20_Text_TM33:
.string "¿Crees que estoy maquinando algún\n"
.string "plan maléfico?\l"
.string "¿O creando algún Pokémon\l"
.string "invencible desde mi computadora?\l"
.string "{PAUSE 15}…{PAUSE 15}\l"
.string "¡Estás en lo cierto!$"

SilphS2_Text_20_Text_ExplainTM33:
	.string "Con MAQUINACIÓN, elevarás\n"
	.string "drásticamente el AT.ESPECIAL\l"
	.string "del POKÉMON que lo ejecute.\l"
	.string "Es sorprendente lo que puede\l"
	.string "lograr uno por su propia cuenta.\l"
	.string "¿No crees?$"



SilphS2_21::
lock     
faceplayer     
msgbox SilphS2_Text_21, MSGBOX_DEFAULT
release     
end


SilphS2_Text_21:
.string "No verás la forma de hacer algo\n"
.string "hasta que efectivamente te veas\l"
.string "haciéndolo.$"



SilphS2_22::
lock     
faceplayer     
msgbox SilphS2_Text_22, MSGBOX_DEFAULT
release     
end


SilphS2_Text_22:
.string "Muchos aquí, entre los que me\n"
.string "incluyo, tenemos la mala costumbre\l"
.string "de fijarnos en lo que confirma\l"
.string "nuestros conocimientos, no en\l"
.string "nuestra ignorancia.$"



SilphS2_23::
lock     
faceplayer     
msgbox SilphS2_Text_23, MSGBOX_DEFAULT
release     
end


SilphS2_Text_23:
.string "Me encargaré personalmente de\n"
.string "meter entre rejas a todos esos\l"
.string "POLICÍAS que apoyaron el gobierno\l"
.string "de LANCE y permitieron todo tipo\l"
.string "de injusticias en esta región.$"



SilphS2_24::
lock     
faceplayer     
msgbox SilphS2_Text_24, MSGBOX_DEFAULT
release     
end


SilphS2_Text_24:
.string "Lo cierto es que estábamos hartos\n"
.string "de las condiciones impuestas por\l"
.string "el gobierno de LANCE, por cada 10¥\l"
.string "que ganábamos, entre una cosa y otra,\l"
.string "8¥ iban para el gobierno de LANCE.\l"
.string "¿En qué cabeza cabe semejante\l"
.string "presión fiscal?$"



SilphS2_25::
lock     
faceplayer     
msgbox SilphS2_Text_25, MSGBOX_DEFAULT
release     
end


SilphS2_Text_25:
.string "Hay tantos POKÉMON interesantes\n"
.string "por descubrir ahí afuera…\l"
.string "No hay duda de que las condiciones\l"
.string "de cada lugar son determinantes\l"
.string "para el desarrollo final de una\l"
.string "especie; POKÉMON como CAMERUPT y\l"
.string "SHARPEDO solo podían surgir en\l"
.string "HOENN, de igual modo que la\l"
.string "CASCADA METEORO propició la\l"
.string "aparición de BAGON, o el MONTE\l"
.string "PLATEADO de LARVITAR.\p"
.string "No son más que ejemplos de\n"
.string "adaptación al medio.$"



SilphS2_26::
lock     
faceplayer     
msgbox SilphS2_Text_26, MSGBOX_DEFAULT
release     
end


SilphS2_Text_26:
.string "Esa preocupación permanente y\n"
.string "estéril por todas las cosas que\l"
.string "tenemos que hacer es por sí sola\l"
.string "la mayor consumidora de tiempo y\l"
.string "energía.$"



SilphS2_27::
lock     
faceplayer     
msgbox SilphS2_Text_27, MSGBOX_DEFAULT
release     
end


SilphS2_Text_27:
.string "En última instancia, a nadie le\n"
.string "importa lo que sientas o lo que\l"
.string "pienses, solo les importa lo que\l"
.string "eres capaz de hacer.$"



SilphS2_29::
lock     
faceplayer     
msgbox SilphS2_Text_29, MSGBOX_DEFAULT
release     
end


SilphS2_Text_29:
.string "La mente que se abre a una nueva idea\n"
.string "jamás volverá a su tamaño original.$"



SilphS2_30::
lock     
faceplayer     
msgbox SilphS2_Text_30, MSGBOX_DEFAULT
release     
end


SilphS2_Text_30:
.string "En este lugar luchamos por obtener\n"
.string "lo extraordinario, llegar a donde\l"
.string "nadie más ha llegado, ir mucho más\l"
.string "allá de lo que aquellos cegados\l"
.string "por los 150 originales pudieran\l"
.string "llegar a soñar.$"



SilphS2_31::
lock     
faceplayer     
msgbox SilphS2_Text_31, MSGBOX_DEFAULT
release     
end


SilphS2_Text_31:
.string "Ese ROJO era bueno, pero claramente\n"
.string "estaba limitado por la realidad que OAK\l"
.string "le impuso; jamás fue libre, ni pudo\l"
.string "mover un dedo más de la cuenta sin el\l"
.string "consentimiento de OAK.\p"
.string "Por eso, alguien como ROJO jamás podrá\n"
.string "estar en un lugar como este, esta sala\l"
.string "no existe para él, este es de hecho un\l"
.string "lugar en el cual el 99% de la población\l"
.string "de KANTO jamás creería.\l"
.string "Y eso{PAUSE 15}…{PAUSE 15} forma parte\l"
.string "de nuestra grandeza.$"



SilphS2_33::
lock     
faceplayer     
msgbox SilphS2_Text_33, MSGBOX_DEFAULT
release     
end


SilphS2_Text_33:
.string "La pereza tiene una importante\n"
.string "ventaja sobre el resto de pasiones\l"
.string "para triunfar, y es precisamente\l"
.string "el hecho de no exigir nada.$"



SilphS2_34::
lock     
faceplayer     
msgbox SilphS2_Text_34, MSGBOX_DEFAULT
release     
end


SilphS2_Text_34:
.string "He oído que en la TORRE RADIO de\n"
.string "CIUDAD TRIGAL apenas cuentan con\l"
.string "seguridad, algún día se llevarán\l"
.string "un buen susto…{PAUSE 5}$"



SilphS2_35::
lock     
faceplayer     
msgbox SilphS2_Text_35, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_35.1, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_35.2, MSGBOX_DEFAULT
release     
end


SilphS2_Text_35:
.string "KANTO cuenta con buenos POKÉMON, sólidos\n"
.string "y equilibrados, sin embargo, no es una\l"
.string "región de extremos; aquí no encontrarás\l"
.string "a nadie con el ATAQUE FÍSICO de un\l"
.string "HAXORUS, las defensas de SHUCKLE o\l"
.string "la VELOCIDAD de NINJASK.\p"
.string "Pero no importa, puedes, con POKÉMON\n"
.string "de KANTO, formar un equipo que compita\l"
.string "con alguien que tenga a su disposición\l"
.string "a todos los POKÉMON que existen.$"

SilphS2_Text_35.1:
.string "Contar con más POKÉMON abre tu abanico\n"
.string "de opciones, puede dar una ventaja\l"
.string "estratégica, pero también vuelve la\l"
.string "elección más difícil.$"

SilphS2_Text_35.2:
.string "Al final, los mejores POKÉMON y\n"
.string "ENTRENADORES pueden provenir de\l"
.string "cualquier lugar.$"



SilphS2_36::
lock     
faceplayer     
msgbox SilphS2_Text_36, MSGBOX_DEFAULT
release     
end


SilphS2_Text_36:
.string "Nadie fuera de estas paredes podrá\n"
.string "llegar a imaginar que al final del\l"
.string "día SILPH y el TEAM ROCKET son de\l"
.string "hecho socios, y por ahora así ha\l"
.string "de ser.$"



SilphS2_37::
lock     
faceplayer     
msgbox SilphS2_Text_37, MSGBOX_DEFAULT
release     
end


SilphS2_Text_37:
.string "¡Disciplina, orden y paciencia!\n"
.string "¡Los 3 pilares de SILPH!\l"
.string "¡Jamás lo olvides chico!$"



SilphS2_38::
lock     
faceplayer     
msgbox SilphS2_Text_38, MSGBOX_DEFAULT
release     
end


SilphS2_Text_38:
.string "SILPH guarda secretos en su interior\n"
.string "que algunos como ese ROJO ni siquiera\l"
.string "podrían albergar en su imaginación.\l"
.string "Este lugar es uno de esos secretos.$"



SilphS2_39::
lock     
faceplayer     
msgbox SilphS2_Text_39, MSGBOX_DEFAULT
release     
end


SilphS2_Text_39:
.string "Deberías de visitar JOHTO al menos\n"
.string "una vez en la vida, lugares como la\l"
.string "SENDA DINDÓN o el LAGO DE LA FURIA\l"
.string "me hacen preguntarme en qué momento\l"
.string "renunciamos a vivir en zonas rurales\l"
.string "en beneficio de las ciudades.$"



SilphS2_41::
lock     
faceplayer     
msgbox SilphS2_Text_41, MSGBOX_DEFAULT
release     
end


SilphS2_Text_41:
.string "Muchos cambios se avecinan en KANTO.\n"
.string "Vuestra organización puede desempeñar\l"
.string "un papel fundamental en el devenir de\l"
.string "nuestra región.$"



SilphS2_42::
lock     
faceplayer     
msgbox SilphS2_Text_42, MSGBOX_DEFAULT
release     
end


SilphS2_Text_42:
.string "¡Esos ilusos de PUEBLO LAVANDA\n"
.string "y su POKÉMON ESENCIA!\p"
.string "¡La esencia está aquí, en las\n"
.string "oficinas de SILPH S.A. donde\l"
.string "cada día nos superamos a\l"
.string "nosotros mismos!$"



SilphS2_43::
lock     
faceplayer     
msgbox SilphS2_Text_43, MSGBOX_DEFAULT
release     
end


SilphS2_Text_43:
.string "La única forma de no acabar siendo\n"
.string "criticado es no decir nada, no\l"
.string "hacer nada, no ser nadie.$"



SilphS2_46::
lock     
faceplayer     
msgbox SilphS2_Text_46, MSGBOX_DEFAULT
release     
end


SilphS2_Text_46:
.string "La empresa DEVON en HOENN es hermética\n"
.string "con todo lo que desarrolla y produce.\l"
.string "Algunos creen que en realidad su\l"
.string "tecnología está a otro nivel.$"



SilphS2_47::
lock     
faceplayer     
msgbox SilphS2_Text_47, MSGBOX_DEFAULT
release     
end


SilphS2_Text_47:
.string "Solo los disciplinados son libres en\n"
.string "la vida, si eres indisciplinado, eres\l"
.string "un esclavo de tus estados de ánimo.$"



SilphS2_48::
lock     
faceplayer     
msgbox SilphS2_Text_48, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_48.1, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_48.2, MSGBOX_DEFAULT
delay 10
msgbox SilphS2_Text_48.3, MSGBOX_DEFAULT
release     
end


SilphS2_Text_48:
.string "No importa si ganas por mucho o\n"
.string "por poco, ganar es ganar.$"

SilphS2_Text_48.1:
.string "A nadie le importa si a causa de\n"
.string "un tropiezo perdiste injustamente\l"
.string "en el último momento, nadie se\l"
.string "acuerda de un segundo lugar; en el\l"
.string "medallero olímpico, da igual que\l"
.string "tengas 50 medallas de plata, si tu\l"
.string "rival tiene una sola más de oro,\l"
.string "quedará por delante en la\l"
.string "clasificación global.$" 

SilphS2_Text_48.2:
.string "Para alguien anclado solo en el\n"
.string "resultado final, la sola idea de que\l"
.string "no pueda acabar ganando realmente el\l"
.string "mejor es desalentadora.$"

SilphS2_Text_48.3:
.string "Ante esto, solo queda ver el resultado\n"
.string "como una consecuencia de nuestro\l"
.string "trabajo previo, no el fin último.$"



SilphS2_50::
lock     
faceplayer     
msgbox SilphS2_Text_50, MSGBOX_DEFAULT
release     
end


SilphS2_Text_50:
.string "La línea evolutiva de MAGNETON\n"
.string "tiene mucho potencial.\p"
.string "Sabemos de la existencia de MAGNEZONE,\n"
.string "no obstante, creemos que ese no es el\l"
.string "verdadero techo de este POKÉMON.\p"
.string "Su fisionomía le permite, teóricamente,\n"
.string "ser capaz de generar descargas que se\l"
.string "reirían de las de un ZAPDOS.$"



SilphS2_52::
lock     
faceplayer     
msgbox SilphS2_Text_52, MSGBOX_DEFAULT
release     
end


SilphS2_Text_52:
.string "La línea evolutiva de PORYGON está\n"
.string "aún por explotar; el no estar sujeto\l"
.string "a nuestro plano físico le da muchas\l"
.string "ventajas respecto al resto de POKÉMON.$"



SilphS2_53::
lock     
faceplayer     
msgbox SilphS2_Text_53, MSGBOX_DEFAULT
release     
end


SilphS2_Text_53:
.string "La discrección de este lugar es sagrada.\n"
.string "Si se diera a conocer al público,\l"
.string "perdería su magia, su esencia.\l"
.string "Pero tú eres consciente de ello, ¿no?$"



SilphS2Documento_100::
lock     
showmonpic SPECIES_PORYGON_Z, 10, 3  
playmoncry SPECIES_PORYGON_Z, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_100:
.string "PORYGON-Z:\p"
	.string "PS: 85\n"
	.string "ATAQUE: 80\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 145\l"
	.string "DEFENSA ESPECIAL: 75\l"
	.string "VELOCIDAD: 90\l"
	.string "TOTAL: 545\p"
	.string "Surgido a partir de un fallo en\n"
	.string "busca de un PORYGON3 que exprimiese\l"
	.string "al máximo el potencial de PORYGON.\l"
	.string "PORYGON-Z ha resultado tener un poder\l"
	.string "ofensivo desbordante, con un\l"
	.string "ATAQUE ESPECIAL de 145 de BASE,\l"
	.string "se corona como el NO LEGENDARIO\l"
	.string "de KANTO con mayor ATAQUE ESPECIAL.\l"
	.string "Solo es superado por MEWTWO, otro\l"
	.string "POKÉMON creado por la ciencia.$"



SilphS2Documento_101::
lock     
showmonpic SPECIES_SHARPEDO, 10, 3  
playmoncry SPECIES_SHARPEDO, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_101:
	.string "SHARPEDO:\p"
	.string "PS: 70\n"
	.string "ATAQUE: 140\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 75\l"
	.string "DEFENSA ESPECIAL: 70\l"
	.string "VELOCIDAD: 115\l"
	.string "TOTAL: 540\p"
	.string "El terror de los mares de HOENN,\n"
	.string "dueño de la mordedura más potente\l"
	.string "conocida con un triturar por STAB\l"
	.string "devastador, las salvajes aguas de\l"
	.string "HOENN obligaron a SHARPEDO a\l"
	.string "adaptarse hasta convertirse en uno\l"
	.string "de los POKÉMON más bravos del mar,\l"
	.string "muy preciado y temido por\l"
	.string "cualquier marinero.$"



SilphS2Documento_102::
lock     
showmonpic SPECIES_CAMERUPT, 10, 3  
playmoncry SPECIES_CAMERUPT, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_102:
	.string "CAMERUPT:\p"
	.string "PS: 70\n"
	.string "ATAQUE: 120\l"
	.string "DEFENSA: 100\l"
	.string "ATAQUE ESPECIAL: 145\l"
	.string "DEFENSA ESPECIAL: 95\l"
	.string "VELOCIDAD: 10\l"
	.string "TOTAL: 540\p"
	.string "El camello de carga de HOENN, con\n"
	.string "una relación ATAQUE-DEFENSA\l"
	.string "inexistente aquí en KANTO, pagando\l"
	.string "por ello con una velocidad de solo\l"
	.string "10 puntos, se cree que la enorme\l"
	.string "potencia de su TIERRA VIVA y\l"
	.string "ESTALLIDO influyeron en el proceso\l"
	.string "de emersión de HOENN.$"



SilphS2Documento_103::
lock     
showmonpic SPECIES_FLOETTE_ETERNAL_FLOWER, 10, 3  
playmoncry SPECIES_FLOETTE_ETERNAL_FLOWER, CRY_MODE_ENCOUNTER 
msgbox SilphS2Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

SilphS2Documento_Text_103:
	.string "FLOETTE-ETERNO:\p"
	.string "PS: 74\n"
	.string "ATAQUE: 65\l"
	.string "DEFENSA: 67\l"
	.string "ATAQUE ESPECIAL: 125\l"
	.string "DEFENSA ESPECIAL: 128\l"
	.string "VELOCIDAD: 92\l"
	.string "TOTAL: 551\p"
	.string "POKÉMON de procedencia única, se\n"
	.string "cree que su ENTRENADOR logró\l"
	.string "devolverle a la vida durante la\l"
	.string "guerra que asoló KALOS, los\l"
	.string "mecanismos mediante los que\l"
	.string "supuestamente logró tal hazaña nos\l"
	.string "son desconocidos.$"

Silph_S2_Discoxtrano::
lock     
faceplayer  
goto_if_set FLAG_UNUSED_0x270, Silph_S2_Discoxtrano_Despues
msgbox Silph_S2_Discoxtrano_Text_2, MSGBOX_NPC
playfanfare MUS_OBTAIN_ITEM
additem ITEM_DUBIOUS_DISC
msgbox Silph_S2_Discoxtrano_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_UNUSED_0x270
release     
end

Silph_S2_Discoxtrano_Text_2:
	.string "Alguien como tú debería de tener\n"
	.string "acceso a lo último de lo último en\l"
	.string "tecnología. Dicen que el PRESIDENTE te\l"
	.string "regaló un PORYGON, junto con una\l"
	.string "MEJORA para convertirlo en PORYGON2. Si\l"
	.string "quieres ir más allá, este objeto es para\l"
	.string "ti.$"

Silph_S2_Discoxtrano_Despues::
msgbox Silph_S2_Discoxtrano_Text_1, MSGBOX_AUTOCLOSE
release
end

Silph_S2_Discoxtrano_Texto_1.1:
.string "¡{PLAYER} obtuvo DISCOXTRAÑO\n"
	.string "de manos de científico!$"

Silph_S2_Discoxtrano_Text_1:
	.string "Con el DISCOXTRAÑO podrás evolucionar\n"
	.string "a PORYGON2 en PORYGON-Z, una versión\l"
	.string "algo más vulnerable a los ataques, pero\l"
	.string "con una ofensiva extraordinaria.$"

Silph_S2_Llave_Texto_1:
	.string "Se requiere de una llave especial.$"

Silph_S2_Llave_Texto_2:
	.string "¿Quieres usar la LLAVE SILPH S3?$"

Silph_S2_Llave::
compare VAR_UNUSED_0x40F8, 11
goto_if_gt Silph_S2_Llave_Despues
delay 10
msgbox Silph_S2_Llave_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Silph_S2_Llave_Despues::
delay 10
msgbox Silph_S2_Llave_Texto_2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_CARD
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 11, 32, 0x334, FALSE
setmetatile 11, 33, 0x334, FALSE
setmetatile 11, 34, 0x334, FALSE
setmetatile 12, 32, 0x334, FALSE
setmetatile 12, 33, 0x334, FALSE
setmetatile 12, 34, 0x334, FALSE
setmetatile 13, 32, 0x334, FALSE
setmetatile 13, 33, 0x334, FALSE
setmetatile 13, 34, 0x334, FALSE
setmetatile 10, 32, 0x335, FALSE
setmetatile 10, 33, 0x335, FALSE
special DrawWholeMapView
delay 20
release
end

Base_Johto_Llave_Derecha::
compare VAR_UNUSED_0x40F7, 153
goto_if_gt Base_Johto_Llave_Derecha_Despues
delay 10
msgbox Base_Johto_Llave_Derecha_Despues_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Base_Johto_Llave_Derecha_Despues::
delay 10
playse SE_CARD
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 17, 54, 0x347, FALSE
setmetatile 18, 54, 0x346, FALSE
setmetatile 17, 55, 0x335, FALSE
setmetatile 18, 55, 0x335, FALSE
setmetatile 17, 56, 0x339, FALSE
setmetatile 18, 56, 0x33A, FALSE
setmetatile 19, 56, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

Base_Johto_Llave_Izquierda::
compare VAR_UNUSED_0x40F7, 153
goto_if_gt Base_Johto_Llave_Izquierda_Despues
delay 10
msgbox Base_Johto_Llave_Derecha_Despues_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Base_Johto_Llave_Izquierda_Despues::
delay 10
playse SE_CARD
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 13, 54, 0x347, FALSE
setmetatile 14, 54, 0x346, FALSE
setmetatile 13, 55, 0x335, FALSE
setmetatile 14, 55, 0x335, FALSE
setmetatile 13, 56, 0x339, FALSE
setmetatile 14, 56, 0x33A, FALSE
setmetatile 15, 56, 0x334, FALSE
special DrawWholeMapView
delay 20
release
end

Base_Johto_Llave_Derecha_Despues_Texto_1:
	.string "Se requiere de una llave especial.$"

Base_Johto_Llave_Derecha_Despues_Texto_2:
	.string "¿Quieres ir al P2 de la BASE?$"
