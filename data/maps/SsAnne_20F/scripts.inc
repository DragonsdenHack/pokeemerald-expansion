SsAnne_20F_MapScripts::
	.byte 0

SsAnne20F_1::
lock     
faceplayer     
msgbox SsAnne_20F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne_20F_Text_1:
	.string "It's rude to spy on a girl while she's\n"
	.string "getting ready. Get out of here!$"



SsAnne20F_2::
lock     
faceplayer     
msgbox SsAnne_20F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne_20F_Text_2:
.string "…\n"
.string "We're getting ready\l"
.string "for the big party!\l"
.string "Get out of here, you snoop!$"
