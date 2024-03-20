NeoLavandaCementerioS2_MapScripts::
	.byte 0

NeoLavandaCementerioS2_2::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_2, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_2:
	.string "Religion isn't so much about telling man\n"
	.string "that there is a God as it is about\l"
	.string "preventing man from thinking he is God.$"





NeoLavandaCementerioS2_3::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_3, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_3:
	.string "Men destroy each other in war; and they\n"
	.string "destroy themselves in times of peace.$"





NeoLavandaCementerioS2_4::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_4, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_4:
	.string "Rage is like acid, corroding the\n"
	.string "container more than its target.$"




NeoLavandaCementerioS2_14::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_14, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_14:
	.string "I never thought I would live to see the\n"
	.string "POKÉMON TOWER fall. Soon, I will join all\l"
	.string "these souls that once walked, just like\l"
	.string "us. I only hope to enjoy the time I have\l"
	.string "left.$"





NeoLavandaCementerioS2_15::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_15, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_15:
	.string "Do you think this place will manage to\n"
	.string "preserve the original essence of\l"
	.string "POKÉMON TOWER?$"






NeoLavandaCementerioS2_18::
lock     
faceplayer     
msgbox NeoLavandaCementerioS2_Text_18, MSGBOX_DEFAULT
release     
end

NeoLavandaCementerioS2_Text_18:
	.string "We should not expect happiness; it's\n"
	.string "not something we deserve. When life\l"
	.string "goes well, it's an unexpected gift that\l"
	.string "cannot last forever.$"



NeoLavandaCementerioS2_EventScript_Exorcista::
	trainerbattle_single TRAINER_TRAINER_37, NeoLavandaCementerioS2_Text_ExorcistaIntro, NeoLavandaCementerioS2_Text_ExorcistaDefeated
	msgbox NeoLavandaCementerioS2_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS2_EventScript_Exorcista2::
	trainerbattle_single TRAINER_TRAINER_36, NeoLavandaCementerioS2_Text_Exorcista2Intro, NeoLavandaCementerioS2_Text_Exorcista2Defeated
	msgbox NeoLavandaCementerioS2_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



NeoLavandaCementerioS2_EventScript_Exorcista3::
	trainerbattle_single TRAINER_TRAINER_38, NeoLavandaCementerioS2_Text_Exorcista3Intro, NeoLavandaCementerioS2_Text_Exorcista3Defeated
	msgbox NeoLavandaCementerioS2_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end


NeoLavandaCementerioS2_Combate_Azul::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Combate_Azul_Move_1
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Combate_Azul_Move_2
waitmovement 0x0
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_4
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_3
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_6
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_7
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_39, NeoLavandaCementerioS2_Combate_Azul_Texto_8
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_8
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_7
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_12 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_6
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_13 MSGBOX_AUTOCLOSE
applymovement 19, NeoLavandaCementerioS2_Combate_Azul_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Combate_Azul_Texto_14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_TRUCK
fadescreen 1
delay 20
removeobject 19
fadescreen 0
setvar VAR_UNUSED_0x40F7, 209
release
end

NeoLavandaCementerioS2_Combate_Azul_Move_8:
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_7:
walk_in_place_right
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_6:
walk_slow_right
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_5:
face_up
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_4:
emote_exclamation_mark
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_3:
face_right
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
face_left
step_end

NeoLavandaCementerioS2_Combate_Azul_Move_1:
walk_in_place_down
step_end

NeoLavandaCementerioS2_Combate_Azul_Texto_1:
.string "????: As if this were POKÉMON TOWER…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_2:
	.string "BLUE: {PLAYER}, your presence in\n"
	.string "LAVENDER TOWN doesn't surprise me, but\l"
	.string "your presence in this particular\l"
	.string "location does.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_3:
	.string "The focus is now on the new RADIO\n"
	.string "TOWER, right? What does this place have\l"
	.string "to offer for someone like you? Don't\l"
	.string "you have meetings and events to attend\l"
	.string "there?$"

NeoLavandaCementerioS2_Combate_Azul_Texto_4:
.string "…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_5:
	.string "I understand. One year ago, I would\n"
	.string "have joined you without hesitation.\l"
	.string "Nowadays, my priorities are different,\l"
	.string "though…$"

NeoLavandaCementerioS2_Combate_Azul_Texto_6:
	.string "It's been a while since we last met like\n"
	.string "this, face to face. Your travels\l"
	.string "through JOHTO must have greatly\l"
	.string "strengthened you.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_7:
	.string "I'm intrigued… to see how far you've\n"
	.string "come. Let me see your team!$"

