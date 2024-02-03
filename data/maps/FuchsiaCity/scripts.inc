FuchsiaCity_MapScripts::
	.byte 0

FuchsiaCity3::
end


FuchsiaCity4::
end


FuchsiaCity5::
end


FuchsiaCity6::
end


FuchsiaCity8::
end


FuchsiaCity11::
lock     
faceplayer     
msgbox Text_11, MSGBOX_DEFAULT
release     
end

Text_11:
.string "My father is the GYM LEADER of\n"
    .string "this town.\p"
    .string "I'm training to use POISON POKéMON\n"
    .string "as well as my father.$"



FuchsiaCity12::
lock     
faceplayer     
msgbox Text_12, MSGBOX_DEFAULT
release     
end

Text_12:
	.string "Leave me alone, ROCKET. I'm not here for\n"
	.string "you.$"


FuchsiaCity14::
lock     
faceplayer     
msgbox Text_14, MSGBOX_DEFAULT
release     
end

Text_14:
	.string "The SAFARI ZONE is open to the public.\n"
	.string "Too bad you and your organization\l"
	.string "aren't considered public.$"


FuchsiaCity16::
end


FuchsiaCity17::
lock     
faceplayer     
msgbox Text_17, MSGBOX_DEFAULT
release     
end

Text_17:
	.string "Aghh! So you've come to join the BIKERS\n"
	.string "of FUCHSIA!$"


FuchsiaCity18::
lock     
faceplayer     
msgbox Text_18, MSGBOX_DEFAULT
release     
end

Text_18:
	.string "A ROCKET like you will never be able to\n"
	.string "enter the SAFARI ZONE! … … What? You\l"
	.string "don't need it and you've already caught a\l"
	.string "KANGASKHAN in the ROCK TUNNEL? In\l"
	.string "addition to being a thief, you're a liar;\l"
	.string "it has been proven that the existence\l"
	.string "of a KANGASKHAN there, it was a hoax!$"

NeoFuchsiaCityDocumento_100::
msgbox NeoFuchsiaCityDocumento_Text_100, MSGBOX_SIGN   
end

NeoFuchsiaCityDocumento_Text_100:
.string "FUCHSIA CITY POKéMON GYM\n"
    .string "LEADER: SACHIKO\l"
    .string "The Poisonous Ninja Master$"



FuchsiaCityDocumento_100::
msgbox FuchsiaCityDocumento_Text_100, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_100:
.string "FUCHSIA CITY POKéMON GYM\n"
    .string "LEADER: KOGA\l"
    .string "The Poisonous Ninja Master$"



FuchsiaCityDocumento_101::
msgbox FuchsiaCityDocumento_Text_101, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_101:
.string "Name: KABUTO\n"
    .string "An extremely rare POKéMON that was\l"
    .string "regenerated from a fossil.$"



FuchsiaCityDocumento_102::
msgbox FuchsiaCityDocumento_Text_102, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_102:
.string "Name: KANGASKHAN\p"
    .string "A maternal POKéMON that raises its\n"
    .string "young in a pouch on its belly.$"



FuchsiaCityDocumento_103::
msgbox FuchsiaCityDocumento_Text_103, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_103:
	.string "Name: LAPRAS\n"
    .string "AKA the king of the seas.$"



FuchsiaCityDocumento_104::
msgbox FuchsiaCityDocumento_Text_104, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_104:
.string "SAFARI GAME\n"
    .string "POKéMON-U-CATCH!$"

NeoFuchsiaCityDocumento_105::
msgbox NeoFuchsiaCityDocumento_Text_105, MSGBOX_SIGN
msgbox NeoFuchsiaCityDocumento_Texto_2, MSGBOX_SIGN      
end

NeoFuchsiaCityDocumento_Text_105:
.string "Aquí hay una nota...$"

NeoFuchsiaCityDocumento_Texto_2:
.string "El PUESTO GUARDA DE LA ZONA SAFARI\n"
	.string "está cerrado hasta nuevo aviso.$"



