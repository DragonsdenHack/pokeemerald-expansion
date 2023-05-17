NewMap1_MapScripts::
	.byte 0

Route3_1::
end


Route3_2::
end


Route3_3::
end


Route3_4::
end


Route3_5::
end


Route3_6::
end


Route3_7::
end


Route3_8::
end


Route3_9::
lock     
faceplayer     
msgbox Route3_Text_9, MSGBOX_DEFAULT
release     
end

Route3_Text_9:
.string "Aunque no lo parezca, hay bastante\n"
.string "gente que en el fondo os apoya.\l"
.string "Lo que pasa es que todos\l"
.string "están cagados de miedo por lo que\l"
.string "LANCE pueda hacer.$"



Route3_EventScript_Chica::
	trainerbattle_single TRAINER_NAOMI, Route3_Text_ChicaIntro, Route3_Text_ChicaDefeated
	msgbox Route3_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route3_EventScript_Cazabichos::
	trainerbattle_single TRAINER_VALERIE_1, Route3_Text_CazabichosIntro, Route3_Text_CazabichosDefeated
	msgbox Route3_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



Route3_EventScript_Chica2::
	trainerbattle_single TRAINER_BRIANNA, Route3_Text_Chica2Intro, Route3_Text_Chica2Defeated
	msgbox Route3_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route3_EventScript_Chico::
	trainerbattle_single TRAINER_JODY, Route3_Text_ChicoIntro, Route3_Text_ChicoDefeated
	msgbox Route3_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route3_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_TAMMY, Route3_Text_Cazabichos2Intro, Route3_Text_Cazabichos2Defeated
	msgbox Route3_Text_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



Route3_EventScript_Chica3::
	trainerbattle_single TRAINER_CINDY_2, Route3_Text_Chica3Intro, Route3_Text_Chica3Defeated
	msgbox Route3_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route3_EventScript_Chico2::
	trainerbattle_single TRAINER_ALEXIA, Route3_Text_Chico2Intro, Route3_Text_Chico2Defeated
	msgbox Route3_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route3_EventScript_Cazabichos3::
	trainerbattle_single TRAINER_KINDRA, Route3_Text_Cazabichos3Intro, Route3_Text_Cazabichos3Defeated
	msgbox Route3_Text_Cazabichos3PostBattle, MSGBOX_AUTOCLOSE
	end
