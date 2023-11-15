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
.string "Good things get washed up by the\n"
    .string "ocean current onto this beach.\p"
    .string "That's why I often come here for\n"
    .string "some beachcombing.$"
