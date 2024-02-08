SaffronCity_Gym_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_Gym_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, SaffronCity_Gym_OnFrame
    .byte 0

SaffronCity_Gym_OnFrame:
map_script_2 VAR_ROUTE105_STATE, 0, SaffronCity_No_Pass_Gym
map_script_2 VAR_ROUTE105_STATE, 1, SaffronCity_Can_Pass_Gym
	.2byte 0

SaffronCityGym_EventScript_Exorcista::
	trainerbattle_single TRAINER_JENNY_2, SaffronCityGym_Text_ExorcistaIntro, SaffronCityGym_Text_ExorcistaDefeated
	msgbox SaffronCityGym_Text_ExorcistaPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Exorcista2::
	trainerbattle_single TRAINER_CARLEE, SaffronCityGym_Text_Exorcista2Intro, SaffronCityGym_Text_Exorcista2Defeated
	msgbox SaffronCityGym_Text_Exorcista2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Exorcista3::
	trainerbattle_single TRAINER_LAUREL, SaffronCityGym_Text_Exorcista3Intro, SaffronCityGym_Text_Exorcista3Defeated
	msgbox SaffronCityGym_Text_Exorcista3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium::
	trainerbattle_single TRAINER_KAREN_4, SaffronCityGym_Text_MediumIntro, SaffronCityGym_Text_MediumDefeated
	msgbox SaffronCityGym_Text_MediumPostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium2::
	trainerbattle_single TRAINER_GEORGIA, SaffronCityGym_Text_Medium2Intro, SaffronCityGym_Text_Medium2Defeated
	msgbox SaffronCityGym_Text_Medium2PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium3::
	trainerbattle_single TRAINER_KAREN_2, SaffronCityGym_Text_Medium3Intro, SaffronCityGym_Text_Medium3Defeated
	msgbox SaffronCityGym_Text_Medium3PostBattle, MSGBOX_AUTOCLOSE
	end



SaffronCityGym_EventScript_Medium4::
	trainerbattle_single TRAINER_KAREN_3, SaffronCityGym_Text_Medium4Intro, SaffronCityGym_Text_Medium4Defeated
	msgbox SaffronCityGym_Text_Medium4PostBattle, MSGBOX_AUTOCLOSE
	end

SaffronCity_No_Pass_Gym::
delay 70
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox SaffronCity_No_Pass_Gym_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_No_Pass_Gym_move1
waitmovement 0x0
warp MAP_SAFFRON_CITY, 46, 13
release
end

SaffronCity_No_Pass_Gym_move1:
face_down
step_end


SaffronCity_Can_Pass_Gym::
delay 20
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
msgbox SaffronCity_No_Pass_Gym_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCityGym_CanPass_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCityGym_NoPass_move_3
waitmovement 0x0
delay 15
msgbox SaffronCity_No_Pass_Gym_Texto_2 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE105_STATE, 2
release
end


SaffronCity_No_Pass_Gym_Texto_1:
	.string "Damn ROCKET! Didn't you have enough\n"
	.string "with the humiliation at SILPH? Take one\l"
	.string "more step and I'll send you back to the\l"
	.string "sewers of CELADON with one just\l"
	.string "PSYCHIC.$"

SaffronCity_No_Pass_Gym_Texto_2:
	.string "Wait a moment! That LICENSE... Only the\n"
	.string "high positions of the LEAGUE COMMITTEE\l"
	.string "have one like that... Sorry for the\l"
	.string "misunderstanding, SIR. Everything is in\l"
	.string "order, I hope you can enjoy our\l"
	.string "facilities.$"

SaffronCity_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Gym_Guy_2
msgbox SaffronCity_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Gym_Guy_2::
msgbox SaffronCity_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Gym_Guy_Texto_1:
	.string "Yo!\n"
	.string "Champ in the making!\p"
	.string "SABRINA's POKÉMON use psychic\n"
	.string "power instead of force.\p"
	.string "FIGHTING POKÉMON are especially\n"
	.string "weak against PSYCHIC POKÉMON.\p"
	.string "They'll get destroyed before they\n"
	.string "can even aim a punch!$"

