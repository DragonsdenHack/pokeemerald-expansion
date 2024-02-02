ViridianForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, ViridianForest_OnResume
	.byte 0

ViridianForest_OnResume:
	call ViridianForest_SetupEscapeWarp
	end

ViridianForest_SetupEscapeWarp::
	setescapewarp MAP_ROUTE2, 5, 13
	return

ViridianForest1::
lock     
faceplayer     
msgbox ViridianForest_Text_1, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_1:
.string "¡Vine aquí con unos amigos!\p"
.string "¡Van en busca de combates\n"
.string "POKéMON!$"



ViridianForest2::
end



ViridianForest3::
end



ViridianForest4::
end



ViridianForest5::
end



ViridianForest6::
end



ViridianForest7::
end



ViridianForest8::
end



ViridianForest9::
lock     
faceplayer     
msgbox ViridianForest_Text_9, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_9:
.string "Por aquí no hay ningún POKÉMON\n"
.string "fuerte que pueda\l"
.string "interesaros…sobre el papel.$"



ViridianForest10::
end



ViridianForest11::
end



ViridianForest12::
end



ViridianForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_PATRICIA, ViridianForest_Text_CazabichosIntro, ViridianForest_Text_CazabichosDefeated
	msgbox ViridianForest_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, ViridianForest_Text_Cazabichos2Intro, ViridianForest_Text_Cazabichos2Defeated
	msgbox ViridianForest_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos3::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, ViridianForest_Text_Cazabichos3Intro, ViridianForest_Text_Cazabichos3Defeated
	msgbox ViridianForest_Cazabichos3PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos4::
	trainerbattle_single TRAINER_BROOKE_5, ViridianForest_Text_Cazabichos4Intro, ViridianForest_Text_Cazabichos4Defeated
	msgbox ViridianForest_Cazabichos4PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos5::
	trainerbattle_single TRAINER_BROOKE_4, ViridianForest_Text_Cazabichos5Intro, ViridianForest_Text_Cazabichos5Defeated
	msgbox ViridianForest_Cazabichos5PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForestDocumento_100::
msgbox ViridianForestDocumento_Text_100, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_100:
.string "SALIENDO DEL BOSQUE VERDE,\n"
	.string "SE ENCUENTRA CIUDAD PLATEADA$"



ViridianForestDocumento_101::
msgbox ViridianForestDocumento_Text_101, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_101:
.string "PISTAS ENTRENADOR\p"
	.string "¡No robes los POKéMON de otros\n"
	.string "ENTRENADORES!\p"
	.string "¡Captura solo POKéMON salvajes\n"
	.string "con las POKé BALLS!$"



ViridianForestDocumento_102::
msgbox ViridianForestDocumento_Text_102, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_102:
.string "PISTAS ENTRENADOR\p"
	.string "¡Para evaluar tu POKéDEX, llama\n"
	.string "al PROF. OAK vía PC!$"



ViridianForestDocumento_103::
msgbox ViridianForestDocumento_Text_103, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_103:
.string "PISTAS ENTRENADOR\p"
	.string "Si quieres evitar los combates,\n"
	.string "¡aléjate de las zonas de hierba!$"



ViridianForestDocumento_104::
msgbox ViridianForestDocumento_Text_104, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_104:
.string "PISTAS ENTRENADOR\p"
	.string "¡Debilita a los POKéMON antes\n"
	.string "de intentar capturarlos!\p"
	.string "¡Si están fuertes, podrían escapar!$"



ViridianForestDocumento_105::
msgbox ViridianForestDocumento_Text_105, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_105:
.string "¡Usa ANTÍDOTO contra el veneno!\n"
	.string "¡Lo conseguirás en las TIENDAS\l"
	.string "POKéMON!$"

ViridianForest_Combate_Guays::
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_1 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 12, ViridianForest_Combate_Guays_Move_3
waitmovement 0x0
applymovement 12, ViridianForest_Combate_Guays_Move_4
waitmovement 0x0
applymovement 13, ViridianForest_Combate_Guays_Move_4
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_4 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_5 MSGBOX_AUTOCLOSE
applymovement 13, ViridianForest_Combate_Guays_Move_5
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_6 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_5
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VERO_2, ViridianForest_Combate_Guays_Texto_8
msgbox ViridianForest_Combate_Guays_Texto_9 MSGBOX_AUTOCLOSE
msgbox ViridianForest_Combate_Guays_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_7
applymovement 13, ViridianForest_Combate_Guays_Move_8
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox ViridianForest_Combate_Guays_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_PINSIR, 15, ITEM_SILVER_POWDER
waitfanfare
msgbox ViridianForest_Combate_Guays_Texto_13 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_14 MSGBOX_AUTOCLOSE
msgbox ViridianForest_Combate_Guays_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FANCLUB_LADY
fadescreen 1
delay 20
removeobject 12
removeobject 13
fadescreen 0
setvar VAR_UNUSED_0x408B, 1
release
end

