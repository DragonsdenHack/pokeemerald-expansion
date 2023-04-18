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
msgbox Azalea_House1_Anciano_Texto_1 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Anciano_Texto_2 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Anciano_Texto_3 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Anciano_Texto_4 MSGBOX_AUTOCLOSE
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
msgbox Azalea_House1_Anciana_Texto_1 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Anciana_Texto_1:
.string "Gracias a ti podremos mantener la\n"
	.string "esencia de este noble arte. No quedará\l"
	.string "engullido por lo nuevo, sino que será\l"
	.string "integrado.$"


Azalea_House1_Activacion_Sotano::
msgbox Azalea_House1_Activacion_Sotano_Texto_1 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_2 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_3 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_4 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_5 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_6 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_7 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_8 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_9 MSGBOX_AUTOCLOSE
msgbox Azalea_House1_Activacion_Sotano_Texto_10 MSGBOX_AUTOCLOSE
release
end

Azalea_House1_Activacion_Sotano_Texto_1:
.string "¡Eh, tú! ¿Qué crees que haces?$"

Azalea_House1_Activacion_Sotano_Texto_2:
.string "Primero entras en una propiedad ajena,\n"
	.string "¿y luego tratas de robarnos comida?\l"
	.string "¡No tienes perdón!$"

Azalea_House1_Activacion_Sotano_Texto_3:
.string "¡No eres un ENTRENADOR corriente!$"

Azalea_House1_Activacion_Sotano_Texto_4:
.string "¿Se puede saber por qué tanta\n"
	.string "insistencia? ¡Aquí no hay nada! ¿No lo\l"
	.string "ves?$"

Azalea_House1_Activacion_Sotano_Texto_5:
.string "¿Qué pretendes demostrar con esto? Si,\n"
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
msgbox Azalea_House1_Primer_Empresario_Texto_1 MSGBOX_AUTOCLOSE
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
msgbox Azalea_House1_Segundo_Empresario_Texto_1 MSGBOX_AUTOCLOSE
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

