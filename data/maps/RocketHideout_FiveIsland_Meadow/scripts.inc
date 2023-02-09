RocketHideout_FiveIsland_Meadow_MapScripts::
	.byte 0
	
RocketHideoutFiveIslanMeadow23::     
call_if_set FLAG_ENABLE_ENGLISH, RocketHideoutFiveIslanMeadow23English
goto RocketHideoutFiveIslanMeadow23Spanish
end

RocketHideoutFiveIslanMeadow23English::
lock
faceplayer
msgbox RocketHideoutFiveIslandMeadow_Text_English, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslanMeadow23Spanish::
lock
faceplayer
msgbox RocketHideoutFiveIslandMeadow_Text_Spanish, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslanMeadow22::     
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_English:
.string "Text in english.$"

RocketHideoutFiveIslandMeadow_Text_Spanish:
.string "Texto en ingles.$"


RocketHideoutFiveIslandMeadow_Text_22:     
.string "Encárgate de hacer tu cometido\n"
.string "recluta, las cosas que aquí\l"
.string "hacemos te quedan muy grandes.$"


RocketHideoutFiveIslanMeadow21:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_21: 

.string "Así es, nuestra sucursal de ISLA\n"
.string "INTA cuenta con este sótano oculto.\l"
.string "Aquí examinamos primero los\l"
.string "POKÉMON robados antes de\l"
.string "exportarlos a KANTO.$"


RocketHideoutFiveIslanMeadow20:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_20, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_20: 

.string "Siéntete afortunado, ¡ahora\n"
.string "trabajas para el TEAM ROCKET!$"


RocketHideoutFiveIslanMeadow19:: 
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_19, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_19: 

.string "¿No tienes un trabajo que hacer?\n"
.string "¿A qué esperas?\l"
.string "¡Estás perdiendo eficiencia y eso\l"
.string "aquí no se tolera!$"


RocketHideoutFiveIslanMeadow15::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_15:
.string "…\n"
.string "…\l"
.string "(Contiene un KINGLER en su\l"
.string "interior, mejor no tocarla\l"
.string "demasiado…)$"


RocketHideoutFiveIslanMeadow16::
lock
faceplayer
setflag FLAG_SYS_POKEMON_GET
checkitem ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte2
msgbox MagikarpNo1, MSGBOX_DEFAULT
release
end

Parte2::
checkitem2 ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte3
msgbox MagikarpNo2, MSGBOX_DEFAULT
release
end 

Parte3::
checkpcitem ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte4
msgbox MagikarpNo3, MSGBOX_DEFAULT
release
end

Parte4::
checkpcitem2 ITEM_POKE_BALL
goto_if_eq VAR_RESULT, FALSE, Parte5
msgbox MagikarpNo4, MSGBOX_DEFAULT
release
end

Parte5::
msgbox MagikarpSi_Text, MSGBOX_DEFAULT
giveitem ITEM_POKE_BALL
release
end 


MagikarpSi_Text:
.string "Toma una pokeball"
.string "$"

MagikarpNo1:
.string "¡No te doy nada,\n lo tienes en la mochila!$"

MagikarpNo2:
.string "¡No te doy nada,\n lo tienes equipado!$"

MagikarpNo3:
.string "¡No te doy nada,\n lo tienes en pc!$"

MagikarpNo4:
.string "¡No te doy nada,\n lo tienes en pc equipado!$"


RocketHideoutFiveIslanMeadow17::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_17, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_17:
.string "…\n"
.string "…\l"
.string "(Contiene un NIDORINO en su\l"
.string "interior, mejor no tocarla\l"
.string "demasiado…)$"



RocketHideoutFiveIslanMeadow12::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_12, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_12:
.string "Pocos saben que este almacén es en\n"
.string "realidad nuestra principal fuente\l"
.string "de tráfico de POKÉMON, también\l"
.string "realizamos diversos experimentos.\l"
.string "A pesar de que en KANTO tenemos\l"
.string "laboratorios mejor preparados,\l"
.string "desde ISLA INTA hemos llegado a\l"
.string "conclusiones muy interesantes\l"
.string "respecto a la manipulación de las\l"
.string "ondas de radio…$"


