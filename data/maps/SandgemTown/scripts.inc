SandgemTown_MapScripts::
	.byte 0

SandgemTown_Laboratorio::
lock
msgbox SandgemTown_Laboratorio_Texto_1, MSGBOX_SIGN
release     
end

SandgemTown_Laboratorio_Texto_1:
	.string "LABORATORIO POKÉMON$"


SandgemTown_Centro::
lock
msgbox SandgemTown_Centro_Texto_1, MSGBOX_SIGN
release     
end

SandgemTown_Centro_Texto_1:
	.string "CENTRO POKÉMON\n"
	.string "¡Curamos a tus POKÉMON!$"


SandgemTown_Tienda::
lock
msgbox SandgemTown_Tienda_Texto_1, MSGBOX_SIGN
release     
end

SandgemTown_Tienda_Texto_1:
	.string "TIENDA POKÉMON\n"
	.string "¡Objetos para todas las ocasiones!$"


SandgemTown_Cartel::
lock
msgbox SandgemTown_Cartel_Texto_1, MSGBOX_SIGN
release
end

SandgemTown_Cartel_Texto_1:
	.string "PUEBLO ARENA\n"
	.string "¡Porque arena hay!$"


SandgemTown_Leon::
lock     
msgbox SandgemTown_Leon_Texto_1, MSGBOX_SIGN
release     
end

SandgemTown_Leon_Texto_1:
.string "Casa de LEÓN$"
