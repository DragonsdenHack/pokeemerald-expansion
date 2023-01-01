Route47_MapScripts::
	.byte 0

Route47_4::
lock     
faceplayer     
msgbox Route47_Text_4, MSGBOX_DEFAULT
release     
end

Route47_Text_4:
.string "El arte es una conversación unilateral\n"
.string "con lo no observado.$"



Route47_EventScript_Montanero::
	trainerbattle_single TRAINER_FERNANDO_5, Route47_Text_MontaneroIntro, Route47_Text_MontaneroDefeated
	msgbox Route47_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Montanero2::
	trainerbattle_single TRAINER_SAWYER_2, Route47_Text_Montanero2Intro, Route47_Text_Montanero2Defeated
	msgbox Route47_Text_Montanero2PostBattle, MSGBOX_AUTOCLOSE
	end



Route47_EventScript_Sabio::
	trainerbattle_single TRAINER_SAWYER_3, Route47_Text_SabioIntro, Route47_Text_SabioDefeated
	msgbox Route47_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route47_5::
lock
faceplayer
msgbox Route47_5_Text_5YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route47_5No
msgbox Route47_5_Text_5Yes, MSGBOX_DEFAULT
release
end



Route47_5_Text_5YesNo:
    .string "Dime, ¿crees ya haber visto todo cuanto\n"
	.string "este mundo tiene por ofrecer?$"



Route47_5No::
msgbox Route47_5_Text_5No, MSGBOX_DEFAULT
release
end


Route47_5_Text_5Yes:
    .string "Mmm, te entiendo, crees que nada puede\n"
	.string "superar lo que has vivido. No obstante,\l"
	.string "siempre hay lugar para la sorpresa, el\l"
	.string "poder bruto y absurdo puede ser\l"
	.string "rebasado por la calidad y la\l"
	.string "experiencia.$"



Route47_5_Text_5No:
    .string "¡Eso es! ¡Mantén viva esa ilusión del\n"
	.string "principiante que inicia su aventura!\l"
	.string "¡Es el camino a la sabiduría!$"
