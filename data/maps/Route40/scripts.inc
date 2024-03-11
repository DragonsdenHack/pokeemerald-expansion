Route40_MapScripts::
	.byte 0

Route40_1::
end



Route40_2::
end



Route40_3::
lock     
faceplayer     
msgbox Route40_Text_3, MSGBOX_DEFAULT
release     
end

Route40_Text_3:
	.string "This area is being eaten away by the\n"
	.string "tide little by little. I must uncover the\l"
	.string "mystery of these rocks before the sea\l"
	.string "swallows them forever.$"



Route40_4::
end



Route40_5::
end



Route40_6::
end



Route40_7::
end



Route40_8::
end



Route40_9::
end


Route40_10::
lock     
faceplayer     
msgbox Route40_Text_10, MSGBOX_DEFAULT
release     
end

Route40_Text_10:
	.string "Here, I don't catch even half the\n"
	.string "number of pieces than I did 10 years\l"
	.string "ago. I'll have to head to WHIRL ISLANDS\l"
	.string "to catch something!$"



Route40_11::
lock     
faceplayer     
msgbox Route40_Text_11, MSGBOX_DEFAULT
release     
end

Route40_Text_11:
	.string "We did well to come here, I'm having a\n"
	.string "better time than in CERULEAN CAPE…$"



Route40_12::
lock     
faceplayer     
msgbox Route40_Text_12, MSGBOX_DEFAULT
release     
end

Route40_Text_12:
.string "What a beautiful sunset…$"



Route40_13::
end



Route40_EventScript_Nadadora::
	trainerbattle_single TRAINER_HAYDEN, Route40_Text_NadadoraIntro, Route40_Text_NadadoraDefeated
	msgbox Route40_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



Route40_EventScript_Chico::
	trainerbattle_single TRAINER_SOPHIE, Route40_Text_ChicoIntro, Route40_Text_ChicoDefeated
	msgbox Route40_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route40_EventScript_Nadadora2::
	trainerbattle_single TRAINER_BIANCA, Route40_Text_Nadadora2Intro, Route40_Text_Nadadora2Defeated
	msgbox Route40_Text_Nadadora2PostBattle, MSGBOX_AUTOCLOSE
	end



Route40_EventScript_Nadadora3::
	trainerbattle_single TRAINER_CELINA, Route40_Text_Nadadora3Intro, Route40_Text_Nadadora3Defeated
	msgbox Route40_Text_Nadadora3PostBattle, MSGBOX_AUTOCLOSE
	end
