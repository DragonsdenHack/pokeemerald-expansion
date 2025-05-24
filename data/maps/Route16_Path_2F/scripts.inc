Route16_Path_2F_MapScripts::
	.byte 0

Route16Path2F_1::
lock     
faceplayer     
msgbox Route16_Path2F_Text_1, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_1:
	.string "Bleib mir vom Leib, ROCKET! Wenn jemand\n"
	.string "sieht, wie ich mit dir rede, will niemand\l"
	.string "mehr was mit mir zu tun haben!$"



Route16Path2F_2::
lock     
faceplayer     
msgbox Route16_Path2F_Text_2, MSGBOX_DEFAULT
release     
end

Route16_Path2F_Text_2:
	.string "Wenn du irgendetwas Dummes versuchst,\n"
	.string "werde ich die WACHE unten alarmieren!$"



Route16Path2F_3::
end



Route16Path2FDocumento_100::
msgbox Route16Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_100:
    .string "Du schaust durch das Fernrohr.\p"
	.string "Du siehst das EINKAUFSZENTRUM\n"
	.string "von PRISMANIA CITY!$"



Route16Path2FDocumento_101::
msgbox Route16Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route16Path2FDocumento_Text_101:
    .string "Du schaust durch das Fernrohr.\p"
	.string "Dort führt ein langer Weg\n"
	.string "über das Wasser!$"

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
delay 10
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
	.string "Sobald diese Region von Parasiten wie\n"
	.string "dir und deiner Organisation befreit ist,\l"
	.string "können wir KANTO endlich nach unseren\l"
	.string "Vorstellungen formen - die Region so\l"
	.string "gestalten, wie sie wirklich sein sollte.$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_3:
	.string "Verschwinde aus meinem Blickfeld! Ich\n"
	.string "will dein Gesicht hier nie wieder sehen!\p"
	.string "Wagst du es etwa, dich einem\n"
	.string "Assistenten von PROFESSOR EICH\l"
	.string "zu widersetzen?$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_4:
	.string "TEAM ROCKETs Tage sind gezählt! Wir\n"
	.string "haben etwas Großes geplant, um euch\l"
	.string "zu Fall zu bringen!$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_5:
	.string "Das wird das Letzte sein, was du\n"
	.string "tun wirst, ROCKET!$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_6:
	.string "Wo zum Teufel hast du diese\n"
	.string "POKéMON her?!$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_7:
	.string "-{PLAYER} stiehlt das MÜNZAMULETT\n"
	.string "von PROFESSOR EICHs Assistenten.-$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_8:
	.string "Das kann nicht sein! Du dürftest doch\n"
	.string "keine besseren POKéMON als RATTIKARL\l"
	.string "oder SMOGON haben! Warte nur ab, bis\l"
	.string "ich das EICH erzähle!$"

Route16_Path_2F_Combate_Ayudante_Oak_Texto_9:
	.string "Das nächste Mal werde ich nicht so\n"
	.string "nachsichtig mit dir sein!$"
