Route49_MazeP2_MapScripts::
	.byte 0

Route49_MazeP2_2::
lock     
faceplayer     
msgbox Route49_MazeP2_Text2, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text2:
.string "La emoción decide, y la razón justifica.\n"
.string "¡Crees que fue obra de tu voluntad y no\l"
.string "es más que una ilusión!$"



Route49_MazeP2_3::
lock     
faceplayer     
msgbox Route49_MazeP2_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text3:
.string "Agota más hacer el esfuerzo para dejar\n"
.string "de hacer algo que estabas haciendo que\l"
.string "seguir haciendo algo que ya estabas\l"
.string "haciendo.$"



Route49_MazeP2_4::
lock     
faceplayer     
msgbox Route49_MazeP2_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text4:
.string "Bajo el pretexto de la igualdad, los\n"
.string "esclavos se agrupan en comunas de\l"
.string "poder para arrastrar a los superiores\l"
.string "hacia la mediocridad.$"



Route49_MazeP2_6::
lock     
faceplayer     
msgbox Route49_MazeP2_Text6, MSGBOX_DEFAULT
release     
end

Route49_MazeP2_Text6:
.string "Hace tiempo que perdimos todo contacto\n"
.string "con el resto de JOHTO. Incluso con las\l"
.string "otras dos pagodas. Antes, esta era\l"
.string "considerada la primera de las 4 pagodas\l"
.string "de la región, cuando TORRE LATÓN aún\l"
.string "estaba en pie.$"



Route49MazeP2_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_155, Route49MazeP2_Text_SabioIntro, Route49MazeP2_Text_SabioDefeated
	msgbox Route49MazeP2_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP2_EventScript_Sabio2::
	trainerbattle_single TRAINER_TRAINER_156, Route49MazeP2_Text_Sabio2Intro, Route49MazeP2_Text_Sabio2Defeated
	msgbox Route49MazeP2_Text_Sabio2PostBattle, MSGBOX_AUTOCLOSE
	end



Route49MazeP2Documento_100::
lock     
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
	.string "AGUA\n"
	.string "El SHELLDER adherido a SLOWBRO cobra\l"
	.string "conciencia propia después de su\l"
	.string "muerte, absorbiendo parte de sus\l"
	.string "habilidades. Como resultado: un\l"
	.string "híbrido entre CLOYSTER y SLOWBRO,\l"
	.string "ligeramente más poderoso que ambos\l"
	.string "POKÉMON marinos.$"



Route49MazeP2Documento_101::
lock     
showmonpic SPECIES_BOMUSHIKAA, 10, 3  
playmoncry SPECIES_SEALEO, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP2Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP2Documento_Text_101:
.string "BOMUSHIKAA:\p"
	.string "PS: 90\n"
	.string "ATAQUE: 65\l"
	.string "DEFENSA: 80\l"
	.string "ATAQUE ESPECIAL: 102\l"
	.string "DEFENSA ESPECIAL: 112\l"
	.string "VELOCIDAD: 80\l"
	.string "TOTAL: 529\p"
	.string "AGUA/FUEGO\n"
	.string "Pertenece a la misma rama familiar de\l"
	.string "DEWGON y WALREIN, aunque intercambia\l"
	.string "el TIPO HIELO por el FUEGO. Su\l"
	.string "HABILIDAD le hará inmune al propio TIPO\l"
	.string "AGUA, al tiempo que es capaz de lanzar\l"
	.string "poderosos movimientos de FUEGO.$"



Route49MazeP2Documento_102::
lock     
showmonpic SPECIES_MADAAMU, 10, 3  
playmoncry SPECIES_SIRFETCHD, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP2Documento_Text_102, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP2Documento_Text_102:
.string "MADAAMU:\p"
	.string "PS: 72\n"
	.string "ATAQUE: 145\l"
	.string "DEFENSA: 95\l"
	.string "ATAQUE ESPECIAL: 63\l"
	.string "DEFENSA ESPECIAL: 82\l"
	.string "VELOCIDAD: 85\l"
	.string "TOTAL: 542\p"
	.string "NORMAL/VOLADOR\n"
	.string "El GRAN MAESTRO del CARBÓN en AZALEA\l"
	.string "solía contar con uno. Sus movimientos\l"
	.string "son tan precisos y armoniosos que\l"
	.string "logra traspasar la barrera del TIPO\l"
	.string "FANTASMA, golpeándolos con su temible\l"
	.string "ATAQUE FÍSICO y movimientos LUCHA o\l"
	.string "NORMAL.$"
