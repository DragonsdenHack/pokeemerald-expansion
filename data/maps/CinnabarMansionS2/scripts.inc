CinnabarMansionS2_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, CinnabarMansionS2_OnFrame
	.byte 0

CinnabarMansionS2_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 78, CinnabarMansion_S2_Escena_7
	.2byte 0

CinnabarMansionS2_EventScript_Cientifico::
	trainerbattle_single TRAINER_MARY, CinnabarMansionS2_Text_CientificoIntro, CinnabarMansionS2_Text_CientificoDefeated
	msgbox CinnabarMansionS2_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2_EventScript_Cientifico2::
	trainerbattle_single TRAINER_JONAS, CinnabarMansionS2_Text_Cientifico2Intro, CinnabarMansionS2_Text_Cientifico2Defeated
	msgbox CinnabarMansionS2_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2_EventScript_Cientifico3::
	trainerbattle_single TRAINER_KAYLEY, CinnabarMansionS2_Text_Cientifico3Intro, CinnabarMansionS2_Text_Cientifico3Defeated
	msgbox CinnabarMansionS2_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



CinnabarMansionS2Documento_100::
lock     
showmonpic SPECIES_TAUROS_X, 10, 3  
playmoncry SPECIES_TAUROS, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_100:
	.string "TAUROS-X:\p"
	.string "PS: 75\n"
	.string "ATAQUE: 155\l"
	.string "DEFENSA: 150\l"
	.string "ATAQUE ESPECIAL: 30\l"
	.string "DEFENSA ESPECIAL: 90\l"
	.string "VELOCIDAD: 90\l"
	.string "TOTAL: 590\p"
	.string "TIPO: ROCA/NORMAL\n"
	.string "HABILIDAD: CABEZA ROCA\l"
	.string "Logramos amplificar la salvaje\l"
	.string "capacidad de embestida del TAUROS\l"
	.string "que habita en KANTO, descubrimos\l"
	.string "que su VELOCIDAD y TIPO NORMAL\l"
	.string "eran los grandes limitantes para\l"
	.string "desarrollar toda la fuerza y\l"
	.string "resistencia que su cuerpo podía\l"
	.string "soportar, en cuanto logramos\l"
	.string "reducirla al tiempo que\l"
	.string "implantarle los genes\l"
	.string "de RHYDON responsables de su TIPO\l"
	.string "ROCA, su capacidad física se\l"
	.string "disparó hasta niveles impensables,\l"
	.string "todo lo que golpea con TESTARAZO y\l"
	.string "ARIETE es reducido a polvo.$"



CinnabarMansionS2Documento_101::
lock     
showmonpic SPECIES_MAGMORTAR_Y, 10, 3  
playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_101:
	.string "MAGMORTAR-Y:\p"
	.string "PS: 75\n"
	.string "ATAQUE: 95\l"
	.string "DEFENSA: 97\l"
	.string "ATAQUE ESPECIAL: 165\l"
	.string "DEFENSA ESPECIAL: 105\l"
	.string "VELOCIDAD: 103\l"
	.string "TOTAL: 640\p"
	.string "TIPO: FUEGO\n"
	.string "HABILIDAD: INDEFENSO\l"
	.string "La creencia de BLAINE en que\l"
	.string "MAGMAR era el POKÉMON TIPO FUEGO\l"
	.string "con mayor potencial especial de\l"
	.string "toda KANTO por encima de MOLTRES\l"
	.string "ha quedado de sobra demostrada,\l"
	.string "las llamaradas de MAGMORTAR-Y\l"
	.string "harán parecer a las del LEGENDARIO\l"
	.string "mediocres, a ello se le suma mayor\l"
	.string "velocidad y una mejorada\l"
	.string "resistencia respecto a la línea\l"
	.string "evolutiva de MAGMAR. Todo objetivo\l"
	.string "al que sus enormes cañones apunten\l"
	.string "será alcanzado sin posibilidad de\l"
	.string "fallo.$"



CinnabarMansionS2Documento_102::
lock     
showmonpic SPECIES_DEOXYS_DEFENSE, 10, 3  
playmoncry SPECIES_DEOXYS_DEFENSE, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_102:
	.string "DEOXYS DEFENSA:\p"
	.string "PS: 100\n"
	.string "ATAQUE: 20\l"
	.string "DEFENSA: 180\l"
	.string "ATAQUE ESPECIAL: 70\l"
	.string "DEFENSA ESPECIAL: 180\l"
	.string "VELOCIDAD: 50\l"
	.string "TOTAL: 600\p"
	.string "Consideramos su combinación\n"
	.string "genética producto de una mutación\l"
	.string "como un milagro de la naturaleza,\l"
	.string "milagro que le ha dotado en su\l"
	.string "forma DEFENSA del mayor\l"
	.string "aguante a ataques que conocemos hasta\l"
	.string "la fecha, un aguante que\l"
	.string "excede incluso al del\l"
	.string "mismísimo LUGIA.$"



