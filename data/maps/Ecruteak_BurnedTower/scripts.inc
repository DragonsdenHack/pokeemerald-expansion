Ecruteak_BurnedTower_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Ecruteak_BurnedTower_OnResume
	.byte 0

Ecruteak_BurnedTower_OnResume:
	call Ecruteak_BurnedTower_SetupEscapeWarp
	end

Ecruteak_BurnedTower_SetupEscapeWarp::
	setescapewarp MAP_ECRUTEAK_CITY, 10, 8
	return

BurnedTower1::
end



BurnedTower2::
lock
faceplayer
msgbox BurnedTower2_Texto_1 MSGBOX_NPC
release
end

BurnedTower2_Texto_1:
.string "Ahh!\n"
	.string "I came down out of curiosity to see\l"
	.string "what was happening, I only saw a huge\l"
	.string "POKÉMON with immense strength. It\l"
	.string "knocked down all the POKÉMON of our\l"
	.string "SAGES with a single blow! I wanted to\l"
	.string "help, but that POKÉMON is terrifying.$"


BurnedTower3::
lock
faceplayer
msgbox BurnedTower3_Texto_1 MSGBOX_NPC
release
end

BurnedTower3_Texto_1:
	.string "If our venerable LEADER doesn't show\n"
	.string "up, this could end disastrously…$"


BurnedTower4::
end



BurnedTower5::
end



BurnedTower6::
end

BurnedTower7::
lock
faceplayer
msgbox BurnedTower7_Texto_1 MSGBOX_NPC
release
end

BurnedTower7_Texto_1:
	.string "The SAGES of BELL TOWER are very\n"
	.string "skilled TRAINERS, I hope they can stop\l"
	.string "that lunatic.$"



BurnedTower_EventScript_Chico::
	trainerbattle_single TRAINER_HELENE, BurnedTower_Text_ChicoIntro, BurnedTower_Text_ChicoDefeated
	msgbox BurnedTower_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



BurnedTowerDocumento_100::
msgbox BurnedTowerDocumento_Text_100, MSGBOX_SIGN   
end

BurnedTowerDocumento_Text_100:
	.string "To honor the memory of the three\n"
	.string "POKÉMON that perished. Your essence\l"
	.string "endures here, and JOHTO pays tribute to\l"
	.string "you from the western pagoda.$"

BurnedTower_FuegoFatuo::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_811, BurnedTower_FuegoFatuo_Despues
msgbox BurnedTower_FuegoFatuo_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM72
msgbox BurnedTower_FuegoFatuo_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_811
release     
end

BurnedTower_FuegoFatuo_Despues::
msgbox BurnedTower_FuegoFatuo_Texto_2, MSGBOX_NPC
release
end

BurnedTower_FuegoFatuo_Texto_2:
	.string "WILL-O-WISP burns the opponent,\n"
	.string "nullifying that physical momentum, even\l"
	.string "from the fiercest attackers.$"

BurnedTower_FuegoFatuo_Texto_1.1:
.string "{PLAYER} obtained TM72 WILL-O-WISP\n"
	.string "from the CHANNELER!!$"

BurnedTower_FuegoFatuo_Texto_1:
	.string "I still feel the energy of those who\n"
	.string "experienced the tragedy 150 years ago.$"
