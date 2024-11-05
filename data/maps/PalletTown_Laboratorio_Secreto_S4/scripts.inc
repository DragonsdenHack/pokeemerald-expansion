PalletTown_Laboratorio_Secreto_S4_MapScripts::
	.byte 0

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua::
lock
compare VAR_UNUSED_0x40F8, 36
goto_if_gt PalletTown_Laboratorio_Secreto_S4_Segunda_Estatua_Despues
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_5 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No 
delay 15
playse SE_CLICK
waitse
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 6, 17, 0
waitfieldeffect FLDEFF_SPARKLE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S2_Estatua_Move_1
waitmovement 0x0
waitse
delay 10
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_6 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_722, PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_7
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 30
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 37
release
end

PalletTown_Laboratorio_Secreto_S4_Segunda_Estatua_Despues:
msgbox PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_10 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_2:
	.string "Puede leerse, grabado en el letrero de\n"
	.string "la estatua:$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_3:
	.string "'Simulador de combate avanzado VI.\n"
	.string "Nivel de dificultad: 10.'$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_4:
	.string "Hay un pequeño botón al lado.$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_5:
	.string "¿Lo pulso?$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_6:
	.string "¡La estatua de RHYDON está brillando de\n"
	.string "una forma especial!$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_7:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_8:
	.string "El letrero acaba de revelar lo que\n"
	.string "parece una contraseña.$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_9:
	.string "'Ahora eres KANTO.'$"

PalletTown_Laboratorio_Secreto_S4_Primera_Estatua_Texto_10:
	.string "Ya peleaste con esta estatua.\n"
	.string "Su contraseña era:\l"
	.string "'Ahora eres KANTO'$"

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta::
delay 10
compare VAR_UNUSED_0x40F8, 36
goto_if_gt PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_1:
	.string "Puede introducirse una clave en la\n"
	.string "puerta. ¿Cuál será?$"

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'Ahora eres KANTO'.$"

PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Despues::
msgbox PalletTown_Laboratorio_Secreto_S4_Tercera_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 10, 14, 0x282, FALSE
setmetatile 10, 13, 0x282, FALSE
setmetatile 11, 13, 0x281, FALSE
setmetatile 11, 14, 0x281, FALSE
setmetatile 11, 15, 0x281, FALSE
special DrawWholeMapView
delay 20
release
end

