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
	.string "todo KANTO por encima de MOLTRES\l"
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
	.string "HO-OH, LUGIA, RAYQUAZA...\n"
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
	.string "...\l"
	.string "...\l"
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
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Blaine_Move_2
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_5
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Blaine_Texto_4 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Blaine_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BLAINE_2, CinnabarMansionS2_Blaine_Texto_9
msgbox CinnabarMansionS2_Blaine_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Blaine_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_8
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_13 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Blaine_Texto_14 MSGBOX_AUTOCLOSE
applymovement 4, CinnabarMansionS2_Blaine_Move_4
waitmovement 0x0
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
.string "Nadie hubiera pensado que un\n"
	.string "ROCKET daría tantos problemas,\l"
	.string "eres un caso único, la excepción\l"
	.string "que confirma la regla, pero\l"
	.string "incluso esa excepción responde a\l"
	.string "unos patrones que buenamente nos\l"
	.string "hemos encargado de cubrir en este\l"
	.string "subterráneo...$"

CinnabarMansionS2_Blaine_Texto_3:
.string "Observa este lugar, su única razón\n"
	.string "de ser es explorar los límites que\l"
	.string "las leyes de este mundo nos\l"
	.string "imponen, al igual que el TEAM\l"
	.string "ROCKET, nuestro fin último es\l"
	.string "similar.$"

CinnabarMansionS2_Blaine_Texto_4:
.string "MAGMAR, CHARIZARD, ARCANINE...\n"
	.string "Solo son números, lo que les\l"
	.string "diferencia es un mayor o menor\l"
	.string "grado en cada uno de los 6\l"
	.string "parámetros que componen la\l"
	.string "genética inherente a cada especie,\l"
	.string "lo único que tienen de especial\l"
	.string "los LEGENDARIOS es un total mayor\l"
	.string "en la suma de esos 6 parámetros,\l"
	.string "no han hecho nada para ganarse ese\l"
	.string "mayor total, solo -ser\l"
	.string "legendarios- por -gracia del\l"
	.string "creador-, un MAGIKARP, por mucho\l"
	.string "que quiera, jamás se acercará\l"
	.string "siquiera al peor DRAGONITE que\l"
	.string "pueda existir, independientemente\l"
	.string "de lo que cada uno haga.$"

CinnabarMansionS2_Blaine_Texto_5:
.string "De este modo, quien sea capaz de\n"
	.string "controlar y manipular estos 6\l"
	.string "parámetros, al tiempo que las\l"
	.string "combinaciones de tipos,\l"
	.string "habilidades y movimientos, tiene\l"
	.string "el poder de controlar este mundo.\l"
	.string "Algunos, como LANCE, se rinden a\l"
	.string "los POKÉMON divinos, buscan que la\l"
	.string "naturaleza les de todo hecho, sin\l"
	.string "embargo, nosotros vamos más allá.$"

CinnabarMansionS2_Blaine_Texto_6:
.string "Un LEGENDARIO únicamente es tal\n"
	.string "por haber sido el ganador de la\l"
	.string "lotería de la naturaleza, el más\l"
	.string "agraciado, como he dicho, por\l"
	.string "mera gracia del creador, pero\l"
	.string "aquí, en este lugar no...$"

CinnabarMansionS2_Blaine_Texto_7:
.string "Si conocemos las reglas del juego,\n"
	.string "podemos usarlas a nuestro favor,\l"
	.string "para que esa lotería nos toque no\l"
	.string "solo una vez, sino varias en el\l"
	.string "mismo POKÉMON, se acabaron los\l"
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
.string "No tiene sentido, es ridículo, mi\n"
	.string "MAGMORTAR optimizado al máximo es\l"
	.string "mejor que cada uno de tus POKÉMON,\l"
	.string "de un LLAMARADA pulveriza a todo\l"
	.string "lo que golpee neutral, de un RAYO\l"
	.string "pone de rodillas a MOLTRES,\l"
	.string "definitivamente tienes algo que el\l"
	.string "resto no tiene.$"

CinnabarMansionS2_Blaine_Texto_11:
.string "... ...$"