SaffronCity_Gym_Guy_Texto_2:
	.string "Psychic power, huh?\p"
	.string "If I had that, I'd make a bundle\n"
	.string "at the slots!$"

SaffronCity_Estatua::
compare VAR_UNUSED_0x40F7, 22
goto_if_gt SaffronCity_Estatua_Estatua_3
msgbox SaffronCity_Estatua_Texto_4 MSGBOX_SIGN
release
end

SaffronCity_Estatua_Estatua_3::
compare VAR_ROUTE105_STATE, 0
goto_if_eq SaffronCity_Estatua_3
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Estatua_2
msgbox SaffronCity_Estatua_Texto_1 MSGBOX_SIGN
release
end

SaffronCity_Estatua_2::
msgbox SaffronCity_Estatua_Texto_2 MSGBOX_SIGN
release
end

SaffronCity_Estatua_3::
msgbox SaffronCity_Estatua_Texto_3 MSGBOX_SIGN
release
end

SaffronCity_Estatua_Texto_1:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
	.string "AZUL, ROJO y ANDRA$"

SaffronCity_Estatua_Texto_2:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
	.string "AZUL, ROJO, ANDRA y {PLAYER}$"

SaffronCity_Estatua_Texto_3:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
	.string "AZUL y ROJO$"

SaffronCity_Estatua_Texto_4:
.string "SAFFRON CITY GYM\n"
	.string "LEADER: SABRINA\p"
	.string "WINNER TRAINERS:\n"
.string "It is empty!$"

SaffronCity_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE105_STATE, 2
goto_if_gt SaffronCity_Lider_Gimnasio_2
msgbox SaffronCity_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SaffronCity_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SABRINA, SaffronCity_Lider_Gimnasio_Texto_2
msgbox SaffronCity_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM04_CALM_MIND
msgbox SaffronCity_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox SaffronCity_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_JENNY_2
settrainerflag TRAINER_CARLEE
settrainerflag TRAINER_LAUREL
settrainerflag TRAINER_KAREN_4
settrainerflag TRAINER_GEORGIA
settrainerflag TRAINER_KAREN_2
settrainerflag TRAINER_KAREN_3
setvar VAR_ROUTE105_STATE, 3
release
end

SaffronCity_Lider_Gimnasio_2::
msgbox SaffronCity_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Lider_Gimnasio_Texto_1:
	.string "… … Wow, it is curious. A short time ago,\n"
	.string "the same thing happened with another\l"
	.string "girl dressed as a ROCKET. But your\l"
	.string "arrival catches me totally by surprise.\l"
	.string "It seems that, unlike many others who\l"
	.string "have come through here, you are not\l"
	.string "bound by destiny. You are like an open\l"
	.string "book yet to be written, pure\l"
	.string "potentiality. Take advantage of it, it\l"
	.string "is a rare gift in these days we live in…\l"
	.string "Anyway, I am rambling, forgive me. The\l"
	.string "truth is, I prefer talking about those\l"
	.string "topics rather than battling, but I was\l"
	.string "given the gift of reading minds and\l"
	.string "predicting the future, which has made\l"
	.string "me an extraordinary trainer of PSYCHIC\l"
	.string "POKÉMON.$"

SaffronCity_Lider_Gimnasio_Texto_1.1:
	.string "If you want it, I will show you!$"

SaffronCity_Lider_Gimnasio_Texto_2:
 .string "This loss shocks me!\n"
    .string "But, a loss is a loss.\p"
    .string "I admit, I didn't work hard enough\n"
    .string "to win.\p"
    .string "Your victory has earned you the\n"
    .string "MARSHBADGE.$"


SaffronCity_Lider_Gimnasio_Texto_3:
 .string "TM04 is CALM MIND.\p"
    .string "It makes the POKÉMON concentrate\n"
    .string "to raise both SP. ATK and SP. DEF.$"


