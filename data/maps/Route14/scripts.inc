Route14_MapScripts::
	.byte 0

Route14_1::
end


Route14_2::
end


Route14_3::
end



Route14_5::
end


Route14_6::
end


Route14_7::
end


Route14_8::
end


Route14_9::
end


Route14_10::
end


Route14_11::
end


Route14_12::
end


Route14_13::
end


Route14_14::
end



Route14_EventScript_Ornitologo::
	trainerbattle_single TRAINER_SHELBY_2, Route14_Text_OrnitologoIntro, Route14_Text_OrnitologoDefeated
	msgbox Route14_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_SHELBY_3, Route14_Text_Ornitologo2Intro, Route14_Text_Ornitologo2Defeated
	msgbox Route14_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo3::
	trainerbattle_single TRAINER_SHELBY_4, Route14_Text_Ornitologo3Intro, Route14_Text_Ornitologo3Defeated
	msgbox Route14_Ornitologo3PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo4::
	trainerbattle_single TRAINER_SHELBY_5, Route14_Text_Ornitologo4Intro, Route14_Text_Ornitologo4Defeated
	msgbox Route14_Ornitologo4PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo5::
	trainerbattle_single TRAINER_ISABEL_3, Route14_Text_Ornitologo5Intro, Route14_Text_Ornitologo5Defeated
	msgbox Route14_Ornitologo5PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Ornitologo6::
	trainerbattle_single TRAINER_ISABEL_4, Route14_Text_Ornitologo6Intro, Route14_Text_Ornitologo6Defeated
	msgbox Route14_Ornitologo6PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista::
	trainerbattle_single TRAINER_BERNIE_4, Route14_Text_MotoristaIntro, Route14_Text_MotoristaDefeated
	msgbox Route14_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_2, Route14_Text_Motorista2Intro, Route14_Text_Motorista2Defeated
	msgbox Route14_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista3::
	trainerbattle_single TRAINER_BERNIE_5, Route14_Text_Motorista3Intro, Route14_Text_Motorista3Defeated
	msgbox Route14_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Motorista4::
	trainerbattle_single TRAINER_BERNIE_3, Route14_Text_Motorista4Intro, Route14_Text_Motorista4Defeated
	msgbox Route14_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route14Documento_100::
msgbox Route14Documento_Text_100, MSGBOX_SIGN   
end

Route14Documento_Text_100:
	.string "ROUTE 14\n"
	.string "West to FUCHSIA CITY$"



Route14_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_5, Route14_Text_Pareja1Intro, Route14_Text_Pareja1Defeated
	msgbox Route14_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route14_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_5, Route14_Text_Pareja2Intro, Route14_Text_Pareja2Defeated
	msgbox Route14_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route14_Combate_Azul_Centro::
applymovement OBJ_EVENT_ID_PLAYER, Route14_Combate_Azul_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, Route14_Combate_Azul_Move_2
waitmovement 0x0
applymovement 4, Route14_Combate_Azul_Move_3
waitmovement 0x0
goto Route14_Combate_Azul

Route14_Combate_Azul_Izq::
applymovement OBJ_EVENT_ID_PLAYER, Route14_Combate_Azul_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, Route14_Combate_Azul_Move_2
waitmovement 0x0
applymovement 4, Route14_Combate_Azul_Move_3.1
waitmovement 0x0
goto Route14_Combate_Azul

Route14_Combate_Azul_Der::
applymovement OBJ_EVENT_ID_PLAYER, Route14_Combate_Azul_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, Route14_Combate_Azul_Move_2
waitmovement 0x0
applymovement 4, Route14_Combate_Azul_Move_3.2
waitmovement 0x0
goto Route14_Combate_Azul

Route14_Combate_Azul::
msgbox Route14_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_4.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route14_Combate_Azul_Texto_5 MSGBOX_DEFAULT
delay 20
applymovement 4, Route14_Combate_Azul_Move_4.1
waitmovement 0x0
delay 10
msgbox Route14_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4.2
waitmovement 0x0
delay 10
msgbox Route14_Combate_Azul_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_RIVAL
msgbox Route14_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AZUL_2, Route14_Combate_Azul_Texto_8
msgbox Route14_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Route14_Combate_Azul_Texto_10.1 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 4
waitfieldeffect FLDEFF_NPCFLY_OUT
delay 15
playse SE_PIN
applymovement 3, Route14_Combate_Azul_Move_2
waitmovement 0x0
waitse
msgbox Route14_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 64
release
end

Route14_Combate_Azul_Move_4.1:
face_left
step_end

