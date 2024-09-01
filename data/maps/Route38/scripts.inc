Route38_MapScripts::
	.byte 0

Route38_1::
end



Route38_2::
lock     
faceplayer     
msgbox Route37_Text_2, MSGBOX_DEFAULT
release     
end

Route37_Text_2:
	.string "DODRIO is my favorite bird. I love it\n"
	.string "because it attacks without any\l"
	.string "fear-without any kind of shame. Its\l"
	.string "combination of ATTACK and SPEED is\l"
	.string "unique among birds.$"



Route38_3::
end



Route38_4::
end



Route38_5::
lock     
faceplayer     
msgbox Route37_Text_5, MSGBOX_DEFAULT
release     
end

Route37_Text_5:
	.string "The wild behavior of TAUROS and\n"
	.string "MILTANK is quite intriguing.$"



Route38_6::
end



Route38_EventScript_Calvo::
	trainerbattle_single TRAINER_DAWSON, Route38_Text_CalvoIntro, Route38_Text_CalvoDefeated
	msgbox Route38_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end



Route38_EventScript_Pintora::
	trainerbattle_single TRAINER_CHRIS, Route38_Text_PintoraIntro, Route38_Text_PintoraDefeated
	msgbox Route38_Text_PintoraPostBattle, MSGBOX_AUTOCLOSE
	end



Route38_EventScript_Chico::
	trainerbattle_single TRAINER_SARAH, Route38_Text_ChicoIntro, Route38_Text_ChicoDefeated
	msgbox Route38_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end


Route38Documento_100::
msgbox Route38Documento_Text_100, MSGBOX_SIGN   
end

Route38Documento_Text_100:
	.string "Remember! \n"
	.string "TAUROS is more powerful, but\l"
	.string "MILTANK has greater endurance!$"



Route38Documento_101::
msgbox Route38Documento_Text_101, MSGBOX_SIGN   
end

Route38Documento_Text_101:
	.string "ROUTE 38\n"
	.string "OLIVINE CITY - ECRUTEAK CITY$"
