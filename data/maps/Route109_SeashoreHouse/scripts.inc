Route109_SeashoreHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, Route109_SeashoreHouse_OnTransition
	.byte 0

Route109_SeashoreHouse_OnTransition:
	setflag FLAG_LANDMARK_SEASHORE_HOUSE
	end

Route109_SeashoreHouse_EventScript_Owner::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_EventScript_DefeatedTrainers
	release
	end

Route109_SeashoreHouse_EventScript_AlreadyGaveIntroduction::
	msgbox Route109_SeashoreHouse_Text_ShowMeSomeHotMatches, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_DefeatedTrainers::
	msgbox Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles, MSGBOX_DEFAULT
	giveitem ITEM_SODA_POP, 6
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_BagFull
	setflag FLAG_RECEIVED_6_SODA_POP
	release
	end

Route109_SeashoreHouse_EventScript_BagFull::
	msgbox Route109_SeashoreHouse_Text_BagFull, MSGBOX_DEFAULT
	release
	end

Route109_SeashoreHouse_EventScript_AlreadyReceivedSodaPop::
	showmoneybox 0, 0
	msgbox Route109_SeashoreHouse_Text_WantToBuySodaPop, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route109_SeashoreHouse_EventScript_BuySodaPop
	msgbox Route109_SeashoreHouse_Text_ThatsTooBad, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_BuySodaPop::
	checkmoney 300
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughMoney
	checkitemspace ITEM_SODA_POP
	goto_if_eq VAR_RESULT, FALSE, Route109_SeashoreHouse_EventScript_NotEnoughSpace
	msgbox Route109_SeashoreHouse_Text_HereYouGo, MSGBOX_DEFAULT
	removemoney 300
	updatemoneybox
	giveitem ITEM_SODA_POP
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughMoney::
	msgbox Route109_SeashoreHouse_Text_NotEnoughMoney, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_NotEnoughSpace::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	hidemoneybox
	release
	end

Route109_SeashoreHouse_EventScript_Dwayne::
	trainerbattle_single TRAINER_TRAINER_438, Route109_SeashoreHouse_Text_DwayneIntro, Route109_SeashoreHouse_Text_DwayneDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_DwaynePostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Johanna::
	trainerbattle_single TRAINER_TRAINER_439, Route109_SeashoreHouse_Text_JohannaIntro, Route109_SeashoreHouse_Text_JohannaDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_JohannaPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_Simon::
	trainerbattle_single TRAINER_TRAINER_437, Route109_SeashoreHouse_Text_SimonIntro, Route109_SeashoreHouse_Text_SimonDefeated, Route109_SeashoreHouse_EventScript_CheckTrainersCompletion
	msgbox Route109_SeashoreHouse_Text_SimonPostBattle, MSGBOX_AUTOCLOSE
	end

Route109_SeashoreHouse_EventScript_CheckTrainersCompletion::
	goto_if_not_defeated TRAINER_TRAINER_437, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_TRAINER_438, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	goto_if_not_defeated TRAINER_TRAINER_439, Route109_SeashoreHouse_EventScript_TrainersNotCompleted
	setflag FLAG_DEFEATED_SEASHORE_HOUSE
	release
	end

Route109_SeashoreHouse_EventScript_TrainersNotCompleted::
	release
	end

Route109_SeashoreHouse_Text_SeashoreHouseIntro:
	.string	"Soy el dueño de la CASA de la PLAYA,\n"
	.string	"pero me puedes llamar SR. MARINO.\p"
	.string	"Lo que más me gusta del mundo es ver\n"
	.string	"combates POKéMON bien candentes.\p"
	.string	"¡A ver si tú también peleas con pasión!\p"
	.string	"Si logras derrotar a todos los\n"
	.string	"ENTRENADORES, tendrás una recompensa.$"

Route109_SeashoreHouse_Text_ShowMeSomeHotMatches:
	.string	"¡Me encantan los combates al rojo vivo!\p"
	.string	"Tengo esta CASA de la PLAYA sólo\n"
	.string	"y exclusivamente por eso.$"

Route109_SeashoreHouse_Text_TakeTheseSodaPopBottles:
	.string	"¡Eres como un volcán en erupción!\n"
	.string	"¡Esos combates han sido tremendos!\l"
	.string	"¡Estoy la mar de satisfecho!\p"
	.string	"Qué bien que te haya podido ver\n"
	.string	"en racha. Toma esto como regalo.\p"
	.string	"¡Son seis botellas de REFRESCO!$"

Route109_SeashoreHouse_Text_BagFull:
	.string "Oh, but hey, your BAG's jammed full.\n"
	.string "I'll hang on to these for you.$"

Route109_SeashoreHouse_Text_WantToBuySodaPop:
	.string "Want to buy some SODA POP?\n"
	.string "POKéMON love it!\p"
	.string "Just ¥300 a bottle!\n"
	.string "Buy some!$"

Route109_SeashoreHouse_Text_HereYouGo:
	.string "Here you go!$"

Route109_SeashoreHouse_Text_NotEnoughMoney:
	.string "You don't have the money.$"

