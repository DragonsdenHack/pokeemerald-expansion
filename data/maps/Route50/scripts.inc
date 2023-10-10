Route50_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route50_OnFrame
	.byte 0

Route50_OnFrame:
map_script_2 VAR_VERDANTURF_TOWN_STATE, 19, Route50_Miguel
	.2byte 0



Route50_EventScript_Montanero::
	trainerbattle_single TRAINER_THALIA_4, Route50_Text_MontaneroIntro, Route50_Text_MontaneroDefeated
	msgbox Route50_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end

Route50_Encuentro_Dunsparce::
lock
faceplayer
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_1
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route50_Encuentro_Dunsparce_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_6
waitmovement 0x0
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
waitse
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
		playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_3 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_MUGSHOT
applymovement 3, Route50_Encuentro_Dunsparce_Move_7
waitmovement 0x0
waitse
trainerbattle_no_intro TRAINER_TRAINER_137, Route50_Encuentro_Dunsparce_Texto_4
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_4 MSGBOX_DEFAULT
waitmoncry
delay 20
msgbox Route50_Encuentro_Dunsparce_Texto_5 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_3 MSGBOX_DEFAULT
waitmoncry
msgbox Route50_Encuentro_Dunsparce_Texto_7 MSGBOX_AUTOCLOSE
delay 40
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
playse SE_M_FLY
removeobject 3
waitse
playse SE_M_DETECT
addobject 4
waitse
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_9
waitmovement 0x0
delay 20
removeobject 4
playfanfare MUS_OBTAIN_ITEM
msgbox Route50_Encuentro_Dunsparce_Texto_8 MSGBOX_DEFAULT
waitfanfare
applymovement 2, Route50_Encuentro_Dunsparce_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_8
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_2
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 8
setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
fadescreen 1
delay 20
removeobject 2
fadescreen 0
release
end

Route50_Encuentro_Dunsparce_Move_10:
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Move_9:
walk_in_place_up
step_end

Route50_Encuentro_Dunsparce_Move_8:
face_left
step_end

Route50_Encuentro_Dunsparce_Move_7:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Route50_Encuentro_Dunsparce_Move_6:
emote_exclamation_mark
delay_8
walk_slow_up
step_end

Route50_Encuentro_Dunsparce_Move_5:
face_up
delay_8
walk_left
face_up
step_end

Route50_Encuentro_Dunsparce_Move_4:
face_up
step_end

Route50_Encuentro_Dunsparce_Move_3:
face_right
step_end

Route50_Encuentro_Dunsparce_Move_2:
face_right
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Move_1:
emote_exclamation_mark
face_down
delay_8
walk_in_place_down
step_end

Route50_Encuentro_Dunsparce_Texto_1:
.string "ANDRA: ¡¿Dónde te habías metido,\n"
	.string "{PLAYER}?!$"

Route50_Encuentro_Dunsparce_Texto_2:
.string "¡No vas a creer lo que acaba de ocurr...!$"

Route50_Encuentro_Dunsparce_Texto_3:
.string "¡¡¡GROAAAAAAAAR!!!$"

Route50_Encuentro_Dunsparce_Texto_4:
.string "Groarr…$"

Route50_Encuentro_Dunsparce_Texto_5:
.string "ANDRA: ¡Eso es! ¡Has repetido mi\n"
	.string "combate, ha sido exactamente igual al\l"
	.string "mío! ¿Pero cómo…?$"

Route50_Encuentro_Dunsparce_Texto_6:
.string "¿La pagoda que hay al suroeste? ¡Vamos,\n"
	.string "{PLAYER}! ¡Ahí nos vemos!$"

Route50_Encuentro_Dunsparce_Texto_7:
.string "ANDRA: Nos... nos está observando\n"
	.string "detenidamente...$"

Route50_Encuentro_Dunsparce_Texto_8:
	.string "¡¡{PLAYER} obtuvo una PIEDRA DORADA!!$"


Route50_Dragonite::
lock
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Route50_Dragonite_Texto_1 MSGBOX_DEFAULT
release
end

Route50_Dragonite_Texto_1:
.string "Es un DRAGONITE, está bloqueando el\n"
	.string "paso a una zona aún más al norte.$"



Route50_Miguel::
lock
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 13
addobject 14
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route50_Miguel_Escena_Move_1
waitmovement 0x0
addobject 13
special RemoveCameraObject
delay 10
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER 
waitmoncry
playse SE_BALL_TRADE
delay 15
setflag FLAG_NUEVA_861
removeobject 12
delay 15
applymovement 13, Route50_Miguel_Escena_Move_2
waitmovement 0x0
applymovement 14, Route50_Miguel_Escena_Move_8
waitmovement 0x0
msgbox Route50_Miguel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_4
waitmovement 0x0
msgbox Route50_Miguel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_4 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
applymovement 14, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_5 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_6
waitmovement 0x0
msgbox Route50_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_7
waitmovement 0x0
msgbox Route50_Miguel_Texto_7 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_8
waitmovement 0x0
msgbox Route50_Miguel_Texto_8 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_4
waitmovement 0x0
msgbox Route50_Miguel_Texto_9 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_10 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, Route50_Miguel_Escena_Move_4
waitmovement 0x0
msgbox Route50_Miguel_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_13 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_9
waitmovement 0x0
msgbox Route50_Miguel_Texto_14 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
msgbox Route50_Miguel_Texto_16 MSGBOX_AUTOCLOSE
applymovement 13, Route50_Miguel_Escena_Move_3
waitmovement 0x0
msgbox Route50_Miguel_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, Route50_Miguel_Escena_Move_10
waitmovement 0x0
delay 15
msgbox Route50_Miguel_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 13, Route50_Miguel_Escena_Move_5
waitmovement 0x0
delay 15
msgbox Route50_Miguel_Texto_19 MSGBOX_AUTOCLOSE
delay 30
setvar VAR_VERDANTURF_TOWN_STATE, 20
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
warpsilent MAP_CIANWOOD_CITY, 29, 3
release
end

