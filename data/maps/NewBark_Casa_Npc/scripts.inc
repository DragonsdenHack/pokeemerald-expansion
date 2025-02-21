NewBark_Casa_Npc_MapScripts::
	.byte 0


NewBark_Casa_Npc_Chica::
lock
faceplayer
msgbox NewBark_Casa_Npc_Chica_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox NewBark_Casa_Npc_Chica_Texto_2 MSGBOX_AUTOCLOSE
release
end

NewBark_Casa_Npc_Chica_Texto_2:
.string "Ojalá fuera una investigadora como él…$"

NewBark_Casa_Npc_Chica_Texto_1:
	.string "PIKACHU es un POKÉMON evolucionado. El\n"
	.string "descubrimiento del PROF.ELM me deja\l"
	.string "impresionada.\p"
	.string "Es muy famoso por su investigación\n"
	.string "sobre la evolución POKÉMON.$"
