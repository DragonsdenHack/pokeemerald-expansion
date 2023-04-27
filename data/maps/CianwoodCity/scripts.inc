CianwoodCity_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CianwoodCity_OnFrame
	.byte 0

CianwoodCity_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 150, CianwoodCity_Recluta
	.2byte 0

CianwoodCity1::
end



CianwoodCity2::
lock     
faceplayer     
msgbox CianwoodCity_Text_2, MSGBOX_DEFAULT
release     
end

CianwoodCity_Text_2:
.string "El POLIWRATH de ANÍBAL tiene algo\n"
.string "especial. Sé que POLIWRATH, de por\l"
.string "sí, es duro, pero el\l"
.string "suyo está hecho de otra pasta, no\l"
.string "hay duda.$"



CianwoodCity3::
end



CianwoodCity4::
end



CianwoodCity5::
lock
faceplayer
msgbox CianwoodCity5_Texto_1 MSGBOX_NPC
release
end

CianwoodCity5_Texto_1:
.string "¿Quieres retar a ANÍBAL?\n"
	.string "Lo siento, pero hace ya dos\l"
	.string "semanas que mi marido partió hacia\l"
	.string "el MONTE MORTERO para entrenarse.\l"
	.string "Si por casualidad decides explorar\l"
	.string "la montaña y lo encuentras,\l"
	.string "¿podrías decirle que vuelva\l"
	.string "pronto?\l"
	.string "Gracias.$"

CianwoodCity6::
end



CianwoodCity7::
end



CianwoodCity8::
lock     
faceplayer     
msgbox CianwoodCity_Text_8, MSGBOX_DEFAULT
release     
end

CianwoodCity_Text_8:
.string "Esta ciudad en verano se anima\n"
.string "bastante, ¡es un espectáculo ver\l"
.string "a los STARYU y CHINCHOU brillar en\l"
.string "el agua por las noches!$"



CianwoodCity9::
lock     
faceplayer     
msgbox CianwoodCity_Text_9, MSGBOX_DEFAULT
release     
end

CianwoodCity_Text_9:
.string "Las rocas que hay al norte pueden\n"
.string "romperse, a algunos les han\l"
.string "aparecido POKÉMON que estaban\l"
.string "escondidos debajo de ellas.$"



CianwoodCity11:
end



CianwoodCity12::
lock     
faceplayer     
msgbox CianwoodCity_Text_12, MSGBOX_DEFAULT
release     
end

CianwoodCity_Text_12:
.string "El POLIWRATH de nuestro LÍDER es\n"
.string "muy especial, ANÍBAL lo salvó de\l"
.string "ser tragado por un temporal cuando\l"
.string "no era más que un POLIWAG. Ese\l"
.string "tipo de actos dejan huella para\l"
.string "siempre.$"



CianwoodCityDocumento_100::
msgbox CianwoodCityDocumento_Text_100, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_100:
.string "GIMNASIO de CIUDAD ORQUÍDEA\n"
	.string "LÍDER: ANÍBAL\l"
	.string "¡El último samurái!$"



CianwoodCityDocumento_101::
msgbox CianwoodCityDocumento_Text_101, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_101:
	.string "FARMACIA OLIVO$"



CianwoodCityDocumento_102::
msgbox CianwoodCityDocumento_Text_102, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_102:
	.string "CIUDAD ORQUÍDEA:\n"
	.string "Eterna resistencia a las aguas\l"
	.string "agitadas.$"



CianwoodCityDocumento_103::
msgbox CianwoodCityDocumento_Text_103, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_103:
	.string "...\n"
	.string "...\l"
	.string "Un antiguo grabado reza lo\l"
	.string "siguiente:\l"
	.string "-No te dejes guiar por las\l"
	.string "apariencias. El paraíso espera al\l"
	.string "oeste, detrás de la inhóspita\l"
	.string "montaña-.$"

CianwoodCity_Evento_Mirto::
lock
clearflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
addobject 10
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, CianwoodCity_Evento_Mirto_Move_1
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, CianwoodCity_Evento_Mirto_Move_2
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, CianwoodCity_Evento_Mirto_Move_3
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox CianwoodCity_Evento_Mirto_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, CianwoodCity_Evento_Mirto_Move_4
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_5 MSGBOX_AUTOCLOSE
applymovement 10, CianwoodCity_Evento_Mirto_Move_5
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_6 MSGBOX_AUTOCLOSE
applymovement 10, CianwoodCity_Evento_Mirto_Move_6
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_7 MSGBOX_AUTOCLOSE
applymovement 10, CianwoodCity_Evento_Mirto_Move_3
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_8 MSGBOX_AUTOCLOSE
applymovement 10, CianwoodCity_Evento_Mirto_Move_4
waitmovement 0x0
msgbox CianwoodCity_Evento_Mirto_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAGMA_GRUNTS
fadescreen 1
playmoncry SPECIES_NOIVERN, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 10
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_PICHU_DOLL
playse SE_M_FLY
delay 15
fadescreen 0
setvar VAR_UNUSED_0x40FE, 1
release
end

