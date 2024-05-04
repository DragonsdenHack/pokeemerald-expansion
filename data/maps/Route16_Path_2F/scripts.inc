Route16_Path_2F_MapScripts::
	.byte 0

Route16Path2F_1::
lock     
faceplayer     
msgbox Route16_Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_1:
.string "¡No te acerques a mí ROCKET, como\n"
.string "me vean interactuando con alguien\l"
.string "como tú nadie querrá ser mi amigo!$"



Route16Path2F_2::
lock     
faceplayer     
msgbox Route16_Path2F_Text_2, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_2:
.string "Si intentas algo raro llamaré al\n"
.string "POLICÍA de abajo.$"



Route16Path2F_3::
end



Route16Path2FDocumento_100::
msgbox Route16Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_100:
.string "Has usado los prismáticos…\p"
	.string "¡Es el CENTRO COMERCIAL\n"
	.string "de CIUDAD AZULONA!$"



Route16Path2FDocumento_101::
msgbox Route16Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_101:
.string "Has usado los prismáticos…\p"
	.string "¡Hay un largo camino sobre\n"
	.string "el agua!$"

Route16_Path_2F_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40A8, 0
goto_if_gt Route16_Path_2F_Combate_Ayudante_Oak_2
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route16_Path_2F_Combate_Ayudante_Oak_3
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_4, Route16_Path_2F_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_AMULET_COIN
waitfanfare
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, Route16_Path_2F_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40A8, 1
release
end

Route16_Path_2F_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route16_Path_2F_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route16_Path_2F_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route16_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end

Route16_Path_2F_Combate_Ayudante_Oak_Texto_1:
.string "Una vez la región quede limpia de\n"
	.string "parásitos como tú y tu\l"
	.string "organización podremos fin iniciar\l"
	.string "una etapa de desarrollo sin\l"
	.string "precedentes.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "…\n"
	.string "…{PAUSE 5}$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_3:
.string "Fuera de mi vista, no quiero\n"
	.string "volver a ver tu cara, ¿te atreves\l"
	.string "a llevar la contraria a un\l"
	.string "AYUDANTE DE OAK?$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_4:
.string "El TEAM ROCKET tiene los días\n"
	.string "contados, estamos preparando algo\l"
	.string "gordo para acabar con todos\l"
	.string "vosotros.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_5:
.string "Será lo último que hagas ROCKET.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_6:
.string "¡¿De dónde han salido todos esos\n"
	.string "POKÉMON?!$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_7:
.string "({PLAYER} robó una MON.AMULETO de\n"
	.string "AYUDANTE DE OAK).$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_8:
.string "Esto no tiene lógica, se supone\n"
	.string "que no debes de pasar de un\l"
	.string "RATICATE o KOFFING en tu equipo,\l"
	.string "verás cuando informe a OAK de\l"
	.string "esto.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_9:
.string "La próxima vez no seré tan\n"
	.string "compasivo contigo.$"
