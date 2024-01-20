Route16_MapScripts::
	.byte 0

Route16_1::
end


Route16_2::
end


Route16_3::
end


Route16_4::
end


Route16_5::
end


Route16_6::
end


Route16_7::
end


Route16_8::
end


Route16_9::
end


Route16_10::
end


Route16_11::
lock     
faceplayer     
msgbox Route16_Text_11, MSGBOX_DEFAULT
release     
end

Route16_Text_11:
.string "That HITMONLEE hit so hard…$"


Route16_12::
lock         
msgbox Route16_Text_12, MSGBOX_SIGN
release     
end

Route16_Text_12:
	.string "He defeated all of us just using two\n"
	.string "POKÉMON…$"



Route16_13::
lock        
msgbox Route16_Text_13, MSGBOX_SIGN
release     
end

Route16_Text_13:
	.string "Losers… No one that defies an ELITE 4\n"
	.string "member can come out well…$"


Route16_14::
lock         
msgbox Route16_Text_14, MSGBOX_SIGN
release     
end

Route16_Text_14:
	.string "So this is the ELITE 4 real power…$"

Route16_15::
lock        
msgbox Route16_Text_15, MSGBOX_SIGN
release     
end

Route16_Text_15:
	.string "You can only confess… or go to prison.$"


Route16_16::
lock         
msgbox Route16_Text_16, MSGBOX_SIGN
release     
end

Route16_Text_16:
	.string "We have them where we wanted them…$"


Route16_17::
lock         
msgbox Route16_Text_17, MSGBOX_SIGN
release     
end

Route16_Text_17:
	.string "Damn it… My WEEZING was not even able\n"
	.string "to touch that big steel snake…$"



Route16_EventScript_Motorista::
	trainerbattle_single TRAINER_JACKI_4, Route16_Text_MotoristaIntro, Route16_Text_MotoristaDefeated
	msgbox Route16_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista2::
	trainerbattle_single TRAINER_AXLE, Route16_Text_Motorista2Intro, Route16_Text_Motorista2Defeated
	msgbox Route16_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista3::
	trainerbattle_single TRAINER_JEFF, Route16_Text_Motorista3Intro, Route16_Text_Motorista3Defeated
	msgbox Route16_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista4::
	trainerbattle_single TRAINER_JACKI_3, Route16_Text_Motorista4Intro, Route16_Text_Motorista4Defeated
	msgbox Route16_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista5::
	trainerbattle_single TRAINER_JACKI_2, Route16_Text_Motorista5Intro, Route16_Text_Motorista5Defeated
	msgbox Route16_Motorista5PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista6::
	trainerbattle_single TRAINER_DALTON_5, Route16_Text_Motorista6Intro, Route16_Text_Motorista6Defeated
	msgbox Route16_Motorista6PostBattle, MSGBOX_AUTOCLOSE
	end



Route16Documento_100::
msgbox Route16Documento_Text_100, MSGBOX_SIGN   
end

Route16Documento_Text_100:
.string "ROUTE 16\n"
    .string "CELADON CITY - FUCHSIA CITY$"



Route16Documento_101::
msgbox Route16Documento_Text_101, MSGBOX_SIGN   
end

Route16Documento_Text_101:
	.string "Enjoy the slope!\n"
    .string "CYCLING ROAD$"



Route16_EventScript_Pareja1::
	trainerbattle_single TRAINER_HUEY, Route16_Text_Pareja1Intro, Route16_Text_Pareja1Defeated
	msgbox Route16_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Pareja2::
	trainerbattle_single TRAINER_HUEY, Route16_Text_Pareja2Intro, Route16_Text_Pareja2Defeated
	msgbox Route16_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route16_Combate_Bruno::
playse MUS_RG_ROCKET_HIDEOUT
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_1
waitmovement 0x0
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 13, Route16_Combate_Bruno_Move_5
applymovement 17, Route16_Combate_Bruno_Move_5
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BRUNO_1, Route16_Combate_Bruno_Texto_10
playse MUS_RG_ROCKET_HIDEOUT
msgbox Route16_Combate_Bruno_Texto_11 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_HO_OH
fadescreen 1
delay 20
removeobject 13
removeobject 15
removeobject 16
fadescreen 0
playse MUS_RG_ROUTE3
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_7
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_14 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM04_STRENGTH
waitfanfare
delay 20
msgbox Route16_Combate_Bruno_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
fadescreen 1
delay 20
removeobject 17
removeobject 11
removeobject 12
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 66
release
end

Route16_Combate_Bruno_arriba::
playse MUS_RG_ROCKET_HIDEOUT
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_1.1
waitmovement 0x0
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route16_Combate_Bruno_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_4.1
waitmovement 0x0
playse SE_PIN
applymovement 13, Route16_Combate_Bruno_Move_5
applymovement 17, Route16_Combate_Bruno_Move_5
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BRUNO_1, Route16_Combate_Bruno_Texto_10
playse MUS_RG_ROCKET_HIDEOUT
msgbox Route16_Combate_Bruno_Texto_11 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_HO_OH
fadescreen 1
delay 20
removeobject 13
removeobject 15
removeobject 16
fadescreen 0
playse MUS_RG_ROUTE3
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_7
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_14 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM04_STRENGTH
waitfanfare
delay 20
msgbox Route16_Combate_Bruno_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
fadescreen 1
delay 20
removeobject 17
removeobject 11
removeobject 12
removeobject 14
fadescreen 0
setvar VAR_UNUSED_0x40F7, 66
release
end

