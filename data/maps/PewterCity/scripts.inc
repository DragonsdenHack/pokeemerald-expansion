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
	.string "fósiles en el Mt.Moon.\l"
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
