ViridianCity_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, ViridianCity_Gym_OnFrame
    .byte 0

ViridianCity_Gym_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 82, ViridianCity_Gym_Escena_8
	.2byte 0

ViridianCityGym1::
end



ViridianCityGym2::
end



ViridianCityGym3::
end



ViridianCityGym4::
end



ViridianCityGym5::
end



ViridianCityGym6::
end



ViridianCityGym7::
end



ViridianCityGym8::
end



ViridianCityGym9::
end



ViridianCityGym10::
end



ViridianCityGym_EventScript_Domador::
	trainerbattle_single TRAINER_MIGUEL_5, ViridianCityGym_Text_DomadorIntro, ViridianCityGym_Text_DomadorDefeated
	msgbox ViridianCityGym_Text_DomadorPostBattle, MSGBOX_AUTOCLOSE
	end



ViridianCityGym_EventScript_Domador2::
	trainerbattle_single TRAINER_MIGUEL_4, ViridianCityGym_Text_Domador2Intro, ViridianCityGym_Text_Domador2Defeated
	msgbox ViridianCityGym_Text_Domador2PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianCityGym_EventScript_Karateka::
	trainerbattle_single TRAINER_QUINCY, ViridianCityGym_Text_KaratekaIntro, ViridianCityGym_Text_KaratekaDefeated
	msgbox ViridianCityGym_Text_KaratekaPostBattle, MSGBOX_AUTOCLOSE
	end



ViridianCityGym_EventScript_Karateka2::
	trainerbattle_single TRAINER_KATELYNN, ViridianCityGym_Text_Karateka2Intro, ViridianCityGym_Text_Karateka2Defeated
	msgbox ViridianCityGym_Text_Karateka2PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianCityGym_EventScript_Karateka3::
	trainerbattle_single TRAINER_BEN, ViridianCityGym_Text_Karateka3Intro, ViridianCityGym_Text_Karateka3Defeated
	msgbox ViridianCityGym_Text_Karateka3PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianCityGym_EventScript_Guay::
	trainerbattle_single TRAINER_NICOLAS_2, ViridianCityGym_Text_GuayIntro, ViridianCityGym_Text_GuayDefeated
	msgbox ViridianCityGym_Text_GuayPostBattle, MSGBOX_AUTOCLOSE
	end



ViridianCityGym_EventScript_Guay2::
	trainerbattle_single TRAINER_JARED, ViridianCityGym_Text_Guay2Intro, ViridianCityGym_Text_Guay2Defeated
	msgbox ViridianCityGym_Text_Guay2PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianCityGym_EventScript_Guay3::
	trainerbattle_single TRAINER_HUMBERTO, ViridianCityGym_Text_Guay3Intro, ViridianCityGym_Text_Guay3Defeated
	msgbox ViridianCityGym_Text_Guay3PostBattle, MSGBOX_AUTOCLOSE
	end

Viridian_City_Frontera_Gym::
compare VAR_UNUSED_0x40F7, 82
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Viridian_Gym_Texto_Prohibido_Pasar MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Viridian_City_Frontera_Gym_Move_2
waitmovement 0x0
release
end

Viridian_Gym_Texto_Prohibido_Pasar:
.string "(The GYM is closed).$"

Viridian_City_Frontera_Gym_Move_2:
walk_slow_right
step_end

ViridianCity_Gym_Escena_8::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, ViridianCity_Gym_Escena_8_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox ViridianCity_Gym_Escena_8_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 11
fadescreen 0
delay 15
applymovement 12, ViridianCity_Gym_Escena_8_Move_1
setvar VAR_UNUSED_0x40F7, 83
delay 50
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
warpsilent MAP_ROCKET_HIDEOUT_VIRIDIAN, 24, 7
release
end

ViridianCity_Gym_Escena_8_Move_1:
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
step_end

ViridianCity_Gym_Escena_8_Move_2:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

ViridianCity_Gym_Escena_8_Texto_1:
	.string "I've lost, I'm no longer worthy to lead\n"
	.string "my minions! The TEAM ROCKET is over! I'll\l"
	.string "dedicate my life to studying POKÉMON! I\l"
	.string "hope we meet again! Goodbye!$"

ViridianCity_Gym_Pase::
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Gym_Pase_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, ViridianCity_Gym_Pase_Move_1
waitmovement 0x0
msgbox ViridianCity_Gym_Pase_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox ViridianCity_Gym_Pase_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, ViridianCity_Gym_Pase_Move_1
waitmovement 0x0
msgbox ViridianCity_Gym_Pase_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 84
release
end

ViridianCity_Gym_Pase_Move_1:
emote_exclamation_mark
step_end

ViridianCity_Gym_Pase_Move_2:
walk_in_place_up
step_end

ViridianCity_Gym_Pase_Texto_1:
	.string "Not another step! This GYM is known for\n"
	.string "being the strictest regarding the\l"
	.string "policy towards TEAM ROCKET. Get out of\l"
	.string "here if you don't want to…!{PAUSE 20}$"

ViridianCity_Gym_Pase_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

ViridianCity_Gym_Pase_Texto_3:
	.string "Oh…{PAUSE 20} just like that girl who passed\n"
	.string "through here not long ago. I apologize\l"
	.string "for the impertinence, sir, but this joke\l"
	.string "of dressing as a ROCKET is not pleasing\l"
	.string "the higher-ups in CERULEAN CAVE. It's\l"
	.string "not wise to anger them.$"


ViridianCity_Gym_Guy::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 86
goto_if_gt ViridianCity_Gym_Guy_2
msgbox ViridianCity_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

ViridianCity_Gym_Guy_2::
msgbox ViridianCity_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

