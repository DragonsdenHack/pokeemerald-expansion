Route49_MazeP4_MapScripts::
	.byte 0


Route49_MazeP4_3::
lock     
faceplayer     
msgbox Route49_MazeP4_Text3, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text3:
.string "No se trata de realizar el esfuerzo\n"
.string "máximo, sino el esfuerzo óptimo que nos\l"
.string "permita seguir mejorando un día más.$"




Route49_MazeP4_4::
lock     
faceplayer     
msgbox Route49_MazeP4_Text4, MSGBOX_DEFAULT
release     
end

Route49_MazeP4_Text4:
.string "La gente tiene tanta necesidad de\n"
.string "mencionar los defectos porque duele\l"
.string "mucho que te superen en virtudes.$"



Route49MazeP4Documento_100::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando  
showmonpic SPECIES_SACRED_DRAGON, 10, 3  
playmoncry SPECIES_XERNEAS, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP4Documento_Text_100, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP4Documento_Text_100:
.string "DRAGÓN SAGRADO:\p"
	.string "PS: 163\n"
	.string "ATAQUE: 2\l"
	.string "DEFENSA: 97\l"
	.string "ATAQUE ESPECIAL: 157\l"
	.string "DEFENSA ESPECIAL: 193\l"
	.string "VELOCIDAD: 109\l"
	.string "TOTAL: 721\p"
	.string "TIPO: DRAGÓN/PSÍQUICO\n"
	.string "HABILIDAD: ELECTROGÉNESIS\l"
	.string "La leyenda dice que surgió a partir de\l"
	.string "un DUNSPARCE, el cual fue despreciado\l"
	.string "y juzgado por el resto de POKEMON.\l"
	.string "Producto de ello y su inquebrantable\l"
	.string "voluntad, logró trascender más allá de\l"
	.string "su limitada forma. El proceso y\l"
	.string "fenómeno por el cual logró esto es todo\l"
	.string "un misterio.$"

Route49_MazeP4_Combate_Maestro::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_1
applymovement OBJ_EVENT_ID_CAMERA, Route49_MazeP4_Combate_Maestro_Move_2
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
playse SE_FAINT
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_3
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_4 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route49_MazeP4_Combate_Maestro_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_7
waitmovement 0x0
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_8
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_9
waitmovement 0x0
delay 30
msgbox Route49_MazeP4_Combate_Maestro_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_10
waitmovement 0x0
delay 15
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_11
waitmovement 0x0
delay 15
msgbox Route49_MazeP4_Combate_Maestro_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_17, Route49_MazeP4_Combate_Maestro_Texto_9
playse SE_PIN
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_13
waitmovement 0x0
delay 15
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_12
waitmovement 0x0
delay 10
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_10
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_10
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox Route49_MazeP4_Combate_Maestro_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_15
waitmovement 0x0
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_4
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_13 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_15 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_15.1 MSGBOX_AUTOCLOSE
delay 20
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_11
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_16 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_1
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_4
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_19 MSGBOX_AUTOCLOSE
msgbox Route49_MazeP4_Combate_Maestro_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_11
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_22_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox Route49_MazeP4_Combate_Maestro_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_16
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_24 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_13
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_13
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_13
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_25 MSGBOX_AUTOCLOSE
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_17
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox Route49_MazeP4_Combate_Maestro_Texto_28 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route49_MazeP4_Combate_Maestro_Move_18
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_29 MSGBOX_AUTOCLOSE
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_19
applymovement OBJ_EVENT_ID_PLAYER, Route49_MazeP4_Combate_Maestro_Move_14
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_30 MSGBOX_AUTOCLOSE
applymovement 6, Route49_MazeP4_Combate_Maestro_Move_20
waitmovement 0x0
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_21
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_31 MSGBOX_AUTOCLOSE
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_22
waitmovement 0x0
msgbox Route49_MazeP4_Combate_Maestro_Texto_32 MSGBOX_AUTOCLOSE
applymovement 5, Route49_MazeP4_Combate_Maestro_Move_20
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_BEDROOM
removeobject 6
removeobject 5
setvar VAR_VERDANTURF_TOWN_STATE, 17
release
end

Route49_MazeP4_Combate_Maestro_Move_22:
walk_in_place_right
step_end

