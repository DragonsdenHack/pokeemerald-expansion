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
msgbox PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_5, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_2:
	.string "La forma original de REGIGIGAS, aquella\n"
	.string "que arrastraba continentes con\l"
	.string "cuerdas.$"

PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_3:
	.string "No solo alcanza el ATAQUE más alto\n"
	.string "registrado -255-, también\l"
	.string "investigaciones indican que esta cifra\l"
	.string "es ya insuperable; en ese caso,\l"
	.string "estaríamos ante el límite absoluto\l"
	.string "alcanzable para un solo STAT.$"

PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_4:
	.string "Con defensas similares a REGISTEEL, y\n"
	.string "un AT.ESP y VELOCIDAD similar al de\l"
	.string "REGIROCK, su forma PRIMIGENIA eleva en\l"
	.string "+150 el total de su forma base, de igual\l"
	.string "modo que ocurre con nuestros\l"
	.string "prototipos de nivel II y III.$"

PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_5:
	.string "A partir de aquí, las comparaciones con\n"
	.string "ULTIMATE PROJECT se vuelven\l"
	.string "inevitables, puesto que ambos cuentan\l"
	.string "con un poder similar, y a la vez muy\l"
	.string "cercano al de los 3 CREADORES.$"


PalletTown_Laboratorio_Secreto_Doc_Regigigas_Texto_1:
.string "REGIGIGAS-P\p"
	.string "HP: 165\n"
	.string "ATTACK: 255\l"
	.string "DEFENSE: 150\l"
	.string "SP. ATK: 50\l"
	.string "SP. DEF: 150\l"
	.string "SPEED: 50\l"
	.string "TOTAL: 820\p"
	.string "TYPE: NORMAL/GROUND\n"
	.string "ABILITY: MOLD BREAKER$"

PalletTown_Laboratorio_Secreto_Doc_Milotic::
lock
showmonpic SPECIES_MILOTICBOND, 10, 3  
playmoncry SPECIES_MILOTICBOND, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_5, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_2:
	.string "POKÉMON surgido de la inquebrantable\n"
	.string "voluntad de su ENTRENADORA, logrando\l"
	.string "el imposible de batir en duelo singular a\l"
	.string "KYOGRE PRIMIGENIO.$"

PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_3:
	.string "El grado de introspección exigido para\n"
	.string "alcanzar el estado del FUERTE VÍNCULO\l"
	.string "en medio de ese combate, le hizo ganar\l"
	.string "el TIPO PSÍQUICO, obteniendo en el\l"
	.string "proceso varios de los atributos del\l"
	.string "LEGENDARIO, tales como su\l"
	.string "característico PULSO PRIMIGENIO.$"

PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_4:
	.string "Su AT.ESP es similar al de KYOGRE en su\n"
	.string "forma base, y su DEF.ESP, clave en su\l"
	.string "victoria, roza la de REGICE.$"

PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_5:
	.string "En lo referido a STATS útiles empata,\n"
	.string "curiosamente, con GYARADOS-Z, uno de\l"
	.string "los prototipos de nivel II más\l"
	.string "poderosos.$"

PalletTown_Laboratorio_Secreto_Doc_Milotic_Texto_1:
.string "MILOTIC-&\p"
	.string "HP: 115\n"
	.string "ATTACK: 65\l"
	.string "DEFENSE: 79\l"
	.string "SP. ATK: 150\l"
	.string "SP. DEF: 195\l"
	.string "SPEED: 91\l"
	.string "TOTAL: 695\p"
	.string "TYPE: WATER/PSYCHIC\n"
	.string "ABILITY: VOLT ABSORB$"

PalletTown_Laboratorio_Secreto_Doc_Jirachi::
lock
showmonpic SPECIES_JIRACHI_PRIMAL, 10, 3  
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_5, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_2:
	.string "Primer LEGENDARIO FUERTE VÍNCULO del\n"
	.string "que se tiene registro.$"

PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_3:
	.string "La ex-ADMIN ANDRA, en su búsqueda de la\n"
	.string "verdad y la virtud, acabó estrechando\l"
	.string "lazos con una clase de POKÉMON que\l"
	.string "nunca imaginaría.$"

PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_4:
	.string "El resultado de ello es asombroso; aún\n"
	.string "siendo su total de 725, podría, por\l"
	.string "eficiencia en su reparto, entrar en el\l"
	.string "rango de prototipos de nivel III,\l"
	.string "contando con más stats útiles que las\l"
	.string "MEGAS de MEWTWO.$"

PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_5:
	.string "Su combinación entre ACERO/HADA +\n"
	.string "LEVITACIÓN le dota de uno de los\l"
	.string "mejores ratios entre resistencias y\l"
	.string "debilidades que puede existir. Solo el\l"
	.string "fuego podrá hacerle daño.$"

PalletTown_Laboratorio_Secreto_Doc_Jirachi_Texto_1:
.string "JIRACHI-&\p"
	.string "HP: 110\n"
	.string "ATTACK: 50\l"
	.string "DEFENSE: 155\l"
	.string "SP. ATK: 155\l"
	.string "SP. DEF: 155\l"
	.string "SPEED: 100\l"
	.string "TOTAL: 725\p"
	.string "TYPE: STEEL/FAIRY\n"
	.string "ABILITY: LEVITATE$"