FuchsiaCityDocumento_105::
msgbox FuchsiaCityDocumento_Text_105, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_105:
.string "POKéMON PARADISE\n"
    .string "SAFARI ZONE$"



FuchsiaCityDocumento_106::
msgbox FuchsiaCityDocumento_Text_106, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_106:
.string "FUCHSIA CITY\n"
    .string "Behold! It's Passion Pink!$"



FuchsiaCityDocumento_107::
msgbox FuchsiaCityDocumento_Text_107, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_107:
.string "SAFARI ZONE\n"
    .string "WARDEN'S HOME$"



FuchsiaCityDocumento_108::
msgbox FuchsiaCityDocumento_Text_108, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_108:
.string "Name: VOLTORB\n"
    .string "The very image of a POKé BALL.$"



FuchsiaCityDocumento_109::
msgbox FuchsiaCityDocumento_Text_109, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_109:
	.string "Name: SLOWPOKE\n"
    .string "Friendly and very slow moving.$"



FuchsiaCityDocumento_110::
msgbox FuchsiaCityDocumento_Text_110, MSGBOX_SIGN   
end

FuchsiaCityDocumento_Text_110:
	.string "Name: CHANSEY\n"
    .string "Catching one is all up to chance.$"

FuchsiaCity_Encuentro_Koga_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Encuentro_Koga_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
addobject 15
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_2
waitmovement 0x0
goto FuchsiaCity_Encuentro_Koga

FuchsiaCity_Encuentro_Koga_Medio::
lock
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Encuentro_Koga_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
addobject 15
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_2.1
waitmovement 0x0
goto FuchsiaCity_Encuentro_Koga

FuchsiaCity_Encuentro_Koga_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_Encuentro_Koga_Move_1
waitmovement 0x0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
addobject 15
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_2.2
waitmovement 0x0
goto FuchsiaCity_Encuentro_Koga

FuchsiaCity_Encuentro_Koga::
msgbox FuchsiaCity_Encuentro_Koga_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_CONTEST_PASS
waitse
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Encuentro_Koga_Texto_5 MSGBOX_AUTOCLOSE
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Encuentro_Koga_Texto_6 MSGBOX_AUTOCLOSE
applymovement 15, FuchsiaCity_Encuentro_Koga_Move_4
waitmovement 0x0
msgbox FuchsiaCity_Encuentro_Koga_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
fadescreen 1
delay 20
removeobject 15
fadescreen 0
delay 20
playse SE_POKENAV_CALL
delay 30
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_6F_Combate_Fantasma_Marowak_Move_1
delay 20
playse SE_POKENAV_HANG_UP
msgbox FuchsiaCity_Encuentro_Koga_Texto_8 MSGBOX_AUTOCLOSE
delay 15
playse SE_POKENAV_OFF
setvar VAR_UNUSED_0x40F7, 67
release
end

FuchsiaCity_Encuentro_Koga_Texto_1:
	.string "KOGA: {PLAYER}! I can't believe you\n"
	.string "really kicked BRUNO out the CYCLING\l"
	.string "ROAD! You're not aware of the\l"
	.string "importance of what you've done. Rest\l"
	.string "assured, I will inform GIOVANNI about\l"
	.string "your feat!$"

FuchsiaCity_Encuentro_Koga_Texto_2:
.string "KOGA: ...$"

FuchsiaCity_Encuentro_Koga_Texto_3:
	.string "You helped us maintain the SAFARI\n"
	.string "business, and now, thanks to you, the\l"
	.string "relationship between TEAM ROCKET and\l"
	.string "the BIKERS is stronger than ever. You've\l"
	.string "earned the best gift I can offer you,\l"
	.string "along with my total respect.$"

