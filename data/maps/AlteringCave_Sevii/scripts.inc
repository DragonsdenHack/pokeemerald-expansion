AlteringCave_Sevii_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, AlteringCave_Sevii_OnResume
	.byte 0

AlteringCave_Sevii_OnResume:
	call AlteringCave_Sevii_SetupEscapeWarp
	end

AlteringCave_Sevii_SetupEscapeWarp::
	setescapewarp MAP_OUTCAST_ISLAND, 7, 22
	return

AlteringCaveSevii1::
end

AlteringCave_Sevii_Commbate_Zeus::
lock
faceplayer
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_ROUTE105_STATE, 4
goto_if_lt AlteringCave_Sevii_Commbate_Zeus_2
compare VAR_UNUSED_0x40F7, 97
goto_if_lt AlteringCave_Sevii_Commbate_Zeus_2
playse SE_PIN
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1
waitmovement 0x0
waitse
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_4 MSGBOX_AUTOCLOSE
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1
waitmovement 0x0
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_6 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.3 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_8.4 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9.3 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_ZEUS_1, AlteringCave_Sevii_Commbate_Zeus_Texto_10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
fadeoutbgm 0
playse 586
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.2 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.3 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12.4 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_1.1
waitmovement 0x0
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_14 MSGBOX_AUTOCLOSE
delay 10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_14.1 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, AlteringCave_Sevii_Commbate_Zeus_Move_2
waitmovement 0x0
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_112_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
fadeoutbgm 0
playse 500
release
end

AlteringCave_Sevii_Commbate_Zeus_Move_1.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

AlteringCave_Sevii_Commbate_Zeus_2::
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_3 MSGBOX_AUTOCLOSE
release
end

AlteringCave_Sevii_Commbate_Zeus_Texto_1:
.string "????: ¿Has encontrado algo?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_2:
.string "{PAUSE 5}…{PAUSE 5}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_3:
.string "Entonces no me hagas perder el tiempo,\n"
	.string "chico, esto no es ninguna broma.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_4:
.string "¡¿Al sur de ISLA EXTA y al\n"
	.string "norte de ISLA PRIMA?!\l"
	.string "¡Deben de ser ellos!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_5:
.string "Bien, gracias por tu colaboración.\n"
	.string "Ahora, debo de pararles los pies,\l"
	.string "antes de que logren su objetivo.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_6:
.string "¿Cómo?\n"
	.string "¿Tú también quieres venir?\l"
	.string "¿Quieres ver en primera persona a\l"
	.string "esos POKÉMON ancestrales y ver\l"
	.string "hasta donde llegan sus poderes?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_7:
.string "No seas estúpido, ENTRENADOR.\n"
	.string "Esta misión no es para cualquiera, solo\l"
	.string "los elegidos que han sido preparados\l"
	.string "durante toda una vida, como yo, pueden\l"
	.string "abordar una tarea así con garantías.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8:
.string "¿CAMPEÓN de tu región?\n"
	.string "¿Derrotaste a LANCE?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.1:
	.string "Tenía entendido que el CAMPEÓN es\n"
	.string "ahora un tal AZUL, de PUEBLO PALETA.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.2:
	.string "Igualmente, es irrelevante.\n"
	.string "Ese LANCE creía tener poder, y no\l"
	.string "asomaba a ver el menor atisbo del\l"
	.string "verdadero potencial que un POKÉMON\l"
	.string "puede alcanzar.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.3:
	.string "Ya te lo dije: todos los POKÉMON\n"
	.string "son iguales a ojos del creador.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8.4:
	.string "No importa que seas o no el CAMPEÓN,\n"
	.string "caerían como si se trataran de los\l"
	.string "POKÉMON del CAZABICHOS más inexperto.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9:
.string "De modo que sigues insistiendo…$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9.1:
	.string "Bien, solo porque me has ayudado,\n"
	.string "tendrás el privilegio de presenciar\l"
	.string "algo que nunca antes has visto.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9.2:
	.string "No necesitaré usar más del 50% de mi\n"
	.string "poder, para hacerte ver que ciertas\l"
	.string "leyes en este mundo son inmutables.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9.3:
	.string "¡Adelante, CAMPEÓN!\n"
	.string "¡Muéstrame lo que tus mortales y\l"
	.string "vulnerables POKÉMON pueden hacer\l"
	.string "ante los dioses!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_10:
