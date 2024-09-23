Route30_House_1_MapScripts::
	.byte 0

Route30_House_1_Anciano::
lock
faceplayer
msgbox Route30_House_1_Anciano_Texto_1 MSGBOX_NPC
release
end

Route30_House_1_Anciano_Texto_1:
.string "La gente tiene la mala costumbre de\n"
	.string "evitar darle a sus POKÉMON las BAYAS\l"
	.string "que crecen por JOHTO. Lo que no saben\l"
	.string "es que bien usadas liberan a sus\l"
	.string "POKÉMON de estadísticas inútiles, y\l"
	.string "les permite centrar todo su potencial\l"
	.string "en las importantes.$"
