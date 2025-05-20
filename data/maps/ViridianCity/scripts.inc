ViridianCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, ViridianCity_OnTransition
	.byte 0

ViridianCity_OnTransition::
setflag FLAG_VISITED_VIRIDIAN_CITY
end

ViridianCity2::
end


ViridianCity3::
lock     
faceplayer     
msgbox ViridianCity_Text3, MSGBOX_DEFAULT
release     
end


ViridianCity_Text3:
	.string "No one knows our GYM LEADER identity,\n"
	.string "but I hope he comes back to teach you a\l"
	.string "good lesson.$"


ViridianCity4::
end


ViridianCity5::
lock     
faceplayer     
msgbox ViridianCity_Text5, MSGBOX_DEFAULT
release     
end

ViridianCity_Text5:
.string "What?\p"
.string "Teach you how to catch POKÉMON?\p"
.string "To learn to steal them faster, eh!\p"
.string "Never, ROCKET!$"


ViridianCity6::
lock     
faceplayer     
msgbox ViridianCity_Text6, MSGBOX_DEFAULT
release     
end

ViridianCity_Text6:
.string "Those POKÉ BALL at your belt…\n"
.string "For sure you stole them!$"


ViridianCity9::
lock     
faceplayer     
msgbox ViridianCity_Text9, MSGBOX_DEFAULT
release     
end

ViridianCity_Text9:
	.string "I hope our mysterious LEADER comes\n"
	.string "back soon and kicks you out of the\l"
	.string "city!$"


ViridianCityDocumento_100::
msgbox ViridianCityDocumento_Text_100, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_100:
.string "TRAINER TIPS\p"
    .string "The battle moves of POKÉMON are\n"
    .string "limited by their POWER POINTS, PP.\p"
    .string "To replenish PP, rest your tired\n"
    .string "POKÉMON at a POKÉMON CENTER.$"


ViridianCityDocumento_101::
msgbox ViridianCityDocumento_Text_101, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_101:
.string "VIRIDIAN CITY \n"
    .string "The Eternally Green Paradise$"



ViridianCityDocumento_102::
msgbox ViridianCityDocumento_Text_102, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_102:
.string "TRAINER TIPS\p"
    .string "Catch POKÉMON and expand your\n"
    .string "collection.\p"
    .string "The more you have, the easier it\n"
    .string "is to battle.$"



ViridianCityDocumento_103::
msgbox ViridianCityDocumento_Text_103, MSGBOX_SIGN   
end

ViridianCityDocumento_Text_103:
.string "VIRIDIAN CITY POKÉMON GYM$"



ViridianCity_7::
lock
faceplayer
msgbox ViridianCity_7_Text_7YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViridianCity_7No
msgbox ViridianCity_7_Text_7Yes, MSGBOX_DEFAULT
release
end



ViridianCity_7_Text_7YesNo:
	.string "Möchtest du etwas über die zwei\n"
	.string "RAUPEN-POKéMON erfahren?$"


ViridianCity_7No::
msgbox ViridianCity_7_Text_7No, MSGBOX_DEFAULT
release
end


ViridianCity_7_Text_7Yes:
	.string "RAUPY ist nicht giftig, aber HORNLIU!\n"
	.string "Achte auf seinen GIFTSTACHEL!$"



ViridianCity_7_Text_7No:
.string "O.K., alles klar!$"

ViridianCity_Escena_5::
applymovement OBJ_EVENT_ID_PLAYER, ViridianCity_Escena_5_Move_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setvar VAR_UNUSED_0x40F7, 58
warpsilent MAP_ROCKET_HIDEOUT_4F, 16, 0
waitmovement 0x0
release
end

ViridianCity_Escena_5_Move_1:
walk_in_place_down
step_end

ViridianCity_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE126_STATE, 0
goto_if_gt ViridianCity_Entrenador_Especial_3
msgbox ViridianCity_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox ViridianCity_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt ViridianCity_Entrenador_Especial_2
msgbox ViridianCity_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

ViridianCity_Entrenador_Especial_2::
msgbox ViridianCity_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox ViridianCity_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq ViridianCity_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox ViridianCity_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CALVIN_2, ViridianCity_Entrenador_Especial_Texto_8
msgbox ViridianCity_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_BLACK_SLUDGE
msgbox ViridianCity_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox ViridianCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE126_STATE, 1
release
end

ViridianCity_Entrenador_Especial_3::
msgbox ViridianCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end


ViridianCity_Entrenador_Especial_2_No::
msgbox ViridianCity_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

ViridianCity_Entrenador_Especial_Texto_1.1:
	.string "Du erhältst GIFTSCHLEIM vom TRAINER!$"

ViridianCity_Entrenador_Especial_Texto_1:
	.string "TRAUMFRESSER ist die ultimative\n"
	.string "Schadens- und Heilungsattacke … wenn\l"
	.string "das POKéMON schläft, versteht sich. Ich\l"
	.string "würde so eine starke Attacke niemals\l"
	.string "jemandem von TEAM ROCKET beibringen.\p"
	.string "Aber ich könnte eine Ausnahme machen\n"
	.string "und dir sogar noch etwas Besseres\l"
	.string "anbieten, wenn du alle ORDEN hast.$"

ViridianCity_Entrenador_Especial_Texto_2:
.string "{PAUSE 10}…{PAUSE 10}\n"
	.string "{PAUSE 10}…{PAUSE 10}$"

ViridianCity_Entrenador_Especial_Texto_3:
.string "HA!\n"
	.string "Genau was ich erwartet habe!\p"
	.string "Einer von TEAM ROCKET mit allen\n"
	.string "ARENA-ORDEN! Tut mir leid, Kleiner,\l"
	.string "aber die Abmachung ist geplatzt!$"

ViridianCity_Entrenador_Especial_Texto_4:
	.string "GIFTSCHLEIM stellt jede Runde 1/16 der\n"
	.string "KP eines POKéMON wieder her. Aber es\l"
	.string "gibt einen Haken. Er wirkt nur bei\l"
	.string "GIFT-POKéMON! Jedes andere POKéMON\l"
	.string "verliert stattdessen jede Runde 1/8\l"
	.string "seiner KP! Perfekt gegen die Diebe, die\l"
	.string "dir mitten im Kampf deine Items klauen\l"
	.string "wollen, oder?$"

ViridianCity_Entrenador_Especial_Texto_5:
	.string "Unmöglich. Das kann nicht wahr sein!\n"
	.string "Alles klar. Ich weiß selbst, wie hart es\l"
	.string "ist, alle acht ORDEN zu erringen,\l"
	.string "Kleiner. Wenn du das Item willst,\l"
	.string "musst du mich im Kampf besiegen!$"

ViridianCity_Entrenador_Especial_Texto_6:
.string "Also, stellst du dich dem Kampf?$"

ViridianCity_Entrenador_Especial_Texto_7:
	.string "Perfekt. Lass uns sehen, ob diese ORDEN\n"
	.string "echt sind oder du einfach nur ein\l"
	.string "Blender bist!$"

ViridianCity_Entrenador_Especial_Texto_8:
	.string "Beeindruckend. Jemand wie du muss das\n"
	.string "hier haben.$"

ViridianCity_Entrenador_Especial_Texto_9:
	.string "Nun, überraschenderweise ist es wahr.\p"
	.string "Nur wenige Trainer können aus diesem\n"
	.string "Item mehr herausholen als du.$"

ViridianCity_Entrenador_Especial_Texto_10:
	.string "Das habe ich mir schon gedacht: Diese\n"
	.string "ORDEN sind gefälscht oder gestohlen.\p"
	.string "Und jetzt verschwinde von hier!$"
