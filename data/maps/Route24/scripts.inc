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
	.string "Not bad for a ROCKET. Too bad this\n"
	.string "challenge doesn't apply to you… I'm also\l"
	.string "a ROCKET. This whole spectacle on\l"
	.string "NUGGET BRIDGE is recruitment. Those\l"
	.string "gullible TRAINERs over there think it's\l"
	.string "just some social initiative. How dumb!$"


Route24_Recluta_text_2:
.string "{PAUSE 15}…{PAUSE 15}$"

Route24_Recluta_text_3:
	.string "You were given a mission? Steal some\n"
	.string "patents from BILL? You'll find him at\l"
	.string "the end of CERULEAN CAPE, just east of\l"
	.string "ROUTE 25. Here's to your success,\l"
	.string "comrade. None of us at TEAM ROCKET can\l"
	.string "stand BILL's guts, egotistical, elitist\l"
	.string "brat that he is. Got himself a swelled\l"
	.string "head just 'cuz he's dropped the dosh for\l"
	.string "rare POKÉMON. Knock him down a peg for\l"
	.string "us!$"

Route24_Recluta_text_4:
	.string "You'll find him at the end of CERULEAN\n"
	.string "CAPE, just east of ROUTE 25. Here's to\l"
	.string "your success, comrade. None of us at\l"
	.string "TEAM ROCKET can stand BILL's guts,\l"
	.string "egotistical, elitist brat that he is. Got\l"
	.string "himself a swelled head just 'cuz he's\l"
	.string "dropped the dosh for rare POKÉMON.\l"
	.string "Knock him down a peg for us!$"

Route24_Recluta_text_5:
	.string "You did it! I'd have paid good money to\n"
	.string "see BILL's face as his prized purchases\l"
	.string "got trounced by a ROCKET. You've\l"
	.string "honored our name!$"


Route24_Recluta_move1:
walk_in_place_right
step_end

Route24_Recluta_move2:
walk_in_place_left
step_end
