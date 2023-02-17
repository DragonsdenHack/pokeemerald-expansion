PokemonMansion_1F_MapScripts::
	.byte 0

PokemonMansion1F_1::
end



PokemonMansion1F_2::
end



PokemonMansion1F_3::
end



PokemonMansion1F_4::
end



PokemonMansion1F_5::
end



PokemonMansion1F_6::
lock
faceplayer
msgbox PokemonMansion1F_6_Texto_1 MSGBOX_AUTOCLOSE
applymovement 6, PokemonMansion1F_6_Move_1
waitmovement 0x0
release
end

PokemonMansion1F_6_Move_1:
face_left
step_end

PokemonMansion1F_6_Texto_1:
.string "Métete en tus asuntos, no estamos\n"
	.string "cometiendo alguna irregularidad de\l"
	.string "ningún tipo ni nada por el estilo,\l"
	.string "así que desaparece.$"



PokemonMansion1F_7::
lock
faceplayer
msgbox PokemonMansion1F_7_Texto_1 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion1F_7_Move_1
waitmovement 0x0
release
end

PokemonMansion1F_7_Move_1:
face_up
step_end

PokemonMansion1F_7_Texto_1:
.string "¿Quieres algo ROCKET?\n"
	.string "¿No ves que solo somos dos\l"
	.string "honrados trabajadores que tratan\l"
	.string "de ganarse la vida como todos?\l"
	.string "No nos hagas perder más el tiempo.$"



PokemonMansion1F_EventScript_Chico::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TORCHIC, PokemonMansion1F_Text_ChicoIntro, PokemonMansion1F_Text_ChicoDefeated
	msgbox PokemonMansion1F_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



PokemonMansion1F_EventScript_Cientifico::
	trainerbattle_single TRAINER_ANDREW, PokemonMansion1F_Text_CientificoIntro, PokemonMansion1F_Text_CientificoDefeated
	msgbox PokemonMansion1F_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end

PokemonMansion_1F_Ladrones_Centro::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0X0
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_5
waitmovement 0X0
goto PokemonMansion_1F_Ladrones

PokemonMansion_1F_Ladrones_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0X0
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0X0
msgbox PokemonMansion_1F_Ladrones_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_5.1
waitmovement 0X0
goto PokemonMansion_1F_Ladrones

PokemonMansion_1F_Ladrones_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0x0
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_5.2
waitmovement 0X0
goto PokemonMansion_1F_Ladrones

