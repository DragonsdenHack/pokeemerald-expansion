Route49_MazeP2_MapScripts::
	.byte 0

Route49_MazeP2_2::
lock     
faceplayer     
msgbox Route49_MazeP2_Text2, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text2:
	.string "The emotion decides, and reason\n"
	.string "justifies. You think it was the work of\l"
	.string "your will, but it's nothing more than an\l"
	.string "illusion!$"



Route49_MazeP2_3::
lock     
faceplayer     
msgbox Route49_MazeP2_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text3:
	.string "Making the effort to stop doing\n"
	.string "something you were already doing is\l"
	.string "more exhausting than continuing to do\l"
	.string "something you were already doing.$"



Route49_MazeP2_4::
lock     
faceplayer     
msgbox Route49_MazeP2_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text4:
	.string "Under the pretext of equality, slaves\n"
	.string "gather in power communes to drag the\l"
	.string "superiors down to mediocrity.$"



Route49_MazeP2_6::
lock     
faceplayer     
msgbox Route49_MazeP2_Text6, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text6:
	.string "We lost all contact with the rest of\n"
	.string "JOHTO long ago. Even with the other two\l"
	.string "towers. Previously, this was considered\l"
	.string "the first of the 4 towers in the region\l"
	.string "when BRASS TOWER was still standing.$"



Route49MazeP2_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_189, Route49MazeP2_Text_SabioIntro, Route49MazeP2_Text_SabioDefeated
	msgbox Route49MazeP2_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP2_EventScript_Sabio2::
	trainerbattle_single TRAINER_TRAINER_190, Route49MazeP2_Text_Sabio2Intro, Route49MazeP2_Text_Sabio2Defeated
	msgbox Route49MazeP2_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP2Documento_100::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando   
showmonpic SPECIES_TAABAN, 10, 3  
playmoncry SPECIES_SLOWKING, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP2Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP2Documento_Text_100:
.string "TAABAN:\p"
	.string "PS: 95\n"
	.string "ATAQUE: 95\l"
	.string "DEFENSA: 180\l"
	.string "ATAQUE ESPECIAL: 85\l"
	.string "DEFENSA ESPECIAL: 55\l"
	.string "VELOCIDAD: 30\l"
    .string "TOTAL: 540\p"
	.string "TIPO: AGUA/FANTASMA\n"
	.string "HABILIDAD: ENCADENADO\l"
	.string "El SHELLDER adherido a SLOWBRO cobra\l"
	.string "conciencia propia después de su\l"
	.string "muerte, absorbiendo parte de sus\l"
	.string "habilidades. Como resultado: un\l"
	.string "híbrido entre CLOYSTER y SLOWBRO,\l"
	.string "ligeramente más poderoso que ambos\l"
	.string "POKÉMON marinos.$"



Route49MazeP2Documento_101::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_BOMUSHIKAA, 10, 3  
playmoncry SPECIES_SEALEO, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP2Documento_Text_101:
.string "BOMUSHIKAA:\p"
	.string "HP: 90\n"
	.string "ATTACK: 65\l"
	.string "DEFENSE: 80\l"
	.string "SPECIAL ATTACK: 102\l"
	.string "SPECIAL DEFENSE: 112\l"
	.string "SPEED: 80\l"
	.string "TOTAL: 529\p"
	.string "TYPE: WATER/FIRE\n"
	.string "ABILITY: WATER ABSORB\l"
	.string "It belongs to the same family branch as\l"
	.string "DEWGONG and WALREIN, although it swaps\l"
	.string "the ICE TYPE for the FIRE. Its Ability\l"
	.string "grants immunity to the WATER TYPE,\l"
	.string "while also allowing it to unleash\l"
	.string "powerful FIRE TYPE moves.$"



Route49MazeP2Documento_102::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando 
showmonpic SPECIES_MADAAMU, 10, 3  
playmoncry SPECIES_SIRFETCHD, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP2Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP2Documento_Text_102:
.string "MADAAMU:\p"
	.string "HP: 77\n"
	.string "ATTACK: 145\l"
	.string "DEFENSE: 95\l"
	.string "SPECIAL ATTACK: 63\l"
	.string "SPECIAL DEFENSE: 82\l"
	.string "SPEED: 85\l"
	.string "TOTAL: 547\p"
	.string "TIPO: PLANTA/VOLADOR\n"
	.string "HABILIDAD: AFORTUNADO/INTIMIDACIÓN\l"
	.string "El GRAN MAESTRO del CARBÓN en AZALEA\l"
	.string "solía contar con uno. Sus movimientos\l"
	.string "son tan precisos y armoniosos que\l"
	.string "logra dar en el punto crítico del rival\l"
	.string "con una frecuencia asombrosa.$"