CinnabarMansionS2_Blaine_Texto_12:
.string "Pero esta vez no te será\n"
	.string "suficiente, OAK ha alcanzado otro\l"
	.string "nivel, con uno solo de sus POKÉMON\l"
	.string "podría tumbar a todo mi equipo, no\l"
	.string "puedes ganar {PLAYER},\l"
	.string "sencillamente porque sus POKÉMON\l"
	.string "te tumbarán de un golpe antes de\l"
	.string "que puedas siquiera ejecutar un\l"
	.string "movimiento.$"

CinnabarMansionS2_Blaine_Texto_13:
.string "Hemos pasado años aquí, trabajando\n"
	.string "desde las sombras para llegar a\l"
	.string "ese punto, y ahora lo hemos\l"
	.string "logrado, OAK cuenta con un equipo\l"
	.string "perfecto.$"

CinnabarMansionS2_Blaine_Texto_14:
.string "Lo único que has conseguido\n"
	.string "llegando hasta aquí es tener el\l"
	.string "privilegio de saber qué se siente\l"
	.string "al enfrentar a semejante equipo,\l"
	.string "de tratar de perseguir algo\l"
	.string "inalcanzable, y ver como\l"
	.string "inevitablemente todas las\l"
	.string "posibilidades te conducen a ser\l"
	.string "masacrado por el mejor equipo\l"
	.string "jamás comandado por un ENTRENADOR.$"

CinnabarMansionS2_Blaine_Texto_15:
.string "Buena suerte {PLAYER}, aunque en\n"
	.string "este caso no tenga sentido hablar\l"
	.string "de ella, todos los caminos\l"
	.string "conducirán al mismo resultado.$"

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
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_2
waitmovement 0x0
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
delay 15
playse 564
msgbox CinnabarMansionS2_Oak_Texto_2 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_3 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_4
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_4 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_5
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_6 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_7 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_7
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_3
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_10 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_11 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_8
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_12 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_6
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_OAK_1, CinnabarMansionS2_Oak_Texto_14
msgbox CinnabarMansionS2_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS2_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS2_Oak_Move_9
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_17 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_1
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_18 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_19 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_20 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_10
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_22 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_11
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS2_Oak_Move_12
waitmovement 0x0
delay 20
msgbox CinnabarMansionS2_Oak_Texto_23 MSGBOX_AUTOCLOSE
msgbox CinnabarMansionS2_Oak_Texto_24 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_13
waitmovement 0x0
msgbox CinnabarMansionS2_Oak_Texto_25 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS2_Oak_Move_14
waitmovement 0x0
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_ARCHIE
delay 28
setvar VAR_UNUSED_0x40F7, 116
setvar VAR_TEMP_1, 1
call EverGrandeCity_HallOfFame_EventScript_SetGameClearFlags
goto EverGrandeCity_HallOfFame_EventScript_GameClearMale
release
end

CinnabarMansionS2_Oak_Texto_1:
.string "OAK: Como esperaba, no has faltado\n"
	.string "a tu palabra, pondremos fin a todo\l"
	.string "esto de una vez por todas, y aquí\l"
	.string "mismo, qué mejor lugar que este.$"

CinnabarMansionS2_Oak_Texto_2:
.string "Creí haber alcanzado la perfección\n"
	.string "con ROJO, un ENTRENADOR imbatible,\l"
	.string "y lo sigo diciendo, el único fallo\l"
	.string "fue no exponerle al estímulo\l"
	.string "adecuado, si LANCE hubiera sido\l"
	.string "inteligente hubiera sabido ver su\l"
	.string "potencial, y al poco que le dejara\l"
	.string "sobrecompensarse luchando frente a\l"
	.string "entrenadores de tu altura, el\l"
	.string "efecto bola de nieve de su\l"
	.string "inteligencia le hubiera hecho\l"
	.string "imbatible manejando a los POKÉMON\l"
	.string "adecuados.$"

CinnabarMansionS2_Oak_Texto_3:
.string "Solo unas mejores herramientas te\n"
	.string "dieron la victoria ante ROJO, pero\l"
	.string "ahora es imposible, desde este\l"
	.string "remoto lugar nos hemos encargado\l"
	.string "de reunir un equipo que marcará un\l"
	.string "antes y un después, hemos reunido\l"
	.string "lo mejor de ambos mundos.$"

