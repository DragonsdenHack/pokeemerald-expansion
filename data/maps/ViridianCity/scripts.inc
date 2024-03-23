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
.string "What?\n"
.string "Teach you how to catch POKÉMON?\l"
.string "To learn to steal them faster, eh!\l"
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
.string "You want to know about the two\n"
    .string "kinds of caterpillar POKÉMON?$"


ViridianCity_7No::
msgbox ViridianCity_7_Text_7No, MSGBOX_DEFAULT
release
end


ViridianCity_7_Text_7Yes:
.string "CATERPIE has no poison,\n"
    .string "but WEEDLE does.\p"
    .string "Watch that your POKÉMON aren't\n"
    .string "stabbed by WEEDLE's POISON STING.$"



ViridianCity_7_Text_7No:
.string "Oh, okay then!$"

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
	.string "You obtained BLACK SLUDGE from\n"
	.string "TRAINER!$"

ViridianCity_Entrenador_Especial_Texto_1:
	.string "DREAM EATER is the ultimate damaging\n"
	.string "and recuperation move, if the opponent\l"
	.string "is asleep, that is, I wouldn't teach a\l"
	.string "move with that potential to a ROCKET.\l"
	.string "However, I could make an exception and\l"
	.string "offer you something even better if you\l"
	.string "collect all the BADGES.$"

ViridianCity_Entrenador_Especial_Texto_2:
.string "{PAUSE 10}…{PAUSE 10}\n"
	.string "{PAUSE 10}…{PAUSE 10}$"

ViridianCity_Entrenador_Especial_Texto_3:
.string "HAH!\n"
	.string "What I expected!\l"
	.string "A ROCKET with all the GYM BADGES!\l"
	.string "I'm sorry kid, there is no deal!$"

ViridianCity_Entrenador_Especial_Texto_4:
	.string "BLACK SLUDGE will restore 1/16 of the\n"
	.string "POKÉMON HEALTH every turn, but be\l"
	.string "carefull! Only will work with the POISON\l"
	.string "type! If any other POKÉMON equips it\l"
	.string "will remove 1/8 of its health! Isn't it\l"
	.string "ideal for those thieves that try to\l"
	.string "take your objects in half battle?$"

ViridianCity_Entrenador_Especial_Texto_5:
	.string "Impossible! It must be a joke! All right,\n"
	.string "I know too what it is to have won the 8\l"
	.string "BADGES, kid, if you want me to give you\l"
	.string "the object you must defeat me in a\l"
	.string "fight.$"

ViridianCity_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

ViridianCity_Entrenador_Especial_Texto_7:
	.string "Perfect. Let's check if those BADGES\n"
	.string "are the real ones or you are just a\l"
	.string "faker!$"

ViridianCity_Entrenador_Especial_Texto_8:
	.string "Impressive, someone like you must have\n"
	.string "what I will give you.$"

ViridianCity_Entrenador_Especial_Texto_9:
	.string "Well, surprisingly it's true. Just a few\n"
	.string "will take better advantage of this item\l"
	.string "than you.$"

ViridianCity_Entrenador_Especial_Texto_10:
	.string "I already expected this: those BADGES\n"
	.string "are fake or stolen. Get out of here!$"
