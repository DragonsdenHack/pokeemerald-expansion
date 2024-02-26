Azalea_House1_MapScripts::
	.byte 0

AzaleaHouse1_1::
lock     
faceplayer     
msgbox AzaleaHouse1_Text_1, MSGBOX_DEFAULT
release     
end

AzaleaHouse1_Text_1:
	.string "Recently, someone from SILPH came, all\n"
	.string "dressed up. He spent quite some time at\l"
	.string "KURT's house. I think they're interested\l"
	.string "in the variety of POKÉ BALLS that can\l"
	.string "be made with the APRICORNS.$"



AzaleaHouse1_2::
lock     
faceplayer     
msgbox AzaleaHouse1_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaHouse1_Text_2:
	.string "In the past, everyone used homemade\n"
	.string "APRICORN-based POKÉ BALLS to catch\l"
	.string "POKÉMON. KURT has already said that\l"
	.string "soon he will leave the GYM to focus on\l"
	.string "elaborating APRICORNS.$"


Azalea_House1_Anciano::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 0
goto_if_eq AzaleaHouse1_1
compare VAR_FORTREE_CITY_STATE, 8
goto_if_gt Azalea_House1_Anciano_2
msgbox Azalea_House1_Anciano_Texto_1 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Azalea_House1_Anciano_Texto_2 MSGBOX_DEFAULT
givemon SPECIES_MADAAMU, 70, ITEM_NONE
waitfanfare
msgbox Azalea_House1_Anciano_Texto_3 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Anciano_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 9
release
end

Azalea_House1_Anciano_2::
msgbox Azalea_House1_Anciano_Texto_5 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Anciano_Texto_1:
	.string "We'll never forget what you've done for\n"
	.string "us. I want you to have this POKÉMON.$"

Azalea_House1_Anciano_Texto_2:
.string "YOU OBTAINED A LV.70 MADAAMU!$"

Azalea_House1_Anciano_Texto_3:
	.string "It's one of those ancient POKÉMON,\n"
	.string "native to old rural JOHTO. Nowadays,\l"
	.string "they're extinct in the wild. We know it's\l"
	.string "the evolution of FARFETCH'D, but no one\l"
	.string "has managed to obtain one from it.$"

Azalea_House1_Anciano_Texto_4:
	.string "It's a key part of our secret\n"
	.string "CHARCOAL-making process, but don't\l"
	.string "fret, we still have my wife's MADAAMU.\l"
	.string "Just make sure you take good care of\l"
	.string "mine; its destructive power is insane.$"

Azalea_House1_Anciano_Texto_5:
	.string "Your actions have provided us with\n"
	.string "peace in this world of constant change\l"
	.string "and instability. We will always remember\l"
	.string "your kindness.$"


Azalea_House1_Anciana::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 0
goto_if_eq AzaleaHouse1_2
msgbox Azalea_House1_Anciana_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Anciana_Texto_1:
	.string "Your contribution ensures the essence\n"
	.string "of this noble art. It won't be\l"
	.string "overshadowed by the new; instead, it\l"
	.string "will be integrated.$"


Azalea_House1_Activacion_Sotano::
compare VAR_FORTREE_CITY_STATE, 2
goto_if_gt Azalea_House1_Activacion_Sotano_3
compare VAR_FORTREE_CITY_STATE, 1
goto_if_gt Azalea_House1_Activacion_Sotano_2
msgbox Azalea_House1_Activacion_Sotano_Texto_1.1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Activacion_Sotano_3::
msgbox Azalea_House1_Activacion_Sotano_Texto_1.3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Azalea_House1_Activacion_Sotano_3_No
delay 20
playse SE_ICE_CRACK
delay 40
playse SE_UNLOCK
setmetatile 1, 0, 0x13A, TRUE
setmetatile 2, 0, 0x13B, TRUE
setmetatile 3, 0, 0x13C, FALSE
setmetatile 3, 1, 0x144, FALSE
setmetatile 2, 1, 0x143, TRUE
setmetatile 1, 1, 0x142, TRUE
special DrawWholeMapView
release
end

Azalea_House1_Activacion_Sotano_Texto_1.3:
.string "Would you like to enter the secret basement?$"

Azalea_House1_Activacion_Sotano_3_No::
release
end


