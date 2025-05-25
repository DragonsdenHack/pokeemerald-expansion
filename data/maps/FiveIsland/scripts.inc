FiveIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FiveIsland_OnTransition
	.byte 0

FiveIsland_OnTransition::
setflag FLAG_VISITED_FIVE_ISLAND
end

FiveIsland1::
lock     
faceplayer     
msgbox FiveIsland_Text_1, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_1:
	.string "Als ROCKET RÜPEL solltest du wissen,\n"
	.string "dass BALDORFISH und TENTACHA zu den\l"
	.string "nützlichsten WASSER/GIFT POKéMON\l"
	.string "gehören, die es gibt. Du kannst sie\l"
	.string "in diesen Gewässern fangen.$"



FiveIsland2::
lock     
faceplayer     
msgbox FiveIsland_Text_2, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_2:
	.string "Ich mag die neue EILAND FÜNF KONSULIN\n"
	.string "nicht. Sie hat ihr neues Haus mitten im\l"
	.string "FERIENPARADIES gebaut. Früher konnten\l"
	.string "wir dort in Ruhe spielen, aber seit ihrer\l"
	.string "Ankunft ist es strengstens verboten.$"



FiveIsland3::
lock     
faceplayer     
msgbox FiveIsland_Text_3, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_3:
	.string "Man sagt, diese Insel sei eine Brücke\n"
	.string "der Einheit, zwischen Vergangenheit\l"
	.string "und Zukunft. Vielleicht wirst du\l"
	.string "eines Tages herausfinden, warum.$"


FiveIsland4::
lock     
faceplayer     
msgbox FiveIsland_Text_4, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_4:
	.string "Die SEESPRINT-FÄHRE tut schon mehr als\n"
	.string "genug im Rahmen des Vertrags, den\l"
	.string "ATLAS uns inmitten dieser politischen\l"
	.string "Krise aufgezwungen hat, indem wir\l"
	.string "bestimmte Mitglieder von TEAM ROCKET\l"
	.string "nach KANTO schleusen.\p"
	.string "Versuch bloß nichts außerhalb\n"
	.string "der festgelegten Zeiten!$"



FiveIslandDocumento_100::
msgbox FiveIslandDocumento_Text_100, MSGBOX_SIGN   
end

FiveIslandDocumento_Text_100:
    .string "FIVE ISLAND\n"
    .string "Chrono Island: Where Time Goes$"



FiveIslandDerecha::     
applymovement OBJ_EVENT_ID_PLAYER, FiveIslandDerechaMove1
waitmovement 0
msgbox FiveIsland_Text_Derecha, MSGBOX_DEFAULT
applymovement OBJ_EVENT_ID_PLAYER, FiveIslandDerechaMove2
waitmovement 0
release     
end

FiveIsland_Text_Derecha:     
	.string "-Ich kann das Lager nicht verlassen,\n"
	.string "ohne zu wissen, was ATLAS von mir will.-$"


FiveIslandDerechaMove1:
walk_in_place_slow_left
step_end

FiveIslandDerechaMove2:
walk_right
step_end

FiveIsland_RumboaKanto::
applymovement OBJ_EVENT_ID_PLAYER, FiveIsland_RumboaKanto_move1
waitmovement 0x0
msgbox FiveIsland_Text_RumboaKanto_1, MSGBOX_AUTOCLOSE
applymovement 4, FiveIsland_RumboaKanto_move2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, FiveIsland_RumboaKanto_move3
waitmovement 0x0
warp MAP_FIVE_ISLAND_PORT, 8, 3
delay 100
release
end


FiveIsland_Text_RumboaKanto_1:
	.string "-Beeil dich! Wir warten schon alle\n"
	.string "auf dich! Verschwende nicht noch\l"
	.string "mehr unserer Zeit!-$"


FiveIsland_RumboaKanto_move1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
step_end

FiveIsland_RumboaKanto_move2:
walk_left
walk_in_place_right
step_end

FiveIsland_RumboaKanto_move3:
walk_slow_down
walk_slow_down
step_end
