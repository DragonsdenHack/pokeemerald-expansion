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
.string "Aquí aprendemos la unidad de los\n"
.string "opuestos. Hay que ser móvil y\l"
.string "también inmóvil, defensivo y\l"
.string "ofensivo.$"



TinTower2::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_2, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_2:
.string "El sabio no abandona después de\n"
.string "chocar contra la realidad, solo\l"
.string "ajusta sus expectativas y sigue.$"



TinTower3::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_3, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_3:
.string "Se dice que los POKÉMON\n"
.string "LEGENDARIOS encarnan tres\l"
.string "poderes... el rayo que alcanzó la\l"
.string "torre... el fuego que quemó la\l"
.string "torre... y la lluvia que apagó\l"
.string "dicho fuego...$"



TinTower4::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_4, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_4:
.string "Lo que hizo LANCE no tiene perdón,\n"
.string "confinar de esa manera a las\l"
.string "bestias errantes... Afortunadamente,\l"
.string "ya vuelven a correr libremente por\l"
.string "los prados de JOHTO, todo gracias\l"
.string "a vosotros.$"



TinTower5::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_5, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_5:
.string "TORRE CAMPANA fue construída en\n"
.string "honor a HO-OH, así como TORRE\l"
.string "QUEMADA, otrora TORRE LATÓN, en\l"
.string "honor a LUGIA. Aquellos que\l"
.string "llegaron a conocer la conexión\l"
.string "última entre las dos torres ya no\l"
.string "se encuentran entre nosotros.$"



TinTower6::
lock     
faceplayer     
msgbox Ecruteak_TinTower_Text_6, MSGBOX_DEFAULT
release     
end

Ecruteak_TinTower_Text_6:
.string "De los POKÉMON LEGENDARIOS, se\n"
.string "dice que SUICUNE es el más\l"
.string "cercano a HO-OH. Además, he oído\l"
.string "que también puede haber una\l"
.string "conexión con los POKÉMON UNOWN.\l"
.string "Los POKÉMON UNOWN deben de tener\l"
.string "un lazo de unión con SUICUNE.$"
