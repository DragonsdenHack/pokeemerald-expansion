SsAnne_8F_MapScripts::
	.byte 0

SsAnne8F_2::
lock     
faceplayer     
msgbox SsAnne8F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne8F_Text_2:
.string "ANDRA: Procura bloquear las\n"
.string "posibles vías de escape del\l"
.string "CAPITÁN {PLAYER}.\l"
.string "Vamos a tener una pequeña charla\l"
.string "con él.$"



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
.string "¡Puaj!\n"
	.string "¡No debería haber mirado!$"



SsAnne8FDocumento_101::
msgbox SsAnne8FDocumento_Text_101, MSGBOX_SIGN   
end

SsAnne8FDocumento_Text_101:
.string "Cómo combatir el mareo...\n"
	.string "¡El CAPITÁN está leyendo esto!$"

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
msgbox SsAnne_8F_Capitan_Text_5 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_6 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_7 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_8 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_7
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_9 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_10 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_9
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_11 MSGBOX_AUTOCLOSE
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
applymovement 5, SsAnne_8F_Capitan_move_15
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_15 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_16 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, SsAnne_8F_Capitan_move_11
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_18 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_19 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_20 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_21 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_22 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_23 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_16
waitmovement 0x0
applymovement 5, SsAnne_8F_Capitan_move_17
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_24 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAPITAN_1, SsAnne_8F_Capitan_Text_25
msgbox SsAnne_8F_Capitan_Text_26 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_18
waitmovement 0x0
delay 15
playmoncry SPECIES_GOLBAT, CRY_MODE_ENCOUNTER
delay 30
playse SE_M_WING_ATTACK
delay 30
playse SE_SUPER_EFFECTIVE
delay 30
playse SE_FAINT
delay 15
applymovement 2, SsAnne_8F_Capitan_move_19
waitmovement 0x0
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SsAnne_8F_Capitan_Text_27 MSGBOX_DEFAULT
waitfanfare
msgbox SsAnne_8F_Capitan_Text_28 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_29 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_30 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_20
msgbox SsAnne_8F_Capitan_Text_31 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_32 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_TENTACOOL, CRY_MODE_ENCOUNTER
msgbox SsAnne_8F_Capitan_Text_33 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_SCRATCH
delay 20
playse SE_M_TOXIC
delay 5
msgbox SsAnne_8F_Capitan_Text_34 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_5
applymovement 2, SsAnne_8F_Capitan_move_21
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_35 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, SsAnne_8F_Capitan_move_6
applymovement 3, SsAnne_8F_Capitan_move_6
applymovement 4, SsAnne_8F_Capitan_move_6
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_36 MSGBOX_AUTOCLOSE
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

SsAnne_8F_Capitan_Text_1:
.string "CAPITÁN: ¿Puedo hacer algo por\n"
	.string "ustedes, jóvenes?$"

SsAnne_8F_Capitan_Text_2:
.string "ANDRA: Lo cierto es que sí. Verá\n"
	.string "CAPITÁN, tiene fama de ser una\l"
	.string "leyenda viviente en el mundo de la\l"
	.string "navegación; ha viajado por los 7\l"
	.string "mares y visto POKÉMON únicos.$"

SsAnne_8F_Capitan_Text_3:
.string "Nos preguntamos si podría dar\n"
	.string "muestra de todos esos viajes\l"
	.string "dejándonos contemplar ese famoso\l"
	.string "frasco que contiene uno de los\l"
	.string "mayores enigmas de nuestro mundo.$"

SsAnne_8F_Capitan_Text_4:
.string "CAPITÁN: Te refieres a esto.$"

SsAnne_8F_Capitan_Text_5:
.string "ANDRA: Vaya, es...enigmático.$"

SsAnne_8F_Capitan_Text_6:
.string "CAPITÁN: Así es, joven, el POKÉMON\n"
	.string "al que pertenece el fragmento no\l"
	.string "se parece en nada a lo que hayamos\l"
	.string "visto, ¿conocéis la leyenda de los\l"
	.string "PSEUDOLEGENDARIOS?$"

SsAnne_8F_Capitan_Text_7:
.string "ANDRA: Conocemos algún POKÉMON\n"
	.string "PSEUDOLEGENDARIO, CAPITÁN.$"

SsAnne_8F_Capitan_Text_8:
.string "CAPITÁN: Ya me imagino, en esta\n"
	.string "región tenéis el DRAGONITE de\l"
	.string "LANCE, por ejemplo.$"

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
	.string "legendario común. Los POKÉMON\l"
	.string "PSEUDOLEGENDARIOS suelen\l"
	.string "simbolizar la fauna y flora de su\l"
	.string "región en particular, teniendo\l"
	.string "desde sus primeras etapas\l"
	.string "almacenados en sus cuerpos esa\l"
	.string "esencia de la que les dota su\l"
	.string "región de origen que les permitirá\l"
	.string "alcanzar todo ese potencial más\l"
	.string "tarde.$"

