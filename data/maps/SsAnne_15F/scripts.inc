SsAnne_15F_MapScripts::
	.byte 0

SsAnne15F_1::
lock
faceplayer
msgbox SsAnne15F_1_Texto_1 MSGBOX_NPC
showmonpic SPECIES_SNORLAX, 10, 3   
playmoncry SPECIES_SNORLAX, CRY_MODE_ENCOUNTER
waitmoncry
delay 40
hidemonpic
release
end

SsAnne15F_1_Texto_1:
.string "Even I have made countless travels, I've\n"
	.string "never saw such a big POKÉMON. It was\l"
	.string "like this big.$"
