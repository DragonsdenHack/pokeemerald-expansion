Route20_MapScripts::
	.byte 0

Route20_1::
end

Route20_2::
end

Route20_3::
end

Route20_4::
end


Route20_5::
end

Route20_6::
end

Route20_7::
lock     
faceplayer     
msgbox Route20_Text_7, MSGBOX_DEFAULT
release     
end

Route20_Text_7:
.string "Muchos entrenadores expertos en el\n"
.string "tipo agua suelen frecuentar este\l"
.string "lugar.\l"
.string "Dicen que MISTY, de CIUDAD\l"
.string "CELESTE, se entrena por aquí.$"

Route20_8::
end

Route20_9::
end

Route20_10::
end

Route20_11::
end



Route20_EventScript_Nadador::
	trainerbattle_single TRAINER_JACLYN, Route20_Text_NadadorIntro, Route20_Text_NadadorDefeated
	msgbox Route20_NadadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadador2::
	trainerbattle_single TRAINER_SAMANTHA, Route20_Text_Nadador2Intro, Route20_Text_Nadador2Defeated
	msgbox Route20_Nadador2PostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadadora::
	trainerbattle_single TRAINER_KAREN_1, Route20_Text_NadadoraIntro, Route20_Text_NadadoraDefeated
	msgbox Route20_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



Route20_EventScript_Nadadora2::
	trainerbattle_single TRAINER_TATE_AND_LIZA_1, Route20_Text_Nadadora2Intro, Route20_Text_Nadadora2Defeated
	msgbox Route20_Nadadora2PostBattle, MSGBOX_AUTOCLOSE
	end
