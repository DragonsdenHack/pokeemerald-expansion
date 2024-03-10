Ecruteak_TinTower_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Ecruteak_TinTower_OnResume
	.byte 0

Ecruteak_TinTower_OnResume:
	call Ecruteak_TinTower_SetupEscapeWarp
	end

Ecruteak_TinTower_SetupEscapeWarp::
	setescapewarp MAP_ECRUTEAK_CITY, 64, 22
	return

TinTower1::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_1, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_1:
	.string "Here we learn the unity of opposites.\n"
	.string "You must be mobile and also immobile,\l"
	.string "defensive and offensive.$"



TinTower2::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_2:
	.string "The wise one does not give up after\n"
	.string "colliding with reality; they only adjust\l"
	.string "their expectations and continue.$"



TinTower3::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_3:
	.string "It is said that the LEGENDARY POKÉMON\n"
	.string "embody three powers… the lightning\l"
	.string "that struck the tower… the fire that\l"
	.string "burned the tower… and the rain that\l"
	.string "extinguished that fire...$"



TinTower4::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_4:
	.string "There's no forgiveness for what LANCE\n"
	.string "did, confining the wandering beasts\l"
	.string "like that… Thankfully, they're now\l"
	.string "running freely in the meadows of JOHTO\l"
	.string "again, all thanks to you.$"



TinTower5::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_5:
	.string "BELL TOWER was built in honor of HO-OH,\n"
	.string "just as BURNED TOWER, formerly known as\l"
	.string "BRASS TOWER, was built in honor of\l"
	.string "LUGIA. Those who came to know the\l"
	.string "ultimate connection between the two\l"
	.string "towers are no longer among us.$"



TinTower6::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_6:
	.string "Among the LEGENDARY POKÉMON, it's said\n"
	.string "that SUICUNE is the closest to HO-OH.\l"
	.string "Also, I've heard there might be a\l"
	.string "connection with the UNOWN POKÉMON. The\l"
	.string "UNOWN POKÉMON must have some\l"
	.string "connection with SUICUNE.$"
