Route49_MazeP3_MapScripts::
	.byte 0

Route49_MazeP3_3::
lock     
faceplayer     
msgbox Route49_MazeP3_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text3:
	.string "Frugality strengthens the spirit in the\n"
	.string "pursuit of virtue.$"

Route49_MazeP3_2::
lock     
faceplayer     
msgbox Route49_MazeP3_Text2, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text2:
	.string "The GOLDEN STONE reacts to many\n"
	.string "classic JOHTO POKÉMON, and some\l"
	.string "others: NOCTOWL, URSARING, GIRAFARIG,\l"
	.string "STANTLER, BISHARP, PRIMEAPE, or\l"
	.string "DUNSPARCE are among them.$"



Route49_MazeP3_4::
lock     
faceplayer     
msgbox Route49_MazeP3_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text4:
	.string "The upper limit for POKÉMON is higher\n"
	.string "now, only the wisest and most\l"
	.string "experienced trainers may have noticed\l"
	.string "it. Have you felt it yet?$"



Route49_MazeP3_5::
lock     
faceplayer     
msgbox Route49_MazeP3_Text5, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text5:
	.string "Out of fear of making mistakes, they\n"
	.string "commit the worst error: not affording\l"
	.string "themselves the opportunity to be right\l"
	.string "or wrong.$"



Route49_MazeP3_8::
lock     
faceplayer     
msgbox Route49_MazeP3_Text8, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text8:
	.string "Your attitude transcends everything\n"
	.string "else. It can shift seemingly inevitable\l"
	.string "trajectories.$"




Route49_MazeP3_9::
lock     
faceplayer     
msgbox Route49_MazeP3_Text9, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text9:
	.string "ENTEI, RAIKOU & SUICUNE. Their names\n"
	.string "are not a casualty, just an extension\l"
	.string "of other POKÉMON, older ones.$"



Route49MazeP3_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_191, Route49MazeP3_Text_SabioIntro, Route49MazeP3_Text_SabioDefeated
	msgbox Route49MazeP3_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP3_EventScript_Sabio2::
	trainerbattle_single TRAINER_TRAINER_192, Route49MazeP3_Text_Sabio2Intro, Route49MazeP3_Text_Sabio2Defeated
	msgbox Route49MazeP3_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP3Documento_100::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando   
showmonpic SPECIES_EN, 10, 3  
playmoncry SPECIES_FLAREON, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP3Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP3Documento_Text_100:
.string "EN:\p"
	.string "HP: 75\n"
	.string "ATTACK: 152\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 116\l"
	.string "SPECIAL DEFENSE: 137\l"
	.string "SPEED: 85\l"
	.string "TOTAL: 635\p"
	.string "TYPE: FIRE\n"
	.string "ABILITY: SHEER FORCE\l"
	.string "A millennial POKÉMON, passed down from\l"
	.string "generation to generation to the GRAND\l"
	.string "MASTERr of the third pagoda in JOHTO.\l"
	.string "It was once a FLAREON, whose bond with\l"
	.string "its TRAINER reached perfect\l"
	.string "equilibrium.$"



Route49MazeP3Documento_101::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_SUI, 10, 3  
playmoncry SPECIES_VAPOREON, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP3Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP3Documento_Text_101:
.string "SUI:\p"
	.string "HP: 152\n"
	.string "ATTACK: 85\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 137\l"
	.string "SPECIAL DEFENSE: 116\l"
	.string "SPEED: 75\l"
	.string "TOTAL: 635\p"
	.string "TYPE: WATER\n"
	.string "ABILITY: MAGIC GUARD\l"
	.string "A millennial POKÉMON, passed down from\l"
	.string "generation to generation to the GRAND\l"
	.string "MASTER of the third pagoda in JOHTO. It\l"
	.string "was once a VAPOREON, whose bond with\l"
	.string "its trainer reached perfect equilibrium.$"



