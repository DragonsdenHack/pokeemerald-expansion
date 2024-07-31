RocketHideoutViridian_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideoutViridian_OnFrame
    .byte 0

RocketHideoutViridian_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 83, RocketHideoutViridian_Escena_8
	.2byte 0

RocketHideoutViridian4::
end



RocketHideoutViridian5::
end



RocketHideoutViridian6::
end



RocketHideoutViridian7::
end



RocketHideoutViridian8::
end



RocketHideoutViridian9::
end



RocketHideoutViridian10::
end



RocketHideoutViridian11::
end



RocketHideoutViridian12::
end



RocketHideoutViridian13::
end



RocketHideoutViridian14::
end



RocketHideoutViridian15::
end



RocketHideoutViridian_EventScript_Rocket::
	trainerbattle_single TRAINER_ANTHONY, RocketHideoutViridian_Text_RocketIntro, RocketHideoutViridian_Text_RocketDefeated
	msgbox RocketHideoutViridian_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket2::
	trainerbattle_single TRAINER_BENJAMIN_1, RocketHideoutViridian_Text_Rocket2Intro, RocketHideoutViridian_Text_Rocket2Defeated
	msgbox RocketHideoutViridian_Text_Rocket2PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket3::
	trainerbattle_single TRAINER_BENJAMIN_2, RocketHideoutViridian_Text_Rocket3Intro, RocketHideoutViridian_Text_Rocket3Defeated
	msgbox RocketHideoutViridian_Text_Rocket3PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket4::
	trainerbattle_single TRAINER_BENJAMIN_4, RocketHideoutViridian_Text_Rocket4Intro, RocketHideoutViridian_Text_Rocket4Defeated
	msgbox RocketHideoutViridian_Text_Rocket4PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket5::
	trainerbattle_single TRAINER_BENJAMIN_3, RocketHideoutViridian_Text_Rocket5Intro, RocketHideoutViridian_Text_Rocket5Defeated
	msgbox RocketHideoutViridian_Text_Rocket5PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket6::
	trainerbattle_single TRAINER_BENJAMIN_5, RocketHideoutViridian_Text_Rocket6Intro, RocketHideoutViridian_Text_Rocket6Defeated
	msgbox RocketHideoutViridian_Text_Rocket6PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket7::
	trainerbattle_single TRAINER_ABIGAIL_4, RocketHideoutViridian_Text_Rocket7Intro, RocketHideoutViridian_Text_Rocket7Defeated
	msgbox RocketHideoutViridian_Text_Rocket7PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Rocket8::
	trainerbattle_single TRAINER_ABIGAIL_5, RocketHideoutViridian_Text_Rocket8Intro, RocketHideoutViridian_Text_Rocket8Defeated
	msgbox RocketHideoutViridian_Text_Rocket8PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico::
	trainerbattle_single TRAINER_ABIGAIL_1, RocketHideoutViridian_Text_CientificoIntro, RocketHideoutViridian_Text_CientificoDefeated
	msgbox RocketHideoutViridian_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico2::
	trainerbattle_single TRAINER_JASMINE, RocketHideoutViridian_Text_Cientifico2Intro, RocketHideoutViridian_Text_Cientifico2Defeated
	msgbox RocketHideoutViridian_Text_Cientifico2PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico3::
	trainerbattle_single TRAINER_ABIGAIL_3, RocketHideoutViridian_Text_Cientifico3Intro, RocketHideoutViridian_Text_Cientifico3Defeated
	msgbox RocketHideoutViridian_Text_Cientifico3PostBattle, MSGBOX_AUTOCLOSE
	end



RocketHideoutViridian_EventScript_Cientifico4::
	trainerbattle_single TRAINER_ABIGAIL_2, RocketHideoutViridian_Text_Cientifico4Intro, RocketHideoutViridian_Text_Cientifico4Defeated
	msgbox RocketHideoutViridian_Text_Cientifico4PostBattle, MSGBOX_AUTOCLOSE
	end

RocketHideoutViridian_Combate_Proton_Izq::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Proton_Move_1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Proton

RocketHideoutViridian_Combate_Proton_Der::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Proton_Move_1.1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Proton

