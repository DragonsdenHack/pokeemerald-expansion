Route1_MapScripts::
	.byte 0

Route1_1::
lock
faceplayer
msgbox Route1_1_Texto_1 MSGBOX_NPC
release
end

Route1_1_Texto_1:
	.string "Give you a promotional POTION? Why\n"
	.string "would I bother about that when you\l"
	.string "can't even enter the shops!$"


Route1_2::
lock     
faceplayer     
msgbox Route1_Text_2, MSGBOX_DEFAULT
release     
end

Route1_Text_2:
	.string "Once LANCE finishes cleaning up, you\n"
	.string "ROCKETS will be forced to run away from\l"
	.string "KANTO like the rats you are.$"



Route1Documento_100::
msgbox Route1Documento_Text_100, MSGBOX_SIGN   
end

Route1Documento_Text_100:
.string "ROUTE 1\n"
    .string "PALLET TOWN - VIRIDIAN CITY$"
