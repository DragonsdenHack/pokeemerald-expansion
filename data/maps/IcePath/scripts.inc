IcePath_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, IcePath_OnResume
	.byte 0

IcePath_OnResume:
	call IcePath_SetupEscapeWarp
	end

IcePath_SetupEscapeWarp::
	setescapewarp MAP_ROUTE44, 76, 15
	return

IcePath1::
end



IcePath2::
end



IcePath3::
end

IcePath_Llamada_Giovanni::
applymovement OBJ_EVENT_ID_PLAYER, UnionCave_Llamada_Giovanni_Move_1
playse SE_POKENAV_CALL
waitse
delay 30
playse SE_POKENAV_HANG_UP
waitse
msgbox IcePath_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox IcePath_Llamada_Giovanni_Texto_1.1 MSGBOX_AUTOCLOSE
msgbox IcePath_Llamada_Giovanni_Texto_1.2 MSGBOX_AUTOCLOSE
msgbox IcePath_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PC_OFF
waitse
setvar VAR_UNUSED_0x40F7, 167
delay 15
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
.string "GIOVANNI: {PLAYER}, hemos registrado los\n"
	.string "datos del MAMOSWINE-& de FREDO, pero{PAUSE 25}…{PAUSE 25}\p"
	.string "¿Con qué clase de POKÉMON\n"
	.string "acabas de combatir?\p"
	.string "Está rompiendo los esquemas de\n"
	.string "todos nuestros científicos.$"

IcePath_Llamada_Giovanni_Texto_1.1:
.string "El MAMOSWINE-& de FREDO es\n"
	.string "extraordinario; cuenta con el mismo\l"
	.string "ATAQUE, mejor VELOCIDAD y defensas\l"
	.string "similares a GARCHOMP-MEGA.\l"
	.string "En otras palabras, sus stats útiles\l"
	.string "son comparables a la MEGA de todo\l"
	.string "un PSEUDOLEGENDARIO.$"

IcePath_Llamada_Giovanni_Texto_1.2:
.string "Pero{PAUSE 25}…{PAUSE 25} el POKÉMON con el que acabas de\n"
	.string "combatir va incluso más allá, su\l"
	.string "poderío por el lado especial es\l"
	.string "inigualable, algo único.$"


IcePath_Llamada_Giovanni_Texto_2:
.string "Por desgracia, te he llamado\n"
	.string "por otra razón. Quiero que vengas\l"
	.string "a mi despacho de la BASE ROCKET\l"
	.string "PROFUNDA. Hay que tomar cartas en\l"
	.string "el asunto respecto a lo que me\l"
	.string "contaste de ese ENTRENADOR que\l"
	.string "tiene a LUGIA y HO-OH en su poder.\p"
	.string "Te espero aquí, {PLAYER}.$"

IcePath_Llamada_Giovanni_Texto_3:
.string "¿Quieres volver a la BASE ROCKET\n"
	.string "de KANTO?$"

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
.string "-GIOVANNI me ha dicho que acuda\n"
	.string "a su despacho urgentemente-$"

IcePath_Bloqueo_Move_1:
walk_in_place_left
step_end

IcePath_Bloqueo_Move_2:
walk_slow_left
step_end
