SsAnne_17F_MapScripts::
	.byte 0

SsAnne17F_1::
lock     
faceplayer     
msgbox SsAnne_17F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne_17F_Text_1:
.string "The party must be about to start.\n"
	.string "It's a one-of-a-kind event!$"



SsAnne17F_2::
lock     
faceplayer     
msgbox SsAnne_17F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne_17F_Text_2:
	.string "The SS Anne is famous for the\n"
	.string "extraordinary parties held on board!$"
