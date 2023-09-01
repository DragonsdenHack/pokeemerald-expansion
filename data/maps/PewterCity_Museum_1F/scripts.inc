PewterCity_Museum_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, PewterCity_Museum_1F_OnFrame
	.byte 0

PewterCity_Museum_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 57, PewterCity_Museum_1F_Miguel
	.2byte 0

PewterMuseum1::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 57
goto_if_gt PewterMuseum1_2
msgbox PewterMuseum1_Texto_1 MSGBOX_NPC
release
end

PewterMuseum1_2::
msgbox PewterMuseum1_Texto_2 MSGBOX_NPC
release
end

PewterMuseum1_Texto_2:
.string "Está claro que las apariencias engañan,\n"
	.string "en el nombre del MUSEO PLATEADA, te doy\l"
	.string "las gracias por lo que has hecho.\l"
	.string "Puedes entrar gratis cuando quieras.$"

PewterMuseum1_Texto_1:
.string "¿Por qué no te cobro la entrada?\n"
	.string "Sabemos que no váis a pagar de todos\l"
	.string "modos, pero no te preocupes, cuando os\l"
	.string "llegue la hora pagaréis todo de golpe.$"



PewterMuseum2::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_2:
.string "Debo de estar agradecido por mi\n"
.string "larga vida.\l"
.string "¡Nunca creí que viviría para ver\l"
.string "los huesos de un dragón!$"



PewterMuseum3::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_3:
.string "Gracias por ayudarnos a\n"
.string "deshacernos de ese ladrón\l"
.string "oportunista.$"



PewterMuseum5::
end



PewterMuseumDocumento_100::
msgbox PewterMuseumDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseumDocumento_Text_100:
.string "DIARIO POKéMON\p"
	.string "Última hora sobre BROCK, LÍDER\n"
	.string "del GIMNASIO de PLATEADA.\p"
	.string "Según fuentes cercanas, BROCK\n"
	.string "casi nunca se ríe, ¡pero una vez\l"
	.string "que empieza, no para!$"



PewterMuseumDocumento_101::
showmonpic SPECIES_AERODACTYL_SKEL, 10, 3   
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_101, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_101:
	.string "FÓSIL de AERODACTYL\n"
	.string "Un primitivo y raro POKÉMON.$"



PewterMuseumDocumento_102::
showmonpic SPECIES_KABUTOPS_SKEL, 10, 3   
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_102, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_102:
	.string "FÓSIL de KABUTOPS\n"
	.string "Un primitivo y raro POKÉMON.$"

PewterCity_Museum_1F_Miguel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_1
waitmovement 0x0
delay 10
playse MUS_RG_POKE_MANSION
msgbox PewterCity_Museum_1F_Miguel_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 7, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_7 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_8 MSGBOX_AUTOCLOSE
applymovement 7, PewterCity_Museum_1F_Miguel_Move_7
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_9 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_10 MSGBOX_AUTOCLOSE
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_CMIGUEL_2, PewterCity_Museum_1F_Miguel_Texto_11
msgbox PewterCity_Museum_1F_Miguel_Texto_12 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_WARP_OUT
msgbox PewterCity_Museum_1F_Miguel_Texto_14 MSGBOX_AUTOCLOSE
delay 20
removeobject 7
fadescreen 0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_8
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox PewterCity_Museum_1F_Miguel_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_OMANYTE, 30, ITEM_MYSTIC_WATER
waitfanfare
applymovement 3, PewterCity_Museum_1F_Miguel_Move_9
waitmovement 0x0
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_18 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_10
waitmovement 0x0
playse SE_PIN
applymovement 6, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_20 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_11
waitmovement 0x0
delay 40
removeobject 4
delay 40
msgbox PewterCity_Museum_1F_Miguel_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_12
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_POISON_BARB
waitfanfare
msgbox PewterCity_Museum_1F_Miguel_Texto_22 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_23 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_13
waitmovement 0x0
clearflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_LITTLE_BOY
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 58
release
end

PewterCity_Museum_1F_Miguel_Texto_1:
.string "????: De modo que los rumores eran\n"
	.string "ciertos, hay un ÁMBAR VIEJO en\l"
	.string "este lugar.$"

PewterCity_Museum_1F_Miguel_Texto_2:
.string "C.MIGUEL: ¡TÚ!$"

PewterCity_Museum_1F_Miguel_Texto_3:
.string "PETREL: Así que este es el\n"
	.string "científico que nos la jugó en el\l"
	.string "MT.MOON, creí que le diste su\l"
	.string "merecido en el TÚNEL ROCA más\l"
	.string "tarde.$"

