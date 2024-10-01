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
.string "protección.\l"
.string "Pues bien, LANCE ha estado apunto\l"
.string "de aplicar aquí el diezmo pero a\l"
.string "la inversa, ¿en qué consiste?\l"
.string "Fácil, el ciudadano de KANTO se\l"
.string "queda con el 10% de lo que\l"
.string "produce, mientras que LANCE y su\l"
.string "gobierno con el resto.\l"
.string "Lo más gracioso es que la mayoría\l"
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
.string "las aspiraciones de LANCE a costa\l"
.string "de mantener en la estupidez al\l"
.string "pueblo, he oído que hay un\l"
.string "proyecto para conectar AZAFRÁN con\l"
.string "TRIGAL, en JOHTO.\l"
.string "También que van a expandir el\l"
.string "puerto de CARMÍN para que abarque\l"
.string "más destinos.\l"
.string "¡El tiempo pasa chico y no espera\l"
.string "a nadie!$"



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
.string "dicta mandatos y prohibiciones.\l"
.string "El deber tiene un límite.\l"
.string "La capacidad, por el contrario, no\l"
.string "lo tiene, está abierta por arriba.\l"
.string "De ahí que la coerción que viene\l"
.string "de la capacidad resulte ilimitada.$"



SilphS2_9::
lock     
faceplayer     
msgbox SilphS2_Text_9, MSGBOX_DEFAULT
release     
end


SilphS2_Text_9:
.string "Actúa como si vivieras por segunda\n"
.string "vez y la primera lo hubieras hecho\l"
.string "tan desacertadamente como estás a\l"
.string "punto de hacerlo ahora.$"



SilphS2_10::
lock     
faceplayer     
msgbox SilphS2_Text_10, MSGBOX_DEFAULT
release     
end


SilphS2_Text_10:
.string "Hemos hecho unos progresos\n"
.string "sobresalientes sobre el prototipo\l"
.string "-PORYGON2-, en las últimas\l"
.string "semanas, ahora su capacidad\l"
.string "ofensiva se ha incrementado en un\l"
.string "50% a costa de perder solo un 10%\l"
.string "de su capacidad defensiva.$"



SilphS2_11::
lock     
faceplayer     
msgbox SilphS2_Text_11, MSGBOX_DEFAULT
release     
end


SilphS2_Text_11:
.string "El mejor plan solo vale lo que\n"
.string "valgan las unidades que lo pongan\l"
.string "en práctica.$"



SilphS2_12::
lock     
faceplayer     
msgbox SilphS2_Text_12, MSGBOX_DEFAULT
release     
end


SilphS2_Text_12:
.string "Si quieres pedirle algo a alguien,\n"
.string "que sea una persona ocupada, esta\l"
.string "llevará tal inercia de trabajo que\l"
.string "tu petición no será más que otra\l"
.string "tarea más que realizar sobre la\l"
.string "marcha, en cambio, quien no tiene\l"
.string "nada que hacer, deberá poner mucha\l"
.string "más energía en ponerse en\l"
.string "movimiento exclusivamente para\l"
.string "llevar a cabo tu petición, después\l"
.string "de todo, no hay cosa, por fácil\l"
.string "que sea, que no la haga difícil la\l"
.string "falta de movimiento y la mala\l"
.string "gana.$"



SilphS2_13::
lock     
faceplayer     
msgbox SilphS2_Text_13, MSGBOX_DEFAULT
release     
end


SilphS2_Text_13:
.string "La TORRE DE RADIO de TRIGAL ha\n"
.string "demostrado ser un éxito rotundo en\l"
.string "JOHTO, mucho está tardando alguna\l"
.string "gran empresa de aquí en copiar la\l"
.string "idea.$"



SilphS2_14::
lock     
faceplayer     
msgbox SilphS2_Text_14, MSGBOX_DEFAULT
release     
end


SilphS2_Text_14:
.string "Los humanos estamos ávidos de\n"
.string "reglas porque necesitamos reducir\l"
.string "la dimensión de las cosas para que\l"
.string "nos puedan caber en la cabeza.\l"
.string "Cuanto más aleatoria es la\l"
.string "información, mayor es la\l"
.string "dimensionalidad y, por\l"
.string "consiguiente, más difícil de\l"
.string "resumir.\l"
.string "Cuanto más se resume, más orden se\l"
.string "pone y menor es lo aleatorio.\l"
.string "De aquí que la misma condición que\l"
.string "nos hace simplificar nos empuja a\l"
.string "pensar que el mundo es menos\l"
.string "aleatorio de lo que realmente es.$"



SilphS2_15::
lock     
faceplayer     
msgbox SilphS2_Text_15, MSGBOX_DEFAULT
release     
end


