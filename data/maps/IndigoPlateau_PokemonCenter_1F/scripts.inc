IndigoPlateau_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_OnTransition
map_script MAP_SCRIPT_ON_TRANSITION, IndigoPlateau_PokemonCenter_1F_OnTransition
	.byte 0

IndigoPlateau_OnTransition::
setflag FLAG_VISITED_INDIGO_PLATEAU
end

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
	.string "Ich weiß nicht, wer du bist oder wo du\n"
	.string "herkommst, aber das ist auch egal,\l"
	.string "Kleiner! Die Liga hat quasi schon einen\l"
	.string "Sieger! SIEGFRIED höchstpersönlich\l"
	.string "hat verlauten lassen, dass dieser Junge\l"
	.string "aus ALABASTIA dazu bestimmt ist, der\l"
	.string "neue CHAMP zu werden.$"



IndigoPlateauPokemonCenter4::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_4, MSGBOX_DEFAULT
release   
end

IndigoPlateau_PokemonCenter_Text_4:
	.string "Wir bitten um Entschuldigung für die\n"
	.string "Unannehmlichkeiten. Bei der letzten\l"
	.string "LIGA-MEISTERSCHAFT sind technische\l"
	.string "Störungen aufgetreten.\p"
	.string "Wir benötigen Zeit, um die\n"
	.string "Meisterschaft neu zu organisieren.\p"
	.string "Wir danken Ihnen für Ihr Verständnis.$"



IndigoPlateauPokemonCenter5::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_5, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_5:
	.string "AGATHEs GEIST-POKéMON sind\n"
	.string "erschreckend hartnäckig. Ich habe\l"
	.string "meine KAMPF-POKéMON bis zum Äußersten\l"
	.string "trainiert. Ich bin selbstbewusst zu\l"
	.string "AGATHE gegangen, aber sie hat uns mit\l"
	.string "Leichtigkeit besiegt. Die alte Dame ist\l"
	.string "auch leicht zu verärgern.\p"
	.string "Es bedarf nur einer Bagatelle und die\n"
	.string "Angst einflößende Dame legt los.$"



IndigoPlateauPokemonCenter6::
lock     
faceplayer     
msgbox IndigoPlateau_PokemonCenter_Text_6, MSGBOX_DEFAULT
release     
end

IndigoPlateau_PokemonCenter_Text_6:
	.string "Vielleicht liegt eine Mitgliedschaft bei\n"
	.string "den TOP VIER in den Genen. Ich habe\l"
	.string "gehört, dass Siegfried einen Cousin\l"
	.string "hat, der irgendwo weit weg Arenaleiter\l"
	.string "ist.$"



IndigoPlateauPokemonCenterDocumento_100::
msgbox IndigoPlateauPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

IndigoPlateauPokemonCenterDocumento_Text_100:
.string "POKéMON JOURNAL:\p"
	.string "Sonderreportage: SIEGFRIED von den\n"
	.string "TOP VIER! Man sagt, dass der Großvater\l"
	.string "von Siegfried der Älteste in einem\l"
	.string "berühmten Drachenklan ist.$"


