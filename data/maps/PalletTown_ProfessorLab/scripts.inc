PalletTown_ProfessorLab_MapScripts::
	.byte 0

PalletTownProfessorLab1::
lock     
faceplayer     
msgbox PalletTown_ProfessorLab_Text_1, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_1:
.string "Los mejores entrenadores de la\n"
.string "región provienen de este lugar, la\l"
.string "curiosidad mató al gato chico,\l"
.string "espero que me hayas entendido.$"



PalletTownProfessorLab2::
lock     
faceplayer     
msgbox PalletTown_ProfessorLab_Text_2, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_2:
.string "¿Es que no ves que OAK no está\n"
.string "aquí?\l"
.string "¡Si sigues insistiendo llamaremos\l"
.string "a la POLICÍA!$"



PalletTownProfessorLab3::
lock     
faceplayer     
msgbox PalletTown_ProfessorLab_Text_3, MSGBOX_DEFAULT
release     
end

PalletTown_ProfessorLab_Text_3:
.string "Este lugar te queda muy grande, te\n"
.string "recomiendo largarte antes de que\l"
.string "el profesor decida acabar contigo.$"



PalletTownProfessorLabDocumento_100::
msgbox PalletTownProfessorLabDocumento_Text_100, MSGBOX_SIGN   
end

PalletTownProfessorLabDocumento_Text_100:
.string "¡Presiona Start para abrir el\n"
	.string "Menú!$"



PalletTownProfessorLabDocumento_101::
msgbox PalletTownProfessorLabDocumento_Text_101, MSGBOX_SIGN   
end

PalletTownProfessorLabDocumento_Text_101:
	.string "Todos los Pokémon cuentan con\n"
	.string "fortalezas y debilidades frente a\l"
	.string "otros.$"



PalletTownProfessorLabDocumento_102::
msgbox PalletTownProfessorLabDocumento_Text_102, MSGBOX_SIGN   
end

PalletTownProfessorLabDocumento_Text_102:
	.string "Hay un mensaje por e-mail abierto.\n"
	.string "...\l"
	.string "¡Por fin!\l"
	.string "¡Los mejores entrenadores de la\l"
	.string "LIGA POKÉMON están listos para\l"
	.string "derrotarlos a todos!\l"
	.string "¡Traed a vuestros mejores Pokémon\l"
	.string "y probaremos vuestra valía como\l"
	.string "entrenadores!\l"
	.string "CG de la LIGA POKÉMON.\l"
	.string "Prof.Oak, ¡visítenos por favor!$"

PalletTown_ProfessorLab_Lab_Izq::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_1.1
waitmovement 0x0
goto PalletTown_ProfessorLab_Lab

PalletTown_ProfessorLab_Lab_Centro::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_1
waitmovement 0x0
goto PalletTown_ProfessorLab_Lab

PalletTown_ProfessorLab_Lab_Der::
lockall
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_1.2
waitmovement 0x0
goto PalletTown_ProfessorLab_Lab

PalletTown_ProfessorLab_Lab::
delay 20
playse SE_DOOR
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
addobject 5
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 5, PalletTown_ProfessorLab_Lab_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Lab_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
applymovement 5, PalletTown_ProfessorLab_Lab_Move_2
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Lab_Texto_3 MSGBOX_AUTOCLOSE
msgbox PalletTown_ProfessorLab_Lab_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
applymovement 5, PalletTown_ProfessorLab_Lab_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_5
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Lab_Texto_5 MSGBOX_AUTOCLOSE
applymovement 5, PalletTown_ProfessorLab_Lab_Move_6
waitmovement 0x0
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PalletTown_ProfessorLab_Lab_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_GYM_LEADER
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
msgbox PalletTown_ProfessorLab_Lab_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_DALIA, PalletTown_ProfessorLab_Lab_Texto_8
msgbox PalletTown_ProfessorLab_Lab_Texto_9 MSGBOX_AUTOCLOSE
msgbox PalletTown_ProfessorLab_Lab_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_7
waitmovement 0x0
applymovement 5, PalletTown_ProfessorLab_Lab_Move_8
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 5
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 62
release
end

PalletTown_ProfessorLab_Lab_Texto_1:
.string "????: Vaya, ¿no está aquí OAK?\n"
	.string "Tal vez esté en la ZONA 0.$"

PalletTown_ProfessorLab_Lab_Texto_2:
.string "????: ¿Querías algo chico?\n"
	.string "Yo soy la nieta de OAK, y hermana\l"
	.string "mayor de AZUL...$"

PalletTown_ProfessorLab_Lab_Texto_3:
.string "¡Así que conoces a mi hermano!\n"
	.string "Es un buen chico, aunque sea muy\l"
	.string "competitivo y a veces arrogante,\l"
	.string "va de frente y dice lo que tiene\l"
	.string "que decirte a la cara, solo espero\l"
	.string "que no sea malinfluenciado por...$"

PalletTown_ProfessorLab_Lab_Texto_4:
.string "... ... ... ... ...$"

