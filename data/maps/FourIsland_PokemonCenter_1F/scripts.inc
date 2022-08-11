FourIsland_PokemonCenter_1F_MapScripts::
	.byte 0

FourIslandPokemonCenter1::
end



FourIslandPokemonCenter2::
lock     
faceplayer     
msgbox Text_2, MSGBOX_DEFAULT
release     
end

Text_2:
.string "En la CUEVA GLACIADA hay un\n"
.string "POKéMON raro del tipo HIELO.\p"
.string "Aquí viene mucha gente para\n"
.string "verlo.$"



FourIslandPokemonCenter3::
lock     
faceplayer     
msgbox Text_3, MSGBOX_DEFAULT
release     
end

Text_3:
.string "¡Pero bueno!\p"
.string "¿Que aún no ha llegado el nuevo\n"
.string "DIARIO POKéMON a esta isla?$"



FourIslandPokemonCenter4::
lock     
faceplayer     
msgbox Text_4, MSGBOX_DEFAULT
release     
end

Text_4:
.string "¿Cómo? ¿Un HUEVO POKéMON?\n"
.string "Ni idea...\p"
.string "Eh..., sí, espera, los ENCARGADOS\n"
.string "de la GUARDERÍA comentaron algo\l"
.string "sobre eso.\p"
.string "Dijeron que habían encontrado\n"
.string "HUEVOS en la propia GUARDERÍA.$"
