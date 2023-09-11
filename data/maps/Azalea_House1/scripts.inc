Azalea_House1_MapScripts::
	.byte 0

AzaleaHouse1_1::
lock     
faceplayer     
msgbox AzaleaHouse1_Text_1, MSGBOX_DEFAULT
release     
end

AzaleaHouse1_Text_1:
.string "Hace poco, vino un\n"
.string "representante de SILPH todo\l"
.string "trajeado. Estuvo un buen rato en\l"
.string "casa de CÉSAR. Creo que están\l"
.string "interesados en la variedad de POKÉ\l"
.string "BALL que pueden hacerse con los\l"
.string "BONGURIS.$"



AzaleaHouse1_2::
lock     
faceplayer     
msgbox AzaleaHouse1_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaHouse1_Text_2:
.string "Antiguamente todos atrapaban\n"
.string "POKÉMON con BONGURIS caseros.\l"
.string "CÉSAR ya ha dicho que pronto\l"
.string "dejará el GIMNASIO para dedicarse\l"
.string "a hacer BONGURIS.$"


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
.string "Jamás olvidaremos lo que has hecho por\n"
	.string "nosotros. Quiero que te quedes con\l"
	.string "este POKÉMON.$"

Azalea_House1_Anciano_Texto_2:
.string "¡OBTUVISTE UN MADAAMU AL NV.70!$"

Azalea_House1_Anciano_Texto_3:
.string "Es uno de esos antiguos POKÉMON,\n"
	.string "pertenecientes a la vieja JOHTO rural.\l"
	.string "Hoy en día están extintos en estado\l"
	.string "salvaje. Sabemos que es la evolución de\l"
	.string "FARFETCHD, pero nadie ha logrado\l"
	.string "obtenerlo a partir de uno.$"

Azalea_House1_Anciano_Texto_4:
.string "Forma parte de nuestro pequeño\n"
	.string "secreto en la elaboración del CARBÓN,\l"
	.string "no te preocupes, aún tenemos el\l"
	.string "MADAAMU de mi mujer. Espero que cuides\l"
	.string "de el mío, su poder destructivo es muy\l"
	.string "grande.$"

Azalea_House1_Anciano_Texto_5:
.string "Nos has dado paz, en este mundo tan\n"
	.string "cambiante e inestable. Jamás lo\l"
	.string "olvidaremos.$"


Azalea_House1_Anciana::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 0
goto_if_eq AzaleaHouse1_2
msgbox Azalea_House1_Anciana_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Anciana_Texto_1:
.string "Gracias a ti podremos mantener la\n"
	.string "esencia de este noble arte. No quedará\l"
	.string "engullido por lo nuevo, sino que será\l"
	.string "integrado.$"


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
.string "¿Quieres acceder al sótano secreto?$"

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
.string "(Parece el cuadro del que hablaba el\n"
	.string "anciano... Hay un botón secreto detrás,\l"
	.string "¿quieres pulsarl...?)$"

Azalea_House1_Activacion_Sotano_Texto_1.1:
.string "(Este cuadro es un poco raro, no parece\n"
	.string "un cuadro cualquiera...)$"

Azalea_House1_Activacion_Sotano_Texto_1:
.string "¡Eh, tú! ¿Qué crees que haces?$"

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

