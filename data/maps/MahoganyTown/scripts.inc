MahoganyTown_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, MahoganyTown_OnTransition
	.byte 0

MahoganyTown_OnTransition::
setflag FLAG_VISITED_MAHOGANY_CITY
end

MahoganyTown1::
lock     
faceplayer     
msgbox MahoganyTown_Text_1, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_1:
	.string "Our LEADER has gone for a walk around\n"
	.string "the LAKE OF RAGE; he's in excellent\l"
	.string "condition considering his age.$"



MahoganyTown2::
lock     
faceplayer     
msgbox MahoganyTown_Text_2, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_2:
	.string "PRYCE meditates beneath a frozen\n"
	.string "waterfall each day to stay strong and\l"
	.string "mentally sharp. According to legend, it\l"
	.string "was during one of these moments of\l"
	.string "peak lucidity when the great ice bird\l"
	.string "revealed itself to him.$"



MahoganyTown3::
lock     
faceplayer     
msgbox MahoganyTown_Text_3, MSGBOX_DEFAULT
release     
end

MahoganyTown_Text_3:
	.string "You'll see the exorbitant price that I'll\n"
	.string "sell the RAGE CANDIES to the tourists…\l"
	.string "Hohoho!$"



MahoganyTownDocumento_100::
msgbox MahoganyTownDocumento_Text_100, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_100:
.string "MAHOGANY TOWN\n"
	.string "Welcome to the home of the ninja.$"



MahoganyTownDocumento_101::
msgbox MahoganyTownDocumento_Text_101, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_101:
	.string "MAHOGANY TOWN POKÉMON GYM\n"
	.string "LEADER: PRYCE\l"
	.string "The Teacher of Winter's Harshness$"



MahoganyTownDocumento_102::
msgbox MahoganyTownDocumento_Text_102, MSGBOX_SIGN   
end

MahoganyTownDocumento_Text_102:
.string "If you are visiting MAHOGANY TOWN,\n"
	.string "try the RAGE CANDY!$"


MahoganyTown_Encuentro_Rocket_Abajo::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_1
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_2
waitmovement 0x0
goto MahoganyTown_Encuentro_Rocket

MahoganyTown_Encuentro_Rocket_Medio::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_1.1
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_2
waitmovement 0x0
goto MahoganyTown_Encuentro_Rocket

MahoganyTown_Encuentro_Rocket_Arriba::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_1.2
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_2
waitmovement 0x0
goto MahoganyTown_Encuentro_Rocket

MahoganyTown_Encuentro_Rocket::
delay 10
msgbox MahoganyTown_Encuentro_Rocket_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_3
waitmovement 0x0
delay 10
msgbox MahoganyTown_Encuentro_Rocket_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_4
waitmovement 0x0
delay 10
msgbox MahoganyTown_Encuentro_Rocket_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox MahoganyTown_Encuentro_Rocket_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_5
waitmovement 0x0
delay 10
msgbox MahoganyTown_Encuentro_Rocket_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_6
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_6
waitmovement 0x0
delay 10
msgbox MahoganyTown_Encuentro_Rocket_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
playse SE_DOOR
opendoor 18, 14
waitdooranim
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_6.1
waitmovement 0x0
removeobject 4
closedoor 18, 14
waitdooranim
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
clearflag FLAG_NUEVA_165
clearflag FLAG_NUEVA_136
clearflag FLAG_NUEVA_133
clearflag FLAG_NUEVA_137
clearflag FLAG_NUEVA_144
clearflag FLAG_NUEVA_147
clearflag FLAG_NUEVA_152
clearflag FLAG_NUEVA_153
clearflag FLAG_NUEVA_154
clearflag FLAG_NUEVA_155
clearflag FLAG_NUEVA_156
setvar VAR_UNUSED_0x40F7, 161
release
end

MahoganyTown_Encuentro_Rocket_Move_6.1:
walk_up
step_end

MahoganyTown_Encuentro_Rocket_Texto_1:
.string "GRUNT: CHIEF ADMIN. {PLAYER}! \n"
	.string "How timely!$"

MahoganyTown_Encuentro_Rocket_Texto_2:
	.string "Cough… Listen. Just as GIOVANNI\n"
	.string "ordered us, PRYCE has handed over the\l"
	.string "old NINJA HIDDEN BASE in MAHOGANY for\l"
	.string "our research. We've already installed\l"
	.string "some of the equipment and remodeled it\l"
	.string "after our ROCKET BASEs.$"

MahoganyTown_Encuentro_Rocket_Texto_3:
	.string "However, in PRYCE's absence, the base\n"
	.string "has been occupied by thieves, ninjas,\l"
	.string "and the worst sort of people.$"

MahoganyTown_Encuentro_Rocket_Texto_4:
	.string "We tried to force our way in, but they\n"
	.string "know how to exploit the base's\l"
	.string "structure to always catch us off guard\l"
	.string "and prevent us from advancing.$"

MahoganyTown_Encuentro_Rocket_Texto_5:
	.string "You appear to have the skills needed to\n"
	.string "handle this situation. Join me, and I'll\l"
	.string "guide you to the NINJA BASE.$"

MahoganyTown_Encuentro_Rocket_Texto_6:
	.string "It's here. We have the exterior\n"
	.string "surrounded, but we're struggling to\l"
	.string "breach the inner sanctum of the BASE.$"

MahoganyTown_Encuentro_Rocket_Move_1:
walk_in_place_right
step_end

MahoganyTown_Encuentro_Rocket_Move_1.1:
walk_down
walk_in_place_right
step_end

MahoganyTown_Encuentro_Rocket_Move_1.2:
walk_down
walk_down
walk_in_place_right
step_end

MahoganyTown_Encuentro_Rocket_Move_2:
emote_exclamation_mark
face_left
step_end

MahoganyTown_Encuentro_Rocket_Move_3:
walk_down
walk_left
walk_left
walk_left
step_end

MahoganyTown_Encuentro_Rocket_Move_4:
walk_in_place_left
step_end

MahoganyTown_Encuentro_Rocket_Move_5:
walk_left
step_end

MahoganyTown_Encuentro_Rocket_Move_6:
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Caoba_Barrera_Norte::
compare VAR_UNUSED_0x40F7, 163
goto_if_gt LavenderTown_Barrera_Mision_Kangaskhan_2
applymovement OBJ_EVENT_ID_PLAYER, Caoba_Barrera_Move_1
waitmovement 0x0
msgbox Caoba_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Caoba_Barrera_Move_2
waitmovement 0x0
release
end

Caoba_Barrera_Texto_1:
.string "(I should help TEAM ROCKET clean\n"
	.string "up the MAHOGANY BASE first.)$"

Caoba_Barrera_Move_1:
walk_in_place_down
step_end

Caoba_Barrera_Move_2:
walk_slow_down
step_end