Route14_Combate_Azul_Move_4.2:
walk_in_place_up
step_end

Route14_Combate_Azul_Texto_1:
	.string "Finally you are here, {PLAYER}.\p"
	.string "I was waiting for you.$"

Route14_Combate_Azul_Texto_2:
	.string "I know that I should be on way to ONE\n"
	.string "ISLAND to fight MOLTRES, but let's be\l"
	.string "honest, I will finish that mission much\l"
	.string "faster than you two, my BLASTOISE is a\l"
	.string "perfect counter for that POKÉMON, even\l"
	.string "if it's a LEGENDARY…$"

Route14_Combate_Azul_Texto_3:
	.string "ANDRA should keep an eye out, your\n"
	.string "GOLBATS would do nothing against a\l"
	.string "ZAPDOS, I hope the strat that you\l"
	.string "thought about, would work.$"

Route14_Combate_Azul_Texto_3.1:
	.string "{PAUSE 15}…{PAUSE 15}$"

Route14_Combate_Azul_Texto_4:
	.string "My grandpa used to tell me about\n"
	.string "LEGENDARY POKÉMON as untouchable\l"
	.string "beasts, it wasn't advisable to tempt\l"
	.string "the favored children of nature.$"
	
Route14_Combate_Azul_Texto_4.1:
	.string "They're part of a separate world, their\n"
	.string "origins are different from those of a\l"
	.string "common POKÉMON, and their genes seem\l"
	.string "to be polished by the same creator,\l"
	.string "compared to the mediocrity of the\l"
	.string "rest-.$"

Route14_Combate_Azul_Texto_5:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route14_Combate_Azul_Texto_6:
.string "What nonsense.\p"
	.string "Why do you want to know about these\n"
	.string "incredible POKÉMON, if you're going\l"
	.string "to stay hidden, without exploring\l"
	.string "what you and your team are capable\l"
	.string "of against those supposed superior\l"
	.string "beasts?$"

Route14_Combate_Azul_Texto_6.1:
	.string "What better way is there to admire\n"
	.string "the SACRED BIRDS than to challenge\l"
	.string "them with your own team?\p"
    .string "More than the rest, it's precisely\n"
	.string "the mystical and sacred what most\l"
	.string "deserves to be pushed to the limit.$"

Route14_Combate_Azul_Texto_7:
.string "This logic could be applied for\n"
	.string "TRAINERS, too. Don't you think so?$"

Route14_Combate_Azul_Texto_7.1:
	.string "Since the SS. ANNE events, I'm\n"
	.string "still confused about your real\l"
	.string "trainerclass, HIGH RANK GRUNT.$"

Route14_Combate_Azul_Texto_7.2:
	.string "Since then, many things just happened,\n"
	.string "and my team is completely different.\p"
	.string "Now, show me the way you act, your\n"
	.string "very nature!$"

Route14_Combate_Azul_Texto_8:
	.string "So this team is not good enough yet.$"

Route14_Combate_Azul_Texto_9:
	.string "Bit by bit, you're carving out a spot\n"
	.string "among the strongest ROCKETs, huh?\p"
	.string "I only see ARCHER and GIOVANNI as\n"
	.string "the only ROCKETs who could clearly\l"
	.string "make you bite the dust.$"

Route14_Combate_Azul_Texto_10:
	.string "We already have wasted a lot of time, I\n"
	.string "will go to KNOT ISLAND at once, that\l"
	.string "MOLTRES better be resistant to a\l"
	.string "super-effective SURF from an ASSAULT\l"
	.string "VEST BLASTOISE, which'll withstand\l"
	.string "any special Fire-type.$"
	
Route14_Combate_Azul_Texto_10.1:
	.string "Not any divinity nor top genetics\n"
	.string "will save MOLTRES from this fact.$"

Route14_Combate_Azul_Texto_11:
	.string "BIRD KEEPER: That was a real PIDGEOT!?\p"
	.string "I saw the majestic wings of the best\n"
	.string "non-legendary bird in the region!\p"
	.string "Wow!$"

Route14_Combate_Azul_Move_1:
walk_in_place_down
step_end

Route14_Combate_Azul_Move_2:
emote_exclamation_mark
step_end

Route14_Combate_Azul_Move_3:
walk_right
walk_right
walk_up
walk_up
step_end

Route14_Combate_Azul_Move_3.1:
walk_right
walk_up
walk_up
step_end

Route14_Combate_Azul_Move_3.2:
walk_right
walk_up
walk_right
walk_right
walk_up
step_end

Route14_Combate_Azul_Move_4:
walk_in_place_right
delay_8
walk_in_place_up
step_end