NeoLavandaCementerioS2_Combate_Azul_Texto_8:
.string "Ha! Just as I expected!$"

NeoLavandaCementerioS2_Combate_Azul_Texto_9:
	.string "I can hardly recognize that energetic\n"
	.string "and lively GOLBAT. So elusive and full of\l"
	.string "potential even back then when we both\l"
	.string "started our journey. No one would\l"
	.string "believe that this imposing CROBAT-&\l"
	.string "was once that ZUBAT.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_10:
	.string "I feel fortunate to be part of the same\n"
	.string "generation as you, {PLAYER}. ANDRA\l"
	.string "and you are exceptional TRAINERS,\l"
	.string "insatiable in your pursuits.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_11:
	.string "My ambition to become the best ceased\n"
	.string "the instant you proved RED wasn't the\l"
	.string "only one. You're aware of it.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_12:
	.string "Like my grandfather, I'm more drawn to\n"
	.string "studying POKÉMON than to combat\l"
	.string "itself. If I can help you control the\l"
	.string "VIRIDIAN CITY GYM in the meantime, it\l"
	.string "will be best for everyone.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_13:
	.string "Watch your step, {PLAYER}. There's a\n"
	.string "feeling within me that suggests merely\l"
	.string "having a passion for POKÉMON battles\l"
	.string "isn't enough to stand out.$"

NeoLavandaCementerioS2_Combate_Azul_Texto_14:
	.string "In my own way, I will continue to live\n"
	.string "moments like this, just like you, albeit\l"
	.string "perhaps with less intensity.$"

NeoLavandaCementerioS2_Evento_Fuji::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Fuji_Move_1
waitmovement 0x0
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_2 MSGBOX_AUTOCLOSE
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_3
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_3 MSGBOX_AUTOCLOSE
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_4
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Fuji_Move_4
applymovement 5, NeoLavandaCementerioS2_Evento_Fuji_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_4 MSGBOX_AUTOCLOSE
applymovement 5, NeoLavandaCementerioS2_Evento_Fuji_Move_6
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
waitfanfare
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Fuji_Move_7
applymovement 20, NeoLavandaCementerioS2_Evento_Fuji_Move_2
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 210
release
end

NeoLavandaCementerioS2_Evento_Fuji_Move_7:
face_left
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_6:
walk_in_place_up
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_5:
walk_right
face_up
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_4:
face_down
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_3:
face_up
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_1:
walk_down
walk_down
walk_down
face_left
step_end

NeoLavandaCementerioS2_Evento_Fuji_Move_2:
face_right
step_end

NeoLavandaCementerioS2_Evento_Fuji_Texto_1:
	.string "FUJI: Ah, {PLAYER}. What do you\n"
	.string "think? Do you believe this place is a\l"
	.string "worthy replacement for POKÉMON TOWER?\l"
	.string "It hasn't been easy to build.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_2:
	.string "As you may have noticed, the place is\n"
	.string "somewhat unstable. It doesn't seem to\l"
	.string "be the spirit of MAROWAK, you've already\l"
	.string "scared it away. It must be something\l"
	.string "older… perhaps linked to the very\l"
	.string "creation of POKÉMON TOWER… it's very\l"
	.string "likely that it saw its destruction as a\l"
	.string "disturbance to its rest.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_3:
	.string "Right now, the northern area is\n"
	.string "uncontrollable. We've closed it off as a\l"
	.string "precaution, but I'm afraid there's no\l"
	.string "other option but to enter there by\l"
	.string "force and defeat the spirit in a\l"
	.string "POKÉMON battle.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_4:
	.string "SECRETARY: Here's the KEY. Wishing you\n"
	.string "the best of luck.$"

NeoLavandaCementerioS2_Evento_Fuji_Texto_5:
	.string "FUJI: I will be near you, {PLAYER}.$"


NeoLavandaCementerioS2_Dialogo_Fuji::
lock
faceplayer
msgbox NeoLavandaCementerioS2_Evento_Fuji_Texto_5 MSGBOX_AUTOCLOSE
release
end


