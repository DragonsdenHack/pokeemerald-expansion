BaseRocketHoennS4_MapScripts::
	.byte 0

BaseRocketHoennS4_Carta_Andra::
lock
compare VAR_UNUSED_0x40F7, 218
goto_if_gt BaseRocketHoennS4_Carta_Andra_Despues_Leido
msgbox BaseRocketHoennS4_Carta_Andra_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
setvar VAR_UNUSED_0x40F7, 219
goto BaseRocketHoennS4_Carta_Andra_Leer
release
end

BaseRocketHoennS4_Carta_Andra_Despues_Leido::
msgbox BaseRocketHoennS4_Carta_Andra_Volver_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
goto BaseRocketHoennS4_Carta_Andra_Leer
release
end

BaseRocketHoennS4_Carta_Andra_Leer::
msgbox BaseRocketHoennS4_Carta_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_7.1 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox BaseRocketHoennS4_Carta_Andra_Texto_10 MSGBOX_AUTOCLOSE
release
end

BaseRocketHoennS4_Carta_Andra_Volver_Text_YesNo:
	.string "¿Quieres volver a leer la carta?$"

BaseRocketHoennS4_Carta_Andra_Text_YesNo:
	.string "Es una carta, parece escrita por ANDRA.\n"
	.string "¿Quieres leerla?$"

BaseRocketHoennS4_Carta_Andra_Texto_1:
	.string "{PAUSE 15}…{PAUSE 15}$"

BaseRocketHoennS4_Carta_Andra_Texto_2:
	.string "{PLAYER}, si lees esto, quiere\n"
	.string "decir que te han destinado a\l"
	.string "HOENN para suplir mi puesto, tal\l"
	.string "y como esperaba.$"

BaseRocketHoennS4_Carta_Andra_Texto_3:
	.string "Siento haber actuado de forma egoísta y\n"
	.string "dejar el TEAM ROCKET. No cabe duda de\l"
	.string "que el tuyo es el camino correcto, tu\l"
	.string "espíritu se mantiene inquebrantable, sin\l"
	.string "importar los agentes externos.$"

BaseRocketHoennS4_Carta_Andra_Texto_4:
	.string "En mi caso, debo buscar esa virtud\n"
	.string "alejada de todo en lo que se ha\l"
	.string "convertido nuestro mundo. Es por ello\l"
	.string "que decidí dejar a mi ELECTIVIRE-X.\l"
	.string "Ahora me arrepiento de haberle dado esa\l"
	.string "PIEDRA ROCKET al que fue mi cuarto\l"
	.string "POKÉMON, pero{PAUSE 5}…{PAUSE 5}$"

BaseRocketHoennS4_Carta_Andra_Texto_5:
	.string "…si quiero llegar al final de este\n"
	.string "camino, debo desprenderme de todo\l"
	.string "aquello que malogró la naturalidad y\l"
	.string "pureza de un POKÉMON. Espero que mi\l"
	.string "ELECTIVIRE-X encuentre en ti las\l"
	.string "aventuras que yo ya no puedo darle.$"

BaseRocketHoennS4_Carta_Andra_Texto_6:
	.string "Por otro lado, sé que HOENN es una\n"
	.string "región nueva para ti. GIOVANNI te habrá\l"
	.string "encomendado recopilar información\l"
	.string "sobre KYOGRE y GROUDON, este último ha\l"
	.string "debido volver a lo profundo del MONTE\l"
	.string "CENIZO. Yo empezaría mi travesía por\l"
	.string "ahí, ya que está un poco más al oeste de\l"
	.string "nuestra base.$"

BaseRocketHoennS4_Carta_Andra_Texto_7:
	.string "Para convocar a GROUDON y KYOGRE,\n"
	.string "necesitarás las esferas ROJA y AZUL,\l"
	.string "por suerte pudimos hacer copias que\l"
	.string "actúan como las originales; las tienes\l"
	.string "al lado.$"

BaseRocketHoennS4_Carta_Andra_Texto_7.1:
	.string "Con estos 'ORBES' activarás sus formas\n"
	.string "primigenias, obteniendo así datos para\l"
	.string "lograr clonarlas en un futuro, también{PAUSE 5}…{PAUSE 5}$"

BaseRocketHoennS4_Carta_Andra_Texto_8:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

BaseRocketHoennS4_Carta_Andra_Texto_9:
	.string "Espero, {PLAYER}, que la próxima vez\n"
	.string "que nos veamos estés en disposición de\l"
	.string "hacerme pagar por mis actos, y yo de\l"
	.string "haber encontrado lo que buscaba. En\l"
	.string "ese momento se verá si todo esto ha\l"
	.string "valido la pena.$"

BaseRocketHoennS4_Carta_Andra_Texto_10:
	.string "Firmado: ANDRA, Ex-ADMIN.JEFE de HOENN\n"
	.string "a 25 de marzo de 1999.$"

