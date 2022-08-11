Route2_MapScripts::
	.byte 0

Route2-1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "¿Quieres dejarme en paz?\n"
.string "¿No ves que le estoy enseñando\l"
.string "CORTE a mi SCYTHER?$"


Route2-2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¿Tienes algún problema?\n"
.string "Si quieres pasar toma otro camino,\l"
.string "lo que un ROCKET tenga o deje de\l"
.string "tener que hacer a mi me importa un\l"
.string "bledo.$"


Route2-3::
end


Route2-4::
end


Route2-5::
lock     
faceplayer     
msgbox Text_5, MSGBOX_DEFAULT
release     
end

Text_5:
.string "Esos entrenadores guays decían que\n"
.string "al fin encontraron un PINSIR\l"
.string "salvaje aquí.$"


Route2-6::
lock     
faceplayer     
msgbox Text_6, MSGBOX_DEFAULT
release     
end

Text_6:
.string "Es imposible que en este bosque\n"
.string "pueda haber un PINSIR salvaje.$"


Route2-7::
end


Route2-8::
end
