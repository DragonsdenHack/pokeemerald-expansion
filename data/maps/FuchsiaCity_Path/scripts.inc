FuchsiaCity_Path_MapScripts::
	.byte 0

FuchsiaCityPath1::
lock     
faceplayer     
msgbox FuchsiaCity_Path_Text_1, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Path_Text_1:
	.string "Genießen Sie die SAFARI-ZONE und\n"
	.string "entschuldigen Sie bitte die\l"
	.string "Unannehmlichkeiten.$"



FuchsiaCityPath2::
lock     
faceplayer     
msgbox FuchsiaCity_Path_Text_2, MSGBOX_DEFAULT
release     
end

FuchsiaCity_Path_Text_2:
	.string "Die SAFARI-ZONE war ursprünglich ein\n"
	.string "Projekt, das von KOGA und einem\l"
	.string "unbekannten Investor finanziert\l"
	.string "wurde. Wer auch immer dieser Investor\l"
	.string "ist … Wir müssen ihm für all das Gute\l"
	.string "danken, dass er mit seiner\l"
	.string "Großzügigkeit für FUCHSANIA ermöglicht\l"
	.string "hat.$"


FuchsiaCity_Path_Barrera_Der::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_2
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_2::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Centro::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_3
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_3::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4.1
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Izq::
lock
applymovement 1, FuchsiaCity_Path_Barrera_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 66
goto_if_gt FuchsiaCity_Path_Barrera_4
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_2
waitmovement 0x0
release
end

FuchsiaCity_Path_Barrera_4::
delay 20
msgbox FuchsiaCity_Path_Barrera_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_Path_Barrera_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Path_Barrera_Texto_3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Path_Barrera_Move_4.2
waitmovement 0x0
delay 30
msgbox FuchsiaCity_Path_Barrera_Texto_4 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Path_Barrera_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE134_STATE, 1
release
end

FuchsiaCity_Path_Barrera_Texto_1:
	.string "Keinen Schritt weiter, ROCKET! Dachtet\n"
	.string "ihr wirklich, wir würden dich einfach so\l"
	.string "durchlassen? Die Regeln der\l"
	.string "LIGA-LEITUNG sind eindeutig: ROCKETs\l"
	.string "dürfen nur die Dienste des\l"
	.string "POKéMON-CENTERS in Anspruch nehmen -\l"
	.string "keine anderen! Verschwinde, wenn du\l"
	.string "keinen Ärger willst!$"

FuchsiaCity_Path_Barrera_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

FuchsiaCity_Path_Barrera_Texto_3:
.string "Warte {PAUSE 15}…{PAUSE 15}\n"
	.string "Dieser Pass {PAUSE 15}…{PAUSE 15}\l"
	.string "Zeig mal her!$"

FuchsiaCity_Path_Barrera_Texto_4:
	.string "Hmm {PAUSE 15}…{PAUSE 15} Von KOGA persönlich\n"
	.string "unterzeichnet {PAUSE 15}…{PAUSE 15} Er scheint authentisch\l"
	.string "zu sein. Sie müssen eine Person von\l"
	.string "hohem Rang und Namen sein. Sonst\l"
	.string "hätten Sie diesen Pass nicht erhalten.\p"
	.string "Gestatten Sie mir bitte, Ihnen einen\n"
	.string "Rat zu geben: Laufen Sie lieber nicht\l"
	.string "weiter in diesem Kostüm herum. Nicht\l"
	.string "einmal zum Spaß. Die Maßnahmen von\l"
	.string "SIEGFRIEDs Regierung gegen TEAM\l"
	.string "ROCKET werden immer strikter und das\l"
	.string "völlig zu Recht, wenn Sie mich fragen.$"

FuchsiaCity_Path_Barrera_Texto_5:
	.string "Einen schönen Tag noch, Sir. Verzeihen\n"
	.string "Sie bitte das Missverständnis.$"

FuchsiaCity_Path_Barrera_Move_1:
walk_in_place_left
step_end

FuchsiaCity_Path_Barrera_Move_2:
walk_slow_down
step_end

FuchsiaCity_Path_Barrera_Move_3:
emote_exclamation_mark
step_end

FuchsiaCity_Path_Barrera_Move_4:
face_right
step_end

FuchsiaCity_Path_Barrera_Move_4.1:
walk_right
step_end

FuchsiaCity_Path_Barrera_Move_4.2:
walk_right
walk_right
step_end