RocketHideoutFiveIslanMeadow10::
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_10, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_10: 
.string "Pobre infeliz ese recluta…\n"
.string "No hay nada que irrite más a\l"
.string "nuestro mejor ADMINISTRADOR que\l"
.string "las actitudes producto de la ley\l"
.string "del mínimo esfuerzo.\l"
.string "¿De verdad esperaba que le\l"
.string "regalásemos un DRATINI de la nada?\l"
.string "¡Somos una organización criminal,\l"
.string "no una ONG!$"



RocketHideoutFiveIslandMeadowDocumento_100::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_100, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_100:
.string "CÓDIGO MORAL Y DE CONDUCTA ROCKET:\n"
	.string "1.-Mi presencia en la organización\l"
	.string "es un privilegio, no un derecho, y\l"
	.string "debo ganármela en la acción.\l"
	.string "2.-La lealtad y el compromiso\l"
	.string "total de la organización son\l"
	.string "innegociables.\l"
	.string "3.-Las insubordinaciones y\l"
	.string "traiciones se pagan con la muerte.\l"
	.string "4.-Actuamos como un solo cuerpo,\l"
	.string "unidad por encima de\l"
	.string "individualidad, lo que...\l"
	.string "5.-No quita que todo Rocket deba\l"
	.string "de tener iniciativa propia,\l"
	.string "actitud de búsqueda y mejora\l"
	.string "constantes por convertirse en un\l"
	.string "mejor entrenador.\l"
	.string "6.-Llega, analiza, adáptate y\l"
	.string "gana.\l"
	.string "7.-Cada miembro de la organización\l"
	.string "cuenta, desde el Recluta más\l"
	.string "básico hasta los más altos cargos,\l"
	.string "funcionamos como un enorme\l"
	.string "engranaje donde no se deja a nadie\l"
	.string "atrás.$"



RocketHideoutFiveIslandMeadowDocumento_101::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_101, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_101:
    .string "...\n"
	.string "...\l"
	.string "(Contiene un NIDORINO en su\l"
	.string "interior, mejor no tocarla\l"
	.string "demasiado...).$"



RocketHideoutFiveIslandMeadowDocumento_102::
msgbox RocketHideoutFiveIslandMeadowDocumento_Text_102, MSGBOX_SIGN   
end

RocketHideoutFiveIslandMeadowDocumento_Text_102:
    .string "...\n"
	.string "...\l"
	.string "(Contiene un RHYHORN en su\l"
	.string "interior, mejor no tocarla\l"
	.string "demasiado...).$"


RocketHideoutFiveIslanMeadowAbajo::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Abajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Abajo, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Abajo:     
    .string "(Todos están en sus puestos, no\n"
	.string "puedo irme ahora).$"



RocketHideoutFiveIslanMeadowEnd::
release
end


Movement_Abajo:
walk_down
step_end

RocketHideoutFiveIslanMeadowDerecha::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Derecha
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Derecha, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Derecha:     
    .string "(Todos están en sus puestos, no\n"
	.string "puedo irme ahora).$"


Movement_Derecha:
walk_right
step_end

RocketHideoutFiveIslanMeadowIzquierda::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Movement_Izquierda
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Izquierda, MSGBOX_DEFAULT
release     
end

RocketHideoutFiveIslandMeadow_Text_Izquierda:     
    .string "(Todos están en sus puestos, no\n"
	.string "puedo irme ahora).$"



Movement_Izquierda:
walk_left
step_end

RocketHideoutFiveIslanMeadowAtlas::     
lock     
compare VAR_UNUSED_0x40F7, 0
goto_if_gt RocketHideoutFiveIslanMeadowEnd  
setvar VAR_UNUSED_0x40F7, 1
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas, MSGBOX_NPC
applymovement 1, Move1
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas2, MSGBOX_NPC
applymovement 1, Move2
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas3, MSGBOX_NPC
applymovement 5, Move3
applymovement 1, Move4
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas4, MSGBOX_NPC
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas5, MSGBOX_NPC
applymovement 1, Move5
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas6, MSGBOX_NPC
applymovement 1, Move6
waitmovement 0x0
applymovement 23, Move7
applymovement 22, Move7
waitmovement 0x0
applymovement 5, Move8
playse SE_M_VICEGRIP
waitmovement 0x0
applymovement 23, Move9
applymovement 22, Move9
applymovement 5, Move9
waitmovement 0x0
removeobject 5
playse SE_EXIT
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas7, MSGBOX_NPC
applymovement 1, Move10
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas8, MSGBOX_NPC
applymovement 0x1, Move11
waitmovement 0x0
playse SE_EXIT
applymovement 23, Move12
applymovement 22, Move12
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas9, MSGBOX_NPC
waitmovement 0x0
applymovement 13, Move13
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas10, MSGBOX_NPC
applymovement 12, Move14
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas11, MSGBOX_NPC
applymovement 10, Move15
waitmovement 0x0
msgbox RocketHideoutFiveIslandMeadow_Text_Atlas12, MSGBOX_NPC
applymovement OBJ_EVENT_ID_PLAYER, Move16
waitmovement 0x0
removeobject 2
removeobject 24
removeobject 4
removeobject 5
removeobject 17
removeobject 6
removeobject 8
removeobject 3
applymovement OBJ_EVENT_ID_PLAYER, Move16b
waitmovement 0x0
release     
end

