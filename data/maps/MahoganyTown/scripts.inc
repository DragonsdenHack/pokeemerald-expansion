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
msgbox MahoganyTown_Encuentro_Rocket_Texto_1 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_3
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_2 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_4
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_3 MSGBOX_AUTOCLOSE
msgbox MahoganyTown_Encuentro_Rocket_Texto_4 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_5
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, MahoganyTown_Encuentro_Rocket_Move_6
applymovement OBJ_EVENT_ID_PLAYER, MahoganyTown_Encuentro_Rocket_Move_6
waitmovement 0x0
msgbox MahoganyTown_Encuentro_Rocket_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_FAT_MAN
removeobject 4
playse SE_DOOR
setvar VAR_UNUSED_0x40F7, 161
release
end

MahoganyTown_Encuentro_Rocket_Texto_1:
.string "GRUNT: CHIEF ADMIN. {PLAYER}! \n"
	.string "How timely!$"

MahoganyTown_Encuentro_Rocket_Texto_2:
	.string "Cof{PAUSE 15}…{PAUSE 15} Listen. Just as GIOVANNI ordered\n"
	.string "us, PRYCE has handed over the old NINJA\l"
	.string "HIDDEN BASE in MAHOGANY for our\l"
	.string "research. We've already installed some\l"
	.string "of the equipment and adapted the base\l"
	.string "to the ROCKET style.$"

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
	.string "breach the inner sanctum of the base.$"

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
