SaffronCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition::
setflag FLAG_VISITED_SAFFRON_CITY
end

SaffronCity1::
lock     
faceplayer     
msgbox SaffronCity_Text_1, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_1:
.string "Oh!\n"
.string "But haven't you gone already?$"


SaffronCity2::
lock     
faceplayer     
msgbox SaffronCity_Text_2, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_2:
.string "All set for boarding, SIR!$"


SaffronCity3::
lock     
faceplayer     
msgbox SaffronCity_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_3:
.string "Yeah!\n"
.string "You have failed, ROCKETS!\l"
.string "The city is safe again!$"


SaffronCity4::
lock     
faceplayer     
msgbox SaffronCity_Text_4, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_4:
	.string "SAFFRON belongs to TEAM ROCKET now!\n"
	.string "Everything is in order, SIR!$"


SaffronCity5::
lock     
faceplayer     
msgbox SaffronCity_Text_5, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_5:
	.string "Dont worry, EXECUTIVE {PLAYER}! No\n"
	.string "one will leave this GYM to help SILPH as\l"
	.string "long I'm here!$"


SaffronCity6::
lock     
faceplayer     
msgbox SaffronCity_Text_6, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_6:
	.string "With my PIDGEOT I saw how your BOSS ran\n"
	.string "away miserably from SILPH after your\l"
	.string "failure. You are doomed!$"


SaffronCity7::
end


SaffronCity8::
lock     
faceplayer     
msgbox SaffronCity_Text_8, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_8:
	.string "You have failed, ROCKETS! I can't wait\n"
	.string "to see when LANCE gives you all the\l"
	.string "final blow!$"


SaffronCity9::
lock     
faceplayer     
msgbox SaffronCity_Text_9, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_9:
	.string "Did you really defeat BRUNO of the\n"
	.string "ELITE 4? What an honor to work for you,\l"
	.string "SIR!$"


SaffronCity10::
lock     
faceplayer     
msgbox SaffronCity_Text_10, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_10:
	.string "Under your orders, EXECUTIVE\n"
	.string "{PLAYER}! Everything's fine here!$"


SaffronCity11::
lock     
faceplayer     
msgbox SaffronCity_Text_11, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_11:
	.string "I saw your BOSS run away miserably from\n"
	.string "SILPH. You are doomed!$"


SaffronCity12::
lock     
faceplayer     
msgbox SaffronCity_Text_12, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_12:
	.string "The ELITE FOUR will teach you all a\n"
	.string "lesson!$"


SaffronCity13::
lock     
faceplayer     
msgbox SaffronCity_Text_13, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_13:
	.string "My life as a criminal makes me feel\n"
	.string "so alive!$"


SaffronCity14::
lock     
faceplayer     
msgbox SaffronCity_Text_14, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_14:
	.string "Don't worry SIR, the city is under our\n"
	.string "control, you can focus on assault\l"
	.string "SILPH!$"


SaffronCity16::
lock     
faceplayer     
msgbox SaffronCity_Text_16, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_16:
	.string "We were waiting for you SIR, with you as\n"
	.string "EXECUTIVE in charge we won't fail! I\l"
	.string "have direct orders from GIOVANNI to\l"
	.string "block the access to that RED acting as\l"
	.string "if I am sleeping, according to our\l"
	.string "LEADER, RED couldn't care less about\l"
	.string "what we do or don't do here, he'll only\l"
	.string "enter if he sees he physically has a\l"
	.string "clear path to the door, and he will…\l"
	.string "When we want him to! LONG LIFE TO TEAM\l"
	.string "ROCKET! HAIL EXECUTIVE {PLAYER}! GOD\l"
	.string "SAVE GIOVANNI!$"


SaffronCity17::
end



SaffronCityDocumento_100::
msgbox SaffronCityDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_100:
.string "SILPH's latest product!\n"
    .string "Release to be determined…$"



SaffronCityDocumento_101::
msgbox SaffronCityDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_101:
.string "TRAINER TIPS\p"
    .string "FULL HEAL cures all ailments like\n"
    .string "burns, paralysis, poisoning,\l"
    .string "freezing, and sleep.\p"
    .string "It costs a bit more, but it's more\n"
    .string "convenient than buying other items.$"