RocketHideoutFiveIslandMeadow_Text_Atlas:
    .string "ATLAS: Bien, ya estamos todos.$"



RocketHideoutFiveIslandMeadow_Text_Atlas2:
    .string "Para quién aún no se haya\n"
	.string "enterado, ahora formáis parte del\l"
	.string "TEAM ROCKET, con todo lo que ello\l"
	.string "conlleva, yo soy ATLAS, la mano\l"
	.string "derecha de GIOVANNI, el\l"
	.string "ADMINISTRADOR principal y LÍDER\l"
	.string "aquí en ISLAS SETE...$"



RocketHideoutFiveIslandMeadow_Text_Atlas3:
    .string "La mayoría de vosotros seréis\n"
	.string "trasladados inmediatamente a\l"
	.string "KANTO, no esperéis un trato\l"
	.string "amigable por parte de sus\l"
	.string "ciudadanos, seréis vistos como la\l"
	.string "mayor escoria de la región.\l"
	.string "Entretanto, pasemos a la entrega\l"
	.string "de vuestros POKÉMON, pertenecéis\l"
	.string "al 4to pelotón, por lo que cada\l"
	.string "uno de vosotros recibirá un ZUBAT\l"
	.string "importado directamente desde el\l"
	.string "MT.MOON.\l"
	.string "¿Alguna pregunta?$"



RocketHideoutFiveIslandMeadow_Text_Atlas4:
    .string "Recluta nº10: S...\n"
	.string "Señor, no he podido evitar ver\l"
	.string "todos esos POKÉMON poderosos del\l"
	.string "fondo, y me preguntaba, ¿cómo\l"
	.string "quiere nuestro LÍDER GIOVANNI que\l"
	.string "desempeñemos nuestra función de la\l"
	.string "mejor manera posible, si no nos da\l"
	.string "las herramientas adecuadas para\l"
	.string "ello?\l"
	.string "No es por criticar, pero un ZUBAT\l"
	.string "no es una buena herramienta\l"
	.string "precisamente, tal vez un NIDOR...$"


RocketHideoutFiveIslandMeadow_Text_Atlas5:
    .string "ATLAS: Suficiente.$"



RocketHideoutFiveIslandMeadow_Text_Atlas6:
    .string "ATLAS: Esto es lo que haremos, ya\n"
	.string "que has prejuzgado las decisiones\l"
	.string "de nuestro LÍDER GIOVANNI, y no\l"
	.string "estás conforme para con la\l"
	.string "política hacia los nuevos\l"
	.string "reclutas, no hay ningún motivo\l"
	.string "para que sigas perteneciendo a\l"
	.string "nuestra organización...\l"
	.string "Espero por tu bien que no digas\l"
	.string "una sola palabra de lo que aquí\l"
	.string "hayas podido ver.\l"
	.string "¡¡GUARDIAS!!\l"
	.string "¡Lleváoslo fuera de la BASE!$"



RocketHideoutFiveIslandMeadow_Text_Atlas7:
    .string "ATLAS: ....\n"
	.string "Lo último que necesita esta\l"
	.string "organización es gente acomodada\l"
	.string "que reclama privilegios antes de\l"
	.string "haber demostrado nada.$"


RocketHideoutFiveIslandMeadow_Text_Atlas8:
    .string "Un ZUBAT, aunque muchos lo\n"
	.string "consideréis inútil, puede\l"
	.string "convertirse en uno de los mejores\l"
	.string "POKÉMON si lo cuidáis, un GOLBAT\l"
	.string "es un POKÉMON digno de todo un\l"
	.string "ADMINISTRADOR ROCKET, que la\l"
	.string "mismísima miembro de la ÉLITE 4,\l"
	.string "AGATHA, tiene en sus filas, un\l"
	.string "CROBAT es ya uno de los 5 mejores\l"
	.string "POKÉMON tipo veneno que existen...\l"
	.string "Ágil como un AERODACTYL,\l"
	.string "resistente y letal con su BOMBA\l"
	.string "LODO, ¿y váis a rechazar esa\l"
	.string "oportunidad por tener que pasar\l"
	.string "por el proceso de entrenar a un\l"
	.string "ZUBAT antes?$"


