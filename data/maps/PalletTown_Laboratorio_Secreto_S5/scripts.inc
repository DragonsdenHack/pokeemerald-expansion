PalletTown_Laboratorio_Secreto_S5_MapScripts::
	.byte 0

PalletTown_Laboratorio_Secreto_S5_Puerta::
lock
delay 10
compare VAR_UNUSED_0x40F8, 35
goto_if_gt PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S3_Primera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'Viva la nueva KANTO'.$"

PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Despues::
msgbox PalletTown_Laboratorio_Secreto_S5_Primera_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 36, 6, 0x282, FALSE
setmetatile 36, 5, 0x282, FALSE
special DrawWholeMapView
delay 20
release
end