RocketHideoutViridian_Combate_Proton::
applymovement 3, RocketHideoutViridian_Combate_Proton_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Proton_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Proton_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Proton_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
applymovement 3, RocketHideoutViridian_Combate_Proton_Move_3
waitmovement 0x0
delay 15
trainerbattle_no_intro TRAINER_PROTON, RocketHideoutViridian_Combate_Proton_Texto_4 
msgbox RocketHideoutViridian_Combate_Proton_Texto_5 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WANDAS_BOYFRIEND
fadescreen 1
delay 20
removeobject 3
fadescreen 0
setvar VAR_UNUSED_0x40F7, 87
release
end

RocketHideoutViridian_Combate_Proton_Texto_1:
	.string "PROTON: You're here, {PLAYER}.\n"
	.string "Considering your track record, it was\l"
	.string "expected that you wouldn't take long\l"
	.string "to defeat the GYM LEADERS and make it\l"
	.string "here, to our SECRET BASE with the best\l"
	.string "cover of them all.$"

RocketHideoutViridian_Combate_Proton_Texto_2:
	.string "As you already know, in this\n"
	.string "organization. One must perform\l"
	.string "according to the task and deserving\l"
	.string "of the missions entrusted to\l"
	.string "them. In your case, yours is the most\l"
	.string "complicated of all, and that requires\l"
	.string "extreme testing measures…$"

RocketHideoutViridian_Combate_Proton_Texto_3:
	.string "Gym Leaders are a good benchmark, but\n"
	.string "you must prove that you're the most\l"
	.string "qualified ROCKET for such an important\l"
	.string "mission. The strongest EXECUTIVES and\l"
	.string "ADMINISTRATORS have power equal to or\l"
	.string "greater than any GYM LEADER. Don't\l"
	.string "believe me? I'll prove it to you!$"

RocketHideoutViridian_Combate_Proton_Texto_4:
	.string "We didn't make a mistake\n"
	.string "with you, {PLAYER}.$"

RocketHideoutViridian_Combate_Proton_Texto_5:
	.string "Moving to our base in CELADON CITY was\n"
	.string "a smart move on your part. You've more\l"
	.string "than earned that position as ROCKET\l"
	.string "EXECUTIVE, {PLAYER}. I recommend\l"
	.string "healing your team before continuing.\l"
	.string "The remaining ADMINISTRATORS are more\l"
	.string "powerful than me. I bet sparks will fly\l"
	.string "in those battles…$"

RocketHideoutViridian_Combate_Proton_Move_1:
walk_up
walk_up
step_end

RocketHideoutViridian_Combate_Proton_Move_1.1:
walk_up
walk_left
walk_up
step_end

RocketHideoutViridian_Combate_Proton_Move_2:
face_down
step_end

RocketHideoutViridian_Combate_Proton_Move_3:
walk_slow_down
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Proton_Move_4:
face_up
step_end

RocketHideoutViridian_Combate_Petrel_Izq::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Petrel_Move_1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Petrel

RocketHideoutViridian_Combate_Petrel_Der::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Petrel_Move_1.1
waitmovement 0x0
goto RocketHideoutViridian_Combate_Petrel

RocketHideoutViridian_Combate_Petrel::
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Petrel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Combate_Petrel_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox RocketHideoutViridian_Combate_Petrel_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PETREL, RocketHideoutViridian_Combate_Petrel_Texto_4
msgbox RocketHideoutViridian_Combate_Petrel_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLYS_UNCLE
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 88
release
end

RocketHideoutViridian_Combate_Petrel_Texto_1:
	.string "PETREL: I never thought that you could\n"
	.string "reach this far, when you failed your\l"
	.string "first mission in KANTO and although it,\l"
	.string "you defeated a HIGH RANK GRUNT, I saw\l"
	.string "you had potential and that was why I\l"
	.string "ordered you that risky mission to go to\l"
	.string "BILL'S HOUSE.$"

RocketHideoutViridian_Combate_Petrel_Texto_2:
	.string "However you have overpassed all\n"
	.string "expectations, ROCKET ADMINS are\l"
	.string "required to have many skills, including\l"
	.string "having a POKÉMON team worthy of the\l"
	.string "ELITE 4, made up of strong, well-trained\l"
	.string "POKÉMON that you won't find just\l"
	.string "wandering around aimlessly like 95% of\l"
	.string "TRAINERS do.$"

