Route2_Path3_MapScripts::
	.byte 0

Route2Path3_1::
lock     
faceplayer     
msgbox Route2_Path3_Text_1, MSGBOX_DEFAULT
release     
end

Route2_Path3_Text_1:
	.string "Rede nicht mit mir, ROCKET! Sonst\n"
	.string "denken die Leute noch, dass ich was mit\l"
	.string "deiner Organisation zu tun habe!$"



Route2Path3_2::
end

Route2_Path3_Combate_Ayudante_Oak::
lock
faceplayer
compare VAR_UNUSED_0x40B8, 0
goto_if_gt Route2_Path3_Combate_Ayudante_Oak_2
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route2_Path3_Combate_Ayudante_Oak_3
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AYUDANTE_2, Route2_Path3_Combate_Ayudante_Oak_Texto_6
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_TM15
waitfanfare
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_7 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Route2_Path3_Combate_Ayudante_Oak_Move_1
waitmovement 0x0
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40B8, 1
release
end

Route2_Path3_Combate_Ayudante_Oak_2::
lock
faceplayer
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route2_Path3_Combate_Ayudante_Oak_3::
lock
faceplayer
msgbox Route2_Path3_Combate_Ayudante_Oak_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route2_Path3_Combate_Ayudante_Oak_Texto_1:
	.string "Leute wie du, die nur den Lauf der Dinge\n"
	.string "und den Fortschritt behindern, sollten\l"
	.string "gar nicht erst existieren! Verschwinde\l"
	.string "aus meinem Blickfeld, bevor ich mich\l"
	.string "wiederholen muss!$"

Route2_Path3_Combate_Ayudante_Oak_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route2_Path3_Combate_Ayudante_Oak_Texto_3:
	.string "Du wagst es, den Blick eines\n"
	.string "ASSISTENTEN VON PROF. EICH zu\l"
	.string "kreuzen?$"

Route2_Path3_Combate_Ayudante_Oak_Texto_4:
	.string "Ich, EICHs Schüler, werde alle deine\n"
	.string "POKéMON zerreißen, als wären sie\l"
	.string "dünnes Papier!$"

Route2_Path3_Combate_Ayudante_Oak_Texto_5:
	.string "Das wird der letzte Fehler in\n"
	.string "deinem Leben gewesen sein!$"

Route2_Path3_Combate_Ayudante_Oak_Texto_6:
.string "Unmöglich!$"

Route2_Path3_Combate_Ayudante_Oak_Texto_7:
	.string "-{PLAYER} stiehlt TM 15 HYPERSTRAHL\n"
	.string "von EICHs ASSISTENTEN.-$"

Route2_Path3_Combate_Ayudante_Oak_Texto_8:
	.string "Dafür wirst du bezahlen, ROCKET! Ich\n"
	.string "werde deine ganze Organisation für das,\l"
	.string "was du getan hast, bis auf ihre\l"
	.string "Grundmauern niederbrennen!$"

Route2_Path3_Combate_Ayudante_Oak_Texto_9:
	.string "Du hast immer noch Zeit abzuhauen,\n"
	.string "bevor ich meine Entscheidung bereue!$"

Route2_Path3_Combate_Ayudante_Oak_Move_1:
emote_exclamation_mark
step_end