FuchsiaCity_Encuentro_Koga_Texto_4:
	.string "With this pass you could enter whenever\n"
	.string "you want to our SAFARI ZONE without\l"
	.string "paying and using your own POKÉ BALL\l"
	.string "with no any kind of limitation, it's\l"
	.string "something only the main shareholders\l"
	.string "and personalities like BILL have access\l"
	.string "to for research purposes… consider\l"
	.string "yourself fortunate, and don't worry\l"
	.string "about wearing the ROCKET uniform, you\l"
	.string "can always tell the guard that it's a\l"
	.string "cosplay you use to mock TEAM ROCKET,\l"
	.string "and he will be obligated to let you\l"
	.string "through.$"

FuchsiaCity_Encuentro_Koga_Texto_5:
.string "KOGA: What?\n"
	.string "The SEAFOAM ISLANDS?$"

FuchsiaCity_Encuentro_Koga_Texto_6:
.string "Se encuentran al suroeste de aquí,\n"
	.string "solo tienes que llegar al mar que\l"
	.string "hay al sur de FUCSIA y llegarás,\l"
	.string "no tiene pérdida.$"

FuchsiaCity_Encuentro_Koga_Texto_7:
.string "KOGA: Gracias por todo de nuevo\n"
	.string "{PLAYER}, ahora me retiro, no es\l"
	.string "conveniente que me vean con un\l"
	.string "ROCKET, debo mantener las\l"
	.string "apariencias si queréis seguir\l"
	.string "teniendo a uno de los vuestros\l"
	.string "infiltrado en puestos de\l"
	.string "privilegio, estaré encantado de\l"
	.string "combatir contigo...si se da la\l"
	.string "ocasión.$"

FuchsiaCity_Encuentro_Koga_Texto_8:
.string "GIOVANNI: ¿{PLAYER}?\n"
	.string "¿Cómo va la misión?\l"
	.string "¿Vas de camino a ISLAS ESPUMA?\l"
	.string "Perfecto, AZUL tiene todo listo\l"
	.string "para batir a MOLTRES, y ANDRA ha\l"
	.string "ultimado los preparativos con\l"
	.string "nuestros científicos para hacer su\l"
	.string "equipo más ventajoso frente a\l"
	.string "ZAPDOS, espero noticias tuyas\l"
	.string "{PLAYER}.$"

FuchsiaCity_Encuentro_Koga_Move_1:
walk_in_place_right
step_end

FuchsiaCity_Encuentro_Koga_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

FuchsiaCity_Encuentro_Koga_Move_2.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

FuchsiaCity_Encuentro_Koga_Move_2.2:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

FuchsiaCity_Encuentro_Koga_Move_3:
face_down
step_end

FuchsiaCity_Encuentro_Koga_Move_4:
face_left
step_end

FuchsiaCity_Encuentro_Koga_Move_5:
emote_exclamation_mark
step_end

FuchsiaCity_Estafado::
compare VAR_UNUSED_0x4091, 2
goto_if_eq FuchsiaCity_Estafado_3
compare VAR_UNUSED_0x4091, 1
goto_if_eq FuchsiaCity_Estafado_2
msgbox FuchsiaCity_Estafado_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Estafado_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, FuchsiaCity_Estafado_Move_1
waitmovement 0x0
faceplayer
applymovement 8, FuchsiaCity_Estafado_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_3 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Estafado_Texto_13 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FuchsiaCity_Estafado_No
msgbox FuchsiaCity_Estafado_Texto_14 MSGBOX_AUTOCLOSE
applymovement 8, FuchsiaCity_Estafado_Move_2
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_15 MSGBOX_AUTOCLOSE
applymovement 8, FuchsiaCity_Estafado_Move_3
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_16 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x4091, 1
release
end