CinnabarMansionS2Documento_103::
lock     
showmonpic SPECIES_DEOXYS_ATTACK, 10, 3  
playmoncry SPECIES_DEOXYS_ATTACK, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_103, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_103:
	.string "DEOXYS ATAQUE:\p"
	.string "PS: 100\n"
	.string "ATAQUE: 20\l"
	.string "DEFENSA: 75\l"
	.string "ATAQUE ESPECIAL: 180\l"
	.string "DEFENSA ESPECIAL: 75\l"
	.string "VELOCIDAD: 150\l"
	.string "TOTAL: 600\p"
	.string "Consideramos su combinación\n"
	.string "genética producto de una mutación\l"
	.string "como un milagro de la naturaleza,\l"
	.string "milagro que le ha dotado en su\l"
	.string "forma ATAQUE del mayor ATAQUE\l"
	.string "ESPECIAL que conocemos hasta la\l"
	.string "fecha, unos poderes PSÍQUICOS que\l"
	.string "exceden incluso a los del\l"
	.string "mismísimo MEWTWO.$"



CinnabarMansionS2Documento_104::
lock     
showmonpic SPECIES_AERODACTYL_PRIMAL, 10, 3  
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_104, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_104:
	.string "AERODACTYL PRIMIGENIO:\p"
	.string "PS: 80\n"
	.string "ATAQUE: 145\l"
	.string "DEFENSA: 105\l"
	.string "ATAQUE ESPECIAL: 60\l"
	.string "DEFENSA ESPECIAL: 85\l"
	.string "VELOCIDAD: 140\l"
	.string "TOTAL: 615\p"
	.string "TIPO: ROCA/DRAGÓN\n"
	.string "HABILIDAD: LEVITACIÓN\l"
	.string "La verdadera forma en estado\l"
	.string "salvaje de AERODACTYL hace 300\l"
	.string "millones de años, el depredador\l"
	.string "más temible en su momento, con una\l"
	.string "VELOCIDAD inigualable de la que\l"
	.string "ninguna presa podía escapar.$"



CinnabarMansionS2Documento_105::
lock     
showmonpic SPECIES_MEWTWO, 10, 3  
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_105, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_105:
	.string "NÚMERO 1: MEWTWO\p"
	.string "PS: 106\n"
	.string "ATAQUE: 110\l"
	.string "DEFENSA: 90\l"
	.string "ATAQUE ESPECIAL: 154\l"
	.string "DEFENSA ESPECIAL: 90\l"
	.string "VELOCIDAD: 130\l"
	.string "TOTAL: 680\p"
	.string "Un POKÉMON hecho para gobernar\n"
	.string "regiones con puño de hierro, su\l"
	.string "relación ofensivo-defensiva no\l"
	.string "conoce igual, y sus poderes\l"
	.string "PSÍQUICOS, a pesar de haber sido\l"
	.string "superados por DEOXYS, sigue\l"
	.string "guardando un potencial aún por\l"
	.string "explotar que podría hacerle rondar\l"
	.string "los 200 de BASE en esta\l"
	.string "estadística.$"



CinnabarMansionS2Documento_106::
lock     
msgbox CinnabarMansionS2Documento_Text_106, MSGBOX_DEFAULT
release     
end

CinnabarMansionS2Documento_Text_106:
	.string "HO-OH, LUGIA, RAYQUAZA{PAUSE 15}…{PAUSE 15}\n"
	.string "Todos ellos son POKÉMON\l"
	.string "formidables, pero inviables para\l"
	.string "experimentar con ellos y poner en\l"
	.string "práctica modificaciones que puedan\l"
	.string "incrementar su ya de por sí vasto\l"
	.string "poder. En cambio, MEW es otra\l"
	.string "historia, posee la mejor base\l"
	.string "genética, tanto por maleabilidad\l"
	.string "como por posibles combinaciones,\l"
	.string "esto nos induce a pensar que con\l"
	.string "MEWTWO únicamente logramos una\l"
	.string "combinación genética favorable\l"
	.string "respecto a MEW, pero ni fue la más\l"
	.string "favorable posible, ni la más\l"
	.string "óptima.$"



CinnabarMansionS2Documento_107::
lock     
showmonpic SPECIES_METAGROSS, 10, 3  
playmoncry SPECIES_METAGROSS, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_107, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes2, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes3, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes4, MSGBOX_DEFAULT
msgbox CinnabarMansionS2Documento_Text_107YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarMansionS2Documento_107No
msgbox CinnabarMansionS2Documento_Text_107Yes5, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_107:
.string "METAGROSS Y EL GRAN ENGAÑO DE\n"
	.string "DEVON EN HOENN:\l"
	.string "…\l"
	.string "…\l"
	.string "Bien es sabido que el\l"
	.string "PSEUDOLEGENDARIO característico de\l"
	.string "HOENN es SALAMENCE, dragón que\l"
	.string "refleja el poder contenido en un\l"
	.string "lugar como la CASCADA METEORO, de\l"
	.string "un poder similar a DRAGONITE.\l"
	.string "Sin embargo, podemos encontrar en\l"
	.string "HOENN otro POKÉMON con\l"
	.string "características de\l"
	.string "PSEUDOLEGENDARIO, y no es otro que\l"
	.string "METAGROSS.$"

CinnabarMansionS2Documento_Text_107YesNo:
.string "¿Seguir leyendo?$"

CinnabarMansionS2Documento_107No::
hidemonpic
release
end

