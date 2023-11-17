SsAnne_17F_MapScripts::
	.byte 0

SsAnne17F_1::
lock     
faceplayer     
msgbox SsAnne_17F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne_17F_Text_1:
.string "The party is about to start. It's a\n"
	.string "unique event!$"



SsAnne17F_2::
lock     
faceplayer     
msgbox SsAnne_17F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne_17F_Text_2:
.string "SS.ANNE is also known for its held\n"
	.string "parties.$"
