IcePath_MapScripts::
	.byte 0

IcePath1::
end



IcePath2::
end



IcePath3::
end

IcePath_Llamada_Giovanni::
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox IcePath_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox IcePath_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 167
delay 20
msgbox IcePath_Llamada_Giovanni_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_5F, 69, 4
release
end

IcePath_Llamada_Giovanni_No:
release
end

IcePath_Llamada_Giovanni_Texto_1:
.string "GIOVANNI: {PLAYER}, hemos\n"
	.string "registrado los datos del LAPRAS\l"
	.string "FUERTE VÍNCULO de FREDO, pero,\l"
	.string "¿con qué clase de POKÉMON acabas\l"
	.string "de combatir?\l"
	.string "Está rompiendo los esquemas de\l"
	.string "todos nuestros científicos. El\l"
	.string "LAPRAS de FREDO es extraordinario,\l"
	.string "cuenta con 660 de BASE bien\l"
	.string "repartidos, pero este último, es\l"
	.string "único, {PLAYER}.$"

IcePath_Llamada_Giovanni_Texto_2:
.string "Te he llamado no para hablar de\n"
	.string "esto, quiero que vengas a mi\l"
	.string "despacho de la BASE ROCKET\l"
	.string "PROFUNDA. Hay que tomar cartas en\l"
	.string "el asunto respecto a lo que me\l"
	.string "contaste de ese ENTRENADOR que\l"
	.string "tiene a LUGIA y HO-OH en su poder.\l"
	.string "Te espero aquí, {PLAYER}.$"

IcePath_Llamada_Giovanni_Texto_3:
.string "¿Quieres volver a la BASE ROCKET de\n"
	.string "KANTO?$"

IcePath_Bloqueo::
compare VAR_UNUSED_0x40F7, 170
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, IcePath_Bloqueo_Move_1
waitmovement 0x0
msgbox IcePath_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, IcePath_Bloqueo_Move_2
waitmovement 0x0
release
end

IcePath_Bloqueo_Texto_1:
.string "(GIOVANNI me ha dicho que acuda\n"
	.string "a su despacho urgentemente)$"

IcePath_Bloqueo_Move_1:
walk_in_place_left
step_end

IcePath_Bloqueo_Move_2:
walk_slow_left
step_end