SilphS2_Text_15:
.string "Algunos se pasan toda una vida\n"
.string "tras un momento futuro perfecto\l"
.string "que no llega o, incluso cuando\l"
.string "este llega, lo ignoran y pasan a\l"
.string "buscar otro más, reduciendo su\l"
.string "presente a un mero fin futuro,\l"
.string "cuando no se dan cuenta de que el\l"
.string "momento en que están escalando\l"
.string "para llegar a ese supuesto paraíso\l"
.string "puede ser más placentero que el\l"
.string "estar en el propio paraíso del que\l"
.string "por cierto, una vez llegues y\l"
.string "pases un tiempo allí, acabarás por\l"
.string "aburrirte.$"



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
.string "en la LIGA POKÉMON, nos\l"
.string "liberásteis del control que\l"
.string "ejercía LANCE sobre nuestra\l"
.string "empresa, ahora no tenemos que\l"
.string "rendir cuentas sobre muchos de\l"
.string "nuestros movimientos, y lo que en\l"
.string "esta sede ocurra permanecerá\l"
.string "oculto al público a partir de\l"
.string "ahora, algo que, por supuesto, no\l"
.string "os incluye a vosotros ROCKETS, tú\l"
.string "y tu LÍDER tenéis aquí una segunda\l"
.string "casa.$"



SilphS2_19::
lock     
faceplayer     
msgbox SilphS2_Text_19, MSGBOX_DEFAULT
release     
end


SilphS2_Text_19:
.string "Prefiero invertir mi tiempo\n"
.string "haciendo la tarea, que en\l"
.string "malgastarlo hablando y formulando\l"
.string "1000 teorías sobre cómo hacer la\l"
.string "tarea.$"



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
.string "Me encargaré personalmente\n"
.string "de meter entre rejas a todos\l"
.string "esos POLICÍAS que apoyaron el\l"
.string "gobierno de LANCE y permitieron\l"
.string "todo tipo de injusticias en esta\l"
.string "región.$"



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
.string "que ganábamos, entre una cosa y otra\l"
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
.string "especie, POKÉMON como CAMERUPT y\l"
.string "SHARPEDO solo podían surgir en\l"
.string "HOENN, de igual modo que la\l"
.string "CASCADA METEORO propició la\l"
.string "aparición de BAGON, o el MONTE\l"
.string "PLATEADO de LARVITAR, no son más\l"
.string "que ejemplos de adaptación al\l"
.string "medio.$"



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
.string "En última instancia a nadie le\n"
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
.string "La mente que se abre a una nueva\n"
.string "idea jamás volverá a su tamaño\l"
.string "original.$"



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
.string "Ese ROJO era bueno, pero\n"
.string "claramente estaba totalmente\l"
.string "limitado por la realidad que OAK\l"
.string "le impuso, jamás fue libre, ni\l"
.string "pudo mover un dedo más de la\l"
.string "cuenta sin el consentimiento de\l"
.string "OAK, es por eso que un tipo como\l"
.string "ROJO jamás podrá estar en un lugar\l"
.string "como este, esta sala no existe\l"
.string "para él, este es de hecho un lugar\l"
.string "en el cual el 99% de la población\l"
.string "de KANTO jamás creería, y eso\l"
.string "precisamente es lo que nos hace\l"
.string "grandes.$"



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
.string "seguridad, algún día se\l"
.string "arrepentirán de ello…{PAUSE 5}$"



SilphS2_35::
lock     
faceplayer     
msgbox SilphS2_Text_35, MSGBOX_DEFAULT
release     
end


SilphS2_Text_35:
.string "KANTO cuenta con buenos POKÉMON,\n"
.string "sólidos y equilibrados, sin\l"
.string "embargo no es una región de\l"
.string "extremos, aquí no encontrarás a\l"
.string "nadie con el ATAQUE FÍSICO de un\l"
.string "HAXORUS, las defensas de SHUCKLE o\l"
.string "la VELOCIDAD de NINJASK, pero\l"
.string "igualmente puedes con POKÉMON de\l"
.string "KANTO formar un equipo que compita\l"
.string "con alguien que tenga a su\l"
.string "disposición a todos los POKÉMON\l"
.string "existentes, el hecho de contar con\l"
.string "más POKÉMON solo abre tus\l"
.string "opciones, puede dar una ventaja\l"
.string "estratégica, pero por nivel base,\l"
.string "los mejores POKÉMON y ENTRENADORES\l"
.string "pueden provenir de cualquier\l"
.string "lugar.$"



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
.string "SILPH guarda muchos secretos en su\n"
.string "interior que algunos como ese ROJO\l"
.string "como mucho podrán albergar en su\l"
.string "imaginación, este lugar es uno de\l"
.string "esos secretos.$"



SilphS2_39::
lock     
faceplayer     
msgbox SilphS2_Text_39, MSGBOX_DEFAULT
release     
end


