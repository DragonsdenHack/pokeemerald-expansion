Route50_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route50_OnFrame
	.byte 0

Route50_OnFrame:
map_script_2 VAR_VERDANTURF_TOWN_STATE, 19, Route50_Miguel
	.2byte 0



Route50_EventScript_Montanero::
	trainerbattle_single TRAINER_THALIA_4, Route50_Text_MontaneroIntro, Route50_Text_MontaneroDefeated
	msgbox Route50_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end

Route50_Encuentro_Dunsparce::
lock
faceplayer
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_1
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route50_Encuentro_Dunsparce_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_6
waitmovement 0x0
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
waitse
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
		playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_3 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_MUGSHOT
applymovement 3, Route50_Encuentro_Dunsparce_Move_7
waitmovement 0x0
waitse
trainerbattle_no_intro TRAINER_TRAINER_137, Route50_Encuentro_Dunsparce_Texto_4
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_4 MSGBOX_DEFAULT
waitmoncry
delay 20
msgbox Route50_Encuentro_Dunsparce_Texto_5 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_3 MSGBOX_DEFAULT
waitmoncry
msgbox Route50_Encuentro_Dunsparce_Texto_7 MSGBOX_AUTOCLOSE
delay 40
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
playse SE_M_FLY
removeobject 3
waitse
playse SE_M_DETECT
addobject 4
waitse
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_9
waitmovement 0x0
delay 20
removeobject 4
playfanfare MUS_OBTAIN_ITEM
additem ITEM_TART_APPLE
msgbox Route50_Encuentro_Dunsparce_Texto_8 MSGBOX_DEFAULT
waitfanfare
applymovement 2, Route50_Encuentro_Dunsparce_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_8
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_2
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 8
setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
clearflag FLAG_UNUSED_0x275
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
fadescreen 1
delay 20
removeobject 2
fadescreen 0
release
end

Route50_Encuentro_Dunsparce_Move_10:
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Move_9:
walk_in_place_up
step_end

Route50_Encuentro_Dunsparce_Move_8:
face_left
step_end

Route50_Encuentro_Dunsparce_Move_7:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Route50_Encuentro_Dunsparce_Move_6:
emote_exclamation_mark
delay_8
walk_slow_up
step_end

Route50_Encuentro_Dunsparce_Move_5:
face_up
delay_8
walk_left
face_up
step_end

Route50_Encuentro_Dunsparce_Move_4:
face_up
step_end

Route50_Encuentro_Dunsparce_Move_3:
face_right
step_end

Route50_Encuentro_Dunsparce_Move_2:
face_right
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Move_1:
emote_exclamation_mark
face_down
delay_8
walk_in_place_down
step_end

Route50_Encuentro_Dunsparce_Texto_1:
	.string "ANDRA: Where have you been all this\n"
	.string "time, {PLAYER}?!$"

Route50_Encuentro_Dunsparce_Texto_2:
.string "You won't believe what just happene…!$"

Route50_Encuentro_Dunsparce_Texto_3:
.string "GROAAAAAAAAR!!!$"

Route50_Encuentro_Dunsparce_Texto_4:
.string "Groarr…$"

Route50_Encuentro_Dunsparce_Texto_5:
	.string "ANDRA: That's it! You just repeated my\n"
	.string "combat, it was exactly as mine! But\l"
	.string "how…?$"

Route50_Encuentro_Dunsparce_Texto_6:
	.string "The pagoda to the southwest? Let's go,\n"
	.string "{PLAYER}! See you there!$"

Route50_Encuentro_Dunsparce_Texto_7:
	.string "ANDRA: It… it's watching us closely…$"

Route50_Encuentro_Dunsparce_Texto_8:
	.string "{PLAYER} obtained a GOLDEN STONE!!$"


Route50_Dragonite::
lock
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Route50_Dragonite_Texto_1 MSGBOX_DEFAULT
release
end

Route50_Dragonite_Texto_1:
	.string "It's a DRAGONITE, it is blocking the\n"
	.string "path to a zone even further to the\l"
	.string "north.$"



Route50_Miguel::
lock
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 13
addobject 14
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route50_Miguel_Escena_Move_1
waitmovement 0x0
addobject 13
special RemoveCameraObject
delay 10
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER 
waitmoncry
playse SE_BALL_TRADE
delay 15
setflag FLAG_NUEVA_861
removeobject 12
delay 15
applymovement 13, Route50_Miguel_Escena_Move_2
waitmovement 0x0
applymovement 14, Route50_Miguel_Escena_Move_8
waitmovement 0x0
msgbox Route50_Miguel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_4
waitmovement 0x0
msgbox Route50_Miguel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_4 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
applymovement 14, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_5 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_6
waitmovement 0x0
msgbox Route50_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_7
waitmovement 0x0
msgbox Route50_Miguel_Texto_7 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_8
waitmovement 0x0
msgbox Route50_Miguel_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_4
waitmovement 0x0
msgbox Route50_Miguel_Texto_9 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_10 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_4
waitmovement 0x0
msgbox Route50_Miguel_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_13 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_9
waitmovement 0x0
msgbox Route50_Miguel_Texto_14 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_16 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, Route50_Miguel_Escena_Move_10
waitmovement 0x0
delay 15
msgbox Route50_Miguel_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
delay 15
msgbox Route50_Miguel_Texto_19 MSGBOX_AUTOCLOSE
delay 30
setvar VAR_VERDANTURF_TOWN_STATE, 20
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
warpsilent MAP_CIANWOOD_CITY, 29, 3
release
end

