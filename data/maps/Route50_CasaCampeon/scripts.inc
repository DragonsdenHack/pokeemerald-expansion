Route50_CasaCampeon_MapScripts::
	.byte 0


Route50_CasaCampeon_Dialogo_Anciana::
lock
faceplayer
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 8
goto_if_gt Route50_CasaCampeon_Dialogo_Anciana_3
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 7
goto_if_gt Route50_CasaCampeon_Dialogo_Anciana_2
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 8
release
end

Route50_CasaCampeon_Dialogo_Anciana_2::
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route50_CasaCampeon_Dialogo_Anciana_3::
msgbox Route50_CasaCampeon_Dialogo_Anciana_Texto_5 MSGBOX_AUTOCLOSE
release
end


Route50_CasaCampeon_Dialogo_Anciana_Texto_1:
.string "¿¡Q…quién?!$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_2:
.string "Oh… pensaba que eras mi marido, que\n"
	.string "había vuelto.$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_3:
.string "Se dedicó a viajar por JOHTO, pero él ya\n"
	.string "conoce todos sus rincones.$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_4:
.string "Ahora creo que está retirado en el\n"
	.string "MT.PLATEADO. ¿Si lo ves podrías\l"
	.string "recordarle este lugar? Dile que yo he\l"
	.string "vuelto.$"

Route50_CasaCampeon_Dialogo_Anciana_Texto_5:
	.string "Gracias a ti, volvemos a estar juntos en\n"
	.string "este lugar. Hace tiempo que habíamos\l"
	.string "perdido el contacto, cada uno con sus\l"
	.string "propios objetivos… Ahora podremos\l"
	.string "disfrutar juntos de esta tranquilidad.$"


Route50_CasaCampeon_Combate_Campeon::
lock
faceplayer
compare VAR_SECRET_BASE_LOW_TV_FLAGS, 9
goto_if_gt Route50_CasaCampeon_Combate_Campeon_2
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route50_CasaCampeon_Combate_Campeon_No
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_1, Route50_CasaCampeon_Combate_Campeon_Texto_5
delay 15
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_7 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_8 MSGBOX_DEFAULT
givemon SPECIES_POIPOLE, 50, ITEM_NONE
waitfanfare
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_9 MSGBOX_AUTOCLOSE
setvar VAR_SECRET_BASE_LOW_TV_FLAGS, 10
release
end

Route50_CasaCampeon_Combate_Campeon_2::
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_10 MSGBOX_AUTOCLOSE
release
end

Route50_CasaCampeon_Combate_Campeon_No::
msgbox Route50_CasaCampeon_Combate_Campeon_Texto_3 MSGBOX_AUTOCLOSE

Route50_CasaCampeon_Combate_Campeon_Texto_1:
.string "¡Ah, {PLAYER}! No creí volver a verte,\n"
	.string "las viejas glorias suelen estar más\l"
	.string "para contemplarlas que para ser\l"
	.string "escuchadas de verdad.$"

Route50_CasaCampeon_Combate_Campeon_Texto_2:
.string "Tú sin embargo pareces querer indagar\n"
	.string "más allà de la superficie. Dime,\l"
	.string "¿echarías un combate con este viejo\l"
	.string "CAMPEÓN?$"

Route50_CasaCampeon_Combate_Campeon_Texto_3:
.string "Tranquilo, no me moveré de aquí. ¡Jo, jo.\n"
	.string "jo!$"

Route50_CasaCampeon_Combate_Campeon_Texto_4:
.string "Así se habla, veamos cómo están las\n"
	.string "nuevas generaciones. ¡Mis técnicas\l"
	.string "VENENO harían llorar a KOGA!$"

Route50_CasaCampeon_Combate_Campeon_Texto_5:
.string "Impresionante, has anulado el veneno\n"
	.string "de mis POKÉMON.$"

Route50_CasaCampeon_Combate_Campeon_Texto_6:
.string "Ahora creo saber quién eres, eres ese\n"
	.string "ENTRENADOR en las sombras. Cuentan\l"
	.string "que enfrentaste a la misma ESENCIA que\l"
	.string "da forma a este mundo, y saliste airoso.\l"
	.string "Sabiendo eso no me extraña nada tu\l"
	.string "nivel.$"

Route50_CasaCampeon_Combate_Campeon_Texto_7:
.string "Te haré un regalo muy especial, una de\n"
	.string "las especies más bizarras que hallé en\l"
	.string "uno de mis muchos viajes.$"

Route50_CasaCampeon_Combate_Campeon_Texto_8:
.string "¡OBTUVISTE UN POIPOLE AL NV.50!$"

Route50_CasaCampeon_Combate_Campeon_Texto_9:
.string "Al crecer, se convierte en uno de los\n"
	.string "POKÉMON más rápidos y letales que\l"
	.string "conozco, muy pocos igualan su\l"
	.string "versatilidad.$"

Route50_CasaCampeon_Combate_Campeon_Texto_10:
.string "Ha sido un placer tener este rato\n"
	.string "contigo, las personas de nuestra edad\l"
	.string "solemos caer en la monotonía y el\l"
	.string "aburrimiento. Por unos momentos tú me\l"
	.string "has hecho sentir lo que es ser un\l"
	.string "verdadero ENTRENADOR, como antaño…$"
