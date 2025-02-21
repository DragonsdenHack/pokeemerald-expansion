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
.string "Ya era hora, {PLAYER}.\n"
	.string "Estaba esperándote.$"

Route14_Combate_Azul_Texto_2:
.string "Ya sé que ahora mismo debería de\n"
	.string "estar rumbo a ISLA PRIMA.\l"
	.string "Pero, entre tú y yo, acabaré esta\l"
	.string "misión mucho antes que vosotros.\l"
	.string "Mi BLASTOISE está hecho a medida de\l"
	.string "MOLTRES, aún siendo un LEGENDARIO{PAUSE 15}…{PAUSE 15}$"

Route14_Combate_Azul_Texto_3:
.string "ANDRA es la que debería de andarse con\n"
	.string "ojo: vuestros GOLBAT no pueden\l"
	.string "hacer nada contra un ZAPDOS.\l"
	.string "Espero que el resto de su equipo\l"
	.string "cubra esa debilidad, y la estrategia\l"
	.string "que tienen planeada funcione.$"

Route14_Combate_Azul_Texto_3.1:
	.string "{PAUSE 15}…{PAUSE 15}$"

Route14_Combate_Azul_Texto_4:
.string "Mi abuelo solía decir que un LEGENDARIO\n"
	.string "era un POKÉMON intocable, que no\l"
	.string "convenía tentar a los hijos predilectos\l"
	.string "de la naturaleza.$"
	
Route14_Combate_Azul_Texto_4.1:
	.string "-Ellos forman un mundo aparte, sus\n"
	.string "origenes son diferentes a los de un\l"
	.string "POKÉMON común, y sus genes parecieran\l"
	.string "estar pulidos por el mismo creador,\l"
	.string "en comparación con la mediocridad\l"
	.string "que reina en los mortales-.$"

Route14_Combate_Azul_Texto_5:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route14_Combate_Azul_Texto_6:
.string "Qué tontería.\n"
	.string "¿Para qué quieres saber que existen\l"
	.string "POKÉMON increíbles si vas a quedarte\l"
	.string "escondido, sin descubrir de lo que\l"
	.string "sois capaces tú y tu equipo ante\l"
	.string "esos supuestos seres superiores?$"

Route14_Combate_Azul_Texto_6.1:
	.string "¿Qué mejor forma hay de admirar a las\n"
	.string "AVES, que retarlas a un combate?\l"
	.string "Es precisamente lo místico y sagrado\l"
	.string "lo que más merece ser puesto a prueba.$"

Route14_Combate_Azul_Texto_7:
.string "Esto también podría aplicarse a\n"
	.string "los entrenadores, ¿no crees?$"

Route14_Combate_Azul_Texto_7.1:
	.string "Después de lo del SS.ANNE, sigo\n"
	.string "sin tener claro en qué clase de\l"
	.string "ENTRENADOR te mueves.$"

Route14_Combate_Azul_Texto_7.2:
	.string "He mejorado mucho desde entonces,\n"
	.string "tal vez{PAUSE 15}…{PAUSE 15}\l"
	.string "¡Ahora pueda descubrirlo!$"

Route14_Combate_Azul_Texto_8:
	.string "So this team is not good enough yet.$"

Route14_Combate_Azul_Texto_9:
.string "Poco a poco vas haciéndote un\n"
	.string "hueco entre los ROCKET más\l"
	.string "fuertes, ¿eh?\l"
	.string "Solo veo a ATLAS y al propio GIOVANNI\l"
	.string "como los ROCKET que claramente podrían\l"
	.string "hacerte morder el polvo.$"

Route14_Combate_Azul_Texto_10:
.string "Ya hemos perdido demasiado tiempo,\n"
	.string "me largo a ISLA PRIMA de una vez.\l"
	.string "Más le vale a ese MOLTRES estar\l"
	.string "preparado para el SURF de un BLASTOISE\l"
	.string "equipado con el CHALECO ASALTO, que\l"
	.string "resistirá cualquier LLAMARADA.$"
	
Route14_Combate_Azul_Texto_10.1:
	.string "Ninguna divinidad y genética\n"
	.string "suprema le salvará de este hecho.$"

Route14_Combate_Azul_Texto_11:
.string "ORNITÓLOGO: ¡Eso fue un PIDGEOT real!\n"
	.string "¡Acabo de ver desplegar las alas\l"
	.string "del mejor ave no legendaria de KANTO!\l"
	.string "¡Sabía que pasar por RUTA 14\l"
	.string "era buena idea!$"

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