Route16_Combate_Bruno_Texto_1:
	.string "BRUNO: Game over bikers, it was so\n"
	.string "stupid of you thinking that your poor\l"
	.string "POISON type POKÉMON could even touch\l"
	.string "my powerful steel, even more stupid\l"
	.string "believing your FIGHT type were enough\l"
	.string "good rivals for mine, now that you are\l"
	.string "calmed down and you have no more left\l"
	.string "POKÉMON I will tell you what are we\l"
	.string "going to do now…$"

Route16_Combate_Bruno_Texto_2:
	.string "You are going to talk to the rest of\n"
	.string "your colleagues and convincing them\l"
	.string "that the LANCE government is the good\l"
	.string "future for KANTO, the TEAM ROCKET will\l"
	.string "be doomed, and you will obey LANCE,\l"
	.string "giving us all the TEAM ROCKET info\l"
	.string "about that you know, if you do it all\l"
	.string "your faults will be forgiven and you\l"
	.string "could keep walking around here,\l"
	.string "otherwise you don't want to…$"

Route16_Combate_Bruno_Texto_3:
	.string "You can be sure that I will destroy one\n"
	.string "by one all of the bikers that I find all\l"
	.string "around KANTO, and I will turn this place\l"
	.string "into an empty plain.$"

Route16_Combate_Bruno_Texto_4:
	.string "All of you will be in prison, and I will\n"
	.string "take over that the popular opinion\l"
	.string "baits you as does with the TEAM ROCKET,\l"
	.string "it's your choice.$"

Route16_Combate_Bruno_Texto_5:
	.string "We will never follow orders from someone\n"
	.string "that is an outsider as LANCE!$"

Route16_Combate_Bruno_Texto_6:
	.string "BRUNO: So I will take it as a no, you\n"
	.string "have chosen the path of pain, GUARDS!\l"
	.string "Prepare the..!$"

Route16_Combate_Bruno_Texto_7:
	.string "BRUNO: Well well, seems like you will\n"
	.string "have company on your journeys to\l"
	.string "prison, and furthermore a HIGH RANK\l"
	.string "ROCKET from what I can see, I'm sure we\l"
	.string "can extract valuable information from\l"
	.string "you.$"

Route16_Combate_Bruno_Texto_8:
	.string "All of you, criminals, are the same, you\n"
	.string "think you could go somewhere just by\l"
	.string "your instinct and feelings, so fragile\l"
	.string "and changing.$"

Route16_Combate_Bruno_Texto_9:
	.string "BRUNO: I will show my overwhelming\n"
	.string "power of my POKÉMON trained through\l"
	.string "blood, sweat, and tears, something none\l"
	.string "of you even know the meaning of, it\l"
	.string "won't take more than 3 POKÉMON to crush\l"
	.string "your entire team from existence!$"

Route16_Combate_Bruno_Texto_10:
	.string "It can't be! Where does that power come\n"
	.string "from!?$"

Route16_Combate_Bruno_Texto_11:
	.string "BRUNO: Mmphff! I should have brought\n"
	.string "my loyal MACHAMP after all! What a shame\l"
	.string "to lose against a ROCKET, trust me that\l"
	.string "you will pay for this, you have been\l"
	.string "saved only by being superior to the\l"
	.string "mediocrity that I expected here!$"

Route16_Combate_Bruno_Texto_12:
	.string "BRUNO: Not even a word of this to\n"
	.string "LANCE, we aborted the mission due to\l"
	.string "technical problems at the last moment.$"

Route16_Combate_Bruno_Texto_13:
	.string "BRUNO: As for you, ROCKET... We'll meet\n"
	.string "again…$"

Route16_Combate_Bruno_Texto_14:
	.string "I can't believe what I saw yet! It was\n"
	.string "the most impressive fight that I had\l"
	.string "seen in my entire life, you teached a\l"
	.string "lesson to an ELITE 4 member!$"

Route16_Combate_Bruno_Texto_15:
	.string "And it's not just that, you've saved\n"
	.string "this place from also being swallowed by\l"
	.string "this damn hidden dictature… our loyalty\l"
	.string "to TEAM ROCKET has only grown after\l"
	.string "this.$"

Route16_Combate_Bruno_Texto_16:
	.string "I know that this is not a lot in\n"
	.string "comparison to what you just did, we\l"
	.string "would like that you have this, it is one\l"
	.string "of our best acquisitions, we snatched\l"
	.string "it from that awkward safari guard who\l"
	.string "can't even talk properly.$"

Route16_Combate_Bruno_Texto_17:
	.string "Now we are gonna head out… we will keep\n"
	.string "fighting to see this region in the hands\l"
	.string "that it should be.$"

Route16_Combate_Bruno_Move_1:
walk_in_place_up
step_end

Route16_Combate_Bruno_Move_1.1:
walk_in_place_down
step_end

Route16_Combate_Bruno_Move_2:
walk_in_place_right
step_end

Route16_Combate_Bruno_Move_3:
walk_in_place_left
step_end

Route16_Combate_Bruno_Move_4:
walk_up
face_left
step_end

Route16_Combate_Bruno_Move_4.1:
walk_down
face_left
step_end

Route16_Combate_Bruno_Move_5:
emote_exclamation_mark
step_end

Route16_Combate_Bruno_Move_6:
face_left
step_end

Route16_Combate_Bruno_Move_7:
face_right
step_end

Route16_Combate_Bruno_Move_8:
walk_in_place_right
walk_in_place_left
step_end
