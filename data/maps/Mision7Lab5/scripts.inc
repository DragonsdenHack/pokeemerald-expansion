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
	.string "VENENO/ACERO\n"
	.string "Primer prototipo exitoso empleando\l"
	.string "la tecnología de las ondas de radio\l"
	.string "... ... ... ... ... Confirma que el\l"
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
	.string "ATAQUE: 110\l"
	.string "DEFENSA: 160\l"
	.string "ATAQUE ESPECIAL: 164\l"
	.string "DEFENSA ESPECIAL: 120\l"
	.string "VELOCIDAD: 120\l"
	.string "TOTAL: 780\p"
	.string "PSIQUICO/ACERO\n"
	.string "Tras muchos intentos, logramos\l"
	.string "reproducir el incremento de +100 STATS\l"
	.string "BASE de los prototipos X e Y en\l"
	.string "MEWTWO... sin necesidad de crear un\l"
	.string "MEGA-PIEDRA. Gracias a su armadura\l"
	.string "hecha a medida, elevará drásticamente\l"
	.string "su DEFENSA, al tiempo que ligeramente\l"
	.string "sus valores especiales, únicamente a\l"
	.string "costa de perder algo de VELOCIDAD. Su\l"
	.string "capacidad ofensiva física se mantiene\l"
	.string "intacta, no obstante, ciertas pruebas\l"
	.string "indican que aquí puede estar su mayor\l"
	.string "capacidad destructora... con el\l"
	.string "complemento adecuado...$"
