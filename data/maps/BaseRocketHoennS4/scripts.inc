BaseRocketHoennS4_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, BaseRocketHoennS4_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, BaseRocketHoennS4_Disguise_Player_OnResume
	.byte 0

BaseRocketHoennS4_OnFrame:
map_script_2 VAR_UNUSED_0x40FA, 21, BaseRocketHoennS4_Disguise_Player_3
	.2byte 0

BaseRocketHoennS4_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40FA, 20, BaseRocketHoennS4_Disguise_Player_2
	.2byte 0

BaseRocketHoennS4_Disguise_Player_2::
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40FA, 21
end

BaseRocketHoennS4_Disguise_Player_3::
delay 40
playfanfare MUS_OBTAIN_SYMBOL
msgbox BaseRocketHoennS4_Mision_Johto_Text_29.1 MSGBOX_DEFAULT
waitfanfare
setvar VAR_UNUSED_0x40FA, 0
release
end

BaseRocketHoennS4_Mision_Johto_Text_29.1:
.string "¡¡{PLAYER} fue ascendido a ADMIN\n"
	.string "JEFE DE JOHTO Y HOENN!!$"


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

Base_Hoenn_Ascenso::
lock
msgbox Base_Hoenn_Ascenso_Texto_1 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Ascenso_Texto_2 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Ascenso_Texto_3 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_30
removeobject 5
playse SE_M_COSMIC_POWER
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 5
setvar VAR_UNUSED_0x40FA, 20
warpsilent MAP_BASE_ROCKET_HOENN_S4, 8, 7
release
end

Base_Hoenn_Ascenso_Texto_1:
	.string "Es un uniforme especial, viene con una\n"
	.string "carta de GIOVANNI.$"

Base_Hoenn_Ascenso_Texto_2:
	.string "{PLAYER}, ahora no solo comandas\n"
	.string "JOHTO. También HOENN.$"

Base_Hoenn_Ascenso_Texto_3:
	.string "Por ello decidí mandar un nuevo\n"
	.string "uniforme para celebrarlo. Espero que\l"
	.string "sirva de motivación para lo que viene.$"

Base_Hoenn_Andra::
lock
msgbox Base_Hoenn_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_10 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_13 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_14 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_15 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_16 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_17 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_18 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_19 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_20 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_21 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_22 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_23 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_24 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_25 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_26 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_27 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_28 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_29 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_30 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_31 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_32 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_33 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_34 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_35 MSGBOX_AUTOCLOSE
msgbox Base_Hoenn_Andra_Texto_36 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
clearflag FLAG_NUEVA_165
clearflag FLAG_NUEVA_136
clearflag FLAG_NUEVA_133
clearflag FLAG_NUEVA_137
clearflag FLAG_NUEVA_144
clearflag FLAG_NUEVA_147
clearflag FLAG_NUEVA_152
clearflag FLAG_NUEVA_153
clearflag FLAG_NUEVA_154
clearflag FLAG_NUEVA_155
clearflag FLAG_NUEVA_156
clearflag FLAG_NUEVA_159
clearflag FLAG_NUEVA_511
clearflag FLAG_NUEVA_512
clearflag FLAG_NUEVA_513
clearflag FLAG_NUEVA_514
clearflag FLAG_NUEVA_626
clearflag FLAG_NUEVA_627
clearflag FLAG_NUEVA_628
clearflag FLAG_NUEVA_629
clearflag FLAG_NUEVA_630
clearflag FLAG_NUEVA_631
clearflag FLAG_NUEVA_632
release
end

Base_Hoenn_Andra_Texto_1:
	.string "Dime, {PLAYER}.$"

Base_Hoenn_Andra_Texto_2:
	.string "¿No has tenido nunca la sensación de\n"
	.string "estar… perdiéndote algo?$"

Base_Hoenn_Andra_Texto_3:
	.string "¿De tener una corazonada e ignorarla\n"
	.string "porque, en caso de ser cierta,\l"
	.string "desmoronaría los pilares del mundo que\l"
	.string "crees conocer?$"

Base_Hoenn_Andra_Texto_4:
	.string "Echo la vista atrás y me doy cuenta de\n"
	.string "lo intensos que han sido estos tres\l"
	.string "años.$"

Base_Hoenn_Andra_Texto_5:
	.string "Demasiados eventos como para no pasar\n"
	.string "por alto muchos de sus matices.$"

Base_Hoenn_Andra_Texto_6:
	.string "Estuvimos en la caída de LANCE, vimos\n"
	.string "las dos caras de PUEBLO LAVANDA, los\l"
	.string "últimos grandes maestros de JOHTO…$"

Base_Hoenn_Andra_Texto_7:
	.string "Participamos también en las primeras\n"
	.string "reuniones de CIUDAD TRIGAL…$"

Base_Hoenn_Andra_Texto_8:
	.string "…ahí vimos de primera mano cómo hay\n"
	.string "secretos que las masas jamás\l"
	.string "conocerán, y tal vez no deban conocer.$"

