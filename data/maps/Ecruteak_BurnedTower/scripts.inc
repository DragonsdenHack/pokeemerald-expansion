Ecruteak_BurnedTower_MapScripts::
	.byte 0

BurnedTower1::
end



BurnedTower2::
end



BurnedTower3::
end



BurnedTower4::
end



BurnedTower5::
end



BurnedTower6::
end



BurnedTower_EventScript_Chico::
	trainerbattle_single TRAINER_HELENE, BurnedTower_Text_ChicoIntro, BurnedTower_Text_ChicoDefeated
	msgbox BurnedTower_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



BurnedTowerDocumento_100::
msgbox BurnedTowerDocumento_Text_100, MSGBOX_SIGN   
end

BurnedTowerDocumento_Text_100:
.string "En memoria a los tres POKÉMON que\n"
	.string "perdieron la vida. Vuestra esencia aquí\l"
	.string "permanece, y JOHTO os honra desde la\l"
	.string "pagoda del oeste.$"
