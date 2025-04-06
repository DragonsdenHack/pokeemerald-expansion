TwinleafTown_MapScripts::
	.byte 0


TwinleafTown_Cartel::
lock
msgbox TwinleafTown_Cartel_Texto_1, MSGBOX_SIGN   
release
end

TwinleafTown_Cartel_Texto_1:
	.string "PUEBLO HOJAVERDE\n"
	.string "¡Ojalá te guste y te quedes!$"

TwinleafTown_Maya::
lock     
msgbox TwinleafTown_Maya_Texto_1, MSGBOX_SIGN
release     
end

TwinleafTown_Maya_Texto_1:
.string "Casa de MAYA$"

TwinleafTown_Leon::
lock     
msgbox TwinleafTown_Leon_Texto_1, MSGBOX_SIGN
release     
end

TwinleafTown_Leon_Texto_1:
.string "Casa de ISRAEL$"


TwinleafTown_Primer_NPC::
lock     
faceplayer     
msgbox TwinleafTown_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

TwinleafTown_Primer_NPC_Texto_1:
	.string "Todos se van en busca de aventuras y\n"
	.string "van haciéndose mayores en el viaje…$"


TwinleafTown_Segundo_NPC::
lock     
faceplayer     
msgbox TwinleafTown_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

TwinleafTown_Segundo_NPC_Texto_1:
.string "Inventar diálogo$"