SsAnne_8F_Capitan_Text_10:
.string "CAPITÁN: POKÉMON escogidos entre\n"
	.string "los mortales, a los que se le da\l"
	.string "la oportunidad potencial de entrar\l"
	.string "en terreno divino, eso es lo que\l"
	.string "son los PSEUDOLEGENDARIOS.$"

SsAnne_8F_Capitan_Text_11:
.string "CAPITÁN: El POKÉMON al que\n"
	.string "pertenece este fragmento, según\l"
	.string "los científicos que lo han\l"
	.string "examinado, tiene muchas de las\l"
	.string "características que suelen\l"
	.string "atribuirse a PSEUDOLEGENDARIOS,\l"
	.string "pero a la vez comparte rasgos de\l"
	.string "LEGENDARIO puro. Es un caso único.$"

SsAnne_8F_Capitan_Text_12:
.string "ANDRA: Impresionante. Parece usted\n"
	.string "un hombre culto CAPITÁN, con 1000\l"
	.string "historias que contar.$"

SsAnne_8F_Capitan_Text_13:
.string "CAPITÁN: Y vosotros parecéis dos\n"
	.string "jóvenes con muchas ganas de\l"
	.string "aprender. Estaría encantado de\l"
	.string "enseñaros de no ser porque...$"

SsAnne_8F_Capitan_Text_14:
.string "CAPITÁN: Sé quienes sois y a lo\n"
	.string "que habéis venido. Un tripulante\l"
	.string "ya nos alertó de cierta\l"
	.string "organización criminal que se hace\l"
	.string "llamar TEAM ROCKET, y vuestra\l"
	.string "vestimenta coincide exactamente\l"
	.string "con su descripción.$"

SsAnne_8F_Capitan_Text_15:
.string "Sabéis, de todos los mares en los\n"
	.string "que he estado, los de HOENN son\l"
	.string "con diferencia los más amplios,\l"
	.string "salvajes y diversos, pero a su vez\l"
	.string "son los únicos capaces de darte\l"
	.string "esa verdadera sensación de libertad.\l"
	.string "De saber que verdaderamente estás\l"
	.string "totalmente alejado de toda la\l"
	.string "maldita corrupción que hay en este\l"
	.string "mundo, un paraíso concedido por la\l"
	.string "naturaleza con milenios de\l"
	.string "historia, todo por descubrir aún.$"

SsAnne_8F_Capitan_Text_16:
.string "Y ahora me váis a decir a mí que\n"
	.string "dos delincuentes provenientes de\l"
	.string "una región cuyas mejores aguas\l"
	.string "están contaminadas por la CENTRAL\l"
	.string "ENERGÍA y el CAMINO BICIS, van a\l"
	.string "venir y robarme a MÍ un objeto\l"
	.string "único que refleja mi labor como\l"
	.string "navegante durante más de 30 años.\l"
	.string "Oh no, no tenéis ni el nivel ni la\l"
	.string "experiencia para hacer tal cosa.$"

SsAnne_8F_Capitan_Text_17:
.string "ANDRA: Perdone que discrepe\n"
	.string "CAPITÁN, pero no existen mares\l"
	.string "como los de ISLAS SETE. Ni parajes\l"
	.string "tan enigmáticos como los de ahí.$"

SsAnne_8F_Capitan_Text_18:
.string "CAPITÁN: Vaya, no tienes mal gusto\n"
	.string "chavala, entiendo que ambos\l"
	.string "provenís de ese lugar.$"

SsAnne_8F_Capitan_Text_19:
.string "Tal vez tengas razón. ISLAS\n"
	.string "SETE es una materia que aún tengo\l"
	.string "pendiente por explorar al 100%. He\l"
	.string "oido que entre las aguas que\l"
	.string "conectan las 7 grandes islas\l"
	.string "existen ciertos islotes,\l"
	.string "inexplorados pero habitados por\l"
	.string "ciertas tribus, y no solo eso...$"

SsAnne_8F_Capitan_Text_20:
.string "Los mapas topográficos contemplan\n"
	.string "8, 9 e incluso un total de 10\l"
	.string "islas por los alrededores. El\l"
	.string "nombre de archi7 es pues una mera\l"
	.string "formalidad debido a que\l"
	.string "efectivamente son 7 las islas\l"
	.string "habitadas en ese archipiélago.$"