CinnabarMansionS2Documento_Text_107Yes:
    .string "HOENN es la única región en la que\n"
	.string "esto ocurre, 2 pseudolegendarios\l"
	.string "compartiendo terreno, algunos\l"
	.string "achacan esta casualidad a la\l"
	.string "enorme variedad de fauna y flora\l"
	.string "que podemos encontrar en HOENN, no\l"
	.string "obstante, la biología de la línea\l"
	.string "evolutiva de METAGROSS poco o nada\l"
	.string "tiene que ver con esta fauna y\l"
	.string "flora, y nuestras últimas\l"
	.string "investigaciones apuntan a que los\l"
	.string "motivos de la existencia de 2\l"
	.string "pseudolegendarios en una misma\l"
	.string "región son otros.$"



CinnabarMansionS2Documento_Text_107Yes2:
.string "DEVON S.A. es la SILPH S.A. de\n"
	.string "HOENN, sin embargo, jamás ha hecho\l"
	.string "públicos logros de mayor\l"
	.string "trascendencia que POKÉ BALLS como\l"
	.string "la MALLA BALL, BUCEO BALL, ACOPIO\l"
	.string "BALL o TURNO BALL, además del\l"
	.string "POKÉNAV, cuando sabemos que cuenta\l"
	.string "con recursos y capacidad para, al\l"
	.string "igual que SILPH, crear un POKÉMON\l"
	.string "artificial estilo PORYGON.$"



CinnabarMansionS2Documento_Text_107Yes3:
    .string "Es aquí donde entra el hijo del\n"
	.string "PRESIDENTE de DEVON: MÁXIMO, y sus\l"
	.string "pretensiones de ser reconocido\l"
	.string "como el mejor ENTRENADOR de HOENN\l"
	.string "al tiempo que un erudito de los\l"
	.string "FÓSILES, no obstante, ARMALDO y\l"
	.string "CRADILY no son suficientes para\l"
	.string "coronarse CAMPEÓN, y es aquí donde\l"
	.string "entra la creación de un POKÉMON a\l"
	.string "la carta por parte de DEVON para\l"
	.string "asegurar a MÁXIMO la jerarquía\l"
	.string "suficiente como para ser CAMPEÓN.$"



CinnabarMansionS2Documento_Text_107Yes4:
.string "No existe ni un solo BELDUM en\n"
	.string "todo HOENN excepto el METAGROSS de\l"
	.string "MÁXIMO, el cual tiene muchos, pero\l"
	.string "jamás habló de su lugar de\l"
	.string "procedencia, las características y\l"
	.string "constitución de su línea\l"
	.string "evolutiva, comenzando por un\l"
	.string "BELDUM que solo puede aprender un\l"
	.string "movimiento (DERRIBO, cualidad que\l"
	.string "en estado salvaje hubiera\l"
	.string "propiciado su extinción al no\l"
	.string "contar con variedad de\l"
	.string "alternativas con qué defenderse),\l"
	.string "hasta terminar con un METAGROS de\l"
	.string "constitución fría, robótica y\l"
	.string "calculadora, además de una\l"
	.string "combinación de tipos\l"
	.string "sospechosamente favorable, como si\l"
	.string "hubiera sido introducida a la\l"
	.string "carta.$"



CinnabarMansionS2Documento_Text_107Yes5:
.string "De confirmarse todo esto,\n"
	.string "estaríamos ante el verdadero\l"
	.string "primer POKÉMON modificado por el\l"
	.string "hombre, con tal nivel de éxito que\l"
	.string "logró replicar el poder de todo un\l"
	.string "PSEUDOLEGENDARIO, haciéndose pasar\l"
	.string "por ello y siendo considerado por\l"
	.string "todos como tal.$"

CinnabarMansionS2_Blaine::
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Blaine_Move_1
waitmovement 0x0
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Blaine_Move_2
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_5
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Blaine_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_7 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
waitse
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BLAINE_2, CinnabarMansionS2_Blaine_Texto_9
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_10 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
waitse
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_10.2 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_8
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Blaine_Texto_15 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, CinnabarMansionS2_Blaine_Move_5
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 115
release
end

CinnabarMansionS2_Blaine_Texto_1:
.string "BLAINE: Ya estás aquí.$"

CinnabarMansionS2_Blaine_Texto_2:
.string "Nadie hubiera pensado que un ROCKET\n"
	.string "daría tantos problemas, eres un caso\l"
	.string "único, la excepción que confirma la\l"
	.string "regla. Pero incluso esa excepción\l"
	.string "responde a unos patrones que buenamente\l"
	.string "nos hemos encargado de cubrir aquí{PAUSE 5}…{PAUSE 5}$"

CinnabarMansionS2_Blaine_Texto_3:
.string "Observa este lugar, su única razón\n"
	.string "de ser es explorar los límites que\l"
	.string "las leyes de este mundo nos imponen.\p"
	.string "Al igual que el TEAM ROCKET,\n"
	.string "nuestro fin último es similar.$"

CinnabarMansionS2_Blaine_Texto_4:
.string "MAGMAR, CHARIZARD, ARCANINE…\n"
	.string "Solo son números, lo que les\l"
	.string "diferencia es un mayor o menor\l"
	.string "grado en cada uno de los 6\l"
	.string "parámetros que componen la\l"
	.string "genética inherente a cada especie.$"