PalletTown_ProfessorLab_Lab_Texto_5:
.string "DALIA: ¡El último Pokémon de OAK!\n"
	.string "¡Has sido tú ROCKET!\l"
	.string "¡Ya veía sospechoso ver a alguien\l"
	.string "con la gran R merodeando por aquí!$"

PalletTown_ProfessorLab_Lab_Texto_6:
.string "¿Cómo?\n"
	.string "¿No quieres problemas, solo habías\l"
	.string "venido a hacerle una visita a OAK?$"

PalletTown_ProfessorLab_Lab_Texto_7:
.string "DALIA: Nada te exhime de robar un\n"
	.string "Pokémon ajeno ROCKET, ¡voy a\l"
	.string "hacerte pagar por ello aquí mismo!$"

PalletTown_ProfessorLab_Lab_Texto_8:
.string "¡OH!¡Y en nuestra propia casa!$"

PalletTown_ProfessorLab_Lab_Texto_9:
.string "DALIA: Esto es el colmo, de modo\n"
	.string "que esta es la clase de amistades\l"
	.string "que mi hermanito está haciendo,\l"
	.string "siempre fue un rebelde que quería\l"
	.string "hacerlo todo por sus propios\l"
	.string "medios, ya le aconsejamos que se\l"
	.string "hiciera amigo de BILL, el\l"
	.string "PRESIDENTE de SILPH, LANCE y demás\l"
	.string "miembros de la ÉLITE, verás cuando\l"
	.string "OAK se entere de esto.$"

PalletTown_ProfessorLab_Lab_Texto_10:
.string "DALIA: Disfruta de ese triste\n"
	.string "BULBASAUR al nivel quince. Por\l"
	.string "si no lo sabías, OAK tiene decenas\l"
	.string "de ellos en su reserva personal.$"

PalletTown_ProfessorLab_Lab_Move_1:
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_1.1:
walk_right
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_1.2:
walk_left
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_2:
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

PalletTown_ProfessorLab_Lab_Move_3:
emote_exclamation_mark
walk_in_place_down
step_end

PalletTown_ProfessorLab_Lab_Move_4:
walk_fast_right
walk_fast_up
step_end

PalletTown_ProfessorLab_Lab_Move_5:
face_right
step_end

PalletTown_ProfessorLab_Lab_Move_6:
face_left
step_end

PalletTown_ProfessorLab_Lab_Move_7:
face_down
step_end

PalletTown_ProfessorLab_Lab_Move_8:
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
step_end

PalletTown_ProfessorLab_Robo_Bulbasaur::
lock     
showmonpic SPECIES_BULBASAUR, 10, 3   
playmoncry SPECIES_BULBASAUR, CRY_MODE_ENCOUNTER
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_1, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PalletTown_ProfessorLab_Robo_Bulbasaur_No
hidemonpic
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_2, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_RIVAL
removeobject 4
playfanfare MUS_OBTAIN_TMHM
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_3, MSGBOX_DEFAULT
givemon SPECIES_BULBASAUR, 15, ITEM_NONE
waitfanfare
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_4, MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 61
release
end




PalletTown_ProfessorLab_Robo_Bulbasaur_No::
hidemonpic
release
end

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_1:
.string "Al parecer esta POKÉ BALL contiene\n"
	.string "al raro y poderoso BULBASAUR, no\l"
	.string "parece que vayan a darle uso,\l"
	.string "¿quieres robarla?$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_2:
.string "Este POKÉMON parece tener mucha\n"
	.string "energía.$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_3:
.string "¡{PLAYER} robó el BULBASAUR!$"

PalletTown_ProfessorLab_Robo_Bulbasaur_Texto_4:
.string "PROTÓN: ¿{PLAYER}?\n"
	.string "¿Cómo va tu misión por PUEBLO\l"
	.string "PALETA, has descubierto algo?\l"
	.string "GIOVANNI requiere tu presencia, te\l"
	.string "estará esperando en su despacho\l"
	.string "dentro de la BASE ROCKET PROFUNDA.$"


PalletTown_ProfessorLab_Genesect::
lock     
showmonpic SPECIES_GENESECT, 10, 3   
playmoncry SPECIES_GENESECT, CRY_MODE_ENCOUNTER
msgbox PalletTown_ProfessorLab_Genesect_Texto_1, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PalletTown_ProfessorLab_Genesect_No
hidemonpic
setflag FLAG_NUEVA_658
removeobject 1
playfanfare MUS_OBTAIN_TMHM
msgbox PalletTown_ProfessorLab_Genesect_Texto_3, MSGBOX_DEFAULT
givemon SPECIES_GENESECT, 70, ITEM_CHOICE_SCARF
waitfanfare
release
end

PalletTown_ProfessorLab_Genesect_Texto_3:
.string "¡{PLAYER} obtuvo un GENESECT al Nv.70!$"

PalletTown_ProfessorLab_Genesect_No::
hidemonpic
release
end

PalletTown_ProfessorLab_Genesect_Texto_1:
.string "Esta POKÉ BALL contiene a GENESECT, un\n"
	.string "raro experimento de una región lejana.\l"
	.string "Nadie la necesita ya, ¿quieres\l"
	.string "quedarte con el pOKÉMON?$"
