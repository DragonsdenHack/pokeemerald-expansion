Route207_MapScripts::
	.byte 0


Route207_Cartel::
lock     
faceplayer     
msgbox Route207_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route207_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Los POKÉMON podrían no reaccionar\n"
	.string "si se quedan dormidos o paralizados.\p"
	.string "Si le ocurre a alguno de tus POKÉMON,\n"
	.string "podría resultar desastroso.\p"
	.string "Si le a tu rival, ¡aprovecha\n"
	.string "la ocasión!$"


Route207_Cartel_Este::
lock
msgbox Route207_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route207_Cartel_Este_Texto_1:
	.string "RUTA 207\n"
	.string "{RIGHT_ARROW} MONTE CORONA$"