CinnabarMansionS2_Blaine_Texto_4.1:
	.string "Lo único que tienen de especial\n"
	.string "los LEGENDARIOS es un total mayor\l"
	.string "en la suma de esos 6 parámetros,\l"
	.string "no han hecho nada para ganarse ese\l"
	.string "mayor total, solo ser -LEGENDARIOS-\l"
	.string "por gracia del -creador-.$"

CinnabarMansionS2_Blaine_Texto_4.2:
	.string "Un MAGIKARP, por mucho que quiera,\n"
	.string "jamás se acercará al peor DRAGONITE\l"
	.string "que pueda existir, independientemente\l"
	.string "de lo que cada uno haga.$"

CinnabarMansionS2_Blaine_Texto_5:
.string "De este modo, quien sea capaz de\n"
	.string "controlar y manipular estos 6\l"
	.string "parámetros, al tiempo que las\l"
	.string "combinaciones de tipos,\l"
	.string "habilidades y movimientos, tiene\l"
	.string "el poder de controlar este mundo.\p"
	.string "Algunos, como LANCE, se rinden a\n"
	.string "los POKÉMON divinos, buscan que la\l"
	.string "naturaleza les dé todo hecho; sin\l"
	.string "embargo, nosotros vamos más allá.$"

CinnabarMansionS2_Blaine_Texto_6:
.string "Un LEGENDARIO únicamente es tal\n"
	.string "por haber sido el ganador de la\l"
	.string "lotería de la naturaleza, el más\l"
	.string "agraciado, como he dicho, por\l"
	.string "mera gracia del creador, pero\l"
	.string "no aquí, no en este lugar{PAUSE 5}…{PAUSE 5}$"

CinnabarMansionS2_Blaine_Texto_7:
.string "Si conocemos las reglas del juego,\n"
	.string "podemos usarlas a nuestro favor,\l"
	.string "para que esa lotería nos toque no\l"
	.string "solo una vez, sino varias en el\l"
	.string "mismo POKÉMON. Se acabaron los\l"
	.string "tiempos de imperfecciones,\l"
	.string "arbitrariedades y azar dictados\l"
	.string "por la naturaleza.$"

CinnabarMansionS2_Blaine_Texto_8:
.string "¡Las reglas del juego ahora las\n"
	.string "escribimos nosotros!$"

CinnabarMansionS2_Blaine_Texto_9:
.string "¡No es posible!\n"
	.string "¡¿De dónde viene ese poder!?$"

CinnabarMansionS2_Blaine_Texto_10:
.string "No tiene sentido, es ridículo{PAUSE 15}…{PAUSE 15}\p"
	.string "¡Mi MAGMORTAR optimizado al máximo es\n"
	.string "mejor que cada uno de tus POKÉMON!$"

CinnabarMansionS2_Blaine_Texto_10.1:
	.string "¡De un LLAMARADA pulveriza a todo\n"
	.string "lo que golpee neutral, de un RAYO\l"
	.string "pone de rodillas a MOLTRES!$"

CinnabarMansionS2_Blaine_Texto_10.2:
	.string "¿Qué es lo que te mantiene en pie?$"

CinnabarMansionS2_Blaine_Texto_11:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

CinnabarMansionS2_Blaine_Texto_12:
.string "Aun así, no te será suficiente.\n"
	.string "OAK ha alcanzado otro nivel; con uno\l"
	.string "solo de sus POKÉMON podría tumbar a\l"
	.string "todo mi equipo, no puedes ganar.$"

CinnabarMansionS2_Blaine_Texto_12.1:
	.string "Sus POKÉMON te tumbarán de un golpe,\n"
	.string "antes de que puedas siquiera ejecutar\l"
	.string "un solo movimiento.$"

CinnabarMansionS2_Blaine_Texto_13:
.string "Hemos pasado años aquí, trabajando\n"
	.string "desde las sombras para llegar a\l"
	.string "ese punto, y ahora lo hemos\l"
	.string "logrado, OAK cuenta con un equipo\l"
	.string "perfecto.$"

CinnabarMansionS2_Blaine_Texto_14:
.string "Lo único que has conseguido al\n"
	.string "llegar hasta aquí, es tener el\l"
	.string "privilegio de saber qué se siente\l"
	.string "al enfrentar a semejante poder.$"

CinnabarMansionS2_Blaine_Texto_14.1:	
	.string "Vas a perseguir algo inalcanzable,\n"
	.string "y verás como inevitablemente todas\l"
	.string "las posibilidades te conducen a ser\l"
	.string "masacrado por el mejor equipo jamás\l"
	.string "comandado por un ENTRENADOR.$"

CinnabarMansionS2_Blaine_Texto_15:
.string "Buena suerte, {PLAYER}.\n"
	.string "Aunque{PAUSE 15}…{PAUSE 15} en este caso, no\l"
	.string "tiene sentido hablar de ella; todos los\l"
	.string "caminos conducirán al mismo resultado.$"

CinnabarMansionS2_Blaine_Move_1:
walk_in_place_down
step_end

