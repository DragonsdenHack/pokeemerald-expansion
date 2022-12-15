Route40_MapScripts::
	.byte 0

Route40_1::
end



Route40_2::
end



Route40_3::
lock     
faceplayer     
msgbox Route40_Text_3, MSGBOX_DEFAULT
release     
end

Route40_Text_3:
.string "A esta zona se la está comiendo la\n"
.string "marea poco a poco, debo averiguar\l"
.string "el misterio de estas rocas antes\l"
.string "de que el mar se las trague para\l"
.string "siempre.$"



Route40_4::
end



Route40_5::
end



Route40_6::
end



Route40_7::
end



Route40_8::
end



Route40_9::
end


Route40_10::
lock     
faceplayer     
msgbox Route40_Text_10, MSGBOX_DEFAULT
release     
end

Route40_Text_10:
.string "Aquí ya no pican ni la mitad de\n"
.string "piezas que hace 10 años, ¡voy a\l"
.string "tener que irme a ISLAS REMOLINO a\l"
.string "pillar algo!$"



Route40_11::
lock     
faceplayer     
msgbox Route40_Text_11, MSGBOX_DEFAULT
release     
end

Route40_Text_11:
.string "Hicimos bien en venir aquí, me lo\n"
.string "estoy pasando mejor que en CABO\l"
.string "CELESTE…$"



Route40_12::
lock     
faceplayer     
msgbox Route40_Text_12, MSGBOX_DEFAULT
release     
end

Route40_Text_12:
.string "Qué atardecer más bonito…$"



Route40_13::
end



Route40_EventScript_Nadadora::
	trainerbattle_single TRAINER_HAYDEN, Route40_Text_NadadoraIntro, Route40_Text_NadadoraDefeated
	msgbox Route40_Text_NadadoraPostBattle, MSGBOX_AUTOCLOSE
	end



Route40_EventScript_Chico::
	trainerbattle_single TRAINER_SOPHIE, Route40_Text_ChicoIntro, Route40_Text_ChicoDefeated
	msgbox Route40_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



Route40_EventScript_Nadadora2::
	trainerbattle_single TRAINER_BIANCA, Route40_Text_Nadadora2Intro, Route40_Text_Nadadora2Defeated
	msgbox Route40_Text_Nadadora2PostBattle, MSGBOX_AUTOCLOSE
	end



Route40_EventScript_Nadadora3::
	trainerbattle_single TRAINER_CELINA, Route40_Text_Nadadora3Intro, Route40_Text_Nadadora3Defeated
	msgbox Route40_Text_Nadadora3PostBattle, MSGBOX_AUTOCLOSE
	end
