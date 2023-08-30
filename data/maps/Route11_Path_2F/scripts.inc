Route11_Path_2F_MapScripts::
	.byte 0

Route11Path2F_1::
lock     
faceplayer     
msgbox Route11Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route11Path2F_Text_1:
.string "¿Cómo?\n"
.string "¿Un intercambio de POKÉMON?\l"
.string "¡No aceptaría negociar con un\l"
.string "ROCKET ni aunque me ofrecieses un\l"
.string "ZAPDOS!$"



Route11Path2F_2::
end



Route11Path2FDocumento_100::
msgbox Route11Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_100:
.string "Has usado los prismáticos...\p"
	.string "¡Qué vista tan bonita!$"



Route11Path2FDocumento_101::
msgbox Route11Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_101:
	.string "Has usado los prismáticos...\p"
	.string "¡Puedes ir de CIUDAD CELESTE\n"
	.string "a PUEBLO LAVANDA por el TÚNEL\l"
	.string "ROCA!$"

Route11_Path_2F_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40E5, 0
goto_if_gt Route11_Path_2F_Combate_Ayudante_Oak_2
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route11_Path_2F_Combate_Ayudante_Oak_3
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_3, Route11_Path_2F_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
additem ITEM_DOWSING_MACHINE
waitfanfare
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_7 MSGBOX_DEFAULT
delay 20
playse SE_PIN
applymovement 2, Route11_Path_2F_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40E5, 1
release
end

Route11_Path_2F_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route11_Path_2F_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route11_Path_2F_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route11_Path_2F_Combate_Ayudante_Oak_Texto_1:
.string "La lacra social como tú es una\n"
	.string "verguenza para esta región, largo\l"
	.string "de aquí antes de que tu presencia\l"
	.string "contamine aún más mi estatus.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "...\n"
	.string "...$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_3:
.string "¿Quieres perder la poca capacidad\n"
	.string "de elección que queda en tu mísera\l"
	.string "existencia?$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_4:
.string "Ya verás ROCKET, propondré una\n"
	.string "serie de medidas al COMITÉ DE LA\l"
	.string "LIGA POKÉMON para terminar de\l"
	.string "aplastaros como a cucarachas, de\l"
	.string "esta no salís.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_5:
.string "Que así sea, ha sido tu propia\n"
	.string "elección.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_6:
.string "¡Debe de ser un error!\n"
	.string "¡Los ROCKETS no pasan del RATTATA\l"
	.string "o ZUBAT!$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_7:
.string "({PLAYER} robó un BUSCAOBJETOS de\n"
	.string "AYUDANTE DE OAK)$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_8:
.string "Ya verás ROCKET, propondré una\n"
	.string "serie de medidas al COMITÉ DE LA\l"
	.string "LIGA POKÉMON para terminar de\l"
	.string "aplastaros como a cucarachas, de\l"
	.string "esta no salís.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_9:
.string "Veo que aún conservas la cordura,\n"
	.string "al menos.$"

Route11_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
