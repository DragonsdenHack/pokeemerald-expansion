Ecruteak_TinTowerP7_MapScripts::
	.byte 0

TinTowerP7_1::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp7_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp7_Text_1:
.string "Más que nuestras habilidades, son\n"
.string "nuestras elecciones las que\l"
.string "muestran quiénes somos.$"



TinTowerP7_2::
end



TinTowerP7_3::
end



TinTowerP7_4::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp7_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp7_Text_4:
.string "El mañana valdrá la pena porque el\n"
.string "hoy vale la pena.$"



TinTowerP7_5::
end



TinTowerP7_6::
lock     
faceplayer     
msgbox Ecruteak_TinTowerp7_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTowerp7_Text_6:
.string "Lo peor que le puede ocurrir a\n"
.string "cualquiera es que se le comprenda\l"
.string "por completo.$"



TinTowerP7_EventScript_Monje::
	trainerbattle_single TRAINER_DAYTON, TinTowerP7_Text_MonjeIntro, TinTowerP7_Text_MonjeDefeated
	msgbox TinTowerP7_Text_MonjePostBattle, MSGBOX_AUTOCLOSE
	end



TinTowerP7_EventScript_Monje2::
	trainerbattle_single TRAINER_MAKAYLA, TinTowerP7_Text_Monje2Intro, TinTowerP7_Text_Monje2Defeated
	msgbox TinTowerP7_Text_Monje2PostBattle, MSGBOX_AUTOCLOSE
	end
