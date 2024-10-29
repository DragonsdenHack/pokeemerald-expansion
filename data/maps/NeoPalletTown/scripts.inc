NeoPalletTown_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, NeoPalletTown_OnFrame
    .byte 0

NeoPalletTown_OnFrame:
map_script_2 VAR_UNUSED_0x40F8, 26, PalletTown_Andra_Despues
	.2byte 0

NeoPalletTown_Primer_Npc::
lock
faceplayer
msgbox NeoPalletTown_Primer_Npc_Texto_1 MSGBOX_NPC
release
end

NeoPalletTown_Primer_Npc_Texto_1:
.string "Yo también entreno POKÉMON. Son mis\n"
	.string "guardaespaldas personales.$"



NeoPalletTown_Segundo_Npc::
lock
faceplayer
msgbox NeoPalletTown_Segundo_Npc_Texto_1 MSGBOX_NPC
release
end

NeoPalletTown_Segundo_Npc_Texto_1:
.string "¡La tecnología es increíble! Ahora\n"
	.string "podrás cambiar POKÉMON con el\l"
	.string "pasado, como un e-mail.$"

PalletTown_Andra_Despues_Move_1:
delay_8
walk_slow_left
delay_16
step_end

PalletTown_Andra_Despues_Move_2:
delay_16
delay_8
face_left
step_end

PalletTown_Andra_Despues_Move_3:
delay_16
face_down
delay_16
delay_8
face_right
delay_16
step_end

PalletTown_Andra_Despues::
lock
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_Andra_Despues_Move_2
applymovement 4, PalletTown_Andra_Despues_Move_1
waitmovement 0x0
delay 15
msgbox PalletTown_Andra_Despues_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, PalletTown_Andra_Despues_Move_3
waitmovement 0x0
delay 15
msgbox PalletTown_Andra_Despues_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Andra_Despues_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PalletTown_Andra_Despues_Texto_4 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_5 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_6 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_6.1 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_7 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_8 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_10 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_11 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_12 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_13 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_14 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_15 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_16 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_17 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_18 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_19 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_20 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_21 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_22 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_23 MSGBOX_AUTOCLOSE
msgbox PalletTown_Andra_Despues_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_677
removeobject 4
setvar VAR_UNUSED_0x40F8, 27
release
end

PalletTown_Andra_Despues_Texto_1:
	.string "Este pueblo… sigue igual\n"
	.string "que hace 3 años.$"

PalletTown_Andra_Despues_Texto_2:
	.string "Pura normalidad. Nada que hacer, y así\n"
	.string "es como debe ser, ¿no? Porque eso es\l"
	.string "todo cuanto se espera de él.$"

PalletTown_Andra_Despues_Texto_3:
	.string "… …$"

PalletTown_Andra_Despues_Texto_4:
	.string "No me equivoqué en mi\n"
	.string "búsqueda por toda HOENN.$"

PalletTown_Andra_Despues_Texto_5:
	.string "Pero en esta ocasión, tal vez haya\n"
	.string "estado viendo fantasmas donde no los\l"
	.string "hay.$"

PalletTown_Andra_Despues_Texto_6:
	.string "Siento haberte hecho perder el tiempo,\n"
	.string "{PLAYER}.$"

PalletTown_Andra_Despues_Texto_6.1:
	.string "Espero que al menos hayas disfrutado el\n"
	.string "viaje. Yo seguiré con el mío.$"

PalletTown_Andra_Despues_Texto_7:
	.string "¡La tecnología es increíble! ¿Verdad?$"

PalletTown_Andra_Despues_Texto_8:
	.string "Ahora podrás cambiar POKÉMON con el\n"
	.string "pasado, como un e-mail.$"

PalletTown_Andra_Despues_Texto_9:
	.string "ANDRA: ¿El… pasado?$"

PalletTown_Andra_Despues_Texto_10:
	.string "Y así unir la KANTO del pasado con la del\n"
	.string "presente, ¿no es genial?$"

PalletTown_Andra_Despues_Texto_11:
	.string "ANDRA: Eso no tiene ningún sentido.$"

PalletTown_Andra_Despues_Texto_12:
	.string "Es lo que le he oído decir a OAK. Todo\n"
	.string "gracias a este laboratorio.$"

PalletTown_Andra_Despues_Texto_13:
	.string "¡La tecnología es increíble!$"

PalletTown_Andra_Despues_Texto_14:
	.string "ANDRA: Mmm…$"

PalletTown_Andra_Despues_Texto_15:
	.string "Dime una cosa. Este laboratorio, ¿se\n"
	.string "creó antes o después de que LANCE\l"
	.string "invadiera KANTO?$"

PalletTown_Andra_Despues_Texto_16:
	.string "Algo antes.$"

PalletTown_Andra_Despues_Texto_17:
	.string "El laboratorio tiene más de una década,\n"
	.string "OAK lo fundó durante sus últimos años\l"
	.string "de CAMPEÓN.$"

PalletTown_Andra_Despues_Texto_18:
	.string "ANDRA: Entiendo, aquí desarrolló su\n"
	.string "faceta como investigador.$"

PalletTown_Andra_Despues_Texto_19:
	.string "¿Cuándo se creó exactamente?$"

PalletTown_Andra_Despues_Texto_20:
	.string "La gente recuerda ya pocas cosas\n"
	.string "anteriores a la guerra.$"

PalletTown_Andra_Despues_Texto_21:
	.string "Pero… yo sí que me acuerdo de su\n"
	.string "fundación. Llevo siendo testigo de los\l"
	.string "avances tecnológicos desde hace 15\l"
	.string "años.$"

PalletTown_Andra_Despues_Texto_22:
	.string "¡15! ¡Sí! Fue hace 15 años.$"

PalletTown_Andra_Despues_Texto_23:
	.string "ANDRA: Ya veo. Muy interesante.$"

PalletTown_Andra_Despues_Texto_24:
	.string "¿Verdad? ¡La tecnología es increíble!$"
