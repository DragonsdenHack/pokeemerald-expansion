SaffronCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition::
setflag FLAG_VISITED_SAFFRON_CITY
end

SaffronCity1::
lock     
faceplayer     
msgbox SaffronCity_Text_1, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_1:
.string "Oh!\n"
.string "But haven't you gone already?$"


SaffronCity2::
lock     
faceplayer     
msgbox SaffronCity_Text_2, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_2:
.string "All set for boarding, SIR!$"


SaffronCity3::
lock     
faceplayer     
msgbox SaffronCity_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_3:
.string "Yeah!\n"
.string "You have failed, ROCKETS!\l"
.string "The city is safe again!$"


SaffronCity4::
lock     
faceplayer     
msgbox SaffronCity_Text_4, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_4:
	.string "SAFFRON belongs to TEAM ROCKET now!\n"
	.string "Everything is in order, sir!$"


SaffronCity5::
lock     
faceplayer     
msgbox SaffronCity_Text_5, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_5:
	.string "Dont worry, EXECUTIVE {PLAYER}! No\n"
	.string "one will leave this GYM to help SILPH as\l"
	.string "long I'm here!$"


SaffronCity6::
lock     
faceplayer     
msgbox SaffronCity_Text_6, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_6:
	.string "With my PIDGEOT I saw how your BOSS ran\n"
	.string "away miserably from SILPH after your\l"
	.string "failure. You are doomed!$"


SaffronCity7::
end


SaffronCity8::
lock     
faceplayer     
msgbox SaffronCity_Text_8, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_8:
	.string "You have failed, ROCKETS! I can't wait\n"
	.string "to see when LANCE gives you all the\l"
	.string "final blow!$"


SaffronCity9::
lock     
faceplayer     
msgbox SaffronCity_Text_9, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_9:
	.string "Did you really defeat BRUNO of the\n"
	.string "ELITE 4? What an honor to work for you,\l"
	.string "sir!$"


SaffronCity10::
lock     
faceplayer     
msgbox SaffronCity_Text_10, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_10:
	.string "Under your orders, EXECUTIVE\n"
	.string "{PLAYER}! Everything's fine here!$"


SaffronCity11::
lock     
faceplayer     
msgbox SaffronCity_Text_11, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_11:
	.string "I saw your BOSS run away miserably from\n"
	.string "SILPH. You are doomed!$"


SaffronCity12::
lock     
faceplayer     
msgbox SaffronCity_Text_12, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_12:
	.string "The ELITE FOUR will teach you all a\n"
	.string "lesson!$"


SaffronCity13::
lock     
faceplayer     
msgbox SaffronCity_Text_13, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_13:
	.string "My life as a criminal makes me feel\n"
	.string "so alive!$"


SaffronCity14::
lock     
faceplayer     
msgbox SaffronCity_Text_14, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_14:
	.string "Don't worry SIR, the city is under our\n"
	.string "control, you can focus on assault\l"
	.string "SILPH!$"


SaffronCity16::
lock     
faceplayer     
msgbox SaffronCity_Text_16, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_16:
	.string "We were waiting for you sir, with you as\n"
	.string "EXECUTIVE in charge we won't fail! I\l"
	.string "have direct orders from GIOVANNI to\l"
	.string "block the access to that RED acting as\l"
	.string "if I am sleeping, according to our\l"
	.string "LEADER, RED couldn't care less about\l"
	.string "what we do or don't do here, he'll only\l"
	.string "enter if he sees he physically has a\l"
	.string "clear path to the door, and he will...\l"
	.string "When we want him to! LONG LIFE TO TEAM\l"
	.string "ROCKET! HAIL EXECUTIVE {PLAYER}! GOD\l"
	.string "SAVE GIOVANNI!$"


SaffronCity17::
end



SaffronCityDocumento_100::
msgbox SaffronCityDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_100:
.string "SILPH's latest product!\n"
    .string "Release to be determined…$"



SaffronCityDocumento_101::
msgbox SaffronCityDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_101:
.string "TRAINER TIPS\p"
    .string "FULL HEAL cures all ailments like\n"
    .string "burns, paralysis, poisoning,\l"
    .string "freezing, and sleep.\p"
    .string "It costs a bit more, but it's more\n"
    .string "convenient than buying other items.$"



SaffronCityDocumento_102::
msgbox SaffronCityDocumento_Text_102, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_102:
.string "SILPH CO. OFFICE BUILDING$"



SaffronCityDocumento_103::
msgbox SaffronCityDocumento_Text_103, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_103:
.string "SAFFRON CITY\n"
    .string "Shining, Golden Land of Commerce$"



