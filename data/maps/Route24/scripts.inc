Route24_MapScripts::
	.byte 0

Route24_1::
end

Route24_2::
end

Route24_3::
end

Route24_4::
end


Route24_5::
end

Route24_6::
end

Route24_7::
end

Route24_8::
end

Route24_EventScript_Cazabichos::
	trainerbattle_single TRAINER_VALERIE_3, Route24_Text_CazabichosIntro, Route24_Text_CazabichosDefeated
	msgbox Route24_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end


Route24_EventScript_Chica::
	trainerbattle_single TRAINER_MELISSA, Route24_Text_ChicaIntro, Route24_Text_ChicaDefeated
	msgbox Route24_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico::
	trainerbattle_single TRAINER_KEIRA, Route24_Text_ChicoIntro, Route24_Text_ChicoDefeated
	msgbox Route24_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chica2::
	trainerbattle_single TRAINER_CINDY_6, Route24_Text_Chica2Intro, Route24_Text_Chica2Defeated
	msgbox Route24_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico2::
	trainerbattle_single TRAINER_MARK, Route24_Text_Chico2Intro, Route24_Text_Chico2Defeated
	msgbox Route24_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route24_EventScript_Chico3::
	trainerbattle_single TRAINER_THALIA_1, Route24_Text_Chico3Intro, Route24_Text_Chico3Defeated
	msgbox Route24_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end

Route24_Recluta::
delay 10
applymovement 1, Route24_Recluta_move2
applymovement OBJ_EVENT_ID_PLAYER, Route24_Recluta_move1
waitmovement 0x0
msgbox Route24_Recluta_text_1 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_2 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 20
release
end

Route24_Recluta_2::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 20
goto_if_gt Route24_Recluta_4
compare VAR_UNUSED_0x40F7, 19
goto_if_gt Route24_Recluta_3
msgbox Route24_Recluta_text_1 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_2 MSGBOX_AUTOCLOSE
msgbox Route24_Recluta_text_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 20
release
end

Route24_Recluta_3::
msgbox Route24_Recluta_text_4 MSGBOX_AUTOCLOSE
release
end

Route24_Recluta_4::
msgbox Route24_Recluta_text_5 MSGBOX_AUTOCLOSE
release
end





Route24_Recluta_text_1:
	.string "Nicht übel für einen ROCKET. Schade nur,\n"
	.string "dass diese Herausforderung für\l"
	.string "deinesgleichen nicht zählt, denn ich\l"
	.string "gehöre auch zu TEAM ROCKET. Diese\l"
	.string "ganze NUGGETBRÜCKEN Geschichte ist in\l"
	.string "Wahrheit nur eine Rekrutierungsaktion.\p"
	.string "Diese leichtgläubigen TRAINER da\n"
	.string "drüben denken wirklich, es sei nur eine\l"
	.string "Art soziales Projekt. Was für Idioten!$"

Route24_Recluta_text_2:
.string "{PAUSE 15}…{PAUSE 15}$"

Route24_Recluta_text_3:
	.string "Du bist gerade auf einer Mission? Du\n"
	.string "sollst ein Patent von BILL stehlen?\p"
	.string "Du wirst ihn östlich von ROUTE 25\n"
	.string "antreffen. Viel Erfolg, Kumpel! Keiner\l"
	.string "von uns bei TEAM ROCKET kann BILL\l"
	.string "leiden - diesen egoistischen, elitären\l"
	.string "Wichtigtuer! Hält sich für etwas\l"
	.string "Besseres, nur weil er einen Haufen Kohle\l"
	.string "für seltene POKéMON rausgehauen hat!\p"
	.string "Erteile ihm eine Lektion in unserem\n"
	.string "Namen!$"

Route24_Recluta_text_4:
	.string "Du wirst BILL östlich von ROUTE 25\n"
	.string "antreffen. Viel Erfolg, Kumpel! Keiner\l"
	.string "von uns bei TEAM ROCKET kann BILL\l"
	.string "leiden - diesen egoistischen, elitären\l"
	.string "Wichtigtuer! Hält sich für etwas\l"
	.string "Besseres, nur weil er einen Haufen Kohle\l"
	.string "für seltene POKéMON rausgehauen hat!\p"
	.string "Erteile ihm eine Lektion in unserem\n"
	.string "Namen!$"

Route24_Recluta_text_5:
	.string "Du hast es geschafft. Ich hätte gutes\n"
	.string "Geld dafür bezahlt, BILLs Gesicht zu\l"
	.string "sehen, als seine Nobel-POKéMON von\l"
	.string "einem ROCKET vernichtet wurden! Du\l"
	.string "hast unserem Namen alle Ehre gemacht!$"


Route24_Recluta_move1:
walk_in_place_right
step_end

Route24_Recluta_move2:
walk_in_place_left
step_end