CinnabarMansionS2_Blaine_Move_2:
walk_down
walk_down
walk_down
walk_left
step_end

CinnabarMansionS2_Blaine_Move_3:
face_right
step_end

CinnabarMansionS2_Blaine_Move_4:
walk_in_place_right
step_end

CinnabarMansionS2_Blaine_Move_5:
face_up
step_end

CinnabarMansionS2_Blaine_Move_6:
walk_right
step_end

CinnabarMansionS2_Blaine_Move_7:
face_left
step_end

CinnabarMansionS2_Blaine_Move_8:
walk_left
face_up
step_end

CinnabarMansionS2_Oak::
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_1
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_2
waitmovement 0x0
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
delay 15
playse 564
msgbox CinnabarMansionS2_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5.2
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_5.2
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_7.3 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_7
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_4.2
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_9.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_8
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_13 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_OAK_1, CinnabarMansionS2_Oak_Texto_14
delay 10
msgbox CinnabarMansionS2_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 5, CinnabarMansionS2_Oak_Move_4.2
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_15.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS2_Oak_Move_5.2
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS2_Oak_Move_9
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_18 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_19 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_20 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_10
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_11
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_12
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS2_Oak_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_13
waitmovement 0x0
delay 10
msgbox CinnabarMansionS2_Oak_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS2_Oak_Move_14
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
delay 28
setvar VAR_UNUSED_0x40F7, 116
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

CinnabarMansionS2_Oak_Move_4.2:
walk_in_place_down
step_end

CinnabarMansionS2_Oak_Move_5.1:
face_up
step_end

CinnabarMansionS2_Oak_Move_5.2:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

CinnabarMansionS2_Oak_Move_4.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

CinnabarMansionS2_Oak_Texto_1:
.string "OAK: Como esperaba, no has faltado\n"
	.string "a tu palabra; pondremos fin a todo\l"
	.string "esto de una vez por todas.\l"
	.string "Aquí mismo, ¿qué mejor lugar?$"

CinnabarMansionS2_Oak_Texto_2:
.string "Creí haber alcanzado la perfección\n"
	.string "con ROJO, un ENTRENADOR imbatible,\l"
	.string "y lo sigo diciendo: el único fallo\l"
	.string "fue no exponerle al estímulo adecuado.\p"
	.string "Si LANCE hubiera sido inteligente,\n"
	.string "hubiera sabido ver su potencial, y al\l"
	.string "poco que le dejara sobrecompensarse,\l"
	.string "luchando frente a entrenadores de tu\l"
	.string "altura, el efecto bola de nieve de su\l"
	.string "inteligencia le hubiera hecho, junto\l"
	.string "con los POKÉMON adecuados, imbatible.$"

CinnabarMansionS2_Oak_Texto_3:
.string "Solo unas mejores herramientas te\n"
	.string "dieron la victoria ante ROJO, pero\l"
	.string "ahora es imposible.\p"
	.string "Desde este remoto lugar, nos hemos\n"
	.string "encargado de reunir un equipo que\l"
	.string "marcará un antes y un después; lo\l"
	.string "mejor de ambos mundos.$"

CinnabarMansionS2_Oak_Texto_4:
.string "Por un lado: la singular combinación\n"
	.string "genética de DEOXYS, inviable de replicar\l"
	.string "con nuestra tecnología actual, el\l"
	.string "representante de lo que implica\l"
	.string "ser un LEGENDARIO.\l"
	.string "Algo que LANCE y otros muchos adoran.$"

CinnabarMansionS2_Oak_Texto_5:
.string "A pesar de que{PAUSE 15}…{PAUSE 15} estos propios\n"
	.string "legendarios siquiera sepan de\l"
	.string "donde vienen sus poderes.$"
	
CinnabarMansionS2_Oak_Texto_5.1:
	.string "Es un insulto para aquellos que de\n"
	.string "verdad sabemos observar y detectar\l"
	.string "cómo funcionan los mecanismos que\l"
	.string "permiten a un POKÉMON ser mejor o\l"
	.string "peor que otro; y a la vez, sentir\l"
	.string "esa impotencia por la enorme\l"
	.string "dificultad que implica el poder\l"
	.string "activarlos para uso propio.$"

CinnabarMansionS2_Oak_Texto_6:
.string "Por otro lado, tenemos al futuro:\n"
	.string "POKÉMON creados a la carta, que\l"
	.string "dejarán en evidencia las\l"
	.string "imperfecciones del resto.$"
	
CinnabarMansionS2_Oak_Texto_6.1:
	.string "Demostrarán que incluso los propios\n"
	.string "LEGENDARIOS no dejan de ser POKÉMON,\l"
	.string "con menos imperfecciones que los\l"
	.string "demás, pero POKÉMON al fin y al cabo.$"

CinnabarMansionS2_Oak_Texto_6.2:
	.string "Solo les diferencia una base mayor\n"
	.string "sobre la que poder construir.\p"
	.string "La genética puede ahorrar años de\n"
	.string "trabajo, y a veces toda una vida.$"

