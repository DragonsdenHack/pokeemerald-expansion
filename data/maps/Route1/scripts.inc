Route1_MapScripts::
	.byte 0

Route1_1::
lock
faceplayer
msgbox Route1_1_Texto_1 MSGBOX_NPC
release
end

Route1_1_Texto_1:
	.string "Dir einen Werbe-TRANK schenken? Warum\n"
	.string "sollte ich das tun, wenn du nicht einmal\l"
	.string "in öffentlichen Läden willkommen bist!$"


Route1_2::
lock     
faceplayer     
msgbox Route1_Text_2, MSGBOX_DEFAULT
release     
end

Route1_Text_2:
	.string "Sobald SIEGFRIED hier mal so richtig\n"
	.string "aufgeräumt hat, werdet ihr von TEAM\l"
	.string "ROCKET gezwungen sein, aus KANTO zu\l"
	.string "fliehen!\p"
	.string "Ganz wie die Ratten, die ihr seid!$"



Route1Documento_100::
msgbox Route1Documento_Text_100, MSGBOX_SIGN   
end

Route1Documento_Text_100:
.string "ROUTE 1\n"
    .string "ALABASTIA - VERTANIA CITY$"
