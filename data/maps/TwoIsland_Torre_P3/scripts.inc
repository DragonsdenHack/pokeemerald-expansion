TwoIsland_Torre_P3_MapScripts::
	.byte 0

TwoIsland_Torre_P3_Motero::
lock
faceplayer
msgbox TwoIsland_Torre_P3_Motero_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P3_Motero_Texto_1:
	.string "Leave me in peace! You didn't see me, and\n"
	.string "me neither, so I won't have to fight with\l"
	.string "you.$"

TwoIsland_Torre_P3_Cientifico::
lock
faceplayer
msgbox TwoIsland_Torre_P3_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P3_Cientifico_Texto_1:
	.string "The few scientists you'll find on this\n"
	.string "island are here for archaeological\l"
	.string "purposes. This building is an exception;\l"
	.string "from in here, it might seem like we're in\l"
	.string "KANTO. Maybe we can import a bit of that\l"
	.string "region to this island.$"

TwoIsland_Torre_P3_Cientifico_2::
lock
faceplayer
msgbox TwoIsland_Torre_P3_Cientifico_2_Texto_1 MSGBOX_AUTOCLOSE
release
end

TwoIsland_Torre_P3_Cientifico_2_Texto_1:
	.string "The deal they had with PORYGON at the\n"
	.string "CELADON CITY GAME CORNER will be\l"
	.string "nothing compared to this. Wait, you\l"
	.string "sound familiar. Have I seen you before?$"


TwoIsland_Torre_P3_EventScript_Calvo::
	trainerbattle_single TRAINER_TRAINER_161, TwoIsland_Torre_P3_Text_CalvoIntro, TwoIsland_Torre_P3_Text_CalvoDefeated
	msgbox TwoIsland_Torre_P3_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P3_EventScript_Rocket::
	trainerbattle_single TRAINER_TRAINER_162, TwoIsland_Torre_P3_Text_RocketIntro, TwoIsland_Torre_P3_Text_RocketDefeated
	msgbox TwoIsland_Torre_P3_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end



