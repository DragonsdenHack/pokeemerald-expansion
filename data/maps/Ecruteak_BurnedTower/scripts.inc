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
.string "¡Ahh!\n"
	.string "¡Bajé por curiosidad para ver qué\l"
	.string "ocurría, solo vi un enorme\l"
	.string "POKÉMON con una fuerza inmensa.\l"
	.string "Tumbaba de un golpe a todos los\l"
	.string "POKÉMON de nuestros PENSADORES!\l"
	.string "Quería ayudar, pero ese POKÉMON da\l"
	.string "miedo.$"


BurnedTower3::
lock
faceplayer
msgbox BurnedTower3_Texto_1 MSGBOX_NPC
release
end

BurnedTower3_Texto_1:
.string "Si no aparece nuestro venerable\n"
	.string "LÍDER, esto puede acabar muy mal...$"


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
.string "Los PENSADORES de TORRE CAMPANA\n"
	.string "son grandes ENTRENADORES,\l"
	.string "confiemos en que puedan detener a\l"
	.string "ese loco.$"



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
.string "FUEGO FATUO quema al rival, anulando\n"
	.string "ese ímpetu físico, incluso a los\l"
	.string "atacantes más feroces.$"

BurnedTower_FuegoFatuo_Texto_1.1:
.string "¡¡{PLAYER} obtuvo la MT72 FUEGO\n"
	.string "FATUO de manos de exorcista!!$"

BurnedTower_FuegoFatuo_Texto_1:
.string "Aún puedo sentir la energía de\n"
	.string "aquellos que sufrieron la tragedia\l"
	.string "de hace 150 años.$"
