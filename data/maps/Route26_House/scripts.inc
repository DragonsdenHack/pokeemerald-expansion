Route26_House_MapScripts::
	.byte 0

Route26House1::
lock
faceplayer
msgbox Route26House1_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
msgbox Route26House1_Texto_2 MSGBOX_AUTOCLOSE
end

Route26House1_Texto_1:
.string "Your POKÉMON look a little tired.\n"
	.string "You should rest them a while.$"

Route26House1_Texto_2:
.string "There!\n"
	.string "Your POKÉMON are looking good! \l"
	.string "Keep at it!$"
