Violet_SproutTowerP2_MapScripts::
	.byte 0

VioletSproutTowerP2_1::
end



VioletSproutTowerP2_2::
end



VioletSproutTowerP2_3::
end



VioletSproutTowerP2_4::
end



VioletSproutTowerP2_5::
end



VioletSproutTowerP2_6::
end



VioletSproutTowerP2_7::
end



VioletSprotTowerP2_EventScript_Pensador::
	trainerbattle_single TRAINER_LUCAS_2, VioletSprotTowerP2_Text_PensadorIntro, VioletSprotTowerP2_Text_PensadorDefeated
	msgbox VioletSprotTowerP2_Text_PensadorPostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP2_EventScript_Pensador2::
	trainerbattle_single TRAINER_TRENT_3, VioletSprotTowerP2_Text_Pensador2Intro, VioletSprotTowerP2_Text_Pensador2Defeated
	msgbox VioletSprotTowerP2_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP2Documento_100::
msgbox VioletSprotTowerP2Documento_Text_100, MSGBOX_SIGN   
end

VioletSprotTowerP2Documento_Text_100:
	.string "Es la solemne estatua de un\n"
	.string "BELLSPROUT. Tiene grabado algo en\l"
	.string "letras de oro: - Todos partimos de\l"
	.string "puntos diferentes... pero todos\l"
	.string "podemos tocar el mismo cielo-.$"
