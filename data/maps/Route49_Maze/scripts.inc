Route49_Maze_MapScripts::
	.byte 0

Route49_Maze_1::
lock     
faceplayer     
msgbox Route49_Maze_Text1, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text1:
.string "Tu opinión acerca de ti mismo tiene más\n"
.string "peso que la opinión que tienen los\l"
.string "demás sobre ti mismo.$"



Route49_Maze_2::
lock     
faceplayer     
msgbox Route49_Maze_Text2, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text2:
.string "El caos y el desorden verifican si tu\n"
.string "itinerario dispone de unos principios\l"
.string "sólidos y un motivo latente.$"



Route49_Maze_3::
lock     
faceplayer     
msgbox Route49_Maze_Text3, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text3:
.string "El obstáculo no es una piedra en el\n"
.string "camino, el obstáculo es el camino.$"



Route49_Maze_5::
lock     
faceplayer     
msgbox Route49_Maze_Text5, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text5:
.string "Nuestros hermanos de TORRE BELLSPROUT\n"
.string "descubrieron las bondades del vínculo\l"
.string "con un POKÉMON hace casi 1000 años.\l"
.string "Nosotros mucho antes.$"



Route49_Maze_6::
lock     
faceplayer     
msgbox Route49_Maze_Text6, MSGBOX_DEFAULT
release     
end

Route49_Maze_Text6:
.string "¿Nuestros POKÉMON? Pertenecen a la\n"
.string "antigua JOHTO, es imposible verlos\l"
.string "fuera de esta zona.$"



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
	.string "PS: 122\n"
	.string "ATAQUE: 126\l"
	.string "DEFENSA: 102\l"
	.string "ATAQUE ESPECIAL: 135\l"
	.string "DEFENSA ESPECIAL: 74\l"
	.string "VELOCIDAD: 82\l"
	.string "TOTAL: 641\p"
	.string "AGUA/DRAGÓN\n"
	.string "Se creía extinto hasta hace poco,\l"
	.string "domina todos los movimientos\l"
	.string "elementales y es capaz de ejecutarlos\l"
	.string "sin fallar. Sus stats totales ascienden\l"
	.string "a 641, todo un descubrimiento si\l"
	.string "tenemos en cuenta que ARCANINE, con\l"
	.string "555, siempre ha sido considerado el NO\l"
	.string "LEGENDARIO de mayor poder global en\l"
	.string "KANTO-JOHTO.$"



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
	.string "PS: 120\n"
	.string "ATAQUE: 55\l"
	.string "DEFENSA: 65\l"
	.string "ATAQUE ESPECIAL: 116\l"
	.string "DEFENSA ESPECIAL: 126\l"
	.string "VELOCIDAD: 60\l"
	.string "TOTAL: 542\p"
	.string "PSÍQUICO/VOLADOR\n"
	.string "Se dice que puede evolucionar de\l"
	.string "NOCTOWL en condiciones muy concretas\l"
	.string "de simbiosis y total equilibrio, tanto\l"
	.string "con su ENTRENADOR como con su\l"
	.string "entorno. Sus poderes psíquicos están\l"
	.string "a un nivel muy avanzado, es capaz de\l"
	.string "almacenar todos sus recuerdos vividos\l"
	.string "y transportarse a ellos, tal y como si\l"
	.string "estuviera allí como un mero\l"
	.string "observador.$"
