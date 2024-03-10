Violet_SproutTowerP1_MapScripts::
	.byte 0

VioletSproutTowerP1_1::
end



VioletSproutTowerP1_2::
end


VioletSproutTowerP1_3::
lock     
faceplayer     
msgbox VioletCity_SproutTowerP1_Text_3, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTowerP1_Text_3:
.string "Vine desde PUEBLO LAVANDA a\n"
.string "presentar mis respetos a las\l"
.string "pagodas de CIUDAD IRIS y CIUDAD\l"
.string "MALVA, aunque de eso hace ya\l"
.string "tiempo, hasta que no abran las\l"
.string "fronteras no podré volver…$"



VioletSproutTowerP1_4::
end



VioletSprotTowerP1_EventScript_Pensador::
	trainerbattle_single TRAINER_ALAN, VioletSprotTowerP1_Text_PensadorIntro, VioletSprotTowerP1_Text_PensadorDefeated
	msgbox VioletSprotTowerP1_Text_PensadorPostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP1_EventScript_Pensador2::
	trainerbattle_single TRAINER_ERIC, VioletSprotTowerP1_Text_Pensador2Intro, VioletSprotTowerP1_Text_Pensador2Defeated
	msgbox VioletSprotTowerP1_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP1Documento_100::
msgbox VioletSprotTowerP1Documento_Text_100, MSGBOX_SIGN   
end

VioletSprotTowerP1Documento_Text_100:
	.string "Es la solemne estatua de un\n"
	.string "BELLSPROUT. Tiene grabado algo en\l"
	.string "letras de oro: - Todos partimos de\l"
	.string "puntos diferentes{PAUSE 15}…{PAUSE 15} pero todos\l"
	.string "podemos tocar el mismo cielo-.$"
