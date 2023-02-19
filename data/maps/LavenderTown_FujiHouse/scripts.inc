LavenderTown_FujiHouse_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, LavenderTown_FujiHouse_OnFrame
	.byte 0

LavenderTown_FujiHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 77, LavenderTown_FujiHouse_Escena_7_Detencion_Fuji
	.2byte 0

FujiHouse1::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_1, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_1:
.string "¡Ahhhhh!\n"
.string "¡No me hagas daño por favor!$"



FujiHouse2::
end



FujiHouse3::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_3, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_3:
.string "¡No, aléjate de aquí ROCKET!\n"
.string "¡Si FUJI te estuviera aquí verías\l"
.string "lo que es bueno!$"



FujiHouse4::
lock     
faceplayer     
msgbox LavenderTown_FujiHouse_Text_4, MSGBOX_DEFAULT
release     
end

LavenderTown_FujiHouse_Text_4:
.string "El señor FUJI no está aquí, y\n"
.string "aunque lo estuviera dudo mucho que\l"
.string "quisiera recibir a un ROCKET como\l"
.string "invitado.$"



FujiHouse5::
end



FujiHouseDocumento_100::
msgbox FujiHouseDocumento_Text_100, MSGBOX_SIGN   
end

FujiHouseDocumento_Text_100:
.string "REVISTA POKéMON\n"
	.string "¡Gran concurso mensual de dibujo\l"
	.string "POKéMON!\p"
	.string "El formulario de inscripción está\n"
	.string "en...\p"
	.string "¡Anda, se lo han llevado!\n"
	.string "¡Se ha debido de inscribir alguien!$"



FujiHouseDocumento_101::
msgbox FujiHouseDocumento_Text_101, MSGBOX_SIGN   
end

FujiHouseDocumento_Text_101:
	.string "¡Revistas de los POKéMON!\p"
	.string "¡Cuadernos de los POKéMON!\p"
	.string "¡Dibujos de los POKéMON!$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji::
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_1 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_2 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_3 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_4 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_5 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_6 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_7 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_8 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_9 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_10 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_11 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_12 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_13 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_14 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_15 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_16 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_17 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_18 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_19 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_20 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_21 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_22 MSGBOX_NPC
msgbox LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_23 MSGBOX_NPC
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_MR_BRINEY_DEWFORD_TOWN
setvar VAR_UNUSED_0x40F7, 78
release
end

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_1:
.string "PROTÓN: Así es, FUJI. Muy pronto\n"
	.string "tendremos clones de las AVES\l"
	.string "LEGENDARIAS a nuestra disposición.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_2:
.string "FUJI: Incluso con esos POKÉMON\n"
	.string "sagrados… puede que no sea suficiente,\l"
	.string "LANCE cuenta también con un poder\l"
	.string "legendario. BLAINE me lo ha confirmado.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_3:
.string "PROTÓN: … …$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_4:
.string "Con MEWTWO todo sería diferente.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_5:
.string "FUJI: Después del desastre de CANELA,\n"
	.string "desapareció sin dejar rastro. Crear\l"
	.string "otro es una posibilidad, pero llevaría\l"
	.string "demasiado tiempo, especialmente sin la\l"
	.string "ayuda de OAK.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_6:
.string "PROTÓN: Ese OAK… puede que incluso\n"
	.string "sepa dónde está.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_7:
.string "FUJI: Si alguien tiene una remota idea,\n"
	.string "es él. Debemos confiar en GIOVANNI y en\l"
	.string "su maestría para trazar planes.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_8:
.string "Rezaré en TORRE POKÉMON por el futuro\n"
	.string "de KANTO, si todo va b…$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_9:
.string "????: Ya tendrás tiempo de rezar en la\n"
	.string "cárcel, FUJI.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_10:
.string "LT.SURGE: Aunque no hará falta, KANTO\n"
	.string "ya está en buenas manos.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_11:
.string "PROTÓN: ¡SURGE! ¿Qué haces tú aquí?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_12:
.string "LT.SURGE: Entonces hoy estamos de\n"
	.string "oferta, un alto cargo del TEAM ROCKET\l"
	.string "también. Esto sí que no me lo esperaba.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_13:
.string "FUJI: ¿Qué es lo que quieres?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_14:
.string "LT.SURGE: Quedas detenido por\n"
	.string "colaborar y proporcionar valiosa\l"
	.string "información a la banda criminal TEAM\l"
	.string "ROCKET.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_15:
.string "PROTÓN: ¿De qué estás hablando?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_16:
.string "LT.SURGE: Los dos váis a venir conmigo.\n"
	.string "¿Qué eres? ¿ALTO RANGO? ¿EJECUTIVO?\l"
	.string "Vamos a disfrutar mucho en el\l"
	.string "interrogatorio.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_17:
.string "PROTÓN: No vamos a ir a ninguna parte.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_18:
.string "LT.SURGE: Vuestro error es pensar que\n"
	.string "tenéis elección.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_19:
.string "O venís por las buenas o entonc…$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_20:
.string "PROTÓN: ¡SLOWBRO! ¡TELETRANSPORTE!$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_21:
.string "LT.SURGE: Maldito… un ROCKET con un\n"
	.string "SLOWBRO, seguro que ni siquiera es de\l"
	.string "KANTO.$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_22:
.string "Tú no escaparás FUJI, una pena que\n"
	.string "CUERDA HUIDA no funcione aquí,\l"
	.string "¿verdad?$"

LavenderTown_FujiHouse_Escena_7_Detencion_Fuji_Texto_23:
.string "FUJI: … …$"

	