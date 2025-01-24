BlackthornCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_OnTransition
	.byte 0

BlackthornCity_OnTransition::
setflag FLAG_VISITED_BLACKTHORN_CITY
end

BlackthornCity1::
lock     
faceplayer     
msgbox BlackthornCity_Text_1, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_1:
.string "Este GIMNASIO fue financiado con\n"
.string "el dinero del gobierno de LANCE,\l"
.string "nuestro MAESTRO nunca combatiría\l"
.string "en un lugar así. Ahora que sabe lo\l"
.string "que ocurrió de verdad en KANTO, si\l"
.string "quieres verle, deberás entrar en\l"
.string "la GUARIDA DRAGÓN.$"



BlackthornCity2::
lock     
faceplayer     
msgbox BlackthornCity_Text_2, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_2:
.string "{PLAYER}, ¿no?\p"
.string "Nuestro GRAN MAESTRO nos ha\n"
.string "hablado de ti, eres más que\l"
.string "bienvenido en este lugar.$"



BlackthornCity3::
end



BlackthornCity4::
lock     
faceplayer     
msgbox BlackthornCity_Text_4, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_4:
.string "Ah…\p"
.string "Si yo te dijera la cantidad de\n"
.string "POKÉMON sagrados que he visto\l"
.string "nadar aquí{PAUSE 5}…{PAUSE 5}$"




BlackthornCity7::
lock     
faceplayer     
msgbox BlackthornCity_Text_7, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_7:
.string "Nuestro GRAN MAESTRO prefiere\n"
.string "pasar desapercibido y mantener a\l"
.string "JOHTO en desconocimiento acerca de\l"
.string "su poder real, pero puedo decirte\l"
.string "que es el mayor prodigio que ha\l"
.string "dado la región en mucho tiempo.$"



BlackthornCity8::
lock     
faceplayer     
msgbox BlackthornCity_Text_8, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_8:
.string "¡Un dragón al que el resto de\n"
.string "dragones no pueden tocar!\p"
.string "¡Vi cómo los ENFADO y CARGA DRAGÓN\n"
.string "no afectaban al POKÉMON del MAESTRO!$"



BlackthornCity9::
lock     
faceplayer     
msgbox BlackthornCity_Text_9, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_9:
.string "Vine hasta aquí para entender\n"
.string "mejor el origen de la fuerza bruta\l"
.string "de los dragones. Estos y el TIPO\l"
.string "LUCHA tienen mucho en común.\p"
.string "¡Ambos cuentan con un poder\n"
.string "físico demoledor!$"



BlackthornCity10::
lock     
faceplayer     
msgbox BlackthornCity_Text_10, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_10:
.string "Ten cuidado con los desfiladeros\n"
.string "del sur, cuando se quieren dar\l"
.string "cuenta, ¡muchos ya no pueden\l"
.string "volver a ENDRINO!$"



BlackthornCity11::
lock     
faceplayer     
msgbox BlackthornCity_Text_11, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_11:
.string "CIUDAD ENDRINO siempre ha sido el\n"
.string "lugar más inaccesible de JOHTO,\l"
.string "rodeada de montañas, con la RUTA\l"
.string "HELADA como única vía de acceso.\l"
.string "Pero sabe premiar a sus visitantes,\l"
.string "pues el conocimiento último acerca\l"
.string "del tipo más poderoso y sagrado\l"
.string "espera, para aquellos preparados{PAUSE 5}…{PAUSE 5}$"



BlackthornCity12::
lock     
faceplayer     
msgbox BlackthornCity_Text_12, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_12:
.string "¿No son adorables?\p"
.string "Es fascinante cómo un frágil\n"
.string "DRATINI puede crecer hasta\l"
.string "convertirse en un DRAGONITE con\l"
.string "mayor poder global que ARTICUNO,\l"
.string "ZAPDOS, MOLTRES y los LEGENDARIOS\l"
.string "ERRANTES ENTEI, RAIKOU y SUICUNE.\p"
.string "¿No crees?$"



BlackthornCityDocumento_100::
msgbox BlackthornCityDocumento_Text_100, MSGBOX_SIGN   
end

