SsAnne_8F_MapScripts::
	.byte 0

SsAnne8F_2::
lock     
faceplayer     
msgbox SsAnne8F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne8F_Text_2:
	.string "ANDRA: {PLAYER}, make sure the\n"
	.string "Captain can't escape. Let's you and I\l"
	.string "have a little chat with him.$"



SsAnne8F_7::
end



SsAnne8F_8::
end



SsAnne8F_9::
end



SsAnne8FDocumento_100::
msgbox SsAnne8FDocumento_Text_100, MSGBOX_SIGN   
end

SsAnne8FDocumento_Text_100:
.string "Eww!\n"
	.string "Shouldn't have looked!$"



SsAnne8FDocumento_101::
msgbox SsAnne8FDocumento_Text_101, MSGBOX_SIGN   
end

SsAnne8FDocumento_Text_101:
.string "How to prevent nausea…\n"
	.string "The CAPTAIN is reading this!$"

SsAnne_8F_Capitan_move_6.1:
delay_8
face_right
delay_16
delay_8
face_up
step_end

SsAnne_8F_Capitan::
applymovement 2, SsAnne_8F_Capitan_move_1
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_2
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_1 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_3
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_2 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_4
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_3 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_4 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_5
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 6
delay 20
playse SE_PIN
applymovement 2, SsAnne_8F_Capitan_move_6
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SsAnne_8F_Capitan_move_6.1
waitmovement 0x0
delay 10
msgbox SsAnne_8F_Capitan_Text_7 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, SsAnne_8F_Capitan_move_7
waitmovement 0x0
delay 10
msgbox SsAnne_8F_Capitan_Text_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
delay 10
msgbox SsAnne_8F_Capitan_Text_10 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_9
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, SsAnne_8F_Capitan_move_9.1
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_9.1
waitmovement 0x0
delay 15
msgbox SsAnne_8F_Capitan_Text_11.1 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_12 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_11
applymovement 2, SsAnne_8F_Capitan_move_11
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 3
applymovement 3, SsAnne_8F_Capitan_move_12
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 1
applymovement 1, SsAnne_8F_Capitan_move_13
waitmovement 0x0
playse SE_EXIT
delay 15
addobject 4
applymovement 4, SsAnne_8F_Capitan_move_14
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_1
applymovement 2, SsAnne_8F_Capitan_move_1
applymovement 5, SsAnne_8F_Capitan_move_5
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 6
msgbox SsAnne_8F_Capitan_Text_14 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_14.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, SsAnne_8F_Capitan_move_15
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_15 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_16 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_16.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, SsAnne_8F_Capitan_move_11
waitmovement 0x0
waitse
msgbox SsAnne_8F_Capitan_Text_18 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_19 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_20 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_20.1 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_21 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_22 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_23 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_16
waitmovement 0x0
applymovement 5, SsAnne_8F_Capitan_move_17
waitmovement 0x0
playse 450
msgbox SsAnne_8F_Capitan_Text_24 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_24.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAPITAN_1, SsAnne_8F_Capitan_Text_25
msgbox SsAnne_8F_Capitan_Text_26 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_18
delay 15
playmoncry SPECIES_GOLBAT, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
playse SE_M_WING_ATTACK
delay 30
playse SE_SUPER_EFFECTIVE
delay 30
playse SE_FAINT
delay 15
applymovement 2, SsAnne_8F_Capitan_move_19
waitmovement 0x0
delay 15
playse SE_BALL_TRADE
waitse
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SsAnne_8F_Capitan_Text_27 MSGBOX_DEFAULT
waitfanfare
msgbox SsAnne_8F_Capitan_Text_28 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_29 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_8.1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_30 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_30.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 5, SsAnne_8F_Capitan_move_20
waitmovement 0x0
waitse
msgbox SsAnne_8F_Capitan_Text_30.2 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_30.3 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_31 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_32 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_TENTACOOL, CRY_MODE_ENCOUNTER
waitmoncry
msgbox SsAnne_8F_Capitan_Text_33 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_SCRATCH
delay 30
playse SE_M_TOXIC
delay 30
msgbox SsAnne_8F_Capitan_Text_34 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_5
applymovement 2, SsAnne_8F_Capitan_move_21
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_35 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, SsAnne_8F_Capitan_move_6
delay 5
applymovement 3, SsAnne_8F_Capitan_move_6
delay 5
applymovement 4, SsAnne_8F_Capitan_move_6
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_36 MSGBOX_AUTOCLOSE
delay 5
applymovement 1, SsAnne_8F_Capitan_move_22
applymovement 3, SsAnne_8F_Capitan_move_22
applymovement 4, SsAnne_8F_Capitan_move_22
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_10
applymovement 2, SsAnne_8F_Capitan_move_1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_37 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_23
waitmovement 0x0
setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 27
release
end

