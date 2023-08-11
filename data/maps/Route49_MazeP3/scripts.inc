Route49_MazeP3_MapScripts::
	.byte 0

Route49_MazeP3_3::
lock     
faceplayer     
msgbox Route49_MazeP3_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text3:
.string "La frugalidad fortalece al espíritu en\n"
.string "la búsqueda de la virtud.$"

Route49_MazeP3_2::
lock     
faceplayer     
msgbox Route49_MazeP3_Text2, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text2:
.string "La PIEDRA DORADA reacciona ante\n"
	.string "muchos de los clásicos POKÉMON de\l"
	.string "JOHTO, y algunos otros: NOCTOWL,\l"
	.string "URSARING, GIRAFARIG, STANTLER,\l"
	.string "BISHARP, PRIMEAPE o DUNSPARCE son\l"
	.string "algunos de ellos.$"



Route49_MazeP3_4::
lock     
faceplayer     
msgbox Route49_MazeP3_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text4:
.string "El techo de los POKÉMON ahora es mayor,\n"
.string "solo los más sabios y experimentados lo\l"
.string "habrán notado. ¿Tú lo has sentido ya?$"



Route49_MazeP3_5::
lock     
faceplayer     
msgbox Route49_MazeP3_Text5, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text5:
.string "Por miedo a equivocarse cometen el peor\n"
.string "error: no darse el lujo de poder\l"
.string "acertar o equivocarse.$"



Route49_MazeP3_8::
lock     
faceplayer     
msgbox Route49_MazeP3_Text8, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text8:
.string "Tu actitud está por encima de todo lo\n"
.string "demás. Es capaz de cambiar tendencias\l"
.string "que parecen inescapables.$"




Route49_MazeP3_9::
lock     
faceplayer     
msgbox Route49_MazeP3_Text9, MSGBOX_DEFAULT
release     
end

Route49_MazeP3_Text9:
.string "ENTEI, RAIKOU y SUICUNE. Sus nombres\n"
.string "no son casualidad, son una extensión\l"
.string "de otros POKÉMON, más antiguos.$"



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
	.string "PS: 75\n"
	.string "ATAQUE: 152\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 137\l"
	.string "DEFENSA ESPECIAL: 116\l"
	.string "VELOCIDAD: 85\l"
	.string "TOTAL: 635\p"
	.string "FUEGO\n"
	.string "POKÉMON milenario, legado de generación\l"
	.string "en generación al GRAN MAESTRO del\l"
	.string "tercer pagoda de JOHTO. Una vez fue un\l"
	.string "FLAREON, cuyo vínculo con su\l"
	.string "ENTRENADOR alcanzó el equilibrio\l"
	.string "perfecto.$"



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
	.string "PS: 152\n"
	.string "ATAQUE: 70\l"
	.string "DEFENSA: 85\l"
	.string "ATAQUE ESPECIAL: 116\l"
	.string "DEFENSA ESPECIAL: 137\l"
	.string "VELOCIDAD: 75\l"
	.string "TOTAL: 635\p"
	.string "AGUA\n"
	.string "POKÉMON milenario, legado de generación\l"
	.string "en generación al GRAN MAESTRO del\l"
	.string "tercer pagoda de JOHTO. Una vez fue un\l"
	.string "VAPOREON, cuyo vínculo con su\l"
	.string "ENTRENADOR alcanzó el equilibrio\l"
	.string "perfecto.$"



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
	.string "PS: 75\n"
	.string "ATAQUE: 85\l"
	.string "DEFENSA: 70\l"
	.string "ATAQUE ESPECIAL: 137\l"
	.string "DEFENSA ESPECIAL: 116\l"
	.string "VELOCIDAD: 152\l"
	.string "TOTAL: 635\p"
	.string "ELÉCTRICO\n"
	.string "POKÉMON milenario, legado de generación\l"
	.string "en generación al GRAN MAESTRO del\l"
	.string "tercer pagoda de JOHTO. Una vez fue un\l"
	.string "JOLTEON, cuyo vínculo con su\l"
	.string "ENTRENADOR alcanzó el equilibrio\l"
	.string "perfecto.$"

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
applymovement 10, Route49_MazeP3_Encuentro_Eusine_Move_3
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_FALLARBOR_TOWN_BATTLE_TENT_SCOTT
removeobject 10
setvar VAR_VERDANTURF_TOWN_STATE, 10
release
end

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
.string "EUSINE: Tú también has podido llegar\n"
	.string "hasta arriba.$"

Route49_MazeP3_Encuentro_Eusine_Texto_2:
.string "Tu amiga está luchando contra nuestro\n"
	.string "maestro, pero no te preocupes, luchará\l"
	.string "contigo también.$"

Route49_MazeP3_Encuentro_Eusine_Texto_3:
.string "Antes no te lo dije, porque pensé que no\n"
	.string "volveríamos a vernos, al menos no de\l"
	.string "esta forma, contigo en la cima de este\l"
	.string "lugar, pero…$"

Route49_MazeP3_Encuentro_Eusine_Texto_4:
.string "Uno de los motivos por los que estoy\n"
	.string "tan interesado por los PERROS\l"
	.string "LEGENDARIOS, es el hecho de que\l"
	.string "nuestro GRAN MAESTRO cuenta con 3\l"
	.string "POKÉMON, mucho más antiguos, pero de\l"
	.string "características similares.$"

Route49_MazeP3_Encuentro_Eusine_Texto_5:
.string "En las últimas semanas, vio cómo el\n"
	.string "poder de estos POKÉMON se\l"
	.string "incrementaba, después de mantenerse\l"
	.string "inamovible por siglos, en un supuesto\l"
	.string "estado de perfección.$"

Route49_MazeP3_Encuentro_Eusine_Texto_6:
.string "Él cree que el terremoto que tuvo lugar\n"
	.string "en RUINAS ALFA, y lo que ocurrió allí\l"
	.string "ese día, son el causante de este hecho.$"

Route49_MazeP3_Encuentro_Eusine_Texto_7:
.string "Vuestra presencia aquí tal vez pueda\n"
	.string "arrojar algo de luz a estas cuestiones,\l"
	.string "¿no lo crees?$"

Route49_MazeP3_Encuentro_Eusine_Texto_8:
.string "Te esperamos arriba.$"

