Mision7Lab5_MapScripts::
	.byte 0

Mision7Lab5_Documento_100::
lock     
showmonpic SPECIES_NIDOGOD, 10, 3  
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER 
msgbox Mision7Lab5_Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Mision7Lab5_Documento_Text_100:
.string "NIDOGOD:\p"
	.string "PS: 111\n"
	.string "ATAQUE: 172\l"
	.string "DEFENSA: 147\l"
	.string "ATAQUE ESPECIAL: 85\l"
	.string "DEFENSA ESPECIAL: 115\l"
	.string "VELOCIDAD: 50\l"
	.string "TOTAL: 680\p"
	.string "TIPO: VENENO/ACERO\n"
	.string "HABILIDAD: POTENCIA BRUTA\l"
	.string "Primer prototipo exitoso empleando\l"
	.string "la tecnología de las ondas de radio\l"
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} …{PAUSE 10} Confirma que el\l"
	.string "incremento de stats es de +150\l"
	.string "respecto al NIDOKING original,\l"
	.string "superando en 50 puntos a NIDOKING-X,\l"
	.string "sin apenas perder eficiencia. Ha sido\l"
	.string "concebido para ejercer de tanque,\l"
	.string "capaz de tumbar a POKÉMON que muchos\l"
	.string "otros no podrían, a base de su DEFENSA\l"
	.string "blindada y fuerza bruta superior a\l"
	.string "MEGA-GARCHOMP.$"

Mision7Lab5_Documento_101::
lock     
showmonpic SPECIES_MEWTWO_ARM, 10, 3  
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER 
msgbox Mision7Lab5_Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Mision7Lab5_Documento_Text_101:
.string "MEWTWO-ARM:\p"
	.string "PS: 106\n"
	.string "ATAQUE: 120\l"
	.string "DEFENSA: 140\l"
	.string "ATAQUE ESPECIAL: 164\l"
	.string "DEFENSA ESPECIAL: 140\l"
	.string "VELOCIDAD: 110\l"
	.string "TOTAL: 780\p"
	.string "TIPO: PSÍQUICO/ACERO\n"
	.string "HABILIDAD: FILTRO\l"
	.string "Tras muchos intentos, logramos\l"
	.string "reproducir el incremento de +100 STATS\l"
	.string "BASE de los prototipos X e Y en\l"
	.string "MEWTWO{PAUSE 25}…{PAUSE 25} sin necesidad de crear una\l"
	.string "MEGA-PIEDRA. Gracias a su armadura\l"
	.string "hecha a medida, elevará drásticamente\l"
	.string "sus defensas, además de elevar\l"
	.string "ligeramente su ofensiva, únicamente a\l"
	.string "costa de perder algo de VELOCIDAD. Su\l"
	.string "capacidad ofensiva física es inferior\l"
	.string "a la especial, no obstante, ciertas\l"
	.string "pruebas indican que aquí puede estar su\l"
	.string "mayor capacidad destructora{PAUSE 25}…{PAUSE 25} con el\l"
	.string "complemento adecuado{PAUSE 5}…{PAUSE 5}$"
