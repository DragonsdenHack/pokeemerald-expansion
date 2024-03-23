Route30_House_2_MapScripts::
	.byte 0

Route30_House_2_Dialogo::
lock
faceplayer
msgbox Route30_House_2_Dialogo_Texto_1 MSGBOX_NPC
release
end

Route30_House_2_Dialogo_Texto_1:
	.string "How do you say, kid? Me giving you a\n"
	.string "MYSTERIOUS EGG? Let me give you a\l"
	.string "piece of advice; you seem to have seen\l"
	.string "quite a bit of the world already and\l"
	.string "hold a privileged position. You should\l"
	.string "be the first to know that in this world,\l"
	.string "nobody gives anything for nothing, and\l"
	.string "if you get something for free, then\l"
	.string "you're the product.$"

Route30_House_2_Documento::
lock
faceplayer
msgbox Route30_House_2_Documento_Texto_1 MSGBOX_NPC
delay 10
msgbox Route30_House_2_Documento_Texto_2 MSGBOX_NPC
delay 10
msgbox Route30_House_2_Documento_Texto_3 MSGBOX_NPC
release
end

Route30_House_2_Documento_Texto_1:
	.string "According to recent research, deep\n"
	.string "within the LAKE OF RAGE, you can find a\l"
	.string "special item: the RED SCALE.$"

Route30_House_2_Documento_Texto_2:
	.string "… … … … … … … …$"

Route30_House_2_Documento_Texto_3:
	.string "We still don't know its nature, but it\n"
	.string "has been shown to increase GYARADOS's\l"
	.string "base power when used as an equipped\l"
	.string "item.$"

Ruta_Sur_Malva_Gordo::
lock
faceplayer
msgbox Ruta_Sur_Malva_Gordo_Texto_1 MSGBOX_NPC
release
end

Ruta_Sur_Malva_Gordo_Texto_1:
	.string "JOHTO boasts a more diverse range of\n"
	.string "flora and fauna compared to KANTO, with\l"
	.string "the berries grown here serving as\l"
	.string "evidence. Rumor has it that HOENN\l"
	.string "offers an even broader variety.$"
