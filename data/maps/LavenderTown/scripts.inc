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
