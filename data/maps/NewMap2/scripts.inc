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
    .string "I really want a PIKACHU, so I'm\n"
    .string "trading my CLEFAIRY for one.$"

NewMap2_Segundo_Gamer::
lock
faceplayer
msgbox NewMap2_Segundo_Gamer_Texto_1 MSGBOX_NPC
release
end

NewMap2_Segundo_Gamer_Texto_1:
    .string "I'm trading POKéMON with that kid\n"
    .string "there.\p"
    .string "I had two PIKACHU, so I figured\n"
    .string "I might as well trade one.$"

NewMap2_Caballero::
lock
faceplayer
msgbox NewMap2_Caballero_Texto_1 MSGBOX_NPC
release
end

NewMap2_Caballero_Texto_1:
.string "You look like you've participated in the\n"
.string "robbery of MT.MOON. Next time, you'll all\l"
.string "be apprehended!$"


NewMap2_Chico::
lock
faceplayer
msgbox NewMap2_Chico_Texto_1 MSGBOX_NPC
release
end

NewMap2_Chico_Texto_1:
    .string "Yawn!\p"
    .string "When JIGGLYPUFF sings, POKéMON get\n"
    .string "drowsy…\p"
    .string "…Me, too…\n"
    .string "Snore…$"

NewMap2_Chica_Personalidades::
lock
faceplayer
msgbox NewMap2_Chica_Personalidades_Texto_1 MSGBOX_NPC
release
end

NewMap2_Chica_Personalidades_Texto_1:
.string "Oh, don't get closer! People who go against\n"
.string "society don't suit my\l"
.string "personality.$"