CinnabarMansionS2_Oak_Texto_4:
.string "La singular combinación genética de\n"
	.string "DEOXYS, imposible de replicar con\l"
	.string "nuestra tecnología actual, es el\l"
	.string "máximo representante de lo que\l"
	.string "significa un LEGENDARIO, eso a lo\l"
	.string "que LANCE y tanta gente adora.$"

CinnabarMansionS2_Oak_Texto_5:
.string "A pesar de que estos propios\n"
	.string "legendarios siquiera sepan de\l"
	.string "donde vienen sus poderes, es un\l"
	.string "insulto para aquellos que de\l"
	.string "verdad sabemos observar y detectar\l"
	.string "como funcionan los mecanismos que\l"
	.string "permiten a un POKÉMON ser mejor o\l"
	.string "peor que otro, y a la vez\l"
	.string "sentir impotencia por la enorme\l"
	.string "dificultad que implica el poder\l"
	.string "activarlos para uso propio.$"

CinnabarMansionS2_Oak_Texto_6:
.string "Por otro lado tenemos al futuro:\n"
	.string "POKÉMON creados a la carta, que\l"
	.string "dejarán en evidencia las\l"
	.string "imperfecciones del resto, incluso\l"
	.string "demostrando que los propios\l"
	.string "LEGENDARIOS no son más que POKÉMON\l"
	.string "con menos imperfecciones que los\l"
	.string "demás, pero que no hay que pasar\l"
	.string "por alto, ya que parten de una\l"
	.string "base mayor sobre la que poder\l"
	.string "construir, la genética puede\l"
	.string "ahorrar años de trabajo, y a veces\l"
	.string "toda una vida.$"

CinnabarMansionS2_Oak_Texto_7:
.string "De todos ellos quien ha demostrado\n"
	.string "tener mejor base genética ha sido,\l"
	.string "por supuesto, MEW, el ancestro de\l"
	.string "todos los POKÉMON, gracias al cual\l"
	.string "logramos crear aquí en KANTO un\l"
	.string "POKÉMON como MEWTWO, del nivel de\l"
	.string "un LUGIA o HO-OH, inexistentes en\l"
	.string "esta región.$"

CinnabarMansionS2_Oak_Texto_8:
.string "Esos estúpidos entrenadores que\n"
	.string "hablan de -vínculo con tus\l"
	.string "POKÉMON-, querer a tu equipo y\l"
	.string "demás chorradas, no se dan cuenta\l"
	.string "de que lo que hagan es\l"
	.string "irrelevante, sus POKÉMON no van a\l"
	.string "aumentar su BASE en ATAQUE por\l"
	.string "quererlos más, siquiera su\l"
	.string "genética de IVs particular, están\l"
	.string "limitados de nacimiento, por una\l"
	.string "ley tan injusta como arbitraria,\l"
	.string "que decide a dedo quien es mejor\l"
	.string "que otro, el entrenar o querer a\l"
	.string "tus POKÉMON te llevará tan lejos\l"
	.string "como quiera esta ley...$"

CinnabarMansionS2_Oak_Texto_9:
.string "Sin embargo, desde aquí acabaremos\n"
	.string "con eso, quien sea que esté\l"
	.string "jugando a los dados allí arriba\l"
	.string "dejará de hacerlo, desde aquí\l"
	.string "pondremos fin a la lotería\l"
	.string "genética, todos los POKÉMON serán\l"
	.string "iguales, iguales a la alza y\l"
	.string "perfectos, de modo que el mejor de\l"
	.string "entre ellos lo será porque de\l"
	.string "verdad mediante su voluntad, o la\l"
	.string "de su ENTRENADOR, ha sido capaz de\l"
	.string "ir más allá que el resto, no\l"
	.string "porque posee un don divino que el\l"
	.string "resto no posee.\l"
	.string "¿De verdad crees que esto es tan\l"
	.string "malo {PLAYER}?\l"
	.string "Acabaremos con la mayor injusticia\l"
	.string "de este mundo.$"

