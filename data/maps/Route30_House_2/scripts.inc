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
.string "Según últimas investigaciones, en lo\n"
	.string "profundo del LAGO de la FURIA puede\l"
	.string "encontrarse un objeto especial: la\l"
	.string "ESCAMA ROJA.$"

Route30_House_2_Documento_Texto_2:
	.string "… … … … … … … …$"

Route30_House_2_Documento_Texto_3:
	.string "Aún desconocemos su naturaleza, pero\n"
	.string "ha demostrado elevar el poder base de\l"
	.string "GYARADOS al usarlo como objeto\l"
	.string "equipable.$"

Ruta_Sur_Malva_Gordo::
lock
faceplayer
msgbox Ruta_Sur_Malva_Gordo_Texto_1 MSGBOX_NPC
release
end

Ruta_Sur_Malva_Gordo_Texto_1:
	.string "La fauna y flora de JOHTO es bastante\n"
	.string "más rica que la de KANTO, las bayas que\l"
	.string "aquí crecen son prueba de ello. He oído\l"
	.string "que en HOENN la variedad es aún mayor.$"