Route49MazeP3Documento_102::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_RAI, 10, 3  
playmoncry SPECIES_RAIKOU, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP3Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP3Documento_Text_102:
.string "RAI:\p"
	.string "HP: 75\n"
	.string "ATTACK: 85\l"
	.string "DEFENSE: 70\l"
	.string "SPECIAL ATTACK: 137\l"
	.string "SPECIAL DEFENSE: 116\l"
	.string "SPEED: 152\l"
	.string "TOTAL: 635\p"
	.string "TYPE: ELECTRIC\n"
	.string "ABILITY: NO GUARD\l"
	.string "A millennial POKÉMON, passed down from\l"
	.string "generation to generation to the GRAND\l"
	.string "MASTER of the third pagoda in JOHTO. It\l"
	.string "was once a JOLTEON, whose bond with its\l"
	.string "trainer reached perfect equilibrium.$"

Route49_MazeP3_Encuentro_Eusine::
lock
applymovement 10, Route49_MazeP3_Encuentro_Eusine_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP3_Encuentro_Eusine_Move_1
waitmovement 0x0
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, Route49_MazeP3_Encuentro_Eusine_Move_4
waitmovement 0x0
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_3 MSGBOX_AUTOCLOSE
applymovement 10, Route49_MazeP3_Encuentro_Eusine_Move_2
waitmovement 0x0
delay 15
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 10, Route49_MazeP3_Encuentro_Eusine_Move_4
waitmovement 0x0
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_MazeP3_Encuentro_Eusine_Texto_8 MSGBOX_AUTOCLOSE
applymovement 10, Route49_MazeP3_Encuentro_Eusine_Move_3.1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
removeobject 10
setvar VAR_VERDANTURF_TOWN_STATE, 16
release
end

Route49_MazeP3_Encuentro_Eusine_Move_3.1:
walk_right
walk_up
walk_right
walk_right
walk_up
step_end

Route49_MazeP3_Encuentro_Eusine_Move_3:
walk_up
step_end

Route49_MazeP3_Encuentro_Eusine_Move_4:
face_up
step_end

Route49_MazeP3_Encuentro_Eusine_Move_1:
face_right
step_end

Route49_MazeP3_Encuentro_Eusine_Move_2:
walk_in_place_left
step_end

Route49_MazeP3_Encuentro_Eusine_Texto_1:
	.string "EUSINE: You too have managed to reach\n"
	.string "here.$"

Route49_MazeP3_Encuentro_Eusine_Texto_2:
	.string "Your friend is battling our master, but\n"
	.string "don't worry, he'll battle you too.$"

Route49_MazeP3_Encuentro_Eusine_Texto_3:
	.string "I didn't tell you before because I\n"
	.string "thought we wouldn't see each other\l"
	.string "again, at least not like this, with you\l"
	.string "at the top of this place, but…$"

Route49_MazeP3_Encuentro_Eusine_Texto_4:
	.string "One of the reasons I'm so interested in\n"
	.string "the LEGENDARY BEATS is because our\l"
	.string "GRAND MASTER has 3 POKÉMON, much older\l"
	.string "but with similar characteristics.$"

Route49_MazeP3_Encuentro_Eusine_Texto_5:
	.string "In recent weeks, he witnessed how the\n"
	.string "power of these POKÉMON increased,\l"
	.string "after remaining unchanged for\l"
	.string "centuries, in a supposed state of\l"
	.string "perfection.$"

Route49_MazeP3_Encuentro_Eusine_Texto_6:
	.string "He thinks that the earthquake that\n"
	.string "occurred at the RUINS OF ALPH, and what\l"
	.string "happened there that day, are the cause\l"
	.string "of this event.$"

Route49_MazeP3_Encuentro_Eusine_Texto_7:
	.string "Perhaps your presence here could shed\n"
	.string "some light on these matters, don't you\l"
	.string "think so?$"

Route49_MazeP3_Encuentro_Eusine_Texto_8:
.string "We will wait for you upstairs.$"