Route50_Miguel_Escena_Move_10:
face_down
step_end

Route50_Miguel_Escena_Move_9:
walk_left
step_end

Route50_Miguel_Escena_Move_8:
walk_up
step_end

Route50_Miguel_Escena_Move_7:
walk_in_place_up
step_end

Route50_Miguel_Escena_Move_6:
walk_right
step_end

Route50_Miguel_Escena_Move_5:
face_up
step_end

Route50_Miguel_Escena_Move_4:
face_left
step_end

Route50_Miguel_Escena_Move_3:
walk_in_place_down
step_end

Route50_Miguel_Escena_Move_2:
walk_down
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

Route50_Miguel_Texto_1:
.string "TRISTANA: ¿Lo has encontrado?$"

Route50_Miguel_Texto_2:
.string "????: Así es, tu corazonada era cierta.\n"
	.string "¿Y tú? ¿Has llegado a verlos?$"

Route50_Miguel_Texto_3:
.string "TRISTANA: En la cima de PILAR DUN. Son\n"
	.string "tal y como describiste, con ese aura de\l"
	.string "triunfo y capacidad de mantenerse\l"
	.string "presentes cuando más importa. No es de\l"
	.string "extrañar que el DRAGÓN SAGRADO les\l"
	.string "haya escogido.$"

Route50_Miguel_Texto_4:
.string "????: Lo sé…la historia solo recuerda a\n"
	.string "los que lo logran, pero por el camino la\l"
	.string "inmensa mayoría de los que lo\l"
	.string "intentaron acabaron sucumbiendo al\l"
	.string "peso de sus circunstancias vitales.$"

Route50_Miguel_Texto_5:
.string "Puede que se implicaran lo mismo, o\n"
	.string "incluso más, que esos pocos que\l"
	.string "acabaron triunfando, pero eso jamás lo\l"
	.string "sabrán, serán olvidados creyendo que\l"
	.string "fracasaron.$"

Route50_Miguel_Texto_6:
.string "Esa estrecha fosa del norte es la viva\n"
	.string "imagen de ello, de cómo la otra línea\l"
	.string "evolutiva de DUNSPARCE, la línea\l"
	.string "anclada al barro, ha sido despreciada y\l"
	.string "olvidada.$"

Route50_Miguel_Texto_7:
.string "TRISTANA: Así es, la estrecha fosa del\n"
	.string "norte era antaño la contraparte del\l"
	.string "PILAR DUN. Allí, un DUDUNSPARCE trató\l"
	.string "también de elevarse por encima de un\l"
	.string "destino adverso, lo intentó con el\l"
	.string "mismo ímpetu que el ahora DRAGÓN\l"
	.string "SAGRADO, pero… no todos pueden ser el\l"
	.string "número 1, la gloria solo está reservada\l"
	.string "a unos pocos.$"

Route50_Miguel_Texto_8:
.string "Sin un resultado que respaldara su\n"
	.string "titánico esfuerzo, su santuario poco a\l"
	.string "poco fue olvidado, hasta el punto de\l"
	.string "ser prácticamente engullido por la\l"
	.string "vegetación y el tiempo. La historia fue\l"
	.string "cruel con ese POKÉMON.$"

Route50_Miguel_Texto_9:
.string "????: Empezando por esos hipócritas\n"
	.string "pensadores de TORRE DUN, que se llenan\l"
	.string "la boca con su DRAGÓN SAGRADO, y de\l"
	.string "cómo fue despreciado por sus\l"
	.string "semejantes.$"

Route50_Miguel_Texto_10:
.string "Sin embargo, ellos hacen lo mismo con\n"
	.string "DUDUNSPARCE, dando por hecho que\l"
	.string "jamás podrá tocar el mismo cielo.$"

Route50_Miguel_Texto_11:
.string "Porque claro, DUDUNSPARCE no ha sido\n"
	.string "<bendecido>, como BLESSPARCE. ¿Qué es\l"
	.string "entonces la voluntad?$"

Route50_Miguel_Texto_12:
.string "TRISTANA: Veo que este tema te toca\n"
	.string "sobremanera.$"

Route50_Miguel_Texto_13:
.string "????: Me siento demasiado reflejado en\n"
	.string "este POKÉMON como para pasar por alto\l"
	.string "todo eso. Su historia ya me la conozco,\l"
	.string "la he vivido en mis carnes.$"

Route50_Miguel_Texto_14:
.string "Sé lo que es estar en el barro, haber\n"
	.string "dado lo mejor y no ser suficiente. Y\l"
	.string "mientras, ver cómo otros obtienen todo\l"
	.string "cuanto a su voluntad se le antoje.$"

Route50_Miguel_Texto_15:
.string "Pero… eso se acabó.$"

Route50_Miguel_Texto_16:
.string "Este POKÉMON, yo… jamás fuimos tenidos\n"
	.string "en cuenta, fuimos subestimados,\l"
	.string "derrotados, pasados por alto…$"

Route50_Miguel_Texto_17:
.string "Pero juntos… lograremos sacar la mejor\n"
	.string "parte de nosotros, y con ello nuestro\l"
	.string "espíritu, nuestra <voluntad>\l"
	.string "permanecerá inexpugnable.$"

Route50_Miguel_Texto_18:
.string "TRISTANA: Recuerda que todo esto\n"
	.string "tiene un precio.$"

Route50_Miguel_Texto_19:
.string "????: Si esta es la recompensa, para mí\n"
	.string "no lo tiene.$"

Route50_Miguel_Escena_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
step_end