SaffronCityDocumento_102::
msgbox SaffronCityDocumento_Text_102, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_102:
.string "SILPH CO. OFFICE BUILDING$"



SaffronCityDocumento_103::
msgbox SaffronCityDocumento_Text_103, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_103:
.string "SAFFRON CITY\n"
    .string "Shining, Golden Land of Commerce$"



SaffronCityDocumento_104::
msgbox SaffronCityDocumento_Text_104, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_104:
.string "MR. PSYCHIC'S HOUSE$"



SaffronCityDocumento_105::
msgbox SaffronCityDocumento_Text_105, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_105:
.string "FIGHTING DOJO$"



SaffronCityDocumento_106::
msgbox SaffronCityDocumento_Text_106, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_106:
.string "SAFFRON CITY POKÉMON GYM\n"
    .string "LEADER: SABRINA\l"
    .string "The Master of PSYCHIC POKÉMON!$"



SaffronCityDocumento_107::
msgbox SaffronCityDocumento_Text_107, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_107:
.string "POKÉMON TRAINER FAN CLUB\p"
    .string "Many TRAINERS have scribbled their\n"
    .string "names on this sign.$"




SaffronCityDocumento_108::
msgbox SaffronCityDocumento_Text_108, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_108:
	.string "TIPS, APTITUDES AND REQUIREMENTS TO\n"
	.string "SURVIVE IN THE CITY:\p"
	.string "-Daily working hours: 10 hours, 5 days\n"
	.string "per week.\p"
	.string "- A ¥150,000 inversion, each month,\n"
	.string "per habitant, in R&D and Innovation\p"
	.string "- You have to be a great TRAINER, far\n"
	.string "above the average.\p"
	.string "- Permanent improvement attitude,\n"
	.string "self-realization, efficiency,\l"
	.string "optimization and loyalty to SILPH.$"

SaffronCity_Combate_Andra_Izq_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.2
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.3
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.4
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.5
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra::
playse SE_PIN
applymovement 15, SaffronCity_Combate_Andra_Move_2
applymovement 18, SaffronCity_Combate_Andra_Move_2
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_3
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, SaffronCity_Combate_Andra_Move_4
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, SaffronCity_Combate_Andra_Move_5.1
waitmovement 0x0
delay 10
msgbox SaffronCity_Combate_Andra_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_5
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 18, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
playse SE_SLIDING_DOOR
opendoor 33, 30
waitdooranim
applymovement 18, VerdanturfTown_Move_22
waitmovement 0x0
removeobject 18
closedoor 33, 30
waitdooranim
applymovement 15, SaffronCity_Combate_Andra_Move_7
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
waitse
delay 10
msgbox SaffronCity_Combate_Andra_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_4.1
waitmovement 0x0
delay 10
msgbox SaffronCity_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
playse 559
msgbox SaffronCity_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_14 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
waitse
delay 10
msgbox SaffronCity_Combate_Andra_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
trainerbattle_no_intro TRAINER_ANDRA_5, SaffronCity_Combate_Andra_Texto_15
msgbox SaffronCity_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
playse SE_SLIDING_DOOR
opendoor 33, 30
waitdooranim
applymovement 15, VerdanturfTown_Move_22
waitmovement 0x0
removeobject 15
closedoor 33, 30
waitdooranim
setvar VAR_UNUSED_0x40F7, 73
release
end

SaffronCity_Combate_Andra_Move_5.1:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

SaffronCity_Combate_Andra_Texto_1:
.string "PETREL: Bien, ya estamos todos, la\n"
	.string "invasión a SILPH puede dar comienzo.$"

SaffronCity_Combate_Andra_Texto_2:
.string "Por lo que hemos podido averiguar, el\n"
	.string "PRESIDENTE se encuentra en el despacho\l"
	.string "del 11F, protegido por su guardia\l"
	.string "personal. Es además imposible acceder\l"
	.string "únicamente subiendo por el ascensor,\l"
	.string "hemos de usar las baldosas.$"

