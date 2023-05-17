Route27_MapScripts::
	.byte 0

Route27_1::
lock     
faceplayer     
msgbox Route27_Text_1, MSGBOX_DEFAULT
release     
end

Route27_Text_1:
.string "La RUTA 26 ha sido abierta de\n"
.string "nuevo, pero ve con cuidado, los\l"
.string "POKÉMON salvajes tienen que\l"
.string "acostumbrarse a ver ENTRENADORES.$"



Route27_2::
end



Route27_3::
end



Route27_4::
end



Route27_5::
end



Route27_6::
end



Route27_7::
end



Route27_8::
end



Route27_9::
end



Route27_10::
end



Route27_11::
end



Route27_EventScript_Ornitologo::
	trainerbattle_single TRAINER_HALLE, Route27_Text_OrnitologoIntro, Route27_Text_OrnitologoDefeated
	msgbox Route27_Text_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route27_EventScript_Pescador::
	trainerbattle_single TRAINER_ISAAC_2, Route27_Text_PescadorIntro, Route27_Text_PescadorDefeated
	msgbox Route27_Text_PescadorPostBattle, MSGBOX_AUTOCLOSE
	end



Route27_EventScript_Guay::
	trainerbattle_single TRAINER_MITCHELL, Route27_Text_GuayIntro, Route27_Text_GuayDefeated
	msgbox Route27_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end
