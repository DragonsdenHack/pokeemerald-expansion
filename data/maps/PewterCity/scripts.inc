PewterCity_MapScripts::
	.byte 0

PewterCity1::
end

PewterCity2::
lock     
faceplayer     
msgbox PewterCity_Text1, MSGBOX_DEFAULT
release     
end

PewterCity_Text1:
.string "¡No quiero tener nada que ver\n"
.string "contigo, bastardo!\l"
.string "¡Ni te atrevas a cruzar una mirada\l"
.string "conmigo!$"

PewterCity3::
end


PewterCity4::
lock     
faceplayer     
msgbox PewterCity_Text4, MSGBOX_DEFAULT
release     
end

PewterCity_Text4:
.string "Te has librado de milagro, hace\n"
.string "nada este lugar estaba repleto de\l"
.string "policías. ¡La próxima vez te\l"
.string "atraparán!$"


PewterCity5::
lock     
faceplayer     
msgbox PewterCity_Text5, MSGBOX_DEFAULT
release     
end

PewterCity_Text5:
.string "Los CLEFAIRY vinieron de la luna,\n"
.string "o eso es lo que dicen los rumores.\l"
.string "Aparecieron después de que una\l"
.string "lluvia de piedras lunares cayese\l"
.string "sobre el MT.MOON.$"


PewterCity6::
end



PewterCityDocumento_100::
msgbox PewterCityDocumento_Text_100, MSGBOX_SIGN   
end

PewterCityDocumento_Text_100:
.string "MUSEO DE CIENCIA DE PLATEADA$"




PewterCityDocumento_101::
msgbox PewterCityDocumento_Text_101, MSGBOX_SIGN   
end

PewterCityDocumento_Text_101:
.string "GIMNASIO de CIUDAD PLATEADA\n"
	.string "LÍDER: BROCK\l"
	.string "¡El entrenador más duro que una\l"
	.string "roca!$"



PewterCityDocumento_102::
msgbox PewterCityDocumento_Text_102, MSGBOX_SIGN   
end

PewterCityDocumento_Text_102:
	.string "¡Aviso!\n"
	.string "Unos ladrones han estado robando\l"
	.string "fósiles en el MT.MOON.\l"
	.string "Por favor, contactar con la\l"
	.string "policía si disponen de alguna\l"
	.string "información.$"



PewterCityDocumento_103::
msgbox PewterCityDocumento_Text_103, MSGBOX_SIGN   
end

PewterCityDocumento_Text_103:
	.string "CIUDAD PLATEADA\n"
	.string "La ciudad de la piedra gris.$"



PewterCityDocumento_104::
msgbox PewterCityDocumento_Text_104, MSGBOX_SIGN   
end

PewterCityDocumento_Text_104:
	.string "Consejos de entrenador:\n"
	.string "Todos los POKÉMON que entren al\l"
	.string "campo de batalla obtendrán puntos\l"
	.string "de experiencia.$"



PewterCity_3::
lock
faceplayer
msgbox PewterCity_3_Text_3YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_3No
msgbox PewterCity_3_Text_3Yes, MSGBOX_DEFAULT
release
end



PewterCity_3_Text_3YesNo:
    .string "¡Psssst!\n"
	.string "¿Sabes qué estoy haciendo?$"


PewterCity_3No::
msgbox PewterCity_3_Text_3No, MSGBOX_DEFAULT
release
end


PewterCity_3_Text_3Yes:
    .string "¡Así es!\n"
	.string "¡Es un duro trabajo!$"



PewterCity_3_Text_3No:
	.string "¡Estoy rociando Repelente para\n"
	.string "mantener a los Pokémon salvajes\l"
	.string "alejados de mi jardín!$"

PewterCity_Petrel_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.1
goto PewterCity_Petrel

PewterCity_Petrel_3::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.2
goto PewterCity_Petrel

PewterCity_Petrel_4::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
goto PewterCity_Petrel

PewterCity_Petrel_5::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
playse SE_PIN
applymovement 6, PewterCity_Petrel_Move_2
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1.3
waitmovement 0x0
goto PewterCity_Petrel

PewterCity_Petrel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Petrel_Move_1
waitmovement 0
delay 20
msgbox PewterCity_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_3
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_5
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_6
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_4
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Petrel_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_7
waitmovement 0x0
msgbox PewterCity_Petrel_Texto_10 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Petrel_Move_8
waitmovement 0x0
setflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_BOY
removeobject 6
setvar VAR_UNUSED_0x40F7, 57
release
end

PewterCity_Petrel_Texto_1:
.string "PETREL: ¡Qué sorpresa verte por\n"
	.string "aquí {PLAYER}!$"

