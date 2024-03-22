SsAnne_20F_MapScripts::
	.byte 0

SsAnne20F_1::
lock     
faceplayer     
msgbox SsAnne_20F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne_20F_Text_1:
.string "It's not OK to spy on a girl while getting\n"
	.string "dressed up. Get out!$"



SsAnne20F_2::
lock     
faceplayer     
msgbox SsAnne_20F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne_20F_Text_2:
.string "…\n"
.string "We're getting dressed up\l"
.string "for the great party!!\l"
.string "Get out, you busybody!$"
