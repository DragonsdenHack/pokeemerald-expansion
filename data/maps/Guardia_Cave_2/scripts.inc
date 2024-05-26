Guardia_Cave_2_MapScripts::
	.byte 0

Guardia_Cave_2_Sachiko_Fuji::
lock
applymovement OBJ_EVENT_ID_PLAYER, Guardia_Cave_Fuji_Move_1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Sachiko_Fuji_Move_5
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_3 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_2
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_3
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_5 MSGBOX_AUTOCLOSE
applymovement 16, Sachiko_Fuji_Move_1
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_6 MSGBOX_AUTOCLOSE
applymovement 15, Sachiko_Fuji_Move_2
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, Sachiko_Fuji_Move_4
waitmovement 0x0
msgbox Guardia_Cave_2_Sachiko_Fuji_Texto_9 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
setflag FLAG_HOENN_41
removeobject 16
removeobject 15
fadescreen 0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Sachiko_Fuji_Move_5.1
waitmovement 0x0
special RemoveCameraObject
setvar VAR_ROUTE120_STATE, 10
release
end

Sachiko_Fuji_Move_5.1:
walk_up
walk_up
walk_up
walk_up
step_end

Sachiko_Fuji_Move_5:
walk_down
walk_down
walk_down
walk_down
step_end

Sachiko_Fuji_Move_4:
walk_in_place_right
step_end

Sachiko_Fuji_Move_3:
face_left
step_end

Sachiko_Fuji_Move_2:
face_down
step_end

Sachiko_Fuji_Move_1:
walk_in_place_left
step_end

Guardia_Cave_2_Sachiko_Fuji_Texto_1:
	.string "SACHIKO: Oh… Entonces, por eso ahora\n"
	.string "este lugar está lleno de CUBONE,\l"
	.string "MAROWAK y KANGASKHAN.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_2:
	.string "Desconocía toda la historia de la\n"
	.string "antigua TORRE POKÉMON, y la línea\l"
	.string "evolutiva que une a estos POKÉMON.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_3:
	.string "FUJI: Así es, jovencita. Las crías de\n"
	.string "CUBONE cuyas madres siguen con vida,\l"
	.string "acabarán convirtiéndose en\l"
	.string "KANGASKHAN.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_4:
	.string "Es por eso que en este lugar están\n"
	.string "apareciendo cada vez más, han\l"
	.string "encontrado un hábitat en el que al fin\l"
	.string "pueden prosperar.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_5:
	.string "Que tanto mi MAROWAK como tu\n"
	.string "KANGASKHAN hayan detectado esto es\l"
	.string "fascinante.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_6:
	.string "Es como si… toda esa línea evolutiva\n"
	.string "hubiera desarrollado una especie de\l"
	.string "mente colectiva, que le impulsara a\l"
	.string "construir este inmenso túnel.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_7:
	.string "SACHIKO: Es incluso más grande que\n"
	.string "CUEVA DIGGLET, ¿cree que llegará a\l"
	.string "alguna parte?$"

Guardia_Cave_2_Sachiko_Fuji_Texto_8:
	.string "FUJI: No lo sé, jovencita. Solo sé que si\n"
	.string "nuestros POKÉMON nos han guiado hasta\l"
	.string "aquí, es porque confían en nosotros.\l"
	.string "Tenemos que estar a la altura.$"

Guardia_Cave_2_Sachiko_Fuji_Texto_9:
	.string "SACHIKO: ¡No se preocupe, SR.FUJI! ¡No\n"
	.string "fallaré a mis POKÉMON!$"

Guardia_Cave_Combate_Marowak_2::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_S1_Combate_Kabutops_Move_1
delay 20
playmoncry SPECIES_MAROWAK, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
msgbox Guardia_Cave_Combate_Taaban_Texto_1 MSGBOX_DEFAULT
waitmoncry
playse MUS_RG_ENCOUNTER_GYM_LEADER
trainerbattle_no_intro TRAINER_TRAINER_653, RuinsOfAlph_S1_Combate_Kabutops_Texto_2
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox Guardia_Cave_Combate_Taaban_Texto_3 MSGBOX_AUTOCLOSE
playse SE_FAINT
setvar VAR_ROUTE120_STATE, 11
release
end

