BlackthornCity_PkmnCenter_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_PokemonCenter_1F_OnTransition
	.byte 0

BlackthornCity_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_BLACKTHORN_CITY
	end

BlackthornCity_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

BlackthornCityPkmnCenter1::
end



BlackthornCityPkmnCenter2::
lock     
faceplayer     
msgbox BlackthornCity_PkmnCenter_Text_2, MSGBOX_DEFAULT
release     
end

BlackthornCity_PkmnCenter_Text_2:
.string "Vine hasta aquí rodeando la\n"
.string "montaña, mis TIPO TIERRA no\l"
.string "soportan el paso por la RUTA\l"
.string "HELADA.$"



BlackthornCityPkmnCenter3::
lock     
faceplayer     
msgbox BlackthornCity_PkmnCenter_Text_3, MSGBOX_DEFAULT
release     
end

BlackthornCity_PkmnCenter_Text_3:
.string "Dicen que el dios creador de todo\n"
.string "confinó a los dragones de CIUDAD\l"
.string "ENDRINO, rodeando de montañas la\l"
.string "zona, y colocando la RUTA HELADA\l"
.string "como única vía de escape, todo por\l"
.string "miedo al inmenso potencial del\l"
.string "TIPO DRAGÓN.$"



BlackthornCityPkmnCenter4::
lock     
faceplayer
msgbox BlackthornCity_PkmnCenter_Text_4, MSGBOX_DEFAULT
release     
end

BlackthornCity_PkmnCenter_Text_4:
	.string "For those who know where to search,\n"
	.string "there are many TRAINERS in JOHTO worth\l"
	.string "encountering, honing their battling\l"
	.string "skills for decades. But among them all,\l"
	.string "our GYM LEADER undoubtedly stands out.\l"
	.string "His dragons transcend all others.$"
