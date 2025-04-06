Route203_MapScripts::
	.byte 0


Route203_Cartel_Oeste::
lock
msgbox Route203_Cartel_Oeste_Texto_1, MSGBOX_SIGN
release     
end

Route203_Cartel_Oeste_Texto_1:
	.string "RUTA 203\n"
	.string "{LEFT_ARROW} CIUDAD JUBILEO$"


Route203_Cartel_Este::
lock
msgbox Route203_Cartel_Este_Texto_1, MSGBOX_SIGN
release     
end

Route203_Cartel_Este_Texto_1:
	.string "RUTA 203\n"
	.string "{RIGHT_ARROW} CIUDAD PIRITA$"


Route203_Cartel::
lock     
faceplayer     
msgbox Route203_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route203_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Los movimientos de los POKÉMON consumen\n"
	.string "energía que se mide en Puntos de Poder.\p"
	.string "Si un POKÉMON se queda sin PP, hay que\n"
	.string "llevarlo a un CENTRO POKÉMON.$"


Route203_Segundo_Cartel::
lock     
faceplayer     
msgbox Route203_Segundo_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route203_Segundo_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Si quieres, puedes evitar que un\n"
	.string "POKÉMON evolucione.\p"
	.string "Pulsa el Botón B durante el proceso de\n"
	.string "evolución para sorprender al POKÉMON.\p"
	.string "Así detendrás el proceso.$"


Route203_Primer_NPC::
lock     
faceplayer     
msgbox Route203_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route203_Primer_NPC_Texto_1:
.string "Deberías situar a tu POKÉMON favorito\n"
.string "como el primero en combatir.\p"
.string "¿No crees?$"


Route203_Segundo_NPC::
lock     
faceplayer     
msgbox Route203_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

Route203_Segundo_NPC_Texto_1:
.string "Si no tienes al menos una MEDALLA\n"
.string "de GIMNASIO, no eres nadie…\p"
.string "(...)\p"
.string "¿Crees que eso no es cierto?\p"
.string "¿Ganaste más de 20 MEDALLAS, y\n"
.string "dices que eso no demuestra nada?\p"
.string "¡Mentiroso! ¡Es imposible ganar tantas!$"


Route203_Tercer_NPC::
lock     
faceplayer     
msgbox Route203_Tercer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route203_Tercer_NPC_Texto_1:
.string "Voy por la hierba alta hasta que\p"
.string "encuentro el POKÉMON que quiero.$"

