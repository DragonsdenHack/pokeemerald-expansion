Route15_Path_2F_MapScripts::
	.byte 0

Route15Path2F_1::
end



Route15Path2FDocumento_100::
msgbox Route15Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route15Path2FDocumento_Text_100:
.string "Has usado los prismáticos…\p"
	.string "Un pájaro grande y brillante vuela\n"
	.string "hacia el mar.$"



Route15Path2FDocumento_101::
msgbox Route15Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route15Path2FDocumento_Text_101:
.string "Has usado los prismáticos…\p"
	.string "¡Parece que hay una pequeña isla!$"

Route15_Path_2F_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40BB, 0
goto_if_gt Route15_Path_2F_Combate_Ayudante_Oak_2
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route15_Path_2F_Combate_Ayudante_Oak_3
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_5, Route15_Path_2F_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_TOXIC_ORB
waitfanfare
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, Route15_Path_2F_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40BB, 1
release
end

Route15_Path_2F_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route15_Path_2F_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route15_Path_2F_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route15_Path_2F_Combate_Ayudante_Oak_Texto_1:
.string "Entiendo que tu nula capacidad\n"
	.string "intelectual te impida\l"
	.string "comprenderlo, pero los científicos\l"
	.string "reconocidos como nosotros no nos\l"
	.string "mezclamos con lacras sociales,\l"
	.string "largo de aquí antes de que le diga\l"
	.string "al guardia que me has robado, a\l"
	.string "gente como tú nunca creerán.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "…\n"
	.string "…{PAUSE 5}$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_3:
.string "Es el último aviso.\n"
	.string "¿Buscas problemas?$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_4:
.string "Ya tenemos planes para el futuro\n"
	.string "de esta región ROCKET, y en\l"
	.string "ninguno de ellos estáis vosotros,\l"
	.string "vete preparando para la extinción.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_5:
.string "Acabas de firmar tu sentencia\n"
	.string "ROCKET.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_6:
.string "¡Esto es imposible!\n"
	.string "¿Quién eres tú?$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_7:
.string "({PLAYER} robó una TOXISFERA de\n"
	.string "AYUDANTE DE OAK).$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_8:
.string "No sabes lo que acabas de hacer\n"
	.string "ROCKET, vas a tener la mala\l"
	.string "fortuna de que no avise ahora a la\l"
	.string "POLICÍA, solo para ver como OAK\l"
	.string "aplasta a todo tu equipo cuando se\l"
	.string "entere de lo que estás haciendo.$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_9:
.string "Entiendo, ya tienes suficientes\n"
	.string "problemas arrastrando esa\l"
	.string "miserable vida contigo, piérdete.$"

Route15_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
