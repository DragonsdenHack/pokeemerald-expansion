LavenderRadio_MapScripts::
	.byte 0


LavenderRadio_1::
lock     
faceplayer     
msgbox LavenderRadio_Text_1, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_1:
.string "¿Qué tal? Mira por donde quieras en\n"
.string "esta planta.$"



LavenderRadio_2::
lock     
faceplayer     
msgbox LavenderRadio_Text_2, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_2:
.string "¿Qué te parece la nueva TORRE RADIO?\n"
.string "¿Llegaste a visitar la TORRE POKÉMON\l"
.string "antes de que fuera demolida?$"




LavenderRadio_3::
lock     
faceplayer     
msgbox LavenderRadio_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_3:
.string "Bienvenido, SR.ADMIN JEFE. Todos aquí\n"
.string "estamos a su disposición para lo que\l"
.string "usted necesite. Le escoltaré hasta los\l"
.string "pisos superiores si así lo desea.$"




LavenderRadio_4::
lock     
faceplayer     
msgbox LavenderRadio_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadio_Text_4:
.string "En la torre radio hay mucha gente que\n"
.string "trabaja duramente. Seguro que están\l"
.string "haciendo lo mejor para poder emitir\l"
.string "buenos programas, aunque nunca he\l"
.string "tenido ocasión de subir a los pisos de\l"
.string "arriba.$"



LavenderRadioDocumento_100::
msgbox LavenderRadioDocumento_Text_100, MSGBOX_SIGN   
end

LavenderRadioDocumento_Text_100:
.string "Anima a tus Pokémon con los\n"
	.string "melodiosos sonidos de la\l"
	.string "Poké Flauta en la Cadena 20$"



LavenderRadioDocumento_101::
msgbox LavenderRadioDocumento_Text_101, MSGBOX_SIGN   
end

LavenderRadioDocumento_Text_101:
	.string "1er Piso - Recepción\n"
	.string "2do Piso - Producción y Ventas\l"
	.string "3er Piso - Oficina del Director\l"
	.string "4to Piso - Terraza$"

LavenderRadio_Evento_Guay::
msgbox LavenderRadio_Evento_Guay_Texto_1 MSGBOX_AUTOCLOSE
msgbox LavenderRadio_Evento_Guay_Texto_2 MSGBOX_AUTOCLOSE
msgbox LavenderRadio_Evento_Guay_Texto_3 MSGBOX_AUTOCLOSE
msgbox LavenderRadio_Evento_Guay_Texto_4 MSGBOX_AUTOCLOSE
release
end

LavenderRadio_Evento_Guay_Texto_1:
.string "POLICIA: Lo siento, pero solo puedes\n"
	.string "dar una vuelta por la planta baja.\l"
	.string "Desde que una banda criminal asaltó la\l"
	.string "SEDE SILPH, tuvimos que incrementar\l"
	.string "las medidas de seguridad.$"

LavenderRadio_Evento_Guay_Texto_2:
.string "ENTR.GUAY: ¡Jo! ¡Con la ilusión que me\n"
	.string "hacía ver las plantas de arriba! ¡Ya no\l"
	.string "se puede entrar tampoco a SILPH, KANTO\l"
	.string "está vacía!$"

LavenderRadio_Evento_Guay_Texto_3:
.string "POLICÍA: KANTO está más llena que\n"
	.string "nunca… para las personas adecuadas.$"

LavenderRadio_Evento_Guay_Texto_4:
.string "Le estábamos esperando, ADMIN.JEFE\n"
	.string "{PLAYER}. Tenemos preparada una\l"
	.string "ceremonia de inauguración en la\l"
	.string "azotea, puede visitar los pisos\l"
	.string "superiores cuando guste.$"

