PalletTown_Laboratorio_Secreto_S1_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PalletTown_Laboratorio_Secreto_S1_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_Laboratorio_Secreto_S1_OnFrame
	.byte 0

PalletTown_Laboratorio_Secreto_S1_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 47, PalletTown_Laboratorio_Secreto_S1_Gray
	.2byte 0

PalletTown_Laboratorio_Secreto_S1_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 48
end

PalletTown_Laboratorio_Secreto_S1_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 48, PalletTown_Laboratorio_Secreto_S1_Oak
	.2byte 0

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
	.string "duda. Pero{PAUSE 15}…{PAUSE 15} hay algo más que me llama la\l"
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
	.string "especie{PAUSE 15}…{PAUSE 15}'$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_8:
	.string "'…que el FUERTE VÍNCULO sea capaz de\n"
	.string "modificar los PUNTOS DE SALUD rompe con\l"
	.string "todos nuestros esquemas…'$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_9:
	.string "Este GYARADOS{PAUSE 15}…{PAUSE 15} los eleva el doble que\n"
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
	.string "Aun así, hay intangibles que jamás\n"
	.string "podrán controlarse.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_13:
	.string "En las manos equivocadas, alguien con\n"
	.string "este GYARADOS nunca podría ganar a mi\l"
	.string "MILOTIC, y en las correctas{PAUSE 15}…{PAUSE 15} habría que\l"
	.string "verlo.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_14:
	.string "Pero de algo estoy segura: no me he\n"
	.string "enfrentado a toda la furia del mar y\l"
	.string "viajado por cuatro regiones solo para\l"
	.string "llegar hasta aquí y caer, sin más,\l"
	.string "formando parte de una ecuación.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Texto_15:
	.string "Hicimos bien en venir.\n"
	.string "Desde BASE PROFUNDA, no tengo esta\l"
	.string "sensación, no puedo esperar para\l"
	.string "ver lo que nos depara este lugar.$"

PalletTown_Laboratorio_Secreto_S1_Mewtwo::
lock
release
end

Laboratorio_Secreto_S1_Andra_Despues_Move_2:
face_down
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_3:
walk_left
face_right
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_5:
face_left
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_6:
walk_in_place_right
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_7:
face_up
delay_16
delay_8
face_left
delay_16
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_8:
face_up
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_9:
walk_in_place_left
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Despues::
lock
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S1_Andra_Despues_Move_1
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S1_Andra_Despues_Move_2
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_1 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_655
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S1_Andra_Despues_Move_3
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_4
waitmovement 0x0
delay 10
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 32, 17, 0x282, FALSE
setmetatile 32, 16, 0x282, FALSE
special DrawWholeMapView
delay 20
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_5
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S1_Andra_Despues_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_7
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, Laboratorio_Secreto_S1_Andra_Despues_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_7 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_8
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_1
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_5
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_10.1 MSGBOX_AUTOCLOSE
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_9
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, Laboratorio_Secreto_S1_Andra_Despues_Move_10
waitmovement 0x0
setflag FLAG_HOENN_655
setflag FLAG_HOENN_282
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40F8, 32
release
end

Laboratorio_Secreto_S1_Andra_Despues_Move_10:
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
walk_up
walk_up
walk_up
step_end

Laboratorio_Secreto_S1_Andra_Despues_Move_1:
walk_in_place_up
step_end

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_1:
	.string "A un lado, {PLAYER}.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_2:
	.string "Veo que encontraste la estatua que\n"
	.string "abría la puerta de abajo.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_3:
	.string "¿Cuál era tu clave?$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_4:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_5:
	.string "Ajá. La mía era: 'ARCEUS ha muerto'.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_6:
	.string "Entonces, tú luchaste con 2 estatuas.\n"
	.string "¿Te fijaste en su nivel de dificultad?$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_7:
	.string "Mmm{PAUSE 15}…{PAUSE 15} 7 y 8.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_8:
	.string "Parece que yo me topé con la clave más\n"
	.string "importante, su nivel era de 9.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_9:
	.string "Clones de LEGENDARIOS mayores,\n"
	.string "prototipos de nivel I y II, megas de\l"
	.string "PSEUDOLEGENDARIOS…$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_10:
	.string "Con esos POKÉMON, ningún ENTRENADOR\n"
	.string "podría pasar de estas puertas.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_10.1:
	.string "Pero sí nosotros.$"

