Violet_SprotTower_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Violet_SprotTower_OnResume
	.byte 0

Violet_SprotTower_OnResume:
	call Violet_SprotTower_SetupEscapeWarp
	end

Violet_SprotTower_SetupEscapeWarp::
	setescapewarp MAP_VIOLET_CITY, 33, 12
	return

VioletSprotTower_1::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_1, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_1:
	.string "In this place, we venerate not only\n"
	.string "BELLSPROUT, but also the art of\l"
	.string "POKÉMON battling. If you think you have\l"
	.string "what is needed, climb to the top floor\l"
	.string "and see for yourself.$"



VioletSprotTower_2::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_2, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_2:
	.string "In this place,we venerate BELLSPROUT, ,\n"
	.string "but also the art of POKÉMON battling.\l"
	.string "If you think you have what is needed,\l"
	.string "climb to the top floor and see for\l"
	.string "yourself.$"



VioletSprotTower_3::
end



VioletSprotTower_4::
end


VioletSprotTower_EventScript_Pensador::
	trainerbattle_single TRAINER_CLARK, VioletSprotTower_Text_PensadorIntro, VioletSprotTower_Text_PensadorDefeated
	msgbox VioletSprotTower_Text_PensadorPostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerDocumento_100::
msgbox VioletSprotTowerDocumento_Text_100, MSGBOX_SIGN   
end

VioletSprotTowerDocumento_Text_100:
	.string "It is the solemn statue of a\n"
	.string "BELLSPROUT. Engraved upon it in golden\l"
	.string "letters is: -We all start from different\l"
	.string "points… but we can all reach the same\l"
	.string "sky-.$"

VioletSprotTower_5::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_5, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_5:
	.string "I had heard that KANTO is increasingly\n"
	.string "disregarding its own traditions and\l"
	.string "history; I hope we don't reach that\l"
	.string "point here.$"

VioletSprotTower_6::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_6, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_6:
	.string "The enormous pillar holding this tower\n"
	.string "is based on a BELLSPROUT's stem. Its\l"
	.string "grand flexibility protects the TOWER\l"
	.string "even from earthquakes. If this tower is\l"
	.string "still standing today, it's due to that.$"
