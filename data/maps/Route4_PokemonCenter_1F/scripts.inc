Route4_PokemonCenter_1F_MapScripts::
	.byte 0

Route4PokemonCenter1::
end



Route4PokemonCenter2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "-El TEAM ROCKET atraca a mano\n"
.string "armada a los ciudadanos de CIUDAD\l"
.string "CELESTE-\l"
.string "Debería de darte verguenza salir\l"
.string "en las noticias por motivos así,\l"
.string "habéis puesto patas arriba una\l"
.string "vivienda y robado todas sus MT\l"
.string "EXCAVAR, ¡espero al menos que tú\l"
.string "no hayas tenido nada que ver!$"



Route4PokemonCenter3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "El PC es otro servicio básico que\n"
.string "los ROCKET pueden usar, junto con\l"
.string "los CENTROS POKÉMON es lo único\l"
.string "público a lo que tenéis acceso,\l"
.string "¡yo no os daría ni eso!$"



Route4PokemonCenter4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "¡Hey, deja de mirar las 6 POKÉ\n"
.string "BALL de mi cinturón!\l"
.string "¡No me las robarás!$"



Route4PokemonCenter5::
end