PalletTown_Laboratorio_Secreto_S1_Andra_Despues_Texto_11:
	.string "Ahora podremos ver qué\n"
	.string "se esconde aquí.$"

PalletTown_Laboratorio_Secreto_S1_Primera_Llave::
lock
delay 10
compare VAR_UNUSED_0x40F8, 30
goto_if_gt PalletTown_Laboratorio_Secreto_S1_Primera_Llave_Despues
msgbox PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end


PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Texto_1:
	.string "Puede introducirse una clave en la\n"
	.string "puerta. ¿Cuál será?$"

PalletTown_Laboratorio_Secreto_S1_Primera_Llave_Texto_1:
	.string "Introdujiste la clave:\n"
	.string "'La ignorancia es la fuerza'.$"

PalletTown_Laboratorio_Secreto_S1_Primera_Llave_Despues::
msgbox PalletTown_Laboratorio_Secreto_S1_Primera_Llave_Texto_1 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 31, 21, 0x282, FALSE
setmetatile 31, 20, 0x282, FALSE
setmetatile 32, 22, 0x281, FALSE
setmetatile 32, 21, 0x281, FALSE
setmetatile 32, 20, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end


PalletTown_Laboratorio_Secreto_S1_Segunda_Llave::
lock
msgbox PalletTown_Laboratorio_Secreto_S1_Segunda_Llave_Texto_1 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 32, 17, 0x282, FALSE
setmetatile 32, 16, 0x282, FALSE
special DrawWholeMapView
delay 20
release
end

PalletTown_Laboratorio_Secreto_S1_Segunda_Llave_Texto_1:
	.string "Introdujiste la clave:\n"
	.string "'ARCEUS ha muerto'.$"

Laboratorio_Secreto_S1_Diario_Oak::
lock
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_1 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_2 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_3 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_4 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_5 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_6 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_7 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_8 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_9 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_10 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_11 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_12 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_13 MSGBOX_SIGN
msgbox Laboratorio_Secreto_S1_Diario_Oak_Texto_14 MSGBOX_SIGN
release
end

Laboratorio_Secreto_S1_Diario_Oak_Texto_1:
	.string "Diario de OAK: 15 de abril de 1997$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_2:
	.string "La actual ubicación de MEWTWO está en\n"
	.string "la CUEVA CELESTE.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_3:
	.string "He usado mis influencias para cercar el\n"
	.string "lugar. Nadie del actual gobierno sabe lo\l"
	.string "que habita en lo más profundo de la\l"
	.string "cueva.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_4:
	.string "Mucho menos LANCE. Cree que es\n"
	.string "invencible e inmune a todo lo que no\l"
	.string "provenga de legendarios.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_5:
	.string "Lo único que sostiene su autoridad es\n"
	.string "el poder de sus bestias y dragones. Un\l"
	.string "poder efímero, que solo es cuestión de\l"
	.string "tiempo para que sea sobrepasado.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_6:
	.string "Cualquiera que eche un vistazo a los\n"
	.string "últimos avances de la ciencia, podrá\l"
	.string "prever que sus días están contados.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_7:
	.string "Hay empresas privadas que están ya muy\n"
	.string "cerca de reproducir poderes similares o\l"
	.string "superiores a los de LANCE.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_8:
	.string "La propia SILPH, con el desarrollo de la\n"
	.string "MASTER BALL, permite capturar y\l"
	.string "controlar a cualquier POKÉMON vivo.\l"
	.string "Esto incluye a MEWTWO.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_9:
	.string "Lo cierto es que nada de esto me\n"
	.string "importaba, con ROJO era suficiente.\l"
	.string "Pero su inesperada derrota lo cambió\l"
	.string "todo.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_10:
	.string "Ahora, las circunstancias me obligan a\n"
	.string "recurrir a aquello que creamos bajo lo\l"
	.string "que aún era 'la vieja KANTO'.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_11:
	.string "Con MEWTWO y la legión de nuevos\n"
	.string "experimentos, hemos sobrepasado el\l"
	.string "poder con el que LANCE sometió a KANTO.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_12:
	.string "Sin embargo, ya no somos los únicos…$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_13:
	.string "SILPH, el TEAM ROCKET, DEVON{PAUSE 15}…{PAUSE 15} todo el\n"
	.string "progreso científico se ha acelerado de\l"
	.string "forma exponencial, lo que hoy es fuerte\l"
	.string "podría mañana no serlo.$"