CinnabarMansionS2_Oak_Texto_7:
.string "De todos ellos, quien ha demostrado\n"
	.string "tener mejor base genética ha sido,\l"
	.string "por supuesto, MEW. El ancestro de\l"
	.string "todos los POKÉMON, gracias al cual\l"
	.string "pudimos crear un POKÉMON como MEWTWO.$"

CinnabarMansionS2_Oak_Texto_7.1:
	.string "Ello es prueba del poder que te hablo,\n"
	.string "un poder capaz de sacar las costuras\l"
	.string "de incluso un -LEGENDARIO MAYOR-.$"

CinnabarMansionS2_Oak_Texto_7.2:
	.string "Con aún menos imperfecciones que un\n"
	.string "LEGENDARIO COMÚN, pero aún con margen\l"
	.string "de mejora y, por tanto, imperfectos.$"

CinnabarMansionS2_Oak_Texto_7.3:
	.string "De nuevo, que MEWTWO haya igualado el\n"
	.string "poder de LUGIA o HO-OH, es una prueba\l"
	.string "irrefutable de esto, y también de lo\l"
	.string "que está por venir.$"

CinnabarMansionS2_Oak_Texto_8:
.string "Esos estúpidos entrenadores que hablan\n"
	.string "de -vínculo con tus POKÉMON-, querer\l"
	.string "a tu equipo y demás chorradas, no se\l"
	.string "dan cuenta de que lo que hagan es\l"
	.string "irrelevante; sus POKÉMON no van a\l"
	.string "mejorar su potencial intrínseco en\l"
	.string "base a eso.$"

CinnabarMansionS2_Oak_Texto_8.1:
	.string "Están ya limitados de nacimiento, por\n"
	.string "una ley tan injusta como arbitraria,\l"
	.string "que decide a dedo quien es mejor\l"
	.string "que otro; el entrenar o querer a\l"
	.string "tus POKÉMON te llevará tan lejos\l"
	.string "como quiera esta ley{PAUSE 5}…{PAUSE 5}$"

CinnabarMansionS2_Oak_Texto_9:
    .string "Sin embargo, desde aquí acabaremos\n"
	.string "con eso, quien sea que esté jugando\l"
	.string "a los dados allí arriba, dejará de\l"
	.string "hacerlo.\p"
	.string "Pondremos fin a la lotería genética,\n"
	.string "todos los POKÉMON serán iguales,\l"
	.string "iguales a la alza y perfectos.$"

CinnabarMansionS2_Oak_Texto_9.1:
	.string "La habilidad prevalecerá solo cuando\n"
	.string "sea tan superior a la habilidad del otro\l"
	.string "que no se ponga a prueba la voluntad.$"

CinnabarMansionS2_Oak_Texto_9.2:
	.string "Así, el mejor de entre ellos lo será\n"
	.string "porque de verdad mediante su voluntad,\l"
	.string "o la de su ENTRENADOR, ha sido capaz de\l"
	.string "ir más allá que el resto, no porque\l"
	.string "posee un don divino que el resto no.$"

CinnabarMansionS2_Oak_Texto_9.3:
	.string "¿De verdad crees que esto es tan\n"
	.string "malo {PLAYER}?\l"
	.string "¡Acabaremos con la mayor\l"
	.string "injusticia de este mundo!$"

CinnabarMansionS2_Oak_Texto_10:
.string "Después de lo que he dicho,\n"
	.string "comprenderás que sé apreciar lo\l"
	.string "que alguien como tú hizo en la\l"
	.string "LIGA POKÉMON, es muestra de lo\l"
	.string "lejos que alguien puede llegar si\l"
	.string "lleva al extremo lo que está en su\l"
	.string "mano controlar.$"

CinnabarMansionS2_Oak_Texto_10.1:
	.string "Pero sigues estando limitado por tus\n"
	.string "POKÉMON. Quieras o no, tu CROBAT jamás\l"
	.string "podrá superar los 374 puntos en\l"
	.string "SALUD, o los 394 en VELOCIDAD,\l"
	.string "cifra notable he de añadir.\p"
	.string "Te pongas como te pongas y por\n"
	.string "mucho que quieras a tu CROBAT, no\l"
	.string "pasará de ahí, y por ello te he\l"
	.string "hecho venir hasta aquí, {PLAYER}.$"

CinnabarMansionS2_Oak_Texto_11:
.string "Quiero que seas el primero en ver\n"
	.string "la nueva generación de POKÉMON,\l"
	.string "aquellos capaces de estirar ese\l"
	.string "factor limitante hasta cotas\l"
	.string "impensables.$"

CinnabarMansionS2_Oak_Texto_12:
.string "Voy a disfrutar viendo la\n"
	.string "desesperación en tu rostro,\l"
	.string "contemplando como esos ideales y\l"
	.string "principios se vuelven inservibles\l"
	.string "ante algo que nunca podrás tocar.$"

CinnabarMansionS2_Oak_Texto_13:
.string "¡Adelante, {PLAYER}!\n"
	.string "¡Enfrenta al mejor equipo que la\l"
	.string "región de KANTO, y el mundo,\l"
	.string "jamás hayan visto!$"

CinnabarMansionS2_Oak_Texto_14:
.string "¿Qué acaba de ocurrir aquí?$"

