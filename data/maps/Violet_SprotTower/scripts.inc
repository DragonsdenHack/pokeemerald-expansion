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



VioletSprotTowerDocumento_100::
msgbox VioletSprotTowerDocumento_Text_100, MSGBOX_SIGN   
end

VioletSprotTowerDocumento_Text_100:
	.string "Es la solemne estatua de un\n"
	.string "BELLSPROUT. Tiene grabado algo en\l"
	.string "letras de oro: - Todos partimos de\l"
	.string "puntos diferentes{PAUSE 15}…{PAUSE 15} pero todos\l"
	.string "podemos tocar el mismo cielo-.$"

VioletSprotTower_5::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_5, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_5:
.string "He oído que KANTO respeta cada vez\n"
	.string "menos sus propias tradiciones e\l"
	.string "historia, espero que aquí no lleguemos\l"
	.string "a eso.$"

VioletSprotTower_6::
lock     
faceplayer     
msgbox VioletCity_SproutTower_Text_6, MSGBOX_DEFAULT
release     
end

VioletCity_SproutTower_Text_6:
.string "El enorme pilar que sostiene esta torre\n"
	.string "está basado en el tallo de BELLSPROUT,\l"
	.string "su gran flexibilidad lo hace inmune a\l"
	.string "terremotos. Si esta torre sigue a día\l"
	.string "de hoy en pie, es gracias a eso.$"
