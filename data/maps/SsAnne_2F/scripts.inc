SsAnne_2F_MapScripts::
	.byte 0

SsAnne2F_1::
lock     
faceplayer     
msgbox SsAnne2F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_1:
	.string "It's pretty uncommon to see people with\n"
	.string "those clothes around here. Is it a\l"
	.string "custom of any town in this region at\l"
	.string "all?$"



SsAnne2F_2::
lock     
faceplayer     
msgbox SsAnne2F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne2F_Text_2:
.string "The S.S. ANNE luxury party is matchless.$"