Azalea_House1_Activacion_Sotano_2::
msgbox Azalea_House1_Activacion_Sotano_Texto_1.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Azalea_House1_Activacion_Sotano_Move_1
applymovement 3, Azalea_House1_Activacion_Sotano_Move_2
applymovement 4, Azalea_House1_Activacion_Sotano_Move_3
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_ROCKET
applymovement 3, Azalea_House1_Activacion_Sotano_Move_4
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_116, Azalea_House1_Activacion_Sotano_Texto_3
msgbox Azalea_House1_Activacion_Sotano_Texto_4 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Azalea_House1_Activacion_Sotano_Move_3
waitmovement 0x0
playse SE_ICE_CRACK
msgbox Azalea_House1_Activacion_Sotano_Texto_6 MSGBOX_AUTOCLOSE
playse SE_UNLOCK
setmetatile 1, 0, 0x13A, TRUE
setmetatile 2, 0, 0x13B, TRUE
setmetatile 3, 0, 0x13C, FALSE
setmetatile 3, 1, 0x144, FALSE
setmetatile 2, 1, 0x143, TRUE
setmetatile 1, 1, 0x142, TRUE
special DrawWholeMapView
playse SE_PIN
applymovement 3, Azalea_House1_Activacion_Sotano_Move_2
applymovement 4, Azalea_House1_Activacion_Sotano_Move_2
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, Azalea_House1_Activacion_Sotano_Move_5
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_8 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, Azalea_House1_Activacion_Sotano_Move_5
waitmovement 0x0
msgbox Azalea_House1_Activacion_Sotano_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 3
release
end

Azalea_House1_Activacion_Sotano_Move_5:
walk_in_place_up
step_end


Azalea_House1_Activacion_Sotano_Move_4:
walk_up
step_end

Azalea_House1_Activacion_Sotano_Move_1:
face_down
step_end

Azalea_House1_Activacion_Sotano_Move_2:
face_up
emote_exclamation_mark
step_end

Azalea_House1_Activacion_Sotano_Move_3:
face_up
step_end


Azalea_House1_Activacion_Sotano_Texto_1.2:
	.string "(It looks like the painting the old man\n"
	.string "mentioned… There's a secret button\l"
	.string "behind it. Do you want to press it…?)$"

Azalea_House1_Activacion_Sotano_Texto_1.1:
	.string "(There's something unusual about this\n"
	.string "painting, it doesn't seem like an\l"
	.string "ordinary one…)$"

Azalea_House1_Activacion_Sotano_Texto_1:
	.string "Hey, you! What are you doing?$"

Azalea_House1_Activacion_Sotano_Texto_2:
.string "Primero entras en una propiedad ajena,\n"
	.string "¿y luego tratas de robarnos?\l"
	.string "¡No tienes perdón!$"

Azalea_House1_Activacion_Sotano_Texto_3:
.string "¡No eres un ENTRENADOR corriente!$"

Azalea_House1_Activacion_Sotano_Texto_4:
.string "¿Se puede saber por qué tanta\n"
	.string "insistencia? ¡Aquí no hay nada! ¿No lo\l"
	.string "ves?$"

Azalea_House1_Activacion_Sotano_Texto_5:
.string "¿Qué pretendes demostrar con esto? Sí,\n"
	.string "combates bien, ¿qué import…?$"

Azalea_House1_Activacion_Sotano_Texto_6:
.string "({PLAYER} APRETÓ EL BOTÓN SECRETO)$"

Azalea_House1_Activacion_Sotano_Texto_7:
.string "Grrrr…. Maldito, lo sabías desde el\n"
	.string "principio.$"

Azalea_House1_Activacion_Sotano_Texto_8:
.string "No sé cómo esos ancianos han podido\n"
	.string "contactar contigo, pero da igual quién\l"
	.string "seas.$"

Azalea_House1_Activacion_Sotano_Texto_9:
.string "Hemos reconstruido por completo el\n"
	.string "pequeño sótano dónde forjaban el\l"
	.string "CARBÓN, ahora es una gran nave\l"
	.string "subterránea que fabricará el mineral a\l"
	.string "gran escala.$"

Azalea_House1_Activacion_Sotano_Texto_10:
.string "Alégrate, abasteceremos a toda la\n"
	.string "región. ¡Quieras o no!$"

Azalea_House1_Primer_Empresario::
compare VAR_FORTREE_CITY_STATE, 2
goto_if_gt Azalea_House1_Primer_Empresario_2
msgbox Azalea_House1_Primer_Empresario_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Primer_Empresario_2::
lock
faceplayer
msgbox Azalea_House1_Primer_Empresario_Texto_2 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Primer_Empresario_Texto_1:
.string "Ya está todo firmado, oficialmente este\n"
	.string "lugar nos pertenece.$"

Azalea_House1_Primer_Empresario_Texto_2:
.string "Como entres ahí, serás usado como\n"
	.string "producto para la fabricación de\l"
	.string "CARBÓN. Advertido quedas.$"



Azalea_House1_Segundo_Empresario::
compare VAR_FORTREE_CITY_STATE, 2
goto_if_gt Azalea_House1_Segundo_Empresario_2
msgbox Azalea_House1_Segundo_Empresario_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Segundo_Empresario_2::
lock
faceplayer
msgbox Azalea_House1_Segundo_Empresario_Texto_2 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Segundo_Empresario_Texto_1:
.string "Vamos a ganar millones aquí, fue una\n"
	.string "suerte para nosotros aprovecharnos de\l"
	.string "ese vacío legal.$"

Azalea_House1_Segundo_Empresario_Texto_2:
.string "Más vale que no cabrees a nuestro JEFE,\n"
	.string "una palabra de más e irás al horno de\l"
	.string "cabeza con todos tus POKÉMON detrás.$"