ViridianCity_Gym_Guy_Texto_1:
	.string "It's said this GYM LEADER is as strong\n"
	.string "as the ELITE 4, but a kid dressed in RED\l"
	.string "defeated him in the blink of an eye not\l"
	.string "long ago. Nobody knows the LEADER's\l"
	.string "identity. Will you tell me when you\l"
	.string "battle him?$"

ViridianCity_Gym_Guy_Texto_2:
	.string "Did you defeat the mysterious LEADER?\n"
	.string "…{PAUSE 20} …{PAUSE 20} Ah, I see, he works secretly for\l"
	.string "LANCE's GOVERNMENT. That explains\l"
	.string "everything.$"


ViridianCity_Gym_Estatuas::
compare VAR_UNUSED_0x40F7, 86
goto_if_gt ViridianCity_Gym_Estatuas_2
msgbox ViridianCity_Gym_Estatuas_Texto_1 MSGBOX_SIGN
release
end

ViridianCity_Gym_Estatuas_2::
msgbox ViridianCity_Gym_Estatuas_Texto_2 MSGBOX_SIGN
release
end

ViridianCity_Gym_Estatuas_Texto_1:
 .string "VIRIDIAN POKÉMON GYM\n"
    .string "LEADER: ????\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED and ANDRA$"

ViridianCity_Gym_Estatuas_Texto_2:
 .string "VIRIDIAN POKÉMON GYM\n"
    .string "LEADER: ????\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED, ANDRA and {PLAYER}$"



ViridianCity_Gym_Explicacion_Base::
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Gym_Explicacion_Base_Move_1
waitmovement 0x0
msgbox ViridianCity_Gym_Explicacion_Base_Texto_1 MSGBOX_AUTOCLOSE
msgbox ViridianCity_Gym_Explicacion_Base_Texto_2 MSGBOX_AUTOCLOSE
applymovement 8, ViridianCity_Gym_Explicacion_Base_Move_2
waitmovement 0x0
msgbox ViridianCity_Gym_Explicacion_Base_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, ViridianCity_Gym_Explicacion_Base_Move_3
waitmovement 0x0
msgbox ViridianCity_Gym_Explicacion_Base_Texto_4 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_PLAYERS_HOUSE_DAD
fadescreen 1
delay 20
removeobject 8
fadescreen 0
setvar VAR_UNUSED_0x40F7, 85
release
end

ViridianCity_Gym_Explicacion_Base_Move_1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
step_end

ViridianCity_Gym_Explicacion_Base_Move_2:
face_up
step_end

ViridianCity_Gym_Explicacion_Base_Move_3:
walk_in_place_down
step_end

ViridianCity_Gym_Explicacion_Base_Texto_1:
	.string "RECRUIT: We've been expecting you,\n"
	.string "EXECUTIVE {PLAYER}. I see you have\l"
	.string "all 7 BADGES. Giovanni didn't expect\l"
	.string "anything less from you. However…{PAUSE 20}$"

ViridianCity_Gym_Explicacion_Base_Texto_2:
	.string "You'll need to step up your game if you\n"
	.string "want to obtain the EARTH BADGE, watch\l"
	.string "closely.$"

ViridianCity_Gym_Explicacion_Base_Texto_3:
	.string "Right below the EARTH BADGE insignia,\n"
	.string "where the LEADER usually stands,\l"
	.string "there's a small trapdoor leading to our\l"
	.string "BASE in VERMILION CITY.$"

ViridianCity_Gym_Explicacion_Base_Texto_4:
	.string "To obtain the GYM BADGE, you'll have\n"
	.string "to pass the test we have prepared for\l"
	.string "you. It won't be easy, believe me.$"


ViridianCity_Gym_Warp::
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Gym_Warp_move2
waitmovement 0x0
msgbox ViridianCity_Gym_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViridianCity_Gym_Warp_No
warp MAP_ROCKET_HIDEOUT_VIRIDIAN, 25, 25
release
end

ViridianCity_Gym_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Gym_Warp_move1
waitmovement 0x0
release
end

ViridianCity_Gym_Warp_Text_YesNo:
	.string "There's a trapdoor subtly revealing\n"
	.string "stairs leading to an underground area.\l"
	.string "Do you want to enter the ROCKET BASE?$"

ViridianCity_Gym_Warp_move1:
walk_slow_down
step_end

ViridianCity_Gym_Warp_move2:
walk_in_place_up
step_end

Viridian_Gym_Base_Warp::
compare VAR_UNUSED_0x40F7, 187
goto_if_gt Viridian_Gym_Base_Warp_2
applymovement OBJ_EVENT_ID_PLAYER, Viridian_Gym_Base_Warp_move2
waitmovement 0x0
msgbox Viridian_Gym_Base_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Viridian_Gym_Base_Warp_No
warp MAP_VIRIDIAN_CITY_GYM, 2, 2
release
end

Viridian_Gym_Base_Warp_2::
applymovement OBJ_EVENT_ID_PLAYER, Viridian_Gym_Base_Warp_move2
waitmovement 0x0
msgbox Viridian_Gym_Base_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Viridian_Gym_Base_Warp_No
warp MAP_NEO_VIRIDIAN_GYM, 5, 2
release
end

Viridian_Gym_Base_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, Viridian_Gym_Base_Warp_move1
waitmovement 0x0
release
end

Viridian_Gym_Base_Warp_Text_YesNo:
	.string "A narrow passage leads to the\n"
	.string "VERMILION GYM. Do you want to cross it?$"

Viridian_Gym_Base_Warp_move1:
walk_slow_up
step_end

Viridian_Gym_Base_Warp_move2:
walk_in_place_down
step_end
