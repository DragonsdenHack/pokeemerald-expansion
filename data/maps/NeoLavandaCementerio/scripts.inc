NeoLavandaCementerio_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, NeoLavandaCementerio_OnResume
	.byte 0

NeoLavandaCementerio_OnResume:
	call NeoLavandaCementerio_SetupEscapeWarp
	end

NeoLavandaCementerio_SetupEscapeWarp::
	setescapewarp MAP_NEO_LAVANDA_PUEBLO, 18, 17
	return

NeoLavandaCementerio_1::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_1, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_1:
.string "Creo que aquí hay otras tumbas de\n"
.string "POKÉMON. Hay muchas cámaras en las que\l"
.string "solo el SR.FUJI y antiguos miembros de\l"
.string "PUEBLO LAVANDA pueden entrar.$"




NeoLavandaCementerio_2::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_2:
.string "He venido a rendir homenaje a las\n"
.string "tumbas de los POKÉMON.$"




NeoLavandaCementerio_3::
lock     
faceplayer     
msgbox NeoLavandaCementerio_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerio_Text_3:
.string "A los POKÉMON que vivían conmigo{PAUSE 25}…{PAUSE 25} los\n"
.string "quería como a mis nietos.$"


NeoLavandaCementerio_Dialogo_Fuji::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 217
goto_if_gt NeoLavandaCementerio_Dialogo_Fuji_Despues
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_5 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, NeoLavandaCementerio_Dialogo_Fuji_Move_1
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerio_Dialogo_Fuji_Move_1
waitmovement 0x0
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, NeoLavandaCementerio_Dialogo_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavandaCementerio_Dialogo_Fuji_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
fadescreen 1
delay 20
removeobject 4
fadescreen 0
release
end

NeoLavandaCementerio_Dialogo_Fuji_Move_1:
face_left
step_end

NeoLavandaCementerio_Dialogo_Fuji_Move_2:
face_player
step_end



NeoLavandaCementerio_Dialogo_Fuji_Texto_1:
.string "FUJI: Si algo bueno tiene PUEBLO\n"
	.string "LAVANDA, es que es tan pequeño que\l"
	.string "todo está al lado, ¿no crees?$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_2:
.string "Debo decirte que estoy muy contento\n"
	.string "con el resultado final del CEMENTERIO,\l"
	.string "todas las almas han sido trasladadas\l"
	.string "con éxito, el problema es que{PAUSE 5}…{PAUSE 5}$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_3:
.string "Parece que no todas han visto con\n"
	.string "buenos ojos el cambio de aires. Siguen\l"
	.string "apegadas a la antigua TORRE POKÉMON.$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_4:
.string "Tal vez tú puedas calmarla, ya viviste\n"
	.string "algo parecido en RUINAS ALFA, ¿no? La\l"
	.string "energía que aquí se ha manifestado es\l"
	.string "muy poderosa.$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_5:
.string "{PAUSE 5}…{PAUSE 5}$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_6:
.string "Observa, si interactúas con el\n"
	.string "ordenador podrás acceder a los pisos\l"
	.string "inferiores del CEMENTERIO. ¿Dónde iban\l"
	.string "a estar el resto de tumbas si no?$"

NeoLavandaCementerio_Dialogo_Fuji_Texto_7:
.string "Te espero abajo, {PLAYER}. Búscame en\n"
	.string "el S2, estaré con la secretaria de esa\l"
	.string "planta, allí es donde está el foco de\l"
	.string "energía.$"

Cementerio_PC::
compare VAR_UNUSED_0x40F7, 207
goto_if_gt Cementerio_Warp
msgbox RocketHideout_4F_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

Cementerio_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 14, 12, 0x282, FALSE
setmetatile 14, 11, 0x2C0, FALSE
setmetatile 14, 10, 0x2B8, FALSE
setmetatile 14, 9, 0x2B0, FALSE
setmetatile 15, 11, 0x2C1, TRUE
setmetatile 15, 10, 0x2B9, TRUE
setmetatile 15, 9, 0x2B1, TRUE
setmetatile 16, 11, 0x2C2, TRUE
setmetatile 16, 10, 0x2BA, TRUE
setmetatile 16, 9, 0x2B2, TRUE
special DrawWholeMapView
delay 60
release
end

NeoLavandaCementerio_Fuji::
lock
faceplayer
msgbox NeoLavandaCementerio_Fuji_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerio_Fuji_Texto_1:
.string "Puedes volver a entrar al CEMENTERIO\n"
	.string "cuando quieras, {PLAYER}. Aunque ya\l"
	.string "no será lo mismo, la nueva cara visible\l"
	.string "es TORRE RADIO, para los que lleguen de\l"
	.string "fuera, este lugar y sus pisos\l"
	.string "subterráneos no existen.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues::
