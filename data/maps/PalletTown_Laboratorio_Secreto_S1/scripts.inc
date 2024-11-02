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

PalletTown_Laboratorio_Secreto_S1_Andra_Move_1:
walk_in_place_right
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_2:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_3:
walk_in_place_left
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_4:
delay_16
face_up
delay_8
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_5:
delay_8
face_right
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_6:
delay_8
face_left
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_7:
delay_16
face_left
delay_16
delay_8
face_up
delay_16
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_8:
delay_16
face_left
delay_16
delay_8
walk_in_place_left
delay_8
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_9:
delay_8
face_down
step_end



PalletTown_Laboratorio_Secreto_S1_Andra::
lock
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S1_Andra_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_1.0 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_655
addobject 3
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S1_Andra_Move_2
waitmovement 0x0
delay 10
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_3
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S1_Andra_Move_4
waitmovement 0x0
delay 10
showmonpic SPECIES_GYARADOSZ, 10, 3  
playmoncry SPECIES_GYARADOS, CRY_MODE_ENCOUNTER 
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_1, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_2, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_3, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_4, MSGBOX_DEFAULT
msgbox PalletTown_Laboratorio_Secreto_Doc_Gyarados_Texto_5, MSGBOX_DEFAULT
hidemonpic
delay 25
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S1_Andra_Move_5
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_3
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_4
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 25
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_6
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_4
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_7
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_8
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_9
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S1_Andra_Move_9
applymovement 3, PalletTown_Laboratorio_Secreto_S1_Andra_Move_10
waitmovement 0x0
delay 10
setflag FLAG_HOENN_655
removeobject 3
removeobject 6
setvar VAR_UNUSED_0x40F8, 29
release
end

PalletTown_Laboratorio_Secreto_S1_Andra_Move_10:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_1.0:
	.string "ANDRA: ¡{PLAYER}! ¡Mira esto!$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_1:
	.string "Es de lo que estaban hablando en la\n"
	.string "azotea de T.RADIO LAVANDA, justo antes\l"
	.string "de que DEVON irrumpiera.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_2:
	.string "Esa tecnología de ondas de radio…\n"
	.string "Tal y como dijeron: suma 150 en lugar\l"
	.string "de 100 al poder base.\l"
	.string "Además, de forma eficiente.$"

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
	.string "de GIOVANNI: '…los PS estuvieron\l"
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
	.string "Hicimos bien en venir.\n"
	.string "Desde BASE PROFUNDA no tengo esta\l"
	.string "sensación, no puedo esperar para\l"
	.string "ver lo que nos depara este lugar.$"

PalletTown_Laboratorio_Secreto_S1_Mewtwo::
lock
release
end

PalletTown_Laboratorio_Secreto_S1_Andra_Despues::
lock
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_1 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_8 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_655
release
end

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_1:
	.string "A un lado, {PLAYER}.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_2:
	.string "Veo que encontraste la estatua que\n"
	.string "abría la puerta de abajo.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_3:
	.string "¿Cuál era tu clave?$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_4:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_5:
	.string "Ajá. La mía era: 'ARCEUS ha muerto'.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_6:
	.string "Entonces, tú luchaste con 2 estatuas.\n"
	.string "¿Te fijaste en su nivel de dificultad?$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_7:
	.string "Mmm… 7 y 8.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_8:
	.string "Parece que yo me topé con la clave más\n"
	.string "importante, su nivel era de 9.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_9:
	.string "Clones de LEGENDARIOS mayores,\n"
	.string "prototipos de nivel I y II, megas de\l"
	.string "PSEUDOLEGENDARIOS…$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_10:
	.string "Con esos POKÉMON, ningún ENTRENADOR\n"
	.string "podría pasar de estas puertas. Pero sí\l"
	.string "nosotros.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_11:
	.string "Ahora podremos ver qué\n"
	.string "se esconde aquí.$"

PalletTown_Laboratorio_Secreto_S1_Primera_Llave::
lock
release
end

PalletTown_Laboratorio_Secreto_S1_Segunda_Llave::
lock
release
end