SaffronCity_Lider_Gimnasio_Texto_4:
.string "The MARSHBADGE makes POKéMON up\n"
    .string "to LV. 70 obey you.\p"
    .string "Stronger POKÉMON will become wild,\n"
    .string "ignoring your orders in battle.\p"
    .string "Just don't raise your POKÉMON too\n"
    .string "much to avoid that problem.\p"
    .string "Wait, please take this TM with you.$"


SaffronCity_Lider_Gimnasio_Texto_5:
.string "{PLAYER} received TM04 from\n"
    .string "SABRINA.$"


SaffronCity_Lider_Gimnasio_Texto_6:
	.string "Psychic power isn't something that\n"
	.string "only a few people have.\p"
	.string "Everyone has psychic power.\n"
	.string "People just don't realize it.$" 


Vermilion_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Gym_Guy_2
msgbox Vermilion_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Gym_Guy_2::
msgbox Vermilion_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Gym_Guy_Texto_1:
	.string "Mmmm… It is correct that you have a\n"
	.string "license. But still, your presence feels\l"
	.string "strange to me. I will keep an eye on\l"
	.string "you…$"

Vermilion_City_Gym_Guy_Texto_2:
	.string "Definitely you are not a ROCKET! Those\n"
	.string "scums could never overshadow our great\l"
	.string "LT. SURGE!$"

Vermilion_City_Estatua::
compare VAR_UNUSED_0x40F7, 28
goto_if_gt Vermilion_City_Estatua_Estatua_3
msgbox Vermilion_City_Estatua_Texto_4 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_Estatua_3::
compare VAR_ROUTE108_STATE, 0
goto_if_eq Vermilion_City_Estatua_3
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Estatua_2
msgbox Vermilion_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_2::
msgbox Vermilion_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_3::
msgbox Vermilion_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Vermilion_City_Estatua_Texto_1:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Vermilion_City_Estatua_Texto_2:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"

Vermilion_City_Estatua_Texto_3:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE and RED$"

Vermilion_City_Estatua_Texto_4:
.string "VERMILION POKÉMON GYM\n"
	.string "LEADER: LT .SURGE\p"
	.string "WINNING TRAINERS:\n"
           .string "It is empty!$"


Vermilion_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE108_STATE, 2
goto_if_gt Vermilion_City_Lider_Gimnasio_2
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Vermilion_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_SURGE_2, Vermilion_City_Lider_Gimnasio_Texto_2
msgbox Vermilion_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM34_SHOCK_WAVE
msgbox Vermilion_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Vermilion_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_WINSTON_5
settrainerflag TRAINER_ETHAN_4
settrainerflag TRAINER_LAO_5
setvar VAR_ROUTE108_STATE, 3
release
end

Vermilion_City_Lider_Gimnasio_2::
msgbox Vermilion_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Vermilion_City_Lider_Gimnasio_Texto_1:
	.string "Is this for real?! You've got some nerve\n"
	.string "showing up here after what happened at\l"
	.string "the POWER PLANT! First that redhead\l"
	.string "friend of yours, and now you, you damn\l"
	.string "insurgents! You're going to feel the\l"
	.string "true fury of my ELECTRIC POKÉMON.\l"
	.string "You'll see why everyone feared me in the\l"
	.string "war! After I finish off your POKÉMON,\l"
	.string "I'll fry you with electric shocks too!$"

Vermilion_City_Lider_Gimnasio_Texto_2:
	.string "It can not be true, I lost again! I do\n"
	.string "not have another option that give you\l"
	.string "the THUNDERBADGE!$"

Vermilion_City_Lider_Gimnasio_Texto_3:
	.string "I will give you a little advice, run away\n"
	.string "of this region before all of the LANCE's\l"
	.string "fury blows up in your face.$"

Vermilion_City_Lider_Gimnasio_Texto_4:
	.string "I am not going to tell you what the\n"
	.string "THUNDERBADGE does if that is what you\l"
	.string "are expecting, ROCKET. Anyway, you will\l"
	.string "use FLY whenever you feel like it, but I\l"
	.string "will fulfill my part as a GYM LEADER and\l"
	.string "give you this TM.$"

