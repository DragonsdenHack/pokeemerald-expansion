LagoFuria3_MapScripts::
	.byte 0


LagoFuria_S3_Combate_Ikary::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_SHARPEDO, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_SHARPEDO, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_SHARPEDO, CRY_MODE_ENCOUNTER
msgbox LagoFuria_S3_Combate_Ikary_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_134, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_SHARPEDO, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox LagoFuria_S3_Combate_Ikary_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_MAUVILLE_CITY_STATE, 5
release
end

LagoFuria_S3_Combate_Ikary_Texto_1:
.string "¡Ik!$"

LagoFuria_S3_Combate_Ikary_Texto_3:
.string "Ik...$"


LagoFuria_S3_Combates_Cientificos::
lock
clearflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
addobject 8
addobject 9
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MemorialPillar_Move_1
applymovement OBJ_EVENT_ID_CAMERA, LagoFuria_S3_Combates_Cientificos_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox LagoFuria_S3_Combates_Cientificos_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, LagoFuria_S3_Combates_Cientificos_Move_2
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox LagoFuria_S3_Combates_Cientificos_Texto_3 MSGBOX_AUTOCLOSE
applymovement 9, LagoFuria_S3_Combates_Cientificos_Move_3
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_4 MSGBOX_AUTOCLOSE
applymovement 8, LagoFuria_S3_Combates_Cientificos_Move_4
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 8, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 5, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 6, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 7, LagoFuria_S3_Combates_Cientificos_Move_6
applymovement 9, LagoFuria_S3_Combates_Cientificos_Move_6
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, LagoFuria_S3_Combates_Cientificos_Move_5
waitmovement 0x0
special RemoveCameraObject
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox LagoFuria_S3_Combates_Cientificos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 8, LagoFuria_S3_Combates_Cientificos_Move_8
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox LagoFuria_S3_Combates_Cientificos_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, LagoFuria_S3_Combates_Cientificos_Move_9
applymovement 5, LagoFuria_S3_Combates_Cientificos_Move_10
applymovement 7, LagoFuria_S3_Combates_Cientificos_Move_2
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_10 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_DESERT_UNDERPASS_FOSSIL
delay 20
fadescreen 1
removeobject 8
removeobject 9
fadescreen 0
applymovement 6, LagoFuria_S3_Combates_Cientificos_Move_9
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_11 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CIENTIFICO_1, LagoFuria_S3_Combates_Cientificos_Texto_12
msgbox LagoFuria_S3_Combates_Cientificos_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, LagoFuria_S3_Combates_Cientificos_Move_11
applymovement OBJ_EVENT_ID_PLAYER, LagoFuria_S3_Combates_Cientificos_Move_2
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_14 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CRIMINAL, LagoFuria_S3_Combates_Cientificos_Texto_15
msgbox LagoFuria_S3_Combates_Cientificos_Texto_16 MSGBOX_AUTOCLOSE
applymovement 7, LagoFuria_S3_Combates_Cientificos_Move_12
applymovement OBJ_EVENT_ID_PLAYER, LagoFuria_S3_Combates_Cientificos_Move_10
waitmovement 0x0
msgbox LagoFuria_S3_Combates_Cientificos_Texto_17 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CIENTIFICO_3, LagoFuria_S3_Combates_Cientificos_Texto_18
msgbox LagoFuria_S3_Combates_Cientificos_Texto_19 MSGBOX_AUTOCLOSE
setvar VAR_MAUVILLE_CITY_STATE, 6
release
end

LagoFuria_S3_Combates_Cientificos_Move_12:
walk_right
step_end

LagoFuria_S3_Combates_Cientificos_Move_11:
walk_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_10:
face_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_9:
walk_in_place_down
step_end

LagoFuria_S3_Combates_Cientificos_Move_8:
face_up
step_end

LagoFuria_S3_Combates_Cientificos_Move_7:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_6:
face_down
emote_exclamation_mark
step_end

LagoFuria_S3_Combates_Cientificos_Move_5:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
step_end

LagoFuria_S3_Combates_Cientificos_Move_4:
face_left
step_end

LagoFuria_S3_Combates_Cientificos_Move_3:
walk_in_place_right
step_end

LagoFuria_S3_Combates_Cientificos_Move_2:
face_right
step_end

LagoFuria_S3_Combates_Cientificos_Move_1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

LagoFuria_S3_Combates_Cientificos_Texto_1:
.string "????: Estas huellas están frescas,\n"
	.string "estamos cerca.$"

LagoFuria_S3_Combates_Cientificos_Texto_2:
.string "PESCADOR: Aún estamos a tiempo de\n"
	.string "regresar, ¿de verdad quieres arriesgar\l"
	.string "tu vida en esta expedición?$"

LagoFuria_S3_Combates_Cientificos_Texto_3:
.string "????: Deberías estarme agradecido, has\n"
	.string "pasado toda tu vida aquí y jamás te\l"
	.string "has aventurado a indagar en el legado\l"
	.string "que dejaron tus antepasados. Gracias a\l"
	.string "mí podrás comprobar si las leyendas\l"
	.string "eran ciertas.$"

