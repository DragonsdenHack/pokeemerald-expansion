PalletTown_Laboratorio_Secreto_S2_MapScripts::
	.byte 0

PalletTown_Laboratorio_Secreto_S2_Diance::
lock
release
end


PalletTown_ProfessorLab_Diance::
lock     
showmonpic SPECIES_DIANCIE, 10, 3   
playmoncry SPECIES_DIANCIE, CRY_MODE_ENCOUNTER
msgbox PalletTown_ProfessorLab_Diance_Texto_1, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PalletTown_ProfessorLab_Diance_No
hidemonpic
setflag FLAG_HOENN_281
removeobject 7
playfanfare MUS_OBTAIN_TMHM
msgbox PalletTown_ProfessorLab_Diance_Texto_3, MSGBOX_DEFAULT
givemon SPECIES_DIANCIE, 100, ITEM_ROCK_GEM
waitfanfare
release
end

PalletTown_ProfessorLab_Diance_Texto_3:
.string "¡{PLAYER} obtuvo un DIANCIE al Nv.100!$"

PalletTown_ProfessorLab_Diance_No::
hidemonpic
release
end

PalletTown_ProfessorLab_Diance_Texto_1:
.string "Esta POKÉ BALL contiene a DIANCIE, un\n"
	.string "raro POKÉMON de una región lejana.\l"
	.string "Parece que han logrado clonar,\l"
	.string "a varios, ¿quieres quedarte\l"
	.string "con este ejemplar?$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Move_1:
emote_exclamation_mark
step_end

PalletTown_Laboratorio_Secreto_S2_Estatua_Despues::
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_10 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S2_Estatua::
lock
delay 15
compare VAR_UNUSED_0x40F8, 29
goto_if_gt PalletTown_Laboratorio_Secreto_S2_Estatua_Despues
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_5, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No 
delay 15
playse SE_CLICK
waitse
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 24, 2, 0
waitfieldeffect FLDEFF_SPARKLE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Laboratorio_Secreto_S2_Estatua_Move_1
waitmovement 0x0
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_6 MSGBOX_AUTOCLOSE
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
waitmoncry
trainerbattle_no_intro TRAINER_TRAINER_719, PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_7
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_FAINT
waitse
delay 30
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 30
release
end

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_1:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_2:
	.string "Puede leerse, grabado en el letrero de\n"
	.string "la estatua:$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_3:
	.string "'Simulador de combate avanzado I.\n"
	.string "Nivel de dificultad: 7.'$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_4:
	.string "Hay un pequeño botón al lado.$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_5:
	.string "¿Lo pulso?$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_6:
	.string "¡La estatua de RHYDON está brillando de\n"
	.string "una forma especial!$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_7:
	.string "… …$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_8:
	.string "El letrero acaba de revelar lo que\n"
	.string "parece una contraseña.$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_9:
	.string "'Viva la nueva KANTO'$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Texto_10:
	.string "Ya peleaste con esta estatua. Su\n"
	.string "clave era: 'Viva la nueva KANTO'.$"

PalletTown_Laboratorio_Secreto_S2_Estatua_Andra::
lock
msgbox PalletTown_Laboratorio_Secreto_S2_Estatua_Andra_Texto_1 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S2_Estatua_Andra_Texto_1:
	.string "Esta es la estatua con la que ANDRA\n"
	.string "combatió. Su contraseña era 'ARCEUS ha\l"
	.string "muerto'.$"

PalletTown_Laboratorio_Secreto_S2_Andra::
lock
msgbox PalletTown_Laboratorio_Secreto_S2_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox PalletTown_Laboratorio_Secreto_S2_Andra_Texto_2 MSGBOX_AUTOCLOSE
release
end

PalletTown_Laboratorio_Secreto_S2_Andra_Texto_1:
	.string "ANDRA: ¿{PLAYER}? Ten cuidado con\n"
	.string "estas estatuas.$"

PalletTown_Laboratorio_Secreto_S2_Andra_Texto_2:
	.string "Si interactúas con ellas se activa un\n"
	.string "sistema de seguridad. Creo que si\l"
	.string "queremos adentrarnos más en el\l"
	.string "laboratorio, deberemos derrotarlas.$"


PalletTown_Laboratorio_Secreto_S2_Primera_Puerta::
lock
delay 10
compare VAR_UNUSED_0x40F8, 29
goto_if_gt PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Despues
msgbox PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Texto_1 MSGBOX_AUTOCLOSE
release
end


PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Texto_1:
	.string "Puede introducirse una clave en la\n"
	.string "puerta. ¿Cuál será?$"

PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Texto_2:
	.string "Introdujiste la clave:\n"
	.string "'Viva la nueva KANTO'.$"

PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Despues::
msgbox PalletTown_Laboratorio_Secreto_S2_Primera_Puerta_Texto_2 MSGBOX_AUTOCLOSE
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 1, 11, 0x282, FALSE
setmetatile 1, 12, 0x282, FALSE
special DrawWholeMapView
delay 20
release
end
