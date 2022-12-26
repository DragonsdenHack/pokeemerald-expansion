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
	.string "incrementar su ya de por si vasto\l"
	.string "poder, en cambio, MEW es otra\l"
	.string "historia, posee la mejor base\l"
	.string "genética, tanto por maleabilidad\l"
	.string "como por posibles combinaciones,\l"
	.string "esto nos induce a pensar que con\l"
	.string "MEWTWO únicamente logramos una\l"
	.string "combinación genética favorable\l"
	.string "respecto a MEW, pero ni fue la más\l"
	.string "favorable posible, ni la más\l"
	.string "óptima.$"