SaffronCity_Combate_Andra_Texto_2.1:
	.string "Y aún más, solo podremos entrar en\n"
	.string "su despacho si obtenemos la LLAVE\l"
	.string "MAGNÉTICA, necesaria para abrir su\l"
	.string "puerta.$"

SaffronCity_Combate_Andra_Texto_3:
.string "ANDRA: Tenemos entonces que encontrar\n"
	.string "primero esa llave.\l"
	.string "¿Alguna idea de dónde puede estar?$"

SaffronCity_Combate_Andra_Texto_4:
.string "PETREL: Un objeto así solo debe de\n"
	.string "estar al acceso de miembros importantes\l"
	.string "dentro de la empresa.\l"
	.string "No nos quedará otra que registrar\l"
	.string "a cada uno de los trabajadores.$"

SaffronCity_Combate_Andra_Texto_5:
.string "SILPH y el gobierno de LANCE no se\n"
	.string "llevan muy bien, de modo que es de\l"
	.string "esperar que parte de la ÉLITE 4 no\l"
	.string "se presente, tal y como ocurrió en la\l"
	.string "CENTRAL ENERGÍA.$"
	
SaffronCity_Combate_Andra_Texto_5.1:
	.string "Aun así, debemos estar preparados para\n"
	.string "todo lo que pueda pasar.\l"
	.string "Una vez encontremos esa LLAVE MAGNÉTICA,\l"
	.string "avisaremos a GIOVANNI inmediatamente, y\l"
	.string "vosotros dos os quedaréis al pie del\l"
	.string "del cañón haciendo de escudo para\l"
	.string "que GIOVANNI pueda negociar\l"
	.string "tranquilamente con el PRESIDENTE\l"
	.string "sin ningún tipo de interferencias,\l"
	.string "¿ha quedado claro?$"

SaffronCity_Combate_Andra_Texto_6:
	.string "ANDRA: I can't wait any longer, let's move\n"
	.string "to action now!$"

SaffronCity_Combate_Andra_Texto_7:
.string "PETREL: Esa es la actitud.\n"
	.string "Vamos a ello, SILPH es nuestra.$"

SaffronCity_Combate_Andra_Texto_8:
.string "ANDRA: Una cosa, {PLAYER}.\n"
	.string "Aún no te he dado las gracias por lo de\l"
	.string "la CENTRAL ENERGÍA, con esta son ya 2\l"
	.string "veces las que has tenido que intervenir\l"
	.string "debido a mi incapacidad para cumplir la\l"
	.string "misión yo sola. Aunque me tendieran una\l"
	.string "emboscada, eso no es excusa.$"
	
SaffronCity_Combate_Andra_Texto_8.1:
    .string "¡Debí haber podido con toda la policía,\n"
	.string "y después haber batido a ZAPDOS yo sola!$"

SaffronCity_Combate_Andra_Texto_9:
.string "Esta región es idónea para progresar y\n"
	.string "mejorar como ENTRENADOR, me sorprende el\l"
	.string "contraste que hay entre lugares como\l"
	.string "este y PUEBLO LAVANDA.\l"
	.string "Todos al fin y al cabo con un ambiente\l"
	.string "único que les caracteriza.$"

SaffronCity_Combate_Andra_Texto_10:
.string "Ahora mismo mi equipo está en\n"
	.string "óptimas condiciones.\l"
	.string "¿Recuerdas el discurso de ATLAS\l"
	.string "nuestro primer día?\l"
	.string "La verdad es que he llegado ya más\l"
	.string "lejos de lo que podría imaginar, y\l"
	.string "aun así, sigo viendo margen para\l"
	.string "seguir mejorando.$"

SaffronCity_Combate_Andra_Texto_11:
.string "Espero que este lugar y toda su\n"
	.string "tecnología estén a la altura de lo\l"
	.string "que puedo esperar, sin embargo{PAUSE 15}…{PAUSE 15}$"

SaffronCity_Combate_Andra_Texto_12:
.string "No veo ahora mismo mayor reto que\n"
	.string "enfrentarme a ti, {PLAYER}.\l"
	.string "Tú eres la verdadera vara de medir para\l"
	.string "mí, el único al que aún no he podido\l"
	.string "derrotar en igualdad de condiciones.$"