RocketHideoutViridian_Combate_Petrel_Texto_3:
	.string "We also have the obligation to use all\n"
	.string "our capacities when the situation\l"
	.string "requires it, the region's and TEAM\l"
	.string "ROCKET'S future are in your hand, I will\l"
	.string "personally ensure that you go to\l"
	.string "challenge the POKÉMON LEAGUE with all\l"
	.string "the guarantees!$"

RocketHideoutViridian_Combate_Petrel_Texto_4:
	.string "Great fight {PLAYER}, you are a\n"
	.string "true ROCKET EXECUTIVE.$"

RocketHideoutViridian_Combate_Petrel_Texto_5:
	.string "HAH! Marvelous! I didn't expect less\n"
	.string "coming from the one who defeated BRUNO\l"
	.string "and saved my BIKERS colleagues! I'm happy\l"
	.string "to see you're on our side, {PLAYER}, if\l"
	.string "you happen to encounter that guy\l"
	.string "named RED, you know, the one who thinks\l"
	.string "he's in a league of his own and sees\l"
	.string "himself as invincible and untouchable,\l"
	.string "do us a favor and give him a strong dose\l"
	.string "of reality from TEAM ROCKET!$"

RocketHideoutViridian_Combate_Petrel_Move_1:
walk_up
walk_right
walk_up
step_end

RocketHideoutViridian_Combate_Petrel_Move_1.1:
walk_up
walk_up
step_end

RocketHideoutViridian_Combate_Petrel_Move_2:
face_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_3:
walk_slow_down
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_4:
walk_in_place_down
step_end

RocketHideoutViridian_Combate_Petrel_Move_5:
face_up
step_end

RocketHideoutViridian_Combate_Atlas::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_2
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Combate_Atlas_Move_3
waitmovement 0x0
special RemoveCameraObject
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_2 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Combate_Atlas_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_6
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_7
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_12
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_ENCOUNTER_CHAMPION
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Combate_Atlas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_9
applymovement OBJ_EVENT_ID_PLAYER, RocketHideoutViridian_Combate_Atlas_Move_8
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ATLAS_3, RocketHideoutViridian_Combate_Atlas_Texto_10
msgbox RocketHideoutViridian_Combate_Atlas_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_12
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_13
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideoutViridian_Combate_Atlas_Move_11
waitmovement 0x0
msgbox RocketHideoutViridian_Combate_Atlas_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Combate_Atlas_Texto_15 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_MIGUEL_4
settrainerflag TRAINER_QUINCY
settrainerflag TRAINER_KATELYNN
settrainerflag TRAINER_BEN
settrainerflag TRAINER_NICOLAS_2
settrainerflag TRAINER_JARED
settrainerflag TRAINER_HUMBERTO
settrainerflag TRAINER_ANTHONY
settrainerflag TRAINER_BENJAMIN_1
settrainerflag TRAINER_BENJAMIN_2
settrainerflag TRAINER_BENJAMIN_3
settrainerflag TRAINER_BENJAMIN_4
settrainerflag TRAINER_BENJAMIN_5
settrainerflag TRAINER_ABIGAIL_4
settrainerflag TRAINER_ABIGAIL_5
settrainerflag TRAINER_ABIGAIL_1
settrainerflag TRAINER_ABIGAIL_3
settrainerflag TRAINER_ABIGAIL_2
settrainerflag TRAINER_JASMINE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_BRENDAN
setflag FLAG_BADGE08_GET
setflag FLAG_HIDE_SS_TIDAL_CORRIDOR_SCOTT
fadescreen 1
delay 20
removeobject 1
addobject 18
fadescreen 0
setvar VAR_UNUSED_0x40F7, 89
release
end

RocketHideoutViridian_Combate_Atlas_Texto_1:
	.string "????: I was waiting for you,\n"
	.string "EXECUTIVE {PLAYER}.$"

RocketHideoutViridian_Combate_Atlas_Texto_2:
	.string "ARCHER: Come in, don't stay there, be\n"
	.string "comfortable.$"

RocketHideoutViridian_Combate_Atlas_Texto_3:
	.string "It is a curious contrast between this\n"
	.string "small space regarding the rest of the\l"
	.string "BASE, right? I wasn't in favor of\l"
	.string "building it like that, however they said\l"
	.string "it was a display of hierarchy, a\l"
	.string "reflection of the power of whoever\l"
	.string "deserved to occupy it.$"

