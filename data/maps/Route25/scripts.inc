Route25_MapScripts::
	.byte 0

Route25_1::
lock     
faceplayer     
msgbox Route25_Text_1, MSGBOX_DEFAULT
release     
end

Route25_Text_1:
.string "Este cabo es un buen lugar para\n"
.string "venir en pareja.\l"
.string "MISTY, nuestra LÍDER DE GIMNASIO,\l"
.string "suele pasarse por aquí.$"


Route25_2::
lock     
faceplayer     
msgbox Route25_Text_2, MSGBOX_DEFAULT
release     
end

Route25_Text_2:
.string "¿Cómo?\n"
.string "¿Vienes solo al CABO CELESTE?\l"
.string "…\l"
.string "…\l"
.string "Bueno, se supone que a este lugar\l"
.string "se viene en pareja…$"


Route25_3::
end

Route25_4::
end


Route25_5::
end

Route25_6::
end

Route25_7::
end

Route25_8::
end

Route25_9::
end

Route25_10::
end

Route25_11::
end

Route25_12::
end

Route25_13::
end

Route25_EventScript_Hiker::
	trainerbattle_single TRAINER_NOB_1, Route25_Text_HikerIntro, Route25_Text_HikerDefeated
	msgbox Route25_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Hiker2::
	trainerbattle_single TRAINER_NOB_3, Route25_Text_Hiker2Intro, Route25_Text_Hiker2Defeated
	msgbox Route25_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Chico::
	trainerbattle_single TRAINER_BROOKE_1, Route25_Text_ChicoIntro, Route25_Text_ChicoDefeated
	msgbox Route25_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Chico2::
	trainerbattle_single TRAINER_JENNIFER, Route25_Text_Chico2Intro, Route25_Text_Chico2Defeated
	msgbox Route25_Text_Chico2PostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Chica::
	trainerbattle_single TRAINER_DARRIN, Route25_Text_ChicaIntro, Route25_Text_ChicaDefeated
	msgbox Route25_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Hiker3::
	trainerbattle_single TRAINER_NOB_2, Route25_Text_Hiker3Intro, Route25_Text_Hiker3Defeated
	msgbox Route25_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Chico3::
	trainerbattle_single TRAINER_NANCY, Route25_Text_Chico3Intro, Route25_Text_Chico3Defeated
	msgbox Route25_Text_Chico3PostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Chico4::
	trainerbattle_single TRAINER_HOPE, Route25_Text_Chico4Intro, Route25_Text_Chico4Defeated
	msgbox Route25_Text_Chico4PostBattle, MSGBOX_AUTOCLOSE
	end



Route25_EventScript_Chica2::
	trainerbattle_single TRAINER_SHIRLEY, Route25_Text_Chica2Intro, Route25_Text_Chica2Defeated
	msgbox Route25_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end
