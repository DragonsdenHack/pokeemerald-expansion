Route214_MapScripts::
	.byte 0


Route214_Cartel_Sur::
lock
msgbox Route214_Cartel_Sur_Texto_1, MSGBOX_SIGN
release     
end

Route214_Cartel_Sur_Texto_1:
	.string "RUTA 214\n"
	.string "{DOWN_ARROW} LAGO VALOR$"


Route214_Cartel_Norte::
lock
msgbox Route214_Cartel_Norte_Texto_1, MSGBOX_SIGN
release     
end

Route214_Cartel_Norte_Texto_1:
	.string "RUTA 214\n"
	.string "{UP_ARROW} CIUDAD ROCAVELO$"


Route214_Primer_NPC::
lock     
faceplayer     
msgbox Route214_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route214_Primer_NPC_Texto_1:
.string "Me enorgullece tener POKÉMON que nadie\n"
.string "más tiene.\p"
.string "Y también haber ganado el segundo\n"
.string "premio de dibujo de JUBILEO TV.$"