Base_Hoenn_Andra_Texto_9:
	.string "Muchos de esos secretos, enfrente de\n"
	.string "sus narices. Conviven con ellos en su\l"
	.string "día a día.$"

Base_Hoenn_Andra_Texto_10:
	.string "Eso me llevó a preguntarme…$"

Base_Hoenn_Andra_Texto_11:
	.string "¿No habremos estado nosotros también\n"
	.string "pasando por alto el verdadero devenir\l"
	.string "de esta región?$"

Base_Hoenn_Andra_Texto_12:
	.string "La KANTO-JOHTO que conocemos se\n"
	.string "acerca mucho más a la realidad que la\l"
	.string "KANTO-JOHTO que cree conocer el\l"
	.string "ciudadano medio, no hay duda.$"

Base_Hoenn_Andra_Texto_13:
	.string "Pero…$"

Base_Hoenn_Andra_Texto_14:
	.string "¿Es nuestra visión de KANTO-JOHTO\n"
	.string "totalmente fiel a la verdad? ¿O estamos\l"
	.string "aún en una capa inferior de esta?$"

Base_Hoenn_Andra_Texto_15:
	.string "Superior a otras capas tal vez, pero\n"
	.string "insuficiente como para asomarnos a la\l"
	.string "superficie.$"

Base_Hoenn_Andra_Texto_16:
	.string "De ser así, y teniendo ya el mundo a tus\n"
	.string "pies ¿arriesgarías tu posición solo\l"
	.string "para poner a prueba la realidad? ¿Para\l"
	.string "confirmar que no vives más que en una\l"
	.string "feliz ignorancia?$"

Base_Hoenn_Andra_Texto_17:
	.string "Lo que voy a proponerte te parecerá\n"
	.string "una locura, pero…$"

Base_Hoenn_Andra_Texto_18:
	.string "El único rincón de toda KANTO y JOHTO\n"
	.string "que aún no hemos explorado a fondo es…$"

Base_Hoenn_Andra_Texto_19:
	.string "… …$"

Base_Hoenn_Andra_Texto_20:
	.string "PUEBLO PALETA.$"

Base_Hoenn_Andra_Texto_21:
	.string "¿No lo recuerdas? Una de tus primeras\n"
	.string "misiones al mando de GIOVANNI.$"

Base_Hoenn_Andra_Texto_22:
	.string "En ese lugar viste algo… viste cómo OAK\n"
	.string "se esfumaba en tus narices.$"

Base_Hoenn_Andra_Texto_23:
	.string "Eso bastó para confirmar las sospechas\n"
	.string "de GIOVANNI y dar por concluída tu\l"
	.string "búsqueda. Pero jamás profundizamos en\l"
	.string "ello.$"

Base_Hoenn_Andra_Texto_24:
	.string "La euforia por ir tras las AVES\n"
	.string "LEGENDARIAS acaparó toda nuestra\l"
	.string "atención.$"

Base_Hoenn_Andra_Texto_25:
	.string "Y así, nuevos y nuevos eventos, en una\n"
	.string "gran cadena que se extiende hasta hoy\l"
	.string "y que jamás nos ha dejado echar la\l"
	.string "vista atrás.$"

Base_Hoenn_Andra_Texto_26:
	.string "Lo que te pido es muy simple.$"

Base_Hoenn_Andra_Texto_27:
	.string "Hace 3 años dejaste esa misión a\n"
	.string "medias; y vas a venir conmigo, a PUEBLO\l"
	.string "PALETA, para completarla al 100% y\l"
	.string "desvelar todos sus secretos.$"

Base_Hoenn_Andra_Texto_28:
	.string "… …$"

Base_Hoenn_Andra_Texto_29:
	.string "¿OAK?$"

Base_Hoenn_Andra_Texto_30:
	.string "No te preocupes. El EJECUTIVO de la\n"
	.string "base me ha puesto al día.$"

Base_Hoenn_Andra_Texto_31:
	.string "Hace poco celebraron la III REUNIÓN de\n"
	.string "CIUDAD TRIGAL.$"

Base_Hoenn_Andra_Texto_32:
	.string "Después, fueron a PUEBLO CAOBA. Parece\n"
	.string "que la tecnología de ondas de radio\l"
	.string "mencionada en la II REUNIÓN ha pasado\l"
	.string "al siguiente nivel.$"

Base_Hoenn_Andra_Texto_33:
	.string "Ahora, están en la BASE CAOBA\n"
	.string "realizando más pruebas.$"

Base_Hoenn_Andra_Texto_34:
	.string "GIOVANNI, OAK, ATLAS, ELM… y parece que\n"
	.string "ahí seguirán por un buen tiempo.$"

Base_Hoenn_Andra_Texto_35:
	.string "Es el momento perfecto: PUEBLO PALETA\n"
	.string "estará desierto.$"

Base_Hoenn_Andra_Texto_36:
	.string "Ahí te espero. Veremos… si hay un último\n"
	.string "misterio escondido tras el velo.$"