FuchsiaCity_Estafado_No::
msgbox FuchsiaCity_Estafado_Texto_17 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_Estafado_2::
lock
faceplayer
msgbox FuchsiaCity_Estafado_Texto_12 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_Estafado_3::
lock
faceplayer
delay 20
msgbox FuchsiaCity_Estafado_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, FuchsiaCity_Estafado_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playse SE_SHOP
msgbox FuchsiaCity_Estafado_Texto_5 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 8, FuchsiaCity_Estafado_Move_1
waitmovement 0x0
msgbox FuchsiaCity_Estafado_Texto_6 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Estafado_Texto_7 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
addmoney 200000 0
playse SE_SHOP
delay 15
updatemoneybox
delay 15
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox FuchsiaCity_Estafado_Texto_8 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox FuchsiaCity_Estafado_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox FuchsiaCity_Estafado_Texto_10 MSGBOX_DEFAULT
givemon SPECIES_SNORLAX, 30, ITEM_LEFTOVERS
waitfanfare
delay 15
msgbox FuchsiaCity_Estafado_Texto_11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_STEVENS_HOUSE_INVISIBLE_NINJA_BOY
fadescreen 1
removeobject 8
delay 20
fadescreen 0
release
end







FuchsiaCity_Estafado_Texto_1:
.string "Estoy acabado, en la ruina...\n"
	.string "Y todo por esos estafadores...$"

FuchsiaCity_Estafado_Texto_2:
.string "...\n"
	.string "...$"

FuchsiaCity_Estafado_Texto_3:
.string "¡Eh, espera ROCKET!\n"
	.string "¡Eres mi última esperanza!\l"
	.string "¡Escúchame!\l"
	.string "He sido víctima de un engaño,\l"
	.string "invertí todos los ahorros que me\l"
	.string "quedaban: 2 millones de POKÉS, en\l"
	.string "comprar un auténtio METEORITO\l"
	.string "proveniente de la CASCADA METEORO,\l"
	.string "en HOENN, ese METEORITO\l"
	.string "confirmaría la teoría en la que\l"
	.string "todo mi proyecto se ha basado, y\l"
	.string "daría por finalizado dicho proyecto,\l"
	.string "en el que llevo años trabajando.\l"
	.string "Pero resulta que esos estafadores\l"
	.string "me vendieron a precio de oro una\l"
	.string "de las tantas rocas que puedes\l"
	.string "encontrar en el MT.MOON, y ahora\l"
	.string "estoy en la ruina, sin siquiera\l"
	.string "dinero para reclamar nada.$"

FuchsiaCity_Estafado_Texto_4:
.string "¿¡Qué dices?!\n"
	.string "¿Que nos has librado para siempre\l"
	.string "de esos tramposos y se han mudado\l"
	.string "a otra región?\l"
	.string "¡Y has recuperado el dinero que\l"
	.string "invertí en mi proyecto!$"

FuchsiaCity_Estafado_Texto_5:
.string "({PLAYER} entregó los 2 millones de\n"
	.string "POKÉS al científico).$"

FuchsiaCity_Estafado_Texto_6:
.string "No puedo creer que haya recuperado\n"
	.string "todo mi dinero, si te soy sincero,\l"
	.string "tenía mis dudas de si obrarías\l"
	.string "honradamente ROCKET, de si, aún\l"
	.string "consiguiendo recuperar mi dinero,\l"
	.string "no desaparecerías con él,\l"
	.string "perdiéndose para siempre.$"

FuchsiaCity_Estafado_Texto_7:
.string "Ahora veo que solo son\n"
	.string "estereotipos, y que el dinero que\l"
	.string "robáis realmente tiene un claro\l"
	.string "objetivo detrás, aquí tienes lo\l"
	.string "acordado ROCKET.$"

FuchsiaCity_Estafado_Texto_8:
.string "(Acabas de facturar 200000 POKÉS).$"

FuchsiaCity_Estafado_Texto_9:
.string "Y el POKÉMON que te prometí.\n"
	.string "¡Me costó horrores poder atraparlo\l"
	.string "a pesar de que no se movía nada y\l"
	.string "se la pasaba durmiendo la mitad\l"
	.string "del combate!$"