Laboratorio_Secreto_S1_Diario_Oak_Texto_14:
	.string "Creímos llegar al límite con MEWTWO,\n"
	.string "cuando no fue más que el punto de\l"
	.string "inflexión, la mecha que prendió la llama…$"

Laboratorio_Secreto_S1_Oak_Move_1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_down
walk_slow_down
step_end

Laboratorio_Secreto_S1_Oak_Move_2:
delay_16
face_left
delay_8
step_end

Laboratorio_Secreto_S1_Oak_Move_3:
walk_left
delay_16
delay_8
walk_slow_down
step_end

Laboratorio_Secreto_S1_Oak_Move_4:
walk_down
walk_down
walk_left
step_end

Laboratorio_Secreto_S1_Oak_Move_5:
walk_in_place_down
step_end

Laboratorio_Secreto_S1_Oak_Move_6:
face_up
step_end

Laboratorio_Secreto_S1_Oak_Move_7:
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_fast_left
walk_fast_left
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
step_end

PalletTown_Laboratorio_Secreto_S1_Oak::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S1_Oak_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox PalletTown_Laboratorio_S6_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_2
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_3
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Final_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_6
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_5
waitmovement 0x0
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_11 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_4
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S1_Oak_Move_4
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_S6_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_S6_Final_Texto_14 MSGBOX_AUTOCLOSE
delay 25
msgbox PalletTown_Laboratorio_S6_Final_Texto_15 MSGBOX_AUTOCLOSE
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_7
waitmovement 0x0
fadescreen 1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S1_Oak_Move_7
waitmovement 0x0
special RemoveCameraObject
fadescreen 0
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_8
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Final_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_9
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Final_Texto_19 MSGBOX_AUTOCLOSE
fadescreen 1
delay 30
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_10
waitmovement 0x0
delay 30
fadescreen 0
msgbox PalletTown_Laboratorio_S6_Final_Texto_20 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Final_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_22 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_8
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_S6_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S1_Oak_Move_11
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_11
waitmovement 0x0
special RemoveCameraObject
delay 20
msgbox PalletTown_Laboratorio_S6_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_12
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_S6_Final_Texto_25 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_13
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_S6_Final_Texto_27 MSGBOX_AUTOCLOSE
fadescreen 1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S1_Oak_Move_14
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_14.1
waitmovement 0x0
special RemoveCameraObject
fadescreen 0
delay 30
msgbox PalletTown_Laboratorio_S6_Final_Texto_28 MSGBOX_AUTOCLOSE
delay 30
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_5
waitmovement 0x0
delay 15
addobject 8
call Script_SetGrayscaleTint
msgbox PalletTown_Laboratorio_S6_Final_Texto_29 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Final_Texto_30 MSGBOX_AUTOCLOSE
delay 30
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_15
waitmovement 0x0
delay 20
msgbox PalletTown_Laboratorio_S6_Final_Texto_31 MSGBOX_AUTOCLOSE
delay 20
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_16
waitmovement 0x0
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_17
waitmovement 0x0
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_18
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Final_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_36 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_19
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Final_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_20
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Final_Texto_38 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_39 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_21
waitmovement 0x0
delay 10
msgbox PalletTown_Laboratorio_S6_Final_Texto_40 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_16
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
removeobject 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S1_Oak_Move_22
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_22
waitmovement 0x0
special RemoveCameraObject
delay 25
msgbox PalletTown_Laboratorio_S6_Final_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_41 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 9
call Script_SetGrayscaleTint
removeobject 8
fadescreen 1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Laboratorio_Secreto_S1_Oak_Move_23
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_23
waitmovement 0x0
special RemoveCameraObject
fadescreen 0
delay 30
msgbox PalletTown_Laboratorio_S6_Final_Texto_42 MSGBOX_AUTOCLOSE
delay 30
msgbox PalletTown_Laboratorio_S6_Final_Texto_43 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_44 MSGBOX_AUTOCLOSE
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_24
waitmovement 0x0
addobject 10
applymovement 10, Laboratorio_Secreto_S1_Oak_Move_25
waitmovement 0x0
call Script_SetGrayscaleTint
applymovement 10, Laboratorio_Secreto_S1_Oak_Move_25.1
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Final_Texto_45 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_S6_Final_Texto_46 MSGBOX_AUTOCLOSE
applymovement 7, Laboratorio_Secreto_S1_Oak_Move_26
waitmovement 0x0
msgbox PalletTown_Laboratorio_S6_Final_Texto_47 MSGBOX_AUTOCLOSE
delay 35
setvar VAR_UNUSED_0x40F8, 49
warpsilent MAP_PALLET_TOWN_LABORATORIO_SECRETO_S3, 50, 11
delay 100
release
end

