FourIsland_MapScripts::
	.byte 0

FourIsland1::
end


FourIsland2::
lock     
faceplayer     
msgbox FourIsland_Text_2, MSGBOX_DEFAULT
release     
end

FourIsland_Text_2:
.string "LORELEI ha vuelto.\p"
.string "Creo que el LAPRAS que tiene,\n"
.string "es el mismo que atrapó de pequeña.\p"
.string "Yo creo que se hizo con él\n"
.string "en la CUEVA GLACIADA…\p"
.string "Me parece que lo tiene desde\n"
.string "entonces.$"


FourIsland3::
end


FourIsland4::
lock     
faceplayer     
msgbox FourIsland_Text_4, MSGBOX_DEFAULT
release     
end

FourIsland_Text_4:
.string "¡Uyyy, qué fresquito!\p"
.string "Me he hecho un granizado con\n"
.string "hielo de la CUEVA GLACIADA.\p"
.string "¡Está fresquito y riquísimo!$"


FourIsland5::
lock     
faceplayer     
msgbox FourIsland_Text_5, MSGBOX_DEFAULT
release     
end

FourIsland_Text_5:
.string "¡Me has encontrado!\n"
.string "¡No se lo digas a LORELEI!\p"
.string "¿Sabías que LORELEI tiene un\n"
.string "montón de muñecos de peluche?\p"
.string "¡Cada vez que vuelve a ISLA\n"
.string "QUARTA, aumenta la colección!$"

FourIsland6::
end

FourIsland7::
end



FourIslandDocumento_100::
msgbox FourIslandDocumento_Text_100, MSGBOX_SIGN   
end

FourIslandDocumento_Text_100:
.string "ISLA CUARTA\n"
	.string "El cálido y azul témpano flotante.$"



FourIslandDocumento_101::
msgbox FourIslandDocumento_Text_101, MSGBOX_SIGN   
end

FourIslandDocumento_Text_101:
.string "Casa de LORELEI$"
