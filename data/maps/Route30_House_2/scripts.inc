Route30_House_2_MapScripts::
	.byte 0

Route30_House_2_Dialogo::
lock
faceplayer
msgbox Route30_House_2_Dialogo_Texto_1 MSGBOX_NPC
release
end

Route30_House_2_Dialogo_Texto_1:
.string "¿Cómo dices chico? ¿Darte yo un HUEVO\n"
	.string "MISTERIOSO? Déjame darte un consejo,\l"
	.string "tienes pinta de haber visto ya\l"
	.string "bastante mundo y ocupar una posición\l"
	.string "de privilegio, deberías de ser el\l"
	.string "primero en saber que en este mundo\l"
	.string "nadie da nada a cambio de nada, y si\l"
	.string "obtienes algo gratis, es que el\l"
	.string "producto eres tú.$"

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
	.string "… … … … … … … …{PAUSE 5}$"

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
