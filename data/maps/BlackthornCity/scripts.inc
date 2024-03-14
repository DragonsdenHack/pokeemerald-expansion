BlackthornCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, BlackthornCity_OnTransition
	.byte 0

BlackthornCity_OnTransition::
setflag FLAG_VISITED_BLACKTHORN_CITY
end

BlackthornCity1::
lock     
faceplayer     
msgbox BlackthornCity_Text_1, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_1:
	.string "This GYM was funded with money from\n"
	.string "LANCE's government; our MASTER would\l"
	.string "never fight in a place like this. Now\l"
	.string "that he knows what really happened in\l"
	.string "KANTO, if you want to see him, you'll\l"
	.string "have to enter the DRAGON'S DEN.$"



BlackthornCity2::
lock     
faceplayer     
msgbox BlackthornCity_Text_2, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_2:
.string "{PLAYER}, right?\n"
.string "Our GRAND MASTER told us about you,\l"
.string "you are pretty welcome in this place.$"



BlackthornCity3::
end



BlackthornCity4::
lock     
faceplayer     
msgbox BlackthornCity_Text_4, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_4:
.string "Oh…\n"
	.string "If I were to tell you the number of\l"
	.string "sacred POKÉMON I've seen swimming\l"
	.string "here…$"




BlackthornCity7::
lock     
faceplayer     
msgbox BlackthornCity_Text_7, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_7:
	.string "Our GRAND MASTER prefers to remain\n"
	.string "unnoticed and keep JOHTO unaware of\l"
	.string "his true power, but I can tell you he is\l"
	.string "the greatest prodigy the region has\l"
	.string "seen in a long time.$"



BlackthornCity8::
lock     
faceplayer     
msgbox BlackthornCity_Text_8, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_8:
	.string "A dragon that other dragons cannot\n"
	.string "touch! I witnessed how OUTRAGE and\l"
	.string "DRAGON RUSH had no effect on that\l"
	.string "MASTER's POKÉMON!$"



BlackthornCity9::
lock     
faceplayer     
msgbox BlackthornCity_Text_9, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_9:
	.string "I came here to better understand the\n"
	.string "origin of the brute force of dragons.\l"
	.string "They and the FIGHTING TYPE have much\l"
	.string "in common. Both possess devastating\l"
	.string "physical power!$"



BlackthornCity10::
lock     
faceplayer     
msgbox BlackthornCity_Text_10, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_10:
	.string "Be careful with the southern cliffs;\n"
	.string "many can't return to BLACKTHORN once\l"
	.string "they realize!$"



BlackthornCity11::
lock     
faceplayer     
msgbox BlackthornCity_Text_11, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_11:
	.string "BLACKTHORN CITY has always been\n"
	.string "JOHTO's most inaccessible place,\l"
	.string "surrounded by mountains, with the ICE\l"
	.string "PATH as the only access route, but it\l"
	.string "rewards its visitors with the ultimate\l"
	.string "knowledge about the most powerful and\l"
	.string "sacred type for those who are prepared.$"



BlackthornCity12::
lock     
faceplayer     
msgbox BlackthornCity_Text_12, MSGBOX_DEFAULT
release     
end

BlackthornCity_Text_12:
	.string "Aren't they adorable? It's fascinating\n"
	.string "how a fragile DRATINI can grow into a\l"
	.string "DRAGONITE with greater overall power\l"
	.string "than ARTICUNO, ZAPDOS, MOLTRES, and\l"
	.string "the wandering LEGENDARIES ENTEI,\l"
	.string "RAIKOU, and SUICUNE. Don't you think\l"
	.string "so?$"



BlackthornCityDocumento_100::
msgbox BlackthornCityDocumento_Text_100, MSGBOX_SIGN   
end

BlackthornCityDocumento_Text_100:
.string "DRAGON'S DEN AHEAD$"



BlackthornCityDocumento_101::
msgbox BlackthornCityDocumento_Text_101, MSGBOX_SIGN   
end

BlackthornCityDocumento_Text_101:
.string "BLACKTHORN CITY POKÉMON GYM\n"
	.string "LEADER: SALAZAR\l"
	.string "The master of masters.$"



BlackthornCityDocumento_102::
msgbox BlackthornCityDocumento_Text_102, MSGBOX_SIGN   
end

BlackthornCityDocumento_Text_102:
.string "BLACKTHORN CITY\n"
	.string "A legendary refuge hidden\l"
	.string "behind the mountains for\l"
	.string "many decades ago.$"



BlackthornCityDocumento_103::
msgbox BlackthornCityDocumento_Text_103, MSGBOX_SIGN   
end

BlackthornCityDocumento_Text_103:
	.string "ICE PATH$"

BlackthornCity_Anciano_Paso::
lock
applymovement OBJ_EVENT_ID_PLAYER, BlackthornCity_Anciano_Paso_Move_1
applymovement 2, BlackthornCity_Anciano_Paso_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, BlackthornCity_Anciano_Paso_Move_3
waitmovement 0x0
msgbox BlackthornCity_Anciano_Paso_Texto_1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 173
release
end

BlackthornCity_Anciano_Paso_Move_1:
walk_in_place_left
step_end

BlackthornCity_Anciano_Paso_Move_2:
face_right
step_end

BlackthornCity_Anciano_Paso_Move_3:
face_left
step_end

BlackthornCity_Anciano_Paso_Texto_1:
.string "{PLAYER}, right?\n"
	.string "Our GRAND MASTER told us about you, you\l"
	.string "are pretty welcome in this place.$"

BlackthornCity_EventScript_ReceiveSwablu::
    lock
    faceplayer
	checkmoncatch SPECIES_SWABLU
	goto_if_eq VAR_RESULT, FALSE, BlackthornCity_Swablu_EventScript_TakeNosepass 
	msgbox BlackthornCity_Swablu_Text_1, MSGBOX_DEFAULT
	release
	end



BlackthornCity_Swablu_EventScript_TakeNosepass::
lock
faceplayer
    msgbox BlackthornCity_Swablu_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox BlackthornCity_Swablu_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox BlackthornCity_Swablu_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_SWABLU, 25, ITEM_NONE
	waitfanfare  
	release
	end 



BlackthornCity_Swablu_Text_TakeNosepass:
	.string "Esta ciudad es conocida como la cuna de\n"
	.string "los DOMADRAGONES, vienen de todas las\l"
	.string "regiones y muchos de ellos guardan sus\l"
	.string "respetos dejando un POKÉMON con\l"
	.string "potencial de ser un dragón.$"



BlackthornCity_Swablu_Text_TakeNosepass2:
	.string "¿Quieres contar con uno de esos\n"
	.string "POKÉMON? Toma.$"



BlackthornCity_Swablu_Text_MensajeNosepass:
.string "¡OBTUVISTE UN SWABLU AL NV.25!$"


BlackthornCity_Swablu_Text_1:
	.string "La línea evolutiva de SWABLU no cuenta\n"
	.string "con la capacidad ofensiva típica en los\l"
	.string "dragones, pero sí con otros atributos.\l"
	.string "Quizás puedas llegar a descubrirlos.$"
