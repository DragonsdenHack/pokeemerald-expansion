Aqua3_MapScripts::
	.byte 0

Aqua3_Combate_Aquiles_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_1
waitmovement 0x0
goto Aqua3_Combate_Aquiles

Aqua3_Combate_Aquiles_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_1.1
waitmovement 0x0
goto Aqua3_Combate_Aquiles

Aqua3_Combate_Aquiles::
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
msgbox Aqua3_Combate_Aquiles_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 1, Aqua3_Combate_Aquiles_Move_3
waitmovement 0x0
waitse
applymovement 1, Aqua3_Combate_Aquiles_Move_4
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Aqua3_Combate_Aquiles_Move_3.1
waitmovement 0x0
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Aqua3_Combate_Aquiles_Move_3.2
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_2.3 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_5
waitmovement 0x0
applymovement 1, Aqua3_Combate_Aquiles_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_7
waitmovement 0x0
special RemoveCameraObject
playbgm MUS_ENCOUNTER_AQUA, FALSE
msgbox Aqua3_Combate_Aquiles_Texto_3 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_3.2 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 17, 42, 0
waitfieldeffect FLDEFF_SPARKLE
closemessage
setvar VAR_RESULT, 2
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
delay 75
addobject 1
waitfanfare
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 2
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
goto Aqua3_Combate_Aquiles_2
delay 150
removeobject LOCALID_KYOGRE_SLEEPING
addobject LOCALID_KYOGRE
addobject 4
waitstate
delay 60
applymovement 4, MagmaHideout_4F_Movement_GroudonApproach
waitmovement 0
special FadeOutOrbEffect
waitstate
setvar VAR_0x8004, 2  @ vertical pan
setvar VAR_0x8005, 2  @ horizontal pan
setvar VAR_0x8006, 8  @ num shakes
setvar VAR_0x8007, 5  @ shake delay
special ShakeCamera
waitstate
applymovement 4, MagmaHideout_4F_Movement_GroudonExit
waitmovement 0

Aqua3_Combate_Aquiles_2::
special SpawnCameraObject
applymovement 4, TerraCave_End_Movement_GroudonApproach
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 120
playse SE_BALL_THROW
waitse
playmoncry SPECIES_KYOGRE, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
removeobject 4
playse SE_BALL_OPEN
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 5
waitse
delay 15
playse SE_RG_BALL_CLICK
waitse
playse SE_BALL_TRADE
delay 15
setflag FLAG_HIDE_ROUTE_119_SCOTT
removeobject 5
delay 15
playse MUS_B_PYRAMID_TOP
msgbox Aqua3_Combate_Aquiles_Texto_4 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma3_Combate_Magno_Move_10.1
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Magma3_Combate_Magno_Move_10
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_11
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Magma3_Combate_Magno_Move_12
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_6.2 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_AQUILES, Aqua3_Combate_Aquiles_Texto_7
msgbox Aqua3_Combate_Aquiles_Texto_8 MSGBOX_AUTOCLOSE
fadeoutbgm 0
playse 586
msgbox Aqua3_Combate_Aquiles_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_10
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 3
applymovement 3, Magma3_Combate_Magno_Move_13
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_10 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_11 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_12 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, Magma3_Combate_Magno_Move_3.1
waitmovement 0x0
waitse
msgbox Aqua3_Combate_Aquiles_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Magma3_Combate_Magno_Move_14
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_15
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_FLOETTE, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_M_SUPERSONIC
waitse
applymovement 3, Magma3_Combate_Magno_Move_1
waitmovement 0x0
playse SE_BALL_TRADE
waitse
msgbox Aqua3_Combate_Aquiles_Texto_14 MSGBOX_AUTOCLOSE
playse SE_RG_CARD_FLIP
applymovement 1, Magma3_Combate_Magno_Move_15.1
waitmovement 0x0
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_16 MSGBOX_AUTOCLOSE
msgbox Aqua3_Combate_Aquiles_Texto_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Magma3_Combate_Magno_Move_3
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_18 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
fadescreen 1
delay 20
removeobject 1
fadescreen 0
delay 15
applymovement 3, Magma3_Combate_Magno_Move_17
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_18
waitmovement 0x0
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_21.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_21.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Aqua3_Combate_Aquiles_Move_4
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_22 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Aqua3_Combate_Aquiles_Move_17
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_24 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_19
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_10
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_25 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_6
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_26 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_26.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_26.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Aqua3_Combate_Aquiles_Move_20
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_27 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_10
waitmovement 0x0
msgbox Aqua3_Combate_Aquiles_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, Aqua3_Combate_Aquiles_Move_21
waitmovement 0x0
delay 15
msgbox Aqua3_Combate_Aquiles_Texto_20 MSGBOX_AUTOCLOSE
delay 20
msgbox Aqua3_Combate_Aquiles_Texto_29 MSGBOX_AUTOCLOSE
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_29.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Aqua3_Combate_Aquiles_Move_22
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 3
fadeoutbgm 0
playse 0
delay 100
playse SE_POKENAV_CALL
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Aqua3_Combate_Aquiles_Move_3
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Aqua3_Combate_Aquiles_Texto_30 MSGBOX_AUTOCLOSE
delay 25
playse SE_PC_OFF
waitse
delay 20
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
setvar VAR_UNUSED_0x40F7, 101
release
end