SilphS2_Text_39:
.string "Deberías de visitar JOHTO al menos\n"
.string "una vez en la vida, lugares como\l"
.string "la SENDA DINDÓN o el LAGO DE LA\l"
.string "FURIA me hacen preguntarme en qué\l"
.string "momento renunciamos a vivir en\l"
.string "zonas rurales en beneficio de las\l"
.string "ciudades.$"



SilphS2_41::
lock     
faceplayer     
msgbox SilphS2_Text_41, MSGBOX_DEFAULT
release     
end


SilphS2_Text_41:
.string "Muchos cambios se avecinan en\n"
.string "KANTO, estate atento ROCKET,\l"
.string "vuestra organización puede\l"
.string "desempeñar un papel fundamental en\l"
.string "el devenir de esta región.$"



SilphS2_42::
lock     
faceplayer     
msgbox SilphS2_Text_42, MSGBOX_DEFAULT
release     
end


SilphS2_Text_42:
.string "¡Esos ilusos de PUEBLO LAVANDA y\n"
.string "su POKÉMON ESENCIA!\l"
.string "¡La esencia está aquí, en las\l"
.string "oficinas de SILPH S.A. donde cada\l"
.string "día nos superamos a nosotros\l"
.string "mismos!$"



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
.string "La empresa DEVON en HOENN es muy\n"
.string "hermética con todo lo que\l"
.string "desarrolla y produce, mantiene\l"
.string "bajo llave el misterio de los\l"
.string "FÓSILES y POKÉMON ANCESTRALES\l"
.string "propios de su región, jamás\l"
.string "publicaron ningún avance en cuanto\l"
.string "a creación de un POKÉMON propio a\l"
.string "diferencia nuestra con PORYGON y\l"
.string "más recientemente PORYGON2.$"



SilphS2_47::
lock     
faceplayer     
msgbox SilphS2_Text_47, MSGBOX_DEFAULT
release     
end


SilphS2_Text_47:
.string "Solo los disciplinados son libres\n"
.string "en la vida, si eres\l"
.string "indisciplinado, eres un esclavo de\l"
.string "tus estados de ánimo.$"



SilphS2_48::
lock     
faceplayer     
msgbox SilphS2_Text_48, MSGBOX_DEFAULT
release     
end


SilphS2_Text_48:
.string "No importa si ganas por mucho o\n"
.string "por poco, ganar es ganar.\l"
.string "A nadie le importa si a causa de\l"
.string "un tropiezo perdiste injustamente\l"
.string "en el último momento, nadie se\l"
.string "acuerda de un segundo lugar, en el\l"
.string "medallero olímpico da igual que\l"
.string "tengas 50 medallas de plata, si tu\l"
.string "rival tiene una sola más de oro,\l"
.string "quedará por delante en la\l"
.string "clasificación global, para alguien\l"
.string "anclado solo en el resultado final\l"
.string "la sola idea de que no pueda\l"
.string "acabar ganando realmente el mejor\l"
.string "es desalentadora, ante esto solo\l"
.string "nos queda ver el resultado final\l"
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
.string "tiene mucho potencial, sabemos de\l"
.string "la existencia de MAGNEZONE, no\l"
.string "obstante, creemos que ese no es el\l"
.string "verdadero techo de este POKÉMON,\l"
.string "su fisionomía le permite,\l"
.string "teóricamente, ser capaz de generar\l"
.string "descargas eléctricas que se\l"
.string "reirían de las de un ZAPDOS.$"



SilphS2_52::
lock     
faceplayer     
msgbox SilphS2_Text_52, MSGBOX_DEFAULT
release     
end


SilphS2_Text_52:
.string "La línea evolutiva de PORYGON\n"
.string "tiene mucho potencial aún por\l"
.string "explotar, el no estar sujeto a\l"
.string "nuestro plano físico le da muchas\l"
.string "ventajas respecto al resto de\l"
.string "POKÉMON.$"



SilphS2_53::
lock     
faceplayer     
msgbox SilphS2_Text_53, MSGBOX_DEFAULT
release     
end


SilphS2_Text_53:
.string "La discrección de este lugar es\n"
.string "sagrada. Si se diera a conocer al\l"
.string "público, perdería su magia, su\l"
.string "esencia, espero que seas\l"
.string "consciente de esto.$"



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
	.string "busca de un PORYGON3 que\l"
	.string "exprimiese al máximo el potencial\l"
	.string "de PORYGON, este PORYGON-Z surgido\l"
	.string "ha resultado tener una capacidad\l"
	.string "ofensiva desbordante, con un\l"
	.string "ATAQUE ESPECIAL de 145 de BASE\l"
	.string "superando a GENGAR como el no\l"
	.string "legendario de KANTO con mayor\l"
	.string "ATAQUE ESPECIAL, únicamente\l"
	.string "superado por MEWTWO, otro POKÉMON\l"
	.string "creado por la ciencia.$"



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
	.string "MEJORA para convertirlo en pORYGON2. Si\l"
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
compare VAR_UNUSED_0x40FF, 11
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
