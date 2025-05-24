FourIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_PokemonCenter_1F_OnTransition
	.byte 0

FourIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FOUR_ISLAND
	end

FourIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

FourIslandPokemonCenter1::
end



FourIslandPokemonCenter2::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_2:
	.string "Dort gibt es eine seltene Art\n"
	.string "EIS-POKéMON in der Höhle. Viele\l"
	.string "Besucher kommen nur, um dieses\l"
	.string "POKéMON zu sehen.$"



FourIslandPokemonCenter3::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_3:
	.string "Was ist los? Die letzte Ausgabe vom\n"
	.string "POKéMON JOURNAL ist noch nicht auf\l"
	.string "dieser Insel angekommen?$"



FourIslandPokemonCenter4::
lock     
faceplayer     
msgbox FourIsland_PokemonCenter_Text_4, MSGBOX_DEFAULT
release     
end

FourIsland_PokemonCenter_Text_4:
	.string "Oh! Ein POKéMON-EI? … ich habe keine\n"
	.string "Ahnung! … oh, Moment, in der PENSION\l"
	.string "habe ich etwas darüber gehört.\p"
	.string "Sie sagten, sie haben früher schon\n"
	.string "EIER auf ihrem Grundstück gefunden!$"



FourIslandPokemonCenterDocumento_100::
msgbox FourIslandPokemonCenterDocumento_Text_100, MSGBOX_SIGN   
end

FourIslandPokemonCenterDocumento_Text_100:
	.string "Dies ist ein Jahre altes POKéMON\n"
	.string "JOURNAL…\p"
	.string "WETTKAMPF-Sonderbericht! Der\n"
	.string "Frühlingsmeister im POKéMON-WETTKAMPF\l"
	.string "ist SARAH EICH aus ALABASTIA!$"