SsAnne_8F_Capitan_move_8.1:
delay_8
face_down
delay_16
delay_8
face_up
delay_8
step_end

SsAnne_8F_Capitan_move_9.1:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_Text_1:
	.string "Is there something I can help\n"
	.string "you with, kids?$"

SsAnne_8F_Capitan_Text_2:
	.string "ANDRA: Actually, there is. You see,\n"
	.string "Captain, you're known as a living legend\l"
	.string "in the seafaring world; you've sailed the\l"
	.string "seven seas and seen many rare POKÉMON,\l"
	.string "isn't that right?$"

SsAnne_8F_Capitan_Text_3:
	.string "We were wondering if you might show us a\n"
	.string "glimpse of all those travels by letting\l"
	.string "us see that famous jar - the jar that is\l"
	.string "said to hold one of the greatest\l"
	.string "mysteries in the world…$"

SsAnne_8F_Capitan_Text_4:
	.string "CAPTAIN: You mean, this jar here?$"

SsAnne_8F_Capitan_Text_5:
.string "ANDRA: Wow, it's so… mysterious.$"

SsAnne_8F_Capitan_Text_6:
	.string "CAPTAIN: That's right, kid. The POKÉMON\n"
	.string "this fragment belongs to is unlike\l"
	.string "anything you've ever seen before. Have\l"
	.string "you heard of the legend of the\l"
	.string "Pseudo-Legendary POKÉMON?$"

SsAnne_8F_Capitan_Text_7:
	.string "ANDRA: Pseudo-Legendary POKÉMON, sir?$"

SsAnne_8F_Capitan_Text_8:
	.string "CAPTAIN: In this region, you have\n"
	.string "Lance's Dragonite, for example.$"

SsAnne_8F_Capitan_Text_9:
.string "CAPITÁN: Esos POKÉMON que, sin\n"
	.string "nacer con las cualidades que por\l"
	.string "decreto la madre naturaleza ha\l"
	.string "dotado a los LEGENDARIOS, son\l"
	.string "capaces de crecer y desarrollarse\l"
	.string "de tal modo que, después de un\l"
	.string "largo proceso, en su etapa final\l"
	.string "resultan ser POKÉMON con\l"
	.string "características similares o\l"
	.string "incluso superiores a las de un\l"
	.string "legendario común.$"
	
SsAnne_8F_Capitan_Text_9.1:
	.string "Un PSEUDOLEGENDARIO simboliza a\n"
	.string "la fauna y flora de su región.\l"
	.string "Desde sus primeras etapas, su\l"
	.string "fisionomía está dotada de esa\l"
	.string "esencia propia de la región de\l"
	.string "origen; por ello es capaz después\l"
	.string "de alcanzar cotas tan altas.$"

SsAnne_8F_Capitan_Text_10:
.string "CAPITÁN: POKÉMON escogidos entre\n"
	.string "los mortales, a los que se le da\l"
	.string "la oportunidad potencial de entrar\l"
	.string "en terreno divino; eso es lo que\l"
	.string "son los PSEUDOLEGENDARIOS.$"

SsAnne_8F_Capitan_Text_11:
.string "CAPITÁN: El POKÉMON al que\n"
	.string "pertenece este fragmento tiene\l"
	.string "muchas cualidades que suelen\l"
	.string "atribuirse a PSEUDOLEGENDARIOS,\l"
	.string "pero a la vez comparte rasgos de\l"
	.string "LEGENDARIO.$"
	
SsAnne_8F_Capitan_Text_11.1:
	.string "Es un caso único.$"

SsAnne_8F_Capitan_Text_12:
.string "ANDRA: Impresionante. Parece usted\n"
	.string "un hombre culto, CAPITÁN, con 1000\l"
	.string "historias que contar.$"

SsAnne_8F_Capitan_Text_13:
.string "CAPITÁN: Y vosotros parecéis dos\n"
	.string "jóvenes con muchas ganas de\l"
	.string "aprender. Estaría encantado de\l"
	.string "enseñaros, de no ser porque{PAUSE 25}…{PAUSE 25}$"

SsAnne_8F_Capitan_Text_14:
.string "CAPITÁN: Sé quienes sois y a lo\n"
	.string "que habéis venido. Un tripulante\l"
	.string "ya nos alertó, acerca de cierta\l"
	.string "organización criminal que se hace\l"
	.string "llamar TEAM ROCKET.\l"
	.string "Vuestra vestimenta coincide\l"
	.string "exactamente con su descripción.$"