Route109_SeashoreHouse_Text_ThatsTooBad:
	.string "No?\n"
	.string "That's too bad.$"

Route109_SeashoreHouse_Text_DwayneIntro:
	.string	"¡Si buscas combates en alta mar, yo\n"
	.string	"soy el ENTRENADOR adecuado, grumete!$"

Route109_SeashoreHouse_Text_DwayneDefeated:
	.string	"¡Éste ha sido un señor combate!\n"
	.string	"¡Acepto la derrota, grumete!$"

Route109_SeashoreHouse_Text_DwaynePostBattle:
	.string	"Ir a CIUDAD PORTUAL es sinónimo\n"
	.string	"de combates al rojo vivo y REFRESCOS\l"
	.string	"helados. ¡Todo un contraste!$"

Route109_SeashoreHouse_Text_JohannaIntro:
	.string "Las peleas aburridas no merecen la\n"
	.string "pena. Los combates feroces sí que\l"
	.string "hacen mejorar a ENTRENADORES y\l"
	.string "POKÉMON.$"

Route109_SeashoreHouse_Text_JohannaDefeated:
	.string "¡Más feroz que el lobo de Caperucita!$"

Route109_SeashoreHouse_Text_JohannaPostBattle:
	.string "Bueno, tengo una sed que me muero. Voy\n"
	.string "a comprarme un REFRESCO.$"

Route109_SeashoreHouse_Text_SimonIntro:
	.string "Te voy a demostrar que mis POKÉMON no\n"
	.string "tienen rival. ¡Luego no te quejes!$"

Route109_SeashoreHouse_Text_SimonDefeated:
	.string "He perdido, pero no me quejo{PAUSE 5}…{PAUSE 5}$"

Route109_SeashoreHouse_Text_SimonPostBattle:
	.string "Si alguno de mis POKÉMON supiera el\n"
	.string "movimiento que te transporta por el\l"
	.string "agua, podría olvidarme del flotador{PAUSE 5}…{PAUSE 5}$"

Route109_SeashoreHouse_Padre::
lock
faceplayer
goto_if_set FLAG_DEFEATED_SEASHORE_HOUSE, Route109_SeashoreHouse_Padre_Despues
msgbox 	Route109_SeashoreHouse_Padre_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route109_Padre_Move_1:
emote_exclamation_mark
step_end

Route109_Padre_Move_2:
walk_in_place_down
step_end

Route109_Padre_Move_3:
face_left
step_end

Route109_Padre_Move_4:
face_down
step_end

Route109_Padre_Move_5:
walk_down
face_left
step_end

Route109_Padre_Move_6:
face_right
step_end



Route109_SeashoreHouse_Padre_Despues::
lock
compare VAR_ROUTE118_STATE, 3
goto_if_gt DewfordTown_Hall_Secundaria_Despues_2
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_2 MSGBOX_AUTOCLOSE
delay 15
trainerbattle_no_intro TRAINER_TRAINER_654, Route109_SeashoreHouse_Padre_Texto_3
delay 10
playse SE_PIN
applymovement 5, Route109_Padre_Move_1
waitmovement 0x0
delay 10
applymovement 1, Route109_Padre_Move_2
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route109_Padre_Move_3
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Route109_Padre_Move_4
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Route109_Padre_Move_2
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_7 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route109_Padre_Move_1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Route109_Padre_Move_6
applymovement 5, Route109_Padre_Move_5
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_9 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_655, Route109_SeashoreHouse_Padre_Texto_11
delay 15
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_12 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 5, BerryForest_Evento_Hypno_Move_4
waitmovement 0x0
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route109_Padre_Move_4
applymovement 5, Route109_Padre_Move_7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_34
removeobject 5
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Route109_Padre_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Route109_Padre_Move_8
waitmovement 0x0
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox 	Route109_SeashoreHouse_Padre_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Route109_Padre_Move_9
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, Route109_Padre_Move_2
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_18 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox Route109_SeashoreHouse_Padre_Texto_19 MSGBOX_DEFAULT
givemon SPECIES_CHATOT, 60, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox Route109_SeashoreHouse_Padre_Texto_20 MSGBOX_DEFAULT
givemon SPECIES_PIKIPEK, 60, ITEM_NONE
waitfanfare
msgbox 	Route109_SeashoreHouse_Padre_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, Route109_Padre_Move_2
waitmovement 0x0
msgbox 	Route109_SeashoreHouse_Padre_Texto_22 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route109_Padre_Move_11
applymovement 1, Route109_Padre_Move_10
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_35
removeobject 1
clearflag FLAG_HOENN_689
setvar VAR_ROUTE118_STATE, 4
release
end

DewfordTown_Hall_Secundaria_Despues_2::
msgbox 	Route109_SeashoreHouse_Padre_Texto_16.1 MSGBOX_AUTOCLOSE
release
end

Route109_Padre_Move_11:
delay_16
face_right
delay_16
delay_16
face_down
step_end

Route109_Padre_Move_10:
walk_right
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


