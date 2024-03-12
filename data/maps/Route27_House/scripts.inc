Route27_House_MapScripts::
	.byte 0

Route27House1::
lock     
faceplayer     
msgbox Route27_House1_Text_1, MSGBOX_DEFAULT
release     
end

Route27_House1_Text_1:
	.string "Both humans and POKÉMON benefit from\n"
	.string "experience. Avoid laziness and\l"
	.string "complacency.$"
