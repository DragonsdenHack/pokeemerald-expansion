MahoganyTown_MapScripts::
	.byte 0

MahoganyTown1::
lock     
faceplayer     
msgbox MahoganyTown_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_1:
.string "Nuestro LÍDER ha salido a dar un\n"
.string "paseo por el LAGO DE LA FURIA,\l"
.string "está en plena forma para su edad.$"



MahoganyTown2::
lock     
faceplayer     
msgbox MahoganyTown_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_2:
.string "FREDO medita todos los días bajo\n"
.string "una cascada helada para mantenerse\l"
.string "fuerte y lúcido. La leyenda dice\l"
.string "que fue en uno de esos momentos de\l"
.string "máxima lucidez cuando la gran ave\l"
.string "helada se le apareció.$"



MahoganyTown3::
lock     
faceplayer     
msgbox MahoganyTown_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_3:
.string "Verás al precio de oro al que\n"
.string "venderé a los turistas el\l"
.string "CARAMELOFURIA…\l"
.string "¡Jojojo!$"



MahoganyTownDocumento_100::
msgbox MahoganyTownDocumento_Text_100, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_100:
.string "PUEBLO CAOBA\n"
	.string "Bienvenido al hogar de los ninja.$"



MahoganyTownDocumento_101::
msgbox MahoganyTownDocumento_Text_101, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_101:
	.string "GIMNASIO de PUEBLO CAOBA\n"
	.string "LÍDER: FREDO\l"
	.string "El imperturbable maestro del\l"
	.string "hielo.$"



MahoganyTownDocumento_102::
msgbox MahoganyTownDocumento_Text_102, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_102:
.string "¡Si visitas PUEBLO CAOBA, prueba\n"
	.string "un CARAMELOFURIA!$"
