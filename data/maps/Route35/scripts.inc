Route35_MapScripts::
	.byte 0

Route35_1::
end



Route35_2::
lock     
faceplayer     
msgbox Route35_Text_2, MSGBOX_DEFAULT
release     
end

Route35_Text_2:
	.string "This route is often used for training by\n"
	.string "the GOLDENROD police. Those KANTO\l"
	.string "ARCANINE are quite imposing!$"



Route35_3::
end



Route35_4::
end



Route35_5::
lock     
faceplayer     
msgbox Route35_Text_5, MSGBOX_DEFAULT
release     
end

Route35_Text_5:
.string "Do you know where I can find a MAGMAR?\n"
.string "Calm down!\l"
.string "I won't burn the NATIONAL PARK!$"



Route35_6::
lock     
faceplayer     
msgbox Route35_Text_6, MSGBOX_DEFAULT
release     
end

Route35_Text_6:
	.string "The police are essential for\n"
	.string "maintaining order and security, but\l"
	.string "there's nothing safer than having\l"
	.string "well-trained POKÉMON.$"



Route35_7::
end



Route35_8::
end



Route35_9::
end



Route35_EventScript_Calvo::
	trainerbattle_single TRAINER_MAY_LILYCOVE_TREECKO, Route35_Text_CalvoIntro, Route35_Text_CalvoDefeated
	msgbox Route35_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end



Route35_EventScript_Chica::
	trainerbattle_single TRAINER_TISHA, Route35_Text_ChicaIntro, Route35_Text_ChicaDefeated
	msgbox Route35_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route35_EventScript_Chico::
	trainerbattle_single TRAINER_JOHN_AND_JAY_4, Route35_Text_ChicoIntro, Route35_Text_ChicoDefeated
	msgbox Route35_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route35Documento_100::
msgbox Route35Documento_Text_100, MSGBOX_SIGN   
end

Route35Documento_Text_100:
	.string "ROUTE 35$"
