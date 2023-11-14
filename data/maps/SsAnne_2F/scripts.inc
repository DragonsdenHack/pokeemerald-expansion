SsAnne_2F_MapScripts::
	.byte 0

SsAnne2F_1::
lock     
faceplayer     
msgbox SsAnne2F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_1:
.string "It is not common to see people around\n"
	.string "here with those clothes. Is it some kind\l"
	.string "of habit in any town in this region?$"



SsAnne2F_2::
lock     
faceplayer     
msgbox SsAnne2F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_2:
.string "The SS.ANNE luxury party is matchless.$"