PokemonMansion_1F_Ladrones::
playse SE_PIN
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
applymovement 7, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_1F_Ladrones_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, PokemonMansion_1F_Ladrones_Move_6
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_1F_Ladrones_Move_7
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_1F_Ladrones_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, PokemonMansion_1F_Ladrones_Move_7
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_9 MSGBOX_AUTOCLOSE
applymovement 7, PokemonMansion_1F_Ladrones_Move_8
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_9
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox PokemonMansion_1F_Ladrones_Texto_10 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_1, PokemonMansion_1F_Ladrones_Texto_11
applymovement 7, PokemonMansion_1F_Ladrones_Move_2
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_12 MSGBOX_AUTOCLOSE
applymovement 6, PokemonMansion_1F_Ladrones_Move_7
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0x0
playse MUS_RG_ENCOUNTER_ROCKET
msgbox PokemonMansion_1F_Ladrones_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LADRON_2, PokemonMansion_1F_Ladrones_Texto_14
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_3
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_1
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_4
applymovement 7, PokemonMansion_1F_Ladrones_Move_4
applymovement 6, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_16 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 8
applymovement 8, PokemonMansion_1F_Ladrones_Move_10
waitmovement 0x0
applymovement 6, PokemonMansion_1F_Ladrones_Move_7
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_17 MSGBOX_AUTOCLOSE
msgbox PokemonMansion_1F_Ladrones_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonMansion_1F_Ladrones_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 8, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_19 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_11
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_20 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_12
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox PokemonMansion_1F_Ladrones_Texto_21 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_119_SCOTT
trainerbattle_no_intro TRAINER_LADRON_3, PokemonMansion_1F_Ladrones_Texto_22
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_4
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_9
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_13
applymovement 7, PokemonMansion_1F_Ladrones_Move_14
waitmovement 0x0
playse SE_PIN
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
applymovement 7, PokemonMansion_1F_Ladrones_Move_1
applymovement 8, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
applymovement 6, PokemonMansion_1F_Ladrones_Move_9
applymovement 8, PokemonMansion_1F_Ladrones_Move_9
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_24 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
delay 15
playse MUS_OBTAIN_ITEM
additem ITEM_PROTEIN, 10
msgbox PokemonMansion_1F_Ladrones_Texto_25 MSGBOX_DEFAULT
waitse
delay 15
playse MUS_OBTAIN_ITEM
additem ITEM_RARE_CANDY, 3
msgbox PokemonMansion_1F_Ladrones_Texto_26 MSGBOX_DEFAULT
delay 15
playfanfare MUS_OBTAIN_TMHM
msgbox PokemonMansion_1F_Ladrones_Texto_27 MSGBOX_DEFAULT
givemon SPECIES_CHARMANDER, 5, ITEM_CHARCOAL
waitfanfare
playse SE_PIN
applymovement 6, PokemonMansion_1F_Ladrones_Move_1
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_28 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_29 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox PokemonMansion_1F_Ladrones_Texto_30 MSGBOX_DEFAULT
waitse
applymovement OBJ_EVENT_ID_PLAYER, PokemonMansion_1F_Ladrones_Move_16
applymovement 8, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_31 MSGBOX_AUTOCLOSE
applymovement 8, PokemonMansion_1F_Ladrones_Move_15
waitmovement 0x0
msgbox PokemonMansion_1F_Ladrones_Texto_32 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
fadescreen 1
removeobject 6
removeobject 7
removeobject 8
fadescreen 0
setvar VAR_UNUSED_0x4091, 2
release
end

PokemonMansion_1F_Ladrones_Texto_1:
.string "¡Ya tenemos todo para largarnos\n"
	.string "de aquí para siempre!$"

PokemonMansion_1F_Ladrones_Texto_2:
.string "Sí. No conviene permanecer en\n"
	.string "KANTO más tiempo, ya nos conocen,\l"
	.string "hemos estafado a demasiada gente,\l"
	.string "en JOHTO iniciaremos una nueva\l"
	.string "etapa, aunque sus habitantes son\l"
	.string "algo menos pudientes que los de\l"
	.string "aquí...$"

PokemonMansion_1F_Ladrones_Texto_3:
.string "¿Quién eres tú?\n"
	.string "¿Un ROCKET?\l"
	.string "Ocúpate de lo tuyo, si vuestro\l"
	.string "negocio no funciona, no es nuestro\l"
	.string "problema.$"

PokemonMansion_1F_Ladrones_Texto_4:
.string "... ...$"

PokemonMansion_1F_Ladrones_Texto_5:
.string "¿Cómo dices?\n"
	.string "¿Quieres recuperar 2 millones de\l"
	.string "POKÉS que cobramos a un científico\l"
	.string "por un METEORITO?$"

PokemonMansion_1F_Ladrones_Texto_6:
.string "Eso ya pasó, debió de darse cuenta\n"
	.string "en su momento, ante la ley no\l"
	.string "podrá hacer nada ya que se le ha\l"
	.string "acabado el plazo de reclamación.\l"
	.string "Su dinero lo tenemos ahora\l"
	.string "nosotros de forma legítima, ¿es\l"
	.string "que no lo entiendes?\l"
	.string "Es lo que tiene conocerse bien la\l"
	.string "ley chico, aquellos que mejor la\l"
	.string "conocen son aquellos que parece\l"
	.string "que hacen trampas.$"

