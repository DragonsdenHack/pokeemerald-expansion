VermilionCity_Jardin_MapScripts::
	.byte 0

VermilionCity_Jardin_EventScript_Criador::
	trainerbattle_single TRAINER_TRAINER_709, VermilionCity_Jardin_Text_CriadorIntro, VermilionCity_Jardin_Text_CriadorDefeated
	msgbox VermilionCity_Jardin_Text_CriadorPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_EventScript_Criadora::
	trainerbattle_single TRAINER_TRAINER_710, VermilionCity_Jardin_Text_CriadoraIntro, VermilionCity_Jardin_Text_CriadoraDefeated
	msgbox VermilionCity_Jardin_Text_CriadoraPostBattle, MSGBOX_AUTOCLOSE
	end

VermilionCity_Jardin_Cazabichos_Pelea::
lock
msgbox VermilionCity_Jardin_Cazabichos_Pelea_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Jardin_Cazabichos_Pelea_Texto_1:
	.string "¡Mirad lo que habéis hecho con mi jardin!\n"
	.string "¡No tenéis perdón!$"