lock
compare VAR_ROUTE120_STATE, 1
goto_if_gt Fuji_Despues_2
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, Fuji_Despues_Move_1
waitmovement 0x0
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, Fuji_Despues_Move_2
waitmovement 0x0
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE120_STATE, 2
release
end

Fuji_Despues_2::
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Fuji_Despues_2_No
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_10 MSGBOX_AUTOCLOSE
clearflag FLAG_UNKNOWN_0x363
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_MOM
fadescreen 1
delay 20
removeobject 4
fadescreen 0
setvar VAR_ROUTE120_STATE, 3
release
end

Fuji_Despues_2_No::
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_8 MSGBOX_AUTOCLOSE
release
end

Fuji_Despues_Move_2:
face_player
step_end

Fuji_Despues_Move_1:
face_up
step_end

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_1:
	.string "FUJI: Echando la vista atrás, veo todo\n"
	.string "lo que KANTO ha cambiado en muy poco\l"
	.string "tiempo.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_2:
	.string "No solo PUEBLO LAVANDA, ¿has visto el\n"
	.string "TÚNEL ROCA?$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_3:
	.string "Desde que los CUBONE empezaron a\n"
	.string "emigrar allí, su interior ha cambiado\l"
	.string "considerablemente.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_4:
	.string "La verdad es que… hay algo que me\n"
	.string "inquieta. Aunque, a mi pesar, soy\l"
	.string "demasiado viejo como para ponerme a\l"
	.string "investigar solo.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_5:
	.string "Sé que eres un hombre ocupado, y no\n"
	.string "merezco pedirte más. Pero si tienes un\l"
	.string "hueco, me haría muy feliz que\l"
	.string "acompañaras a este anciano en una\l"
	.string "última aventura.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_6:
	.string "Háblame cuando tengas tiempo,\n"
	.string "{PLAYER}.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_7:
	.string "Dime, ¿acompañarías a este pobre\n"
	.string "anciano en su última aventura?$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_8:
	.string "No te preocupes, seguiré esperando. Es\n"
	.string "algo que he aprendido a hacer muy bien.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_9:
	.string "Oh, {PLAYER}. ¡No sabes lo feliz que me\n"
	.string "haces!$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Texto_10:
	.string "Te espero al pie del TÚNEL ROCA\n"
	.string "entonces. Allí nos vemos.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final::
lock
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_1 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_2 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_3 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_4 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_5 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_6 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_7 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_8 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_9 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_10 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_11 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_12 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_13 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_14 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_15 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_1:
	.string "No me equivoqué al pedirte ayuda.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_2:
	.string "Sin tu combate con GUARDIA, mi MAROWAK\n"
	.string "no hubiera tenido ninguna oportunidad\l"
	.string "de hacerle entrar en razón.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_3:
	.string "Y no solo eso. Con tus acciones, KANTO\n"
	.string "ha ganado una joven y magnífica LÍDER.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_4:
	.string "… …$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_5:
	.string "Es un secreto pero… yo destapé sin\n"
	.string "querer uno de vuestros secretos\l"
	.string "también.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_6:
	.string "Me siento en deuda contigo, y lo más\n"
	.string "valioso que tengo para darte es esto.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_7:
	.string "¡¡{PLAYER} obtuvo un MEW al nv.90!!$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_8:
	.string "Tampoco te vuelvas loco, {PLAYER}.\n"
	.string "Por supuesto que no es el MEW\l"
	.string "auténtico, ¡jo, jo, jo!$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_9:
	.string "En muestra de gratitud por construir el\n"
	.string "CEMENTERIO, GIOVANNI me regaló este\l"
	.string "clon.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_10:
	.string "Con MEWTWO como opción, hacer un clon\n"
	.string "de MEW no tiene mucho sentido.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_11:
	.string "Pero GIOVANNI sabía que, para mí, el\n"
	.string "valor simbólico y sentimental de MEW\l"
	.string "pesaba mucho más que el valor\l"
	.string "competitivo que pueda tener MEWTWO.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_12:
	.string "Tener este clon me ha traído\n"
	.string "agradables recuerdos del pasado. Pero\l"
	.string "un POKÉMON así como más feliz está es\l"
	.string "viviendo aventuras.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_13:
	.string "Sería un pecado por mi parte mantener\n"
	.string "este MEW enjaulado en PUEBLO LAVANDA.\l"
	.string "Aunque sea una copia, el original\l"
	.string "estaría de acuerdo conmigo…$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_14:
	.string "Un ENTRENADOR como tú, que sabe\n"
	.string "apreciar a toda clase de POKÉMON, podrá\l"
	.string "hacerse cargo de esta leyenda.$"

NeoLavandaCementerio_Dialogo_Fuji_Despues_Final_Texto_15:
	.string "FUJI: Y ahora, ¿qué? Solo me queda ver\n"
	.string "cómo todas las semillas que he ido\l"
	.string "plantando estos años dan brotes\l"
	.string "verdes, ¡jo, jo, jo!$"
