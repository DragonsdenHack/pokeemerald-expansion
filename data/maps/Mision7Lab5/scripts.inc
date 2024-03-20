Mision7Lab5_MapScripts::
	.byte 0

Mision7Lab5_Documento_100::
lock     
showmonpic SPECIES_NIDOGOD, 10, 3  
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER 
msgbox Mision7Lab5_Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Mision7Lab5_Documento_Text_100:
.string "NIDOGOD:\p"
	.string "HP: 111\n"
	.string "ATTACK: 172\l"
	.string "DEFENSE: 147\l"
	.string "SPECIAL ATTACK: 85\l"
	.string "SPECIAL DEFENSE: 115\l"
	.string "SPEED: 50\l"
	.string "TOTAL: 680\p"
	.string "POISON/STEEL\n"
	.string "First successful prototype employing\l"
	.string "radio wave technology… … … … … Confirm\l"
	.string "that the stat increase is +150\l"
	.string "compared to the original NIDOKING,\l"
	.string "surpassing NIDOKING-X by 50 points\l"
	.string "with little loss of efficiency. It has\l"
	.string "been designed to act as a tank, capable\l"
	.string "of taking down POKÉMON that many\l"
	.string "others couldn't, thanks to its armored\l"
	.string "defense and brute strength superior to\l"
	.string "MEGA-GARCHOMP.$"

Mision7Lab5_Documento_101::
lock     
showmonpic SPECIES_MEWTWO_ARM, 10, 3  
playmoncry SPECIES_MEWTWO, CRY_MODE_ENCOUNTER 
msgbox Mision7Lab5_Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Mision7Lab5_Documento_Text_101:
.string "MEWTWO-ARM:\p"
	.string "HP: 106\n"
	.string "ATTACK: 120\l"
	.string "DEFENSE: 140\l"
	.string "SPECIAL ATTACK: 164\l"
	.string "SPECIAL DEFENSE: 140\l"
	.string "SPEED: 110\l"
	.string "TOTAL: 780\p"
	.string "TYPE: PSYCHIC/STEEL\n"
	.string "ABILITY: FILTRER\l"
	.string "After numerous attempts, we managed to\l"
	.string "reproduce the +100 BASE STATS increase\l"
	.string "of prototypes X and Y in MEWTWO…\l"
	.string "without the need to create a MEGA\l"
	.string "STONE. Thanks to its custom-made\l"
	.string "armor, it will dramatically boost its\l"
	.string "defenses, while slightly increasing its\l"
	.string "offense, only at the cost of losing\l"
	.string "some SPEED. Its physical offensive\l"
	.string "capability is inferior to the special\l"
	.string "one; however, certain tests indicate\l"
	.string "that its greatest destructive capacity\l"
	.string "may lie here… with the right\l"
	.string "enhancement…$"