RocketHideoutViridian_Combate_Atlas_Texto_4:
	.string "That is why, a room like this in charge\n"
	.string "of someone weak will not give them any\l"
	.string "advantage; instead, it will make them\l"
	.string "complacent and weaken them, it will\l"
	.string "lead them to believe that everything is\l"
	.string "already accomplished, that no one can\l"
	.string "touch or challenge them.$"

RocketHideoutViridian_Combate_Atlas_Texto_5:
	.string "This also applies for innocent and\n"
	.string "naives children, as RED for example, he\l"
	.string "thinks that within 10 years has ruled\l"
	.string "the world and makes fun of an entire\l"
	.string "organization just for winning a few\l"
	.string "rigged fights.$"

RocketHideoutViridian_Combate_Atlas_Texto_6:
	.string "I hope, {PLAYER}, you don't be like\n"
	.string "that TRAINER, or become like him, I'd\l"
	.string "prefer a thousand times to follow your\l"
	.string "path by choosing a weak ZUBAT as a\l"
	.string "starter, and be forced to learn how to\l"
	.string "make it strong, than to start with\l"
	.string "starters that no one else has, with the\l"
	.string "path already set by OAK and GYM\l"
	.string "LEADERS using devalued teams.$"

RocketHideoutViridian_Combate_Atlas_Texto_7:
	.string "That difficulty you were exposed to is\n"
	.string "what has made you grow, less pleasant\l"
	.string "but where the most important things\l"
	.string "happen, that's why you're here today,\l"
	.string "{PLAYER}.$"

RocketHideoutViridian_Combate_Atlas_Texto_8:
	.string "Don't expect a fair and equal treatment\n"
	.string "as RED has, or even BLUE, in the POKÉMON\l"
	.string "LEAGUE, the ELITE 4 will use all their\l"
	.string "available POKÉMON to defeat everyone\l"
	.string "who menaces the LANCE's government.$"

RocketHideoutViridian_Combate_Atlas_Texto_9:
	.string "That is the reason why me, ARCHER, BOSS\n"
	.string "ADMINISTRATOR and GIOVANNI's right\l"
	.string "hand, will be the final test before you\l"
	.string "go to your most important mission, show\l"
	.string "me all that you have learned!$"

RocketHideoutViridian_Combate_Atlas_Texto_10:
	.string "Hah, I am so proud to have trained\n"
	.string "members like you, here you have the\l"
	.string "EARTH BADGE.$"

RocketHideoutViridian_Combate_Atlas_Texto_11:
	.string "Impressive, just in a short period of\n"
	.string "time, you have reached an extraordinary\l"
	.string "skill, and the best part about it is that\l"
	.string "you havent reached your limits yet.$"

RocketHideoutViridian_Combate_Atlas_Texto_12:
	.string "Not even GIOVANNI nor me could enter\n"
	.string "the POKÉMON LEAGUE, our faces are very\l"
	.string "well known, and our image has been too\l"
	.string "damaged by the media to risk being\l"
	.string "seen, it would only result in us being\l"
	.string "arrested on sight. However, after what\l"
	.string "just happened, I can say that you\l"
	.string "represent us adequately for this\l"
	.string "mission.$"

RocketHideoutViridian_Combate_Atlas_Texto_13:
	.string "Obtaining the championship of the\n"
	.string "LEAGUE gives the CHAMP a power that not\l"
	.string "even LANCE nor his government could\l"
	.string "dispute against, that is the reason why\l"
	.string "you should expect the worse once you\l"
	.string "enter to the POKÉMON LEAGUE, they\l"
	.string "won't let a stranger obtain the title so\l"
	.string "easily…$"

RocketHideoutViridian_Combate_Atlas_Texto_14:
	.string "Imma go back to CHRONO ISLAND,\n"
	.string "{PLAYER}, maybe someday you have a\l"
	.string "chance to walk around there, I will tell\l"
	.string "GIOVANNI about your triumph here.$"

RocketHideoutViridian_Combate_Atlas_Texto_15:
.string "Play your options correctly.$"