Route49_MazeP4_Combate_Maestro_Move_21:
walk_down
walk_down
face_right
step_end

Route49_MazeP4_Combate_Maestro_Move_20:
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_up
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
step_end

Route49_MazeP4_Combate_Maestro_Move_19:
walk_down
face_right
step_end

Route49_MazeP4_Combate_Maestro_Move_18:
walk_slow_left
face_down
step_end

Route49_MazeP4_Combate_Maestro_Move_17:
walk_down
walk_right
step_end

Route49_MazeP4_Combate_Maestro_Move_16:
walk_slow_right
step_end

Route49_MazeP4_Combate_Maestro_Move_15:
walk_left
walk_down
step_end

Route49_MazeP4_Combate_Maestro_Move_14:
face_left
step_end

Route49_MazeP4_Combate_Maestro_Move_13:
emote_exclamation_mark
step_end

Route49_MazeP4_Combate_Maestro_Move_12:
walk_slow_right
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_11:
walk_in_place_down
step_end

Route49_MazeP4_Combate_Maestro_Move_10:
face_right
step_end

Route49_MazeP4_Combate_Maestro_Move_9:
walk_slow_up
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_8:
walk_left
walk_up
walk_up
walk_in_place_down
step_end

Route49_MazeP4_Combate_Maestro_Move_7:
emote_exclamation_mark
face_up
step_end

Route49_MazeP4_Combate_Maestro_Move_6:
walk_slow_left
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_5:
walk_slow_right
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Route49_MazeP4_Combate_Maestro_Move_4:
face_down
step_end

Route49_MazeP4_Combate_Maestro_Move_3:
face_up
step_end

Route49_MazeP4_Combate_Maestro_Move_2:
walk_slow_left
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Route49_MazeP4_Combate_Maestro_Move_1:
walk_in_place_up
step_end

Route49_MazeP4_Combate_Maestro_Texto_1.1:
.string "ANDRA: ... ...$"

Route49_MazeP4_Combate_Maestro_Texto_1:
.string "G.MAESTRO: Tienes talento, voluntad y\n"
	.string "espíritu, joven. Pero te falta\l"
	.string "templanza, sin ella, jamás lograrás\l"
	.string "sacar todo tu potencial.$"

Route49_MazeP4_Combate_Maestro_Texto_2:
.string "Tu ética de entrenamiento es\n"
	.string "asombrosa. Eres consciente de tus\l"
	.string "límites, y actúas para superarlos una\l"
	.string "vez tras otra, pero sin esa templanza\l"
	.string "dentro de un combate real, no podrás\l"
	.string "encontrar el nivel que mereces acorde\l"
	.string "a cómo entrenas.$"

Route49_MazeP4_Combate_Maestro_Texto_3:
.string "ANDRA: Estuve tan cerca…$"

Route49_MazeP4_Combate_Maestro_Texto_4:
.string "G.MAESTRO: El combate nunca peligró\n"
	.string "para mi equipo, creías tener el control,\l"
	.string "únicamente por hacer uso de un poder\l"
	.string "precisamente incontrolable.$"

Route49_MazeP4_Combate_Maestro_Texto_5:
.string "ANDRA: Ya veo, la próxima vez\n"
	.string "encontraré ese término medio, tan\l"
	.string "difícil de hallar.$"

Route49_MazeP4_Combate_Maestro_Texto_6:
.string "G.MAESTRO: Mmm, {PLAYER}, ¿no?\n"
	.string "Acércate, por favor.$"

Route49_MazeP4_Combate_Maestro_Texto_7:
.string "Desprendes un aura muy parecida a la de\n"
	.string "ANDRA, aunque más calmada, menos\l"
	.string "frenética.$"

Route49_MazeP4_Combate_Maestro_Texto_8:
.string "Mmm, bien… enséñame cómo te relacionas\n"
	.string "con los tuyos.$"

Route49_MazeP4_Combate_Maestro_Texto_9:
.string "¡Oh! Qué maestría…$"

Route49_MazeP4_Combate_Maestro_Texto_10:
.string "G.MAESTRO: Ahora comprendo porqué el\n"
	.string "DRAGÓN SAGRADO apareció dos veces,\l"
	.string "ambos cultiváis un vínculo similar con\l"
	.string "uno de vuestros POKÉMON. El DRAGÓN\l"
	.string "SAGRADO lo interpretó como un único\l"
	.string "cuerpo.$"

