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
	.string "I came from LAVENDER TOWN to pay my\n"
	.string "respects at the towers of ECRUTEAK\l"
	.string "CITY and VIOLET CITY, though it's been\l"
	.string "a while. I won't be able to return until\l"
	.string "the borders open…$"



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
	.string "It is the solemn statue of a\n"
	.string "BELLSPROUT. Engraved upon it in golden\l"
	.string "letters is: -We all start from different\l"
	.string "points… but we can all reach the same\l"
	.string "sky-.$"
