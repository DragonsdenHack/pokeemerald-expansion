NewMap2_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, NewMap2_OnTransition
	.byte 0

NewMap2_OnTransition:
	setrespawn HEAL_LOCATION_PEWTER_CITY
	end

NewMap2_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

NewMap2_Primer_Gamer::
lock
faceplayer
msgbox NewMap2_Primer_Gamer_Texto_1 MSGBOX_NPC
release
end

NewMap2_Primer_Gamer_Texto_1:
    .string "traducir$"

NewMap2_Segundo_Gamer::
lock
faceplayer
msgbox NewMap2_Segundo_Gamer_Texto_1 MSGBOX_NPC
release
end

NewMap2_Segundo_Gamer_Texto_1:
    .string "traducir$"

NewMap2_Caballero::
lock
faceplayer
msgbox NewMap2_Caballero_Texto_1 MSGBOX_NPC
release
end

NewMap2_Caballero_Texto_1:
	.string "Ich wette, du warst am Überfall auf dem\n"
	.string "MONDBERG beteiligt. Beim nächsten Mal\l"
	.string "fassen sie euch!$"


NewMap2_Chico::
lock
faceplayer
msgbox NewMap2_Chico_Texto_1 MSGBOX_NPC
release
end

NewMap2_Chico_Texto_1:
    .string "traducir$"

NewMap2_Chica_Personalidades::
lock
faceplayer
msgbox NewMap2_Chica_Personalidades_Texto_1 MSGBOX_NPC
release
end

NewMap2_Chica_Personalidades_Texto_1:
.string "Oh, ich passe.\n"
.string "Verbrecher sind nicht mein Typ.$"