Route49_MazeP4_Combate_Maestro_Texto_11:
.string "ANDRA: ¿Se refiere a nuestros CROBAT?\n"
	.string "{PLAYER} y yo obtuvimos uno el mismo día,\l"
	.string "han crecido mucho desde entonces.$"

Route49_MazeP4_Combate_Maestro_Texto_12:
.string "G.MAESTRO: ¡Oh, sí! Desde luego, la\n"
	.string "cuestión es que vuestro estilo como\l"
	.string "entrenadores ha afectado al\l"
	.string "crecimiento final de vuestros CROBAT.$"

Route49_MazeP4_Combate_Maestro_Texto_13:
.string "¿Lo entendéis? Habéis moldeado la\n"
	.string "realidad de vuestro POKÉMON, a través\l"
	.string "de vuestra voluntad y vuestra\l"
	.string "conciencia. Solo contados\l"
	.string "entrenadores podrían hacer eso.$"

Route49_MazeP4_Combate_Maestro_Texto_14:
.string "Vuestro caso es un ejemplo de las\n"
	.string "posibilidades infinitas que existen\l"
	.string "para cada POKÉMON, tal y como…$"

Route49_MazeP4_Combate_Maestro_Texto_15:
.string "ANDRA: ¿Sus FUERTE VÍNCULO de\n"
	.string "JOLTEON, FLAREON y VAPOREON?$"

Route49_MazeP4_Combate_Maestro_Texto_15.1:
	.string "… …$"

Route49_MazeP4_Combate_Maestro_Texto_16:
.string "Por eso EUSINE está tan interesado en\n"
	.string "los PERROS LEGENDARIOS, ¿verdad?$"

Route49_MazeP4_Combate_Maestro_Texto_17:
.string "G.MAESTRO: Aquí no usamos ese término,\n"
	.string "joven.$"

Route49_MazeP4_Combate_Maestro_Texto_18:
.string "EN, RAI y SUI fueron los primeros\n"
	.string "POKÉMON en experimentar un vínculo\l"
	.string "similar a vuestros CROBAT. Hace más de\l"
	.string "1000 años, el primer GRAN MAESTRO de\l"
	.string "esta torre, logró obtener ese vínculo\l"
	.string "con 3 POKÉMON a la vez. 3 POKÉMON que\l"
	.string "eran formas primitivas de FLAREON,\l"
	.string "JOLTEON y VAPOREON.$"

Route49_MazeP4_Combate_Maestro_Texto_19:
.string "La diferencia con ENTEI, RAIKOU y\n"
	.string "SUICUNE, es que estos últimos\l"
	.string "surgieron por intervención divina.$"

Route49_MazeP4_Combate_Maestro_Texto_20:
.string "EUSINE: Y aún así, tienen un poder\n"
	.string "menor que los surgidos producto de la\l"
	.string "interacción entre humanos y POKÉMON.$"

Route49_MazeP4_Combate_Maestro_Texto_21:
.string "G.MAESTRO: Una interacción muy\n"
	.string "poderosa, decidme, ¿qué clase de\l"
	.string "fuerzas habéis enfrentado en vuestro\l"
	.string "viaje por JOHTO?$"

Route49_MazeP4_Combate_Maestro_Texto_22_1:
.string "ANDRA: A las mayores que puedan\n"
	.string "existir.$"

Route49_MazeP4_Combate_Maestro_Texto_22:
.string "Yo llegué a enfrentar al HO-OH dorado,\n"
	.string "en las profundidades de RUINAS ALFA.$"

Route49_MazeP4_Combate_Maestro_Texto_23:
.string "{PLAYER}... a algo aún más grande.$"

Route49_MazeP4_Combate_Maestro_Texto_24:
.string "G.MAESTRO: Tal y como temía, enfrentar\n"
	.string "a algo de tal calibre ha llegado a\l"
	.string "expandir las leyes de nuestro mundo.$"

Route49_MazeP4_Combate_Maestro_Texto_25:
.string "Tal vez sea una anomalía. Tal vez una\n"
	.string "bendición. Ese ser pudo hacer algo así,\l"
	.string "en señal de gratitud por derrotarlo,\l"
	.string "aunque fuera anclado a nuestras\l"
	.string "normas. Dicho POKÉMON pudo conceder\l"
	.string "parte de su ilimitada capacidad a\l"
	.string "mortales como nosotros.$"

