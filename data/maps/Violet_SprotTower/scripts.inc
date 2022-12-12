Violet_SprotTower_MapScripts::
	.byte 0

VioletSprotTower_1::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_1, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_1:
.string "La leyenda dice que la columna que\n"
.string "sostiene esta torre es el tallo de\l"
.string "un enorme BELLSPROUT que medía 30\l"
.string "metros de altura.\l"
.string "¿Será cierto?$"



VioletSprotTower_2::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_2, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_2:
.string "En este lugar rendimos culto a\n"
.string "BELLSPROUT, pero también al\l"
.string "combate POKÉMON. Si crees tener lo\l"
.string "que hay que tener, sube hasta el\l"
.string "último piso y compruébalo tú\l"
.string "mismo.$"



VioletSprotTower_3::
end



VioletSprotTower_4::
end


VioletSprotTower_EventScript_Pensador::
	trainerbattle_single TRAINER_CLARK, VioletSprotTower_Text_PensadorIntro, VioletSprotTower_Text_PensadorDefeated
	msgbox VioletSprotTower_Text_PensadorPostBattle, MSGBOX_AUTOCLOSE
	end
	
