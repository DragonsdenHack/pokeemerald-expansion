LagoFuria5_MapScripts::
	.byte 0

EventoLagoFuria5_Combate_Final::
lock
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LagoFuria_S3_Combates_Cientificos_Move_15
waitmovement 0x0
special RemoveCameraObject
delay 15
applymovement 3, EventoLagoFuria5_Combate_Final_Move_1
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox EventoLagoFuria5_Combate_Final_Texto_2 MSGBOX_AUTOCLOSE
msgbox EventoLagoFuria5_Combate_Final_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_2
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_3
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, LagoFuria_S3_Combates_Cientificos_Move_16
waitmovement 0x0
special RemoveCameraObject
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_5
applymovement 2, EventoLagoFuria5_Combate_Final_Move_7
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_6
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_7
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_13
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_13
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_EJECUTIVO_DEVON_1, EventoLagoFuria5_Combate_Final_Texto_10
msgbox EventoLagoFuria5_Combate_Final_Texto_11 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, EventoLagoFuria5_Combate_Final_Move_2
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_12 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_9
applymovement 2, EventoLagoFuria5_Combate_Final_Move_9
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_9
waitmovement 0x0
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
delay 20
playse SE_M_WATERFALL
clearflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
addobject 4
delay 20
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 4, EventoLagoFuria5_Combate_Final_Move_10
waitmovement 0x0
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
msgbox EventoLagoFuria5_Combate_Final_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_136, EventoLagoFuria5_Combate_Final_Texto_14
delay 10
playmoncry SPECIES_DRUDDIGON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_DIVE
setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
removeobject 4
msgbox EventoLagoFuria5_Combate_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox EventoLagoFuria5_Combate_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_7
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_3
msgbox EventoLagoFuria5_Combate_Final_Texto_17 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_11
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_18 MSGBOX_AUTOCLOSE
msgbox EventoLagoFuria5_Combate_Final_Texto_19 MSGBOX_AUTOCLOSE
applymovement 2, EventoLagoFuria5_Combate_Final_Move_4
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_20 MSGBOX_AUTOCLOSE
msgbox EventoLagoFuria5_Combate_Final_Texto_21 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 2
fadescreen 0
delay 10
applymovement 3, EventoLagoFuria5_Combate_Final_Move_12
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_22 MSGBOX_AUTOCLOSE
applymovement 3, EventoLagoFuria5_Combate_Final_Move_11
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_23 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, EventoLagoFuria5_Combate_Final_Move_9
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_11
waitmovement 0x0
delay 20
msgbox EventoLagoFuria5_Combate_Final_Texto_24 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, EventoLagoFuria5_Combate_Final_Move_1
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, EventoLagoFuria5_Combate_Final_Move_7
applymovement OBJ_EVENT_ID_PLAYER, EventoLagoFuria5_Combate_Final_Move_3
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_26 MSGBOX_AUTOCLOSE
delay 20
msgbox EventoLagoFuria5_Combate_Final_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, EventoLagoFuria5_Combate_Final_Move_13
waitmovement 0x0
msgbox EventoLagoFuria5_Combate_Final_Texto_28 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox EventoLagoFuria5_Combate_Final_Texto_29 MSGBOX_DEFAULT
giveegg SPECIES_KURUSU
waitfanfare
setvar VAR_MAUVILLE_CITY_STATE, 8
addvar VAR_UNUSED_0x40F7, 1
clearflag FLAG_HIDE_FALLORBOR_POKEMON_CENTER_LANETTE
msgbox EventoLagoFuria5_Combate_Final_Texto_30 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 183
goto_if_eq Misiones_DLC_Fin_Llamada_Giovanni_Lago
msgbox EventoLagoFuria5_Combate_Final_Texto_31 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventoLagoFuria5_Combate_Final_No
warpsilent MAP_LAKEOF_RAGE, 61, 51
release
end

EventoLagoFuria5_Combate_Final_No::
setflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
fadescreen 1
delay 20
removeobject 3
fadescreen 0
release
end

LagoFuria_S3_Combates_Cientificos_Move_16:
walk_up
walk_up
walk_up
step_end

LagoFuria_S3_Combates_Cientificos_Move_15:
walk_down
walk_down
walk_down
step_end

