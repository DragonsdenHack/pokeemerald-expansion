Pass_Route34_MapScripts::
	.byte 0

PassRoute34_1::
lock     
faceplayer     
msgbox Pass_Route34_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route34_Text_1:
	.string "Have you seen the shrine in honor of\n"
	.string "the guardian? It has been protecting\l"
	.string "the forest since ancient times. Legend\l"
	.string "has it that it's a GRASS-TYPE POKÉMON.$"
