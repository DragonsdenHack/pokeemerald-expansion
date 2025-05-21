Route15_Path_2F_MapScripts::
	.byte 0

Route15Path2F_1::
end



Route15Path2FDocumento_100::
msgbox Route15Path2FDocumento_Text_100, MSGBOX_SIGN   
end

Route15Path2FDocumento_Text_100:
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "A large, shining bird is flying\n"
	.string "toward the sea.$"




Route15Path2FDocumento_101::
msgbox Route15Path2FDocumento_Text_101, MSGBOX_SIGN   
end

Route15Path2FDocumento_Text_101:
	.string "Let's see what the binoculars have\n"
	.string "to show…\p"
	.string "It looks like a small island on\n"
	.string "the horizon!$"


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
	.string "Ich bezweifle, dass dein mickriger\n"
	.string "Verstand das begreift, aber ein\l"
	.string "angesehener WISSENSCHAFTLER wie ich\l"
	.string "gibt sich nicht mit dem Abschaum der\l"
	.string "Gesellschaft ab - das wärst du.\l"
	.string "Verschwinde, bevor ich dem Wächter da\l"
	.string "unten sage, dass du mich bestohlen\l"
	.string "hast!$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_3:
	.string "Das ist die letzte Warnung! Willst du\n"
	.string "dich wirklich mit mir anlegen?$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_4:
	.string "Wir haben bereits Pläne für die Zukunft\n"
	.string "dieser Region und du kommst in keinem\l"
	.string "von ihnen vor, ROCKET!\p"
	.string "Mach dich bereit, vernichtet zu werden!$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_5:
	.string "Damit hast du dein Todesurteil\n"
	.string "unterschrieben, ROCKET!$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_6:
.string "Das ist unmöglich!\n"
	.string "Wer zum Teufel bist du?$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_7:
	.string "-{PLAYER} stiehlt einen TOXIK-ORB\n"
	.string "von EICHs ASSISTENTEN.-$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_8:
	.string "Du hast keine Ahnung, was du hiermit\n"
	.string "angerichtet hast, ROCKET! Du wirst dir\l"
	.string "noch wünschen, ich hätte die POLIZEI\l"
	.string "gerufen, wenn EICH, sobald er hiervon\l"
	.string "erfährt, dein gesamtes Team in seine\l"
	.string "Einzelteile zerlegt!$"

Route15_Path_2F_Combate_Ayudante_Oak_Texto_9:
	.string "Ich verstehe. Du hast schon genug mit\n"
	.string "deinem kümmerlichen Leben zu kämpfen.\p"
	.string "Verschwinde!$"

Route15_Path_2F_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