EventoLagoFuria5_Combate_Final_Move_13:
walk_in_place_right
step_end

EventoLagoFuria5_Combate_Final_Move_12:
walk_down
walk_right
step_end

EventoLagoFuria5_Combate_Final_Move_11:
face_down
step_end

EventoLagoFuria5_Combate_Final_Move_10:
walk_slow_up
walk_slow_up
step_end

EventoLagoFuria5_Combate_Final_Move_9:
emote_exclamation_mark
face_down
step_end

EventoLagoFuria5_Combate_Final_Move_8:
walk_in_place_up
step_end

EventoLagoFuria5_Combate_Final_Move_7:
face_right
step_end

EventoLagoFuria5_Combate_Final_Move_6:
walk_down
walk_down
walk_down
walk_in_place_left
step_end

EventoLagoFuria5_Combate_Final_Move_5:
face_right
emote_exclamation_mark
step_end

EventoLagoFuria5_Combate_Final_Move_4:
face_up
step_end

EventoLagoFuria5_Combate_Final_Move_3:
face_left
step_end

EventoLagoFuria5_Combate_Final_Move_2:
emote_exclamation_mark
step_end

EventoLagoFuria5_Combate_Final_Move_1:
walk_in_place_down
step_end

EventoLagoFuria5_Combate_Final_Texto_1:
.string "FISHERMAN: I told you, here is nothing.$"

EventoLagoFuria5_Combate_Final_Texto_2:
	.string "????: No, it must be here. This is the\n"
	.string "end of the underground cavern. The\l"
	.string "small water patch must connect to the\l"
	.string "rest of the LAKE through a narrow\l"
	.string "tunnel.$"

EventoLagoFuria5_Combate_Final_Texto_3:
	.string "Once it appears, my POKÉMON will assert\n"
	.string "dominance over it, and we'll take it away\l"
	.string "to study it in depth.$"

EventoLagoFuria5_Combate_Final_Texto_4:
	.string "FISHERMAN: You can't do that with a\n"
	.string "POKÉMON as it!$"

EventoLagoFuria5_Combate_Final_Texto_5:
	.string "????: So you admit it exists. I should\n"
	.string "leave you here and let you return alone.\l"
	.string "I'm sure with your mediocre POKÉMON,\l"
	.string "you wouldn't be able to…$"

EventoLagoFuria5_Combate_Final_Texto_6:
	.string "Talking about mediocrity, you don't look\n"
	.string "exactly like one.$"

EventoLagoFuria5_Combate_Final_Texto_7:
	.string "I've heard of those legendary TRAINERS\n"
	.string "in JOHTO, who call themselves MASTERS.\l"
	.string "You're too young to be one of them, and\l"
	.string "yet here you are.$"

EventoLagoFuria5_Combate_Final_Texto_8:
	.string "But you don't have the tools to face my\n"
	.string "POKÉMON.$"

EventoLagoFuria5_Combate_Final_Texto_9:
	.string "You'll need more than just wandering\n"
	.string "through the towns and routes of this\l"
	.string "primitive region to defeat one of the\l"
	.string "EXECUTIVES of the all-mighty DEVON!$"

EventoLagoFuria5_Combate_Final_Texto_10:
	.string "Who are you? No trainer on any route in\n"
	.string "this region could defeat me!$"

EventoLagoFuria5_Combate_Final_Texto_11:
	.string "Those POKÉMON…They've experienced\n"
	.string "more than just aimless wandering\l"
	.string "through routes and towns; they're… a\l"
	.string "fusion of our technology, yet also of\l"
	.string "the bond with POKÉMON that defines\l"
	.string "this region.$"

EventoLagoFuria5_Combate_Final_Texto_12:
	.string "You… must be part of some kind of\n"
	.string "organizat…!$"

EventoLagoFuria5_Combate_Final_Texto_13:
	.string "The wild POKÉMON wants to fight with\n"
	.string "you!$"

EventoLagoFuria5_Combate_Final_Texto_14:
.string "{PAUSE 15}…{PAUSE 15}$"

EventoLagoFuria5_Combate_Final_Texto_15:
.string "The wild POKÉMON disappeared!$"

EventoLagoFuria5_Combate_Final_Texto_16:
	.string "FISHERMAN: Th…The legends were true.$"