SsAnne_8F_Capitan_Text_14.1:
.string "ANDRA:{PAUSE 15}…{PAUSE 15}…{PAUSE 15}$"

SsAnne_8F_Capitan_Text_15:
.string "Sabéis, de todos los mares en los\n"
	.string "que he estado, los de HOENN son\l"
	.string "con diferencia los más amplios,\l"
	.string "salvajes y diversos, los únicos\l"
	.string "capaces de hacerte olvidar toda la\l"
	.string "maldita corrupción que hay en este\l"
	.string "mundo.$"

SsAnne_8F_Capitan_Text_16:
.string "Y ahora me váis a decir a mí que\n"
	.string "dos delincuentes, provenientes de\l"
	.string "una región cuyas mejores aguas\l"
	.string "están contaminadas por la CENTRAL\l"
	.string "ENERGÍA y el CAMINO BICIS, ¿van a\l"
	.string "venir y robarme a MÍ un objeto\l"
	.string "único que refleja mi labor como\l"
	.string "navegante durante más de 30 años?$"

SsAnne_8F_Capitan_Text_16.1:
	.string "Oh, no. No tenéis ni los arrestos ni\n"
	.string "la experiencia para hacer tal cosa.$"

SsAnne_8F_Capitan_Text_17:
.string "ANDRA: Perdone que discrepe, CAPITÁN.\n"
	.string "No existen mares como los del\l"
	.string "ARCHI7, tampoco parajes tan\l"
	.string "enigmáticos como los de ahí.$"

SsAnne_8F_Capitan_Text_18:
.string "CAPITÁN: Vaya, no tienes mal gusto,\n"
	.string "chavala. Debe ser tu lugar de origen.$"

SsAnne_8F_Capitan_Text_19:
.string "Tal vez tengas razón.\n"
	.string "El ARCHI7 es una materia que aún tengo\l"
	.string "pendiente por explorar al 100%.\l"
	.string "He oído que entre las aguas que\l"
	.string "conectan las 7 grandes islas\l"
	.string "existen ciertos islotes, inexplorados.$"

SsAnne_8F_Capitan_Text_20:
.string "Los mapas topográficos contemplan\n"
	.string "8, 9 e incluso un total de 10\l"
	.string "islas por los alrededores. El\l"
	.string "nombre de ARCHI7 es pues una mera\l"
	.string "formalidad.$"

SsAnne_8F_Capitan_Text_20.1:
	.string "ANDRA: Qué interesante{PAUSE 15}…{PAUSE 15}$"

SsAnne_8F_Capitan_Text_21:
.string "CAPITÁN: Me gustaría seguir charlando\n"
	.string "todo el día sobre estos temas.\l"
	.string "Por desgracia para vosotros, habéis\l"
	.string "venido a robar algo preciado para mí,\l"
	.string "¡y no consentiré tal cosa!$"

SsAnne_8F_Capitan_Text_22:
.string "CAPTAIN: SAILORS!\n"
	.string "Take care of the girl!$"

SsAnne_8F_Capitan_Text_23:
.string "ANDRA: It's going to be ME\n"
	.string "taking care of YOU!$"

SsAnne_8F_Capitan_Text_24:
.string "CAPITÁN: Yo me encargaré de ti. No\n"
	.string "tienes idea de la que te espera,\l"
	.string "vil canalla.\l"
	.string "¡Tus POKÉMON no pueden tocar a mi\l"
	.string "tripulación curtida en alta mar\l"
	.string "durante años!$"

SsAnne_8F_Capitan_Text_24.1:
	.string "¡Voy a cortarte por la mitad y\n"
	.string "servir lo que quede de ti en la\l"
	.string "fiesta de proa!$"

SsAnne_8F_Capitan_Text_25:
.string "Who the hell are you people?!$"

SsAnne_8F_Capitan_Text_26:
.string "ANDRA: GOLBAT, finish this!\n"
	.string "WING ATTACK!$"

SsAnne_8F_Capitan_Text_27:
.string "-ANDRA robó el frasco al CAPITÁN.-$"

SsAnne_8F_Capitan_Text_28:
.string "CAPITÁN: Esto no puede estar\n"
	.string "pasando. Mi tripulación ninguneada\l"
	.string "y ridiculizada por un par de\l"
	.string "reclutas cualquiera, provenientes\l"
	.string "de una banda local.\l"
	.string "¡Qué deshonra!$"