CinnabarMansionS2_Oak_Texto_10:
.string "Después de lo que he dicho,\n"
	.string "comprenderás que sé apreciar lo\l"
	.string "que alguien como tú hizo en la\l"
	.string "LIGA POKÉMON, es muestra de lo\l"
	.string "lejos que alguien puede llegar si\l"
	.string "lleva al extremo lo que está en su\l"
	.string "mano controlar, pero sigues\l"
	.string "estando limitado por tus POKÉMON,\l"
	.string "quieras o no, tu CROBAT jamás\l"
	.string "podrá superar los 374 puntos en\l"
	.string "SALUD, o los 394 en VELOCIDAD,\l"
	.string "cifra notable he de añadir.\l"
	.string "Te pongas como te pongas y por\l"
	.string "mucho que quieras a tu CROBAT, no\l"
	.string "pasará de ahí, por ello te he\l"
	.string "hecho venir hasta aquí {PLAYER}.$"

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
.string "¡Adelante, ROCKET!\n"
	.string "¡Enfrenta al mejor equipo que la\l"
	.string "región de KANTO, y el mundo, jamás\l"
	.string "hayan visto!$"

CinnabarMansionS2_Oak_Texto_14:
.string "¿Qué acaba de ocurrir aquí?$"

CinnabarMansionS2_Oak_Texto_15:
.string "No, no tiene sentido, mi equipo es\n"
	.string "imbatible, nadie, ni LANCE, ni\l"
	.string "GIOVANNI, ¡ni dios podría\l"
	.string "derrotarme!$"

CinnabarMansionS2_Oak_Texto_16:
.string "... ...$"

CinnabarMansionS2_Oak_Texto_17:
.string "¿Acaso existe otra fuerza?\n"
	.string "¿Otra ley que he pasado por alto?$"

CinnabarMansionS2_Oak_Texto_18:
.string "Acabo de ver como producto de la\n"
	.string "imperfección de tus POKÉMON ha\l"
	.string "salido como ingrediente final algo\l"
	.string "perfecto, tal vez no de forma\l"
	.string "absoluta y eterna, pero si para\l"
	.string "este combate, este momento\l"
	.string "concreto.$"

CinnabarMansionS2_Oak_Texto_19:
.string "Creí que con este combate haría\n"
	.string "pedazos tus creencias, y\l"
	.string "demostraría que eran ROJO y LANCE\l"
	.string "los que no fueron suficiente en la\l"
	.string "LIGA POKÉMON, pero ha sido todo lo\l"
	.string "contrario.$"

CinnabarMansionS2_Oak_Texto_20:
.string "¿Quiere decir esto que el\n"
	.string "entrenamiento por sí solo puede\l"
	.string "elevar a niveles incalculables a\l"
	.string "un POKÉMON?$"

CinnabarMansionS2_Oak_Texto_21:
.string "Entonces he sido un iluso hablando\n"
	.string "de límites, en algún punto deben\l"
	.string "de existir por supuesto, pero,\l"
	.string "después de lo visto aquí, están\l"
	.string "mucho más lejos de lo que uno\l"
	.string "pueda imaginar, quizás de lo que\l"
	.string "uno pueda llegar a calcular...$"

CinnabarMansionS2_Oak_Texto_22:
.string "Ya he tenido suficiente.\n"
	.string "ROJO...\l"
	.string "La creación de MEWTWO...\l"
	.string "El mantener con vida este\l"
	.string "laboratorio en las sombras...\l"
	.string "Todo para apenas alcanzar a ver la\l"
	.string "punta del iceberg de como\l"
	.string "realmente funciona un POKÉMON.$"

CinnabarMansionS2_Oak_Texto_23:
.string "Haced lo que queráis con este\n"
	.string "laboratorio ROCKET, quizá logréis\l"
	.string "ver algo que aquí hemos pasado por\l"
	.string "alto.$"

CinnabarMansionS2_Oak_Texto_24:
.string "Sé que está todo el TEAM ROCKET\n"
	.string "esperándome fuera, no te\l"
	.string "preocupes, no tengo intención de\l"
	.string "hacer nada más, MEWTWO pasará a\l"
	.string "manos de GIOVANNI, quien mejor que\l"
	.string "mi viejo rival para continuar con\l"
	.string "este proyecto.$"

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
walk_right
face_down
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
.string "Además{PAUSE 25}…$"

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

