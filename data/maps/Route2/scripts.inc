Route2_MapScripts::
	.byte 0

Route2_1::
lock     
faceplayer     
msgbox Route2_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Text_1:
.string "¿Quieres dejarme en paz?\n"
.string "¿No ves que le estoy enseñando\l"
.string "CORTE a mi SCYTHER?$"


Route2_2::
lock     
faceplayer     
msgbox Route2_Text_2, MSGBOX_DEFAULT
release     
end

Route2_Text_2:
.string "¿Tienes algún problema?\n"
.string "Si quieres pasar toma otro camino,\l"
.string "lo que un ROCKET tenga o deje de\l"
.string "tener que hacer a mi me importa un\l"
.string "bledo.$"


Route2_3::
end


Route2_4::
end


Route2_5::
lock     
faceplayer     
msgbox Route2_Text_5, MSGBOX_DEFAULT
release     
end

Route2_Text_5:
.string "Esos entrenadores guays decían que\n"
.string "al fin encontraron un PINSIR\l"
.string "salvaje aquí.$"


Route2_6::
lock     
faceplayer     
msgbox Route2_Text_6, MSGBOX_DEFAULT
release     
end

Route2_Text_6:
.string "Es imposible que en este bosque\n"
.string "pueda haber un PINSIR salvaje.$"


Route2_7::
end


Route2_8::
end



Route2Documento_100::
msgbox Route2Documento_Text_100, MSGBOX_SIGN   
end

Route2Documento_Text_100:
.string "CUEVA DIGGLET$"



Route2Documento_101::
msgbox Route2Documento_Text_101, MSGBOX_SIGN   
end

Route2Documento_Text_101:
.string "RUTA 2\n"
	.string "CIUDAD VERDE - CIUDAD PLATEADA$"

Route2_Cazabichos::
lock
msgbox Route2_Cazabichos_Texto_1 MSGBOX_DEFAULT
release
end

Route2_Cazabichos_Texto_1:
.string "Si tuviera un SCYTHER, todos en el\n"
	.string "BOSQUE VERDE me respetarían, y este\l"
	.string "árbol desaparecería de un solo tajo…$"
