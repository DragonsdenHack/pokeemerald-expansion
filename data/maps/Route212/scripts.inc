Route212_MapScripts::
	.byte 0


Route212_Cartel_Norte::
lock
msgbox Route212_Cartel_Norte_Texto_1, MSGBOX_SIGN
release     
end

Route212_Cartel_Norte_Texto_1:
	.string "RUTA 212\n"
	.string "{UP_ARROW} CIUDAD CORAZÓN$"

Route212_Cartel::
lock     
faceplayer     
msgbox Route212_Cartel_Texto_1, MSGBOX_SIGN
release     
end

Route212_Cartel_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Puedes reorganizar el contenido de la\n"
	.string "bolsa pulsando SELECT.$"


Route212_Segundo_Cartel::
lock     
faceplayer     
msgbox Route212_Cartel_Segundo_Texto_1, MSGBOX_SIGN
release     
end

Route212_Cartel_Segundo_Texto_1:
	.string "¡Pistas para entrenadores!\p"
	.string "Si te atascas en el barro, lo más\n"
	.string "seguro es que te quedes ahí un tiempo.\p"
	.string "Pero que no te entre pánico,\n"
	.string "solo tienes que moverte sin parar.\p"
	.string "No puedes montar en bici sobre\n"
	.string "terreno pantanoso.$"


Route212_Tercer_Cartel::
lock     
faceplayer     
msgbox Route212_Cartel_Tercer_Texto_1, MSGBOX_SIGN
release     
end

Route212_Cartel_Tercer_Texto_1:
	.string "Se buscan partes\n"
	.string "Se enseñan movimientos a POKÉMON$"


Route212_Primer_NPC::
lock     
faceplayer     
msgbox Route212_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route212_Primer_NPC_Texto_1:
.string "Al SR.FORTUNY, el dueño de la MANSIÓN\n"
.string "POKÉMON, le encanta recibir visitas.\p"
.string "Yo creo que es porque hay algo de lo\n"
.string "que quiere presumir.$"


Route212_Segundo_NPC::
lock     
faceplayer     
msgbox Route212_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

Route212_Segundo_NPC_Texto_1:
.string "Has estado ya en el GRAN PANTANO?\n"
.string "¿Y en la MANSIÓN POKÉMON?\p"
.string "Vaya donde vaya, siempre veo POKÉMON\n"
.string "totalmente nuevos y diferentes\p"
.string "Es un privilegio que me hace sentir\n"
.string "muy feliz.$"


Route212_Mansion::
lock
msgbox Route212_Mansion_Texto_1, MSGBOX_SIGN
release     
end

Route212_Mansion_Texto_1:
	.string "MANSIÓN POKÉMON\n"
	.string "Para la contemplación de los POKÉMON$"
