LavenderTown_FujiHouse_MapScripts::
	.byte 0

FujiHouse1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "¡Ahhhhh!\n"
.string "¡No me hagas daño por favor!$"



FujiHouse2::
end



FujiHouse3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡No, aléjate de aquí ROCKET!\n"
.string "¡Si FUJI te estuviera aquí verías\l"
.string "lo que es bueno!$"



FujiHouse4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "El señor FUJI no está aquí, y\n"
.string "aunque lo estuviera dudo mucho que\l"
.string "quisiera recibir a un ROCKET como\l"
.string "invitado.$"



FujiHouse5::
end
