Olivine_Port_MapScripts::
	.byte 0

OlivinePort1::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_1, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_1:
.string "El SURCAMAR está fuera de\n"
.string "servicio, gracias.$"



OlivinePort2::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_2, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_2:
.string "Nuestra clase de ENTRENADOR\n"
.string "desaparecerá pronto en JOHTO. Aquí\l"
.string "no hay un CAMINO BICIS como en\l"
.string "KANTO, y el PUERTO OLIVO nos\l"
.string "tienta mucho para trabajar como\l"
.string "MARINEROS. Yo, por ejemplo,\l"
.string "paseo todos los días por aquí\l"
.string "para ver si finalmente acaban por\l"
.string "darme algún trabajillo, ¡y de ahí,\l"
.string "al SS.AQUA!$"



OlivinePort3::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_3, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_3:
.string "El SURCAMAR está fuera de\n"
.string "servicio, gracias.$"



OlivinePort4::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_4:
.string "El SURCAMAR está fuera de\n"
.string "servicio, gracias.$"



OlivinePort5::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_5, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_5:
.string "El SURCAMAR está fuera de\n"
.string "servicio, gracias.$"



OlivinePort7::
lock     
faceplayer     
msgbox OlivineCity_Port_Text_7, MSGBOX_DEFAULT
release     
end

OlivineCity_Port_Text_7:
.string "CIUDAD OLIVO crece cada vez más,\n"
	.string "por eso el PUERTO OLIVO también\l"
	.string "debe crecer. Pronto conectaremos\l"
	.string "con KANTO y HOENN.$"

compare VAR_UNUSED_0x40F7, 142
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2

OlivinePort_Barrera::
compare VAR_UNUSED_0x40F7, 146
goto_if_gt OlivinePort_Barrera_4
compare VAR_UNUSED_0x40F7, 144
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 145
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 146
goto_if_eq LavenderTown_Barrera_Mision_Kangaskhan_2
compare VAR_UNUSED_0x40F7, 143
goto_if_lt OlivinePort_Barrera_3
compare VAR_UNUSED_0x40F7, 142
goto_if_gt OlivinePort_Barrera_2
release
end

OlivinePort_Barrera_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1
applymovement 7, OlivinePort_Barrera_Move_2
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
msgbox OlivinePort_Barrera_Texto_3.1 MSGBOX_DEFAULT
waitfanfare
msgbox OlivinePort_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, OlivinePort_Barrera_Move_3
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 144
release
end

OlivinePort_Barrera_Texto_3.1:
.string "({PLAYER} mostró su TICKET FIESTA).$"

OlivinePort_Barrera_3::
lock
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1
applymovement 7, OlivinePort_Barrera_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1.1
waitmovement 0x0
msgbox OlivinePort_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_4
applymovement 7, OlivinePort_Barrera_Move_3
waitmovement 0x0
release
end

OlivinePort_Barrera_4::
lock
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_1
applymovement 7, OlivinePort_Barrera_Move_2
waitmovement 0x0
msgbox OlivinePort_Barrera_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, OlivinePort_Barrera_Move_3
applymovement OBJ_EVENT_ID_PLAYER, OlivinePort_Barrera_Move_4
waitmovement 0x0
release
end

OlivinePort_Barrera_Texto_1:
.string "Perdona, pero sin el TICKET FIESTA\n"
	.string "no puedes pasar.$"

OlivinePort_Barrera_Texto_2:
.string "La fiesta ha acabado, gracias por\n"
	.string "asistir.$"

OlivinePort_Barrera_Texto_3:
.string "¡Ah!\n"
	.string "¡Veo que tienes el TICKET FIESTA!\l"
	.string "¡Pasa, llegas en el mejor momento!$"

OlivinePort_Barrera_Move_1.1:
walk_in_place_up
step_end

OlivinePort_Barrera_Move_1:
face_right
step_end

OlivinePort_Barrera_Move_2:
face_left
step_end

OlivinePort_Barrera_Move_3:
face_up
step_end

OlivinePort_Barrera_Move_4:
walk_slow_up
step_end
