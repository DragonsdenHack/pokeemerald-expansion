TwoIsland_Torre_P2_MapScripts::
	.byte 0

TwoIsland_Torre_P2_Cientifico::
lock
faceplayer
msgbox TwoIsland_Torre_P2_Cientifico_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P2_Cientifico_Texto_1:
	.string "Isn't that just mind-blowing? Like, who\n"
	.string "would've thought a place like this would\l"
	.string "be on an island like this, right?$"

TwoIsland_Torre_P2_Cientifico_2::
lock
faceplayer
msgbox TwoIsland_Torre_P2_Cientifico_2_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P2_Cientifico_2_Texto_1:
	.string "Once the entire business is\n"
	.string "established, we will become the primary\l"
	.string "attraction of the islands. Everyone will\l"
	.string "come here to expend their money.$"



TwoIsland_Torre_P2_Trabajador::
lock
faceplayer
msgbox TwoIsland_Torre_P2_Trabajador_Texto_1 MSGBOX_DEFAULT
release
end

TwoIsland_Torre_P2_Trabajador_Texto_1:
	.string "We are bringing extremely rare POKÉMON\n"
	.string "from other regions; everyone will be\l"
	.string "impressed and will want to acquire them\l"
	.string "at any price.$"

TwoIsland_Torre_P2_EventScript_Biker::
	trainerbattle_single TRAINER_TRAINER_159, TwoIsland_Torre_P2_Text_BikerIntro, TwoIsland_Torre_P2_Text_BikerDefeated
	msgbox TwoIsland_Torre_P2_Text_BikerPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_Torre_P2_EventScript_Calvo::
	trainerbattle_single TRAINER_TRAINER_160, TwoIsland_Torre_P2_Text_CalvoIntro, TwoIsland_Torre_P2_Text_CalvoDefeated
	msgbox TwoIsland_Torre_P2_Text_CalvoPostBattle, MSGBOX_AUTOCLOSE
	end


