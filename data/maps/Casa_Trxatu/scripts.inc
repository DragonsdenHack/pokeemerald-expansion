Casa_Trxatu_MapScripts::
	.byte 0


CasaTrxatuDocumento_100::
lock     
showmonpic SPECIES_TRXATU, 10, 3  
playmoncry SPECIES_XATU, CRY_MODE_ENCOUNTER 
msgbox CasaTrxatuDocumento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

CasaTrxatuDocumento_Text_100:
	.string "TRXATU:\p"
	.string "PS: 75\n"
	.string "ATAQUE: 75\l"
	.string "DEFENSA: 75\l"
	.string "ATAQUE ESPECIAL: 115\l"
	.string "DEFENSA ESPECIAL: 115\l"
	.string "VELOCIDAD: 115\l"
	.string "TOTAL: 570$"
