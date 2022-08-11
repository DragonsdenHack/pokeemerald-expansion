Violet_Shop_MapScripts::
	.byte 0

VioletShop1::
end



VioletShop2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "Cerca de aquí están las RUINAS\n"
.string "ALFA, ese lugar guarda en su\l"
.string "interior un gran misterio por\l"
.string "resolver, estoy convencido.$"



VioletShop3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "Los POKÉMON ROCA tienen gran\n"
.string "ventaja sobre el VOLADOR, ¡pero\l"
.string "PEGASO destrozó igualmente a todo\l"
.string "mi equipo!$"



VioletShop4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "En JOHTO no hay tanta competencia\n"
.string "como en KANTO por ser el mejor\l"
.string "ENTRENADOR, pero la búsqueda de\l"
.string "ese vínculo con tu equipo hace\l"
.string "que, sin buscarlo, varios de los\l"
.string "antiguos maestros de esta región\l"
.string "sean los mejores ENTRENADORES.$"