Magma3_Combate_Magno_Move_10.1:
walk_in_place_up
step_end

Magma3_Combate_Magno_Move_3.1:
walk_in_place_left
step_end

Aqua3_Combate_Aquiles_Move_3.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

Aqua3_Combate_Aquiles_Move_3.2:
walk_in_place_left
step_end

Aqua3_Combate_Aquiles_Texto_1:
.string "AQUILES: Pronto serás libre, KYOGRE.\n"
	.string "Aquellos que te confinaron pagarán por\l"
	.string "haber cometido tal atrocidad a aquel\l"
	.string "que posibilitó la proliferación de la\l"
	.string "vida.\l"
	.string "El mar recuperará a su hijo pródigo.$"

Aqua3_Combate_Aquiles_Texto_2:
.string "¡Imposible!\n"
	.string "¡Nadie del TEAM ROCKET debería poder\l"
	.string "derrotar al ALMIRANTE TOLO!$"

Aqua3_Combate_Aquiles_Texto_2.1:
	.string "Tal vez te subestimé, chico.\n"
	.string "Puede que no todos seáis como dicen.\p"
	.string "Has demostrado un gran valor e interés\n"
	.string "por lo desconocido, con esas cualidades\l"
	.string "serías un gran miembro del EQUIPO AQUA.$"

Aqua3_Combate_Aquiles_Texto_2.2:
	.string "Seguro que sabes apreciar el espectáculo\n"
	.string "que está a punto de producirse aquí.\l"
	.string "¡Vamos, ROCKET! ¡Camina!$"

Aqua3_Combate_Aquiles_Texto_2.3:
	.string "¡¡Ya es demasiado tarde para\n"
	.string "echarse atrás, la tormenta te\l"
	.string "engullirá de todos modos!!$"

Aqua3_Combate_Aquiles_Texto_3:
.string "KYOGRE duerme en lo profundo de esta\n"
	.string "pequeña gruta marina; que un ser\l"
	.string "destinado a gobernar con puño de hierro\l"
	.string "los océanos haya estado confinado en\l"
	.string "este charco por milenios, es un\l"
	.string "sacrilegio al que pondré fin ahora.$"

Aqua3_Combate_Aquiles_Texto_3.1:
	.string "Solo necesito hacer brillar la\n"
	.string "ESFERA AZUL por última vez, y\l"
	.string "KYOGRE hará acto de presencia.$"

Aqua3_Combate_Aquiles_Texto_3.2:
	.string "¡Observa con atencion, ROCKET!\n"
	.string "¡No volverás a ver algo así jamás!$"

