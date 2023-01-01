CinnabarMansionS2_MapScripts::
	.byte 0

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
	.string "TAUROS-X: ROCA\p"
	.string "PS: 75\n"
	.string "ATAQUE: 170\l"
	.string "DEFENSA: 165\l"
	.string "ATAQUE ESPECIAL: 40\l"
	.string "DEFENSA ESPECIAL: 90\l"
	.string "VELOCIDAD: 50\l"
	.string "TOTAL: 590\p"
	.string "Logramos amplificar la salvaje\n"
	.string "capacidad de embestida del TAUROS\l"
	.string "que habita en KANTO, descubrimos\l"
	.string "que su VELOCIDAD y TIPO NORMAL\l"
	.string "eran los grandes limitantes para\l"
	.string "desarrollar toda la fuerza y\l"
	.string "resitencia que su cuerpo podía\l"
	.string "soportar, en cuanto logramos\l"
	.string "reducirla al tiempo que\l"
	.string "implantarle los genes\l"
	.string "de RHYDON responsables de su TIPO\l"
	.string "ROCA, su capacidad física se\l"
	.string "disparó hasta niveles impensables,\l"
	.string "todo lo que golpea queda reducido\l"
	.string "a polvo.$"



CinnabarMansionS2Documento_101::
lock     
showmonpic SPECIES_MAGMORTAR_Y, 10, 3  
playmoncry SPECIES_MAGMORTAR, CRY_MODE_ENCOUNTER 
msgbox CinnabarMansionS2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

CinnabarMansionS2Documento_Text_101:
	.string "MAGMORTAR-Y: FUEGO\p"
	.string "PS: 75\n"
	.string "ATAQUE: 95\l"
	.string "DEFENSA: 97\l"
	.string "ATAQUE ESPECIAL: 165\l"
	.string "DEFENSA ESPECIAL: 105\l"
	.string "VELOCIDAD: 103\l"
	.string "TOTAL: 640\p"
	.string "La creencia de BLAINE en que\n"
	.string "MAGMAR era el POKÉMON TIPO FUEGO\l"
	.string "con mayor potencial especial de\l"
	.string "todo KANTO por encima de MOLTRES\l"
	.string "ha quedado de sobra demostrada,\l"
	.string "los llamaradas de MAGMORTAR-Z\l"
	.string "harán parecer a los del LEGENDARIO\l"
	.string "mediocres, a ello se le suma mayor\l"
	.string "velocidad y una mejorada\l"
	.string "resistencia respecto a la línea\l"
	.string "evolutiva de MAGMAR, todo objetivo\l"
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
	.string "La verdadera forma en estado\n"
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