RocketHideoutViridian_Combate_Atlas_Move_1:
walk_in_place_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_2:
emote_exclamation_mark
step_end

RocketHideoutViridian_Combate_Atlas_Move_3:
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_4:
face_down
step_end

RocketHideoutViridian_Combate_Atlas_Move_5:
walk_down
walk_down
walk_left
walk_left
walk_down
step_end

RocketHideoutViridian_Combate_Atlas_Move_6:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_right
walk_in_place_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_7:
walk_down
walk_down
walk_left
walk_in_place_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_8:
walk_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_9:
walk_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_10:
face_left
step_end

RocketHideoutViridian_Combate_Atlas_Move_11:
walk_in_place_right
step_end

RocketHideoutViridian_Combate_Atlas_Move_12:
face_up
step_end

RocketHideoutViridian_Combate_Atlas_Move_13:
face_right
step_end

RocketHideoutViridian_Escena_8::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_8_Move_5
waitmovement 0x0
delay 50
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
fadescreen 1
delay 20
addobject 16
fadescreen 0
delay 30
msgbox RocketHideoutViridian_Escena_8_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideoutViridian_Escena_8_Texto_2 MSGBOX_AUTOCLOSE
applymovement 17, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_3 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_4 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_5 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_6 MSGBOX_AUTOCLOSE
applymovement 17, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_7 MSGBOX_AUTOCLOSE
applymovement 16, RocketHideoutViridian_Escena_8_Move_1
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_8_Texto_8 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
clearflag FLAG_HIDE_PLAYERS_HOUSE_DAD
fadescreen 1
delay 20
removeobject 16
fadescreen 0
delay 40
warpsilent MAP_CINNABAR_ISLAND, 20, 5
release
end

RocketHideoutViridian_Escena_8_Move_1:
walk_in_place_down
step_end

RocketHideoutViridian_Escena_8_Move_2:
face_right
step_end

RocketHideoutViridian_Escena_8_Move_3:
walk_in_place_up
step_end

RocketHideoutViridian_Escena_8_Move_4:
face_up
step_end

RocketHideoutViridian_Escena_8_Move_5:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideoutViridian_Escena_8_Texto_1:
.string "PROTON: Is it over?$"

RocketHideoutViridian_Escena_8_Texto_2:
	.string "GIOVANNI: Indeed PROTON. Officially,\n"
	.string "for KANTO we no longer exist.$"

RocketHideoutViridian_Escena_8_Texto_3:
	.string "PROTON: You made it too easy for RED,\n"
	.string "don't you think? You hadn't even\l"
	.string "bothered to use a RHYDON, and neither a\l"
	.string "RHYPER…$"

RocketHideoutViridian_Escena_8_Texto_4:
	.string "GIOVANNI: He doesn't deserve to see\n"
	.string "even the slightest piece of physical\l"
	.string "power in this region. He had been given\l"
	.string "the path up to here, and I'll repay the\l"
	.string "favor with interest. My hypocrisy\l"
	.string "regarding RED will be even greater.$"

RocketHideoutViridian_Escena_8_Texto_5:
	.string "This region has become so poor, that no\n"
	.string "one is even surprised the last LEADER\l"
	.string "uses a simple RHYHORN without having\l"
	.string "evolved it as POKÉMON ensign. Let it be\l"
	.string "so, let the region suffocate under the\l"
	.string "weight of zero expectations, let the\l"
	.string "region tire of winning when the result\l"
	.string "is already known.$"

RocketHideoutViridian_Escena_8_Texto_6:
	.string "PROTON! I want everything ready for\n"
	.string "the real GYM at VIRIDIAN CITY to open\l"
	.string "its doors to ANDRA and {PLAYER}!$"

RocketHideoutViridian_Escena_8_Texto_7:
	.string "PROTON: Everything is prepared, sir. As\n"
	.string "for his…$"

RocketHideoutViridian_Escena_8_Texto_8:
	.string "GIOVANNI: I know, I must leave\n"
	.string "immediately. Announcing publicly my\l"
	.string "dissolution has upset him, he needs to\l"
	.string "calm down.$"



RocketHideoutViridian_Warp_Escena_9::
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setvar VAR_UNUSED_0x40F7, 85
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
warpsilent MAP_ROUTE22, 12, 5
waitmovement 0x0
release
end