NeoLavandaCementerioS2_Evento_Ghost::
lock
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_6
waitmovement 0x0
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_2
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
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
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_3
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_4
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
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_145, NeoLavandaCementerioS2_Evento_Ghost_Texto_2
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
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
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_3 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
addobject 22
applymovement 22, NeoLavandaCementerioS2_Evento_Ghost_Move_5
waitmovement 0x0
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_4 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
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
	msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement 22, NeoLavandaCementerioS2_Evento_Ghost_Move_1
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
addobject 21
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_2
waitmovement 0x0
special RemoveCameraObject
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_6 MSGBOX_DEFAULT
waitmoncry
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_MOONLIGHT
delay 40
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_7 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 21, NeoLavandaCementerioS2_Evento_Ghost_Move_7.1
applymovement OBJ_EVENT_ID_CAMERA, NeoLavandaCementerioS2_Evento_Ghost_Move_7
waitmovement 0x0
special RemoveCameraObject
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_8 MSGBOX_AUTOCLOSE
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_9 MSGBOX_DEFAULT
waitmoncry
delay 20
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_10 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DETECT
fadescreen 1
playmoncry SPECIES_MEW, CRY_MODE_ENCOUNTER
setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
removeobject 21
waitmoncry
fadescreen 0
delay 40
applymovement 22, NeoLavandaCementerioS2_Evento_Ghost_Move_8
applymovement OBJ_EVENT_ID_PLAYER, NeoLavandaCementerioS2_Evento_Ghost_Move_9
waitmovement 0x0
delay 15
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox NeoLavandaCementerioS2_Evento_Ghost_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_HARBOR_EVENT_TICKET_TAKER
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_TRUCK
setflag FLAG_UNUSED_0x273
fadescreen 1
delay 20
removeobject 22
fadescreen 0
setvar VAR_UNUSED_0x40F7, 211
release
end


NeoLavandaCementerioS2_Evento_Ghost_Move_9:
face_left
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_8:
face_right
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_7.1:
walk_down
walk_down
walk_down
walk_down
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_7:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_6:
walk_slow_up
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
step_end


NeoLavandaCementerioS2_Evento_Ghost_Move_4:
walk_in_place_up
walk_in_place_right
walk_in_place_left
walk_in_place_down
walk_in_place_up
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_3:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

NeoLavandaCementerioS2_Evento_Ghost_Move_1:
emote_exclamation_mark
step_end

NeoLavandaCementerioS2_Evento_Ghost_Texto_1:
	.string "(An extremely powerful energy attacks\n"
	.string "you)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_2:
.string "…$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_3:
	.string "(The energy seems to have become even\n"
	.string "more agitated!)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_4:
	.string "FUJI: Enough! This wasn't our decision\n"
	.string "for it to end like this! No place is\l"
	.string "eternal, not this graveyard, nor\l"
	.string "POKÉMON TOWER!$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_5:
.string "GHOST: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_6:
.string "MEW: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_7:
.string "(MEW pacified the spirit)$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_8:
.string "FUJI: After so long.$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_9:
.string "MEW: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_10:
.string "FUJI: …$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_11:
	.string "Do you think MEW is also omnipresent?\n"
	.string "Has it witnessed each and every one of\l"
	.string "my actions since the incident with\l"
	.string "MEWTWO? Everything I've fought to\l"
	.string "mitigate the effects of the RADIO\l"
	.string "TOWER on the essence of LAVENDER\l"
	.string "TOWN?$"

NeoLavandaCementerioS2_Evento_Ghost_Texto_12:
.string "FUJI: I t-think… It has forgiven me.$"


NeoLavandaCementerioS2_Novena_Exorciasta::
lock
faceplayer
msgbox NeoLavandaCementerioS2_Novena_Exorciasta_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerioS2_Novena_Exorciasta_Texto_1:
	.string "We cannot avoid the inevitable, but we\n"
	.string "can prepare ourselves so that the\l"
	.string "inevitable does not destroy us.$"

Llave_Cementerio_Warp::
lock
compare VAR_UNUSED_0x40F7, 209
goto_if_gt Llave_Cementerio_Warp_2
msgbox Llave_Cementerio_Warp_Texto_1 MSGBOX_AUTOCLOSE
release
end

Llave_Cementerio_Warp_Texto_1:
.string "(An extremely powerful energy\n"
	.string "is near)$"


Llave_Cementerio_Warp_2::
playse SE_CLICK
delay 20
playse SE_UNLOCK
setmetatile 28, 31, 0x285, FALSE
setmetatile 28, 30, 0x285, FALSE
setmetatile 29, 31, 0x282, FALSE
setmetatile 29, 30, 0x282, FALSE
special DrawWholeMapView
delay 60
release
end


NeoLavandaCementerioS2_14_NPC::
lock
faceplayer
msgbox NeoLavandaCementerioS2_14_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

NeoLavandaCementerioS2_14_NPC_Texto_1:
	.string "You fear everything as mortals you are,\n"
	.string "and desire everything as if you were\l"
	.string "immortal.$"