RocketHideoutFiveIslandMeadow_Text_Atlas9:
    .string "Aquí os proporcionamos la\n"
	.string "herramienta inicial a partir de la\l"
	.string "cual podréis construir mejores\l"
	.string "herramientas, esa es la voluntad\l"
	.string "de GIOVANNI, que aprendáis a\l"
	.string "escalar comenzando desde lo más\l"
	.string "bajo, comencemos con la entrega de\l"
	.string "vuestros iniciales.\l"
	.string "¡¡RECLUTA NÚMERO 1!!$"



RocketHideoutFiveIslandMeadow_Text_Atlas10:
    .string "ATLAS: ¡¡RECLUTA NÚMERO 2!!$"



RocketHideoutFiveIslandMeadow_Text_Atlas11:
    .string "ATLAS: ¡¡RECLUTA NÚMERO 3!!$"


RocketHideoutFiveIslandMeadow_Text_Atlas12:
    .string "ATLAS: ¡¡RECLUTA NÚMERO 4!!$"

Move1:
walk_up
walk_up
walk_up
face_left
face_right
face_down
step_end

Move2:
walk_right
walk_up
walk_in_place_slow_down
step_end

Move3:
walk_in_place_slow_down
step_end

Move4:
walk_in_place_up
step_end

Move5:
walk_up
walk_right
walk_right
face_up
step_end

Move6:
walk_left
walk_left
walk_left
face_down
step_end

Move7:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_right
walk_up
walk_up
walk_right
walk_up
face_right
step_end

Move8:
face_Left
delay_4
delay_4
face_right
delay_4
delay_4
jump_in_place_left
step_end

Move9:
delay_1
face_right
delay_2
walk_slow_right
walk_slow_right
walk_slow_right
walk_right
walk_right
walk_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

Move10:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
face_left
delay_1
delay_2
delay_4
face_right
delay_1
delay_2
delay_4
walk_in_place_down
step_end



Move11:
walk_slow_down
walk_slow_right
walk_slow_down
face_left
delay_1
delay_2
delay_4
walk_down
walk_down
walk_right
walk_right
face_up
step_end



Move12:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_left
walk_down
walk_down
walk_left
walk_down
walk_down
walk_left
walk_down
walk_down
face_up
step_end



Move13:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_right
face_down
step_end



Move14:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_left
face_down
step_end



Move15:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_up
walk_slow_up
walk_slow_up
walk_up
walk_up
walk_up
walk_up
walk_right
face_down
step_end

Move16:
walk_down
walk_down
walk_down
walk_down
step_end

Move16b:
walk_down
walk_down
walk_down
step_end



RocketHideoutFiveIslanMeadowIzquierda2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 0x1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Izquierda
waitmovement 0
release     
end

RocketHideoutFiveIslanMeadowDerecha2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 0x1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Derecha
waitmovement 0
release     
end

RocketHideoutFiveIslanMeadowAbajo2::     
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowEnd
applymovement OBJ_EVENT_ID_PLAYER, Move17
applymovement 1, MoveAbajo
waitmovement 0
msgbox RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto, MSGBOX_DEFAULT
applymovement 1, MoveArriba
applymovement OBJ_EVENT_ID_PLAYER, Movement_Abajo
waitmovement 0
release     
end

RocketHideoutFiveIslandMeadow_Text_Vuelveatupuesto:     
    .string "ATLAS: ¡¡RECLUTA NÚMERO 4!!\n"
	.string "¡Aún no estás en la lista negra y\l"
	.string "espero no tener que incluirte el\l"
	.string "primer día!\l"
	.string "¡Recoge tu inicial, vuelve a tu\l"
	.string "puesto y no nos hagas perder más\l"
	.string "el tiempo!$"


Move17:
walk_in_place_up
step_end

MoveAbajo:
face_down
step_end

MoveArriba:
face_up
step_end