Route50_Miguel_Escena_Move_10:
face_down
step_end

Route50_Miguel_Escena_Move_9:
walk_left
step_end

Route50_Miguel_Escena_Move_8:
walk_up
step_end

Route50_Miguel_Escena_Move_7:
walk_in_place_up
step_end

Route50_Miguel_Escena_Move_6:
walk_right
step_end

Route50_Miguel_Escena_Move_5:
face_up
step_end

Route50_Miguel_Escena_Move_4:
face_left
step_end

Route50_Miguel_Escena_Move_3:
walk_in_place_down
step_end

Route50_Miguel_Escena_Move_2:
walk_down
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

Route50_Miguel_Texto_1:
.string "ZINNIA: Did you find it?$"

Route50_Miguel_Texto_2:
	.string "????: Yep, your hunch was right. And\n"
	.string "you? Have you seen it before?$"

Route50_Miguel_Texto_3:
	.string "ZINNIA: At the top of DUN PILLAR.\n"
	.string "They're just as you described, with\l"
	.string "that aura of triumph and ability to\l"
	.string "stay present when it matters most. It's\l"
	.string "no wonder the SACRED DRAGON chose\l"
	.string "them.$"

Route50_Miguel_Texto_4:
	.string "????: I know… history only remembers\n"
	.string "those who succeed, but along the way,\l"
	.string "the vast majority of those who tried\l"
	.string "ended up succumbing to the weight of\l"
	.string "their life circumstances.$"

Route50_Miguel_Texto_5:
	.string "They might have invested the same, or\n"
	.string "even more, effort than those few who\l"
	.string "ended up triumphing, but they'll never\l"
	.string "realize it. They'll be forgotten,\l"
	.string "thinking they failed.$"

Route50_Miguel_Texto_6:
	.string "That narrow trench to the north\n"
	.string "perfectly epitomizes it, how the other\l"
	.string "evolutionary line of DUNSPARCE, the\l"
	.string "line tied to the mud, has been ignored\l"
	.string "and left behind.$"

Route50_Miguel_Texto_7:
	.string "ZINNIA: That's right, the narrow trench\n"
	.string "to the north was once the counterpart\l"
	.string "to DUN PILLAR. There, a DUDUNSPARCE\l"
	.string "also tried to rise above an adverse\l"
	.string "fate, with the same fervor as the now\l"
	.string "SACRED DRAGON, but… not everyone can\l"
	.string "be number 1, glory is only reserved for a\l"
	.string "few.$"

Route50_Miguel_Texto_8:
	.string "Without a result to support its titanic\n"
	.string "effort, its sanctuary was slowly\l"
	.string "forgotten, to the point of being\l"
	.string "practically engulfed by vegetation and\l"
	.string "time. History was harsh on that\l"
	.string "POKÉMON.$"

Route50_Miguel_Texto_9:
	.string "????: Beginning with those hypocritical\n"
	.string "sages of DUN TOWER, who boast about\l"
	.string "their SACRED DRAGON while\l"
	.string "simultaneously disregarding it.$"

Route50_Miguel_Texto_10:
	.string "However, they do the same with\n"
	.string "DUDUNSPARCE, assuming it will never\l"
	.string "reach the same heights.$"

Route50_Miguel_Texto_11:
	.string "Because; of course, DUDUNSPARCE was\n"
	.string "not <blessed>, as BLESSPARCE. What is\l"
	.string "the will then?$"

Route50_Miguel_Texto_12:
	.string "ZINNIA: I see that this topic affects\n"
	.string "you deeply.$"

Route50_Miguel_Texto_13:
	.string "????: I feel too reflected in this\n"
	.string "POKÉMON to overlook all of that. I\l"
	.string "already know its story; I've lived it\l"
	.string "myself.$"

Route50_Miguel_Texto_14:
	.string "I know that feeling, being in the mud, to\n"
	.string "have given my best and not be enough.\l"
	.string "And meanwhile, watching as others get\l"
	.string "everything they desire.$"

Route50_Miguel_Texto_15:
.string "But… that's over.$"

Route50_Miguel_Texto_16:
	.string "This POKÉMON, me… we were never\n"
	.string "considered, we were underestimated, we\l"
	.string "were defeated, we were overlooked…$"

Route50_Miguel_Texto_17:
	.string "But together… we will bring out the\n"
	.string "best in ourselves, and with it, our\l"
	.string "spirit, our <will>, will remain\l"
	.string "unbreakable.$"

Route50_Miguel_Texto_18:
	.string "ZINNIA: Keep in mind that all this has a\n"
	.string "price.$"

Route50_Miguel_Texto_19:
	.string "????: If this is the reward, it doesn't\n"
	.string "have any price for me.$"

Route50_Miguel_Escena_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
step_end