FuchsiaCity_Estafado_Texto_10:
.string "¡¡OBTUVISTE UN SNORLAX AL\n"
	.string "NV:35!!$"

FuchsiaCity_Estafado_Texto_11:
.string "Ahora sí me voy, gracias por todo\n"
	.string "ROCKET, al fin podré terminar mi\l"
	.string "proyecto, te estaré siempre\l"
	.string "agradecido, si algún día\l"
	.string "logro algo importante, no dudaré\l"
	.string "en mencionarte.$"

FuchsiaCity_Estafado_Texto_12:
.string "Recuerda, deben de estar en ISLA\n"
	.string "CANELA, aparte de ser la mayor\l"
	.string "cuna de ladrones, es de los\l"
	.string "últimos lugares que les quedan por\l"
	.string "asaltar en KANTO.$"

FuchsiaCity_Estafado_Texto_13:
.string "¿Accederías a intentar recuperar\n"
	.string "el dinero que injustamente me han\l"
	.string "robado?\l"
	.string "Prometo darte el 10% de esos 2\l"
	.string "millones si tienes éxito, y no\l"
	.string "solo eso, también te daré un\l"
	.string "poderoso POKÉMON en señal de\l"
	.string "agradecimiento.$"

FuchsiaCity_Estafado_Texto_14:
.string "¡Al fin vuelvo a tener esperanzas\n"
	.string "de recuperar mi dinero!\l"
	.string "Mira ROCKET, los que me han\l"
	.string "estafado son profesionales en\l"
	.string "esto, cambian constantemente las\l"
	.string "zonas donde operan y los lugares\l"
	.string "en los que se reúnen, para que la\l"
	.string "gente no comienze a sospechar en\l"
	.string "exceso, y la POLICÍA sea incapaz\l"
	.string "de detectarles.$"

FuchsiaCity_Estafado_Texto_15:
.string "Sin embargo, tengo una corazonada,\n"
	.string "y es que actualmente esos canallas\l"
	.string "se encuentran en esa MANSIÓN\l"
	.string "ABANDONADA de ISLA CANELA, por\l"
	.string "descarte es el último lugar que\l"
	.string "les queda, ya han actuado en\l"
	.string "FUCSIA, AZULONA, al pie del\l"
	.string "MT.MOON...$"

FuchsiaCity_Estafado_Texto_16:
.string "Espero que seas un gran\n"
	.string "ENTRENADOR, ROCKET, deben de haber\l"
	.string "comprado a los mejores POKÉMON en\l"
	.string "el mercado negro con todo el\l"
	.string "dinero que han ganado estafando a\l"
	.string "la gente.\l"
	.string "Si consigues recuperar mi dinero\l"
	.string "te daré un 10% del total, y un\l"
	.string "fabuloso POKÉMON que no\l"
	.string "encontrarás así como así, estaré\l"
	.string "aquí esperando con ansias tu\l"
	.string "actuación.$"

FuchsiaCity_Estafado_Texto_17:
.string "Oh...\n"
	.string "No puede ser...\l"
	.string "¿Y ahora qué haré?$"

FuchsiaCity_Estafado_Move_1:
emote_exclamation_mark
step_end

FuchsiaCity_Estafado_Move_2:
walk_in_place_up
step_end

FuchsiaCity_Estafado_Move_3:
face_player
step_end

FuchsiaCity_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE122_STATE, 0
goto_if_gt FuchsiaCity_Entrenador_Especial_3
msgbox FuchsiaCity_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FuchsiaCity_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt FuchsiaCity_Entrenador_Especial_2
msgbox FuchsiaCity_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end


FuchsiaCity_Entrenador_Especial_2::
msgbox FuchsiaCity_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox FuchsiaCity_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FuchsiaCity_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox FuchsiaCity_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CINTAEXPERTO, FuchsiaCity_Entrenador_Especial_Texto_8
msgbox FuchsiaCity_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_EXPERT_BELT
msgbox FuchsiaCity_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox FuchsiaCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE122_STATE, 1
release
end

