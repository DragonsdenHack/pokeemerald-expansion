Route15_MapScripts::
	.byte 0

Route15_1::
end

Route15_2::
end

Route15_3::
end

Route15_4::
end


Route15_5::
end

Route15_6::
end

Route15_7::
end

Route15_8::
end

Route15_9::
end

Route15_10::
end

Route15_11::
end

Route15_12::
end

Route15_13::
end



Route15_EventScript_Motorista::
	trainerbattle_single TRAINER_DALTON_3, Route15_Text_MotoristaIntro, Route15_Text_MotoristaDefeated
	msgbox Route15_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_4, Route15_Text_Motorista2Intro, Route15_Text_Motorista2Defeated
	msgbox Route15_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella::
	trainerbattle_single TRAINER_TED, Route15_Text_BellaIntro, Route15_Text_BellaDefeated
	msgbox Route15_BellaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella2::
	trainerbattle_single TRAINER_PAUL, Route15_Text_Bella2Intro, Route15_Text_Bella2Defeated
	msgbox Route15_Bella2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica::
	trainerbattle_single TRAINER_DIANA_5, Route15_Text_ChicaIntro, Route15_Text_ChicaDefeated
	msgbox Route15_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo::
	trainerbattle_single TRAINER_TIMOTHY_1, Route15_Text_OrnitologoIntro, Route15_Text_OrnitologoDefeated
	msgbox Route15_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_ISABEL_5, Route15_Text_Ornitologo2Intro, Route15_Text_Ornitologo2Defeated
	msgbox Route15_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica2::
	trainerbattle_single TRAINER_DIANA_4, Route15_Text_Chica2Intro, Route15_Text_Chica2Defeated
	msgbox Route15_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica3::
	trainerbattle_single TRAINER_AMY_AND_LIV_2, Route15_Text_Chica3Intro, Route15_Text_Chica3Defeated
	msgbox Route15_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica4::
	trainerbattle_single TRAINER_AMY_AND_LIV_1, Route15_Text_Chica4Intro, Route15_Text_Chica4Defeated
	msgbox Route15_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end



Route15Documento_100::
msgbox Route15Documento_Text_100, MSGBOX_SIGN   
end

Route15Documento_Text_100:
.string "ROUTE 15\n"
    .string "West to FUCHSIA CITY$"



Route15_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja1Intro, Route15_Text_Pareja1Defeated
	msgbox Route15_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja2Intro, Route15_Text_Pareja2Defeated
	msgbox Route15_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route15_Koga_Bruno_medio::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1
waitmovement 0x0
goto Route15_Koga_Bruno

Route15_Koga_Bruno_arriba::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1.1
waitmovement 0x0
goto Route15_Koga_Bruno

Route15_Koga_Bruno_abajo::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1.2
waitmovement 0x0
goto Route15_Koga_Bruno

Route15_Koga_Bruno::
msgbox Route15_Koga_Bruno_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_2 MSGBOX_AUTOCLOSE
applymovement 15, Route15_Koga_Bruno_Move_1
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_3
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_7 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_5
waitmovement 0x0
delay 20
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_DEFAULT
delay 20
msgbox Route15_Koga_Bruno_Texto_10 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_11 MSGBOX_AUTOCLOSE
applymovement 15, Route15_Koga_Bruno_Move_6
waitmovement 0x0
removeobject 15
msgbox Route15_Koga_Bruno_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_7
waitmovement 0x0
delay 20
msgbox Route15_Koga_Bruno_Texto_13 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_8
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_BLACK_GLASSES
waitfanfare
delay 20
msgbox Route15_Koga_Bruno_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_DEFAULT
delay 20
applymovement 14, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_15 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_9
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_5
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_17 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_18 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_19 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_10
waitmovement 0x0
removeobject 14
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
setvar VAR_UNUSED_0x40F7, 65
release
end

Route15_Koga_Bruno_Texto_1:
	.string "????: You are a shame for GYM LEADERS,\n"
	.string "KOGA, and you should be grateful that I\l"
	.string "don't report this to LANCE, not only do\l"
	.string "you refuse to lend your aid in\l"
	.string "eradicating the most radical bikers on\l"
	.string "CYCLING ROAD, but you also acknowledge\l"
	.string "that you understand their cause,\l"
	.string "haven't you had contact with the\l"
	.string "criminal gang ROCKET as well? You know\l"
	.string "that would mean your immediate removal\l"
	.string "as GYM LEADER, right?$"

Route15_Koga_Bruno_Texto_2:
	.string "KOGA: You offend me BRUNO, you know\n"
	.string "well as me that my maximum concern has\l"
	.string "always been the region welfare, I\l"
	.string "understand that your position as a\l"
	.string "member of the ELITE 4 comes with\l"
	.string "certain obligations, but it's not my role\l"
	.string "to force a handful of bikers to stop\l"
	.string "being affiliated with TEAM ROCKET.$"

Route15_Koga_Bruno_Texto_3:
	.string "BRUNO: It seems you haven't understood\n"
	.string "me, KOGA, it's not about whether they\l"
	.string "want to be affiliated or not, anyone\l"
	.string "showing any sign of collaboration with\l"
	.string "those criminals must face the law, and\l"
	.string "coincidentally, here in FUCHSIA, the\l"
	.string "main focus of insurgents, by not doing\l"
	.string "anything about it, you will be treated\l"
	.string "as guilty, KOGA.$"

Route15_Koga_Bruno_Texto_4:
	.string "KOGA: Don't do this to me, BRUNO, you\n"
	.string "know that after AGATHA's retirement,\l"
	.string "you'll move up a notch within the ELITE\l"
	.string "4, and the vacant spot will be mine.$"