SaffronCity_Combate_Andra_Texto_13:
.string "Desde nuestro combate en la BASE ROCKET,\n"
	.string "he estado entrenando más duro que nunca,\l"
	.string "informándome acerca de los mejores\l"
	.string "POKÉMON de esta región, y de cómo\l"
	.string "mejorar a los que ya tengo{PAUSE 5}…{PAUSE 5}$"

SaffronCity_Combate_Andra_Texto_14:
.string "De EJECUTIVO a EJECUTIVO{PAUSE 15}…{PAUSE 15}$"

SaffronCity_Combate_Andra_Texto_14.1:
	.string "¡Quiero que veas la arrolladora\n"
	.string "fuerza de mi equipo!$"

SaffronCity_Combate_Andra_Texto_15:
	.string "I can't believe it, what else can I do?$"

SaffronCity_Combate_Andra_Texto_16:
	.string "This time I was convinced I would\n"
	.string "defeat you, I was a fool for thinking\l"
	.string "that. You have defeated BRUNO and 2\l"
	.string "LEGENDARY POKÉMON, maybe it's too soon,\l"
	.string "but you have to know this {PLAYER},\l"
	.string "my limit is far away from what you've\l"
	.string "seen today!$"

SaffronCity_Combate_Andra_Move_1:
walk_right
walk_right
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.1:
walk_right
walk_right
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.2:
walk_right
walk_right
walk_up
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.3:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.4:
walk_left
walk_left
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.5:
walk_left
walk_left
walk_up
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_2:
emote_exclamation_mark
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_3:
face_right
step_end

SaffronCity_Combate_Andra_Move_4:
face_left
step_end

SaffronCity_Combate_Andra_Move_4.1:
delay_16
face_left
delay_16
face_up
delay_16
face_right
delay_16
face_down
delay_16
walk_in_place_down
delay_8
step_end

SaffronCity_Combate_Andra_Move_5:
walk_in_place_right
step_end

SaffronCity_Combate_Andra_Move_6:
face_up
step_end

SaffronCity_Combate_Andra_Move_7:
walk_right
delay_16
face_up
delay_16
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_8:
face_down
step_end

SaffronCity_Combate_Andra_Move_9:
walk_in_place_down
step_end

SaffronCity_Secundaria_Motorista::
compare VAR_ROUTE133_STATE, 2
goto_if_eq SaffronCity_Secundaria_Motorista_3
compare VAR_ROUTE133_STATE, 1
goto_if_eq SaffronCity_Secundaria_Motorista_2
msgbox SaffronCity_Secundaria_Motorista_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_3 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Secundaria_Motorista_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SaffronCity_Secundaria_Motorista_No
msgbox SaffronCity_Secundaria_Motorista_Texto_10 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_2
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_11 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE133_STATE, 1
release
end

SaffronCity_Secundaria_Motorista_2::
lock
faceplayer
msgbox SaffronCity_Secundaria_Motorista_Texto_8 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_3::
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_5 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox SaffronCity_Secundaria_Motorista_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_HITMONCHAN, 37, ITEM_MUSCLE_BAND
waitfanfare
msgbox SaffronCity_Secundaria_Motorista_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
fadescreen 1
delay 20
removeobject 17
fadescreen 0
release
end


SaffronCity_Secundaria_Motorista_No::
msgbox SaffronCity_Secundaria_Motorista_Texto_13 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_Move_1:
emote_exclamation_mark
step_end

SaffronCity_Secundaria_Motorista_Move_2:
walk_in_place_right
step_end

SaffronCity_Secundaria_Motorista_Move_3:
face_player
step_end

SaffronCity_Secundaria_Motorista_Texto_1:
	.string "That stupid old piece of trash{PAUSE 15}…{PAUSE 15} He's\n"
	.string "going to make all KANTO hate the\l"
	.string "BIKERS.$"

SaffronCity_Secundaria_Motorista_Texto_2:
.string "…\n"
	.string "…$"

