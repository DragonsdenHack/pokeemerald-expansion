Route2_House1_MapScripts::
	.byte 0

Route2House1_1::
lock     
faceplayer     
msgbox Route2_House1_Text_1, MSGBOX_DEFAULT
release     
end

Route2_House1_Text_1:
.string "Cuando el sistema legal funcione\n"
.string "como debe de funcionar de una\l"
.string "maldita vez vosotros los ROCKETS\l"
.string "dejaréis al fin de carroñear las\l"
.string "migajas que os dejamos, es lo\l"
.string "único que os queda dentro de\l"
.string "vuestra miserable existencia.$"



Route2House1_2::
lock     
faceplayer     
msgbox Route2_House1_Text_2, MSGBOX_DEFAULT
release     
end

Route2_House1_Text_2:
.string "Jamás dejaría a mi POKÉMON en\n"
.string "manos de un ROCKET, tenlo claro.$"