BlackthornCityDocumento_Text_100:
.string "HACIA LA GUARIDA DEL DRAGÓN$"



BlackthornCityDocumento_101::
compare VAR_UNUSED_0x40F8, 35
goto_if_gt BlackthornCityDocumento_101_Debora
msgbox BlackthornCityDocumento_Text_101, MSGBOX_SIGN  
end

BlackthornCityDocumento_Text_101:
.string "GIMNASIO de CIUDAD ENDRINO\n"
	.string "LÍDER: ... ...\l"
	.string "¡No hay ningún nombre!$"

BlackthornCityDocumento_101_Debora::
lock
msgbox BlackthornCityDocumento_101_Debora_Texto_1 MSGBOX_AUTOCLOSE
release
end

BlackthornCityDocumento_101_Debora_Texto_1:
.string "GIMNASIO de CIUDAD ENDRINO\n"
	.string "LÍDER: DÉBORA\l"
	.string "La grán experta en POKÉMON DRAGÓN.$"



BlackthornCityDocumento_102::
msgbox BlackthornCityDocumento_Text_102, MSGBOX_SIGN   
end

BlackthornCityDocumento_Text_102:
.string "CIUDAD ENDRINO\n"
	.string "Un legendario refugio oculto por\l"
	.string "las montañas desde tiempos\l"
	.string "inmemoriales.$"



BlackthornCityDocumento_103::
msgbox BlackthornCityDocumento_Text_103, MSGBOX_SIGN   
end

BlackthornCityDocumento_Text_103:
	.string "RUTA HELADA$"

BlackthornCity_Anciano_Paso::
lock
applymovement OBJ_EVENT_ID_PLAYER, BlackthornCity_Anciano_Paso_Move_1
applymovement 2, BlackthornCity_Anciano_Paso_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, BlackthornCity_Anciano_Paso_Move_3
waitmovement 0x0
msgbox BlackthornCity_Anciano_Paso_Texto_1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 173
release
end

BlackthornCity_Anciano_Paso_Move_1:
walk_in_place_left
step_end

BlackthornCity_Anciano_Paso_Move_2:
face_right
step_end

BlackthornCity_Anciano_Paso_Move_3:
face_left
step_end

BlackthornCity_Anciano_Paso_Texto_1:
.string "{PLAYER}, ¿no?\p"
	.string "Nuestro GRAN MAESTRO nos ha\n"
	.string "hablado de ti, eres más que\l"
	.string "bienvenido en este lugar.$"

BlackthornCity_EventScript_ReceiveSwablu::
    lock
    faceplayer
	checkmoncatch SPECIES_SWABLU
	goto_if_eq VAR_RESULT, FALSE, BlackthornCity_Swablu_EventScript_TakeNosepass 
	msgbox BlackthornCity_Swablu_Text_1, MSGBOX_DEFAULT
	release
	end

BlackthornCity_Swablu_EventScript_TakeNosepass::
lock
faceplayer
    msgbox BlackthornCity_Swablu_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox BlackthornCity_Swablu_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox BlackthornCity_Swablu_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_SWABLU, 25, ITEM_NONE
	waitfanfare  
	release
	end 

BlackthornCity_Swablu_Text_TakeNosepass:
	.string "Esta ciudad es conocida como la cuna de\n"
	.string "los DOMADRAGONES, vienen de todas las\l"
	.string "regiones y muchos de ellos guardan sus\l"
	.string "respetos dejando un POKÉMON con\l"
	.string "potencial de ser un dragón.$"

BlackthornCity_Swablu_Text_TakeNosepass2:
	.string "¿Quieres contar con uno de esos\n"
	.string "POKÉMON? Toma.$"

BlackthornCity_Swablu_Text_MensajeNosepass:
.string "¡OBTUVISTE UN SWABLU AL NV.25!$"

BlackthornCity_Swablu_Text_1:
	.string "La línea evolutiva de SWABLU no cuenta\n"
	.string "con la capacidad ofensiva típica en los\l"
	.string "dragones, pero sí con otros atributos.\p"
	.string "Quizás puedas llegar a descubrirlos.$"
