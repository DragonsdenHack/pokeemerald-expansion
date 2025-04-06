CanalaveCity_MapScripts::
	.byte 0


Canal_Cartel::
lock
msgbox Canal_Cartel_Texto_1, MSGBOX_SIGN
release
end

Canal_Cartel_Texto_1:
	.string "CIUDAD CANAL\n"
	.string "Puerto de transporte$"


Canal_Taberna::
lock
msgbox Canal_Taberna_Texto_1, MSGBOX_SIGN
release
end

Canal_Taberna_Texto_1:
	.string "TABERNA BAHÍA…\n"
	.string "El texto es ilegible.$"


Canal_Biblioteca::
lock
msgbox Canal_Biblioteca_Texto_1, MSGBOX_SIGN
release
end

Canal_Biblioteca_Texto_1:
	.string "BIBLIOTECA CANAL$"


Canal_Ruperto::
lock
msgbox Canal_Ruperto_Texto_1, MSGBOX_SIGN
release
end

Canal_Ruperto_Texto_1:
	.string "CASA del MARINERO RUPERTO$"


Canal_Muelle::
lock
msgbox Canal_Muelle_Texto_1, MSGBOX_SIGN
release
end

Canal_Muelle_Texto_1:
	.string "MUELLE CANAL$"


Canal_Gimnasio::
lock
msgbox Canal_Gimnasio_Texto_1, MSGBOX_SIGN
release
end

Canal_Gimnasio_Texto_1:
	.string "GIMNASIO POKÉMON de CIUDAD CANAL\n"
	.string "LÍDER: ACERÓN\l"
	.string "¡El hombre del cuerpo de acero!$"



Canal_Primer_NPC::
lock     
faceplayer     
msgbox Canal_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Canal_Primer_NPC_Texto_1:
.string "¿Qué pasa? ¿Conoces la ISLA HIERRO?\p"
.string "Está al noroeste de aquí.\p"
.string "Era una antigua mina de hierro,\n"
.string "ahora está casi desierta.$"


Canal_Segundo_NPC::
lock     
faceplayer     
msgbox Canal_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

Canal_Segundo_NPC_Texto_1:
.string "¡Te doy la bienvenida a CIUDAD CANAL,\p"
.string "la ciudad del canal!\p"
.string "Antiguamente, este puerto se\n"
.string "utilizaba como centro de transporte.$"


Canal_Tercer_NPC::
lock     
faceplayer     
msgbox Canal_Tercer_NPC_Texto_1, MSGBOX_NPC
release     
end

Canal_Tercer_NPC_Texto_1:
.string "Mi PSYDUCK está muy apegado a mí.\p"
.string "¡Eso hace que su movimiento RETROCESO\n"
.string "sea más potente!$"


Canal_Cuarto_NPC::
lock     
faceplayer     
msgbox Canal_Cuarto_NPC_Texto_1, MSGBOX_NPC
release     
end

Canal_Cuarto_NPC_Texto_1:
.string "Voy a la biblioteca a estudiar.\p"
.string "Me he aficionado a leer sobre el tiempo\n"
.string "y el espacio.$"


Canal_Quinto_NPC::
lock     
faceplayer     
msgbox Canal_Quinto_NPC_Texto_1, MSGBOX_NPC
release     
end

Canal_Quinto_NPC_Texto_1:
.string "El LÍDER y los entrenadores de este\n"
.string "GIMNASIO suelen ir a la ISLA HIERRO.\p"
.string "No solo entrenan a sus POKÉMON,\n"
.string "sino que también hacen ejercicio.$"