SaffronCityDocumento_104::
msgbox SaffronCityDocumento_Text_104, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_104:
.string "MR. PSYCHIC'S HOUSE$"



SaffronCityDocumento_105::
msgbox SaffronCityDocumento_Text_105, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_105:
.string "FIGHTING DOJO$"



SaffronCityDocumento_106::
msgbox SaffronCityDocumento_Text_106, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_106:
.string "SAFFRON CITY POKÉMON GYM\n"
    .string "LEADER: SABRINA\l"
    .string "The Master of PSYCHIC POKÉMON!$"



SaffronCityDocumento_107::
msgbox SaffronCityDocumento_Text_107, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_107:
.string "POKÉMON TRAINER FAN CLUB\p"
    .string "Many TRAINERS have scribbled their\n"
    .string "names on this sign.$"




SaffronCityDocumento_108::
msgbox SaffronCityDocumento_Text_108, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_108:
	.string "TIPS, APTITUDES AND REQUIREMENTS TO\n"
	.string "SURVIVE IN THE CITY: - Required minimum\l"
	.string "daily working hours: 10 hours, 5 days\l"
	.string "per week. - A 150000 POKÉ inversion for\l"
	.string "every month per habitant in I + D + i\l"
	.string "(Investigation, developing and\l"
	.string "innovation). - Be a great trainer very\l"
	.string "above the average (in the fifth\l"
	.string "quartile). - Permanent improvement\l"
	.string "attitude, self-realization, efficiency\l"
	.string "optimization and loyalty to SILPH.$"

SaffronCity_Combate_Andra_Izq_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.2
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.3
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.4
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.5
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra::
playse SE_PIN
applymovement 15, SaffronCity_Combate_Andra_Move_2
applymovement 18, SaffronCity_Combate_Andra_Move_2
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_3
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, SaffronCity_Combate_Andra_Move_4
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_5
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 18, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
removeobject 18
playse SE_SLIDING_DOOR
delay 20
applymovement 15, SaffronCity_Combate_Andra_Move_7
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_4
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
playse 559
msgbox SaffronCity_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_14 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
trainerbattle_no_intro TRAINER_ANDRA_5, SaffronCity_Combate_Andra_Texto_15
msgbox SaffronCity_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
removeobject 15
playse SE_SLIDING_DOOR
setvar VAR_UNUSED_0x40F7, 73
release
end

SaffronCity_Combate_Andra_Texto_1:
	.string "PETREL: Alright, everyone is ready, the\n"
	.string "invasion to SILPH can begin.$"

SaffronCity_Combate_Andra_Texto_2:
	.string "From what we know, the PRESIDENT is in\n"
	.string "his office on the 11F, he is protected\l"
	.string "by his personal guard, it's also\l"
	.string "impossible to access the office by\l"
	.string "elevator, we must use the teleportation\l"
	.string "tiles, overmore, we can only enter his\l"
	.string "office if we get the CARD KEY to open\l"
	.string "the door.$"

SaffronCity_Combate_Andra_Texto_3:
	.string "ANDRA: First of all, we need to find\n"
	.string "that key, does anyone have an idea of\l"
	.string "where it can be?$"

SaffronCity_Combate_Andra_Texto_4:
	.string "PETREL: An item like that, should only\n"
	.string "be accessible to important members of\l"
	.string "the company. We'll have to check all of\l"
	.string "the employees.$"

SaffronCity_Combate_Andra_Texto_5:
	.string "SILPH and LANCE's government don't get\n"
	.string "along very well, so it's very possible\l"
	.string "that the ELITE 4 won't show up as they\l"
	.string "did in the POWER PLANT, still so we need\l"
	.string "to be prepared for anything to happen.\l"
	.string "Once we find that CARD KEY, we'll inform\l"
	.string "GIOVANNI immediately. Both of you will\l"
	.string "stay on guard for GIOVANNI, allowing\l"
	.string "him to negotiate with the PRESIDENT\l"
	.string "calmly, without any interference, did\l"
	.string "you get it?$"

SaffronCity_Combate_Andra_Texto_6:
	.string "ANDRA: I can't wait any longer, let's move\n"
	.string "to action now!$"

SaffronCity_Combate_Andra_Texto_7:
	.string "PETREL: That's the attitude. Let's go,\n"
	.string "SILPH is ours.$"

