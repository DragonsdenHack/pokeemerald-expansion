SevenIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SevenIsland_OnTransition
	.byte 0

SevenIsland_OnTransition::
setflag FLAG_VISITED_SEVEN_ISLAND
end

SevenIsland1::
end


SevenIsland2::
lock     
faceplayer     
msgbox SevenIsland_Text_2, MSGBOX_DEFAULT
release     
end

SevenIsland_Text_2:
	.string "Diese Eilande werden SEVII EILAND\n"
	.string "genannt, weil es sieben sind. … das\l"
	.string "glauben zumindest die jungen Leute.\p"
	.string "Die Wahrheit ist, dass die Eilande so\n"
	.string "heißen, weil sie in sieben Tagen\l"
	.string "geschaffen wurden.$"



SevenIsland3::
lock     
faceplayer     
msgbox SevenIsland_Text_3, MSGBOX_DEFAULT
release     
end

SevenIsland_Text_3:
	.string "Die Natur dieser Insel blieb nahezu\n"
	.string "unangetastet. Daher könnte das\l"
	.string "Wandern hier schwierig sein.$"



SevenIslandDocumento_100::
msgbox SevenIslandDocumento_Text_100, MSGBOX_SIGN   
end

SevenIslandDocumento_Text_100:
.string "EILAND SIEBEN\n"
    .string "Die Abenteuerinsel der Unendlichkeit$"

SevenIsland_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE113_STATE, 0
goto_if_gt SevenIsland_Entrenador_Especial_3
msgbox SevenIsland_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
msgbox SevenIsland_Entrenador_Especial_Texto_2 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SevenIsland_Entrenador_Especial_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SevenIsland_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PANUELO, SevenIsland_Entrenador_Especial_Texto_5
msgbox SevenIsland_Entrenador_Especial_Texto_6 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHOICE_SCARF
msgbox SevenIsland_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox SevenIsland_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE113_STATE, 1
release
end

SevenIsland_Entrenador_Especial_3::
msgbox SevenIsland_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

SevenIsland_Entrenador_Especial_No::
msgbox SevenIsland_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
release
end

SevenIsland_Entrenador_Especial_Texto_1.1:
	.string "You obtained a CHOICE SCARF\n"
	.string "from the COOLTRAINER!$"

SevenIsland_Entrenador_Especial_Texto_1:
	.string "It's useless to maximize your ATTACK if\n"
	.string "a faster opposing POKÉMON arrives and\l"
	.string "weakens you before you can move. You\l"
	.string "seem to have experienced many\l"
	.string "adventures despite your young age. If\l"
	.string "you can defeat me, I'll give you\l"
	.string "something very useful.$"

SevenIsland_Entrenador_Especial_Texto_2:
	.string "Wanna fight?$"

SevenIsland_Entrenador_Especial_Texto_3:
	.string "CHOICE SCARF raises the SPEED of the\n"
	.string "POKÉMON that wears it by 50%, but it\l"
	.string "only allows the use of a single move.\l"
	.string "It's fantastic for striking first,\l"
	.string "potentially giving slower POKÉMON like\l"
	.string "MACHAMP an opportunity to reach\l"
	.string "impressive SPEED levels.$"

SevenIsland_Entrenador_Especial_Texto_4:
	.string "I expected nothing less from you. Let's\n"
	.string "go!$"

SevenIsland_Entrenador_Especial_Texto_5:
	.string "You've broken down all my defenses!$"

SevenIsland_Entrenador_Especial_Texto_6:
	.string "You have the qualities of a top\n"
	.string "TRAINER; it's strange not to have seen\l"
	.string "you in championships like the POKÉMON\l"
	.string "LEAGUE. You could be one of the best;\l"
	.string "here's something that could help you\l"
	.string "become even better.$"

SevenIsland_Entrenador_Especial_Texto_7:
	.string "It seems I misjudged you; I thought you\n"
	.string "had more guts.$"