FuchsiaCity_Entrenador_Especial_2_No::
msgbox FuchsiaCity_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_Entrenador_Especial_3::
msgbox FuchsiaCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end


FuchsiaCity_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste CINTA XPERTO de\n"
	.string "manos de CAZABICHOS!$"

FuchsiaCity_Entrenador_Especial_Texto_1:
.string "Ya me tengo vista la ZONA SAFARI\n"
	.string "completa, los POKÉMON que allí\l"
	.string "viven no son ya un misterio para\l"
	.string "mi, honestamente creo que soy el\l"
	.string "CAZABICHOS más poderoso de toda la\l"
	.string "región, POKÉMON como BUTTERFREE o\l"
	.string "BEEDRILL se me quedan pequeños,\l"
	.string "¿no me crees?$"

FuchsiaCity_Entrenador_Especial_Texto_2:
.string "...\n"
	.string "...$"

FuchsiaCity_Entrenador_Especial_Texto_3:
.string "Vaya, parece que necesitas algo\n"
	.string "más de entrenamiento, no lucharé\l"
	.string "contra nadie que no sea\l"
	.string "extraordinario, tal vez cuando te\l"
	.string "vuelvas más fuerte.$"

FuchsiaCity_Entrenador_Especial_Texto_4:
.string "La CINTA EXPERTO aumenta en un 20%\n"
	.string "el daño de los movimientos\l"
	.string "superefectivos, haciendo muy\l"
	.string "difícil que el rival resista ese\l"
	.string "movimiento, es ideal para POKÉMON\l"
	.string "con gran variedad de movimientos\l"
	.string "como STARMIE, ELECTABUZZ o PINSIR.$"

FuchsiaCity_Entrenador_Especial_Texto_5:
.string "¡Sí!\n"
	.string "¡Tú pareces un ENTRENADOR\l"
	.string "experimentado!\l"
	.string "¡Si me derrotas de daré algo muy\l"
	.string "útil!$"

FuchsiaCity_Entrenador_Especial_Texto_6:
.string "Entonces, ¿aceptas el reto?$"

FuchsiaCity_Entrenador_Especial_Texto_7:
.string "¡Vamos allá!\n"
	.string "¡Espero que no me decepciones!$"

FuchsiaCity_Entrenador_Especial_Texto_8:
.string "¡No sabía que había gente tan\n"
	.string "fuerte!$"

FuchsiaCity_Entrenador_Especial_Texto_9:
.string "¿Entonces estás peleando por el\n"
	.string "CAMPEONATO de la LIGA?\l"
	.string "¡No me extraña tú y tus POKÉMON\l"
	.string "sois formidables!\l"
	.string "¡Esto seguro que te ayudará a\l"
	.string "perfeccionar aún más tu equipo!$"

FuchsiaCity_Entrenador_Especial_Texto_10:
.string "Un ENTRENADOR que se precie jamás\n"
	.string "huye de un gran combate cuando se\l"
	.string "le presenta...$"

FuchsiaCity_Basura::
lock
msgbox FuchsiaCity_Basura_Texto_1 MSGBOX_SIGN
msgbox FuchsiaCity_Basura_Texto_2 MSGBOX_SIGN
release
end

FuchsiaCity_Basura_Texto_1:
.string "No ensuciar.$"

FuchsiaCity_Basura_Texto_2:
.string "Por favor, no tirar basura.$"

FuchsiaCity_MentiraViaje::
lock
msgbox FuchsiaCity_MentiraViaje_Texto_1 MSGBOX_SIGN
release
end

FuchsiaCity_MentiraViaje_Texto_1:
.string "El GUARDA está de viaje. Esa es la razón\n"
	.string "por la que la ZONA SAFARI está cerrada.$"