Route15_Koga_Bruno_Texto_5:
	.string "BRUNO: That is what I am worried about,\n"
	.string "someone displaying such an inability to\l"
	.string "maintain order and discipline in\l"
	.string "FUCHSIA shouldn't be part of KANTO's\l"
	.string "ELITE, or even worse, do you benefit\l"
	.string "from keeping those bikers there\l"
	.string "because, deep down, you support them,\l"
	.string "don't you?$"

Route15_Koga_Bruno_Texto_6:
	.string "KOGA: It is not a crime to let the\n"
	.string "people express their ideas, BRUNO.$"

Route15_Koga_Bruno_Texto_7:
	.string "BRUNO: For now…{PAUSE 45} Fortunately for you,\n"
	.string "you can wash your hands of this whole\l"
	.string "situation, an ELITE like me doesn't come\l"
	.string "to a place like this unless there's a\l"
	.string "significant reason…$"

Route15_Koga_Bruno_Texto_8:
	.string "BRUNO: …{PAUSE 45} acting under direct LANCE\n"
	.string "orders to enter at the CYCLING ROAD\l"
	.string "and clean it of all those who are\l"
	.string "against our government, they will get\l"
	.string "arrested and will be jailed immediately.$"

Route15_Koga_Bruno_Texto_9:
.string "KOGA: {PAUSE 25}…{PAUSE 25}$"

Route15_Koga_Bruno_Texto_10:
	.string "BRUNO: Do not worry about the CYCLING\n"
	.string "ROAD, it will still have bikers…{PAUSE 25} loyal to\l"
	.string "us, you won't even need to explain\l"
	.string "something to anyone.$"

Route15_Koga_Bruno_Texto_11:
	.string "BRUNO: I have no more to say to you,\n"
	.string "KOGA, since you don't want to\l"
	.string "cooperate, at least stay away and do\l"
	.string "not hinder, have a nice day.$"

Route15_Koga_Bruno_Texto_12:
	.string "KOGA: That BRUNO…{PAUSE 35} since he joined the\n"
	.string "ELITE 4, his ego has grown too much,\l"
	.string "he's nothing like the person who used\l"
	.string "to lead the FIGHTING DOJO in SAFFRON…$"

Route15_Koga_Bruno_Texto_13:
	.string "{PLAYER}, am I wrong? It was you who\n"
	.string "captured the lost KANGASKHAN and\l"
	.string "saved the SAFARI ZONE business,\l"
	.string "GIOVANNI was not wrong when told me\l"
	.string "that I should trust in you, here you\l"
	.string "have a small present from me.$"

Route15_Koga_Bruno_Texto_14:
	.string "With these glasses equipped in any\n"
	.string "POKÉMON, their DARK moves power\l"
	.string "will be increased by 20%, if you have\l"
	.string "POKÉMON like HOUNDOOM or MURKROW will\l"
	.string "hit very strongly with DARK PULSE or\l"
	.string "NIGHT SLASH.$"

Route15_Koga_Bruno_Texto_15:
	.string "I was not lying to BRUNO when I told him\n"
	.string "that my unique concern has always been\l"
	.string "the region's welfare, the problem is\l"
	.string "that my welfare idea is totally far away\l"
	.string "from his one, and a dictature imposed by\l"
	.string "the force and also coming from an\l"
	.string "outsider like LANCE will never have my\l"
	.string "support…$"

Route15_Koga_Bruno_Texto_16:
	.string "BRUNO goes directly to CYCLING ROAD, he\n"
	.string "will try to persuade most of the bikers\l"
	.string "to switch sides, if he fails, he will use\l"
	.string "force to arrest all the bikers, if that\l"
	.string "happens, they are doomed, his POKÉMON\l"
	.string "are light-years ahead in both strength\l"
	.string "and level…$"

Route15_Koga_Bruno_Texto_17:
	.string "I can't be against LANCE for obvious\n"
	.string "reasons, but you, you {PLAYER} could\l"
	.string "face him! GIOVANNI said that you are\l"
	.string "one of the TRAINERS with the greatest\l"
	.string "potential and future, yes, BRUNO is part\l"
	.string "of the ELITE, but I doubt he'll use his\l"
	.string "best Pokémon, if anyone can stop him,\l"
	.string "it's you.$"

Route15_Koga_Bruno_Texto_18:
	.string "I will be at my GYM, {PLAYER},\n"
	.string "unfortunately I can't let you in, at\l"
	.string "least for now, however, I'll stay\l"
	.string "updated on everything occurring on the\l"
	.string "CYCLING ROAD, you can be sure about\l"
	.string "that.$"

Route15_Koga_Bruno_Texto_19:
.string "KOGA: I trust you, {PLAYER}.$"

Route15_Koga_Bruno_Move_1:
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_1.1:
walk_down
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_1.2:
walk_up
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_2:
face_left
step_end

Route15_Koga_Bruno_Move_3:
walk_in_place_up
step_end

Route15_Koga_Bruno_Move_4:
walk_in_place_down
step_end

Route15_Koga_Bruno_Move_5:
emote_exclamation_mark
step_end

Route15_Koga_Bruno_Move_6:
walk_left
walk_left
walk_left
step_end

Route15_Koga_Bruno_Move_7:
emote_exclamation_mark
face_right
step_end

Route15_Koga_Bruno_Move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route15_Koga_Bruno_Move_9:
face_right
step_end

Route15_Koga_Bruno_Move_10:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end
