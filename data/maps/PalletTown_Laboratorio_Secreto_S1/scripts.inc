PalletTown_Laboratorio_Secreto_S1_MapScripts::
	.byte 0

PalletTown_Laboratorio_Secreto_Andra::
lock
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_Andra_Texto_8 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_Andra_Texto_1:
	.string "¡{PLAYER}! ¡Espera!$"

PalletTown_Laboratorio_Secreto_Andra_Texto_2:
	.string "A esa DALIA le pasa lo mismo que a ROJO.$"

PalletTown_Laboratorio_Secreto_Andra_Texto_3:
	.string "Se estancó hace tiempo, su equipo es\n"
	.string "una broma para los estándares\l"
	.string "actuales.$"

PalletTown_Laboratorio_Secreto_Andra_Texto_4:
	.string "Aunque… siendo$"

PalletTown_Laboratorio_Secreto_Andra_Texto_5:
	.string "He tenido que usar HIPNOSIS con\n"
	.string "MILOTIC para que no den la alarma.$"

PalletTown_Laboratorio_Secreto_Andra_Texto_6:
	.string "Ahora sí que no hay vuelta atrás. Si OAK\n"
	.string "esconde algo, lo averiguaremos.$"

PalletTown_Laboratorio_Secreto_Andra_Texto_7:
	.string "Y en caso de no ser así, todo quedará en\n"
	.string "un simple malentendido. La cuestión es…$"

PalletTown_Laboratorio_Secreto_Andra_Texto_8:
	.string "Que mi corazonada resultó ser real;\n"
	.string "ahora solo queda ver la magnitud del\l"
	.string "misterio.$"



PalletTown_Laboratorio_Secreto_Doc_Gyarados::
lock
showmonpic SPECIES_GYARADOSZ, 10, 3  
playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_5, MSGBOX_DEFAULT
hidemonpic
release     
end

PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_1:
.string "GYARADOS-Z\p"
	.string "PS: 115\n"
	.string "ATAQUE: 165\l"
	.string "DEFENSA: 99\l"
	.string "ATAQUE ESPECIAL: 60\l"
	.string "DEFENSA ESPECIAL: 140\l"
	.string "VELOCIDAD: 111\l"
	.string "TOTAL: 690\p"
	.string "TIPO: AGUA/VOLADOR\n"
	.string "HABILIDAD: INTIMIDACIÓN$"

PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_2:
	.string "A día de su creación, es el POKÉMON NO\n"
	.string "LEGENDARIO ni PSEUDO de mayor poder\l"
	.string "global, superando a VOLCARONA-&\l"
	.string "incluso en stats útiles.$"

PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_3:
	.string "Deja atrás también a los que, en la\n"
	.string "cultura popular de KANTO y JOHTO,\l"
	.string "fueron considerados máximos\l"
	.string "exponentes de lo divino: LUGIA y HO-OH.$"

PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_4:
	.string "Fueron necesarias miles de pruebas\n"
	.string "para dar con la dosis exacta de\l"
	.string "exposición a las ondas, finalmente la\l"
	.string "clave fue trabajar con GYARADOS\l"
	.string "variocolor.$"

PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_5:
	.string "Entra de lleno en el cuadrante de\n"
	.string "prototipos nivel II.$"

PalletTown_Laboratorio_Secreto_S1_Andra::
lock
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_1 MSGBOX_AUTOCLOSE
showmonpic SPECIES_GYARADOSZ, 10, 3  
playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_5, MSGBOX_DEFAULT
hidemonpic
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_13 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_14 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_15 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 29
release
end

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_1:
	.string "Es de lo que estaban hablando en la\n"
	.string "azotea de T.RADIO LAVANDA, justo antes\l"
	.string "de que DEVON irrumpiera.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_2:
	.string "Esa tecnología de ondas de radio…\n"
	.string "parece ser capaz de sumar 150 en lugar\l"
	.string "de 100 al poder base. Además, en los\l"
	.string "lugares adecuados.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_3:
	.string "Son números impresionantes, no hay\n"
	.string "duda. Pero… hay algo más que me llama la\l"
	.string "atención.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_4:
	.string "Cuando GIOVANNI me habló sobre los\n"
	.string "FUERTE VÍNCULO, mencionó algo único\l"
	.string "que los caracterizaba: el aumento en\l"
	.string "PUNTOS de SALUD.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_5:
	.string "Algo a lo que ni la MEGAEVOLUCIÓN ni los\n"
	.string "prototipos de nivel I podían acceder.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_6:
	.string "La primera vez que supe de ese\n"
	.string "fenómeno, quedé fascinada.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_7:
	.string "Recuerdo a la perfección las palabras\n"
	.string "de GIOVANNI: '...los PS estuvieron\l"
	.string "siempre ligados a lo más profundo del\l"
	.string "código genético de un POKÉMON, es su\l"
	.string "columna vertebral, inamovible, la\l"
	.string "esencia que da identidad a dicha\l"
	.string "especie…'$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_8:
	.string "'...que el FUERTE VÍNCULO sea capaz de\n"
	.string "modificar los PUNTOS DE SALUD rompe con\l"
	.string "todos nuestros esquemas…'$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_9:
	.string "Este GYARADOS… los eleva el doble que\n"
	.string "un FUERTE VÍNCULO.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_10:
	.string "A simple vista es un detalle sin\n"
	.string "importancia, pero no hace más que dejar\l"
	.string "en evidencia una realidad:\l"
	.string "cuantitativamente, ya no hay debate.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_11:
	.string "Incluso en aquello que parecía ser\n"
	.string "especial, la tecnología ha logrado\l"
	.string "adentrarse. Ahora pueden leer y\l"
	.string "modificar variables a su antojo.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_12:
	.string "Aún así, hay intangibles que jamás\n"
	.string "podrán controlarse.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_13:
	.string "En las manos equivocadas, alguien con\n"
	.string "este GYARADOS nunca podría ganar a mi\l"
	.string "MILOTIC, y en las correctas… habría que\l"
	.string "verlo.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_14:
	.string "Pero de algo estoy segura: no me he\n"
	.string "enfrentado a toda la furia del mar y\l"
	.string "viajado por cuatro regiones solo para\l"
	.string "llegar hasta aquí y caer, sin más,\l"
	.string "formando parte de una ecuación.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_15:
	.string "Hicimos bien en venir aquí. Desde la\n"
	.string "BASE ROCKET PROFUNDA no tengo esta\l"
	.string "sensación, no puedo esperar para ver\l"
	.string "qué más hay aquí.$"
