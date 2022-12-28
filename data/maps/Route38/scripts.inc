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
.string "DODRIO es mi ave preferida, me\n"
.string "encanta porque ataca sin ningún\l"
.string "miedo, sin mirar atrás. Su\l"
.string "combinación ATAQUE-VELOCIDAD es\l"
.string "única entre las aves.$"



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
.string "El comportamiento de los TAUROS y\n"
.string "MILTANK en estado salvaje es\l"
.string "fascinante.$"



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
	.string "¡Recuerda!\n"
	.string "¡TAUROS es más potente, pero\l"
	.string "MILTANK es más resistente!$"



Route38Documento_101::
msgbox Route38Documento_Text_101, MSGBOX_SIGN   
end

Route38Documento_Text_101:
	.string "RUTA 38\n"
	.string "CIUDAD OLIVO - CIUDAD IRIS$"
