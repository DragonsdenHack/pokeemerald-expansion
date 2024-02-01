Route2_House1_MapScripts::
	.byte 0

Route2House1_1::
lock     
faceplayer     
msgbox Route2_House1_Text_1, MSGBOX_DEFAULT
release     
end

Route2_House1_Text_1:
	.string "When the legal system works as it damn\n"
	.string "it should, you ROCKETS will finally stop\l"
	.string "scavenging the crumbs we leave behind,\l"
	.string "it's the only thing that remains within\l"
	.string "your miserable existence.$"



Route2House1_2::
lock     
faceplayer     
msgbox Route2_House1_Text_2, MSGBOX_DEFAULT
release     
end

Route2_House1_Text_2:
	.string "I would never let my POKÉMON under the\n"
	.string "care of a ROCKET, be sure.$"
