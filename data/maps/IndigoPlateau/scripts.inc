IndigoPlateau_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, IndigoPlateau_OnFrame
	.byte 0

IndigoPlateau_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 30, IndigoPlateau_Lance_Discurso
map_script_2 VAR_UNUSED_0x40DC, 5, IndigoPlateau_Escena_Lance
	.2byte 0

IndigoPlateau_Lance_Discurso::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IndigoPlateau_Lance_Discurso_move_1
waitmovement 0x0
special RemoveCameraObject
delay 50
playse SE_SLIDING_DOOR
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 1
delay 20
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox RocketHideout_6F_Escena_Lance_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_5
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_9 MSGBOX_AUTOCLOSE
delay 40
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
delay 60
playse SE_PIN
applymovement 5, IndigoPlateau_Lance_Discurso_move_6
applymovement 6, IndigoPlateau_Lance_Discurso_move_6
applymovement 21, IndigoPlateau_Lance_Discurso_move_6
applymovement 3, IndigoPlateau_Lance_Discurso_move_6
applymovement 2, IndigoPlateau_Lance_Discurso_move_6
applymovement 10, IndigoPlateau_Lance_Discurso_move_6
applymovement 4, IndigoPlateau_Lance_Discurso_move_6
applymovement 7, IndigoPlateau_Lance_Discurso_move_6
waitmovement 0x0
delay 60
applymovement 1, IndigoPlateau_Lance_Discurso_move_2
msgbox RocketHideout_6F_Escena_Lance_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, IndigoPlateau_Lance_Discurso_move_5
delay 30
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 1
setvar VAR_UNUSED_0x40F7, 31
delay 80
warpsilent MAP_ROCKET_HIDEOUT_6F, 5, 27
release
end

RocketHideout_6F_Escena_Lance_Texto_1:
.string "LANCE: Población de KANTO, os habla\n"
	.string "LANCE. Nuevas medidas se avecinan para\l"
	.string "la región, y quiero que todos escuchéis\l"
	.string "atentamente desde vuestras casas,\l"
	.string "trabajos o dondequiera que estéis.$"

RocketHideout_6F_Escena_Lance_Texto_2:
.string "A pesar de las mejoras en los últimos\n"
	.string "meses, aún queda mucho trabajo antes\l"
	.string "de abrirnos al resto del mundo. SEVII,\l"
	.string "HOENN, JOHTO… pueden esperar. Pero no\l"
	.string "debéis preocuparos, SILPH es más que\l"
	.string "suficiente para abastecer a toda\l"
	.string "KANTO.$"

RocketHideout_6F_Escena_Lance_Texto_3:
.string "Es por ello que le confiero plenos\n"
	.string "poderes en cuanto a artículos de\l"
	.string "ENTRENADOR, todos saldrán de su SEDE\l"
	.string "en AZAFRÁN y serán distribuidos en su\l"
	.string "mayoria en el CENTRO COMERCIAL\l"
	.string "AZULONA. Los pequeños negocios que\l"
	.string "puedan hacer competencia están\l"
	.string "terminantemente prohibidos, puesto\l"
	.string "que interfieren con el interés general\l"
	.string "de la región.$"

RocketHideout_6F_Escena_Lance_Texto_4:
.string "Por otro lado, ha llegado a mis oídos\n"
	.string "una tal banda criminal que se hace\l"
	.string "llamar -TEAM ROCKET-. Su presencia es\l"
	.string "cada vez más notoria, y sus actos\l"
	.string "delictivos no hacen más que lastrar el\l"
	.string "progreso de la región.$"

RocketHideout_6F_Escena_Lance_Texto_5:
.string "Por si fuera poco, cierto sector de la\n"
	.string "población incluso les apoya. El peso de\l"
	.string "la ley caerá de igual forma para\l"
	.string "aquellos que ayuden, simpaticen u\l"
	.string "oculten cualquier tipo de información\l"
	.string "referente a esta banda.$"

RocketHideout_6F_Escena_Lance_Texto_6:
.string "A partir de ahora, todas las tiendas de\n"
	.string "la región quedan cerradas para\l"
	.string "cualquier ROCKET. Todo aquel que ose\l"
	.string "vender sus productos, proporcionar\l"
	.string "recursos o llevar a cabo cualquier tipo\l"
	.string "de interacción económica con el TEAM\l"
	.string "ROCKET, será duramente castigado.$"

RocketHideout_6F_Escena_Lance_Texto_7:
.string "Y creedme, de no ser por el código moral\n"
	.string "de las enfermeras, no me daría la menor\l"
	.string "lástima prohibirles también la entrada\l"
	.string "a cualquier CENTRO PKMN.$"

RocketHideout_6F_Escena_Lance_Texto_8:
.string "En contrapartida, todo aquel que nos\n"
	.string "proporcione información, o incluso\l"
	.string "capture por sus propios medios a\l"
	.string "miembros de la organización, será\l"
	.string "recompensado.$"

RocketHideout_6F_Escena_Lance_Texto_9:
.string "Si el caso -TEAM ROCKET- persiste, la\n"
	.string "propia ÉLITE 4 con LANCE al mando se\l"
	.string "verá obligada a tomar cartas en el\l"
	.string "asunto, y no tendrá piedad alguna con\l"
	.string "los insurrectos.$"

RocketHideout_6F_Escena_Lance_Texto_10:
.string "Nada más, si todos remamos en la misma\n"
	.string "dirección, esta región puede recuperar\l"
	.string "su esplendor pasado… dentro de unos\l"
	.string "años.$"

IndigoPlateau_Lance_Discurso_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
step_end

IndigoPlateau_Lance_Discurso_move_2:
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_3:
walk_slow_right
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_4:
walk_slow_left
walk_in_place_down
step_end

IndigoPlateau_Lance_Discurso_move_5:
face_up
step_end

IndigoPlateau_Lance_Discurso_move_6:
emote_exclamation_mark
step_end

IndigoPlateau_Escena_Lance::
call Script_SetGrayscaleTint
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, IndigoPlateau_Escena_Lance_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideout_8F_Mision_Silph_text_36 MSGBOX_AUTOCLOSE
applymovement 19, IndigoPlateau_Escena_Lance_Move_2
waitmovement 0x0
applymovement 19, IndigoPlateau_Escena_Lance_Move_3
waitmovement 0x0
applymovement 19, IndigoPlateau_Escena_Lance_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_37 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40DC, 6
fadescreen 0x1
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7
release
end

IndigoPlateau_Escena_Lance_Move_4:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

IndigoPlateau_Escena_Lance_Move_3:
walk_slow_down
walk_slow_down
step_end

IndigoPlateau_Escena_Lance_Move_2:
walk_in_place_slow_down
step_end

IndigoPlateau_Escena_Lance_Move_1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end
