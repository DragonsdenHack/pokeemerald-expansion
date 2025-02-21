PetalburgCity_House2_MapScripts::
	.byte 0

PetalburgCity_House2_EventScript_Woman::
	msgbox PetalburgCity_House2_Text_NormanBecameGymLeader, MSGBOX_NPC
	end

PetalburgCity_House2_EventScript_SchoolKid::
	msgbox PetalburgCity_House2_Text_BattledNormanOnce, MSGBOX_NPC
	end

PetalburgCity_House2_Text_NormanBecameGymLeader:
	.string	"NORMAN se convirtió en el nuevo\n"
	.string	"LÍDER de nuestro GIMNASIO.\p"
	.string	"Creo que se ha traído a toda\n"
	.string	"su familia desde muy lejos.$"

PetalburgCity_House2_Text_BattledNormanOnce:
	.string "I battled NORMAN once, but, whew,\n"
	.string "he was way too strong.\p"
	.string "How would I put it?\p"
	.string "I just got the feeling that he\n"
	.string "lives for POKÉMON.$"

