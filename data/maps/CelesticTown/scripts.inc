CelesticTown_MapScripts::
	.byte 0


Caelestis_Cartel::
lock
msgbox Caelestis_Cartel_Texto_1, MSGBOX_SIGN
release
end

Caelestis_Cartel_Texto_1:
	.string "PUEBLO CAELESTIS\n"
	.string "El pasado vive$"


Caelestis_Primer_NPC::
lock     
faceplayer     
msgbox Caelestis_Primer_NPC_Texto_1, MSGBOX_NPC
release     
end

Caelestis_Primer_NPC_Texto_1:
.string "Ey, ¿sabes lo que dicen?\p"
.string "Dicen que un POKÉMON creó la\n"
.string "región de SINNOH.$"


Caelestis_Segundo_NPC::
lock     
faceplayer     
msgbox Caelestis_Segundo_NPC_Texto_1, MSGBOX_NPC
release     
end

Caelestis_Segundo_NPC_Texto_1:
.string "No hay ninguna TIENDA POKÉMON en\n"
.string "este pueblo.\p"
.string "Pero puedes comprar y vender objetos\n"
.string "en esa casa de ahí.$"


Caelestis_Tercer_NPC::
lock     
faceplayer     
msgbox Caelestis_Tercer_NPC_Texto_1, MSGBOX_NPC
release     
end

Caelestis_Tercer_NPC_Texto_1:
.string "¿Qué hay?\n"
.string "Estudiando historia local?$"