SaffronCity_Combate_Andra_Texto_8:
	.string "ANDRA: One last thing {PLAYER}, I\n"
	.string "haven't thanked you yet for your help in\l"
	.string "the POWER PLANT incident, this makes it\l"
	.string "the second time you've had to come to\l"
	.string "rescue me in due to my inability to\l"
	.string "complete the mission on my own,\l"
	.string "remembering that first time on FIVE\l"
	.string "ISLAND with the CONSUL.$"

SaffronCity_Combate_Andra_Texto_9:
	.string "This region is perfect for progressing\n"
	.string "and improving as a trainer, I'm\l"
	.string "surprised by the difference between\l"
	.string "places like this and LAVENDER TOWN, but\l"
	.string "all of them, in the end, have an unique\l"
	.string "atmosphere that characterizes them.$"

SaffronCity_Combate_Andra_Texto_10:
	.string "Right now my team is in optimal\n"
	.string "condition, do you remember the ATLAS\l"
	.string "speech he told us on our first day? To\l"
	.string "be honest I've come further than I\l"
	.string "could imagine, and even I think I am\l"
	.string "still capable of improving myself a lot\l"
	.string "more.$"

SaffronCity_Combate_Andra_Texto_11:
	.string "I hope this place and all its technology\n"
	.string "are high enough to my standards, but…$"

SaffronCity_Combate_Andra_Texto_12:
	.string "Right now, I don't think there's a bigger\n"
	.string "challenge than facing you, {PLAYER},\l"
	.string "you are the real way to know if my team\l"
	.string "is strong enough, the only one I haven't\l"
	.string "defeated yet on equal terms.$"

SaffronCity_Combate_Andra_Texto_13:
	.string "Since our battle in the ROCKET BASE I've\n"
	.string "been training harder than ever.\l"
	.string "Studying about the best POKÉMON from\l"
	.string "this region, and how to improve mine…$"

SaffronCity_Combate_Andra_Texto_14:
	.string "From ROCKET EXECUTIVE to ROCKET\n"
	.string "EXECUTIVE, I want you to witness the\l"
	.string "unstoppable power of my team!$"

SaffronCity_Combate_Andra_Texto_15:
	.string "I can't believe it, what else can I do?$"

SaffronCity_Combate_Andra_Texto_16:
	.string "This time I was convinced I would\n"
	.string "defeat you, I was a fool for thinking\l"
	.string "that. You have defeated BRUNO and 2\l"
	.string "LEGENDARY POKÉMON, maybe it's too soon,\l"
	.string "but you have to know this {PLAYER},\l"
	.string "my limit is far away from what you've\l"
	.string "seen today!$"

SaffronCity_Combate_Andra_Move_1:
walk_right
walk_right
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.1:
walk_right
walk_right
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.2:
walk_right
walk_right
walk_up
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.3:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.4:
walk_left
walk_left
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.5:
walk_left
walk_left
walk_up
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_2:
emote_exclamation_mark
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_3:
face_right
step_end

SaffronCity_Combate_Andra_Move_4:
face_left
step_end

SaffronCity_Combate_Andra_Move_5:
walk_in_place_right
step_end

SaffronCity_Combate_Andra_Move_6:
face_up
step_end

SaffronCity_Combate_Andra_Move_7:
walk_right
face_up
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_8:
face_down
step_end

SaffronCity_Combate_Andra_Move_9:
walk_in_place_down
step_end

SaffronCity_Secundaria_Motorista::
compare VAR_ROUTE133_STATE, 2
goto_if_eq SaffronCity_Secundaria_Motorista_3
compare VAR_ROUTE133_STATE, 1
goto_if_eq SaffronCity_Secundaria_Motorista_2
msgbox SaffronCity_Secundaria_Motorista_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_3 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Secundaria_Motorista_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SaffronCity_Secundaria_Motorista_No
msgbox SaffronCity_Secundaria_Motorista_Texto_10 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_2
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_11 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE133_STATE, 1
release
end

SaffronCity_Secundaria_Motorista_2::
lock
faceplayer
msgbox SaffronCity_Secundaria_Motorista_Texto_8 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_3::
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_5 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox SaffronCity_Secundaria_Motorista_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_HITMONCHAN, 37, ITEM_MUSCLE_BAND
waitfanfare
msgbox SaffronCity_Secundaria_Motorista_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
fadescreen 1
delay 20
removeobject 17
fadescreen 0
release
end


SaffronCity_Secundaria_Motorista_No::
msgbox SaffronCity_Secundaria_Motorista_Texto_13 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_Move_1:
emote_exclamation_mark
step_end

SaffronCity_Secundaria_Motorista_Move_2:
walk_in_place_right
step_end

