Route220_MapScripts::
	.byte 0


Route220_Primer_NPC::
lock     
faceplayer     
msgbox Route220_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Route220_Primer_NPC_Texto_1:
.string "Si no sabes pescar, te estás perdiendo\n"
.string "uno de los grandes placeres de la vida.\p"
.string "Si no conoces los POKÉMON, te los estás\n"
.string "perdiendo todos.$"


Route220_Parque::
lock
msgbox Route220_Parque_Texto_1, MSGBOX_SIGN
release     
end

Route220_Parque_Texto_1:
	.string "PARQUE COMPI\n"
	.string "El lugar de los nuevos comienzos$"
