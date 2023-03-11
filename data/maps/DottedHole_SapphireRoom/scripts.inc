DottedHole_SapphireRoom_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, DottedHole_SapphireRoom_OnFrame
	.byte 0

DottedHole_SapphireRoom_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 99, DottedHole_SapphireRoom_Encuentro_Aquiles
	.2byte 0

DottedHoleSaphireRoom2::
lock
faceplayer
msgbox DottedHoleSaphireRoom2_Texto_1 MSGBOX_NPC
release
end

DottedHoleSaphireRoom2_Texto_1:
.string "Espero que te merezcan la pena los\n"
	.string "segundos en los que podrás\l"
	.string "presenciar el renacer de KYOGRE\l"
	.string "antes de acabar a decenas de\l"
	.string "metros bajo el nivel del mar.$"

DottedHole_SapphireRoom_Encuentro_Aquiles::
addobject 2
addobject 3
addobject 4
lock
setmetatile 7, 3, 0x2D9, TRUE
setmetatile 7, 2, 0x299, TRUE
setmetatile 7, 1, 0x2C4, TRUE
special DrawWholeMapView
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtEmber_B5F_Encuentro_Magno_Move_3
waitmovement 0x0
special RemoveCameraObject
playse MUS_ENCOUNTER_AQUA
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_2 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_4
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 1
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_4.1
waitmovement 0x0
delay 15
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_3 MSGBOX_AUTOCLOSE
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 7, 4, 0
waitfieldeffect FLDEFF_SPARKLE
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
delay 75
removeobject 1
waitfanfare
playse SE_BANG
setmetatile 7, 3, 0x284, TRUE
setmetatile 7, 2, 0x294, FALSE
setmetatile 7, 1, 0x28C, TRUE
special DrawWholeMapView
delay 25
playse SE_PIN
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 5, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 6, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 7, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 8, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 9, MtEmber_B5F_Encuentro_Magno_Move_2
applymovement 10, MtEmber_B5F_Encuentro_Magno_Move_2
waitmovement 0x0
delay 40
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_5
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6.1 MSGBOX_AUTOCLOSE
applymovement 9, MtEmber_B5F_Encuentro_Magno_Move_14
waitmovement 0x0
playse SE_EXIT
removeobject 9
applymovement 8, MtEmber_B5F_Encuentro_Magno_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 8
applymovement 10, MtEmber_B5F_Encuentro_Magno_Move_16
waitmovement 0x0
playse SE_EXIT
removeobject 10
applymovement 7, MtEmber_B5F_Encuentro_Magno_Move_17
waitmovement 0x0
playse SE_EXIT
removeobject 7
applymovement 6, MtEmber_B5F_Encuentro_Magno_Move_18
waitmovement 0x0
playse SE_EXIT
removeobject 6
applymovement 5, MtEmber_B5F_Encuentro_Magno_Move_19
waitmovement 0x0
playse SE_EXIT
removeobject 5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MtEmber_B5F_Encuentro_Magno_Move_6
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MtEmber_B5F_Encuentro_Magno_Move_7
waitmovement 0x0
playse SE_PIN
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_8
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_8
waitmovement 0x0
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_9
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_10
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_8 MSGBOX_AUTOCLOSE
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, MtEmber_B5F_Encuentro_Magno_Move_11
waitmovement 0x0
setflag FLAG_HIDE_CAVE_OF_ORIGIN_B1F_WALLACE
removeobject 4
playse SE_EXIT
applymovement 3, MtEmber_B5F_Encuentro_Magno_Move_12
waitmovement 0x0
removeobject 3
playse SE_EXIT
applymovement 2, MtEmber_B5F_Encuentro_Magno_Move_13
waitmovement 0x0
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_KAYLEE, DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_11
msgbox DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 100
release
end

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_1:
.string "AQUILES: La ESFERA AZUL brilla más\n"
	.string "que nunca, esta cámara lleva al\l"
	.string "lugar donde yace KYOGRE, a la\l"
	.string "espera de un digno servidor que lo\l"
	.string "libere.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_2:
.string "...$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_3:
.string "Este ZAFIRO...ya de por si un\n"
	.string "tesoro de enorme valor en el\l"
	.string "mercado negro, lo que muy pocos\l"
	.string "saben es que su razón de ser tiene\l"
	.string "infinitamente más valor que\l"
	.string "cualquier precio que cualquier\l"
	.string "fanático esté dispuesto a pagar\l"
	.string "por él para tenerlo después en su\l"
	.string "anodina mansión criando polvo.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_4:
