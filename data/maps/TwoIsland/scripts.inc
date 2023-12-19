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
.string "Hay una señora que vive en una\n"
.string "casita en el cabo.\p"
.string "Es un poco desconcertante,\n"
.string "¡le tira los tejos a los POKéMON!$"

TwoIsland3::
lock     
faceplayer     
msgbox TwoIsland_Text_3, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_3:
.string "Oye, oye, ¿sabes una cosa?\p"
.string "Hace poco, vino un ENTRENADOR\n"
.string "a la ISLA.\p"
.string "Era uno de los miembros del ALTO\n"
.string "MANDO. Se llamaba BRUNO.\p"
.string "Pero se fue decepcionado cuando\n"
.string "vio que no quedaban bastones de\l"
.string "caramelo superfuertes.$"


TwoIsland4::
lock     
faceplayer     
msgbox TwoIsland_Text_4, MSGBOX_DEFAULT
release     
end

TwoIsland_Text_4:
.string "¡El experto ENTRENADOR sabe\n"
.string "comprar objetos raros!$"


TwoIsland5::
end


TwoIsland6::
end



TwoIslandDocumento_100::
msgbox TwoIslandDocumento_Text_100, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_100:
.string "¡PELIGRO!\n"
	.string "¡CORRIENTES ULTRA-RÁPIDAS!\l"
	.string "¡La pesca y el surf están\l"
	.string "prohibidos!$"



TwoIslandDocumento_101::
msgbox TwoIslandDocumento_Text_101, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_101:
.string "ISLA SECUNDA\n"
	.string "Bendita isla para dos.$"



TwoIslandDocumento_102::
msgbox TwoIslandDocumento_Text_102, MSGBOX_SIGN   
end

TwoIslandDocumento_Text_102:
.string "SALÓN DE JUEGOS DE ISLA SECUNDA$"

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
.string "(Al parecer no es muy recomendable\n"
	.string "acercarse a esas corrientes).$"


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
