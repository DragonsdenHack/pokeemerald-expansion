FiveIsland_PokemonCenter_1F_MapScripts::
	.byte 0

FiveIslandPokemonCenter1::
end



FiveIslandPokemonCenter2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "¿Conoces ya los RECREATIVOS?\p"
.string "Lo suyo es ir al menos con\n"
.string "un amigo. Si no, es un rollo.$"



FiveIslandPokemonCenter3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "ISLA SECUNDA tiene muy pocos\n"
.string "habitantes.\p"
.string "En el mismo cabo vive una señora\n"
.string "mayor.\p"
.string "Lleva allí ni se sabe...$"
