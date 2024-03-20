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
	.string "One of the ELITE FOUR used to be the\n"
	.string "LEADER of FUCHSIA's GYM.$"

Neo_FuchsiaCity_Primer_Npc_Texto_2:
	.string "Our GYM LEADER has been inactive for a\n"
	.string "long time, there are rumors that it will\l"
	.string "leave his position.$"

Neo_FuchsiaCity_Segundo_Npc::
lock
faceplayer
msgbox Neo_FuchsiaCity_Segundo_Npc_Texto_1, MSGBOX_NPC
release
end

Neo_FuchsiaCity_Segundo_Npc_Texto_1:
	.string "The SAFARI ZONE is closed… It's sad,\n"
	.string "considering it's FUCHSIA's main\l"
	.string "attraction.$"


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
	.string "KOGA's daughter has all the potential\n"
	.string "to succeed him as the GYM LEADER.$"

Neo_FuchsiaCity_Tercer_Npc_Texto_1:
	.string "KOGA's daughter succeeded him as the\n"
	.string "GYM LEADER after he joined the ELITE\l"
	.string "FOUR.$"