Aqua3_Combate_Aquiles_Texto_4:
.string "¡KYOGRE!\n"
	.string "¡Señor de los mares!\l"
	.string "¡El mundo necesita de tu inmenso\l"
	.string "poder para restaurar el equilibrio!\l"
	.string "¡Contigo de nuevo, los mares recobrarán\l"
	.string "su esencia y supremacía original!$"

Aqua3_Combate_Aquiles_Texto_4.1:
	.string "¡Hazme digno de navegar bajo la\n"
	.string "peor de las tormentas que toda\l"
	.string "tu furia pueda dar!\l"
	.string "¡Mis POKÉMON y yo estamos\l"
	.string "preparados!$"

Aqua3_Combate_Aquiles_Texto_5:
.string "Fin del juego, chico.\n"
	.string "Es hora de que asumas las consecuencias\l"
	.string "de tus actos; el valor te llevó a\l"
	.string "a presenciar el despertar de KYOGRE;\l"
	.string "la emoción por alcanzar esa peligrosa\l"
	.string "recompensa, es la que te va a llevar\l"
	.string "a la perdición.$"

Aqua3_Combate_Aquiles_Texto_6:
.string "He pasado por muchas aventuras, todas\n"
	.string "ellas han hecho mejor a mi tripulación.$"

Aqua3_Combate_Aquiles_Texto_6.1:
	.string "A diferencia de esos LÍDERES, como\n"
	.string "esa MISTY de CELESTE, o PLUBIO en\l"
	.string "ARRECÍPOLIS{PAUSE 15}…{PAUSE 15} mis POKÉMON del TIPO AGUA\l"
	.string "están hechos de otra pasta, se han\l"
	.string "curtido a base de surcar las aguas\l"
	.string "más bravas del mundo.$"

Aqua3_Combate_Aquiles_Texto_6.2:
	.string "Ahora, con KYOGRE como colofón\n"
	.string "a esta gran aventura.\l"
	.string "¡Nadie podrá frenarme!$"


Aqua3_Combate_Aquiles_Texto_7:
.string "¡Imposible! ¡Todo era perfecto!\n"
	.string "¡¡KYOGRE!!$"

Aqua3_Combate_Aquiles_Texto_8:
.string "¡¿Qué significa esto?!\n"
	.string "KYOGRE estaba a pleno rendimiento, no\l"
	.string "he visto jamás ataques acuáticos de\l"
	.string "semejante potencia.\l"
	.string "¿De dónde has sacado la fortaleza\l"
	.string "para lidiar con este poder ancestral?\l"
	.string "¡Todo mi plan no puede echarse a perder\l"
	.string "de esta manera en cuestión de segundos!$"

Aqua3_Combate_Aquiles_Texto_9:
.string "????: Ya se ha echado a perder, AQUILES.\n"
	.string "No volverás a estar tan cerca de KYOGRE.$"

Aqua3_Combate_Aquiles_Texto_10:
.string "AQUILES: ¡TÚ!$"

Aqua3_Combate_Aquiles_Texto_11:
.string "ZEUS: Alguien como tú no puede manejar\n"
	.string "a tal POKÉMON como si fuera un juguete.\l"
	.string "Ahora, KYOGRE volverá a estar\l"
	.string "en las manos adecuadas.$"

Aqua3_Combate_Aquiles_Texto_12:
.string "AQUILES: ¿Las manos adecuadas?\n"
	.string "¿No te referirás a las tuyas?\l"
	.string "¡No me hagas reír!\l"
	.string "¡Sabes lo mismo sobre KYOGRE que\l"
	.string "yo sobre los POKÉMON terrestres!$"

Aqua3_Combate_Aquiles_Texto_12.1:
	.string "¡Solo eres un oportunista que…!$"

Aqua3_Combate_Aquiles_Texto_13:
.string "ZEUS: ¡FLOETTE!\l"
	.string "¡PSÍQUICO!$"

Aqua3_Combate_Aquiles_Texto_14:
.string "-ZEUS le arrebató a AQUILES todos\n"
	.string "sus POKÉMON y la ESFERA AZUL.-$"