SaffronCity_Secundaria_Motorista_Texto_3:
	.string "ROCKET EXECUTIVE {PLAYER}! Haven't\n"
	.string "you heard? They want to remove the\l"
	.string "UNDERGROUND PATHS as a connection\l"
	.string "point between CERULEAN and VERMILION,\l"
	.string "also between CELADON and LAVENDER!\l"
	.string "The worst thing is that they are going\l"
	.string "to blame us, the BIKERS, for causing\l"
	.string "supposed disturbances there! And all\l"
	.string "because they want the people to pass\l"
	.string "through SAFFRON CITY, right where the\l"
	.string "company they're going to create will be,\l"
	.string "at the expense of our reputation!$"

SaffronCity_Secundaria_Motorista_Texto_4:
	.string "Wow! You're amazing {PLAYER}! So for\n"
	.string "now he has abandoned his idea of\l"
	.string "removing the UNDERGROUND PATH! Wait to\l"
	.string "see when I tell the others!$"

SaffronCity_Secundaria_Motorista_Texto_5:
	.string "Now I understand your fame as an\n"
	.string "exceptional TRAINER, here you have the\l"
	.string "POKÉMON I mentioned before.$"

SaffronCity_Secundaria_Motorista_Texto_6:
	.string "YOU OBTAINED A LV.37 HITMONCHAN!!$"

SaffronCity_Secundaria_Motorista_Texto_7:
	.string "The truth is that it was a gift from my\n"
	.string "friend, the KARATE MASTER, but a BIKER\l"
	.string "like me has nothing to do with a POKÉMON\l"
	.string "like HITMONCHAN, I hope you will use it\l"
	.string "properly. Now I'm going to leave,\l"
	.string "{PLAYER}, you know we will always help\l"
	.string "the TEAM ROCKET.$"

SaffronCity_Secundaria_Motorista_Texto_8:
	.string "How is the missing going? Remember, the\n"
	.string "person you must find usually spends\l"
	.string "hours at the PEWTER CITY MUSEUM, there\l"
	.string "you should find him.$"

SaffronCity_Secundaria_Motorista_Texto_9:
	.string "Only someone with your power and\n"
	.string "influence can put the businessman\l"
	.string "behind all of this in his place. If you\l"
	.string "help us with this problem, I'll give you a\l"
	.string "strong and rare POKÉMON. Do you accept\l"
	.string "it?$"

SaffronCity_Secundaria_Motorista_Texto_10:
	.string "I knew you wouldn't let us down! That's\n"
	.string "the spirit of cooperation among\l"
	.string "comrades! Listen {PLAYER}! The man\l"
	.string "responsible for all of this is a FOSSIL\l"
	.string "enthusiast and spends hours at the\l"
	.string "PEWTER CITY MUSEUM.$"

SaffronCity_Secundaria_Motorista_Texto_11:
	.string "Actually he is the owner of a railway\n"
	.string "company that wants to connect JOHTO\l"
	.string "with KANTO, but he thinks that the\l"
	.string "region's UNDERGROUND PATHS would\l"
	.string "affect his business if they remain\l"
	.string "active. That's why he wants to get rid\l"
	.string "of them through any possible way.$"

SaffronCity_Secundaria_Motorista_Texto_12:
	.string "If someone like you shows him how we\n"
	.string "manage things here, we'll keep\l"
	.string "UNDERGROUND PATHS and our reputations\l"
	.string "intact. We trust you, {PLAYER}.$"

SaffronCity_Secundaria_Motorista_Texto_13:
	.string "I understand, comrade, you must be\n"
	.string "already very busy because of\l"
	.string "GIOVANNI's orders.$"


Silph_Barrera::
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Silph_Barrera_3
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph_Barrera_2
release
end

Silph_Barrera_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_1
waitmovement 0x0
msgbox Silph_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_2
waitmovement 0x0
release
end

Silph_Barrera_3::
release
end

Silph_Barrera_Texto_1:
	.string "(If I enter here now, I could ruin the\n"
	.string "entire mission).$"

Silph_Barrera_Move_1:
walk_in_place_down
step_end

Silph_Barrera_Move_2:
walk_slow_down
step_end
