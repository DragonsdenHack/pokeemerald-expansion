RuinsOfAlph_MapScripts::
	.byte 0

RuinsOfAlph1::
lock     
faceplayer     
msgbox Text_1, MSGBOX_DEFAULT
release     
end

Text_1:
.string "¡Chst!\n"
.string "¿Sabías que si sintonizas la radio\l"
.string "a una frecuencia determinada\l"
.string "dentro de las ruinas se\l"
.string "escucharán sonidos extrañísimos?\l"
.string "¡Lo sabía!\l"
.string "¡Es todo una conspiración entre\l"
.string "los UNOWN y la TORRE RADIO!\l"
.string "[.]\l"
.string "[.]\l"
.string "¿Cómo?\l"
.string "¿Eso no tiene ningún sentido?$"



RuinsOfAlph2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "-Nosotros, humanos, debemos caminar\n"
.string "junto a ellos. Por ello, nosotros\l"
.string "partimos.-\l"
.string "La frase está grabada en\l"
.string "una de las cámaras.\l"
.string "¿Qué querrá decir?$"



RuinsOfAlph3::
end