Aqua3_Combate_Aquiles_Texto_15:
.string "AQUILES: {PAUSE 15}…{PAUSE 15}$"

Aqua3_Combate_Aquiles_Texto_16:
.string "¿Q{PAUSE 15}-{PAUSE 15}qué hago yo aquí?$"

Aqua3_Combate_Aquiles_Texto_17:
.string "ZEUS: Eso mismo nos preguntamos nosotros.\n"
	.string "Esta cueva no contiene nada importante,\l"
	.string "tus compañeros nos han hablado de KYOGRE,\l"
	.string "y de una ESFERA ROJA que lo despierta,\l"
	.string "pero eso está en HOENN{PAUSE 15}…{PAUSE 15}$"

Aqua3_Combate_Aquiles_Texto_18:
.string "AQUILES: ¡KYOGRE! ¡Sí!\n"
	.string "¡Debo encontrar esa ESFERA ROJA,\l"
	.string "queda mucho por hacer!\l"
	.string "¡Volvemos a HOENN!$"

Aqua3_Combate_Aquiles_Texto_19:
.string "ZEUS: Ahora, tanto AQUILES como MAGNO\n"
	.string "están destinados a ser incompetentes,\l"
	.string "no pondrán a nadie en peligro.\l"
	.string "Aunque llegasen a recuperar las esferas,\l"
	.string "al ser las equivocadas, todo su plan\l"
	.string "fracasaría de nuevo.$"

Aqua3_Combate_Aquiles_Texto_20:
.string "ZEUS: {PAUSE 15}…{PAUSE 15}$"

Aqua3_Combate_Aquiles_Texto_21:
.string "¿Ves injusto que les arrebate también\n"
	.string "el equipo que les ha llevado décadas?$"

Aqua3_Combate_Aquiles_Texto_21.1:
	.string "Es necesario, {PLAYER}.\n"
	.string "Ahora solo conocen de HOENN, ¿qué crees\l"
	.string "que pensaría AQUILES si ve que cuenta\l"
	.string "con un POKÉMON llamado WISHIWASHI?$"

Aqua3_Combate_Aquiles_Texto_21.2:
	.string "Exacto, se pondrá a investigar, y\n"
	.string "de nuevo volveremos al ciclo.$"

Aqua3_Combate_Aquiles_Texto_22:
.string "Sea como sea, ambos\n"
	.string "estaban equivocados.$"

Aqua3_Combate_Aquiles_Texto_23:
.string "Más tierra, más agua{PAUSE 15}…{PAUSE 15}\n"
	.string "Qué estupidez, solo el creador de\l"
	.string "todo tiene poder para decidir\l"
	.string "sobre el planeta en su conjunto.$"

Aqua3_Combate_Aquiles_Texto_24:
.string "Lo siento, {PLAYER}.\n"
	.string "Pero no te conté toda la verdad, es\l"
	.string "cierto que quería evitar que KYOGRE\l"
	.string "y GROUDON cayeran en sus manos.$"
	
Aqua3_Combate_Aquiles_Texto_24.1:
	.string "Pero no para mantenerlos confinados\n"
	.string "hasta el fin de los tiempos{PAUSE 15}…{PAUSE 15}$"

Aqua3_Combate_Aquiles_Texto_25:
.string "AQUILES y MAGNO creían que iban detrás\n"
	.string "de los mayores poderes en este mundo.\l"
	.string "Efectivamente, son muy poderosos, ya\l"
	.string "has tenido ocasión de comprobarlo{PAUSE 15}…{PAUSE 15}$"

Aqua3_Combate_Aquiles_Texto_26:
.string "Sin embargo, sus poderes palidecen\n"
	.string "ante el verdadero origen de todo.$"

Aqua3_Combate_Aquiles_Texto_26.1:
	.string "Los dos: KYOGRE y GROUDON, junto con\n"
	.string "RAYQUAZA, son POKÉMON necesarios que,\l"
	.string "unidos, harán aparecer al creador\l"
	.string "original de todo.$"

