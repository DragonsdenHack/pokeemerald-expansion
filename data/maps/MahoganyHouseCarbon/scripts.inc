MahoganyHouseCarbon_MapScripts::
	.byte 0


MahoganyHouseCarbon_Secundaria::
compare VAR_FORTREE_CITY_STATE, 1
goto_if_gt MahoganyHouseCarbon_Secundaria_2
lock
msgbox MahoganyHouseCarbon_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox MahoganyHouseCarbon_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_1
waitmovement 0x0
delay 10
msgbox MahoganyHouseCarbon_Secundaria_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MahoganyHouseCarbon_Secundaria_No
msgbox MahoganyHouseCarbon_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_2
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_3
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_4
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
msgbox MahoganyHouseCarbon_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_3
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_2
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
applymovement 2, MahoganyHouseCarbon_Secundaria_Move_3
waitmovement 0x0
msgbox MahoganyHouseCarbon_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MOM_OUTSIDE
setvar VAR_FORTREE_CITY_STATE, 2
release
end

MahoganyHouseCarbon_Secundaria_No::
msgbox MahoganyHouseCarbon_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
release
end

MahoganyHouseCarbon_Secundaria_Move_4:
walk_in_place_up
step_end

MahoganyHouseCarbon_Secundaria_Move_2:
face_right
step_end

MahoganyHouseCarbon_Secundaria_Move_3:
face_player
step_end

MahoganyHouseCarbon_Secundaria_Move_1:
emote_exclamation_mark
face_player
step_end

MahoganyHouseCarbon_Secundaria_2::
lock
faceplayer
msgbox MahoganyHouseCarbon_Secundaria_Texto_13 MSGBOX_AUTOCLOSE
release
end

MahoganyHouseCarbon_Secundaria_Texto_1:
.string "Esos malditos empresarios… nos la han\n"
	.string "jugado a mi y a mi mujer.$"

MahoganyHouseCarbon_Secundaria_Texto_2:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

MahoganyHouseCarbon_Secundaria_Texto_3:
.string "¿Tú nos ayudarías?$"

MahoganyHouseCarbon_Secundaria_Texto_4:
.string "Lo entiendo, es muy peligroso.$"

MahoganyHouseCarbon_Secundaria_Texto_5:
.string "Somos los antiguos fabricantes de\n"
	.string "CARBÓN, en PUEBLO AZALEA. Hace unos\l"
	.string "meses recibimos una oferta de una\l"
	.string "empresa.$"

MahoganyHouseCarbon_Secundaria_Texto_6:
.string "Nos prometieron expandir nuestro\n"
	.string "pequeño negocio de CARBÓN a toda\l"
	.string "JOHTO e incluso a otras regiones. A\l"
	.string "nosotros nos era indiferente, ya\l"
	.string "estábamos contentos con abastecer a\l"
	.string "PUEBLO AZALEA y alrededores.$"

MahoganyHouseCarbon_Secundaria_Texto_7:
.string "Pero nos acabaron convenciendo, el\n"
	.string "caso es que el acuerdo, que en un inicio\l"
	.string "era una colaboración, acabó siendo lo\l"
	.string "contrario.$"

MahoganyHouseCarbon_Secundaria_Texto_8:
.string "Nos engañaron con el contrato, y con\n"
	.string "ello se quedaron con nuestra casa en\l"
	.string "AZALEA, junto con el pequeño horno que\l"
	.string "teníamos en el sótano.$"

MahoganyHouseCarbon_Secundaria_Texto_9:
.string "Dijeron que ya no éramos aptos para\n"
	.string "continuar con esa tarea, y finalmente\l"
	.string "nos vimos obligados a venir aquí.$"

MahoganyHouseCarbon_Secundaria_Texto_10:
.string "Si fueras a PUEBLO AZALEA… a la que aún\n"
	.string "es nuestra casa, tal vez alguien como\l"
	.string "tú pudiera hacer algo. Para entrar en\l"
	.string "nuestro sótano solo tienes que\l"
	.string "apretar un botón secreto, justo detrás\l"
	.string "del cuadro junto a la ventana.$"

MahoganyHouseCarbon_Secundaria_Texto_11:
.string "Dos ancianos como nosotros ya nada\n"
	.string "pueden hacer, tal vez tú, que eres\l"
	.string "joven, puedas recuperar por la fuerza\l"
	.string "lo que la ley nos ha arrebatado.$"

MahoganyHouseCarbon_Secundaria_Texto_12:
.string "Si llegaras a hacerlo, no solo\n"
	.string "conservarías parte del patrimonio de\l"
	.string "JOHTO. Mi mujer y yo te estaremos\l"
	.string "agradecidos de por vida.$"

MahoganyHouseCarbon_Secundaria_Texto_13:
.string "¿Pudiste entrar? Nuestra casa de\n"
	.string "PUEBLO AZALEA está justo al lado del\l"
	.string "GIMNASIO, al este del pueblo. Nuestra\l"
	.string "entrada secreta se activa con un botón,\l"
	.string "en el cuadro junto a la ventana.$"

MahoganyHouseCarbon_Anciana::
lock
msgbox MahoganyHouseCarbon_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
release
end
