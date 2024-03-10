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
.string "Tienes pinta de estar cansado,\n"
	.string "deja que cure a tu equipo…$"

Route26House1_Texto_2:
.string "¡Y listo!\n"
	.string "¡Todos tus POKÉMON están en plena\l"
	.string "forma de nuevo!$"
