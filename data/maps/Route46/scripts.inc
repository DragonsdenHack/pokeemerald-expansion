Route46_MapScripts::
	.byte 0

Route46_1::
end



Route46_2::
end



Route46_3::
lock     
faceplayer     
msgbox Route46_Text_3, MSGBOX_DEFAULT
release     
end

Route46_Text_3:
.string "Hay una gran variedad de POKÉMON\n"
.string "por estas rutas, deberás de estar\l"
.string "atento si quieres verlos a todos.$"



Route46_4::
end



Route46_5::
end



Route46_6::
end



Route46_7::
end



Route46_8::
end



Route46_EventScript_Chica::
	trainerbattle_single TRAINER_JAMES_3, Route46_Text_ChicaIntro, Route46_Text_ChicaDefeated
	msgbox Route46_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route46_EventScript_Montanero::
	trainerbattle_single TRAINER_JAMES_4, Route46_Text_MontaneroIntro, Route46_Text_MontaneroDefeated
	msgbox Route46_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end
