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
    .string "As a ROCKET GRUNT, you should\n"
    .string "know that QWILFISH and TENTACOOL\l"
    .string "are two WATER/POISON type POKÉMON\l"
    .string "that are strong while also matching\l"
    .string "organization's profile, take\l"
    .string "advantage of these waters to catch\l"
    .string "them.$"



FiveIsland2::
lock     
faceplayer     
msgbox FiveIsland_Text_2, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_2:
  .string "I don't like our new CHRONO ISLAND consul.\n"
    .string "She has built her house in the middle of\l"
    .string "RECREATION AREA, we could play there\l"
    .string "quietly before but since her arrival\l"
    .string "there it is prohibited.$"



FiveIsland3::
lock     
faceplayer     
msgbox FiveIsland_Text_3, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_3:
    .string "This island is considered a union\n"
    .string "bridge, transitory between old and new,\l"
    .string "maybe one day you will discover the\l"
    .string "reason.$"


FiveIsland4::
lock     
faceplayer     
msgbox FiveIsland_Text_4, MSGBOX_DEFAULT
release     
end

FiveIsland_Text_4:
.string "The SEAGALLOP is doing enough with\n"
    .string "contract that ARCHER made us sign to\l"
    .string "ship certain ROCKETS to KANTO in this\l"
    .string "political crisis. I don't want to see\l"
    .string "you try anything weird outside of your\l"
    .string "assigned times!$"



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
    .string "(I can't leave the WAREHOUSE\n"
	.string "without talking to ARCHER).$"


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
release
end


FiveIsland_Text_RumboaKanto_1:
    .string "¡Vamos, están todos esperándote!\n"
	.string "¡No nos hagas perder más\l"
	.string "tiempo!$"


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
