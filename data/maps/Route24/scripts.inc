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
.string "Not bad for a ROCKET, so bad that this\n"
	.string "challenge is not for you…{PAUSE 25} I'm also a\l"
	.string "ROCKET, all this thing on NUGGET BRIDGE\l"
	.string "is for recruiting, those dumb TRAINERS\l"
	.string "over there think this is some kind of\l"
	.string "social initiative. How dumb!$"


Route24_Recluta_text_2:
.string "{PAUSE 15}…{PAUSE 15}$"

Route24_Recluta_text_3:
.string "You were given a mission? Steal some\n"
	.string "patents from BILL? His place is at the\l"
	.string "end of CERULEAN CAPE, at the east of\l"
	.string "ROUTE 25. I hope you'll succeed, comrade.\l"
	.string "No one in TEAM ROCKET can't stand BILL,\l"
	.string "he's an egocentric spoiled elitist that\l"
	.string "think about himself as a superior\l"
	.string "because he has some rare POKÉMON that\l"
	.string "only a few can afford. Beat him up on\l"
	.string "our part!$"

Route24_Recluta_text_4:
.string "BILL's house is at the end of CERULEAN\n"
	.string "CAPE, at the east of ROUTE 25. I hope\l"
	.string "you'll succeed, comrade. No one in TEAM\l"
	.string "ROCKET can't stand BILL, he's an\l"
	.string "egocentric spoiled elitist that think\l"
	.string "about himself as a superior because he\l"
	.string "has some rare POKÉMON that only a few\l"
	.string "can afford. Beat him up on our part!$"

Route24_Recluta_text_5:
.string "You did it! I would have paid to see\n"
	.string "BILL's face when him and his purchased\l"
	.string "PKÉMONS got beaten up by a ROCKET. You\l"
	.string "have honored pur name!$"


Route24_Recluta_move1:
walk_in_place_right
step_end

Route24_Recluta_move2:
walk_in_place_left
step_end
