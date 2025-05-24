Route11_Path_2F_MapScripts::
	.byte 0

Route11Path2F_1::
lock     
faceplayer     
msgbox Route11Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route11Path2F_Text_1:
	.string "Was? Mit dir POKéMON tauschen? Ich\n"
	.string "würde nicht einmal mit einem ROCKET wir\l"
	.string "dir tauschen, selbst wenn du mir ein\l"
	.string "ZAPDOS anbietest!$"



Route11Path2F_2::
end



Route11Path2FDocumento_100::
msgbox Route11Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_100:
	.string "Du schaust durch das\n"
	.string "Fernrohr…\p"
	.string "Mitten auf dem Weg schläft ein\n"
	.string "großes POKéMON!$"



Route11Path2FDocumento_101::
msgbox Route11Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route11Path2FDocumento_Text_101:
	.string "Du schaust durch das Fernrohr.\p"
	.string "Der einzige Weg von AZURIA CITY nach\n"
	.string "LAVANDIA führt durch den FELSTUNNEL.$"

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
	.string "Du bist eine Schande für diese Region,\n"
	.string "eine Seuche! Verzieh dich, bevor du\l"
	.string "meine Berufung mit deiner Anwesenheit\l"
	.string "befleckst!$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_3:
	.string "Möchtest du das kleine bisschen\n"
	.string "Freiheit verlieren, die dir in deinem\l"
	.string "armseligen Leben noch bleibt?$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_4:
	.string "Warte nur ab, ROCKET! Ich werde der\n"
	.string "LIGA-LEITUNG eine Reihe von Maßnahmen\l"
	.string "vorschlagen, mit denen sie euch wie\l"
	.string "Insekten, die du und deine Organisation\l"
	.string "seid, endgültig ausrotten könnt!\p"
	.string "Und dieses Mal wird es für euch\n"
	.string "kein Entkommen geben!$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_5:
	.string "Wie du willst. Du wolltest es so.$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_6:
	.string "Das ist unmöglich! ROCKETs besitzen\n"
	.string "doch nur RATTFRATZ und ZUBAT!$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_7:
	.string "-{PLAYER} stiehlt einen ITEMRADAR\n"
	.string "von EICHs ASSISTENTEN-$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_8:
	.string "Warte nur ab, ROCKET! Ich werde der\n"
	.string "LIGA-LEITUNG eine Reihe von Maßnahmen\l"
	.string "vorschlagen, mit denen sie euch wie\l"
	.string "Insekten, die du und deine Organisation\l"
	.string "seid, endgültig ausrotten könnt!\p"
	.string "Und dieses Mal wird es für euch\n"
	.string "kein Entkommen geben!$"

Route11_Path_2F_Combate_Ayudante_Oak_Texto_9:
	.string "Anscheinend hast du doch noch\n"
	.string "eine Gehirnzelle übrig.$"

Route11_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
