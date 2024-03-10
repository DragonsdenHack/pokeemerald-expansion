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
.string "Quiero un PIKACHU, así que\n"
	.string "intercambiaré mi CLEFAIRY por uno.$"

NewMap2_Segundo_Gamer::
lock
faceplayer
msgbox NewMap2_Segundo_Gamer_Texto_1 MSGBOX_NPC
release
end

NewMap2_Segundo_Gamer_Texto_1:
.string "Estoy intercambiando POKÉMON con el\n"
	.string "chico de al lado. Tengo dos PIKACHU, de\l"
	.string "modo que no tengo problema en\l"
	.string "intercambiar uno.$"

NewMap2_Caballero::
lock
faceplayer
msgbox NewMap2_Caballero_Texto_1 MSGBOX_NPC
release
end

NewMap2_Caballero_Texto_1:
.string "Tienes pinta de haber participado en el\n"
	.string "robo del MT.MOON. ¡La próxima vez os\l"
	.string "apresarán a todos!$"


NewMap2_Chico::
lock
faceplayer
msgbox NewMap2_Chico_Texto_1 MSGBOX_NPC
release
end

NewMap2_Chico_Texto_1:
	.string "Cuando JIGGLYPUFF canta, los POKÉMON\n"
	.string "se duermen y… también los humanos. Qué\l"
	.string "sueño…$"

NewMap2_Chica_Personalidades::
lock
faceplayer
msgbox NewMap2_Chica_Personalidades_Texto_1 MSGBOX_NPC
release
end

NewMap2_Chica_Personalidades_Texto_1:
.string "¡Oh, no te acerques! La gente que va en\n"
	.string "contra de la sociedad no conviene a mi\l"
	.string "personalidad.$"