SsAnne_8F_Capitan_Text_29:
.string "ANDRA: RECLUTAS de ALTO RANGO, CAPITÁN.\n"
	.string "No somos unos cualquiera.$"

SsAnne_8F_Capitan_Text_30:
.string "ANDRA: Además, mire el lado\n"
	.string "positivo. Nosotros le daremos\l"
	.string "buen uso a ese frasco.$"
	
SsAnne_8F_Capitan_Text_30.1:
	.string "Descubriremos a qué maldito POKÉMON\n"
	.string "pertenece, en lugar de dejarlo aquí\l"
	.string "criando polvo, sin otra utilidad\l"
	.string "que la de hacer recordar el pasado\l"
	.string "a una vieja gloria.$"

SsAnne_8F_Capitan_Text_30.2:
	.string "No se lo tome como algo personal,\n"
	.string "en pago y señal de agradecimiento\l"
	.string "por su colaboración, le enviaremos\l"
	.string "una carta con los datos que\l"
	.string "obtengamos.$"

SsAnne_8F_Capitan_Text_30.3:
	.string "¿Qué le parece?\n"
	.string "Esa información puede valer\l"
	.string "millones.$"

SsAnne_8F_Capitan_Text_31:
.string "CAPITÁN: ¡Joven insolente!\n"
	.string "¡¿Te burlas de mí?! ¡Nadie va a\l"
	.string "salir de aquí con esa reliquia!$"

SsAnne_8F_Capitan_Text_32:
.string "ANDRA: TENTACOOL!\n"
	.string "POISON STING!$"

SsAnne_8F_Capitan_Text_33:
.string "cool!$"

SsAnne_8F_Capitan_Text_34:
.string "CAPTAIN: Hnrgh!$"

SsAnne_8F_Capitan_Text_35:
.string "CAPTAIN: My head…\n"
	.string "That thug poisoned me!$"

SsAnne_8F_Capitan_Text_36:
	.string "SAILORS: CAPTAIN!$"

SsAnne_8F_Capitan_Text_37:
.string "ANDRA: {PLAYER}! Now!\n"
	.string "We need to get out of here, fast!$"

SsAnne_8F_Capitan_move_1:
face_up
step_end

SsAnne_8F_Capitan_move_2:
walk_in_place_left
step_end

SsAnne_8F_Capitan_move_3:
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_4:
walk_in_place_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_5:
walk_right
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_6:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_move_7:
walk_left
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_8:
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_9:
face_right
step_end

SsAnne_8F_Capitan_move_10:
face_down
step_end

SsAnne_8F_Capitan_move_11:
emote_exclamation_mark
face_down
step_end

SsAnne_8F_Capitan_move_12:
walk_right
walk_right
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_13:
walk_right
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_14:
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_15:
walk_right
walk_right
face_up
step_end

SsAnne_8F_Capitan_move_16:
walk_right
walk_right
walk_right
walk_down
step_end


SsAnne_8F_Capitan_move_17:
walk_left
walk_in_place_down
step_end


SsAnne_8F_Capitan_move_18:
walk_down
walk_down
walk_left
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_19:
walk_left
walk_up
walk_up
walk_up
step_end

SsAnne_8F_Capitan_move_20:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_move_21:
walk_down
walk_down
walk_down
walk_left
walk_in_place_right
step_end

SsAnne_8F_Capitan_move_22:
walk_up
walk_up
walk_up
step_end

SsAnne_8F_Capitan_move_23:
walk_fast_down
face_left
delay_8
step_end

SsAnne_8F_Capitan_Papelera::
compare VAR_UNUSED_0x40F7, 26
goto_if_gt SsAnne_8F_Capitan_Papelera_2
msgbox SsAnne_8F_Capitan_Papelera_Texto_1 MSGBOX_AUTOCLOSE
release
end

SsAnne_8F_Capitan_Papelera_2::
msgbox SsAnne_8F_Capitan_Papelera_Texto_2 MSGBOX_AUTOCLOSE
release
end

SsAnne_8F_Capitan_Papelera_Texto_1:
.string "This trash can is\n"
	.string "shiny and clean.$"

SsAnne_8F_Capitan_Papelera_Texto_2:
	.string "Gross! Shouldn't have looked!$"

SsAnne_8F_Capitan_Marineros::
msgbox SsAnne_8F_Capitan_Marineros_Text_1 MSGBOX_SIGN
release
end


SsAnne_8F_Capitan_Marineros_Text_1:
.string "CAPTAIN! Are you hurt?\n"
	.string "We'll bring you an ANTIDOTE!$"
