Route49_Maze_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Route49_Maze_OnResume
	.byte 0

Route49_Maze_OnResume:
	call Route49_Maze_SetupEscapeWarp
	end

Route49_Maze_SetupEscapeWarp::
	setescapewarp MAP_ROUTE49, 10, 55
	return

Route49_Maze_1::
lock     
faceplayer     
msgbox Route49_Maze_Text1, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text1:
	.string "Your opinion about yourself holds more\n"
	.string "significance than the opinion others\l"
	.string "have about you.$"



Route49_Maze_2::
lock     
faceplayer     
msgbox Route49_Maze_Text2, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text2:
	.string "Chaos and disorder verify if your\n"
	.string "itinerary has solid principles and a\l"
	.string "latent motive.$"



Route49_Maze_3::
lock     
faceplayer     
msgbox Route49_Maze_Text3, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text3:
	.string "The obstacle is not a stone on the\n"
	.string "path; the obstacle is the path.$"



Route49_Maze_5::
lock     
faceplayer     
msgbox Route49_Maze_Text5, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text5:
	.string "Our brethren at SPROUT TOWER\n"
	.string "discovered the benefits of bonding\l"
	.string "with a POKÉMON nearly 1000 years ago.\l"
	.string "We did so much earlier.$"



Route49_Maze_6::
lock     
faceplayer     
msgbox Route49_Maze_Text6, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text6:
	.string "Our POKÉMON? They belong to the old\n"
	.string "JOHTO. It's impossible to see them\l"
	.string "outside of this area.$"



Route49Maze_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_186, Route49Maze_Text_SabioIntro, Route49Maze_Text_SabioDefeated
	msgbox Route49Maze_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeDocumento_100::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando  
showmonpic SPECIES_AKUERIA, 10, 3  
playmoncry SPECIES_LUGIA, CRY_MODE_ENCOUNTER 
msgbox Route49MazeDocumento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeDocumento_Text_100:
.string "AKUERIA:\p"
	.string "HP: 122\n"
	.string "ATTACK: 126\l"
	.string "DEFENSE: 102\l"
	.string "SPECIAL ATTACK: 135\l"
	.string "SPECIAL DEFENSE: 74\l"
	.string "SPEED: 82\l"
	.string "TOTAL: 641\p"
	.string "TYPE: WATER/DRAGON\n"
	.string "ABILITY: NO GUARD\l"
	.string "It was thought to be extinct until\l"
	.string "recently, it commands mastery over all\l"
	.string "elemental moves and executes them\l"
	.string "flawlessly. With total stats reaching\l"
	.string "641, it's a significant discovery,\l"
	.string "especially considering that ARCANINE,\l"
	.string "at 555, has long been deemed the most\l"
	.string "potent non-legendary in KANTO-JOHTO.$"



Route49MazeDocumento_101::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando    
showmonpic SPECIES_BOOHOO, 10, 3  
playmoncry SPECIES_NOCTOWL, CRY_MODE_ENCOUNTER 
msgbox Route49MazeDocumento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeDocumento_Text_101:
.string "BOOHOO:\p"
	.string "HP: 120\n"
	.string "ATTACK: 55\l"
	.string "DEFENSE: 65\l"
	.string "SPECIAL ATTACK: 116\l"
	.string "SPECIAL DEFENSE: 126\l"
	.string "SPEED: 60\l"
	.string "TOTAL: 542\p"
	.string "TYPE: PSYCHIC/FLYING\n"
	.string "ABILITY: MAGIC GUARD\l"
	.string "Rumors suggest it can evolve from\l"
	.string "NOCTOWL under exact conditions of\l"
	.string "symbiosis and complete balance, with\l"
	.string "its TRAINER and surroundings. Its\l"
	.string "psychic abilities are highly developed;\l"
	.string "it can store all its past memories and\l"
	.string "project itself into them, as if merely\l"
	.string "an observer.$"

Route49_Maze_Noveno_Pensador::
lock
faceplayer
msgbox Route49_Maze_Noveno_Pensador_Texto_1 MSGBOX_NPC
release
end

Route49_Maze_Noveno_Pensador_Texto_1:
	.string "The column supporting DUN TOWER is\n"
	.string "extremely thick and sturdy, more so\l"
	.string "than the other towers in JOHTO. It was\l"
	.string "deliberately constructed this way with\l"
	.string "the sole purpose of preaching its\l"
	.string "message: the more refined the\l"
	.string "foundation, the higher you can ascend.$"
