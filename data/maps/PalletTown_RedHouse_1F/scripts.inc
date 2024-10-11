PalletTown_RedHouse_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_RedHouse_1F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, PalletTown_RedHouse_1F_OnFrame
    .byte 0

PalletTown_RedHouse_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40FA, 0, PalletTown_RedHouse_1F_Encuentro_Madre
map_script_2 VAR_UNUSED_0x40F8, 24, PalletTown_RedHouse_Andra
	.2byte 0

PalletTown_RedHouse_1F_Encuentro_Madre::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_RedHouse_1F_Encuentro_Madre_Move_1.1
waitmovement 0x0
playse SE_PIN
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_1
waitmovement 0x0
delay 10
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_2
waitmovement 0x0
msgbox PalletTown_RedHouse_1F_Encuentro_Madre_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_3
waitmovement 0x0
msgbox PalletTown_RedHouse_1F_Encuentro_Madre_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, PalletTown_RedHouse_1F_Encuentro_Madre_Move_4
waitmovement 0x0
msgbox PalletTown_RedHouse_1F_Encuentro_Madre_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_RedHouse_1F_Encuentro_Madre_Move_2
waitmovement 0x0
warp MAP_PALLET_TOWN, 6, 8
delay 50
release
end


PalletTown_RedHouse_1F_Encuentro_Madre_Texto_1:
.string "¿Cómo?\n"
	.string "¿ROJO?\l"
	.string "No, no está aquí.$"

PalletTown_RedHouse_1F_Encuentro_Madre_Texto_2:
.string "… … … … … … …{PAUSE 5}$"

PalletTown_RedHouse_1F_Encuentro_Madre_Texto_3:
.string "Perdona pero estoy ocupada, te\n"
	.string "agradecería que me dejases sola,\l"
	.string "gracias.$"

PalletTown_RedHouse_1F_Encuentro_Madre_Move_1:
emote_exclamation_mark
face_right
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_1.1:
face_up
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_2:
walk_in_place_down
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_3:
walk_in_place_left
step_end

PalletTown_RedHouse_1F_Encuentro_Madre_Move_4:
walk_down
step_end

PalletTown_RedHouse_Andra::
lock
msgbox PalletTown_RedHouse_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_8 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_11 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_13 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_14 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_15 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_16 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_17 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_18 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_19 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_20 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_21 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_22 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_23 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_24 MSGBOX_AUTOCLOSE
msgbox PalletTown_RedHouse_Andra_Texto_25 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 25
release
end

PalletTown_RedHouse_Andra_Texto_1:
	.string "ANDRA: Es usted la madre de ROJO,\n"
	.string "¿verdad?$"

PalletTown_RedHouse_Andra_Texto_2:
	.string "Somos ayudantes de OAK, ¿le importar…?$"

PalletTown_RedHouse_Andra_Texto_3:
	.string "M.ROJO: ¡Hola!$"

PalletTown_RedHouse_Andra_Texto_4:
	.string "ROJO lleva fuera mucho tiempo.$"

PalletTown_RedHouse_Andra_Texto_5:
	.string "Tampoco ha llamado, así que no sé dónde\n"
	.string "está, ni lo que ha estado haciendo.$"

PalletTown_RedHouse_Andra_Texto_6:
	.string "Dicen que si no hay noticias es que todo\n"
	.string "va bien, pero estoy preocupada por él.$"

PalletTown_RedHouse_Andra_Texto_7:
	.string "ANDRA: Nosotros sabemos dónde está,\n"
	.string "lleva casi 3 años en el MONTE PLATEADO.$"

PalletTown_RedHouse_Andra_Texto_8:
	.string "Honestamente, debería replantearse su\n"
	.string "entrenamiento, pero no hemos venido\l"
	.string "aquí por eso.$"

PalletTown_RedHouse_Andra_Texto_9:
	.string "Verá, me gustaría saber…$"

PalletTown_RedHouse_Andra_Texto_10:
	.string "M.ROJO: ¡Hola!$"

PalletTown_RedHouse_Andra_Texto_11:
	.string "ROJO lleva fuera mucho tiempo.$"

PalletTown_RedHouse_Andra_Texto_12:
	.string "Tampoco ha llamado, así que no sé dónde\n"
	.string "está, ni lo que ha estado haciendo.$"

PalletTown_RedHouse_Andra_Texto_13:
	.string "Dicen que si no hay noticias es que todo\n"
	.string "va bien, pero estoy preocupada por él.$"

PalletTown_RedHouse_Andra_Texto_14:
	.string "ANDRA: S-sí, eso ya lo ha dicho antes.$"

PalletTown_RedHouse_Andra_Texto_15:
	.string "No se preocupe por su hijo, lo hemos\n"
	.string "visto y está bien.$"

PalletTown_RedHouse_Andra_Texto_16:
	.string "Como ayudante de OAK, quisiera…$"

PalletTown_RedHouse_Andra_Texto_17:
	.string "M.ROJO: ¡Hola!$"

PalletTown_RedHouse_Andra_Texto_18:
	.string "ROJO lleva fuera mucho tiempo.$"

PalletTown_RedHouse_Andra_Texto_19:
	.string "Tampoco ha llamado, así que no sé dónde\n"
	.string "está, ni lo que ha estado haciendo.$"

PalletTown_RedHouse_Andra_Texto_20:
	.string "Dicen que si no hay noticias es que todo\n"
	.string "va bien, pero estoy preocupada por él.$"

PalletTown_RedHouse_Andra_Texto_21:
	.string "ANDRA: ¿Por qué…?$"

PalletTown_RedHouse_Andra_Texto_22:
	.string "Muy bien, nos ha quedado claro.$"

PalletTown_RedHouse_Andra_Texto_23:
	.string "No parece que quiera colaborar. Puede\n"
	.string "que tantos años sin salir de PUEBLO\l"
	.string "PALETA le hayan vuelto algo asocial.$"

PalletTown_RedHouse_Andra_Texto_24:
	.string "No nos queda más remedio\n"
	.string "que ir al grano.$"

PalletTown_RedHouse_Andra_Texto_25:
	.string "Nos vemos en el LABORATORIO de OAK.$"
