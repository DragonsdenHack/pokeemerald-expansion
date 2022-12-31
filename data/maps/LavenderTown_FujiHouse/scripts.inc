LavenderTown_FujiHouse_MapScripts::
	.byte 0

FujiHouse1::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_1, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_1:
.string "¡Ahhhhh!\n"
.string "¡No me hagas daño por favor!$"



FujiHouse2::
end



FujiHouse3::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_3:
.string "¡No, aléjate de aquí ROCKET!\n"
.string "¡Si FUJI te estuviera aquí verías\l"
.string "lo que es bueno!$"



FujiHouse4::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_4:
.string "El señor FUJI no está aquí, y\n"
.string "aunque lo estuviera dudo mucho que\l"
.string "quisiera recibir a un ROCKET como\l"
.string "invitado.$"



FujiHouse5::
end



FujiHouseDocumento_100::
msgbox FujiHouseDocumento_Text_100, MSGBOX_SIGN   
end

FujiHouseDocumento_Text_100:
.string "REVISTA POKéMON\n"
	.string "¡Gran concurso mensual de dibujo\l"
	.string "POKéMON!\p"
	.string "El formulario de inscripción está\n"
	.string "en...\p"
	.string "¡Anda, se lo han llevado!\n"
	.string "¡Se ha debido de inscribir alguien!$"



FujiHouseDocumento_101::
msgbox FujiHouseDocumento_Text_101, MSGBOX_SIGN   
end

FujiHouseDocumento_Text_101:
	.string "¡Revistas de los POKéMON!\p"
	.string "¡Cuadernos de los POKéMON!\p"
	.string "¡Dibujos de los POKéMON!$"
	