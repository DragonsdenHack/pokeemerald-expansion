LavenderTown_Mart_MapScripts::
	.byte 0

LavenderTownMart_1::
end



LavenderTownMart_2::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_2, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_2:
	.string "Manchmal fordert sich ein TRAINER-Duo\n"
	.string "mit zwei POKéMON zum Kampf heraus. In\l"
	.string "diesem Fall musst du auch zwei POKéMON\l"
	.string "in den Kampf schicken!$"

LavenderTownMart_3::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_3:
    .string "Kennst du den BELEBER?\p"
	.string "Damit kannst du bereits besiegten\n"
	.string "POKéMON wieder Kraft geben!$"

LavenderTownMart_4::
lock     
faceplayer     
msgbox LavenderTown_Mart_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_Mart_Text_4:
	.string "Ich suche nach Items, die die\n"
	.string "Fähigkeiten meiner POKéMON während\l"
	.string "eines Kampfes verbessern!\p"
	.string "Zum Beispiel X-ANGRIFF, X-ABWEHR,\n"
	.string "X-TEMPO und X-SPEZIAL.\p"
	.string "Weißt du, wo ich sie kaufen kann?$"