LagoFuria_S3_Combates_Cientificos_Texto_4:
.string "PESCADOR: Algunas cosas es mejor\n"
	.string "dejarlas como están.$"

LagoFuria_S3_Combates_Cientificos_Texto_5:
.string "????: Y otras están ahí precisamente\n"
	.string "para que gente como nosotros vea qué\l"
	.string "pueden hacerse con ellas. Pondremos a\l"
	.string "prueba a ese POKÉMON como es debido,\l"
	.string "cuando en D….$"

LagoFuria_S3_Combates_Cientificos_Texto_6:
.string "Así que tenemos visita.$"

LagoFuria_S3_Combates_Cientificos_Texto_7:
.string "Debes ser muy fuerte para haber llegado\n"
	.string "hasta aquí solo.$"

LagoFuria_S3_Combates_Cientificos_Texto_8:
.string "No me interesa si has llegado hasta\n"
	.string "aquí por casualidad, si solo te has\l"
	.string "encontrado la entrada secreta abierta,\l"
	.string "o si estás aquí de forma premeditada,\l"
	.string "como nosotros. Solo eres otro\l"
	.string "obstáculo más que debe ser liquidado.$"

LagoFuria_S3_Combates_Cientificos_Texto_9:
.string "Encargaos de él, no debe seguirnos.$"

LagoFuria_S3_Combates_Cientificos_Texto_10:
.string "A la orden, señor.$"

LagoFuria_S3_Combates_Cientificos_Texto_11:
.string "Has tenido suerte, si nuestro jefe al\n"
	.string "mando hubiera decidido encargarse de\l"
	.string "ti, ni tú ni tus POKÉMON podríais\l"
	.string "regresar de la tremenda paliza que\l"
	.string "recibiríais.$"

LagoFuria_S3_Combates_Cientificos_Texto_12:
.string "Oh… tenemos aquí un espécimen poco\n"
	.string "común.$"

LagoFuria_S3_Combates_Cientificos_Texto_13:
.string "Aún con esos POKÉMON, nunca podrías\n"
	.string "competir con uno de nuestros\l"
	.string "EJECUTIVOS.$"

LagoFuria_S3_Combates_Cientificos_Texto_14:
.string "Parece que en esta región la gente\n"
	.string "tiene la mala costumbre de meterse\l"
	.string "donde no le llaman. ¡Verás cómo\l"
	.string "tratamos en la nuestra a los\l"
	.string "entrometidos como tú!$"

LagoFuria_S3_Combates_Cientificos_Texto_15:
.string "Así que te resistes, no tendremos\n"
	.string "piedad contigo.$"

LagoFuria_S3_Combates_Cientificos_Texto_16:
.string "Por mucha técnica que poseas, sin\n"
	.string "nuestra tecnología no tienes nada que\l"
	.string "hacer.$"

LagoFuria_S3_Combates_Cientificos_Texto_17:
.string "Un esfuerzo más que loable por tu parte\n"
	.string "el seguir en pie, pero tu pequeña\l"
	.string "excursión al lago acaba aquí.$"

LagoFuria_S3_Combates_Cientificos_Texto_18:
.string "¡No puede ser! ¡Tus POKÉMON deberían de\n"
	.string "estar agotados!$"

LagoFuria_S3_Combates_Cientificos_Texto_19:
.string "Si fueras consciente del poder que\n"
	.string "maneja nuestro EJECUTIVO, estarías ya\l"
	.string "a kilómetros de este LAGO y de PUEBLO\l"
	.string "CAOBA.$"


LagoFuria_S3_Cientifico_1::
lock
faceplayer
msgbox LagoFuria_S3_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

LagoFuria_S3_Cientifico_1_Texto_1:
.string "Por tu culpa ya no podremos ver en\n"
	.string "directo la aparición del POKÉMON del\l"
	.string "LAGO. No podemos presentarnos ahí\l"
	.string "después de ser derrotados, pero\l"
	.string "tampoco podemos ya detenerte…$"



LagoFuria_S3_Cientifico_2::
lock
faceplayer
msgbox LagoFuria_S3_Cientifico_2_Texto_1 MSGBOX_AUTOCLOSE
release
end

LagoFuria_S3_Cientifico_2_Texto_1:
.string "Parece que ese POKÉMON es más fiero\n"
	.string "que el mismísimo GYARADOS, ¿cuales\l"
	.string "crees que serán sus STATS BASE?$"


LagoFuria_S3_Cientifico_3::
lock
faceplayer
msgbox LagoFuria_S3_Cientifico_3_Texto_1 MSGBOX_AUTOCLOSE
release
end

LagoFuria_S3_Cientifico_3_Texto_1:
.string "Según nuestros cálculos, el POKÉMON del\n"
	.string "LAGO debe de medir unos 20 metros, de\l"
	.string "ser así, sería el POKÉMON más grande\l"
	.string "registrado, superando a WAILORD.$"