PewterCity_Petrel_Texto_2:
.string "Así que una importante misión en\n"
	.string "PUEBLO PALETA, no paras, ¿eh?\l"
	.string "Ya me ha dicho GIOVANNI que estás\l"
	.string "haciendo un buen trabajo allí.$"

PewterCity_Petrel_Texto_3:
.string "... ... ... ... ... ... ...$"

PewterCity_Petrel_Texto_4:
.string "PETREL: -¡Aviso! Unos ladrones han\n"
	.string "estado robando FÓSILES en el\l"
	.string "MT.MOON. Por favor, contactar con\l"
	.string "la POLICÍA si disponen de alguna\l"
	.string "información-.$"

PewterCity_Petrel_Texto_5:
.string "Obvio que con -ladrones- se\n"
	.string "refiere a nosotros, tiene gracia\l"
	.string "la cosa, me encanta el doble\l"
	.string "rasero de esta región.$"

PewterCity_Petrel_Texto_6:
.string "Si un científico se queda con\n"
	.string "FÓSILES del MT.MOON, no pasa nada,\l"
	.string "es para su investigación.$"

PewterCity_Petrel_Texto_7:
.string "Si un par de niños malcriados\n"
	.string "limpian la cueva de FÓSILES, nadie\l"
	.string "dice nada, puesto que, por\l"
	.string "supuesto, no pueden quedarse sin\l"
	.string "completar sus POKÉDEX, de añadir\l"
	.string "uno más a su -colección-, como si\l"
	.string "los POKÉMON fueran cromos\l"
	.string "intercambiables.$"

PewterCity_Petrel_Texto_8:
.string "Si un grupo privado como nosotros\n"
	.string "decide recolectar FÓSILES para\l"
	.string "satisfacer una demanda de la\l"
	.string "población, somos unos ladrones,\l"
	.string "como si esos FÓSILES perteneciesen\l"
	.string "a alguien cuando cualquier idiota\l"
	.string "puede tomarlos en cualquier\l"
	.string "momento si los encuentra.$"

PewterCity_Petrel_Texto_9:
.string "Hablando de FÓSILES, he venido\n"
	.string "hasta aquí a visitar a un viejo\l"
	.string "amigo que tiene la suerte de ser\l"
	.string "uno de los peces gordos del MUSEO\l"
	.string "DE LA CIENCIA DE CIUDAD PLATEADA,\l"
	.string "al parecer han encontrado un\l"
	.string "ejemplar de ÁMBAR VIEJO, que\l"
	.string "contiene el FÓSIL más poderoso y\l"
	.string "valioso de nuestra región, sé que\l"
	.string "con la correcta negociación puedo\l"
	.string "convencerlo de que nos lo preste\l"
	.string "para investigarlo, hemos\l"
	.string "desarrollado un sistema de\l"
	.string "clonación que podría replicar ese\l"
	.string "ÁMBAR VIEJO a un costo inferior a\l"
	.string "su precio de mercado, por lo que\l"
	.string "no puedo dejar pasar esta\l"
	.string "oportunidad.$"

PewterCity_Petrel_Texto_10:
.string "Si te animas, estás invitado a esa\n"
	.string "reunión, estaremos en la caseta\l"
	.string "trasera al MUSEO oficial abierto\l"
	.string "al público, allí te espero si\l"
	.string "decides venir.$"

PewterCity_Petrel_Move_1:
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.1:
walk_down
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.2:
walk_down
walk_in_place_left
step_end

PewterCity_Petrel_Move_1.3:
walk_up
walk_in_place_left
step_end

PewterCity_Petrel_Move_2:
emote_exclamation_mark
walk_in_place_right
step_end

PewterCity_Petrel_Move_3:
walk_right
walk_right
walk_right
step_end

PewterCity_Petrel_Move_4:
face_up
step_end

PewterCity_Petrel_Move_5:
walk_left
walk_in_place_up
step_end

PewterCity_Petrel_Move_6:
walk_right
walk_in_place_right
step_end

PewterCity_Petrel_Move_7:
walk_in_place_up
walk_in_place_right
step_end

PewterCity_Petrel_Move_8:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PewterCity_Ayuda::
lock
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_1
waitmovement 0x0
msgbox PewterCity_Ayuda_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Ayuda_Move_2
waitmovement 0x0
release
end

PewterCity_Ayuda_Move_2:
walk_slow_down
step_end

PewterCity_Ayuda_Move_1:
walk_in_place_up
step_end



PewterCity_Ayuda_Texto_1:
.string "(Debería asistir a la reunión de PETREL,\n"
	.string "en la otra caseta)$"
