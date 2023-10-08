Neo_FuchsiaCity_MapScripts::
	.byte 0

Neo_FuchsiaCity_Primer_Npc::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 250
goto_if_gt Neo_FuchsiaCity_Primer_Npc_2
msgbox Neo_FuchsiaCity_Primer_Npc_Texto_2, MSGBOX_NPC
release
end

Neo_FuchsiaCity_Primer_Npc_2::
msgbox Neo_FuchsiaCity_Primer_Npc_Texto_1, MSGBOX_NPC
release
end

Neo_FuchsiaCity_Primer_Npc_Texto_1:
.string "Un miembro del ALTO MANDO era el LÍDER\n"
	.string "del GIMNASIO de CIUDAD FUCSIA.$"

Neo_FuchsiaCity_Primer_Npc_Texto_2:
.string "Nuestro LÍDER de GIMNASIO lleva\n"
	.string "bastante tiempo inactivo, corren\l"
	.string "rumores de que dejará su plaza.$"

Neo_FuchsiaCity_Segundo_Npc::
lock
faceplayer
msgbox Neo_FuchsiaCity_Segundo_Npc_Texto_1, MSGBOX_NPC
release
end

Neo_FuchsiaCity_Segundo_Npc_Texto_1:
.string "La ZONA SAFARI está cerrada. Da pena,\n"
	.string "ya que era la mayor atracción de\l"
	.string "CIUDAD FUCSIA.$"


Neo_FuchsiaCity_Tercer_Npc::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 250
goto_if_gt Neo_FuchsiaCity_Tercer_Npc_2
msgbox Neo_FuchsiaCity_Tercer_Npc_Texto_2, MSGBOX_NPC
release
end

Neo_FuchsiaCity_Tercer_Npc_2::
msgbox Neo_FuchsiaCity_Tercer_Npc_Texto_1, MSGBOX_NPC
release
end

Neo_FuchsiaCity_Tercer_Npc_Texto_2:
.string "La hija de KOGA tiene todas las\n"
	.string "papeletas para sucederle como LÍDER\l"
	.string "del GIMNASIO.$"

Neo_FuchsiaCity_Tercer_Npc_Texto_1:
.string "La hija de KOGA le ha sucedido como\n"
	.string "LÍDER del GIMNASIO cuando él se unió al\l"
	.string "ALTO MANDO.$"