Vermilion_City_Lider_Gimnasio_Texto_5:
 .string "{PLAYER} received TM34\n"
    .string "from LT. SURGE.$"

Vermilion_City_Lider_Gimnasio_Texto_6:
	.string "TM34 contains SHOCK WAVE, it is\n"
	.string "somewhat less powerful than\l"
	.string "THUNDERBOLT but it will never miss. If I\l"
	.string "could right now, I would order my RAICHU\l"
	.string "to use it on you, ROCKET, consider it\l"
	.string "done!$"

Pewter_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Gym_Guy_2
msgbox Pewter_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Gym_Guy_2::
msgbox Pewter_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Gym_Guy_Texto_1:
	.string "I am going to file a complaint with the\n"
	.string "LEAGUE COMMITTEE to ban that dreadful\l"
	.string "uniform you are wearing. This cursed\l"
	.string "trend of making fun of TEAM ROCKET for\l"
	.string "its failure in SILPH must end.$"

Pewter_City_Gym_Guy_Texto_2:
	.string "Your look might be terrible, but you\n"
	.string "gave BROCK a good beating!$"

Pewter_City_Estatua::
compare VAR_ROUTE111_STATE, 1
goto_if_eq Pewter_City_Estatua_3
compare VAR_ROUTE111_STATE, 2
goto_if_eq Pewter_City_Estatua_3
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Estatua_2
msgbox Pewter_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Pewter_City_Estatua_2::
msgbox Pewter_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Pewter_City_Estatua_3::
msgbox Pewter_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Pewter_City_Estatua_Texto_1:
.string "PEWTER POKÉMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED and ANDRA$"


Pewter_City_Estatua_Texto_2:
.string "PEWTER POKÉMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED, ANDRA and {PLAYER}$"

Pewter_City_Estatua_Texto_3:
.string "PEWTER POKÉMON GYM\n"
    .string "LEADER: BROCK\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE and RED$"

Pewter_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE111_STATE, 2
goto_if_gt Pewter_City_Lider_Gimnasio_2
msgbox Pewter_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Pewter_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BROCK, Pewter_City_Lider_Gimnasio_Texto_2
msgbox Pewter_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM39_ROCK_TOMB
msgbox Pewter_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Pewter_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE111_STATE, 3
settrainerflag TRAINER_STEVE_1
release
end

Pewter_City_Lider_Gimnasio_2::
msgbox Pewter_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Pewter_City_Lider_Gimnasio_Texto_1:
	.string "Oh, so we have another challenger for\n"
	.string "the title, just now a girl dressed as a\l"
	.string "ROCKET also passed by, it seems like\l"
	.string "it's fashionable to mock their failure\l"
	.string "at SILPH. Anyway, my ROCK-TYPE\l"
	.string "POKÉMONS are the most resilient you'll\l"
	.string "see, are you still sure about\l"
	.string "challenging me knowing you'll lose?$"

Pewter_City_Lider_Gimnasio_Texto_1.1:
	.string "That's the TRAINER's honor that\n"
	.string "compels you to challenge me.\p"
	.string "Fine, then!\n"
	.string "Show me your best!$"

Pewter_City_Lider_Gimnasio_Texto_2:
	.string "I took you for granted, and so\n"
	.string "I lost.\p"
	.string "As proof of your victory, I confer\n"
	.string "on you this…the official POKÉMON\l"
	.string "LEAGUE BOULDERBADGE.$"

Pewter_City_Lider_Gimnasio_Texto_3:
	.string "Well, today isn't my day. First that girl,\n"
	.string "and now you. Anyway, it seems like you\l"
	.string "have talent, young man. If you use it\l"
	.string "for good, you could make this region a\l"
	.string "much better place to live.$"

Pewter_City_Lider_Gimnasio_Texto_4:
	.string "Wait!\n"
	.string "Take this with you.$"

Pewter_City_Lider_Gimnasio_Texto_5:
	.string "{PLAYER} received TM39\n"
	.string "from BROCK.$"

