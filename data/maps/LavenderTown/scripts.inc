LavenderTown_MapScripts::
	.byte 0

LavenderTown1::
lock     
faceplayer     
msgbox LavenderTown_Text1, MSGBOX_DEFAULT
release     
end

LavenderTown_Text1:
.string "¡No tenéis verguenza ni respeto\n"
.string "alguno por las costumbres de\l"
.string "nuestra región!$"


LavenderTown2::
lock     
faceplayer     
msgbox LavenderTown_Text2, MSGBOX_DEFAULT
release     
end

LavenderTown_Text2:
.string "Este pueblo es conocido como el\n"
.string "lugar de descanso de los POKÉMON.\l"
.string "En la TORRE POKÉMON se llevan a\l"
.string "cabo actos conmemorativos.$"


LavenderTown3::
end



LavenderTownDocumento_100::
msgbox LavenderTownDocumento_Text_100, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_100:
.string "CASA DE VOLUNTARIOS DE LAVANDA$"



LavenderTownDocumento_101::
msgbox LavenderTownDocumento_Text_101, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_101:
.string "¡Nuevo SILPH SCOPE!\n"
	.string "¡Hace visible lo invisible!\p"
	.string "SILPH CO.$"



LavenderTownDocumento_102::
msgbox LavenderTownDocumento_Text_102, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_102:
	.string "PUEBLO LAVANDA\n"
	.string "El noble pueblo púrpura.$"



LavenderTownDocumento_103::
msgbox LavenderTownDocumento_Text_103, MSGBOX_SIGN   
end

LavenderTownDocumento_Text_103:
	.string "TORRE POKÉMON\n"
	.string "Reposo de los espíritus caídos$"