BaseRocketHoennS3_Ejecutivo::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 217
goto_if_gt BaseRocketHoennS3_Ejecutivo_Despues
msgbox BaseRocketHoennS3_Ejecutivo_Texto_1 MSGBOX_AUTOCLOSE
release
end

BaseRocketHoennS3_Ejecutivo_Despues::
lock
msgbox BaseRocketHoennS3_Ejecutivo_Texto_2 MSGBOX_AUTOCLOSE
release
end

BaseRocketHoennS3_Ejecutivo_Texto_1:
	.string "¡Oh! Es usted el ADMIN.JEFE {PLAYER},\n"
	.string "ANDRA nos ha hablado mucho de usted. Yo\l"
	.string "soy el único EJECUTIVO de esta base, me\l"
	.string "aseguro de que nadie entra al despacho\l"
	.string "de la ADMIN.JEFE ANDRA sin su permiso.$"

BaseRocketHoennS3_Ejecutivo_Texto_2:
	.string "Ahora este despacho también es suyo.\n"
	.string "No se preocupe señor, me encargaré\l"
	.string "personalmente de que nadie entre\l"
	.string "mientras usted recorre HOENN.$"

Llave_Despacho_Hoenn::
msgbox Llave_Despacho_Hoenn_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 217
goto_if_gt Llave_Despacho_Hoenn_Despues
release
end

Llave_Despacho_Hoenn_Texto_1:
	.string "Detrás de esta puerta está el despacho\n"
	.string "privado de ANDRA.$"

Llave_Despacho_Hoenn_Text_YesNo:
	.string "¿Quieres entrar al DESPACHO de HOENN?$"

Llave_Despacho_Hoenn_Text_Salida_YesNo:
	.string "¿Quieres salir del DESPACHO?$"


Llave_Despacho_Hoenn_Despues::
msgbox Llave_Despacho_Hoenn_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
goto Llave_Despacho_Hoenn_Abierto

Llave_Despacho_Hoenn_Despues_Salida::
msgbox Llave_Despacho_Hoenn_Text_Salida_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
goto Llave_Despacho_Hoenn_Abierto


Llave_Despacho_Hoenn_Abierto::
delay 40
playse SE_CARD
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 35, 4, 0x335, FALSE
setmetatile 35, 3, 0x33D, FALSE
setmetatile 36, 3, 0x33C, FALSE
setmetatile 36, 4, 0x334, FALSE
setmetatile 36, 5, 0x334, FALSE
setmetatile 37, 3, 0x334, FALSE
setmetatile 37, 4, 0x334, FALSE
setmetatile 37, 5, 0x334, FALSE
setmetatile 38, 3, 0x334, FALSE
setmetatile 38, 4, 0x334, FALSE
setmetatile 38, 5, 0x334, FALSE
setmetatile 39, 3, 0x33D, FALSE
setmetatile 39, 4, 0x334, FALSE
setmetatile 39, 5, 0x334, FALSE
special DrawWholeMapView
delay 60
release
end

Base_Hoenn_Andra_Electivire::
lock     
showmonpic SPECIES_ELECTIVIRE_X, 10, 3   
playmoncry SPECIES_ELECTIVIRE, CRY_MODE_ENCOUNTER
msgbox Base_Hoenn_Andra_Electivire_Texto_1, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PalletTown_ProfessorLab_Genesect_No
hidemonpic
setflag FLAG_HOENN_20
removeobject 2
playfanfare MUS_OBTAIN_TMHM
msgbox Base_Hoenn_Andra_Electivire_Texto_2, MSGBOX_DEFAULT
givemon SPECIES_ELECTIVIRE_X, 108, ITEM_NONE
waitfanfare
release
end

Base_Hoenn_Andra_Electivire_Texto_2:
	.string "¡¡OBTUVISTE UN ELECTIVIRE-X AL\n"
	.string "NV.108!!$"

Base_Hoenn_Andra_Electivire_Texto_1:
	.string "Es el ELECTIVIRE-X de ANDRA. ¿Quieres\n"
	.string "quedártelo?$"

Base_Hoenn_Esfera_Azul::
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_BLUE_ORB
msgbox Base_Hoenn_Esfera_Azul_Texto_1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_HOENN_21
removeobject 3
release
end

Base_Hoenn_Esfera_Azul_Texto_1:
	.string "¡{PLAYER} obtuvo un\n"
	.string "ORBE AZUL!$"

Base_Hoenn_Esfera_Roja::
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_RED_ORB
msgbox Base_Hoenn_Esfera_Roja_Texto_1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_HOENN_22
removeobject 4
release
end

Base_Hoenn_Esfera_Roja_Texto_1:
	.string "¡{PLAYER} obtuvo un\n"
	.string "ORBE ROJA!$"

