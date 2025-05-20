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
	.string "-Die Türen der ARENA sind\n"
	.string "verschlossen …-$"

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
	.string "Ich habe meinen Meister gefunden!\p"
	.string "Meine Taten waren schlecht … Ich löse\n"
	.string "TEAM ROCKET auf! Von nun an widme ich\l"
	.string "mein Leben dem Studium von POKéMON!\p"
	.string "Vielleicht sehen wir uns eines Tages\n"
	.string "wieder! Leb wohl!$"

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
	.string "Keinen Schritt weiter! Diese ARENA ist\n"
	.string "bekannt dafür, dass sie die striktesten\l"
	.string "Richtlinien bezüglich TEAM ROCKET hat.\p"
	.string "Also verschwinde, wenn du nicht …!$"

ViridianCity_Gym_Pase_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

ViridianCity_Gym_Pase_Texto_3:
	.string "Oh {PAUSE 25}…{PAUSE 25} wie bei der jungen Frau, die vor\n"
	.string "Kurzem hier war. Entschuldigen Sie\l"
	.string "bitte das Missverständnis, Sir. Aber\l"
	.string "dieser Verhöhnungs-Trend sich als\l"
	.string "ROCKET zu verkleiden, kommt bei den\l"
	.string "Chefs der LIGA-LEITUNG überhaupt\l"
	.string "nicht gut an.\p"
	.string "Es ist unklug, sie zu verärgern.$"


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
	.string "Es wird gesagt, dass dieser\n"
	.string "ARENALEITER der TOP VIER ebenbürtig\l"
	.string "ist, doch ein in rot gekleideter Junge\l"
	.string "hat ihn erst kürzlich mit spielender\l"
	.string "Leichtigkeit besiegt. Niemand kennt die\l"
	.string "Identität dieses ARENALEITERs.\p"
	.string "Wirst du sie mir verraten, nachdem du\n"
	.string "gegen ihn gekämpft hast?$"

ViridianCity_Gym_Guy_Texto_2:
	.string "Also, hast du den mysteriösen\n"
	.string "ARENALEITER besiegt? {PAUSE 15}…{PAUSE 15} …{PAUSE 15} Ah, ich\l"
	.string "verstehe. Er arbeitet insgeheim für\l"
	.string "SIEGFRIEDs REGIERUNG.\p"
	.string "Jetzt ergibt alles einen Sinn!$"


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
 .string "VERTANIA POKéMON-ARENA\n"
    .string "LEITUNG: ?\p"
    .string "BISHERIGE SIEGER:\n"
    .string "BLAU, ROT & ANDRA$"

ViridianCity_Gym_Estatuas_Texto_2:
 .string "VERTANIA POKéMON-ARENA\n"
    .string "LEITUNG: ?\p"
    .string "BISHERIGE SIEGER:\n"
    .string "BLAU, ROT, ANDRA & {PLAYER}$"



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
	.string "OFFIZIER: Wir haben Sie bereits\n"
	.string "erwartet, OFFIZIER {PLAYER}. Wie ich\l"
	.string "sehe, haben Sie bereits sieben ORDEN\l"
	.string "gesammelt. GIOVANNI hat nichts\l"
	.string "geringeres von Ihnen erwartet. Aber …$"

ViridianCity_Gym_Explicacion_Base_Texto_2:
	.string "Sie müssen noch einen drauflegen, wenn\n"
	.string "Sie den ERDORDEN haben wollen.\p"
	.string "Passen Sie gut auf.$"

ViridianCity_Gym_Explicacion_Base_Texto_3:
	.string "Direkt unter dem Symbol des ERDORDENs,\n"
	.string "dort, wo normalerweise der ARENALEITER\l"
	.string "steht, befindet sich eine kleine\l"
	.string "Falltür. Sie führt zu unserer BASIS\l"
	.string "in ORANIA CITY.$"

ViridianCity_Gym_Explicacion_Base_Texto_4:
	.string "Um den finalen ORDEN zu erhalten,\n"
	.string "müssen Sie die Prüfung bestehen, die\l"
	.string "wir für sie vorbereitet haben. Es wird\l"
	.string "nicht einfach.\p"
	.string "So viel kann ich Ihnen versprechen.$"


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
	.string "Da ist eine Falltür, die den Blick auf\n"
	.string "eine Treppe freigibt, die in einen\l"
	.string "unterirdischen Bereich führt. Möchtest\l"
	.string "du die ROCKET-BASIS betreten?$"

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
	.string "Ein schmaler Gang führt direkt zur\n"
	.string "ARENA von ORANIA CITY.\p"
	.string "Möchtest du ihn passieren?$"

Viridian_Gym_Base_Warp_move1:
walk_slow_up
step_end

Viridian_Gym_Base_Warp_move2:
walk_in_place_down
step_end