Pewter_City_Lider_Gimnasio_Texto_6:
	.string "TM39 contains ROCK TOMB, It hurls\n"
	.string "boulders at the foe and lowers its\l"
	.string "SPEED, ideal for slow ROCK type as\l"
	.string "GRAVELER or RHYDON.$"

Cerulean_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Gym_Guy_2
msgbox Cerulean_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Cerulean_City_Gym_Guy_2::
msgbox Cerulean_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Cerulean_City_Gym_Guy_Texto_1:
	.string "Lemme advice you something, kid, don't\n"
	.string "you dare show up like that in front of\l"
	.string "the ELITE 4, not even jokingly.$"

Cerulean_City_Gym_Guy_Texto_2:
	.string "Don't judge a book by its cover! So you\n"
	.string "used the TEAM ROCKET uniform to throw\l"
	.string "off MISTY, huh!$"

Cerulean_City_Estatua::
compare VAR_UNUSED_0x40F7, 22
goto_if_gt Cerulean_City_Estatua_Estatua_3
msgbox Cerulean_City_Estatua_Texto_4 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_Estatua_3::
compare VAR_ROUTE109_STATE, 0
goto_if_eq Cerulean_City_Estatua_3
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Estatua_2
msgbox Cerulean_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_2::
msgbox Cerulean_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_3::
msgbox Cerulean_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Cerulean_City_Estatua_Texto_1:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Cerulean_City_Estatua_Texto_2:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"


Cerulean_City_Estatua_Texto_3:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE and RED$"

Cerulean_City_Estatua_Texto_4:
	.string "CERULEAN POKÉMON GYM\n"
	.string "LEADER: MISTY\p"
	.string "WINNING TRAINERS:\n"
	.string "It is empty!$"

Cerulean_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE109_STATE, 2
goto_if_gt Cerulean_City_Lider_Gimnasio_2
msgbox Cerulean_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Cerulean_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MISTY, Cerulean_City_Lider_Gimnasio_Texto_2
msgbox Cerulean_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM03_WATER_PULSE
msgbox Cerulean_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE109_STATE, 3
settrainerflag TRAINER_BLAKE
settrainerflag TRAINER_LUIS
release
end

Cerulean_City_Lider_Gimnasio_2::
msgbox Cerulean_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end


Cerulean_City_Lider_Gimnasio_Texto_1:
   .string "Hi, you're a new face!\p"
	.string "Only those TRAINERS who have a\n"
	.string "policy about POKÉMON can turn pro.\p"
	.string "What is your approach when you\n"
	.string "catch and train POKÉMON?$"

Cerulean_City_Lider_Gimnasio_Texto_1.1:
	.string "My policy is an all-out offensive\n"
	.string "with WATER-type POKÉMON!$"

Cerulean_City_Lider_Gimnasio_Texto_2:
	.string "Wow!\n"
	.string "You're too much!\p"
	.string "All right!\p"
	.string "You can have the CASCADEBADGE to\n"
	.string "show you beat me.$"

Cerulean_City_Lider_Gimnasio_Texto_3:
	.string "TM03 teaches WATER PULSE, it is not as\n"
	.string "strong as SURF or SCALD are, but it has\l"
	.string "a 20% chance to confuse the enemy!$"

Cerulean_City_Lider_Gimnasio_Texto_4:
	.string "The CASCADEBADGE makes all\n"
	.string "POKÉMON up to LV. 30 obey.\p"
	.string "That includes even outsiders you\n"
	.string "got in trades.\p"
	.string "There's more. You can now use CUT\n"
	.string "anytime, even out of battle.\p"
	.string "You can CUT down small trees to\n"
	.string "open new pathways.\p"
	.string "You can also have my favorite TM.$"

Cerulean_City_Lider_Gimnasio_Texto_5:
	.string "{PLAYER} received TM03\n"
	.string "from MISTY.$"

Fuchsia_City_Gym_Guy::
lock
faceplayer
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Gym_Guy_2
msgbox Fuchsia_City_Gym_Guy_Texto_1 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Gym_Guy_2::
msgbox Fuchsia_City_Gym_Guy_Texto_2 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Gym_Guy_Texto_1:
	.string "What? But I know you! What kind of joke\n"
	.string "is this?! You may have fooled the\l"
	.string "system, but not me!$"

