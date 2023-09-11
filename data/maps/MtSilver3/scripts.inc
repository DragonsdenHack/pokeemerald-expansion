MtSilver3_MapScripts::
	.byte 0

MtSilver3_1::
end



MtSilver3_3::
end



MtSilver3_4::
end

MtSilver3_Combate_Rojo::
lock
faceplayer
compare VAR_RECYCLE_GOODS, 0
goto_if_gt MtSilver3_Combate_Rojo_2
compare VAR_UNUSED_0x40F7, 157
goto_if_gt MtSilver3_Combate_Rojo_2
msgbox MtSilver3_Combate_Rojo_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ROJO_3, MtSilver3_Combate_Rojo_Texto_2
applymovement OBJ_EVENT_ID_PLAYER, MtSilver3_Combate_Rojo_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 2
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtSilver3_Combate_Rojo_Move_2
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_3
waitmovement 0x0
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_4
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_5
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_4
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_8 MSGBOX_AUTOCLOSE
msgbox MtSilver3_Combate_Rojo_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox MtSilver3_Combate_Rojo_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_6
waitmovement 0x0
msgbox MtSilver3_Combate_Rojo_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, MtSilver3_Combate_Rojo_Move_7
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 157
setvar VAR_RECYCLE_GOODS, 1
release
end

MtSilver3_Combate_Rojo_2::
msgbox MtSilver3_Combate_Rojo_Texto_1 MSGBOX_AUTOCLOSE
release
end

MtSilver3_Combate_Rojo_Texto_1:
.string "ROJO: ...$"

MtSilver3_Combate_Rojo_Texto_2:
.string "¡...!$"

MtSilver3_Combate_Rojo_Texto_3:
.string "????: {PLAYER}, ¿me equivoco?\n"
	.string "Ya nos conocemos.$"

MtSilver3_Combate_Rojo_Texto_4:
.string "... ...$"

MtSilver3_Combate_Rojo_Texto_5:
.string "M.DRAGÓN: Esos amigos tuyos\n"
	.string "deberían saber que el MONTE\l"
	.string "PLATEADO no es lugar para\l"
	.string "deshacerse de sus experimentos\l"
	.string "fallidos, al final acabarán\l"
	.string "relacionando a esta imitación de\l"
	.string "ENTRENADOR con una leyenda de\l"
	.string "verdad.$"

MtSilver3_Combate_Rojo_Texto_6:
.string "El MAESTRO de CIUDAD IRIS me ha\n"
	.string "hablado de ti, al parecer tienes\l"
	.string "un don para el combate POKÉMON,\l"
	.string "jamás podrías haberle parado los\l"
	.string "pies a mi alumno, LANCE, de no ser\l"
	.string "así.$"

MtSilver3_Combate_Rojo_Texto_7:
.string "JOHTO jamás quiso entrar en guerra\n"
	.string "con KANTO, pero ese LANCE nos\l"
	.string "engañó a todos con la verdadera\l"
	.string "situación de la región vecina.$"

MtSilver3_Combate_Rojo_Texto_8:
.string "Lo que hiciste fue histórico, sí,\n"
	.string "pero la pregunta es: ¿lo hiciste\l"
	.string "por el bien de KANTO?, ¿o para\l"
	.string "cambiar una dictadura por otra?$"

MtSilver3_Combate_Rojo_Texto_9:
.string "Sea como sea, claro está que eres\n"
	.string "alguien que honra al combate\l"
	.string "POKÉMON en todos sus sentidos,\l"
	.string "respetas e intentas humildemente\l"
	.string "aprender de aquellos que forjaron\l"
	.string "esta antigua región, y eso aquí lo\l"
	.string "apreciamos mucho.$"

MtSilver3_Combate_Rojo_Texto_10:
.string "Es por ello que yo, junto con el\n"
	.string "GRAN MAESTRO de CIUDAD IRIS, te\l"
	.string "invito a visitar TORRE CAMPANA,\l"
	.string "subir hasta su cima y contemplar\l"
	.string "JOHTO desde una posición que nunca\l"
	.string "antes habías visto.$"

MtSilver3_Combate_Rojo_Texto_11:
.string "Tal vez, mi viejo amigo se anime\n"
	.string "incluso a darte un par de\l"
	.string "lecciones sobre el combate.\l"
	.string "Después de todo, alguien tiene que\l"
	.string "conservar nuestra técnica cuando\l"
	.string "ya no estemos.\l"
	.string "¿No lo crees tú así?\l"
	.string "¿CAMPEÓN?$"

MtSilver3_Combate_Rojo_Move_1:
face_up
step_end

MtSilver3_Combate_Rojo_Move_2:
emote_exclamation_mark
face_down
step_end

MtSilver3_Combate_Rojo_Move_3:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

MtSilver3_Combate_Rojo_Move_4:
walk_in_place_up
step_end

MtSilver3_Combate_Rojo_Move_5:
face_right
step_end

MtSilver3_Combate_Rojo_Move_6:
face_down
step_end

MtSilver3_Combate_Rojo_Move_7:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end
