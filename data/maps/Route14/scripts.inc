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
msgbox Route14_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox Route14_Combate_Azul_Texto_5 MSGBOX_DEFAULT
delay 20
msgbox Route14_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
playse MUS_RG_ENCOUNTER_RIVAL
msgbox Route14_Combate_Azul_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AZUL_2, Route14_Combate_Azul_Texto_8
msgbox Route14_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 4, Route14_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
delay 60
setflag FLAG_HIDE_ROUTE_120_GABBY_AND_TY_1
fadescreen 1
playse SE_M_FLY
delay 20
removeobject 4
delay 20
fadescreen 0
delay 15
playse SE_PIN
applymovement 3, Route14_Combate_Azul_Move_2
waitmovement 0x0
msgbox Route14_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 64
release
end

Route14_Combate_Azul_Texto_1:
	.string "BLUE: Finally you are here {PLAYER}, I\n"
	.string "was waiting for you.$"

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
	.string "thought about, would work,anyway my\l"
	.string "part seems the easiest.$"

Route14_Combate_Azul_Texto_4:
	.string "My grandpa used to tell me about\n"
	.string "LEGENDARY POKÉMON as untouchable\l"
	.string "beasts, it wasn't advisable to tempt\l"
	.string "the favored children of nature - they\l"
	.string "are part of a separate world, their\l"
	.string "origins are different from those of a\l"
	.string "common POKÉMON, and their genes seem\l"
	.string "to be polished by the same creator\l"
	.string "compared to the mediocrity of the\l"
	.string "rest-.$"

Route14_Combate_Azul_Texto_5:
.string "... ...$"

Route14_Combate_Azul_Texto_6:
	.string "What nonsense, why do you want to know\n"
	.string "that there are incredible POKÉMON if\l"
	.string "you're going to stay hidden without\l"
	.string "discovering what you and your team are\l"
	.string "capable of against those supposed\l"
	.string "superior beings, there is no better way\l"
	.string "to admire the birds than challenging\l"
	.string "them with your own team that. Despite\l"
	.string "not being born with their conditions,\l"
	.string "has become stronger thanks to your\l"
	.string "skill as a TRAINER to the point that\l"
	.string "they can compete on equal terms with\l"
	.string "the mystical and sacred of this region,\l"
	.string "symbolized in these LEGENDARY POKÉMON.$"

Route14_Combate_Azul_Texto_7:
	.string "I wanted to talk with you before this\n"
	.string "risky mission to be sure that you have\l"
	.string "been improving and the battle at\l"
	.string "SS.ANNE was not just coincidence.\l"
	.string "Since then, many things just happened,\l"
	.string "and my team is completely different.\l"
	.string "For your own shake, I hope yours\l"
	.string "has transformed as well!$"

Route14_Combate_Azul_Texto_8:
	.string "So this team is not good enough yet.$"

Route14_Combate_Azul_Texto_9:
	.string "Bit by bit, you're carving out a spot\n"
	.string "among the strongest ROCKETS, huh? I\l"
	.string "only see ARCHER and GIOVANNI as the\l"
	.string "TRAINERS who could clearly make you\l"
	.string "bite the dust.$"


Route14_Combate_Azul_Texto_10:
	.string "We already have wasted a lot of time, I\n"
	.string "will go to KNOT ISLAND at once, that\l"
	.string "MOLTRES better be resistant to a\l"
	.string "super-effective SURF from a BLASTOISE\l"
	.string "equipped with the ASSAULT VEST, which\l"
	.string "will withstand any special Fire-type\l"
	.string "move, not any divinity or supreme\l"
	.string "genetics will save it from this fact.$"

Route14_Combate_Azul_Texto_11:
	.string "BIRD KEEPER: That was a real PIDGEOT!\n"
	.string "And I've had the honor of witnessing\l"
	.string "the majestic wings of the best\l"
	.string "non-legendary bird in the region! I\l"
	.string "knew passing through this route was a\l"
	.string "good idea!$"

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
walk_in_place_up
step_end