PokemonMansion_1F_Ladrones_Texto_7:
.string "Ahora largo de aquí, estamos en\n"
	.string "plena mudanza, en cuanto crucemos\l"
	.string "la frontera del MONTE PLATEADO la\l"
	.string "justicia de KANTO ya no podrá\l"
	.string "tocarnos, ya estaremos lejos.\l"
	.string "¡Lejos y forrados!$"

PokemonMansion_1F_Ladrones_Texto_8:
.string "De modo que insistes, vosotros los\n"
	.string "ROCKET sois unos ignorantes, en\l"
	.string "lugar de actuar en la sombra, como\l"
	.string "nosotros, hacéis públicas vuestras\l"
	.string "fechorías, y todo el mundo os\l"
	.string "apedrea mediáticamente por ello.$"

PokemonMansion_1F_Ladrones_Texto_9:
.string "¿Qué dices?\n"
	.string "¿No se trata de robar a la\l"
	.string "gente, sino de reunir recursos y\l"
	.string "mandar un claro mensaje a la\l"
	.string "región de KANTO?$"

PokemonMansion_1F_Ladrones_Texto_10:
.string "¡Lo último que necesito es que sea\n"
	.string "precisamente un ROCKET quien me\l"
	.string "de a mi lecciones morales!\l"
	.string "¡Vas a probar el poder de los\l"
	.string "mejores POKÉMON que puedes\l"
	.string "encontrar en el mercado negro!$"

PokemonMansion_1F_Ladrones_Texto_11:
.string "¡No puede ser!\n"
	.string "¡Me han estafado!$"

PokemonMansion_1F_Ladrones_Texto_12:
.string "Dijeron que estos POKÉMON podían\n"
	.string "con cualquier ENTRENADOR de RUTA,\l"
	.string "esto no quedará así.$"

PokemonMansion_1F_Ladrones_Texto_13:
.string "Así que sigues insitiendo en que\n"
	.string "te devolvamos ese dinero, no solo\l"
	.string "no te lo devolveremos.\l"
	.string "¡Te quitaremos el que tú ya\l"
	.string "tienes!$"

PokemonMansion_1F_Ladrones_Texto_14:
.string "¿Yo también he perdido?$"

PokemonMansion_1F_Ladrones_Texto_15:
.string "¿Donde has comprado esos POKÉMON?\n"
	.string "Me dijeron que ya no quedaban\l"
	.string "mejores ejemplares en el mercado\l"
	.string "negro.\l"
	.string "¡No puede ser!$"

PokemonMansion_1F_Ladrones_Texto_16:
.string "¿Se puede saber qué estáis\n"
	.string "haciendo?\l"
	.string "Acordamos largarnos de este lugar\l"
	.string "y poner rumbo a JOHTO hace ya 10\l"
	.string "min.$"

PokemonMansion_1F_Ladrones_Texto_17:
.string "Este tipo quiere recuperar el\n"
	.string "dinero que nos pagó ese científico\l"
	.string "por la roca del MT.MOON.$"

PokemonMansion_1F_Ladrones_Texto_18:
.string "Un momento...\n"
	.string "Yo a ti te he visto antes...$"

PokemonMansion_1F_Ladrones_Texto_19:
.string "¡El ROCKET novato al que engañé en\n"
	.string "el MT.MOON!\l"
	.string "¿No tuviste suficiente?$"

PokemonMansion_1F_Ladrones_Texto_20:
.string "Puede que ahora tengas más idea de\n"
	.string "como funcionan las cosas aquí por\l"
	.string "KANTO, pero sigues siendo un\l"
	.string "aficionado comparado con nosotros,\l"
	.string "nadie nos supera en picardía, en\l"
	.string "aprovechar el momento y atacar\l"
	.string "cuando la víctima más vulnerable\l"
	.string "se encuentra.$"

PokemonMansion_1F_Ladrones_Texto_21:
.string "¡Para ello requieres de\n"
	.string "inteligencia e intuición!\l"
	.string "¡Y mi intuición me dice que tu\l"
	.string "equipo está demasiado cansado como\l"
	.string "para soportar otro combate más!$"