RocketHideoutFiveIslanMeadowZubat::     
lock        
compare VAR_UNUSED_0x40F7, 1
goto_if_gt RocketHideoutFiveIslanMeadowCajaZubat
lock     
setvar VAR_UNUSED_0x40F7, 2
showmonpic SPECIES_ZUBAT, 10, 3  
playmoncry SPECIES_ZUBAT, CRY_MODE_ENCOUNTER 
msgbox Zubat_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Zubat_No
msgbox Zubat_Text_Yes, MSGBOX_DEFAULT
hidemonpic
goto RocketHideoutFiveIslanMeadowPostZubat
release
end

Zubat_No::
msgbox Zubat_Text_No, MSGBOX_DEFAULT
hidemonpic
goto RocketHideoutFiveIslanMeadowPostZubat
release
end

RocketHideoutFiveIslanMeadowPostZubat::
    playfanfare MUS_OBTAIN_TMHM
	msgbox RocketHideoutFiveIslanMeadow_Text_MensajeZubat, MSGBOX_NPC
	givemon SPECIES_ZUBAT, 5, ITEM_NONE
	waitfanfare
	applymovement 1, MovePostZubat1
    applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2
    waitmovement 0x0
	addobject 7
	removeobject 15
	removeobject 21
	removeobject 9
	removeobject 11
	removeobject 16
	addobject 2
	addobject 24
	addobject 4
	addobject 17
	addobject 6
	addobject 8
	addobject 3

	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2b
	waitmovement 0x0
	fadescreen 1
	delay 40
	fadescreen 0
	applymovement OBJ_EVENT_ID_PLAYER, MovePostZubat2.1 
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat2 MSGBOX_NPC
	applymovement 1, MovePostZubat3
    waitmovement 0x0
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat3 MSGBOX_NPC
	applymovement 3 MovePostZubat4
    applymovement 8 MovePostZubat4
    applymovement 7 MovePostZubat4
    applymovement 6 MovePostZubat4
    applymovement 17 MovePostZubat4
    waitmovement 0x0
	delay 40
	applymovement 2 MovePostZubat5
    applymovement 24 MovePostZubat5
    applymovement 4 MovePostZubat5
    waitmovement 0x0
    delay 40
	applymovement 3 MovePostZubat6
    applymovement 8 MovePostZubat6
    applymovement 7 MovePostZubat6
    applymovement 6 MovePostZubat6
    applymovement 17 MovePostZubat6
    applymovement 2 MovePostZubat6
    applymovement 24 MovePostZubat6
    applymovement 17 MovePostZubat6
	applymovement 4 MovePostZubat6
    waitmovement 0x0
	delay 40
	playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
    playse SE_EXIT
    delay 20
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat4 MSGBOX_NPC
	applymovement 1, MovePostZubat7
    waitmovement 0x0
	playse SE_EXIT
	delay 40
	setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
	fadescreen 1
	removeobject 1
	removeobject 22
	removeobject 23
	removeobject 2
	removeobject 24
	removeobject 4
	removeobject 3
	removeobject 8
	removeobject 7
	removeobject 6
	removeobject 17
	delay 40
	fadescreen 0
	delay 20
    applymovement 13, MovePostZubat8
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat5 MSGBOX_NPC
	applymovement 10, MovePostZubat9
	msgbox RocketHideoutFiveIslanMeadow_Text_PostZubat6 MSGBOX_NPC
	fadescreen 1
	removeobject 13
	removeobject 10
	removeobject 12
	delay 40
	fadescreen 0
	setflag FLAG_SYS_POKEMON_GET
	release
	end

Zubat_Text_YesNo:
    .string "¿Entonces quieres a ZUBAT, el\n"
	.string "POKÉMON PLAGA, como tu inicial?$"

Zubat_Text_Yes:
    .string "Este POKÉMON no parece tener mucha\n"
	.string "energía.$"

Zubat_Text_No:
    .string "¿No?\n"
	.string "Qué pena, de todos modos es tu\l"
	.string "única opción.$"

RocketHideoutFiveIslanMeadow_Text_MensajeZubat:
    .string "¡OBTUVISTE UN ZUBAT AL NV.5!$"