CinnabarMansionS2_Oak_Texto_15:
.string "No{PAUSE 25}…{PAUSE 25} no tiene sentido{PAUSE 15}…{PAUSE 15} mi equipo es\n"
	.string "imbatible{PAUSE 15}…{PAUSE 15} nadie, ni LANCE{PAUSE 15}…{PAUSE 15} ni GIOVANNI{PAUSE 15}…{PAUSE 15}$"

CinnabarMansionS2_Oak_Texto_15.1:
	.string "¡Ni dios podría derrotarme!$"

CinnabarMansionS2_Oak_Texto_16:
.string "{PAUSE 15}… {PAUSE 15}…{PAUSE 15}$"

CinnabarMansionS2_Oak_Texto_17:
.string "¿Acaso existe otra fuerza?\n"
	.string "¿Otra ley que he pasado por alto?$"

CinnabarMansionS2_Oak_Texto_18:
.string "Acabo de ver como producto de la\n"
	.string "imperfección de tus POKÉMON, ha\l"
	.string "salido como ingrediente final algo\l"
	.string "perfecto; tal vez no de forma\l"
	.string "absoluta y eterna, pero sí para\l"
	.string "este combate, este momento en\l"
	.string "concreto.$"

CinnabarMansionS2_Oak_Texto_19:
.string "Pensé que con todos estos avances,\n"
	.string "podría demostrar que eran ROJO y\l"
	.string "LANCE los que no fueron suficiente.\l"
	.string "Demostrar que ningún antiguo CAMPEÓN\l"
	.string "podría ganar a este equipo moderno.$"

CinnabarMansionS2_Oak_Texto_20:
.string "¿Quiere decir esto que el entrenamiento\n"
	.string "por sí solo puede elevar a niveles\l"
	.string "incalculables a un POKÉMON?$"

CinnabarMansionS2_Oak_Texto_21:
.string "Entonces{PAUSE 15}…{PAUSE 15} he sido un iluso hablando\n"
	.string "de límites, en algún punto deben de\l"
	.string "existir, pero, tras lo visto aquí,\l"
	.string "están mucho más lejos de lo que uno\l"
	.string "pueda imaginar, tal vez de lo que\l"
	.string "uno pueda llegar a calcular{PAUSE 5}…{PAUSE 5}$"

CinnabarMansionS2_Oak_Texto_22:
.string "Ya he tenido suficiente.{PAUSE 25}\p"
	.string "ROJO{PAUSE 25}…{PAUSE 25}\p"
	.string "La creación de MEWTWO{PAUSE 25}…{PAUSE 25}\p"
	.string "El mantener con vida este\n"
	.string "laboratorio en las sombras{PAUSE 25}…{PAUSE 25}\p"
	.string "Todo para apenas alcanzar a ver la\n"
	.string "punta del iceberg de cómo\l"
	.string "realmente funciona un POKÉMON.$"

CinnabarMansionS2_Oak_Texto_23:
.string "Haced lo que queráis con este\n"
	.string "laboratorio, {PLAYER}.\l"
	.string "Tal vez logréis ver algo que aquí\l"
	.string "hemos pasado por alto.$"

CinnabarMansionS2_Oak_Texto_24:
.string "Sé que está todo el\n"
	.string "TEAM ROCKET esperándome.\p"
	.string "No te preocupes, no tengo intención\n"
	.string "de hacer nada más, MEWTWO pasará a\l"
	.string "manos de GIOVANNI, ¿quién mejor que\l"
	.string "mi viejo rival para continuar con\l"
	.string "este proyecto?$"

CinnabarMansionS2_Oak_Texto_25:
.string "Me retiro a PUEBLO PALETA,\n"
	.string "necesito un periodo de reflexión.$"

CinnabarMansionS2_Oak_Move_1:
walk_in_place_left
step_end

CinnabarMansionS2_Oak_Move_2:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

CinnabarMansionS2_Oak_Move_3:
face_down
step_end

CinnabarMansionS2_Oak_Move_4:
walk_left
step_end

CinnabarMansionS2_Oak_Move_5:
delay_8
walk_right
delay_16
face_down
delay_8
step_end

CinnabarMansionS2_Oak_Move_6:
walk_in_place_down
step_end

CinnabarMansionS2_Oak_Move_7:
face_up
step_end

CinnabarMansionS2_Oak_Move_8:
walk_down
step_end

CinnabarMansionS2_Oak_Move_9:
walk_fast_up
walk_fast_left
step_end

CinnabarMansionS2_Oak_Move_10:
walk_right
face_up
step_end

CinnabarMansionS2_Oak_Move_11:
walk_slow_right
walk_slow_down
walk_slow_right
walk_in_place_right
step_end

CinnabarMansionS2_Oak_Move_12:
face_right
step_end

CinnabarMansionS2_Oak_Move_13:
walk_slow_down
walk_slow_right
walk_in_place_right
step_end

CinnabarMansionS2_Oak_Move_14:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

