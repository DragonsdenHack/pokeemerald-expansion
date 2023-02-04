Indigo_Johto_MapScripts::
	.byte 0

IndigoJohto1::
lock     
faceplayer     
msgbox IndigoJohto_Text_1, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_1:
.string "Discúlpeme, ADMIN.JEFE {PLAYER}, no\n"
.string "sabía que era usted alguien tan\l"
.string "importante.$"



IndigoJohto2::
lock     
faceplayer     
msgbox IndigoJohto_Text_2, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_2:
.string "KANTO y JOHTO de nuevo formando\n"
.string "una sola LIGA POKÉMON, ¿puedes\l"
.string "imaginarlo?$"



IndigoJohto3::
lock     
faceplayer     
msgbox IndigoJohto_Text_3, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_3:
.string "El MONTE PLATEADO siempre fue la\n"
.string "gran frontera que marcaba el\l"
.string "territorio de KANTO y JOHTO.\l"
.string "Después de que JOHTO ganara la\l"
.string "guerra se quedó también con la\l"
.string "disputa de RUTA 26. Tal vez, ahora\l"
.string "que mejoran las relaciones, esta\l"
.string "ruta vuelva a considerarse algo\l"
.string "así como de transición entre ambas\l"
.string "regiones.$"



IndigoJohto5::
lock     
faceplayer     
msgbox IndigoJohto_Text_5, MSGBOX_DEFAULT
release     
end

IndigoJohto_Text_5:
.string "LANCE debería de pagar\n"
.string "públicamente por sus crímenes,\l"
.string "aunque revelar la verdad sería\l"
.string "demasiado duro para la sociedad.$"



IndigoJohto7::
end

Indigo_Johto_Atlas::
msgbox Indigo_Johto_Atlas_Texto_1 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_2 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_3 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_4 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_5 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_6 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_7 MSGBOX_AUTOCLOSE
msgbox Indigo_Johto_Atlas_Texto_8 MSGBOX_AUTOCLOSE
release
end

Indigo_Johto_Atlas_Texto_1:
.string "Solo ex-campeones o gente\n"
	.string "involucrada directamente con este\l"
	.string "lugar pueden pasar de aquí, son\l"
	.string "las reglas.$"

Indigo_Johto_Atlas_Texto_2:
.string "Cuida tus palabras, POLICÍA, estás\n"
	.string "hablando con el verdadero CAMPEÓN\l"
	.string "de KANTO.$"

Indigo_Johto_Atlas_Texto_3:
.string "A-ATLAS, yo no sab...$"

Indigo_Johto_Atlas_Texto_4:
.string "ATLAS: Ahora ya lo sabes, ¿tengo\n"
	.string "que recordarte también que los 3\l"
	.string "ADMINISTRADORES JEFE del TEAM\l"
	.string "ROCKET tienen acceso a este lugar?\l"
	.string "{PLAYER} merece entonces entrar\l"
	.string "aquí por partida doble.$"

Indigo_Johto_Atlas_Texto_5:
.string "Disculpe, señor ATLAS, no volverá a\n"
	.string "ocurrir.$"

Indigo_Johto_Atlas_Texto_6:
.string "Veo que no malgastas tu tiempo,\n"
	.string "{PLAYER}, puede que te encuentres\l"
	.string "con más de una sorpresa aquí.$"

Indigo_Johto_Atlas_Texto_7:
.string "Supongo que lo sabes, pero estamos\n"
	.string "a escasos metros del acceso a la\l"
	.string "LIGA POKÉMON de KANTO. GIOVANNI\l"
	.string "planea unir este punto de control\l"
	.string "y el de KANTO en uno solo, para\l"
	.string "así hacer oficial la unión de las\l"
	.string "2 regiones en una sola LIGA\l"
	.string "POKÉMON.$"

Indigo_Johto_Atlas_Texto_8:
.string "Estamos en plena etapa de\n"
	.string "transición, {PLAYER}, vivirla desde\l"
	.string "nuestro prisma será vital para\l"
	.string "comprender el porqué de muchas\l"
	.string "cosas en el futuro.$"

Indigo_Johto_Atlas_Move_1:
face_left
step_end

Indigo_Johto_Atlas_Move_2:
walk_in_place_right
step_end

Indigo_Johto_Atlas_Move_3:
emote_exclamation_mark
face_up
step_end

Indigo_Johto_Atlas_Move_4:
face_up
step_end

Indigo_Johto_Atlas_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Indigo_Johto_Atlas_Move_6:
walk_left
walk_down
step_end

Indigo_Johto_Atlas_Move_7:
face_down
step_end

Indigo_Johto_Atlas_Move_8:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
step_end
