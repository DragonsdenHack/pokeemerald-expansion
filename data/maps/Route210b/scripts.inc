Route210b_MapScripts::
	.byte 0


Route210_Cartel_Sur::
lock
msgbox Route210_Cartel_Sur_Texto_1, MSGBOX_SIGN
release     
end

Route210_Cartel_Sur_Texto_1:
	.string "RUTA 210\n"
	.string "{DOWN_ARROW} PUEBLO SOSIEGO$"


Route210_Cafe::
lock
msgbox Route210_Cafe_Texto_1, MSGBOX_SIGN
release     
end

Route210_Cafe_Texto_1:
	.string "CAFÉ RODEO\n"
	.string "Leche recién ordeñada$"


Route210_Primer_NPC::
lock     
faceplayer     
msgbox Route210_Primer_NPC_Texto_1, MSGBOX_NPC
release
end

Route210_Primer_NPC_Texto_1:
.string "Si tuvieran que volar todo el rato, los\n"
.string "POKÉMON pájaro terminarían cayendo.$"
