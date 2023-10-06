NeoPalletTown_MapScripts::
	.byte 0

NeoPalletTown_Primer_Npc::
lock
faceplayer
msgbox NeoPalletTown_Primer_Npc_Texto_1 MSGBOX_NPC
release
end

NeoPalletTown_Primer_Npc_Texto_1:
.string "Yo también entreno POKÉMON. Son mis\n"
	.string "guardaespaldas personales.$"



NeoPalletTown_Segundo_Npc::
lock
faceplayer
msgbox NeoPalletTown_Segundo_Npc_Texto_1 MSGBOX_NPC
release
end

NeoPalletTown_Segundo_Npc_Texto_1:
.string "¡La tecnología es increíble! Ahora\n"
	.string "puedes cambiar POKÉMON con el pasado,\l"
	.string "como un e-mail.$"