EventoLagoFuria5_Combate_Final_Texto_17:
	.string "????: I must thank you, TRAINER. You've\n"
	.string "done the work for us. Thanks to your\l"
	.string "battle with the beast of the LAKE,\l"
	.string "we've been able to gather its\l"
	.string "fundamental data.$"

EventoLagoFuria5_Combate_Final_Texto_18:
	.string "So, a BASE SPEED of 82… It must have\n"
	.string "evolved over millions of years, becoming\l"
	.string "a predator to GYARADOS. Its solid\l"
	.string "DEFENSE and total BASE STATS just one\l"
	.string "point higher than MEGA GYARADOS\l"
	.string "reinforce this fact…$"

EventoLagoFuria5_Combate_Final_Texto_19:
	.string "Hmm… It's a POKÉMON halfway between a\n"
	.string "MINOR and a MAJOR LEGENDARY, at least\l"
	.string "in terms of power. Its plentiful HP\l"
	.string "could imply some distant relation to\l"
	.string "LAPRAS as well…$"

EventoLagoFuria5_Combate_Final_Texto_20:
	.string "Expectations have been met. This is\n"
	.string "satisfactory. It's unfortunate that\l"
	.string "you've scared the beast. Neither of us\l"
	.string "will ultimately possess it, but at least\l"
	.string "we have the data we sought.$"

EventoLagoFuria5_Combate_Final_Texto_21:
	.string "Have a good day, gentlemen. I hope for\n"
	.string "your sake that we don't meet again. If\l"
	.string "we do, your fate will be completely\l"
	.string "different from what happened here\l"
	.string "today.$"

EventoLagoFuria5_Combate_Final_Texto_22:
	.string "FISHERMAN: Thank you for saving me.\n"
	.string "{PLAYER}? I owe you a huge favor. Who\l"
	.string "knows what those guys would have done\l"
	.string "to me once they had what they wanted.$"

EventoLagoFuria5_Combate_Final_Texto_23:
	.string "Although he was right about what he\n"
	.string "said, that POKÉMON seems tailor-made\l"
	.string "to defeat GYARADOS; its strength and\l"
	.string "speed are greater. There must be very\l"
	.string "few specimens left; otherwise, there\l"
	.string "wouldn't be any GYARADOS left in the\l"
	.string "LAKE. I wonder if that is the only\l"
	.string "specimen alive that remai…$"

EventoLagoFuria5_Combate_Final_Texto_24:
.string "Wait!$"

EventoLagoFuria5_Combate_Final_Texto_25:
	.string "Seems like the POKÉMON left an EGG!$"

EventoLagoFuria5_Combate_Final_Texto_26:
	.string "So, is it not a LEGENDARY? Does it have\n"
	.string "an evolutionary line as the rest of the\l"
	.string "normal POKÉMON?$"

EventoLagoFuria5_Combate_Final_Texto_27:
	.string "I don't think those guys will be pleased\n"
	.string "about having overlooked this\l"
	.string "information, don't you think so?$"

EventoLagoFuria5_Combate_Final_Texto_28:
	.string "If anyone should have this EGG, it's\n"
	.string "you. You've shown that you care for\l"
	.string "your POKÉMON as wisely as the most\l"
	.string "knowledgeable of our masters in JOHTO.$"

EventoLagoFuria5_Combate_Final_Texto_29:
.string "YOU OBTAINED A MYSTERIOUS EGG!$"

EventoLagoFuria5_Combate_Final_Texto_30:
	.string "I'll be eternally thankful to you. If\n"
	.string "you'd like to come to my house near the\l"
	.string "LAKE, I'd be delighted to have a\l"
	.string "conversation with you.$"

EventoLagoFuria5_Combate_Final_Texto_31:
	.string "Do you want to return to the exterior\n"
	.string "with me?$"

Misiones_DLC_Fin_Llamada_Giovanni_Lago::
setflag FLAG_HIDE_RUSTURF_TUNNEL_BRINEY
fadescreen 1
delay 20
removeobject 3
fadescreen 0
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, Misiones_DLC_Fin_Llamada_Giovanni_Eusine_Move_1
waitmovement 0x0
msgbox Misiones_DLC_Fin_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 20
msgbox IcePath_Llamada_Giovanni_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_5F, 69, 4
release
end