PewterCity_Museum_1F_Miguel_Texto_4:
.string "C.MIGUEL: Y así fue, os\n"
	.string "asegurásteis de que no volviera\l"
	.string "arrebatándome todos mis POKÉMON,\l"
	.string "pero para vuestra desgracia uno de\l"
	.string "los mejores ENTRENADORES de esta\l"
	.string "región se interesó por mi historia\l"
	.string "y me hizo su cómplice, ahora tengo\l"
	.string "incluso mejores POKÉMON que la\l"
	.string "última vez que combatimos, nada te\l"
	.string "salvará esta vez {PLAYER}.$"

PewterCity_Museum_1F_Miguel_Texto_5:
.string "C.MIGUEL: El temido AERODACTYL, el\n"
	.string "depredador más fiero de la\l"
	.string "prehistoria, dicen que su forma en\l"
	.string "estado salvaje hace 300 millones\l"
	.string "de años era aún más poderosa que\l"
	.string "la obtenida por los métodos de\l"
	.string "resurrección actuales, el\l"
	.string "mismísimo LANCE lo incluye en su\l"
	.string "ejército de dragones...$"

PewterCity_Museum_1F_Miguel_Texto_6:
.string "C.MIGUEL: Con un POKÉMON así, el\n"
	.string "rey de los FÓSILES, mi equipo\l"
	.string "daría un salto de nivel, ¡me\l"
	.string "volvería una eminencia y la\l"
	.string "envidia de los POKÉMANÍACOS!$"

PewterCity_Museum_1F_Miguel_Texto_7:
.string "¡Eres una verguenza para la\n"
	.string "comunidad científica!$"

PewterCity_Museum_1F_Miguel_Texto_8:
.string "C.MIG: Y vosotros un lastre para la\n"
	.string "región sacando POKÉMON raros a\l"
	.string "cuentagotas, estoy cansado de ver\l"
	.string "los mismos CUBONE, SLOWPOKE,\l"
	.string "RHYHORN o a lo sumo LICKITUNG, los\l"
	.string "entrenadores que tienen un mísero\l"
	.string "PIDGEOTTO o un NIDORINO ya son\l"
	.string "considerados superiores a la\l"
	.string "media, todo por gente como\l"
	.string "vosotros que imposibilita la\l"
	.string "obtención de POKÉMON fuertes de\l"
	.string "verdad, en realidad os tengo que\l"
	.string "estar agradecidos, una vez me haga\l"
	.string "con ese ámbar, solo yo, LANCE y\l"
	.string "BILL tendremos un AERODACTYL en\l"
	.string "esta región.$"

PewterCity_Museum_1F_Miguel_Texto_9:
.string "PETREL: Estás soñando, tienes\n"
	.string "delante tuya a un EJECUTIVO ROCKET\l"
	.string "y a uno de nuestros mejores ALTOS\l"
	.string "MANDOS, no vas a ir a ningún lado\l"
	.string "con ese FÓSIL.$"

PewterCity_Museum_1F_Miguel_Texto_10:
.string "C.MIGUEL: Tú no me interesas\n"
	.string "PETREL, mi lucha es con {PLAYER},\l"
	.string "le dije que me las iba a pagar por\l"
	.string "lo del TÚNEL ROCA y aquí estamos.\l"
	.string "¡Prepárate a sufrir {PLAYER}!$"

PewterCity_Museum_1F_Miguel_Texto_11:
.string "¡Pero si mis POKÉMON son aún más\n"
	.string "fuertes!$"

PewterCity_Museum_1F_Miguel_Texto_12:
.string "C.MIGUEL: Grrrr...\n"
	.string "Así que no fue suficiente, no\l"
	.string "volveré a dejarme atrapar como la\l"
	.string "otra vez.$"

PewterCity_Museum_1F_Miguel_Texto_13:
.string "PETREL: ¡Quitadle sus POKÉMON!$"

PewterCity_Museum_1F_Miguel_Texto_14:
.string "C.MIGUEL USÓ CUERDA HUIDA$"

PewterCity_Museum_1F_Miguel_Texto_15:
.string "PETREL: Maldito. La próxima vez no\n"
	.string "le robaremos los POKÉMON, nos lo\l"
	.string "llevaremos directamente al\l"
	.string "calabozo para que no cause más\l"
	.string "problemas.$"

PewterCity_Museum_1F_Miguel_Texto_16:
.string "Ha estado a punto de quitarnos el\n"
	.string "ÁMBAR de no ser por tu\l"
	.string "intervención, toma esto en\l"
	.string "agradecimiento joven ROCKET.$"

PewterCity_Museum_1F_Miguel_Texto_17:
.string "¡HAS RECIBIDO UN OMANYTE AL NV:30!$"

PewterCity_Museum_1F_Miguel_Texto_18:
.string "PETREL: Sí que te has hecho más\n"
	.string "fuerte desde que te fuiste a\l"
	.string "trabajar con GIOVANNI, incluso un\l"
	.string "EJECUTIVO como yo lo habría pasado\l"
	.string "muy mal ante el equipo que ese\l"
	.string "tipo traía.$"

