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
	.string "????: Did you find something?$"

AlteringCave_Sevii_Commbate_Zeus_Texto_2:
.string "{PAUSE 20}…{PAUSE 20}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_3:
	.string "Don't waste my time, kid; this is no joke.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_4:
	.string "South of SIX ISLAND and north of ONE\n"
	.string "ISLAND?! Were they talking about\l"
	.string "releasing two ancestral POKÉMON right\l"
	.string "there? It must be them!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_5:
	.string "Alright, thanks for your help; now I\n"
	.string "need to put a stop to them before they\l"
	.string "succeed.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_6:
	.string "How? Do you want to come along as well?\n"
	.string "Do you want to see those ancestral\l"
	.string "POKÉMON in person and witness the\l"
	.string "extent of their powers?$"

Silph_7F_Encuentro_Azul_Texto_6.1:
	.string "El muy torpe pensará que ha vencido, y\n"
	.string "créeme que lo hará: está acostumbrado\l"

AlteringCave_Sevii_Commbate_Zeus_Texto_7:
	.string "Don't be stupid, TRAINER; this mission\n"
	.string "isn't for everyone. Only those chosen\l"
	.string "and prepared throughout their entire\l"
	.string "lives, like me, can approach such a task\l"
	.string "with guarantees.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_8:
	.string "Champion of your region? Did you defeat\n"
	.string "LANCE? I heard that the Champion is now\l"
	.string "someone named BLUE from PALLET TOWN.\l"
	.string "Nevertheless, it's irrelevant. That\l"
	.string "LANCE thought he had power and didn't\l"
	.string "even scratch the surface of the true\l"
	.string "potential a POKÉMON can reach. I told\l"
	.string "you, all trainers are the same in the\l"
	.string "eyes of the creator of everything,\l"
	.string "regardless of whether or not you're the\l"
	.string "Champion of your region. Your POKÉMON\l"
	.string "would fall just like those of the most\l"
	.string "inexperienced bug catcher.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_9:
	.string "So you still persist{PAUSE 20}…{PAUSE 20} Well, just because\n"
	.string "you've helped me, you'll have the\l"
	.string "privilege of witnessing something\l"
	.string "you've never seen before. I won't need\l"
	.string "to use more than 50% of my power to\l"
	.string "make you see that certain laws of this\l"
	.string "world are unquestionable. Go ahead,\l"
	.string "CHAMPION! Show me what your mortal and\l"
	.string "vulnerable POKÉMON can do against the\l"
	.string "gods!$"

AlteringCave_Sevii_Commbate_Zeus_Texto_10:
	.string "My royal and ancient POKÉMON{PAUSE 20}…{PAUSE 20} I surely\n"
	.string "underestimated you.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_11:
	.string "You're the first person in generations\n"
	.string "able to defeat the RAYQUAZA passed\l"
	.string "down through my lineage. It appears I\l"
	.string "underestimated the ultimate limits\l"
	.string "that a TRAINER in tune with their team\l"
	.string "can achieve, though it remains small\l"
	.string "compared to certain powers.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_12:
	.string "Regardless, you've earned the right to\n"
	.string "be part of this mission at your own risk.\l"
	.string "I'll introduce myself; I am ZEUS,\l"
	.string "descendant of the oldest and holiest\l"
	.string "lineage in HOENN, tasked with ensuring\l"
	.string "the balance of the entire region and\l"
	.string "paying homage to the most powerful\l"
	.string "dragon that has ever existed: PRIMAL\l"
	.string "RAYQUAZA. My ancestors, witnessing the\l"
	.string "disasters caused by the clash between\l"
	.string "KYOGRE and GROUDON, the other two\l"
	.string "titans of HOENN, decided to use\l"
	.string "RAYQUAZA as an intermediary, appeasing\l"
	.string "the wrath of these beasts. To prevent\l"
	.string "such a disaster from happening again,\l"
	.string "they decided to confine these two\l"
	.string "POKÉMON to a place far from HOENN,\l"
	.string "where no one could ever find them,\l"
	.string "keeping their dangerous powers dormant\l"
	.string "until the end of time{PAUSE 15}…{PAUSE 15}$"

AlteringCave_Sevii_Commbate_Zeus_Texto_13:
	.string "Until the arrival of ARCHIE and MAXIE,\n"
	.string "two radical extremists who believe the\l"
	.string "world will be a better place by raising\l"
	.string "sea levels or increasing habitable land.\l"
	.string "They have become accomplished\l"
	.string "specialists in this type of POKÉMON.\l"
	.string "Their eagerness to go beyond led them\l"
	.string "to learn everything about the legend of\l"
	.string "these two POKÉMON, to the point of\l"
	.string "finding the RED and BLUE orb, lost for\l"
	.string "millennia, and necessary to awaken both\l"
	.string "legendaries.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_14:
	.string "These orbs also function as a compass,\n"
	.string "as they shine brighter the closer they\l"
	.string "are to their origin: KYOGRE and\l"
	.string "GROUDON. Thanks to this, they have\l"
	.string "eventually found the place where they\l"
	.string "rest, and only I, the possessor of\l"
	.string "RAYQUAZA, can stop them.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_15:
	.string "However, you've just defeated me, and\n"
	.string "we've already lost precious time\l"
	.string "battling and talking.$"

AlteringCave_Sevii_Commbate_Zeus_Texto_16:
	.string "Perhaps it's too late; I need to heal my\n"
	.string "team. In the meantime, you can go ahead,\l"
	.string "return to those places, and stop them\l"
	.string "before there's no turning back.$"

AlteringCave_Sevii_Commbate_Zeus_Move_1:
emote_exclamation_mark
step_end

AlteringCave_Sevii_Commbate_Zeus_Move_2:
face_right
step_end

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

AlteringCave_Sevii_Commbate_Zeus_Texto_11.1:
	.string "A pesar de ello, sigue siendo poco, en\n"
	.string "comparación con ciertos poderes{PAUSE 5}…{PAUSE 5}$"

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

AlteringCave_Sevii_Commbate_Zeus_Texto_14.1:
	.string "Gracias a ello, han acabado encontrando\n"
	.string "el lugar donde descansan.\l"
	.string "Ahora solo yo, el poseedor de\l"
	.string "RAYQUAZA, puede detenerlos.$"
