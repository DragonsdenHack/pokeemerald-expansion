Pass_Route43_MapScripts::
	.byte 0

PassRoute43_1::
lock     
faceplayer     
msgbox Pass_Route43_Text_1, MSGBOX_DEFAULT
release     
end

Pass_Route43_Text_1:
.string "Bienvenido al LAGO DE LA FURIA, no\n"
.string "olvides recoger todo y no tirar\l"
.string "nada durante tu estancia.$"



PassRoute43_2::
lock     
faceplayer     
msgbox Pass_Route43_Text_2, MSGBOX_DEFAULT
release     
end

Pass_Route43_Text_2:
.string "Y yo me pregunto, ¿qué habrá en el\n"
.string "fondo del lago?\l"
.string "¿Algún POKÉMON raro?$"



PassRoute43_3::
lock     
faceplayer     
msgbox Pass_Route43_Text_3, MSGBOX_DEFAULT
release     
end

Pass_Route43_Text_3:
.string "Aquí había vida salvaje, virgen,\n"
.string "una selva en la frontera del mar,\l"
.string "nunca vista por aquellos que\l"
.string "flotan sobre una superficie opaca.$"
