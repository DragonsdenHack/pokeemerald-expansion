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
	.string "RUTA 14\n"
	.string "Al oeste CIUDAD FUCSIA$"



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
.string "AZUL: Ya era hora {PLAYER}, estaba\n"
	.string "esperándote.$"

Route14_Combate_Azul_Texto_2:
.string "Ya sé que ahora mismo debería de\n"
	.string "estar rumbo a ISLA PRIMA para\l"
	.string "combatir a MOLTRES, pero entre tú\l"
	.string "y yo, acabaré esa misión mucho\l"
	.string "antes que vosotros, mi BLASTOISE\l"
	.string "está hecho a medida para ese\l"
	.string "POKÉMON, aunque sea un\l"
	.string "LEGENDARIO...$"

Route14_Combate_Azul_Texto_3:
.string "ANDRA es la que debería de andarse\n"
	.string "con ojo, vuestros GOLBATS no\l"
	.string "pueden hacer nada contra ZAPDOS,\l"
	.string "espero que la estrategia que hayan\l"
	.string "pensado funcione, en cualquier\l"
	.string "caso mi parte parece la más\l"
	.string "sencilla.$"

Route14_Combate_Azul_Texto_4:
.string "Mi abuelo solía decir que los\n"
	.string "POKÉMON LEGENDARIOS eran\l"
	.string "intocables, que no convenía tentar\l"
	.string "a los hijos predilectos de la\l"
	.string "naturaleza, -ellos forman parte de\l"
	.string "un mundo aparte, sus origenes son\l"
	.string "diferentes a los de un POKÉMON\l"
	.string "común, y sus genes parecieran\l"
	.string "estar pulidos por el mismo creador\l"
	.string "en comparación con la mediocridad\l"
	.string "del resto-.$"

Route14_Combate_Azul_Texto_5:
.string "... ...$"

Route14_Combate_Azul_Texto_6:
.string "Qué tontería, para qué quieres\n"
	.string "saber que existen POKÉMON\l"
	.string "increíbles si vas a quedarte\l"
	.string "escondido sin descubrir de lo que\l"
	.string "sois capaces tú y tu equipo ante\l"
	.string "esos supuestos seres superiores,\l"
	.string "qué mejor forma de admirar a las\l"
	.string "aves que retarlas con tu propio\l"
	.string "equipo que, a pesar de no nacer\l"
	.string "con sus condiciones, se ha ido\l"
	.string "haciendo más fuerte gracias a tu\l"
	.string "destreza como ENTRENADOR hasta el\l"
	.string "punto de que puedan competir de tú\l"
	.string "a tú con lo místico y sagrado de\l"
	.string "esta región convertido en POKÉMON\l"
	.string "LEGENDARIO...$"

Route14_Combate_Azul_Texto_7:
.string "Quería hablar contigo antes de\n"
	.string "esta peligrosa misión para\l"
	.string "asegurarme de que has seguido\l"
	.string "progresando y lo del SS.ANNE no\l"
	.string "fue casualidad, mucho ha llovido\l"
	.string "desde ese entonces y mi equipo no\l"
	.string "se parece en nada, ¡por tu bien\l"
	.string "espero que el tuyo también se haya\l"
	.string "transformado!$"

Route14_Combate_Azul_Texto_8:
.string "Así que este equipo aún no es\n"
	.string "suficiente.$"

Route14_Combate_Azul_Texto_9:
.string "Poco a poco vas haciéndote un\n"
	.string "hueco entre los ROCKETS más\l"
	.string "fuertes eh, sólamente veo a ATLAS\l"
	.string "y al propio GIOVANNI como los\l"
	.string "ENTRENADORES que claramente\l"
	.string "podrían hacerte morder el polvo.$"


Route14_Combate_Azul_Texto_10:
.string "Ya hemos perdido demasiado tiempo,\n"
	.string "me largo a ISLA PRIMA de una vez,\l"
	.string "más le vale a ese MOLTRES estar\l"
	.string "hecho a prueba de un SURF\l"
	.string "superefectivo de un BLASTOISE\l"
	.string "equipado con el CHALECO ASALTO que\l"
	.string "resistirá cualquier movimiento\l"
	.string "especial de TIPO FUEGO, ninguna\l"
	.string "divinidad y genética suprema le\l"
	.string "salvará de este hecho.$"

Route14_Combate_Azul_Texto_11:
.string "ORNITÓLOGO: ¡Eso fue un PIDGEOT de\n"
	.string "verdad!\l"
	.string "¡Y he tenido el honor de ver\l"
	.string "desplegar las majestuosas alas del\l"
	.string "mejor ave no legendaria de la\l"
	.string "región!\l"
	.string "¡Sabía que pasar por esta ruta era\l"
	.string "buena idea!$"

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