SaffronCity_Secundaria_Motorista_Move_3:
face_player
step_end

SaffronCity_Secundaria_Motorista_Texto_1:
	.string "That stupid old piece of trash… He's\n"
	.string "going to make all KANTO hate the\l"
	.string "BIKERS.$"

SaffronCity_Secundaria_Motorista_Texto_2:
.string "...\n"
	.string "...$"

SaffronCity_Secundaria_Motorista_Texto_3:
	.string "ROCKET EXECUTIVE {PLAYER}! Haven't\n"
	.string "you heard? They want to remove the\l"
	.string "UNDERGROUND PATHS as a connection\l"
	.string "point between CERULEAN and VERMILION,\l"
	.string "also between CELADON and LAVENDER!\l"
	.string "The worst thing is that they are going\l"
	.string "to blame us, the BIKERS, for causing\l"
	.string "supposed disturbances there! And all\l"
	.string "because they want the people to pass\l"
	.string "through SAFFRON CITY, right where the\l"
	.string "company they're going to create will be,\l"
	.string "at the expense of our reputation!$"

SaffronCity_Secundaria_Motorista_Texto_4:
	.string "Wow! You're amazing {PLAYER}! So for\n"
	.string "now he has abandoned his idea of\l"
	.string "removing the UNDERGROUND PATH! Wait to\l"
	.string "see when I tell the others!$"

SaffronCity_Secundaria_Motorista_Texto_5:
	.string "Now I understand your fame as an\n"
	.string "exceptional TRAINER, here you have the\l"
	.string "POKÉMON I mentioned before.$"

SaffronCity_Secundaria_Motorista_Texto_6:
	.string "YOU OBTAINED A LV.37 HITMONCHAN!!$"

SaffronCity_Secundaria_Motorista_Texto_7:
	.string "The truth is that it was a gift from my\n"
	.string "friend, the KARATE MASTER, but a BIKER\l"
	.string "like me has nothing to do with a POKÉMON\l"
	.string "like HITMONCHAN, I hope you will use it\l"
	.string "properly. Now I'm going to leave,\l"
	.string "{PLAYER}, you know we will always help\l"
	.string "the TEAM ROCKET.$"

SaffronCity_Secundaria_Motorista_Texto_8:
	.string "How is the missing going? Remember, the\n"
	.string "person you must find usually spends\l"
	.string "hours at the PEWTER CITY MUSEUM, there\l"
	.string "you should find him.$"

SaffronCity_Secundaria_Motorista_Texto_9:
	.string "Only someone with your power and\n"
	.string "influence can put the businessman\l"
	.string "behind all of this in his place. If you\l"
	.string "help us with this problem, I'll give you a\l"
	.string "strong and rare POKÉMON. Do you accept\l"
	.string "it?$"

SaffronCity_Secundaria_Motorista_Texto_10:
	.string "I knew you wouldn't let us down! That's\n"
	.string "the spirit of cooperation among\l"
	.string "comrades! Listen {PLAYER}! The man\l"
	.string "responsible for all of this is a FOSSIL\l"
	.string "enthusiast and spends hours at the\l"
	.string "PEWTER CITY MUSEUM.$"

SaffronCity_Secundaria_Motorista_Texto_11:
	.string "Actually he is the owner of a railway\n"
	.string "company that wants to connect JOHTO\l"
	.string "with KANTO, but he thinks that the\l"
	.string "region's UNDERGROUND PATHS would\l"
	.string "affect his business if they remain\l"
	.string "active. That's why he wants to get rid\l"
	.string "of them through any possible way.$"

SaffronCity_Secundaria_Motorista_Texto_12:
	.string "If someone like you shows him how we\n"
	.string "manage things here, we'll keep\l"
	.string "UNDERGROUND PATHS and our reputations\l"
	.string "intact. We trust you, {PLAYER}.$"

SaffronCity_Secundaria_Motorista_Texto_13:
	.string "I understand, comrade, you must be\n"
	.string "already very busy because of\l"
	.string "GIOVANNI's orders.$"


Silph_Barrera::
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Silph_Barrera_3
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph_Barrera_2
release
end

Silph_Barrera_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_1
waitmovement 0x0
msgbox Silph_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_2
waitmovement 0x0
release
end

Silph_Barrera_3::
release
end

Silph_Barrera_Texto_1:
	.string "(If I enter here now, I could ruin the\n"
	.string "entire mission).$"

Silph_Barrera_Move_1:
walk_in_place_down
step_end

Silph_Barrera_Move_2:
walk_slow_down
step_end
