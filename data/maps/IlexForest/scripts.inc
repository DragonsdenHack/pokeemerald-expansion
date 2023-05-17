IlexForest_MapScripts::
	.byte 0

IlexForest1::
lock     
faceplayer     
msgbox IllexForest_Text_1, MSGBOX_DEFAULT
release     
end

IllexForest_Text_1:
.string "PUEBLO AZALEA siempre ha obtenido\n"
.string "la madera con la que fabricamos\l"
.string "carbón de este bosque. Le estamos\l"
.string "muy agradecidos.$"



IlexForest2::
end



IlexForest3::
lock     
faceplayer     
msgbox IllexForest_Text_3, MSGBOX_DEFAULT
release     
end

IllexForest_Text_3:
.string "Malditos arbustos…\n"
.string "¿Por qué se regeneran si acabo de\l"
.string "cortarlos hace nada?\l"
.string "¿En serio tengo que volver a\l"
.string "AZALEA a por CORTE?$"



IlexForest4::
end



IlexForest5::
end



IlexForest6::
end



IlexForest7::
end



IlexForest8::
end



IlexForest9::
lock     
faceplayer     
msgbox IllexForest_Text_9, MSGBOX_DEFAULT
release     
end

IllexForest_Text_9:
.string "Entonces, FARFETCH es débil, pero\n"
.string "nadie corta la madera como ese\l"
.string "POKÉMON…$"



IlexForest10::
end



IlexForest11::
end



IlexForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_WALLY_VR_4, IlexForest_Text_CazabichosIntro, IlexForest_Text_CazabichosDefeated
	msgbox IlexForest_Text_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chico::
	trainerbattle_single TRAINER_BRENDAN_LILYCOVE_MUDKIP, IlexForest_Text_ChicoIntro, IlexForest_Text_ChicoDefeated
	msgbox IlexForest_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



IlexForest_EventScript_Chica::
	trainerbattle_single TRAINER_WALLY_VR_5, IlexForest_Text_ChicaIntro, IlexForest_Text_ChicaDefeated
	msgbox IlexForest_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end