Laboratorio_Secreto_S1_Oak_Move_27:
walk_in_place_up
step_end

Laboratorio_Secreto_S1_Oak_Move_26:
delay_16
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_down
delay_16
delay_8
walk_in_place_down
step_end

Laboratorio_Secreto_S1_Oak_Move_25:
walk_right
walk_right
step_end

Laboratorio_Secreto_S1_Oak_Move_25.1:
walk_right
walk_right
walk_right
walk_right
step_end

Laboratorio_Secreto_S1_Oak_Move_24:
delay_16
delay_8
face_left
step_end

Laboratorio_Secreto_S1_Oak_Move_23:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
face_down
step_end

Laboratorio_Secreto_S1_Oak_Move_22:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_up
step_end

Laboratorio_Secreto_S1_Oak_Move_21:
face_down
step_end

Laboratorio_Secreto_S1_Oak_Move_20:
walk_slow_left
walk_slow_left
face_up
step_end

Laboratorio_Secreto_S1_Oak_Move_19:
walk_slow_left
step_end

Laboratorio_Secreto_S1_Oak_Move_18:
walk_slow_down
step_end

Laboratorio_Secreto_S1_Oak_Move_17:
walk_in_place_right
step_end

Laboratorio_Secreto_S1_Oak_Move_16:
face_right
step_end

Laboratorio_Secreto_S1_Oak_Move_15:
walk_right
walk_up
step_end

Laboratorio_Secreto_S1_Oak_Move_14:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
step_end

Laboratorio_Secreto_S1_Oak_Move_14.1:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

Laboratorio_Secreto_S1_Oak_Move_13:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end


Laboratorio_Secreto_S1_Oak_Move_12:
face_right
delay_16
delay_8
walk_right
walk_right
walk_right
walk_right
step_end


Laboratorio_Secreto_S1_Oak_Move_11:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
face_up
step_end

Laboratorio_Secreto_S1_Oak_Move_10:
walk_right
walk_up
step_end

Laboratorio_Secreto_S1_Oak_Move_9:
walk_slow_down
face_left
step_end

Laboratorio_Secreto_S1_Oak_Move_8:
face_down
step_end
