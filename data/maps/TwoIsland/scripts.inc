TwoIsland_MapScripts::
	.byte 0

TwoIsland1::
end


TwoIsland2::
lock     
faceplayer     
msgbox TwoIsland_Text_2, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_2:
.string "Hay una señora que vive en una\n"
.string "casita en el cabo.\p"
.string "Es un poco desconcertante,\n"
.string "¡le tira los tejos a los POKéMON!$"

TwoIsland3::
lock     
faceplayer     
msgbox TwoIsland_Text_3, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_3:
.string "Oye, oye, ¿sabes una cosa?\p"
.string "Hace poco, vino un ENTRENADOR\n"
.string "a la ISLA.\p"
.string "Era uno de los miembros del ALTO\n"
.string "MANDO. Se llamaba BRUNO.\p"
.string "Pero se fue decepcionado cuando\n"
.string "vio que no quedaban bastones de\l"
.string "caramelo superfuertes.$"


TwoIsland4::
lock     
faceplayer     
msgbox TwoIsland_Text_4, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_4:
.string "¡El experto ENTRENADOR sabe\n"
.string "comprar objetos raros!$"


TwoIsland5::
end


TwoIsland6::
end



TwoIslandDocumento_100::
msgbox TwoIslandDocumento_Text_100, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_100:
.string "¡PELIGRO!\n"
	.string "¡CORRIENTES ULTRA-RÁPIDAS!\l"
	.string "¡La pesca y el surf están\l"
	.string "prohibidos!$"



TwoIslandDocumento_101::
msgbox TwoIslandDocumento_Text_101, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_101:
.string "ISLA SECUNDA\n"
	.string "Bendita isla para dos.$"



TwoIslandDocumento_102::
msgbox TwoIslandDocumento_Text_102, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_102:
.string "SALÓN DE JUEGOS DE ISLA SECUNDA$"