Fuchsia_City_Gym_Guy_Texto_2:
	.string "This is a farce! I am going to complain\n"
	.string "about this to POKÉMON LEAGUE! I know\l"
	.string "you are a real ROCKET!$"

Fuchsia_City_Estatua::
compare VAR_ROUTE106_STATE, 0
goto_if_eq Fuchsia_City_Estatua_3
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Estatua_2
msgbox Fuchsia_City_Estatua_Texto_1 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_2::
msgbox Fuchsia_City_Estatua_Texto_2 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_3::
msgbox Fuchsia_City_Estatua_Texto_3 MSGBOX_SIGN
release
end

Fuchsia_City_Estatua_Texto_1:
	.string "FUCHSIA POKÉMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Fuchsia_City_Estatua_Texto_2:
	.string "FUCHSIA POKÉMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"

Fuchsia_City_Estatua_Texto_3:
	.string "FUCHSIA POKÉMON GYM\n"
	.string "LEADER: KOGA\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE and RED$"

Fuchsia_City_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE106_STATE, 2
goto_if_gt Fuchsia_City_Lider_Gimnasio_2
msgbox Fuchsia_City_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Fuchsia_City_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_KOGA, Fuchsia_City_Lider_Gimnasio_Texto_2
msgbox Fuchsia_City_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM06_TOXIC
msgbox Fuchsia_City_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Fuchsia_City_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_MIGUEL_1
settrainerflag TRAINER_ANNA_AND_MEG_3
settrainerflag TRAINER_MIGUEL_3
settrainerflag TRAINER_COLTON
settrainerflag TRAINER_MIGUEL_2
settrainerflag TRAINER_ANNA_AND_MEG_4
setvar VAR_ROUTE106_STATE, 3
release
end

Fuchsia_City_Lider_Gimnasio_2::
msgbox Fuchsia_City_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Fuchsia_City_Lider_Gimnasio_Texto_1:
	.string "KOGA: {PLAYER}! You are back! So you\n"
	.string "will venture into the lion's den\l"
	.string "challenging the POKÉMON LEAGUE! From\l"
	.string "here you have all my support,\l"
	.string "{PLAYER}, I will never forget what you\l"
	.string "did for the BIKERS and KANTO also.$"

Fuchsia_City_Lider_Gimnasio_Texto_1.1:
	.string "I won't make it easy for you {PLAYER},\n"
	.string "no one handles POISON TYPE POKÉMON\l"
	.string "like me, not even the ROCKET\l"
	.string "EXECUTIVES!$"


Fuchsia_City_Lider_Gimnasio_Texto_2:
	.string "I didn't expect less from you, you\n"
	.string "deserve GIOVANNI's trust and everyone\l"
	.string "who battles for a better KANTO. Here\l"
	.string "you have the SOULBADGE!$"

Fuchsia_City_Lider_Gimnasio_Texto_3:
	.string "Joining TEAM ROCKET was the best\n"
	.string "decision you made, look at you, you've\l"
	.string "built up a strong character and\l"
	.string "personality, understanding the truths\l"
	.string "hidden within this region, whereas RD\l"
	.string "lives in his fantasy world, believing\l"
	.string "this is just a game, do me the favor of\l"
	.string "delivering a hefty dose of reality to\l"
	.string "that spoiled child if you encounter him\l"
	.string "in the LEAGUE!$"

Fuchsia_City_Lider_Gimnasio_Texto_4:
	.string "Now that you have the SOULBADGE,\n"
	.string "the DEFENSE of your POKÉMON rises.\p"
	.string "It also lets you SURF outside of\n"
	.string "battle.\p"
	.string "Ah!\n"
	.string "Take this, too!$"

Fuchsia_City_Lider_Gimnasio_Texto_5:
	.string "{PLAYER} received TM06\n"
	.string "from KOGA.$"

Fuchsia_City_Lider_Gimnasio_Texto_6:
	.string "Sealed within that TM06 lies\n"
	.string "TOXIC!\p"
	.string "It is a secret technique dating\n"
	.string "back some four hundred years.$"