PewterCity_Museum_1F_Miguel_Texto_19:
.string "Después de esto estamos en deuda\n"
	.string "con vosotros, si lo que queréis es\l"
	.string "hacer pruebas al FÓSIL durante un\l"
	.string "período, no nos opondremos.$"

PewterCity_Museum_1F_Miguel_Texto_20:
.string "PETREL: Perfecto, ¡no os\n"
	.string "arrepentiréis!\l"
	.string "Os destinaremos un porcentaje de\l"
	.string "nuestras ganancias por vuestra\l"
	.string "colaboración, el TEAM ROCKET sabe\l"
	.string "devolver y con creces favores como\l"
	.string "estos.$"

PewterCity_Museum_1F_Miguel_Texto_21:
.string "PETREL: Esto ha sido posible\n"
	.string "gracias a ti {PLAYER}, ten esto\l"
	.string "como un regalo personal.$"

PewterCity_Museum_1F_Miguel_Texto_22:
.string "PETREL: La FLECHA VENENO aumenta\n"
	.string "en un 20% la potencia de los\l"
	.string "movimientos TIPO VENENO.\l"
	.string "¡Con ella equipada el COLMILLO\l"
	.string "VENENO de tu GOLBAT será aún más\l"
	.string "letal!$"

PewterCity_Museum_1F_Miguel_Texto_23:
.string "Nos vemos, {PLAYER}, científicos...$"

PewterCity_Museum_1F_Miguel_Move_1:
walk_up
walk_in_place_up
step_end

PewterCity_Museum_1F_Miguel_Move_2:
walk_right
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_3:
emote_exclamation_mark
step_end

PewterCity_Museum_1F_Miguel_Move_4:
face_right
step_end

PewterCity_Museum_1F_Miguel_Move_5:
face_up
step_end

PewterCity_Museum_1F_Miguel_Move_6:
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_7:
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_8:
walk_down
walk_right
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_9:
walk_up
walk_up
walk_left
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_10:
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_11:
walk_up
walk_right
walk_up
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_12:
walk_down
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_13:
walk_left
walk_down
walk_down
walk_down
step_end

PewterCity_Museum_1F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE125_STATE, 0
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_3
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_2
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_2::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_Museum_1F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CINTAELEGIDA, PewterCity_Museum_1F_Entrenador_Especial_Texto_8
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHOICE_BAND
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE125_STATE, 1
release
end

PewterCity_Museum_1F_Entrenador_Especial_2_No::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_3::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1:
.string "¡Obtuviste CINTA ELEGIDA de manos\n"
	.string "de CIENTÍFICO!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_1:
.string "Te seré sincero MOV.SÍSMICO es un\n"
	.string "pésimo movimiento, solo sería útil\l"
	.string "en POKÉMON como CHANSEY que son\l"
	.string "incapaces de causar daño directo,\l"
	.string "todo el que lo use en un CHARIZARD\l"
	.string "es un inepto, estoy dispuesto a\l"
	.string "darle algo que de verdad causa\l"
	.string "daño al entrenador capaz de reunir\l"
	.string "las 8 MEDALLAS de GIMNASIO.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_2:
.string "...\n"
	.string "...$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_3:
.string "Una pena, perdón por haberte hecho\n"
	.string "perder el tiempo.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_4:
.string "La CINTA ELEGIDA aumenta en un 50%\n"
	.string "el ataque físico del POKÉMON que\l"
	.string "la lleve equipada, pero a costa de\l"
	.string "encerrarle en el uso de un único\l"
	.string "movimiento, de todos modos.\l"
	.string "¿A quién le importa esa\l"
	.string "restricción de poder usar un solo\l"
	.string "movimiento si con ello te vale\l"
	.string "para arrasar con todo lo que se te\l"
	.string "ponga enfrente de un golpe?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_5:
.string "¡Vaya!\n"
	.string "¡No todos los días se ve a alguien\l"
	.string "con todas las MEDALLAS!\l"
	.string "¡Estoy cansado de investigar el\l"
	.string "proceso de formación de PERLAS\l"
	.string "dentro de la coraza de CLOYSTER!\l"
	.string "Si eres capaz de derrotarme en un\l"
	.string "combate, te daré un increíble\l"
	.string "objeto.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_6:
.string "Entonces, ¿aceptas el reto?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_7:
.string "¡Bien!\n"
	.string "¡Al fin!\l"
	.string "¡Un rival digno!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_8:
.string "¡Qué gran combate!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_9:
.string "No he visto ENTRENADOR como tú en\n"
	.string "todos mis años de investigador, si\l"
	.string "decides afrontar el reto de la\l"
	.string "LIGA POKÉMON, será mejor que\l"
	.string "lleves esto contigo, aumentará tus\l"
	.string "opciones de éxito.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_10:
.string "¡Puaf!\n"
	.string "¡Tocará seguir derrotando una y\l"
	.string "otra vez a mis colegas científicos\l"
	.string "negados para el combate!$"
