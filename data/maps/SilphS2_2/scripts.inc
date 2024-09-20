SilphS2_2_MapScripts::
	.byte 0

SilphS2_2_Cientifico_1::
lock
faceplayer
msgbox SilphS2_2_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

SilphS2_2_Cientifico_1_Texto_1:
	.string "La dedicación del tiempo a algo no\n"
	.string "productivo puede ser fuente de\l"
	.string "creatividad.$"

SilphS2_2_Cientifico_2::
lock
faceplayer
msgbox SilphS2_2_Cientifico_2_Texto_1 MSGBOX_NPC
delay 10
msgbox SilphS2_2_Cientifico_2_Texto_2 MSGBOX_NPC
release
end

SilphS2_2_Cientifico_2_Texto_1:
	.string "Me pregunto qué ocurrirá ahora con OAK\n"
	.string "y su familia. Vuestro LÍDER y OAK\l"
	.string "libraron intensos combates en el\l"
	.string "pasado, que deleitaron a toda la región.$"

SilphS2_2_Cientifico_2_Texto_2:
	.string "Yo creo que GIOVANNI lo perdonará por\n"
	.string "respeto a esa antigua rivalidad, pero\l"
	.string "tal vez el orgullo de OAK le impida\l"
	.string "aceptar ese perdón.$"

SilphS2_2_Lorelei_Move_1:
walk_down
walk_down
delay_16
face_left
step_end

SilphS2_2_Lorelei_Move_2:
delay_8
walk_in_place_right
step_end

SilphS2_2_Lorelei_Move_3:
emote_exclamation_mark
step_end

SilphS2_2_Lorelei_Move_4:
walk_down
walk_left
step_end

SilphS2_2_Lorelei_Move_5:
walk_right
walk_right
step_end

SilphS2_2_Lorelei_Move_6:
face_up
step_end

SilphS2_2_Lorelei_Move_7:
face_left
step_end

SilphS2_2_Lorelei_Move_8:
walk_in_place_left
step_end

SilphS2_2_Lorelei_Move_9:
face_down
step_end

SilphS2_2_Lorelei_Move_10:
delay_16
delay_16
delay_8
face_left
delay_16
delay_16
delay_8
face_down
delay_16
delay_16
step_end

SilphS2_2_Lorelei_Move_11:
delay_8
face_down
delay_16
face_right
delay_16
face_up
delay_16
step_end

SilphS2_2_Lorelei_Move_12:
walk_down
walk_left
walk_left
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

SilphS2_2_Lorelei_Move_13:
delay_16
face_down
delay_16
delay_16
face_left
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_down
step_end


SilphS2_2_Lorelei::
lock
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
addobject 4
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_2
applymovement 4, SilphS2_2_Lorelei_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, SilphS2_2_Lorelei_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_2_Lorelei_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_5
applymovement 4, SilphS2_2_Lorelei_Move_4
waitmovement 0x0
delay 10
msgbox SilphS2_2_Lorelei_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_6
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, SilphS2_2_Lorelei_Move_9
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_10
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS2_2_Lorelei_Texto_10 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_11 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_9
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_11
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_13
applymovement 4, SilphS2_2_Lorelei_Move_12
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 4
setvar VAR_UNUSED_0x40FF, 11
release
end

SilphS2_2_Lorelei_Texto_1:
	.string "LORELEI: Tú. Eras {PLAYER}, ¿no?$"

SilphS2_2_Lorelei_Texto_2:
	.string "Me sorprende que seas tan cercano al\n"
	.string "PRESIDENTE de SILPH, de lo contrario no\l"
	.string "estarías aquí.$"

SilphS2_2_Lorelei_Texto_3:
	.string "Es un gran ENTRENADOR.$"

SilphS2_2_Lorelei_Texto_4:
	.string "Vine hasta aquí para ofrecerle mi\n"
	.string "puesto en la ÉLITE 4.$"

SilphS2_2_Lorelei_Texto_5:
	.string "Aunque{PAUSE 15}…{PAUSE 15} parece que está muy ocupado\n"
	.string "con SILPH, así que el puesto quedará\l"
	.string "vacante.$"

SilphS2_2_Lorelei_Texto_6:
	.string "Yo me retiraré a ISLA CUARTA. Mi pasión\n"
	.string "por combatir ya no es la misma.$"

SilphS2_2_Lorelei_Texto_7:
	.string "Creí que con POKÉMON de hielo podría\n"
	.string "llegar lejos, pero ser derrotada tantas\l"
	.string "veces me ha dado un golpe de realidad.$"

SilphS2_2_Lorelei_Texto_8:
	.string "Supongo que ya estaba\n"
	.string "limitada de base, ¿no?$"

SilphS2_2_Lorelei_Texto_9:
	.string "Pero{PAUSE 15}…{PAUSE 15} ¿qué hay de ti? ¡Cuéntame!$"

SilphS2_2_Lorelei_Texto_10:
	.string "Eras muy fuerte, pero al final fue ROJO\n"
	.string "quién salió CAMPEÓN.$"

SilphS2_2_Lorelei_Texto_11:
	.string "Si te digo la verdad, me hubiera gustado\n"
	.string "que esa chica que llegó antes que tú\l"
	.string "hubiera salido victoriosa. El SNEASEL\l"
	.string "que llevaba tenía mucho potencial.$"

SilphS2_2_Lorelei_Texto_12:
	.string "Pero así se dieron las cosas: ROJO\n"
	.string "derrotó a AZUL, y al final este último\l"
	.string "acabó como CAMPEÓN.$"

SilphS2_2_Lorelei_Texto_13:
	.string "Un desperdicio lo de ese ROJO, la\n"
	.string "verdad. Ir al MONTE PLATEADO a\l"
	.string "entrenar{PAUSE 25}…{PAUSE 25} un páramo desierto.$"

SilphS2_2_Lorelei_Texto_14:
	.string "Alguna que otra vieja gloria del pasado,\n"
	.string "es verdad. Pero ahí se estancará.$"

SilphS2_2_Lorelei_Texto_15:
	.string "Tú, en cambio, veo que sabes moverte.$"

SilphS2_2_Lorelei_Texto_16:
	.string "Muy pocos tienen el privilegio de pasear\n"
	.string "por estos pasillos. Seguro que no estás\l"
	.string "aquí por casualidad.$"

SilphS2_2_Lorelei_Texto_17:
	.string "Pero eso a mí ya no me incumbe. Ahora\n"
	.string "solo busco paz, volver a mis raíces.$"

SilphS2_2_Lorelei_Texto_18:
	.string "Si pasas por ISLA CUARTA, ¡no olvides\n"
	.string "visitarme!$"

