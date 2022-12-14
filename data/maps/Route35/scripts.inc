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
.string "Por esta ruta suele entrenar la\n"
.string "policía de TRIGAL, ¡esos ARCANINE\l"
.string "de KANTO imponen mucho!$"



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
.string "¿Sabes dónde podría encontrar un\n"
.string "MAGMAR?\l"
.string "¡Tranquilo!\l"
.string "¡No pienso quemar el PARQUE\l"
.string "NACIONAL!$"



Route35_6::
lock     
faceplayer     
msgbox Route35_Text_6, MSGBOX_DEFAULT
release     
end

Route35_Text_6:
.string "La policía es esencial para\n"
.string "mantener el orden y la seguridad,\l"
.string "pero no hay nada más seguro que\l"
.string "contar con POKÉMON bien\l"
.string "entrenados.$"



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