Aqua3_Combate_Aquiles_Texto_26.2:
	.string "Un poder que sí puede cambiar al\n"
	.string "mundo para siempre, ¿qué es un poco\l"
	.string "más de agua o tierra, en comparación\l"
	.string "con poder reducir todo a polvo de un\l"
	.string "solo chasquido, o generar el mayor de\l"
	.string "los paraísos?$"

Aqua3_Combate_Aquiles_Texto_27:
.string "AQUILES y MAGNO se preguntaban el\n"
	.string "porqué de sus derrotas, creían en\l"
	.string "la perfección de KYOGRE y GROUDON.\l"
	.string "Pero sus poderes son incompletos{PAUSE 5}…{PAUSE 5}$"

Aqua3_Combate_Aquiles_Texto_28:
.string "Nada me retiene ya aquí.\n"
	.string "JOHTO es mi próximo destino, sospecho\l"
	.string "que el ENTRENADOR más poderoso y sabio\l"
	.string "de la región guarda otro de los POKÉMON\l"
	.string "vinculados con el origen de todo.$"

Aqua3_Combate_Aquiles_Texto_29:
.string "ZEUS: Espero, {PLAYER}, que ni se te\n"
	.string "pase por la cabeza tratar de oponerte\l"
	.string "a mi voluntad. En nuestro combate de\l"
	.string "prueba no usé más del 50% de mi poder.$"

Aqua3_Combate_Aquiles_Texto_29.1:
	.string "No quisiera que me obligaras a emplear\n"
	.string "el 100% de mis capacidades, pero no\l"
	.string "dudaré en hacerlo si te pones en medio.$"

Aqua3_Combate_Aquiles_Texto_30:
.string "GIOVANNI: ¿ADMIN {PLAYER}?\n"
	.string "¿Sigues en ISLAS SETE?\l"
	.string "Tenemos muchas cosas de las que\l"
	.string "hablar, requiero de tu presencia\l"
	.string "cuanto antes en mi despacho.$"

Aqua3_Combate_Aquiles_Move_1:
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_1.1:
walk_up
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_2:
walk_right
step_end

Aqua3_Combate_Aquiles_Move_3:
emote_exclamation_mark
step_end

Aqua3_Combate_Aquiles_Move_4:
face_left
step_end

Aqua3_Combate_Aquiles_Move_5:
walk_right
walk_right
face_up
step_end

Aqua3_Combate_Aquiles_Move_6:
face_up
step_end

Aqua3_Combate_Aquiles_Move_7:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

Aqua3_Combate_Aquiles_Move_8:
slide_down
step_end

Aqua3_Combate_Aquiles_Move_9:
walk_down
walk_down
walk_down
walk_left
walk_down
walk_down
step_end

Aqua3_Combate_Aquiles_Move_10:
face_left
step_end

Aqua3_Combate_Aquiles_Move_11:
face_right
step_end

Aqua3_Combate_Aquiles_Move_12:
walk_in_place_left
step_end

Aqua3_Combate_Aquiles_Move_13:
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Aqua3_Combate_Aquiles_Move_14:
walk_right
walk_right
step_end

Aqua3_Combate_Aquiles_Move_15:
walk_down
face_up
step_end

Aqua3_Combate_Aquiles_Move_16:
emote_question_mark
step_end

Aqua3_Combate_Aquiles_Move_17:
face_down
step_end

Aqua3_Combate_Aquiles_Move_18:
walk_in_place_down
step_end

Aqua3_Combate_Aquiles_Move_19:
walk_left
walk_slow_down
walk_in_place_down
step_end

Aqua3_Combate_Aquiles_Move_20:
walk_slow_up
walk_in_place_right
step_end

Aqua3_Combate_Aquiles_Move_21:
walk_left
walk_left
step_end

Aqua3_Combate_Aquiles_Move_22:
walk_left
walk_left
walk_up
walk_left
walk_left
walk_left
step_end