CianwoodCity_Evento_Mirto_Texto_1:
.string "MIRTO: ¿¿??$"

CianwoodCity_Evento_Mirto_Texto_2:
.string "Oh, {PLAYER}, qué sorpresa.$"

CianwoodCity_Evento_Mirto_Texto_3:
.string "Lamento que no pudieras entrar con\n"
	.string "nosotros a TORRE CAMPANA, esa\l"
	.string "AGATHA se ve que te aprecia mucho.\l"
	.string "Solo es cuestión de tiempo que el\l"
	.string "GRAN MAESTRO te invite a entrar,\l"
	.string "ha estado muy ocupado últimamente\l"
	.string "poniendo en orden varios asuntos...$"

CianwoodCity_Evento_Mirto_Texto_4:
.string "...\n"
	.string "...$"

CianwoodCity_Evento_Mirto_Texto_5:
.string "En cuanto a mi POKÉMON, probamos\n"
	.string "de todo, pero sigue igual. Ninguno\l"
	.string "de los remedios que con el resto\l"
	.string "de POKÉMON funcionan tiene\l"
	.string "aplicación en mi VOLCARONA.\l"
	.string "Me recomendaron venir a esta\l"
	.string "FARMACIA, la más antigua de JOHTO,\l"
	.string "pero nada parece afectarle al\l"
	.string "cuerpo de mi POKÉMON. Nada más que\l"
	.string "su propia energía, la misma que le\l"
	.string "está comiendo por dentro.$"

CianwoodCity_Evento_Mirto_Texto_6:
.string "Muchos quieren tener POKÉMON más\n"
	.string "fuertes, hablan del poder como si\l"
	.string "fueran simples números lanzados al\l"
	.string "aire, pero no se dan cuenta del\l"
	.string "enorme costo que supone llegar a\l"
	.string "ciertos niveles para la fisiología\l"
	.string "de los POKÉMON. Solo ven el\l"
	.string "resultado, no las causas y efectos\l"
	.string "que llevan a él.$"

CianwoodCity_Evento_Mirto_Texto_7:
.string "Pase lo que pase, no volveré a ver\n"
	.string "el poder y la fuerza de los\l"
	.string "POKÉMON de la misma forma, ya he\l"
	.string "conocido sus límites últimos. Ha\l"
	.string "sido tal mi vínculo con VOLCARONA,\l"
	.string "que he cruzado el límite del vigor\l"
	.string "y la fuerza, para acabar chocando\l"
	.string "con su antagónico: la enfermedad.$"

CianwoodCity_Evento_Mirto_Texto_8:
.string "Volveré una vez más a TORRE\n"
	.string "CAMPANA, {PLAYER}, para agotar todas\l"
	.string "mis opciones.\l"
	.string "El ENTRENADOR más sabio y poderoso\l"
	.string "de la región visitará el lugar\l"
	.string "dentro de poco. El LÍDER de CIUDAD\l"
	.string "IRIS me ha hablado de él, es el\l"
	.string "único con un POKÉMON FUERTE\l"
	.string "VÍNCULO de mayor poder global que\l"
	.string "mi VOLCARONA, a pesar de que el\l"
	.string "suyo es un PSEUDOLEGENDARIO y no\l"
	.string "podemos medirlo con la misma vara.\l"
	.string "Tal vez, él sepa algo que hemos\l"
	.string "pasado por alto.$"

CianwoodCity_Evento_Mirto_Texto_9:
.string "Adiós, {PLAYER}. Si me doy prisa\n"
	.string "puede que pueda ver el atardecer\l"
	.string "en CIUDAD IRIS, quién sabe\l"
	.string "cuantos más contemplaré con\l"
	.string "VOLCARONA a mi lado.$"

CianwoodCity_Evento_Mirto_Move_1:
jump_special_down
face_up
step_end

CianwoodCity_Evento_Mirto_Move_2:
emote_exclamation_mark
step_end

CianwoodCity_Evento_Mirto_Move_3:
walk_in_place_down
step_end

CianwoodCity_Evento_Mirto_Move_4:
face_right
step_end

CianwoodCity_Evento_Mirto_Move_5:
walk_in_place_right
step_end

CianwoodCity_Evento_Mirto_Move_6:
face_down
step_end

CianwoodCity_Esposa_Anibal_Heracrosita::
lock
faceplayer
checkitem ITEM_HERACRONITE
goto_if_eq VAR_RESULT, FALSE, CianwoodCity_Esposa_Anibal_Heracrosita_2
msgbox CianwoodCity_Esposa_Anibal_Heracrosita_Texto_2 MSGBOX_NPC
release
end

