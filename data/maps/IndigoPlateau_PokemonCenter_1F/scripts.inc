IndigoPlateau_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
	.byte 0

IndigoPlateau_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_INDIGO_PLATEAU
	end

IndigoPlateau_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

IndigoPlateauPokemonCenter1::
end



IndigoPlateauPokemonCenter2::
end



IndigoPlateauPokemonCenter3::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_3:
.string "No sé quien eres ni de donde has\n"
.string "salido, pero poco importa chico,\l"
.string "este campeonato ya tiene dueño.\l"
.string "Así es, oí a LANCE decir que ese\l"
.string "chico de PUEBLO PALETA estaba\l"
.string "destinado a ser el CAMPEÓN.$"



IndigoPlateauPokemonCenter4::
end



IndigoPlateauPokemonCenter5::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_5:
.string "Los POKéMON de tipo FANTASMA\n"
.string "de AGATHA son escalofriantemente\l"
.string "fuertes.\p"
.string "Yo me puse a criar a mis POKéMON\n"
.string "del tipo LUCHA con todas las ganas\l"
.string "del mundo…\p"
.string "Y me planté ante AGATHA convencido\n"
.string "de que podría ganar… y no quiero\l"
.string "ni contarte la paliza que me dio.\p"
.string "Además, ¡no sabes el genio que\n"
.string "tiene la señora!\p"
.string "¡Como empiece a gritar, lo llevas\n"
.string "claro!$"



IndigoPlateauPokemonCenter6::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_6, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_6:
.string "Yo creo que lo de ser del ALTO\n"
.string "MANDO se lleva en la sangre.\p"
.string "Por lo que sé, un primo de LANCE\n"
.string "es también LÍDER de un GIMNASIO\l"
.string "de por ahí.$"



IndigoPlateauPokemonCenterDocumento_100::
msgbox IndigoPlateauPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

IndigoPlateauPokemonCenterDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre LANCE,\n"
	.string "miembro del ALTO MANDO.\p"
	.string "Según fuentes cercanas, quien fundó\n"
	.string "el clan de los maestros del tipo\l"
	.string "DRAGÓN fue el abuelo de LANCE.$"
