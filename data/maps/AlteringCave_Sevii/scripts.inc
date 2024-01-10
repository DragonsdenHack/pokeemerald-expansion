AlteringCave_Sevii_MapScripts::
	.byte 0

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
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_9 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ZEUS_1, AlteringCave_Sevii_Commbate_Zeus_Texto_10
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_11 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_12 MSGBOX_AUTOCLOSE
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_13 MSGBOX_AUTOCLOSE
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_14 MSGBOX_AUTOCLOSE
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



AlteringCave_Sevii_Commbate_Zeus_2::
msgbox AlteringCave_Sevii_Commbate_Zeus_Texto_3 MSGBOX_AUTOCLOSE
release
end

AlteringCave_Sevii_Commbate_Zeus_Texto_1:
.string "????: ¿Has encontrado algo?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_2:
.string "...$"

AlteringCave_Sevii_Commbate_Zeus_Texto_3:
.string "Entonces no me hagas perder el\n"
	.string "tiempo chico, esto no es ninguna\l"
	.string "broma.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_4:
.string "¡¿Al sur de ISLA EXTA y al norte\n"
	.string "de ISLA PRIMA?!\l"
	.string "¿Hablaban de liberar a dos POKÉMON\l"
	.string "ancestrales allí mismo?\l"
	.string "¡Deben de ser ellos!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_5:
.string "Bien, gracias por tu colaboración,\n"
	.string "ahora debo de pararles los pies\l"
	.string "antes de que logren su objetivo.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_6:
.string "¿Cómo?\n"
	.string "¿Tú también quieres venir?\l"
	.string "¿Quieres ver en primera persona a\l"
	.string "esos POKÉMON ancestrales y ver\l"
	.string "hasta donde llegan sus poderes?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_7:
.string "No seas estúpido ENTRENADOR, esta\n"
	.string "misión no es para cualquiera, solo\l"
	.string "aquellos elegidos que han sido\l"
	.string "preparados durante toda una vida,\l"
	.string "como yo, pueden abordar una tarea\l"
	.string "así con garantías.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8:
.string "¿CAMPEÓN de tu región?\n"
	.string "¿Derrotaste a LANCE?\l"
	.string "Tenía entendido que el CAMPEÓN es\l"
	.string "ahora un tal AZUL de PUEBLO\l"
	.string "PALETA.\l"
	.string "Igualmente, es irrelevante, ese\l"
	.string "LANCE creía tener poder y no\l"
	.string "asomaba a ver la punta del iceberg\l"
	.string "del verdadero potencial que un\l"
	.string "POKÉMON puede alcanzar, ya te lo\l"
	.string "dije, todos los entrenadores son\l"
	.string "iguales a ojos del creador de\l"
	.string "todo, independientemente de que\l"
	.string "seas o no el CAMPEÓN de tu región,\l"
	.string "tus POKÉMON caerían de igual forma\l"
	.string "que el del cazabichos más\l"
	.string "inexperto.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9:
.string "De modo que sigues insistiendo...\n"
	.string "Bien, solo porque me has ayudado,\l"
	.string "tendrás el privilegio de\l"
	.string "presenciar algo que nunca antes\l"
	.string "has visto, no necesitaré usar más\l"
	.string "del 50% de mi poder para hacerte\l"
	.string "ver que ciertas leyes de este\l"
	.string "mundo son incuestionables.\l"
	.string "¡Adelante CAMPEÓN!\l"
	.string "¡Muéstrame lo que tus mortales y\l"
	.string "vulnerables POKÉMON pueden hacer\l"
	.string "ante los dioses!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_10:
.string "Mis regios y milenarios POKÉMON,\n"
	.string "definitivamente te subestimé.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_11:
.string "Eres la primera persona en\n"
	.string "generaciones capaz de tumbar al\l"
	.string "RAYQUAZA heredado de mi linaje,\l"
	.string "parece ser que subestimé los\l"
	.string "límites últimos a los que un\l"
	.string "entrenador en sintonía con su\l"
	.string "equipo puede llegar, aunque siga\l"
	.string "siendo poco en comparación con\l"
	.string "ciertos poderes...$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12:
.string "Sea como sea, te has ganado el\n"
	.string "derecho a formar parte de esta\l"
	.string "misión bajo tu propio riesgo, me\l"
	.string "presentaré, soy ZEUS, descendiente\l"
	.string "del linaje más antiguo y sagrado\l"
	.string "de HOENN, encargado de asegurar el\l"
	.string "equilibrio de toda la región, y\l"
	.string "rendir culto al dragón más\l"
	.string "poderoso que jamás haya existido:\l"
	.string "RAYQUAZA PRIMIGENIO.\l"
	.string "Mis antepasados, viendo los\l"
	.string "desastres que la lucha entre\l"
	.string "KYOGRE y GROUDON, los otros dos\l"
	.string "titanes de HOENN, causaban en la\l"
	.string "región, decidieron usar a RAYQUAZA\l"
	.string "como intermediario, aplacando la\l"
	.string "ira de estas bestias y, para\l"
	.string "evitar que tal desastre ocurriera\l"
	.string "de nuevo, decidieron confinar a\l"
	.string "estos dos POKÉMON en un lugar\l"
	.string "alejado de HOENN, donde nadie\l"
	.string "pudiera encontrarlos jamás,\l"
	.string "permaneciendo así sus peligrosos\l"
	.string "poderes dormidos hasta el fin de\l"
	.string "los tiempos...$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13:
.string "Hasta la llegada de AQUILES y\n"
	.string "MAGNO, dos extremistas radicales,\l"
	.string "que creen que el mundo será un\l"
	.string "lugar mejor si hacemos crecer el\l"
	.string "nivel del mar y la cantidad de\l"
	.string "tierra habitable respectivamente,\l"
	.string "se han convertido en consumados\l"
	.string "especialistas de esta clase de\l"
	.string "POKÉMON, y sus ansias por ir más\l"
	.string "allá les llevó a saber todo sobre\l"
	.string "la leyenda de estos dos POKÉMON,\l"
	.string "hasta el punto de encontrar las\l"
	.string "esferas ROJA y AZUL, perdidas por\l"
	.string "milenios, y necesarias para\l"
	.string "despertar a ambos legendarios.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_14:
.string "Estas esferas funcionan también\n"
	.string "como una brújula, pues brillan más\l"
	.string "cuanto más cerca se encuentran de\l"
	.string "su origen: KYOGRE y GROUDON.\l"
	.string "Gracias a ello, han acabado\l"
	.string "encontrando el lugar donde\l"
	.string "descansan, solo yo, el poseedor de\l"
	.string "RAYQUAZA, puede detenerlos.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_15:
.string "Sin embargo, acabas de derrotarme,\n"
	.string "y ya hemos perdido un tiempo\l"
	.string "precioso entre el combate y esta\l"
	.string "charla.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_16:
.string "Quizás sea ya demasiado tarde, debo\n"
	.string "curar a mi equipo POKÉMON.\l"
	.string "Entretanto, tú adelántate, vuelve\l"
	.string "a esos lugares y párales los pies\l"
	.string "antes de que no haya vuelta atrás.$"

AlteringCave_Sevii_Commbate_Zeus_Move_1:
emote_exclamation_mark
step_end

AlteringCave_Sevii_Commbate_Zeus_Move_2:
face_right
step_end
