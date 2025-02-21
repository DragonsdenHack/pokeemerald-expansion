Snowpoint_PkmnCenter_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Snowpoint_PkmnCenter_OnTransition
	.byte 0

Snowpoint_PkmnCenter_OnTransition:
	setrespawn HEAL_LOCATION_SNOWPOINT_CITY
	end

Snowpoint_PkmnCenter_EventScript_Nurse::
compare VAR_PACIFIDLOG_TOWN_STATE, 4
goto_if_gt Snowpoint_PkmnCenter_EventScript_Nurse_2
setvar VAR_PACIFIDLOG_TOWN_STATE, 5
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

Snowpoint_PkmnCenter_EventScript_Nurse_2::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

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

Snowpoint_PkmnCenter_Ariana::
lock
msgbox Snowpoint_PkmnCenter_Ariana_Texto_1 MSGBOX_NPC
release
end

Snowpoint_PkmnCenter_Ariana_Texto_1:
	.string "Ahora mismo necesito estar sola con mis\n"
	.string "pensamientos. Déjame, por favor.$"
