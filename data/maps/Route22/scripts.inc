Route22_MapScripts::
	.byte 0


Route22Documento_100::
msgbox Route22Documento_Text_100, MSGBOX_SIGN   
end

Route22Documento_Text_100:
.string "ENTRADA A LA LIGA POKÉMON$"

Route22_Combate_Azul::
msgbox Route22_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route22_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
release
end

Route22_Combate_Azul_Texto_1:
.string "AZUL: Así que tu también estás\n"
	.string "listo.$"

Route22_Combate_Azul_Texto_2:
.string "Acabo de volver de entrenar en la\n"
	.string "CALLE VICTORIA, aún no me atrevo a\l"
	.string "entrar al ALTO MANDO...$"

Route22_Combate_Azul_Texto_3:
.string "... ...$"

Route22_Combate_Azul_Texto_4:
.string "La verdad es que ROJO ha vuelto a\n"
	.string "derrotarme, no puedo entrar a la\l"
	.string "LIGA sabiendo que el aún está por\l"
	.string "encima mía, debo asegurarme de que\l"
	.string "mi equipo es mucho mejor que el de\l"
	.string "ese entonces.$"

Route22_Combate_Azul_Texto_5:
.string "No te preocupes, ROJO siempre ha\n"
	.string "sido un tardón, llegará de todos\l"
	.string "modos después de mi a retar al\l"
	.string "ALTO MANDO, siempre pasa, además\l"
	.string "ya he estado en el CENTRO POKÉMON\l"
	.string "de allí, puedo volver volando en\l"
	.string "un momento.$"

Route22_Combate_Azul_Texto_6:
.string "Solo estoy buscando algo de\n"
	.string "entrenamiento extra, los\l"
	.string "ENTRENADORES de la CALLE VICTORIA\l"
	.string "no son suficiente, necesito algo\l"
	.string "más, vamos, estamos en el mismo\l"
	.string "bando, ¡quiero ver lo preparado\l"
	.string "que estás para afrontar este reto!$"

Route22_Combate_Azul_Texto_7:
.string "¡No puede ser, tú también!$"

Route22_Combate_Azul_Texto_8:
.string "Esto no puede ser, mis POKÉMON\n"
	.string "necesitan más nivel, no pararé\l"
	.string "hasta que sobrepasen del 60, con\l"
	.string "eso nadie podrá toserme.$"

Route22_Combate_Azul_Texto_9:
.string "Por cierto, ¿no sabrás por\n"
	.string "casualidad dónde está esa amiguita\l"
	.string "tuya, ANDRA?\l"
	.string "Debe de contar también con un buen\l"
	.string "equipo a sus espaldas, si de\l"
	.string "realmente piensa retar al ALTO MANDO,\l"
	.string "veré si la encuentro más adelante\l"
	.string "y me sirve para subir unos cuantos\l"
	.string "niveles más.$"

Route22_Combate_Azul_Texto_10:
.string "Bah, me largo {PLAYER}, el tiempo\n"
	.string "es oro llegados este momento, te\l"
	.string "deseo suerte, de verdad, si\l"
	.string "quisiera que alguien saliera\l"
	.string "CAMPEÓN e hiciera morder el polvo\l"
	.string "a ROJO aparte de mi, ese serías\l"
	.string "tú.$"

Route22_Combate_Azul_Texto_11:
.string "Y una última cosa, ni se te ocurra\n"
	.string "recoger los CARAMELOSRAROS que\l"
	.string "encuentres, ¡son míos!$"

Route22_Combate_Azul_Move_1:
walk_in_place_up
emote_exclamation_mark
step_end

Route22_Combate_Azul_Move_2:
walk_left
walk_in_place_down
step_end

Route22_Combate_Azul_Move_3:
face_left
step_end

Route22_Combate_Azul_Move_4:
walk_in_place_down
step_end

Route22_Combate_Azul_Move_5:
face_up
step_end

Route22_Combate_Azul_Move_6:
walk_up
step_end

Route22_Combate_Azul_Move_7:
face_down
step_end