CianwoodCity_Esposa_Anibal_Heracrosita_2::
lock
msgbox CianwoodCity_Esposa_Anibal_Heracrosita_Texto_1 MSGBOX_NPC
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_HERACRONITE
lock
msgbox CianwoodCity_Esposa_Anibal_Heracrosita_Texto_3 MSGBOX_DEFAULT
waitfanfare
release
end

CianwoodCity_Esposa_Anibal_Heracrosita_Texto_3:
.string "¡¡Obtuviste HERACRONITA de\n"
	.string "manos de ESPOSA ANÍBAL!!$"

CianwoodCity_Esposa_Anibal_Heracrosita_Texto_1:
.string "Gracias por avisar a mi marido, ha\n"
	.string "venido justo a tiempo para\l"
	.string "celebrar las fiestas de la ciudad\l"
	.string "y estar con su familia.\l"
	.string "Toma esto, ANÍBAL dijo que ya no\l"
	.string "lo usaría más. Lo encontró una vez\l"
	.string "que se perdió por el ENCINAR.$"

CianwoodCity_Esposa_Anibal_Heracrosita_Texto_2:
.string "Mi marido dijo que nunca había\n"
	.string "visto tal fuerza bruta como la de\l"
	.string "un HERACROSS equipado con ese\l"
	.string "objeto, aunque también decía que\l"
	.string "lo volvía más lento. Prefirió a\l"
	.string "ese POKÉMON samurái de una región\l"
	.string "lejana.$"

CianwoodCity_Recluta::
lock
playse SE_PIN
applymovement 6, CianwoodCity_Recluta_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, CianwoodCity_Recluta_Move_2
waitmovement 0x0
msgbox CianwoodCity_Recluta_Texto_1 MSGBOX_AUTOCLOSE
msgbox CianwoodCity_Recluta_Texto_2 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_RUSTBORO_CITY_SCIENTIST
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_2F_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 151
release
end

CianwoodCity_Recluta_Move_1:
face_player
emote_exclamation_mark
walk_left
step_end

CianwoodCity_Recluta_Move_2:
face_right
step_end

CianwoodCity_Recluta_Texto_1:
.string "¡Le estaba buscando, sir!\n"
	.string "GIOVANNI le envía un recado\l"
	.string "urgente, la reunión que usted sabe\l"
	.string "va a celebrarse ya en CIUDAD\l"
	.string "TRIGAL. Ahora mismo está demasiado\l"
	.string "ocupado como para llamarle, pero\l"
	.string "me dijo que le encontraría en\l"
	.string "ORQUÍDEA.$"

CianwoodCity_Recluta_Texto_2:
.string "Nuestro LÍDER espera que vaya\n"
	.string "inmediatamente a TORRE RADIO y\l"
	.string "asista a la gran reunión como\l"
	.string "el resto de altos cargos del TEAM\l"
	.string "ROCKET. Eso es todo, señor.$"

CianwoodCity_Eusine_Camino_Secreto::
lock
applymovement OBJ_EVENT_ID_PLAYER, CianwoodCity_Eusine_Camino_Secreto_Move_1
waitmovement 0x0
delay 10
applymovement 13, CianwoodCity_Eusine_Camino_Secreto_Move_2
waitmovement 0x0
msgbox CianwoodCity_Eusine_Camino_Secreto_Texto_1 MSGBOX_AUTOCLOSE
msgbox CianwoodCity_Eusine_Camino_Secreto_Texto_2 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 4
setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_2
fadescreen 1
delay 20
removeobject 13
fadescreen 0
release
end

CianwoodCity_Eusine_Camino_Secreto_Move_2:
face_right
walk_in_place_left
step_end

CianwoodCity_Eusine_Camino_Secreto_Move_1:
walk_down
walk_down
walk_down
walk_in_place_left
step_end

CianwoodCity_Eusine_Camino_Secreto_Texto_1:
.string "EUSINE: Observa, esta roca está hueca,\n"
	.string "detrás de ella hay un estrecho túnel\l"
	.string "que conduce al interior de la montaña.$"

CianwoodCity_Eusine_Camino_Secreto_Texto_2:
.string "Una vez pases al otro lado, asegúrate\n"
	.string "de volver a colocar la roca en su lugar,\l"
	.string "no queremos que esto se llene de\l"
	.string "turistas, ¿verdad?$"



Ruta_47_Activador_Entrada::
compare VAR_VERDANTURF_TOWN_STATE, 3
goto_if_gt Ruta_47_Activador_Entrada_Pasa
release
end

Ruta_47_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_PASS_ROUTE47, 22, 12
release
end

Ruta_48_Activador_Entrada::
compare VAR_VERDANTURF_TOWN_STATE, 3
goto_if_gt Ruta_48_Activador_Entrada_Pasa
release
end

Ruta_48_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, CuevaTesoro_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox CuevaTesoro_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
warp MAP_CIANWOOD_CITY, 3, 20
release
end

