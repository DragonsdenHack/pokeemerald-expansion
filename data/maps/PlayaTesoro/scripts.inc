PlayaTesoro_MapScripts::
	.byte 0

PlayaTesoro_EventScript_Nadadora::
	trainerbattle_single TRAINER_GARRISON, PlayaTesoro_Text_NadadoraIntro, PlayaTesoro_Text_NadadoraDefeated
	msgbox PlayaTesoro_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



PlayaTesoro2::
lock     
faceplayer     
msgbox PlayaTesoro_Text2, MSGBOX_DEFAULT
release     
end

PlayaTesoro_Text2:
.string "Muchas veces la marea trae objetos\n"
	.string "de gran valor a la playa.\p"
	.string "Por eso vengo con frecuencia\n"
	.string "a peinar la arena.$"
	