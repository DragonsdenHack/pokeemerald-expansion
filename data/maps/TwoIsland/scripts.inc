TwoIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_OnTransition
	.byte 0

TwoIsland_OnTransition::
setflag FLAG_VISITED_TWO_ISLAND
end

TwoIsland1::
end


TwoIsland2::
lock     
faceplayer     
msgbox TwoIsland_Text_2, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_2:
.string "There's an old woman who lives in\n"
    .string "a cottage out on the cape.\p"
    .string "She gives the eye to POKÉMON.\n"
    .string "It's a bit unnerving.$"

TwoIsland3::
lock     
faceplayer     
msgbox TwoIsland_Text_3, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_3:
.string "Listen, listen.\n"
    .string "Did you know?\p"
    .string "A famous TRAINER came to the\n"
    .string "ISLAND a little while back.\p"
    .string "He's one of the ELITE FOUR.\n"
    .string "His name is BRUNO.\p"
    .string "He went away disappointed when he\n"
    .string "found out that they were all sold\l"
    .string "out of Rage Candybars.$"


TwoIsland4::
lock     
faceplayer     
msgbox TwoIsland_Text_4, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_4:
	.string "Ein erfahrener TRAINER weiß, wo er hier\n"
	.string "seine seltenen Items zu kaufen hat!$"


TwoIsland5::
end


TwoIsland6::
end



TwoIslandDocumento_100::
msgbox TwoIslandDocumento_Text_100, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_100:
.string "ACHTUNG! STARKE STRÖMUNG!\n"
    .string "Angeln und Surfen verboten!$"



TwoIslandDocumento_101::
msgbox TwoIslandDocumento_Text_101, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_101:
.string "EILAND ZWEI\n"
    .string "Ein Paradies für Zwei$"



TwoIslandDocumento_102::
msgbox TwoIslandDocumento_Text_102, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_102:
.string "Entertainment & Snacks!\n"
    .string "Action pur in der SPIELHALLE$"

TwoIsland_Corriente_Arriba::
compare VAR_UNUSED_0x40F7, 108
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_1
waitmovement 0x0
msgbox TwoIsland_Corriente_Arriba_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, LavenderTown_Barrera_Sur_Move_2
waitmovement 0x0
release
end

TwoIsland_Corriente_Arriba_Texto_1:
	.string "-Apparently it is not recommended\n"
	.string "to go near those currents.-$"


TwoIsland_Corriente_Derecha::
compare VAR_UNUSED_0x40F7, 108
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Corriente_Derecha_Move_1
waitmovement 0x0
msgbox TwoIsland_Corriente_Arriba_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Corriente_Derecha_Move_2
waitmovement 0x0
release
end

TwoIsland_Corriente_Derecha_Move_1:
walk_in_place_left
step_end

TwoIsland_Corriente_Derecha_Move_2:
walk_slow_right
step_end

TwoIsland_Corriente_Izquierda::
compare VAR_UNUSED_0x40F7, 108
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Corriente_Izquierda_Move_1
waitmovement 0x0
msgbox TwoIsland_Corriente_Arriba_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, TwoIsland_Corriente_Izquierda_Move_2
waitmovement 0x0
release
end

TwoIsland_Corriente_Izquierda_Move_1:
walk_in_place_right
step_end

TwoIsland_Corriente_Izquierda_Move_2:
walk_slow_left
step_end


TwoIsland_EventScript_Biker::
	trainerbattle_single TRAINER_TRAINER_157, TwoIsland_Text_BikerIntro, TwoIsland_Text_BikerDefeated
	msgbox TwoIsland_Text_BikerPostBattle, MSGBOX_AUTOCLOSE
	end

TwoIsland_EventScript_Biker2::
	trainerbattle_single TRAINER_TRAINER_158, TwoIsland_Text_Biker2Intro, TwoIsland_Text_Biker2Defeated
	msgbox TwoIsland_Text_Biker2PostBattle, MSGBOX_AUTOCLOSE
	end
