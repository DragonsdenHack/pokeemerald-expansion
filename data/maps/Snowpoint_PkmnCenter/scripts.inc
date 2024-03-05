Snowpoint_PkmnCenter_MapScripts::
	.byte 0

Snowpoint_PkmnCenter_Primer_Npc::
lock
faceplayer
msgbox Snowpoint_PkmnCenter_Primer_Npc_Texto_1 MSGBOX_DEFAULT
release
end

Snowpoint_PkmnCenter_Primer_Npc_Texto_1:
	.string "¿Sabes que hay muchos POKÉMON de TIPO\n"
	.string "HIELO en los alrededores de PUNTANEVA?\l"
	.string "¿Vivirán en el TEMPLO?$"

Snowpoint_PkmnCenter_Psyduck::
lock
faceplayer
playmoncry SPECIES_PSYDUCK, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Snowpoint_PkmnCenter_Psyduck_Texto_1 MSGBOX_DEFAULT
release
end

Snowpoint_PkmnCenter_Psyduck_Texto_1:
	.string "PSYDUCK: ¡Gaga guwawa!$"

Snowpoint_PkmnCenter_Segundo_Npc::
lock
faceplayer
msgbox Snowpoint_PkmnCenter_Segundo_Npc_Texto_1 MSGBOX_DEFAULT
release
end

Snowpoint_PkmnCenter_Segundo_Npc_Texto_1:
	.string "La nieve amortigua el sonido. Por eso\n"
	.string "hay tanto silencio aquí.$"
