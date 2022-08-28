ViridianCity_School_MapScripts::
	.byte 0

ViridianCitySchool1::
lock     
faceplayer     
msgbox ViridianCity_School_Text_1, MSGBOX_DEFAULT
release     
end

ViridianCity_School_Text_1:
.string "¡Esto es un asco!\n"
.string "¿Por qué tengo que aprenderlo en\l"
.string "inglés?$"



ViridianCitySchool2::
lock     
faceplayer     
msgbox ViridianCity_School_Text_2, MSGBOX_DEFAULT
release     
end

ViridianCity_School_Text_2:
.string "¡Ya te lo dije!\n"
.string "¡Hoy en día piden el Inglés en\l"
.string "todos sitios así que no te quejes!$"
