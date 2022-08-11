Route2_Path_MapScripts::
	.byte 0

Route2Path-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "Hay muchos POKÉMON que solo viven\n"
.string "en bosques o cuevas.\l"
.string "Necesitarás estar atento y ser\l"
.string "constante si quieres tenerlos a\l"
.string "todos.$"



Route2Path-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "En este lugar no hay nada que\n"
.string "pueda interesar a una ENTRENADORA\l"
.string "GUAY como yo, salvo esas leyendas\l"
.string "que dicen de la existencia de un\l"
.string "PINSIR salvaje[.]$"



Route2Path-3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡El eterno BOSQUE VERDE!\n"
.string "¡Ahhhh!\l"
.string "¡Ni siquiera este lugar soportará\l"
.string "el paso del tiempo!$"
