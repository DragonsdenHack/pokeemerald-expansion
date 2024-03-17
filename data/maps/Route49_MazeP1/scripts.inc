Route49_MazeP1_MapScripts::
	.byte 0

Route49_MazeP1_2::
lock     
faceplayer     
msgbox Route49_MazeP1_Text2, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text2:
	.string "The GOLDEN STONE… So, you managed to\n"
	.string "get one? It responds to specific JOHTO\l"
	.string "POKÉMON that used to evolve solely\l"
	.string "through exposure to an environment\l"
	.string "that no longer exists, not even here.$"



Route49_MazeP1_3::
lock     
faceplayer     
msgbox Route49_MazeP1_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text3:
	.string "We work too hard, we try with too much\n"
	.string "fervor, but the secret of fulfillment is\l"
	.string "there, staring us in the face.$"



Route49_MazeP1_4::
lock     
faceplayer     
msgbox Route49_MazeP1_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text4:
	.string "You two are good, but you could be\n"
	.string "magnificent, you and your friend. You\l"
	.string "still have a long way to go.$"



Route49_MazeP1_5::
lock     
faceplayer     
msgbox Route49_MazeP1_Text5, MSGBOX_DEFAULT
release     
end

Route49_MazeP1_Text5:
	.string "Never was the imperial eagle so foolish\n"
	.string "as to heed the teachings of the filthy\l"
	.string "raven…$"



Route49MazeP1_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_187, Route49MazeP1_Text_SabioIntro, Route49MazeP1_Text_SabioDefeated
	msgbox Route49MazeP1_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP1_EventScript_Sabio2::
	trainerbattle_single TRAINER_TRAINER_188, Route49MazeP1_Text_Sabio2Intro, Route49MazeP1_Text_Sabio2Defeated
	msgbox Route49MazeP1_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP1Documento_100::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_IKARY, 10, 3  
playmoncry SPECIES_BARRASKEWDA, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP1Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP1Documento_Text_100:
.string "IKARY:\p"
	.string "HP: 65\n"
	.string "ATTACK: 125\l"
	.string "DEFENSE: 95\l"
	.string "SPECIAL ATTACK: 35\l"
	.string "SPECIAL DEFENSE: 75\l"
	.string "SPEED: 95\l"
	.string "TOTAL: 490\p"
	.string "TYPE: WATER/STEEL\n"
	.string "ABILITY: INFILTRATOR\l"
	.string "It's related to the evolutionary line of\l"
	.string "CARVANHA, though its brain is far more\l"
	.string "primitive. Its STEEL typing makes it a\l"
	.string "fearsome adversary. It'll face any\l"
	.string "challenger with complete audacity,\l"
	.string "heedless of consequences or anything\l"
	.string "at stake, which is why most tend to\l"
	.string "clear its path.$"



Route49MazeP1Documento_101::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_PURAKKUSU, 10, 3  
playmoncry SPECIES_PINSIR, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP1Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP1Documento_Text_101:
.string "PURAKKUSU:\p"
	.string "HP: 85\n"
	.string "ATTACK: 135\l"
	.string "DEFENSE: 110\l"
	.string "SPECIAL ATTACK: 45\l"
	.string "SPECIAL DEFENSE: 80\l"
	.string "SPEED: 95\l"
	.string "TOTAL: 550\p"
	.string "TYPE: BUG/POISON\n"
	.string "ABILITY: INTIMIDATE\l"
	.string "From the same family as PINSIR, it's\l"
	.string "believed to be an ancient adaptation\l"
	.string "that tilted the PINSIR-HERACROSS\l"
	.string "rivalry, due to its increased physical\l"
	.string "power and acquisition of INTIMIDATE as\l"
	.string "an ability. However, most PINSIR\l"
	.string "couldn't sustain this adaptation in\l"
	.string "their bodies and ended up going\l"
	.string "extinct, with only a few remaining in\l"
	.string "very specific areas.$"
