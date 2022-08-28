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