PalletTown_Laboratorio_Secreto_Doc_Relicanth::
lock
showmonpic SPECIES_RELICANTH_PRIMAL, 10, 3  
playmoncry SPECIES_RELICANTH, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_5, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_2:
	.string "Lo más parecido a la forma real de\n"
	.string "RELICANTH en estado salvaje,\l"
	.string "reproducida gracias a la PIEDRA DEVON.$"

PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_3:
	.string "Se cree que fue la clave que permitió a\n"
	.string "DEVON abrirse paso por CÁMARA SELLADA.$"

PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_4:
	.string "Algo más lento y menos ofensivo que\n"
	.string "BARRASKEWDA, pero infinitamente más\l"
	.string "resistente.$"

PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_5:
	.string "Mantiene la capacidad de golpear con\n"
	.string "TESTARAZO sin daño, todo en su\l"
	.string "conjunto le convierte en un POKÉMON a\l"
	.string "tener en cuenta incluso en los\l"
	.string "estándares actuales.$"

PalletTown_Laboratorio_Secreto_Doc_Relicanth_Texto_1:
.string "RELICANTH-P\p"
	.string "HP: 110\n"
	.string "ATTACK: 110\l"
	.string "DEFENSE: 140\l"
	.string "SP. ATK: 55\l"
	.string "SP. DEF: 75\l"
	.string "SPEED: 105\l"
	.string "TOTAL: 585\p"
	.string "TYPE: WATER/ROCK\n"
	.string "ABILITY: ROCK HEAD$"

PalletTown_Laboratorio_Secreto_Doc_Ultimate::
lock
showmonpic SPECIES_ULTIMATE_PROYECT, 10, 3  
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_5, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_5:
	.string "Esta misma armadura es la\n"
	.string "que limita su VELOCIDAD.$"

PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_4:
	.string "Su habilidad le convierte en un POKÉMON\n"
	.string "sin debilidades, ya que su armadura\l"
	.string "filtra todos los movimientos\l"
	.string "superefectivos, convirtiéndolos en\l"
	.string "neutros.$"

PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_3:
	.string "Sus poderes psíquicos no conocen\n"
	.string "igual, alcanza tal nivel de eficiencia y\l"
	.string "poder bruto, que está a la par que los 3\l"
	.string "GRANDES CREADORES, en lo que a STATS\l"
	.string "útiles se refiere.$"

PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_2:
	.string "POKÉMON creado con el único fin de\n"
	.string "defender la región, ante cualquier\l"
	.string "ataque.$"

PalletTown_Laboratorio_Secreto_Doc_Ultimate_Texto_1:
.string "ULTIMATE PROJECT\p"
	.string "HP: 126\n"
	.string "ATTACK: 110\l"
	.string "DEFENSE: 154\l"
	.string "SP. ATK: 216\l"
	.string "SP. DEF: 154\l"
	.string "SPEED: 90\l"
	.string "TOTAL: 830\p"
	.string "TYPE: PSYCHIC/STEEL\n"
	.string "ABILITY: ULTIMATE ARMOR$"

PalletTown_Laboratorio_Secreto_Doc_Porygon::
lock
showmonpic SPECIES_PORYGON31, 10, 3  
playmoncry SPECIES_PORYGON, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_5, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_6, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_2:
	.string "La forma más avanzada de PORYGON,\n"
	.string "empleando la tecnología de ondas de\l"
	.string "radio sobre PORYGON 2. Entra ya dentro\l"
	.string "de los prototipos de nivel II.$"

PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_3:
	.string "BILL ideó una brillante solución al\n"
	.string "problema de la DEFENSA física como\l"
	.string "debilidad histórica en PORYGON: en\l"
	.string "lugar de perder eficiencia tratando de\l"
	.string "elevarla por la fuerza, fue capaz de\l"
	.string "dotar a PORYGON 3.1 de PELUCHE por\l"
	.string "HABILIDAD.$"

PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_4:
	.string "De este modo, su 65 en DEFENSA en la\n"
	.string "práctica rondará los 120-140.$"

PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_5:
	.string "Para rematar, cuenta con mayor AT.ESP y\n"
	.string "VELOCIDAD que PORYGON 3 original,\l"
	.string "además de mejor bulk.$"

PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_6:
	.string "A pesar de ello, la combinación\n"
	.string "NORMAL/FANTASMA y el mantener\l"
	.string "ADAPTABLE por HABILIDAD, sigue\l"
	.string "manteniendo la vieja versión vigente.$"

PalletTown_Laboratorio_Secreto_Doc_Porygon_Texto_1:
.string "PORYGON 3.1\p"
	.string "HP: 105\n"
	.string "ATTACK: 70\l"
	.string "DEFENSE: 65\l"
	.string "SP. ATK: 165\l"
	.string "SP. DEF: 115\l"
	.string "SPEED: 145\l"
	.string "TOTAL: 665\p"
	.string "TYPE: NORMAL/PSYCHIC\n"
	.string "ABILITY: FLUFFY$"