SsAnne_8F_Capitan_Text_21:
.string "CAPITÁN: Pero dejémonos de clases\n"
	.string "de geografía. Me gustaría quedarme\l"
	.string "aquí charlando todo el día sobre\l"
	.string "todo esto, desafortunadamente para\l"
	.string "vosotros, habéis venido aquí para\l"
	.string "robarme un objeto preciado para mí\l"
	.string "y no voy a consentir tal cosa.$"

SsAnne_8F_Capitan_Text_22:
.string "CAPITÁN: ¡MARINEROS!\n"
	.string "¡OCUPAOS DE LA CHICA!$"

SsAnne_8F_Capitan_Text_23:
.string "ANDRA: ¡No hará falta!\n"
	.string "¡Ya me ocupo yo de vosotros!$"

SsAnne_8F_Capitan_Text_24:
.string "CAPITÁN: Yo me encargaré de ti. No\n"
	.string "tienes idea de la que te espera,\l"
	.string "vil canalla.\l"
	.string "¡Tus POKÉMON no pueden tocar a mi\l"
	.string "tripulación curtida en alta mar\l"
	.string "durante años!\l"
	.string "¡Voy a cortarte por la mitad y\l"
	.string "servir lo que quede de ti en la\l"
	.string "fiesta de proa!$"

SsAnne_8F_Capitan_Text_25:
.string "¡¿Pero quiénes sois vosotros?!$"

SsAnne_8F_Capitan_Text_26:
.string "ANDRA: ¡GOLBAT, acaba con esto!\n"
	.string "¡ATAQUE ALA!$"

SsAnne_8F_Capitan_Text_27:
.string "(ANDRA robó el frasco al CAPITÁN).$"

SsAnne_8F_Capitan_Text_28:
.string "CAPITÁN: Esto no puede estar\n"
	.string "pasando. Mi tripulación ninguneada\l"
	.string "y ridiculizada por un par de\l"
	.string "jovenes reclutas provenientes de\l"
	.string "una banda local.\l"
	.string "¡Qué deshonra!$"

SsAnne_8F_Capitan_Text_29:
.string "ANDRA: Reclutas de ALTO RANGO,\n"
	.string "CAPITÁN. Yo le he respetado en su\l"
	.string "rango respétenos usted también con\l"
	.string "el nuestro.$"

SsAnne_8F_Capitan_Text_30:
.string "ANDRA: Además, mire el lado\n"
	.string "positivo. Nosotros vamos a darle\l"
	.string "buen uso a ese frasco. Vamos a\l"
	.string "descubrir de qué maldito POKÉMON\l"
	.string "proviene en lugar de dejarlo aquí\l"
	.string "criando polvo sin otra utilidad\l"
	.string "que la de hacer recordar el pasado\l"
	.string "a una vieja gloria.\l"
	.string "No se lo tome como algo personal,\l"
	.string "en pago y señal de agradecimiento\l"
	.string "por su colaboración, le enviaremos\l"
	.string "una carta con los datos que\l"
	.string "obtengamos.\l"
	.string "¿Qué le parece?\l"
	.string "Esa información puede valer\l"
	.string "millones.$"

SsAnne_8F_Capitan_Text_31:
.string "CAPITÁN: ¡Joven insolente!\n"
	.string "¡Nadie va a salir de este\l"
	.string "camarote!$"

SsAnne_8F_Capitan_Text_32:
.string "ANDRA: ¡TENTACOOL!\n"
	.string "¡Picotazo veneno sobre el CAPITÁN!$"

SsAnne_8F_Capitan_Text_33:
.string "¡cool!$"

SsAnne_8F_Capitan_Text_34:
.string "CAPITÁN: ¡Hughh!$"

SsAnne_8F_Capitan_Text_35:
.string "CAPITÁN: Mi cabeza...\n"
	.string "¡Esa canalla me ha envenenado!$"

SsAnne_8F_Capitan_Text_36:
.string "MARINEROS: ¡CAPITÁN!\n"
	.string "¿Se encuentra bien?$"

SsAnne_8F_Capitan_Text_37:
.string "ANDRA: ¡{PLAYER}! ¡Ahora!\n"
	.string "¡Es el momento de largarse de aquí\l"
	.string "cuanto antes!$"

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
walk_down
walk_in_place_left
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
.string "Es una papelera, totalmente limpia y\n"
	.string "pulcra.$"

SsAnne_8F_Capitan_Papelera_Texto_2:
	.string "¡Puaj! ¡No debería haber mirado!$"

SsAnne_8F_Capitan_Marineros::
msgbox SsAnne_8F_Capitan_Marineros_Text_1 MSGBOX_SIGN
release
end


SsAnne_8F_Capitan_Marineros_Text_1:
.string "¡¿Se encuentra bien CAPITÁN¡?\n"
	.string "¡Le traeremos algo para el dolor\l"
	.string "de cabeza!$"