Cinnabar_Island_Lider_Gimnasio::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Lider_Gimnasio_2
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BLAINE_1, Cinnabar_Island_Lider_Gimnasio_Texto_2
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM38_FIRE_BLAST
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
settrainerflag TRAINER_SHANE
settrainerflag TRAINER_TONY_5
settrainerflag TRAINER_TAKAO
settrainerflag TRAINER_JUSTIN
settrainerflag TRAINER_HITOSHI
settrainerflag TRAINER_ETHAN_1
settrainerflag TRAINER_KIYO
setvar VAR_UNUSED_0x40F7, 81
release
end

Cinnabar_Island_Lider_Gimnasio_2::
msgbox Cinnabar_Island_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end

Cinnabar_Island_Gym_Estatuas::
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Gym_Estatuas_2
msgbox Cinnabar_Island_Gym_Estatuas_Texto_1 MSGBOX_SIGN
release
end

Cinnabar_Island_Gym_Estatuas_2::
msgbox Cinnabar_Island_Gym_Estatuas_Texto_2 MSGBOX_SIGN
release
end

Cinnabar_Island_Gym_Estatuas_Texto_1:
	.string "CINNABAR POKÉMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED and ANDRA$"

Cinnabar_Island_Gym_Estatuas_Texto_2:
	.string "CINNABAR POKÉMON GYM\n"
	.string "LEADER: BLAINE\p"
	.string "WINNING TRAINERS:\n"
	.string "BLUE, RED, ANDRA and {PLAYER}$"


Cinnabar_Island_Gym_Guy::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Cinnabar_Island_Gym_Guy_2
msgbox Cinnabar_Island_Gym_Guy_Texto_1 MSGBOX_NPC
release
end

Cinnabar_Island_Gym_Guy_2::
msgbox Cinnabar_Island_Gym_Guy_Texto_2 MSGBOX_NPC
release
end

Cinnabar_Island_Gym_Guy_Texto_1:
	.string "So, is it on trend to dress as ROCKET\n"
	.string "for their failure at SILPH? They\l"
	.string "deserved it, hah!$"

Cinnabar_Island_Gym_Guy_Texto_2:
	.string "I dont know why, but with you, he used a\n"
	.string "more powerful team than against a kid\l"
	.string "who passed through here not long ago.\l"
	.string "But still, you've defeated that walking\l"
	.string "torch!$"

Cinnabar_Island_Lider_Gimnasio_Texto_1:
.string "Hah!\p" 
.string "I am BLAINE, the red-hot LEADER\n" 
.string "of CINNABAR GYM!\p" 
.string "My fiery POKÉMON are all rough\n" 
.string "and ready with intense heat!\p" 
.string "They incinerate all challengers!\p"

Cinnabar_Island_Lider_Gimnasio_Texto_1.1:
.string "Hah!\n"
    .string "You better have BURN HEAL!$"

Cinnabar_Island_Lider_Gimnasio_Texto_2:
.string "I have burned down to nothing!\n"
.string "Not even ashes remain!\p"
.string "You have earned the VOLCANOBADGE.$"

Cinnabar_Island_Lider_Gimnasio_Texto_3:
	.string "The TM38 contains FIRE BLAST; very few\n"
	.string "moves have a better POWER-ACCURACY\l"
	.string "ratio, it's the perfect universal fire\l"
	.string "move. MAGMAR or CHARIZARD will destroy\l"
	.string "their enemies with this and their great\l"
	.string "SPECIAL ATTACK!$"

Cinnabar_Island_Lider_Gimnasio_Texto_4:
.string "Hah!\p"
    .string "The VOLCANOBADGE heightens the\n"
    .string "SPECIAL stats of your POKÉMON.\p"
    .string "Here, you can have this, too!$"

Cinnabar_Island_Lider_Gimnasio_Texto_5:
.string "{PLAYER} received TM38\n"
    .string "from BLAINE.$"

