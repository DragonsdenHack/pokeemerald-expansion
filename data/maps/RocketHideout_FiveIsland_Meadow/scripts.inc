RocketHideout_FiveIsland_Meadow_MapScripts::
	.byte 0

RocketHideoutFiveIslanMeadow22::     
lock     
faceplayer     
msgbox RocketHideoutFiveIslandMeadow_Text_22, MSGBOX_DEFAULT
release     
end

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