CinnabarMansion_S2_Escena_7::
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 6
addobject 7
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, CinnabarMansion_S2_Escena_7_Move_1
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
msgbox CinnabarMansion_S2_Escena_7_Texto_1 MSGBOX_AUTOCLOSE
msgbox CinnabarMansion_S2_Escena_7_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_2
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_4
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_6 MSGBOX_AUTOCLOSE
msgbox CinnabarMansion_S2_Escena_7_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_5
waitmovement 0x0
delay 20
msgbox CinnabarMansion_S2_Escena_7_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, CinnabarMansion_S2_Escena_7_Move_6
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_9 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_2
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, CinnabarMansion_S2_Escena_7_Move_7
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, CinnabarMansion_S2_Escena_7_Move_3
waitmovement 0x0
msgbox CinnabarMansion_S2_Escena_7_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox CinnabarMansion_S2_Escena_7_Texto_13 MSGBOX_AUTOCLOSE
delay 50
warpsilent MAP_ROCKET_HIDEOUT_5F, 0, 13
release
end

CinnabarMansion_S2_Escena_7_Move_2:
face_down
step_end

CinnabarMansion_S2_Escena_7_Move_3:
walk_in_place_left
step_end

CinnabarMansion_S2_Escena_7_Move_4:
face_right
step_end

CinnabarMansion_S2_Escena_7_Move_5:
face_up
step_end

CinnabarMansion_S2_Escena_7_Move_6:
walk_slow_up
step_end

CinnabarMansion_S2_Escena_7_Move_7:
walk_slow_down
walk_in_place_right
step_end

CinnabarMansion_S2_Escena_7_Move_1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

CinnabarMansion_S2_Escena_7_Texto_1:
.string "OAK: Sabes que, por lo general, prefiero\n"
	.string "dejar que la gente actúe bajo su libre\l"
	.string "albedrío, pero te lo preguntaré:\l"
	.string "¿crees que has hecho lo correcto\l"
	.string "entregando tan a la ligera a FUJI?$"

CinnabarMansion_S2_Escena_7_Texto_2:
.string "BLAINE: Creí que podía proporcionar\n"
	.string "información vital a GIOVANNI.$"

CinnabarMansion_S2_Escena_7_Texto_3:
.string "FUJI decía la verdad, no sabe nada.\n"
	.string "Desde la guerra su faceta como\l"
	.string "investigador murió.$"

CinnabarMansion_S2_Escena_7_Texto_4:
.string "BLAINE: Entonces{PAUSE 25}…{PAUSE 25} ¿solo nosotros\n"
	.string "sabemos la ubicación?$"

CinnabarMansion_S2_Escena_7_Texto_5:
.string "OAK: Solo nosotros, y así debe\n"
	.string "permanecer.$"

CinnabarMansion_S2_Escena_7_Texto_6:
.string "BLAINE: No entiendo, ¿por qué no\n"
	.string "actuamos y recuperamos KANTO? Puede\l"
	.string "que GIOVANNI incluso te perdone si\l"
	.string "logras derrocar a LANCE{PAUSE 25}…{PAUSE 25} a tu modo.$"

CinnabarMansion_S2_Escena_7_Texto_7:
.string "OAK: Nuestra posición es estable\n"
	.string "BLAINE. Ahora mismo podemos\l"
	.string "centrarnos en bajar aún más el grado\l"
	.string "de incertidumbre en caso de actuar.\l"
	.string "Aquí podemos centrarnos en ganar aún\l"
	.string "más poder.$"

CinnabarMansion_S2_Escena_7_Texto_8:
.string "Además{PAUSE 25}…{PAUSE 5}$"

CinnabarMansion_S2_Escena_7_Texto_9:
.string "Ya no será necesario recurrir a MEWTWO,\n"
	.string "podremos ganar incluso sin él{PAUSE 25}…{PAUSE 25}\l"
	.string "especialmente sin él.$"

CinnabarMansion_S2_Escena_7_Texto_10:
.string "Nos haremos con el control de KANTO de\n"
	.string "una manera silenciosa y sibilina, sin\l"
	.string "comprometernos, sin provocar otra\l"
	.string "estúpida guerra.$"

CinnabarMansion_S2_Escena_7_Texto_11:
.string "Todo está dispuesto, después de años\n"
	.string "en el barro, sin mayor expectativa que\l"
	.string "seguir otro día más únicamente para\l"
	.string "evitar que las posibilidades cayeran al\l"
	.string "0 absoluto{PAUSE 25}…{PAUSE 25} al fin podremos resurgir de\l"
	.string "nuestras cenizas, recuperar el antiguo\l"
	.string "esplendor de esta región, {PAUSE 15}¡y rebasarlo!$"

CinnabarMansion_S2_Escena_7_Texto_12:
.string "BLAINE: ¿Tanto confías en ese\n"
	.string "ENTRENADOR?$"

CinnabarMansion_S2_Escena_7_Texto_13:
.string "OAK: No confío, BLAINE, sé. Los números\n"
	.string "nunca mienten.$"


CinnabarMansionS2_Blaine_Derrotado::
lock
faceplayer
msgbox CinnabarMansionS2_Blaine_Derrotado_Texto_1, MSGBOX_NPC
release     
end

CinnabarMansionS2_Blaine_Derrotado_Texto_1:
.string "Buena suerte {PLAYER}, aunque en\n"
	.string "este caso no tenga sentido hablar\l"
	.string "de ella, todos los caminos\l"
	.string "conducirán al mismo resultado.$"