.string "Hemos de estar agradecidos de que\n"
	.string "nadie haya podido profanar este\l"
	.string "lugar aún, sé de muchos\l"
	.string "científicos que darían su brazo\l"
	.string "derecho por tratar de vender una\l"
	.string "pieza como esta a cualquiera a\l"
	.string "como de lugar, incluso a esas\l"
	.string "sabandijas del TEAM ROCKET.\l"
	.string "Puedes estar tranquilo KYOGRE,\l"
	.string "¡este ZAFIRO ha caído en las manos\l"
	.string "adecuadas!\l"
	.string "¡Abrid bien los ojos ALTO RANGO\l"
	.string "SILVINA y ALMIRANTE TOLO!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_5:
.string "Por sí solo el ZAFIRO en este\n"
	.string "lugar no lleva a ninguna parte,\l"
	.string "pero si logramos traer la ESFERA\l"
	.string "AZUL y hacerla brillar en su\l"
	.string "presencia, este es el resultado...$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6:
.string "Después de tantos años e intentos\n"
	.string "fallidos lo logramos, ¡KYOGRE!\l"
	.string "¡Al fin podrás nadar libremente\l"
	.string "por los 7 mares y hacer uso de\l"
	.string "todo tu poder!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_6.1:
.string "¿A qué esperáis, atajo de sabandijas?\n"
	.string "¡Todos adentro o seréis los primeros en\l"
	.string "probar el SALPICAR de KYOGRE!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_7:
.string "AQUILES: Yo a ti te conozco, eres\n"
	.string "el ROCKET que estaba en mi camino\l"
	.string "cuando descubrí este lugar, en\l"
	.string "condiciones normales me encargaría\l"
	.string "personalmente de darte una lección\l"
	.string "por tu descaro, pero como\l"
	.string "comprenderás, no voy a alargar más\l"
	.string "el despertar de KYOGRE por que\l"
	.string "alguien como tú haya decidido\l"
	.string "hacer un poco de ruido.\l"
	.string "¡ALTO RANGO SILVINA!\l"
	.string "¡Muéstrale cómo nos las gastamos\l"
	.string "aquí en el EQUIPO AQUA!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_8:
.string "AR.SILVINA: Con gusto señor.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_9:
.string "AQUILES: Espero que no cometas la\n"
	.string "estupidez de intentar seguirme,\l"
	.string "deberían de haberte inculcado\l"
	.string "desde pequeño el respeto por la\l"
	.string "mar y los peligros de esta.\l"
	.string "¡KYOGRE es el mar!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_10:
.string "Esto ha ido demasiado lejos, tú no\n"
	.string "pintas nada en este lugar.\l"
	.string "¿Sabías una cosa?\l"
	.string "En la naturaleza de KYOGRE está\l"
	.string "ser un POKÉMON tranquilo y\l"
	.string "pacífico, excepto cuando tiene\l"
	.string "enfrente a su eterno rival:\l"
	.string "GROUDON.\l"
	.string "No obstante, si sigues por este\l"
	.string "camino, ¡no tendremos reparo en\l"
	.string "ordenar que lance un par de\l"
	.string "HIDROBOMBAS que se lleven por\l"
	.string "delante a todo tu equipo!$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_11:
.string "Con mi derrota AQUILES ha podido\n"
	.string "ganar el tiempo que necesitaba.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Texto_12:
.string "Espero que te merezcan la pena los\n"
	.string "segundos qen los que podrás\l"
	.string "presenciar el renacer de KYOGRE\l"
	.string "antes de acabar a decenas de\l"
	.string "metros bajo el nivel del mar.$"

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_1:
face_left
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_2:
emote_exclamation_mark
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_3:
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_4:
walk_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_5:
walk_in_place_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_7:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_left
walk_in_place_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_8:
emote_exclamation_mark
face_down
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_9:
face_down
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_10:
walk_left
walk_in_place_down
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_11:
face_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_12:
walk_up
walk_right
walk_up
step_end

DottedHole_SapphireRoom_Encuentro_Aquiles_Move_13:
walk_in_place_down
step_end