PalletTown_Laboratorio_Secreto_Doc_Armaldo::
lock
showmonpic SPECIES_ARMALDO_PRIMAL, 10, 3  
playmoncry SPECIES_ARMALDO, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_4, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_2:
	.string "Lo más parecido a la forma real de\n"
	.string "ARMALDO en estado salvaje, reproducida\l"
	.string "gracias a la PIEDRA DEVON.$"

PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_3:
	.string "POKÉMON de gran peligro; recupera su\n"
	.string "VELOCIDAD como ANORITH, que si bien\l"
	.string "sigue siendo insuficiente -75- puede\l"
	.string "llegar a doblarla si es golpeado por el\l"
	.string "lado físico (ARM.FRÁGIL).$"

PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_4:
	.string "Su sólida DEFENSA facilitará esta\n"
	.string "situación, quedando un ATAQUE de 155\l"
	.string "puntos capaz de arrasar con lo que se\l"
	.string "le ponga enfrente.$"

PalletTown_Laboratorio_Secreto_Doc_Armaldo_Texto_1:
.string "ARMALDO-P\p"
	.string "HP: 75\n"
	.string "ATTACK: 155\l"
	.string "DEFENSE: 120\l"
	.string "SP. ATK: 70\l"
	.string "SP. DEF: 100\l"
	.string "SPEED: 75\l"
	.string "TOTAL: 585\p"
	.string "TYPE: ROCK/BUG\n"
	.string "ABILITY: WEAK ARMOR$"


PalletTown_Laboratorio_Secreto_Doc_Guardia::
lock
showmonpic SPECIES_GUARDIA, 10, 3  
playmoncry SPECIES_GUARDIA, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_4, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_2:
	.string "Evolución de MAROWAK, que solo el 0,1%\n"
	.string "de la línea evolutiva alcanza, pues\l"
	.string "requiere de una longevidad y nivel de\l"
	.string "entrenamiento extremos.$"

PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_3:
	.string "Adquiere varios atributos de\n"
	.string "KANGASKHAN, tales como INTRÉPIDO y\l"
	.string "unos PUNTOS de SALUD similares. Sin\l"
	.string "embargo, conserva intacta la capacidad\l"
	.string "de hacer uso del HUESO GRUESO como\l"
	.string "MAROWAK.$"

PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_4:
	.string "En el global, reúne las mejores\n"
	.string "cualidades de toda la línea evolutiva\l"
	.string "CUBONE-KANGASKHAN. Alcanza, por rareza\l"
	.string "y poder, un estatus similar a POKÉMON\l"
	.string "como VOLCARONA o TRXATU en otras\l"
	.string "regiones.$"

PalletTown_Laboratorio_Secreto_Doc_Guardia_Texto_1:
.string "GUARDIA\p"
	.string "HP: 105\n"
	.string "ATTACK: 95\l"
	.string "DEFENSE: 145\l"
	.string "SP. ATK: 60\l"
	.string "SP. DEF: 95\l"
	.string "SPEED: 60\l"
	.string "TOTAL: 560\p"
	.string "TYPE: GROUND\n"
	.string "ABILITY: SCRAPPY$"

PalletTown_Laboratorio_Secreto_Doc_Wrongsparce::
lock
showmonpic SPECIES_DUDUNSPARCE_EVO, 10, 3  
playmoncry SPECIES_DUDUNSPARCE_EVO, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_4, MSGBOX_DEFAULT
hidemonpic
release
end

PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_2:
	.string "Sus orígenes son desconocidos. Se cree\n"
	.string "que, de algún modo, evoluciona de\l"
	.string "DUDUNSPARCE.$"

PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_3:
	.string "Queda a un suspiro de contar con el\n"
	.string "total de un PSEUDOLEGENDARIO. A pesar\l"
	.string "de ello, en la práctica su distribución\l"
	.string "de STATS es superior a la de cualquiera\l"
	.string "de ellos, con solo 43 puntos en ATAQUE\l"
	.string "ESPECIAL.$"

PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_4:
	.string "Guarda extrañas y muy sorprendentes\n"
	.string "similitudes con ZYGARDE, tales como\l"
	.string "similar DEFENSA, capacidad de ejecutar\l"
	.string "MIL FLECHAS y, sobre todo, estar ambos\l"
	.string "anclados a la tierra, obligados a reptar\l"
	.string "en ella.$"

PalletTown_Laboratorio_Secreto_Doc_Wrongsparce_Texto_1:
.string "WRONGSPARCE\p"
	.string "HP: 141\n"
	.string "ATTACK: 131\l"
	.string "DEFENSE: 121\l"
	.string "SP. ATK: 43\l"
	.string "SP. DEF: 98\l"
	.string "SPEED: 65\l"
	.string "TOTAL: 599\p"
	.string "TYPE: NORMAL/GROUND\n"
	.string "ABILITY: GRASSY SURGE$"