Cinnabar_Island_Lider_Gimnasio_Texto_6:
.string "FIRE BLAST is the ultimate fire\n"
    .string "technique.\p"
    .string "Don't waste it on WATER POKÉMON.$"

Celadon_Ciyy_Estatua::
compare VAR_ROUTE107_STATE, 0
goto_if_eq Celadon_Ciyy_Estatua_3
compare VAR_ROUTE107_STATE, 2
goto_if_gt Celadon_Ciyy_Estatua_2
msgbox Celadon_Ciyy_Estatua_Texto_1 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_2::
msgbox Celadon_Ciyy_Estatua_Texto_2 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_3::
msgbox Celadon_Ciyy_Estatua_Texto_3 MSGBOX_SIGN
release
end

Celadon_Ciyy_Estatua_Texto_1:
 .string "CELADON POKÉMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED and ANDRA$"

Celadon_Ciyy_Estatua_Texto_2:
 .string "CELADON POKÉMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED, ANDRA and {PLAYER}$"

Celadon_Ciyy_Estatua_Texto_3:
.string "CELADON POKÉMON GYM\n"
    .string "LEADER: ERIKA\p"
    .string "WINNING TRAINERS:\n"
    .string "BLUE, RED$"


Celadon_Ciyy_Lider_Gimnasio::
lock
faceplayer
compare VAR_ROUTE107_STATE, 2
goto_if_gt Celadon_Ciyy_Lider_Gimnasio_2
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_1 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_1.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ERIKA, Celadon_Ciyy_Lider_Gimnasio_Texto_2
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
addobject ITEM_TM19_GIGA_DRAIN
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_5 MSGBOX_DEFAULT
waitfanfare
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE107_STATE, 3
settrainerflag TRAINER_JESSICA_3
settrainerflag TRAINER_BRAWLY_1
settrainerflag TRAINER_WATTSON_1
settrainerflag TRAINER_NOLEN
settrainerflag TRAINER_FLANNERY_1
settrainerflag TRAINER_JESSICA_4
settrainerflag TRAINER_PRESLEY
release
end

Celadon_Ciyy_Lider_Gimnasio_2::
msgbox Celadon_Ciyy_Lider_Gimnasio_Texto_3 MSGBOX_AUTOCLOSE
release
end


Celadon_Ciyy_Lider_Gimnasio_Texto_1:
.string "Hello…\n"
    .string "Lovely weather, isn't it?\l"
    .string "It's so pleasant…\p"
    .string "…Oh, dear…\n"
    .string "I must have dozed off. Welcome.\p"
    .string "My name is ERIKA.\n"
    .string "I am the LEADER of CELADON GYM.\p"
    .string "I am a student of the art of\n"
    .string "flower arranging.\p"
    .string "My POKÉMON are solely of the\n"
    .string "GRASS type.\p"
    .string "…Oh, I'm sorry, I had no idea that\n"
    .string "you wished to challenge me.\p"
	
Celadon_Ciyy_Lider_Gimnasio_Texto_1.1:
 .string "Very well, but I shall not lose.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_2:
.string "Oh!\n"
    .string "I concede defeat.\l"
    .string "You are remarkably strong.\p"
    .string "I must confer on you the\n"
    .string "RAINBOWBADGE.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_3:
 .string "You are cataloging POKÉMON?\n"
    .string "I must say I'm impressed.\p"
    .string "I would never collect POKÉMON if\n"
    .string "they were unattractive.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_4:
.string "The RAINBOWBADGE will make\n"
    .string "POKÉMON up to Lv. 50 obey.\p"
    .string "It also allows POKÉMON to use\n"
    .string "STRENGTH in and out of battle.\p"
    .string "Please also take this with you.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_5:
.string "{PLAYER} received TM19\n"
    .string "from ERIKA.$"

Celadon_Ciyy_Lider_Gimnasio_Texto_6:
.string "TM19 contains GIGA DRAIN.\p"
    .string "Half the damage it inflicts is\n"
    .string "drained to heal your POKÉMON.\p"
    .string "Wouldn't you agree that it's a\n"
    .string "wonderful move?$"