RocketHideoutFiveIslanMeadow_Text_PostZubat2:
    .string "Bien, ahora que todos contáis con\n"
	.string "un POKÉMON, procedamos a explicar\l"
	.string "cual será vuestra función en\l"
	.string "nuestra organización, y seré\l"
	.string "breve, básicamente seréis los que\l"
	.string "tengan que hacer el trabajo sucio:\l"
	.string "extorsión, robo, ajustes de\l"
	.string "cuentas, limpiaréis el terreno y\l"
	.string "obtendréis todo el dinero en negro\l"
	.string "posible para el TEAM ROCKET,\l"
	.string "colaborando en la financiación de\l"
	.string "sus proyectos. Hasta que no\l"
	.string "demostréis lo contrario, para mí\l"
	.string "y el resto del mundo sois lo más\l"
	.string "bajo posible, si sois competentes\l"
	.string "y hacéis bien vuestro trabajo poco\l"
	.string "a poco os ganaréis el respeto, las\l"
	.string "recompensas y los galones, no\l"
	.string "antes.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat3:
    .string "Reclutas del 5 al 13, las dos\n"
	.string "últimas filas, seréis trasladados\l"
	.string "inmediatamente a KANTO, ahora\l"
	.string "mismo hay un barco en el puerto de\l"
	.string "ISLA INTA esperando, preparad\l"
	.string "vuestras cosas, zarpáis en 1H.\l"
	.string "¡Ahora fuera mi vista!$"

RocketHideoutFiveIslanMeadow_Text_PostZubat4:
    .string "Bien, quedáis vosotros 4, es\n"
	.string "tradición mantener algunos de los\l"
	.string "soldados que exportamos a Kanto\l"
	.string "desde ISLA INTA, al menos por un\l"
	.string "corto período de tiempo, y estáis\l"
	.string "de suerte, así retrasaréis el\l"
	.string "presenciar el circo en el que se\l"
	.string "ha convertido la región.\l"
	.string "Pasaos por mi despacho y os daré\l"
	.string "detalles de vuestra misión,\l"
	.string "mientras, estrenad vuestros\l"
	.string "POKÉMON, los reclutas del ALMACÉN\l"
	.string "estarán encantados de luchar con\l"
	.string "vosotros.$"

RocketHideoutFiveIslanMeadow_Text_PostZubat5:
    .string "RECLUTA 1: De modo que por el\n"
	.string "momento nos quedamos en ISLA INTA,\l"
	.string "ese ATLAS no se anda con\l"
	.string "tonterías, por algo dicen que solo\l"
	.string "GIOVANNI está por encima de él,\l"
	.string "¿habéis visto la cara de ese\l"
	.string "recluta cuando ATLAS se le ha\l"
	.string "acercado a responderle?\l"
	.string "Dudo que pueda vivir tranquilo\l"
	.string "después de esto.$"


RocketHideoutFiveIslanMeadow_Text_PostZubat6:
	.string "RECLUTA 3: Dudo mucho que viva,\n"
	.string "aunque no haya visto mucho, ha\l"
	.string "visto lo suficiente como para no\l"
	.string "correr el riesgo, en cuanto\l"
	.string "nosotros, como ha dicho ATLAS,\l"
	.string "ahora somos del TEAM ROCKET, más\l"
	.string "vale que vayamos pronto a su\l"
	.string "despacho y ver que quiere\l"
	.string "exactamente de nosotros, en esta\l"
	.string "isla no hay muchas cosas por hacer\l"
	.string "precisamente.$"



RocketHideoutFiveIslanMeadowCajaZubat::
   msgbox RocketHideoutFiveIslandMeadow_Text_CajaZubat, MSGBOX_DEFAULT
   release
   end

RocketHideoutFiveIslandMeadow_Text_CajaZubat:
    .string "(Esta fue la caja de la que provino mi\n"
	.string "primer POKÉMON).$"


MovePostZubat1:
 face_up
 step_end

MovePostZubat2:
 walk_up
 walk_up
 walk_up
 step_end

MovePostZubat2b:
walk_up
walk_up
 walk_up
 walk_up
 face_down
 step_end

MovePostZubat3:
walk_slow_left
walk_slow_right
walk_slow_right
walk_slow_left
walk_in_place_up
step_end

MovePostZubat4:
walk_in_place_up
walk_slow_up
face_right
step_end

MovePostZubat5:
walk_in_place_down
walk_slow_down
face_right
step_end

MovePostZubat6:
delay_1
delay_2
delay_4
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end


MovePostZubat7:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
step_end

MovePostZubat8:
face_left
delay_1
walk_in_place_slow_left
step_end

MovePostZubat9:
face_right
step_end

MovePostZubat2.1:
face_down
walk_in_place_down
step_end