ViridianForest_Combate_Guays_Texto_1:
.string "VERO: ¡Te lo dije!\n"
	.string "¡PINSIR no era un POKÉMON extinto\l"
	.string "en este bosque!\l"
	.string "¡Y hemos tenido la suerte de\l"
	.string "encontrar a una pareja!$"

ViridianForest_Combate_Guays_Texto_2:
.string "JUAN: Con este último fichaje\n"
	.string "seremos la envidia de todos los\l"
	.string "entrenadores guay, nadie tiene ya\l"
	.string "un equipo como el nuestro, el\l"
	.string "SCYTHER que logramos atrapar en la\l"
	.string "ZONA SAFARI es el complemento\l"
	.string "perfecto, dos TIPO BICHO con los\l"
	.string "que no pueden ni soñar la\l"
	.string "mediocridad de cazabichos que\l"
	.string "pululan por aquí.$"


ViridianForest_Combate_Guays_Texto_3:
.string "VERO: Yo a ti te conozco, estabas\n"
	.string "en el TÚNEL ROCA, cuando se\l"
	.string "propagó el rumor de que había un\l"
	.string "KANGASKHAN por estos lugares,\l"
	.string "parece que solo fue un rumor, este\l"
	.string "en cambio...\l"
	.string "Nadie creía que pudiera quedar\l"
	.string "algún PINSIR por aquí y resulta\l"
	.string "que sí.$"

ViridianForest_Combate_Guays_Texto_4:
.string "JUAN: ¿Este es el ROCKET que te\n"
	.string "venció?$"

ViridianForest_Combate_Guays_Texto_5:
.string "VERO: Así es, debe de ser un\n"
	.string "comandante o algo así, los ROCKETS\l"
	.string "normales ni se acercan a su nivel.$"

ViridianForest_Combate_Guays_Texto_6:
.string "JUAN: Quiero comprobar eso, ¡un\n"
	.string "ROCKET con buenos POKÉMON!\l"
	.string "¡Eso es más difícil que encontrar\l"
	.string "un PINSIR por estos lugares!$"

ViridianForest_Combate_Guays_Texto_7:
.string "VERO: Hemos completado el equipo\n"
	.string "definitivo que queríamos.\l"
	.string "¡No hay posibilidad de que puedas\l"
	.string "detenernos!$"

ViridianForest_Combate_Guays_Texto_8:
.string "¡Ha tenido que ser un ROCKET quién\n"
	.string "nos haga morder el polvo!$"

ViridianForest_Combate_Guays_Texto_9:
.string "JUAN: Esto sí que no me lo\n"
	.string "esperaba, un ROCKET derrotando a\l"
	.string "los más guay de entre los\l"
	.string "entrenadores guay.$"

ViridianForest_Combate_Guays_Texto_10:
.string "VERO: Parece que eres muy\n"
	.string "competente, aunque a veces seamos\l"
	.string "algo arrogantes sabemos reconocer\l"
	.string "cuando alguien nos supera.$"

ViridianForest_Combate_Guays_Texto_11:
.string "JUAN: Queremos que tengas el otro\n"
	.string "PINSIR que hemos encontrado, un\l"
	.string "ENTRENADOR como tú seguro que sabe\l"
	.string "sacarle más provecho que\l"
	.string "cualquiera al que podamos dárselo,\l"
	.string "y no somos tu organización para ir\l"
	.string "vendiéndolo por ahí, ya me\l"
	.string "entiendes.$"

ViridianForest_Combate_Guays_Texto_12:
.string "¡HAS OBTENIDO UN PINSIR AL NV:15!$"

ViridianForest_Combate_Guays_Texto_13:
.string "VERO: ¡Tampoco te pases!\n"
	.string "¡No ibamos a darte al otro PINSIR!\l"
	.string "¡Hemos gastado todos nuestros\l"
	.string "caramelosraros en ponerlo al nivel\l"
	.string "del resto de nuestros POKÉMON!$"

ViridianForest_Combate_Guays_Texto_14:
.string "JUAN: Vámonos ya VERO, he oído que\n"
	.string "en JOHTO hay bichos incluso\l"
	.string "mejores que los de aquí, y un\l"
	.string "anciano que te da un DRATINI si\l"
	.string "pasas su prueba.$"

ViridianForest_Combate_Guays_Texto_15:
.string "VERO: No se hable más entonces.\n"
	.string "¡Al siguiente destino!$"

ViridianForest_Combate_Guays_Move_1:
walk_in_place_down
step_end

ViridianForest_Combate_Guays_Move_1.1:
walk_in_place_left
step_end

ViridianForest_Combate_Guays_Move_2:
walk_in_place_up
step_end

ViridianForest_Combate_Guays_Move_3:
emote_exclamation_mark
step_end

ViridianForest_Combate_Guays_Move_4:
face_right
step_end

ViridianForest_Combate_Guays_Move_5:
walk_down
walk_right
walk_right
step_end

ViridianForest_Combate_Guays_Move_6:
walk_in_place_left
step_end

ViridianForest_Combate_Guays_Move_7:
walk_in_place_down
walk_in_place_right
step_end

ViridianForest_Combate_Guays_Move_8:
walk_in_place_up
walk_in_place_right
step_end
