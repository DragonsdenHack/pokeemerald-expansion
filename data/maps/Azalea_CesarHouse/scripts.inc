Azalea_CesarHouse_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Azalea_CesarHouse_OnFrame
	.byte 0

Azalea_CesarHouse_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 128, Azalea_CesarHouse_Evento_Mirto
	.2byte 0

AzaleaCesarHouse_1::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 129
goto_if_gt AzaleaCesarHouse_1_2
msgbox AzaleaCesarHouse_1_Texto_1 MSGBOX_NPC
release
end

AzaleaCesarHouse_1_2::
msgbox AzaleaCesarHouse_1_Texto_2 MSGBOX_NPC
delay 20
msgbox AzaleaCesarHouse_1_Texto_3 MSGBOX_NPC
delay 20
msgbox AzaleaCesarHouse_1_Texto_4 MSGBOX_NPC
msgbox AzaleaCesarHouse_1_Texto_5 MSGBOX_NPC
setflag FLAG_HIDE_SOOTOPOLIS_CITY_MAN_1
fadescreen 1
delay 20
removeobject 1
fadescreen 0
end

AzaleaCesarHouse_1_Texto_1:
	.string "You'll find him in the SLOWPOKE WELL. If\n"
	.string "you defeat him, head back here with the\l"
	.string "item he'll hand you. Then I'll give you\l"
	.string "your battle.$"

AzaleaCesarHouse_1_Texto_2:
.string "And so?$"

AzaleaCesarHouse_1_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}$"

AzaleaCesarHouse_1_Texto_4:
	.string "Oh{PAUSE 15}…{PAUSE 15} Impressive, I didn't expect you to\n"
	.string "win at all. Keep that SLOWBRONITE safe,\l"
	.string "young one. Any item capable of\l"
	.string "expanding a POKÉMON's limits is sacred.$"

AzaleaCesarHouse_1_Texto_5:
	.string "Having said that, I'll be waiting for you\n"
	.string "at the GYM. I'll keep my word and battle\l"
	.string "you, so I hope you'll give it your all.\l"
	.string "You'll need it.$"



AzaleaCesarHouse_2::
end

Azalea_CesarHouse_Evento_Mirto::
lock
delay 15
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_1 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_2
waitmovement 0x0
special RemoveCameraObject
playbgm 438, FALSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_3
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_4
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_8 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_5
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_1
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_11 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Azalea_CesarHouse_Evento_Mirto_Move_7
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_6
applymovement 2, Azalea_CesarHouse_Evento_Mirto_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_CAMERA, Azalea_CesarHouse_Evento_Mirto_Move_13
waitmovement 0x0
special RemoveCameraObject
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_POKEBALL_CHIKORITA
removeobject 2
playse SE_EXIT
fadedefaultbgm
delay 40
playse SE_PIN
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_9
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Azalea_CesarHouse_Evento_Mirto_Move_11
waitmovement 0x0
delay 40
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_13 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_14 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_12
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_16 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_17 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Azalea_CesarHouse_Evento_Mirto_Move_12
waitmovement 0x0
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_19 MSGBOX_AUTOCLOSE
msgbox Azalea_CesarHouse_Evento_Mirto_Texto_20 MSGBOX_AUTOCLOSE
delay 40
setvar VAR_UNUSED_0x40F7, 129
@warpsilent MAP_AZALEA_CESAR_HOUSE, 5, 5
@waitstate
release
end

Azalea_CesarHouse_Evento_Mirto_Texto_1:
.string "????: Pero{PAUSE 15}…{PAUSE 15}\n"
	.string "Usted cuenta también con un TIPO\l"
	.string "BICHO que ha sufrido el mismo\l"
	.string "proceso que el mío.$"

Azalea_CesarHouse_Evento_Mirto_Texto_2:
.string "???: Me temo que no pueden\n"
	.string "compararse, MIRTO, son dos TIPO\l"
	.string "BICHO, sí, y ambos se han visto\l"
	.string "afectados por el FUERTE VÍNCULO\l"
	.string "con su ENTRENADOR.$"

Azalea_CesarHouse_Evento_Mirto_Texto_3:
.string "MIRTO: Pero{PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_4:
.string "La diferencia es que mi POKÉMON\n"
	.string "partía de un poder muy\l"
	.string "modesto en general.\p"
	.string "Después del FUERTE VÍNCULO se\n"
	.string "volvió extremadamente eficiente,\l"
	.string "pero solo 'notable' en el global.\p"
	.string "No ha cruzado ningún límite que\n"
	.string "consideremos{PAUSE 25}…{PAUSE 25}sagrado.$"

Azalea_CesarHouse_Evento_Mirto_Texto_5:
.string "Tu POKÉMON, en cambio, ya era\n"
	.string "extraordinario, antes incluso de\l"
	.string "experimentar el FUERTE VÍNCULO.\p"
	.string "Lo que ha resultado de unir algo\n"
	.string "que ya era especial, que ya\l"
	.string "podía codearse con un LEGENDARIO,\l"
	.string "con el FUERTE VÍNCULO{PAUSE 25}…{PAUSE 25} tal\l"
	.string "fenómeno ha cruzado límites ignotos\l"
	.string "para un mortal; una aberración en\l"
	.string "en términos de poder.$"

