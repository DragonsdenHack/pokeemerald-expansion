RocketHideout_11F_MapScripts::
	.byte 0

RocketHideout_11F_Primer_Cientifico::
lock
faceplayer
msgbox RocketHideout_11F_Primer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_11F_Primer_Cientifico_Texto_1:
	.string "Los grandes eventos dan a los grandes\n"
	.string "la ocasión de la gloria y a los plebeyos\l"
	.string "un respiro de sus vidas.$"

RocketHideout_11F_Segundo_Cientifico::
lock
faceplayer
msgbox RocketHideout_11F_Segundo_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_11F_Segundo_Cientifico_Texto_1:
	.string "Cuando una persona se enfrenta al\n"
	.string "miedo se pone a prueba su alma, se puede\l"
	.string "ver aquello que persigue, aquello para\l"
	.string "lo que nació. Su verdadera esencia\l"
	.string "queda al descubierto.$"

RocketHideout_11F_Tercer_Cientifico::
lock
faceplayer
msgbox RocketHideout_11F_Tercer_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_11F_Tercer_Cientifico_Texto_1:
	.string "Hoy día, la mayor parte de la gente\n"
	.string "muere de una especie de asqueroso\l"
	.string "sentido común, y cuando es demasiado\l"
	.string "tarde descubren que lo único de lo que\l"
	.string "nunca nos arrepentimos son los errores.$"

RocketHideout_11F_Cuarto_Cientifico::
lock
faceplayer
msgbox RocketHideout_11F_Cuarto_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_11F_Cuarto_Cientifico_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout_11F_Cuarto_Cientifico_Texto_2:
	.string "Si ese idiota de ZEUS lo hubiera\n"
	.string "entendido, aún seguiría con vida.$"

RocketHideout_11F_Cuarto_Cientifico_Texto_1:
	.string "El todo no es meramente la suma de sus\n"
	.string "partes; el todo expresa un tapiz, una\l"
	.string "imagen, que es irreducible por su propia\l"
	.string "naturaleza; una fuerza de energía vital\l"
	.string "en sí misma.$"

PalletTown_Laboratorio_Secreto_Doc_Regigigas::
lock
showmonpic SPECIES_REGIGIGAS_PRIMAL, 10, 3  
playmoncry SPECIES_REGIGIGAS, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_1, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_1:
.string "REGIGIGAS-P\p"
	.string "PS: 165\n"
	.string "ATAQUE: 255\l"
	.string "DEFENSA: 150\l"
	.string "ATAQUE ESPECIAL: 50\l"
	.string "DEFENSA ESPECIAL: 150\l"
	.string "VELOCIDAD: 50\l"
	.string "TOTAL: 820\p"
	.string "TIPO: NORMAL/TIERRA\n"
	.string "HABILIDAD: ROMPEMOLDES$"

PalletTown_Laboratorio_Secreto_Doc_Milotic::
lock
showmonpic SPECIES_MILOTICBOND, 10, 3  
playmoncry SPECIES_MILOTICBOND, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_1, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_1:
.string "MILOTIC-&\p"
	.string "PS: 115\n"
	.string "ATAQUE: 65\l"
	.string "DEFENSA: 79\l"
	.string "ATAQUE ESPECIAL: 150\l"
	.string "DEFENSA ESPECIAL: 195\l"
	.string "VELOCIDAD: 91\l"
	.string "TOTAL: 695\p"
	.string "TIPO: AGUA/PSÍQUICO\n"
	.string "HABILIDAD: ABS.ELÉCTRICO$"

PalletTown_Laboratorio_Secreto_Doc_Jirachi::
lock
showmonpic SPECIES_JIRACHI_PRIMAL, 10, 3  
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_1, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_1:
.string "JIRACHI-&\p"
	.string "PS: 110\n"
	.string "ATAQUE: 50\l"
	.string "DEFENSA: 155\l"
	.string "ATAQUE ESPECIAL: 155\l"
	.string "DEFENSA ESPECIAL: 155\l"
	.string "VELOCIDAD: 100\l"
	.string "TOTAL: 725\p"
	.string "TIPO: ACERO/HADA\n"
	.string "HABILIDAD: LEVITACIÓN$"

PalletTown_Laboratorio_Secreto_Doc_Relicanth::
lock
showmonpic SPECIES_RELICANTH_PRIMAL, 10, 3  
playmoncry SPECIES_RELICANTH, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_1, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_1:
.string "RELICANTH-P\p"
	.string "PS: 110\n"
	.string "ATAQUE: 110\l"
	.string "DEFENSA: 140\l"
	.string "ATAQUE ESPECIAL: 55\l"
	.string "DEFENSA ESPECIAL: 75\l"
	.string "VELOCIDAD: 105\l"
	.string "TOTAL: 585\p"
	.string "TIPO: AGUA/ROCA\n"
	.string "HABILIDAD: CABEZA ROCA$"

PalletTown_Laboratorio_Secreto_Doc_Ultimate::
lock
showmonpic SPECIES_ULTIMATE_PROYECT, 10, 3  
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_1, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_1:
.string "ULTIMATE PROJECT\p"
	.string "PS: 126\n"
	.string "ATAQUE: 110\l"
	.string "DEFENSA: 154\l"
	.string "ATAQUE ESPECIAL: 216\l"
	.string "DEFENSA ESPECIAL: 154\l"
	.string "VELOCIDAD: 90\l"
	.string "TOTAL: 830\p"
	.string "TIPO: PSÍQUICO/ACERO\n"
	.string "HABILIDAD: ARMADURA ULT.$"

PalletTown_Laboratorio_Secreto_Doc_Porygon::
lock
showmonpic SPECIES_ULTIMATE_PROYECT, 10, 3  
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_1, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_1:
.string "PORYGON 3.1\p"
	.string "PS: 105\n"
	.string "ATAQUE: 70\l"
	.string "DEFENSA: 75\l"
	.string "ATAQUE ESPECIAL: 165\l"
	.string "DEFENSA ESPECIAL: 105\l"
	.string "VELOCIDAD: 145\l"
	.string "TOTAL: 830\p"
	.string "TIPO: NORMAL/PSÍQUICO\n"
	.string "HABILIDAD: PELUCHE$"