.string "Mis regios y milenarios POKÉMON,\n"
	.string "definitivamente te subestimé.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_11:
.string "Eres la primera persona en generaciones\n"
	.string "capaz de tumbar al RAYQUAZA heredado\l"
	.string "de mi linaje, parece ser que subestimé\l"
	.string "los límites últimos a los que un mortal\l"
	.string "puede llegar.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_11.1:
	.string "A pesar de ello, sigue siendo poco, en\n"
	.string "comparación con ciertos poderes{PAUSE 5}…{PAUSE 5}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12:
.string "Sea como sea, te has ganado el derecho\n"
	.string "a formar parte de esta misión, bajo tu\l"
	.string "propio riesgo.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12.1:
	.string "Me presentaré: soy ZEUS, descendiente\n"
	.string "del linaje más antiguo y sagrado de HOENN,\l"
	.string "y encargado de asegurar el equilibrio de\l"
	.string "toda la región. Por ello, rendimos culto\l"
	.string "al principal pilar de TRIO ANCESTRAL:\l"
	.string "RAYQUAZA.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12.2:
	.string "Mis antepasados, viendo los desastres\n"
	.string "que la lucha entre KYOGRE y GROUDON,\l"
	.string "los otros dos titanes de HOENN,\l"
	.string "causaban en la región, decidieron\l"
	.string "usar a RAYQUAZA como intermediario.$" 

AlteringCave_Sevii_Commbate_Zeus_Texto_12.3:
	.string "Con ello, lograron aplacar la ira de\n"
	.string "estas bestias y, para evitar que tal\l"
	.string "desastre ocurriera de nuevo, decidieron\l"
	.string "confinar al DÚO ANCESTRAL en un lugar\l"
	.string "alejado de HOENN.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12.4:
	.string "Un lugar donde nadie pudiera encontrarlos\n"
	.string "jamás, donde sus poderes permanecieran\l"
	.string "dormidos hasta el fin de los tiempos{PAUSE 5}…{PAUSE 5}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13:
.string "La llegada de AQUILES y MAGNO amenaza\n"
	.string "la continuidad de este equilibrio.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13.1:
	.string "Creen que el mundo será un lugar mejor\n"
	.string "si hacemos crecer el nivel del mar o\l"
	.string "la tierra habitable, respectivamente.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13.2:
	.string "Se han convertido en consumados\n"
	.string "especialistas de esta clase de POKÉMON,\l"
	.string "y sus ansias por ir más allá les llevó\l"
	.string "a saber todo sobre el DÚO ANCESTRAL.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13.3:
	.string "Todo{PAUSE 15}…{PAUSE 15} hasta el punto de encontrar\n"
	.string "las esferas ROJA y AZUL, perdidas por\l"
	.string "milenios, y necesarias para despertarlos.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_14:
.string "Estas esferas funcionan también como\n"
	.string "una brújula, pues brillan más cuanto\l"
	.string "más cerca se encuentran de su origen.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_14.1:
	.string "Gracias a ello, han acabado encontrando\n"
	.string "el lugar donde descansan.\l"
	.string "Ahora solo yo, el poseedor de\l"
	.string "RAYQUAZA, puede detenerlos.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_15:
.string "Sin embargo, acabas de derrotarme, y\n"
	.string "ya hemos perdido un tiempo precioso\l"
	.string "entre el combate y esta charla.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_16:
.string "Quizás sea ya demasiado tarde, y\n"
	.string "debo curar a mi equipo POKÉMON.\l"
	.string "Entretanto, tú adelántate, vuelve\l"
	.string "a esos lugares y párales los pies,\l"
	.string "antes de que no haya vuelta atrás.$"

AlteringCave_Sevii_Commbate_Zeus_Move_1:
emote_exclamation_mark
step_end

AlteringCave_Sevii_Commbate_Zeus_Move_2:
face_right
step_end
