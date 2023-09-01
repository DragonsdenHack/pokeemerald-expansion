MahoganyTown_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, MahoganyTown_PokemonCenter_1F_OnTransition
	.byte 0

MahoganyTown_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_MAHOGANY_TOWN
	end

MahoganyTown_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

MahoganyTownPkmnCenter1::
end



MahoganyTownPkmnCenter2::
lock     
faceplayer     
msgbox MahoganyTown_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_PokemonCenter_Text_2:
.string "Mucha gente nueva está llegando\n"
.string "aquí últimamente, me sorprende que\l"
.string "FREDO no haya dicho nada.$"



MahoganyTownPkmnCenter3::
lock     
faceplayer     
msgbox MahoganyTown_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_PokemonCenter_Text_3:
.string "En mi juventud, rodeaba a nado todo\n"
.string "el LAGO DE LA FURIA. ¡Ahora lo\l"
.string "rodeo caminando!$"



MahoganyTownPkmnCenter4::
lock     
faceplayer     
msgbox MahoganyTown_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

MahoganyTown_PokemonCenter_Text_4:
.string "¿Has estado en el LAGO DE LA\n"
.string "FURIA?\l"
.string "Parece que su profundidad total es\l"
.string "aún un misterio, ¿podría haber\l"
.string "alguna nueva especie ahí abajo?$"
