AzaleaCarbonS2_MapScripts::
	.byte 0

AzaleaCarbonS2_3::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_3:
.string "Ahora tenemos vías de tren, conexiones\n"
.string "marítimas y expansión global. ¿Por qué\l"
.string "esto iba a ser diferente?$"




AzaleaCarbonS2_5::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_5, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_5:
.string "Todo está dispuesto, en cuanto las\n"
.string "máquinas empiecen a trabajar,\l"
.string "facturaremos una cantidad inmensa.\l"
.string "Hay mucha demanda.$"





AzaleaCarbonS2_9::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_9, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_9:
.string "Hemos restaurado por completo el\n"
.string "pequeño sótano en el que fabricaban el\l"
.string "CARBÓN. La inversión ha sido grande,\l"
.string "pero este lugar ahora sí que parece un\l"
.string "lugar de trabajo de verdad, ¿no crees?$"



AzaleaCarbonS2_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_110, AzaleaCarbonS2_Text_ObreroIntro, AzaleaCarbonS2_Text_ObreroDefeated
	msgbox AzaleaCarbonS2_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS2_EventScript_Obrero2::
	trainerbattle_single TRAINER_TRAINER_111, AzaleaCarbonS2_Text_Obrero2Intro, AzaleaCarbonS2_Text_Obrero2Defeated
	msgbox AzaleaCarbonS2_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS2_EventScript_Obrero3::
	trainerbattle_single TRAINER_TRAINER_112, AzaleaCarbonS2_Text_Obrero3Intro, AzaleaCarbonS2_Text_Obrero3Defeated
	msgbox AzaleaCarbonS2_Text_Obrero3PostBattle, MSGBOX_AUTOCLOSE
	end