PokemonMansion_1F_Ladrones_Texto_22:
.string "¿De donde has sacado esa fuerza?\n"
	.string "¡Esto no entraba en nuestros\l"
	.string "planes!$"

PokemonMansion_1F_Ladrones_Texto_23:
.string "Maldición, no creas que vas a\n"
	.string "salirte con la tuya ROCKET, ya te\l"
	.string "engañé una vez y puedo volver a...$"

PokemonMansion_1F_Ladrones_Texto_24:
.string "¡E-espera!\n"
	.string "¿Adonde diablos vas?\l"
	.string "¡Allí no hay nada!$"

PokemonMansion_1F_Ladrones_Texto_25:
.string "¡{PLAYER} encontró 10 PROTEÍNAS!$"

PokemonMansion_1F_Ladrones_Texto_26:
.string "¡{PLAYER} encontró 3\n"
	.string "CARAMELOSRAROS!$"

PokemonMansion_1F_Ladrones_Texto_27:
.string "¡¡{PLAYER} OBTUVO UN CHARMANDER AL\n"
	.string "NV:5!!$"

PokemonMansion_1F_Ladrones_Texto_28:
.string "¡¡NO!!\n"
	.string "¡El CHARMANDER que iba a vender en\l"
	.string "JOHTO!\l"
	.string "¡En ese lugar dan 4 millones de\l"
	.string "POKÉS por él!$"

PokemonMansion_1F_Ladrones_Texto_29:
.string "¿¡Qué crees que estás haciendo\n"
	.string "ROCKET?!\l"
	.string "¡Detente y...!$"

PokemonMansion_1F_Ladrones_Texto_30:
.string "¡{PLAYER} encontró los 2 millones\n"
	.string "de POKÉS robados al científico!$"

PokemonMansion_1F_Ladrones_Texto_31:
.string "¡Ya es suficiente!\n"
	.string "¡No creas que has ganado ROCKET!\l"
	.string "¡La mayoría de la mercancía\l"
	.string "ya está dentro de nuestro camión\l"
	.string "rumbo a JOHTO!\l"
	.string "¡Solo has llegado a arrebatarnos\l"
	.string "las migajas que faltaban por\l"
	.string "embarcar!$"

PokemonMansion_1F_Ladrones_Texto_32:
.string "Alguien como tú jamás visitará\n"
	.string "JOHTO, de modo que esto es un\l"
	.string "adios para siempre.\l"
	.string "¡Disfruta de la pobreza que asola\l"
	.string "a esta región ROCKET!\l"
	.string "¡Pobreza a la que nosotros hemos\l"
	.string "contribuido jojojo!$"

PokemonMansion_1F_Ladrones_Move_1:
emote_exclamation_mark
step_end

PokemonMansion_1F_Ladrones_Move_2:
walk_in_place_down
step_end

PokemonMansion_1F_Ladrones_Move_3:
face_left
step_end

PokemonMansion_1F_Ladrones_Move_4:
face_right
step_end

PokemonMansion_1F_Ladrones_Move_5:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_5.1:
walk_down
walk_down
walk_down
walk_left
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_5.2:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_6:
walk_down
walk_right
walk_right
step_end

PokemonMansion_1F_Ladrones_Move_7:
walk_in_place_right
step_end

PokemonMansion_1F_Ladrones_Move_8:
walk_right
walk_right
walk_in_place_down
step_end

PokemonMansion_1F_Ladrones_Move_9:
face_up
step_end

PokemonMansion_1F_Ladrones_Move_10:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_11:
walk_in_place_left
step_end

PokemonMansion_1F_Ladrones_Move_12:
walk_left
step_end

PokemonMansion_1F_Ladrones_Move_13:
walk_up
step_end

PokemonMansion_1F_Ladrones_Move_14:
slide_left
walk_in_place_right
step_end

PokemonMansion_1F_Ladrones_Move_15:
walk_in_place_up
step_end

PokemonMansion_1F_Ladrones_Move_16:
face_down
step_end