Route109_Padre_Move_9:
face_left
delay_16
delay_8
face_down
step_end

Route109_Padre_Move_8:
face_up
step_end

Route109_Padre_Move_7:
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end


Route109_SeashoreHouse_Padre_Texto_1:
	.string	"Soy el dueño de la CASA de la PLAYA,\n"
	.string	"pero me puedes llamar SR. MARINO.\p"
	.string	"Lo que más me gusta del mundo es ver\n"
	.string	"combates POKéMON bien candentes.\p"
	.string	"¡A ver si tú también peleas con pasión!\p"
	.string	"Si logras derrotar a todos los\n"
	.string	"ENTRENADORES, pelearé contigo.$"

Route109_SeashoreHouse_Padre_Texto_2:
	.string	"¡Eres como un volcán en erupción!\n"
	.string	"¡Esos combates han sido tremendos!\l"
	.string	"¡Estoy la mar de satisfecho!\p"
	.string	"Qué bien que te haya podido ver\n"
	.string	"en racha. Bien, llegó la hora.\p"
	.string	"¡Vas a ver de lo que soy capaz!$"

Route109_SeashoreHouse_Padre_Texto_3:
	.string "¡Guau, menuda intensidad!$"

Route109_SeashoreHouse_Padre_Texto_4:
	.string "¡Chico! Me has dejado impresionado. No\n"
	.string "disfrutaba un combate así desde que mi\l"
	.string "buen amigo DRACÓN me hizo morder el\l"
	.string "polvo con su SALAMENCE.$"

Route109_SeashoreHouse_Padre_Texto_5:
	.string "¡Jo, jo, jo! ¡Esos sí que eran buenos\n"
	.string "tiempos!$"

Route109_SeashoreHouse_Padre_Texto_6:
	.string "Pensaba que las nuevas generaciones no\n"
	.string "eran más que una manada de flojos que\l"
	.string "se rinden ante cualquier contratiempo,\l"
	.string "¡me alegra haberte conocido!$"

Route109_SeashoreHouse_Padre_Texto_7:
	.string "¡Ten! ¡Esto es para t…!$"

Route109_SeashoreHouse_Padre_Texto_8:
	.string "¡Buahh! ¡Buahh! ¡Hombre malo!$"

Route109_SeashoreHouse_Padre_Texto_9:
	.string "¡Por tu culpa mi papi ha perdido! ¡Me\n"
	.string "caes mal!$"

Route109_SeashoreHouse_Padre_Texto_10:
	.string "¡Voy a hacer que pierdas! ¡Así será como\n"
	.string "si mi papi hubiera ganado!$"

Route109_SeashoreHouse_Padre_Texto_11:
	.string "¡Bua, bua!$"

Route109_SeashoreHouse_Padre_Texto_12:
	.string "¡Buaahh! ¡Ahora todos se van a reir de\n"
	.string "mí en el cole!$"

Route109_SeashoreHouse_Padre_Texto_13:
	.string "¡Bua, bua!$"

Route109_SeashoreHouse_Padre_Texto_14:
	.string "Déjala, ya se le pasará.$"

Route109_SeashoreHouse_Padre_Texto_15:
	.string "¡Chico! Tengo que darte las gracias por\n"
	.string "partida doble. Hasta ahora, no me había\l"
	.string "dado cuenta de lo malcriada que estaba\l"
	.string "mi hija.$"

Route109_SeashoreHouse_Padre_Texto_16:
	.string "A partir de hoy, ¡seré mucho más duro\n"
	.string "con ella!$"

Route109_SeashoreHouse_Padre_Texto_16.1:
	.string "A partir de hoy, ¡seré mucho más duro\n"
	.string "con mi hija!$"

Route109_SeashoreHouse_Padre_Texto_17:
	.string "¡Ah! ¡Casi se me olvida!$"

Route109_SeashoreHouse_Padre_Texto_18:
	.string "Quiero que tengas estos POKÉMON,\n"
	.string "contigo estarán en buenas manos.$"

Route109_SeashoreHouse_Padre_Texto_19:
	.string "¡{PLAYER} obtuvo un CHATOT al nv.60!$"

Route109_SeashoreHouse_Padre_Texto_20:
	.string "¡{PLAYER} obtuvo un PIKIPEK al nv.60!$"

Route109_SeashoreHouse_Padre_Texto_21:
	.string "Son aves exóticas de lejanas regiones,\n"
	.string "las obtuve hace décadas. ¡No\l"
	.string "subestimes a estos pequeños, pueden\l"
	.string "hacer mucho daño!$"

Route109_SeashoreHouse_Padre_Texto_22:
	.string "Ahora, si me disculpas, voy a por mi hija.$"

Route109_SeashoreHouse_Nina::
lock
faceplayer
msgbox Route109_SeashoreHouse_Nina_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, Route109_Padre_Move_4
waitmovement 0x0
release
end

Route109_SeashoreHouse_Nina_Texto_1:
	.string "¡Buuuuh! ¡Vas a perder! ¡Ji, ji, ji!$"