Route49_MazeP4_Combate_Maestro_Texto_26:
.string "EUSINE: Entonces, ahora el nuevo límite\n"
	.string "es un misterio, ¿no?$"

Route49_MazeP4_Combate_Maestro_Texto_27:
.string "G.MAESTRO: ¡Jo, jo, jo! Y así debe ser,\n"
	.string "¿no crees, EUSINE?$"

Route49_MazeP4_Combate_Maestro_Texto_28:
.string "EUSINE: Su-supongo.$"

Route49_MazeP4_Combate_Maestro_Texto_29:
.string "G.MAESTRO: Ambos sois muy jovenes, aún\n"
	.string "inconscientes acerca de todo lo que\l"
	.string "podéis dar, vuestro potencial y\l"
	.string "posibilidades son infinitas.$"

Route49_MazeP4_Combate_Maestro_Texto_30:
.string "EUSINE: Yo me marcho. {PLAYER}, me\n"
	.string "gustaría que volvieras a visitar mi\l"
	.string "pequeña casa, al norte de ORQUÍDEA,\l"
	.string "tengo algo que proponerte.$"

Route49_MazeP4_Combate_Maestro_Texto_31:
.string "ANDRA: Yo también me voy, ha sido un\n"
	.string "placer luchar con usted, maestro.$"

Route49_MazeP4_Combate_Maestro_Texto_32:
.string "En cuanto acabemos nuestras misiones,\n"
	.string "deberíamos ver inmediatamente a\l"
	.string "GIOVANNI, toda esta información es\l"
	.string "justo lo que andábamos buscando.\l"
	.string "Buena suerte para lo que te reste,\l"
	.string "{PLAYER}.$"


Route49_MazeP4_Dialogo_Anciano::
lock
faceplayer
msgbox Route49_MazeP4_Dialogo_Anciano_Texto_1 MSGBOX_AUTOCLOSE
release
end

Route49_MazeP4_Dialogo_Anciano_Texto_1:
.string "Lo que tengáis que hacer, hacedlo. Mi\n"
	.string "tiempo ya pasó, no me opondré a los\l"
	.string "nuevos cambios. Espero que EUSINE\l"
	.string "pueda ayudaros en vuestro propósito,\l"
	.string "señal será de que es puro.$"

Route49MazeP4_EventScript_Sabio::
	trainerbattle_single TRAINER_TRAINER_193, Route49MazeP4_Text_SabioIntro, Route49MazeP4_Text_SabioDefeated
	msgbox Route49MazeP4_Text_SabioPostBattle, MSGBOX_AUTOCLOSE
	end

Route49MazeP4Documento_101::
lock
compare VAR_VERDANTURF_TOWN_STATE, 9
goto_if_lt RocketHideout7FDocumento_Esperando
showmonpic SPECIES_DUNSPARCE_OLD, 10, 3  
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER 
msgbox Route49MazeP4Documento_Text_101, MSGBOX_DEFAULT
hidemonpic
release     
end

Route49MazeP4Documento_Text_101:
.string "DUN:\p"
	.string "PS: 153\n"
	.string "ATAQUE: 44\l"
	.string "DEFENSA: 66\l"
	.string "ATAQUE ESPECIAL: 117\l"
	.string "DEFENSA ESPECIAL: 132\l"
	.string "VELOCIDAD: 99\l"
	.string "TOTAL: 611\p"
	.string "TIPO: DRAGÓN/PSÍQUICO\n"
	.string "HABILIDAD: PSICOGÉNESIS\l"
	.string "Evolución de BLESSPARCE que solo los\l"
	.string "elegidos pueden alcanzar. Posee\l"
	.string "mimbres de PSEUDOLEGENDARIO, aunque\l"
	.string "todos sus atributos en conjunto\l"
	.string "muestran una jerarquía incluso\l"
	.string "superior. Fue señalado por los antiguos\l"
	.string "como el NO LEGENDARIO con mayor\l"
	.string "potencial puro, ignorando fenómenos\l"
	.string "como la MEGAEVOLUCION y el FUERTE\l"
	.string "VINCULO.$"