Azalea_CesarHouse_Evento_Mirto_Texto_6:
.string "En todos mis libros y años de\n"
	.string "experiencia, jamás vi algo\l"
	.string "así. A tu POKÉMON se le ha\l"
	.string "concedido el don de brillar más\l"
	.string "que a ningún otro NO LEGENDARIO,\l"
	.string "pero también está destinado a\l"
	.string "apagarse antes, su poder y\l"
	.string "maldición caminan juntas.$"

Azalea_CesarHouse_Evento_Mirto_Texto_7:
.string "MIRTO: {PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_8:
.string "¿No hay{PAUSE 25}…{PAUSE 25} nada{PAUSE 25}…{PAUSE 25} que pueda hacer?$"

Azalea_CesarHouse_Evento_Mirto_Texto_9:
.string "????: Yo no puedo ayudarte, lo\n"
	.string "siento. Pero{PAUSE 15}…{PAUSE 15}$"

Azalea_CesarHouse_Evento_Mirto_Texto_10:
	.string "There are many wise people in JOHTO. I'm\n"
	.string "not the only TRAINER with such a\l"
	.string "POKÉMON. I suggest you visit the\l"
	.string "PHARMACY in CIANWOOD CITY and\l"
	.string "ECRUTEAK CITY. You might find people\l"
	.string "there who would help you.$"

Azalea_CesarHouse_Evento_Mirto_Texto_11:
.string "MIRTO: Muchas gracias, CÉSAR, no\n"
	.string "perderé un solo segundo.\l"
	.string "Llegaré hasta el último rincón\l"
	.string "de JOHTO si es necesario.$"

Azalea_CesarHouse_Evento_Mirto_Texto_12:
.string "CÉSAR: Vaya, chico, se te ve\n"
	.string "bastante interesado en el tema.\p"
	.string "¿Querías algo?\n"
	.string "¡Pasa!$"

Azalea_CesarHouse_Evento_Mirto_Texto_13:
	.string "So challenging me to a battle? You\n"
	.string "should know I'm retired. I keep the GYM\l"
	.string "for my students, but from now on, I'll\l"
	.string "focus on growing APRICORNS and raising\l"
	.string "my little granddaughter.$"

Azalea_CesarHouse_Evento_Mirto_Texto_14:
.string "Comprenderás que sería injusto\n"
	.string "aceptar combatir contra ti,\l"
	.string "cuando he rechazado al resto\l"
	.string "de contendientes.$"

Azalea_CesarHouse_Evento_Mirto_Texto_15:
.string "Aunque{PAUSE 15}…{PAUSE 15}\n"
	.string "Pareces venir de muy lejos, y\l"
	.string "y ser un apasionado del combate.\p"
	.string "No eres muy diferente a MIRTO.$"

Azalea_CesarHouse_Evento_Mirto_Texto_16:
.string "Te daré una oportunidad, y tendrás\n"
	.string "que demostrar que la mereces.\p"
	.string "Escucha.$"

Azalea_CesarHouse_Evento_Mirto_Texto_17:
	.string "A good friend loves strolling around\n"
	.string "the SLOWPOKE WELL. He's usually deep in\l"
	.string "there, an expert on SLOWPOKE and its\l"
	.string "entire evolutionary line. He knows\l"
	.string "everything about that POKÉMON.$"

Azalea_CesarHouse_Evento_Mirto_Texto_18:
	.string "He's also a good TRAINER, the only one I\n"
	.string "can battle pretty seriously around\l"
	.string "these parts.$"

Azalea_CesarHouse_Evento_Mirto_Texto_19:
.string "Si quieres ese combate, deberás\n"
	.string "derrotarle antes a él, dile que\l"
	.string "vas de mi parte. Si puedes con él,\l"
	.string "te dará un objeto, un objeto\l"
	.string "especial.$"

Azalea_CesarHouse_Evento_Mirto_Texto_20:
	.string "Simply bring back the item here as\n"
	.string "evidence of your victory, and I'll be\l"
	.string "willing to engage in a GYM battle with\l"
	.string "you.$"

Azalea_CesarHouse_Evento_Mirto_Move_1:
walk_in_place_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_3:
face_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_4:
walk_up
walk_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_5:
walk_down
walk_down
walk_in_place_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_7:
delay_16
delay_16
walk_right
face_up
step_end

Azalea_CesarHouse_Evento_Mirto_Move_8:
walk_left
walk_down
walk_left
walk_down
walk_down
walk_down
step_end

Azalea_CesarHouse_Evento_Mirto_Move_9:
emote_exclamation_mark
face_down
step_end

Azalea_CesarHouse_Evento_Mirto_Move_10:
face_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_11:
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_right
step_end

Azalea_CesarHouse_Evento_Mirto_Move_12:
walk_in_place_left
step_end

Azalea_CesarHouse_Evento_Mirto_Move_13:
walk_left
step_end
