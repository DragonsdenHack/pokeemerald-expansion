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
.string "(El GIMNASIO está cerrado).$"

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
.string "¡He perdido, ya no soy digno\n"
	.string "de dirigir a mis secuaces!\p"
	.string "¡Se acabó el TEAM ROCKET!\p"
	.string "¡Dedicaré mi vida al estudio\n"
	.string "de los POKéMON!\p"
	.string "¡Espero que nos volvamos a ver!\n"
	.string "¡Adiós!$"

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
.string "¡Ni un paso más! Este GIMNASIO tiene\n"
	.string "fama de ser el más estricto con la\l"
	.string "política respecto al TEAM ROCKET. ¡Sal\l"
	.string "de aquí si no quieres...!$"

ViridianCity_Gym_Pase_Texto_2:
.string "... ...$"

ViridianCity_Gym_Pase_Texto_3:
.string "Oh... Igual que esa chica que pasó hace\n"
	.string "por aquí no mucho. Perdonad la\l"
	.string "impertinencia señor, pero esta broma\l"
	.string "de vestir de ROCKET no está gustando\l"
	.string "nada a las altas esferas de MESETA\l"
	.string "AÑIL. No conviene enfadarlos.$"


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
.string "Dicen que este LÍDER de GIMNASIO es\n"
	.string "tan fuerte como la ÉLITE 4, pero un\l"
	.string "chaval vestido de ROJO lo derrotó en un\l"
	.string "abrir y cerrar de ojos hace no mucho.\l"
	.string "Nadie sabe la identidad del LÍDER, ¿me\l"
	.string "la dirás tú cuando combatas con él?$"

ViridianCity_Gym_Guy_Texto_2:
.string "¿Derrotaste al LÍDER misterioso? ... ...\n"
	.string "Ah, entiendo, trabaja en secreto para\l"
	.string "el GOBIERNO de LANCE. Eso lo explica\l"
	.string "todo.$"


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
.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de C.VERDE: ????\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO y ANDRA$"

ViridianCity_Gym_Estatuas_Texto_2:
	.string "LÍDER del GIMNASIO POKéMON\n"
	.string "de C.VERDE: ????\p"
	.string "ENTRENADORES GANADORES:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"



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
.string "EJECUTIVO: Le estábamos esperando,\n"
	.string "EJECUTIVO {PLAYER}, veo que tiene las 7\l"
	.string "MEDALLAS, GIOVANNI no esperaba\l"
	.string "menos de usted, sin embargo...$"

ViridianCity_Gym_Explicacion_Base_Texto_2:
.string "Deberá de subir un poco más el\n"
	.string "nivel si quiere obtener la\l"
	.string "MEDALLA TIERRA, observe.$"

ViridianCity_Gym_Explicacion_Base_Texto_3:
.string "Justo debajo de la insignia de la\n"
	.string "MEDALLA TIERRA, donde el LÍDER\l"
	.string "normalmente se encuentra, hay una\l"
	.string "pequeña trampilla que lleva a\l"
	.string "nuestra BASE en CIUDAD VERDE.$"

ViridianCity_Gym_Explicacion_Base_Texto_4:
.string "Para obtener la última MEDALLA\n"
	.string "deberá de superar la prueba que\l"
	.string "le tenemos preparada, no le será\l"
	.string "fácil, créame.$"


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
    .string "Hay una trampilla que asoma\n"
	.string "sutilmente unas escaleras que\l"
	.string "conducen a una zona subterránea,\l"
	.string "¿quieres entrar en la BASE ROCKET?$"

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
   .string "Un estrecho pasadizo conduce al\n"
	.string "GIMNASIO VERDE, ¿quieres cruzarlo?$"

Viridian_Gym_Base_Warp_move1:
walk_slow_up
step_end

Viridian_Gym_Base_Warp_move2:
walk_in_place_down
step_end
