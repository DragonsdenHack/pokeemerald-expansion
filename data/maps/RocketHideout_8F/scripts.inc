RocketHideout_8F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
	.byte 0

RocketHideout_8F_OnFrame:
map_script_2 VAR_UNUSED_0x40DC, 12, RocketHideout_8F_Mision_Silph_Despues
map_script_2 VAR_UNUSED_0x40F7, 803, RocketHideout_8F_Disguise_Player
map_script_2 VAR_UNUSED_0x40F7, 809, RocketHideout_8F_Disguise_Player_3
	.2byte 0

RocketHideout_8F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 802, RocketHideout_8F_Disguise_Player_2
map_script_2 VAR_UNUSED_0x40F7, 808, RocketHideout_8F_Disguise_Player_4
	.2byte 0

RocketHideout_8F_Disguise_Player_2::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 803
end

RocketHideout_8F_Disguise_Player_4::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 809
end

RocketHideout_6F_Disguise_Player_2_Move_1:
face_right
step_end

RocketHideout8F_Mision_Johto_move_12.5:
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
face_up
delay_8
delay_8
face_right
delay_8
delay_8
face_down
delay_8
delay_8
face_left
delay_8
step_end

RocketHideout8F_1::
end



RocketHideout8F_2::
end

RocketHideout_8F_Mision_Articuno_Zapdos::
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
removeobject 7
removeobject 8
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
playse SE_EXIT
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 4
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12.1 MSGBOX_AUTOCLOSE
delay 25
playse SE_SHOP
addmoney 175000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_EVIOLITE
waitfanfare
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.2 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
delay 5
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
addobject 11
delay 15
showmonpic SPECIES_ZAPDOS, 17, 1   
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.2 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
playse SE_PIN
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
showmonpic SPECIES_ARTICUNO, 17, 1   
playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20.1 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.1 MSGBOX_AUTOCLOSE
delay 10
showmonpic SPECIES_MOLTRES, 17, 1   
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.3 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 11
delay 15
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.3
waitmovement 0x0
delay 5
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.3 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.4 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.2 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
setvar VAR_UNUSED_0x40F7, 63
release
end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.4:
face_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1:
face_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2:
face_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.3:
walk_slow_right
delay_16
delay_8
walk_slow_left
delay_16
delay_8
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1:
.string "GIOVANNI: ¿Qué te parece, {PLAYER}?\n"
	.string "Un lugar de trabajo más apropiado\l"
	.string "que la tapadera del S4, ¿cierto?\l"
	.string "¿Has descubierto algo?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2:
.string "Ya veo, DALIA es también nieta de OAK, y\n"
	.string "hermana de AZUL.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2.1:
	.string "Por lo que me cuentas, algo muy\n"
	.string "extraño pasa en ese lugar, o OAK\l"
	.string "se ha teletransportado usando algún\l"
	.string "POKÉMON o ese LABORATORIO no es tan\l"
	.string "inocente y caritativo como lo pintan.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3:
.string "ANDRA: ¿Pudiste entonces robar un\n"
	.string "BULBASAUR?\l"
	.string "¡Guau, que suerte!\l"
	.string "¡Muy pocos tienen acceso a esa clase de\l"
	.string "POKÉMON, yo tampoco me quedaré atrás!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4:
.string "AZUL: ¿Quería verme, GIOVANNI?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5:
.string "GIOVANNI: Así es AZUL, {PLAYER} ha estado\n"
	.string "en tu querido pueblo, ya que tú te\l"
	.string "negaste a proporcionarnos información\l"
	.string "sobre aquellas personas con las que\l"
	.string "has convivido durante toda tu vida.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} … {PAUSE 10}…{PAUSE 10}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7:
.string "AZUL: Ya se lo dije, GIOVANNI.\n"
	.string "La relación con mi abuelo es más bien\l"
	.string "formal, básicamente se ocupó de mí por\l"
	.string "los lazos familiares que nos unen; me\l"
	.string "he limitado a vivir con mi hermana,\l"
	.string "DALIA, ella sí congenia más con OAK.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8:
.string "En cuanto a ROJO, siempre fue\n"
	.string "su favorito, su alumno predilecto.\l"
	.string "Desde el momento que llegó a PUEBLO \l"
	.string "PALETA, ya le enseñaba a combatir.\l"
	.string "Pareciera como si fuera su elegido{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9:
.string "No puedo darle información\n"
	.string "porque no sé nada.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.1:
	.string "Y no quiero volver por ese pueblo, ahora\n"
	.string "que tengo la libertad que el ser\l"
	.string "ENTRENADOR me da, lo único que OAK\l"
	.string "y DALIA querían para mí era\l"
	.string "posicionarme en un buen puesto\l"
	.string "para dejar de ser una carga para\l"
	.string "ellos, me ven como eso, un trámite\l"
	.string "más del que ocuparse{PAUSE 10}…{PAUSE 10}$" 
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.2:
	.string "¡Pero no! Mi voluntad es otra: ser\n"
	.string "el mejor por mis propios medios y\l"
	.string "demostrarles lo mucho que me subestiman,\l"
	.string "¡no seré una marioneta más bajo\l"
	.string "las órdenes de la ÉLITE 4!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10:
.string "GIOVANNI: Solo un verdadero ROCKET\n"
	.string "hablaría así, AZUL.\l"
	.string "No dejaremos que te impongan su voluntad,\l"
	.string "créeme, aquí estás en tu casa.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11:
.string "AZUL: G{PAUSE 15}-{PAUSE 15}gracias señor{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12:
.string "GIOVANNI: Ahora, es momento de hablar\n"
	.string "del porqué os he reunido aquí a los 3.\l"
	.string "Ya tenéis nivel para abordar una misión,\l"
	.string "tres más bien, de crucial importancia.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12.1:
	.string "Pero antes, {PLAYER}, debo darte tu\n"
	.string "recompensa por tan valiosa información.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13:
	.string "¡Te has embolsado 175.000¥!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14:
.string "GIOVANNI: Además, ten esto, AZUL y ANDRA\n"
	.string "ya cuentan con uno, es un insulto que a\l"
	.string "uno de mis mejores hombres le falte un\l"
	.string "recurso como este.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15:
.string "Un MINERAL EVOLUTIVO, quedan\n"
	.string "muy pocos en esta región.\l"
	.string "Incrementará en un 50% ambas defensas,\l"
	.string "en POKÉMON que aún puedan evolucionar.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1:
	.string "Con ello, tu GOLBAT aguantará golpes\n"
	.string "de forma extraordinaria.\l"
	.string "No solo GOLBAT; MAGMAR, RHYDON, SCYTHER\l"
	.string "o ELECTABUZZ son algunos de los mejores\l"
	.string "usuarios de este objeto. Úsalo bien.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.2:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16:
.string "Debéis saber que a partir de ahora, las\n"
	.string "misiones asignadas desde BASE PROFUNDA\l"
	.string "serán totalmente confidenciales para\l"
	.string "todo ser ajeno a ella.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.1:
	.string "Esto incluye también a la mayoría\n"
	.string "de ROCKET.\l"
	.string "Es aquí donde se llevamos a cabo los\l"
	.string "proyectos de verdad, esos que marcarán\l"
	.string "una diferencia real, y gran parte de su\l"
	.string "valor diferencial radica en su secretismo.\l"
	.string "Por ello, estas misiones y estos planes\l"
	.string "no existen: solo nos dedicamos a robar y\l"
	.string "extorsionar, ¿entendido?$"


RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.2:
	.string "Una vez sabido esto, podemos\n"
	.string "comenzar{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17:
.string "¿Recuerdas, ANDRA, esa CENTRAL ENERGÍA\n"
	.string "que tanto interés causaba en ti?\l"
	.string "¿Todo lo que me contaste sobre tus\l"
	.string "sospechas acerca de un POKÉMON de\l"
	.string "gran poder que allí habitaba?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18:
.string "ANDRA: ¡Claro, señor, no lo olvido!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19:
.string "GIOVANNI: En ese momento no quise\n"
	.string "decírtelo, pero hace ya tiempo que\l"
	.string "llevamos investigando el paradero de las\l"
	.string "AVES LEGENDARIAS de KANTO.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.1:
	.string "3 de los POKÉMON más antiguos, poderosos\n"
	.string "y sagrados que esta región conoce.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.2:
	.string "Uno de ello es ZAPDOS, quizás el más\n"
	.string "peligroso e incontrolable de los tres;\l"
	.string "del tipo dual ELÉCTRICO-VOLADOR, a día\l"
	.string "de hoy, sabemos que hay uno dentro de\l"
	.string "esa CENTRAL ENERGÍA.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.3:
	.string "Así es, ANDRA.\n"
	.string "No me extraña que notaras su presencia,\l"
	.string "las descargas eléctricas que emite no\l"
	.string "se parecen en nada a lo que hayas visto.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20:
.string "Después tenemos a ARTICUNO, del TIPO\n"
	.string "HIELO-VOLADOR, tal vez el más manejable\l"
	.string "de los 3, pero también el más resistente.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20.1:
	.string "Hemos localizado a un ejemplar en las\n"
	.string "profundidades de ISLAS ESPUMA, al oeste\l"
	.string "de CIUDAD FUCSIA.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21:
.string "BLUE: A specimen?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22:
.string "GIOVANNI: Así es, no creemos que\n"
	.string "sean especies únicas, sino que\l"
	.string "pueda haber más de un ZAPDOS, o\l"
	.string "más de un ARTICUNO.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.1:
	.string "Esto no quita que sean POKÉMON\n"
	.string "excepcionalmente raros, poderosos\l"
	.string "y escurridizos.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.2:
	.string "El último de ellos, MOLTRES, ha sido\n"
	.string "localizado en la cima del MT.ASCUAS,\l"
	.string "un volcán muy emblemático de ISLA PRIMA.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.3:
	.string "No es tan rápido como ZAPDOS, ni tan\n"
	.string "resistente como ARTICUNO, pero sus\l"
	.string "ataques ígneos son los más devastadores.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23:
.string "Vuestra misión será la siguiente.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.1:
	.string "ANDRA se reunirá con un comité de\n"
	.string "expertos, para estudiar la mejor forma\l"
	.string "de entrar a la CENTRAL ENERGÍA sin ser\l"
	.string "ser vistos por las autoridades.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.2:
	.string "Por otro lado, AZUL irá directo a\n"
	.string "ISLA PRIMA; he dispuesto un transbordo\l"
	.string "en CIUDAD CARMÍN, que te llevará directo\l"
	.string "a ella; irás a por MOLTRES puesto que ya\l"
	.string "cuentas con un BLASTOISE en tu equipo,\l"
	.string "confío en que sea suficiente para\l"
	.string "apagar la salvaje llama del\l"
	.string "LEGENDARIO de fuego{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.3:
	.string "Dale esto, y el fuego de MOLTRES no\n"
	.string "podrá tocar a nuestro inicial insignia.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.4:
	.string "¡AZUL recibió un CHALECO ASALTO!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.5:
	.string "AZUL: ¡Gracias, señor! ¡Ahora sí que mi\n"
	.string "BLASTOISE será un auténtico tanque!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24:
.string "GIOVANNI: En cuanto a ti, {PLAYER}{PAUSE 15}…{PAUSE 15}\n"
	.string "Irás a por el ARTICUNO de ISLAS ESPUMA.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.1:
	.string "La seguridad allí no es tan estricta como\n"
	.string "en la CENTRAL ENERGÍA.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.2:
	.string "Para llegar, te aconsejo tomar la,\n"
	.string "RUTA 12 al sur de PUEBLO LAVANDA.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.3:
	.string "Será un largo camino hasta FUCSIA, y\n"
	.string "posteriormente el mar que lleva a ISLAS\l"
	.string "ESPUMA, pero te servirá como preparación\l"
	.string "para hacer frente a tal POKÉMON.\l"
	.string "Confío en que tu habilidad como\l"
	.string "ENTRENADOR para batir a ARTICUNO.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25:
	.string "No quiero que atrapéis a las aves, solo\n"
	.string "debéis derrotarlas, y obtener una pluma\l"
	.string "de ellas; más que suficiente para llevar\l"
	.string "a cabo las investigaciones que deseamos.\l"
	.string "Además, los de arriba no deben notar su\l"
	.string "ausencia, o se harán preguntas{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26:
.string "Vamos a expandir los estándares de poder\n"
	.string "y sobrepasar los supuestos límites.\l"
	.string "Eso afianzará aún más nuestra posición\l"
	.string "como principal resistencia ante las\l"
	.string "élites{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27:
	.string "Ahora, tenéis mi consentimiento para\n"
	.string "acceder a la sala contigua a mi despacho,\l"
	.string "la del -MÁXIMO POTENCIAL ALCANZABLE-.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.1:
	.string "Allí recopilamos información esencial\n"
	.string "acerca de las AVES LEGENDARIAS y\l"
	.string "cualquier POKÉMON LEGENDARIO conocido\l"
	.string "en general.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.2:
	.string "Eso es todo, y recordad: la historia\n"
	.string "de KANTO se escribe ahora,\l"
	.string "con cada paso que déis.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28:
.string "ANDRA: ¡Aún no me lo creo, {PLAYER}!\n"
	.string "¡Vamos a ir tras la pista de un\l"
	.string "POKÉMON LEGENDARIO!\l"
	.string "Esto ya es nivel, ¿eh?\l"
	.string "¡Te mantendré informado de cómo va\l"
	.string "mi misión con ZAPDOS, espero que\l"
	.string "hagas tú lo mismo!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_2:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_3:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_5:
walk_in_place_down
walk_slow_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_6:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_7:
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_8:
walk_slow_left
walk_in_place_left
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_9:
face_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_10:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_13:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_14:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.1:
face_up
step_end

RocketHideout_8F_Mision_Silph_move4.1:
walk_down
walk_left
walk_left
walk_left
walk_down
step_end


RocketHideout_8F_Mision_Silph_move4.2:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move5.2:
walk_left
walk_down
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.3:
face_right
step_end

RocketHideout_8F_Mision_Silph_No::
fadescreen 1
delay 20
changeavatar 2
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addmoney 500000 0
givemon SPECIES_AERODACTYL, 35, ITEM_SHARP_BEAK
giveitem ITEM_ULTRA_BALL, 50
removeobject 9
fadescreen 0
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
setvar VAR_UNUSED_0x40DC, 13
setvar VAR_UNUSED_0x40F7, 72
setvar VAR_UNUSED_0x40FD, 1
msgbox RocketHideout_8F_Mision_Silph_No_Texto_1, MSGBOX_AUTOCLOSE
release
end

RocketHideout_8F_Mision_Silph_No_Texto_1:
	.string "-You have been promoted to EXECUTIVE,\n"
	.string "received 50 ULTRA BALL, an AERODACTYL\l"
	.string "and 500.000¥.\p"
	.string "Next mission is at SAFFRON CITY -SILPH-.\p"
	.string "To see the skin change, you have to\n"
	.string "leave this room.$"

RocketHideout_8F_Mision_Silph::
lock
msgbox RocketHideout_8F_Mision_Silph_Yes, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_8F_Mision_Silph_No
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
setflag FLAG_NUEVA_839
addobject 3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move2
waitmovement 0x0
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_2 MSGBOX_DEFAULT
waitse
msgbox RocketHideout_8F_Mision_Silph_text_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move5
applymovement 3, RocketHideout_8F_Mision_Silph_move5
waitmovement 0x0
applymovement 3, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.1
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 3, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 3, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 9
playse SE_M_STAT_INCREASE
applymovement 9, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 9, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_7 MSGBOX_AUTOCLOSE
playse SE_SHOP
waitse
delay 10
applymovement 9, RocketHideout_8F_Mision_Silph_move5.3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
applymovement 1, RocketHideout_8F_Mision_Silph_move5.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout8F_Mision_Johto_move_12.6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
changeavatar 2
setvar VAR_UNUSED_0x40F7, 802
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7
end

RocketHideout8F_Mision_Johto_move_12.6:
walk_in_place_right
step_end



RocketHideout_8F_Disguise_Player::
delay 10
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_8F_Mision_Silph_text_6 MSGBOX_DEFAULT
waitfanfare
showmoneybox 0, 0
msgbox RocketHideout_8F_Mision_Silph_text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_9 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_10 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
msgbox RocketHideout_8F_Mision_Silph_text_11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_ULTRA_BALL, 50
waitfanfare
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_12 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Silph_text_13 MSGBOX_DEFAULT
givemon SPECIES_AERODACTYL, 35, ITEM_SHARP_BEAK
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_9.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_13.2 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_13.3 MSGBOX_AUTOCLOSE
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_13.4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_13.5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_14 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_12.7
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.75
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_15 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_790
clearflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
call Script_SetGrayscaleTint
warpsilent MAP_ROUTE27, 37, 12
delay 200
release
end

RocketHideout8F_Mision_Johto_move_12.75:
walk_in_place_up
step_end

RocketHideout8F_Mision_Johto_move_12.7:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_3
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_38 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_39 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_40 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_41 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_42 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_43 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_44 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_45 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_10
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_47 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_48 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_48.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_49 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_49.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_50 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_51 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_52 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_53 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_8F_Mision_Silph_move11
waitmovement 0x0
delay 10
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move12
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_54 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_15
applymovement 9, RocketHideout_8F_Mision_Silph_Despues_Move_13.1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_55 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 9
fadescreen 0
setvar VAR_UNUSED_0x40DC, 13
setvar VAR_UNUSED_0x40F7, 72
setvar VAR_UNUSED_0x40FD, 1
release
end

RocketHideout_8F_Mision_Silph_Despues_Move_9.1:
face_down
delay_16
delay_8
face_right
delay_8
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_15:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_14:
walk_slow_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_13:
walk_slow_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_13.1:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_12:
walk_slow_up
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_11:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_10:
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_9:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_8:
walk_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_7:
walk_in_place_slow_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_6:
walk_right
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_5:
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_4:
walk_in_place_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_3:
face_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

RocketHideout_8F_Mision_Silph_Yes:
	.string "Keep incoming scene?\n"
	.string "-If you press -YES- and a bug happens,\l"
	.string "you can press -NO- and skip the scene.-$"

RocketHideout_8F_Mision_Silph_text_1:
	.string "GIOVANNI: Ah, {PLAYER}!\p"
	.string "We were waiting for you, come in!$"

RocketHideout_8F_Mision_Silph_text_2:
	.string "-{PLAYER} handed over the\n"
	.string "ARTICUNO and ZAPDOS feathers!-$"

RocketHideout_8F_Mision_Silph_text_3:
	.string "GIOVANNI: What an extraordinary job\n"
	.string "you have done, {PLAYER}! Not only\l"
	.string "your mission with ARTICUNO, but you\l"
	.string "have also taken care of ZAPDOS! KOGA\l"
	.string "also reported to me of how you faced\l"
	.string "BRUNO from the ELITE 4 on CYCLING ROAD\l"
	.string "and defeated him.$"

RocketHideout_8F_Mision_Silph_text_4:
	.string "GIOVANNI: You two have shown\n"
	.string "a performance and valor towards\l"
	.string "TEAM ROCKET that is priceless. PETREL\l"
	.string "has already briefed me on how even 10\l"
	.string "policemen together were not enough to\l"
	.string "overcome you, ANDRA, and you held out\l"
	.string "long enough for us to save you.$"

RocketHideout_8F_Mision_Silph_text_5:
	.string "GIOVANNI: Because of all this, both\n"
	.string "ANDRA and {PLAYER}, you have earned\l"
	.string "my trust, and both of you are promoted\l"
	.string "to ROCKET EXECUTIVES.$"

RocketHideout_8F_Mision_Silph_text_6:
	.string "{PLAYER} has been promoted to ROCKET\n"
	.string "EXECUTIVE!!$"

RocketHideout_8F_Mision_Silph_text_7:
	.string "GIOVANNI: Here is your reward, ANDRA, I\n"
	.string "hope you invest it in your great team.$"

RocketHideout_8F_Mision_Silph_text_8:
	.string "GIOVANNI: About you, {PLAYER}, along\n"
	.string "with your results: two of the KANTO\l"
	.string "BIRDS, BRUNO…$"

RocketHideout_8F_Mision_Silph_text_9:
.string "GIOVANNI: This shall be your reward.$"

RocketHideout_8F_Mision_Silph_text_10:
	.string "-YOU'VE JUST EARNED 500,000¥!-$"

RocketHideout_8F_Mision_Silph_text_11:
	.string "Take this too, someone of your level\n"
	.string "should be able to catch any POKÉMON\l"
	.string "whenever you want: 50 ULTRA BALLS!$"

RocketHideout_8F_Mision_Silph_text_12:
	.string "Lastly, this POKÉMON, the rarest and\n"
	.string "most powerful of the KANTO fossils, I\l"
	.string "am sure that it will be a great addition\l"
	.string "to your team.$"

RocketHideout_8F_Mision_Silph_text_13:
.string "¡HAS RECIBIDO UN AERODACTYL AL NV.35!$"

RocketHideout_8F_Mision_Silph_text_13.1:
	.string "Ahora que ambos sois EJECUTIVOS,\n"
	.string "tenéis acceso automático a la zona sur\l"
	.string "de BASE PROFUNDA.$"

RocketHideout_8F_Mision_Silph_text_13.2:
	.string "Tomad, con esta llave podréis entrar.$"

RocketHideout_8F_Mision_Silph_text_13.3:
	.string "¡Obtuviste la LLAVE SALA VIP!$"

RocketHideout_8F_Mision_Silph_text_13.4:
	.string "Allí encontraréis recursos con los que\n"
	.string "mejorar aún más a vuestros POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_13.5:
	.string "También un lugar para descansar,\n"
	.string "junto a otros EJECUTIVOS.$"


RocketHideout_8F_Mision_Silph_text_14:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_15:
.string "Os dije que a su debido tiempo, os\n"
	.string "contaría los origenes del TEAM ROCKET, y\l"
	.string "por qué hoy es tal y como lo conocéis.\l"
	.string "Ahora que habéis acumulado cierta\l"
	.string "experiencia en esta región, y ante\l"
	.string "lo que está por venir, ese momento\l"
	.string "ha llegado. Escuchad atentamente.$"

RocketHideout_8F_Mision_Silph_text_16:
.string "Todo empezó hace 5 años, cuando JOHTO\n"
	.string "declaró la guerra a KANTO.\l"
	.string "A todos nos sorprendió: una región tan\l"
	.string "tradicional y pacífica, que además no\l"
	.string "contaba con nuestros recursos ni\l"
	.string "con gran capacidad armamentística.$"

RocketHideout_8F_Mision_Silph_text_17:
.string "El que provocó este conflicto no\n"
	.string "fue otro que LANCE, nieto del anciano\l"
	.string "maestro dragón de CIUDAD ENDRINO.\l"
	.string "Era un excepcional ENTRENADOR, y\l"
	.string "no podía ser menos, ya que como\l"
	.string "descendiente directo de la estirpe\l"
	.string "de domadragones más prestigiosa{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_17.1:
	.string "{PAUSE 15}…{PAUSE 15} se le educó desde pequeño en el\n"
	.string "arte de entrenar al para muchos TIPO más\l"
	.string "poderoso y sagrado; mostró un talento\l"
	.string "innato para domesticar el poder de\l"
	.string "DRAGONITE, considerado por muchos como\l"
	.string "el NO LEGENDARIO más poderoso.\l"
	.string "Uno bien entrenado, sobrepasa incluso\l"
	.string "el poder de las AVES LEGENDARIAS.$" 
	
RocketHideout_8F_Mision_Silph_text_17.2:
	.string "LANCE se convirtió en un ENTRENADOR de\n"
	.string "temer, al contanr con 3 de estos\l"
	.string "sagrados dragones; no tardó en hacerse\l"
	.string "con el poder en JOHTO.$"

RocketHideout_8F_Mision_Silph_text_18:
.string "Esto, sin embargo, no era suficiente\n"
	.string "para someter a KANTO como él quería.\l"
	.string "Nuestra región siempre ha contado\l"
	.string "con entrenadores de gran talento.$"

RocketHideout_8F_Mision_Silph_text_18.1:
	.string "Por ese entonces, tanto OAK como yo\n"
	.string "llevábamos años disputándonos el\l"
	.string "título de CAMPEÓN, que cambiaba\l"
	.string "constantemente de manos, debido a\l"
	.string "la gran paridad y competitividad que\l"
	.string "había entre nosotros.\l"
	.string "Cuando uno no era el CAMPEÓN, el\l"
	.string "otro pasaba a ocupar el actual\l"
	.string "puesto de BRUNO en la ÉLITE 4,\l"
	.string "especializándome yo en el TIPO\l"
	.string "TIERRA, y OAK en el NORMAL{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_19:
.string "LANCE sabía que con nosotros dos en\n"
	.string "KANTO, jamás podría imponer su fuerza,\l"
	.string "a pesar incluso de sus dragones.\l"
	.string "Fue en ese momento cuando empezó a\l"
	.string "buscar ese poder que no podía lograr\l"
	.string "en lo divino, en lo{PAUSE 25}…{PAUSE 25} LEGENDARIO.$"

RocketHideout_8F_Mision_Silph_text_20:
.string "Se informó acerca de LUGIA y HO-OH.\n"
	.string "Dos POKÉMON de un poder superior,\l"
	.string "aquí en KANTO inexistente.\l"
	.string "Nunca estuvo ni cerca de encontrarlos.$"

RocketHideout_8F_Mision_Silph_text_21:
.string "A pesar de ello, acabó enterándose de\n"
	.string "la leyenda de HO-OH, aquella que hablaba\l"
	.string "de 3 POKÉMON, condenados a morir pero\l"
	.string "salvados por el llamado MILAGRO de\l"
	.string "TORRE QUEMADA, hace 150 años.\l"
	.string "Según la leyenda, estos 3 POKÉMON se\l"
	.string "reencarnaron en las BESTIAS DE JOHTO, y\l"
	.string "pasaron a vagar sin rumbo por la región,\l"
	.string "incapaces de contener su poder.$"

RocketHideout_8F_Mision_Silph_text_22:
.string "LANCE puso toda la región patas arriba,\n"
	.string "dispuesto a agarrarse a esa leyenda{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15} y efectivamente, resultó ser\l"
	.string "cierta; valiéndose de sus dragones,\l"
	.string "logró acorralar y capturar, uno por uno,\l"
	.string "a estos POKÉMON en cuyo poder estaba\l"
	.string "impresa la esencia de HO-OH.$"

RocketHideout_8F_Mision_Silph_text_23:
.string "El resto es ya historia; con las\n"
	.string "BESTIAS DE JOHTO bajo su mando,\l"
	.string "se dispuso a invadir KANTO.$"

RocketHideout_8F_Mision_Silph_text_23.1:
	.string "Contrató también a un experto\n"
	.string "en técnicas bélicas: el LT.SURGE.\l"
	.string "Todo unido, desató en KANTO un caos\l"
	.string "jamás visto.\l"
	.string "Las bestias, bajo las órdenes de LANCE,\l"
	.string "se cobraron innumerables vidas.\l"
	.string "Imposibles de atrapar, además de\l"
	.string "batir en un combate para nadie que no\l"
	.string "fuera OAK o yo; LANCE logró que el\l"
	.string "caos y la muerte se apoderen de KANTO.$"

RocketHideout_8F_Mision_Silph_text_24:
.string "Fue en ese momento cuando OAK y yo\n"
	.string "decidimos tomar cartas en el asunto.\l"
	.string "Era imposible apaciguar la furia de\l"
	.string "esas criaturas con los medios de los\l"
	.string "que disponíamos{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_25:
.string "Yo era el hombre de negocios más\n"
	.string "importante de KANTO, y OAK el\l"
	.string "investigador más famoso: decidimos unir\l"
	.string "todos nuestros recursos, con el único\l"
	.string "afán de ir tras esa leyenda{PAUSE 25}…{PAUSE 25}ese mítico\l"
	.string "POKÉMON llamado MEW{PAUSE 5}…{PAUSE 5}$"
	
RocketHideout_8F_Mision_Silph_text_25.1:
.string "La iniciativa fue de FUJI, quien\n"
	.string "conocía más que nadie al POKÉMON.\l"
	.string "Gracias a él, pudimos llegar a ISLA\l"
	.string "SUPREMA, y capturar a MEW{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_25.2:
.string "Pero MEW por sí solo no iba a darnos la\n"
	.string "victoria. Su propia naturaleza le impedía\l"
	.string "ser partícipe de cualquier clase de\l"
	.string "conflicto, necesitábamos algo más.$"

RocketHideout_8F_Mision_Silph_text_25.3:
.string "Así nació el -PROYECTO MEWTWO-.\n"
	.string " Con la única finalidad de exprimir\l"
	.string "al máximo el poder de MEW{PAUSE 25}…{PAUSE 25} y poder\l"
	.string "usarlo en la guerra.$"

RocketHideout_8F_Mision_Silph_text_25.4:
.string "No fue nada fácil, los resultados\n"
	.string "dejaban anomalías y deformidades de\l"
	.string "lo que inicialmente era MEW.\l"
	.string "Conservando únicamente el 48% de su\l"
	.string "poder base global, solo heredaban la\l"
	.string "capacidad de transformación, algo\l"
	.string "insuficiente, y que nos llevó a\l"
	.string "deshechar a estos prototipos iniciales.$"

RocketHideout_8F_Mision_Silph_text_25.5:
.string "Es lo que comúnmente se conoce como\n"
	.string "DITTO; se han reportado varios\l"
	.string "ejemplares en la propia MANSION\l"
	.string "CANELA, y algunos escaparon hacia\l"
	.string "rutas como la del este de FUCSIA.$"


RocketHideout_8F_Mision_Silph_text_25.6:
	.string "All combinations led us to DITTO, time\n"
	.string "and funds were running out, if we didn't\l"
	.string "come up with something soon, KANTO had\l"
	.string "no other option than: to surrender to\l"
	.string "LANCE.$"

RocketHideout_8F_Mision_Silph_text_26:
	.string "It was at that moment{PAUSE 20}…{PAUSE 20} after many\n"
	.string "failures, when we finally could improve\l"
	.string "the legendary MEW, creating from its\l"
	.string "DNA a POKÉMON made only for battles{PAUSE 20}…{PAUSE 20}\l"
	.string "And for winning the war.$"

RocketHideout_8F_Mision_Silph_text_27:
	.string "Faster, stronger and more effective\n"
	.string "than the JOHTO beasts, we estimated\l"
	.string "its power to be on par with the\l"
	.string "legendary LUGIA and HO-OH that LANCE\l"
	.string "could never find. It had mental\l"
	.string "capabilities unlike anything we had\l"
	.string "ever seen…$"

RocketHideout_8F_Mision_Silph_text_28:
	.string "With MEWTWO, we could have ended all\n"
	.string "this and taught a lesson to LANCE, it\l"
	.string "was so powerful…{PAUSE 25} so powerful that went\l"
	.string "out of our control when we were doing\l"
	.string "the last testing.$"

RocketHideout_8F_Mision_Silph_text_29:
	.string "The CINNABAR ISLAND laboratory where\n"
	.string "we carried out this desperate plan in\l"
	.string "secret, was destroyed and MEWTWO\l"
	.string "escaped, disappearing forever…$"

RocketHideout_8F_Mision_Silph_text_30:
	.string "Shortly after, KANTO had no choice but\n"
	.string "to surrender to LANCE, who proclaimed\l"
	.string "himself the champion of both JOHTO and\l"
	.string "KANTO simultaneously. It was then time\l"
	.string "to get rid of all possible threats…$"

RocketHideout_8F_Mision_Silph_text_31:
	.string "However, to my surprise, OAK was the\n"
	.string "first to kneel once LANCE seized power,\l"
	.string "offering all his knowledge about\l"
	.string "POKÉMON and promising to assist the\l"
	.string "new government. The worst thing is…$"

RocketHideout_8F_Mision_Silph_text_32:
	.string "…he pointed to me as the main threat to\n"
	.string "his government, and spoke to him about\l"
	.string "our plans to overthrow him. Although he\l"
	.string "never mentioned MEWTWO, he did blame me\l"
	.string "for conspiring, even after the war.$"

RocketHideout_8F_Mision_Silph_text_33:
	.string "LANCE wasted no time launching a\n"
	.string "tremendous smear campaign against me.\l"
	.string "Despite I have given my all to keep\l"
	.string "KANTO in the hands of its habitants,\l"
	.string "LANCE managed to convince the public\l"
	.string "opinion that I was the villain, and he\l"
	.string "was the savior, according to the\l"
	.string "official version, LANCE only had to\l"
	.string "intervene after a blatant coup attempt\l"
	.string "on my part when I sought to revenew my\l"
	.string "CHAMPION title.$"

RocketHideout_8F_Mision_Silph_text_34:
	.string "This, for sure, is absolutely stupid\n"
	.string "and makes no sense to anyone who lived\l"
	.string "through the war. However, between\l"
	.string "people remaining silent out of fear of\l"
	.string "reprisals from LANCE's government and\l"
	.string "the constant bombardment of news and\l"
	.string "spreading of false information, they\l"
	.string "have managed to blur the truth over\l"
	.string "time, to the extent that even those who\l"
	.string "were actually present in the war now\l"
	.string "doubt what they truly experienced.$"

RocketHideout_8F_Mision_Silph_text_36:
	.string "GIOVANNI: Since then, everything\n"
	.string "associated with my name, once one of\l"
	.string "the most prestigious in the region,\l"
	.string "became the greatest dishonor and\l"
	.string "shame for KANTO.$"

RocketHideout_8F_Mision_Silph_text_37:
	.string "This way, and so it goes, when a power\n"
	.string "subdues you in this manner, making it\l"
	.string "impossible to challenge through\l"
	.string "justice, the only option left is to\l"
	.string "gather an even greater power than\l"
	.string "theirs to return the favor in kind.$"

RocketHideout_8F_Mision_Silph_text_37.1:
	.string "Under that premise, I kept TEAM ROCKET\n"
	.string "alive, and it continues to exist this\l"
	.string "day.$"

RocketHideout_8F_Mision_Silph_text_38:
	.string "Hence the reason for all these research\n"
	.string "areas, why I have sent you to where the\l"
	.string "LEGENDARY BIRDS dwell, and why we\l"
	.string "gather as much money as possible\l"
	.string "through illegitimate means, making the\l"
	.string "system itself impossible to assemble in\l"
	.string "a legitimate way. In such a case, taking\l"
	.string "justice into your own hands is almost a\l"
	.string "duty that aligns with anyone who has\l"
	.string "principles.$"

RocketHideout_8F_Mision_Silph_text_39:
	.string "All that TEAM ROCKET has sought during\n"
	.string "this time has been to try to gather\l"
	.string "enough power to overthrow LANCE and\l"
	.string "put an end to his masked tyranny, while\l"
	.string "appearing to be a weak and clumsy\l"
	.string "organization concerned with trivial\l"
	.string "matters such as money or POKÉMON\l"
	.string "theft. Nothing could be further from\l"
	.string "the truth, what we achieve with this is\l"
	.string "to prevent LANCE from focusing all his\l"
	.string "energies on crushing us, as he does not\l"
	.string "see us as a serious threat{PAUSE 20}…{PAUSE 20} yet.$"

RocketHideout_8F_Mision_Silph_text_40:
	.string "I couldn't tell you all this at a better\n"
	.string "time, as our next mission, the entire\l"
	.string "TEAM ROCKET's mission, is directly\l"
	.string "related to all of this.$"

RocketHideout_8F_Mision_Silph_text_41:
.string "SILPH S.A, la empresa más\n"
	.string "importante de toda la región, que\l"
	.string "extiende su poder hasta las ISLAS\l"
	.string "SETE, produce ella sola la inmensa\l"
	.string "mayoría de artículos para\l"
	.string "entrenadores en toda KANTO, acaba\l"
	.string "de soltar un bombazo, una revolución\l"
	.string "en la captura de POKÉMON.$"

RocketHideout_8F_Mision_Silph_text_42:
.string "Su MASTER BALL presumiblemente es capaz\n"
	.string "de atrapar cualquier POKÉMON, bajo\l"
	.string "cualquier condición: una BALL infalible.\p"
	.string "El sueño de cualquier ENTRENADOR, más\n"
	.string "aún de cualquier coleccionista.$"

RocketHideout_8F_Mision_Silph_text_43:
.string "Un objeto como ese sería crucial\n"
	.string "para recuperar a un POKÉMON como\l"
	.string "MEWTWO, más aun cuando LANCE no\l"
	.string "sabe de su existencia.\l"
	.string "Nosotros tenemos ciertas sospechas\l"
	.string "de dónde puede estar después de que\l"
	.string "escapara de ISLA CANELA{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_44:
.string "Pero ese no es el objetivo más\n"
	.string "importante de nuestro asalto a SILPH,\l"
	.string "quiero que todo salga perfecto, que\l"
	.string "a ojos de la población el TEAM ROCKET\l"
	.string "sea derrotado, y que nos pierdan de\l"
	.string "vista justo en el momento en el que\l"
	.string "más fuertes estamos{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_45:
.string "Para cuando eso ocurra, yo ya le habré\n"
	.string "puesto al PRESIDENTE de SILPH una oferta\l"
	.string "que no podrá rechazar.\l"
	.string "Estoy seguro de que él tampoco aprueba\l"
	.string "todas las nuevas restricciones y\l"
	.string "comisiones que el gobierno de LANCE\l"
	.string "se lleva de sus productos.$"


RocketHideout_8F_Mision_Silph_text_46:
.string "¡ANDRA!\n"
	.string "¡{PLAYER}!\l"
	.string "¡Vuestra misión en SILPH\l"
	.string "es la siguiente!$"

RocketHideout_8F_Mision_Silph_text_46.1:
	.string "Entraremos por la fuerza usando\n"
	.string "gran parte de nuestras unidades,\l"
	.string "vosotros dos seréis los encargados\l"
	.string "de deshaceros de la seguridad que\l"
	.string "protege al PRESIDENTE.\l"
	.string "Una vez logrado esto, tendré carta libre\l"
	.string "para hablar tranquilamente con él, y\l"
	.string "contarle la situación, vosotros me\l"
	.string "daréis el tiempo suficiente como para\l"
	.string "convencerle de cooperar.$"

RocketHideout_8F_Mision_Silph_text_46.2:
	.string "En ese lapso, deberéis de contener a\n"
	.string "la seguridad que quiera acceder al\l"
	.string "despacho del PRESIDENTE, y a cualquier\l"
	.string "ENTRENADOR que trate de pasar; nuestra\l"
	.string "conversación debe ser completamente\l"
	.string "confidencial, ¿ha quedado claro?$"

RocketHideout_8F_Mision_Silph_text_47:
.string "ANDRA: ¡No pasará ni LANCE si se\n"
	.string "llegara a presentar, señor!$"

RocketHideout_8F_Mision_Silph_text_48:
.string "GIOVANNI: Una vez haya convencido al\n"
	.string "PRESIDENTE, obtendremos la MASTER BALL,\l"
	.string "y más importante aún: el apoyo de SILPH.$"

RocketHideout_8F_Mision_Silph_text_48.1:
	.string "Para ese entonces, ya nada nos retendrá\n"
	.string "ahí: en cuanto os dé la señal, os\l"
	.string "retiraréis junto con los ALTO RANGO,\l"
	.string "y dejaréis el edificio solo con RECLUTAS\l"
	.string "comunes, sin apenas protección para\l"
	.string "llegar hasta mí{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_49:
.string "Si todo sigue lo planeado, ese\n"
	.string "entrometido de ROJO hará acto de\l"
	.string "presencia.$"

RocketHideout_8F_Mision_Silph_text_49.1:
	.string "Nada mejor que fingir una derrota ante\n"
	.string "ese ENTRENADOR sin personalidad, vacío\l"
	.string "de propósito: siendo ROJO el rival,\l"
	.string "podré perder y acto seguido irme de ahí\l"
	.string "y desaparecer antes de que se corra la\l"
	.string "voz y aparezca la policía{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_50:
.string "Una vez aquí, mataremos 3 pájaros\n"
	.string "de un tiro: tendremos la MASTER BALL,\l"
	.string "la lealtad de SILPH y la creencia\l"
	.string "popular de que estamos acabados.$"

RocketHideout_8F_Mision_Silph_text_51:
	.string "PROTON: A brilliant plan, sir.$"

RocketHideout_8F_Mision_Silph_text_52:
	.string "GIOVANNI: Which is already in motion. At\n"
	.string "this moment, the checkpoints with\l"
	.string "SAFFRON will have been taken, leaving\l"
	.string "our way to the city clear. You should\l"
	.string "get ready, PROTON; you will be part of\l"
	.string "the forces that clear the path.$"

RocketHideout_8F_Mision_Silph_text_53:
.string "PROTON: At your command, BOSS.$"

RocketHideout_8F_Mision_Silph_text_54:
	.string "GIOVANNI: ANDRA, {PLAYER}, I trust in\n"
	.string "your abilities as trainers. SAFFRON\l"
	.string "CITY and SILPH will suppose a new\l"
	.string "challenge to prove yourselves once\l"
	.string "again. Once inside the city, go straight\l"
	.string "to SILPH and take care of clearing the\l"
	.string "building of police.$"

RocketHideout_8F_Mision_Silph_text_55:
.string "ANDRA: We won't let you down, BOSS.$"

RocketHideout_8F_Mision_Silph_move1:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move2:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Silph_move3:
face_left
step_end

RocketHideout_8F_Mision_Silph_move4:
face_down
step_end

RocketHideout_8F_Mision_Silph_move5:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Silph_move6:
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move7:
walk_slow_left
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move8:
face_up
step_end

RocketHideout_8F_Mision_Silph_move9:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move10:
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move11:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Silph_move12:
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move13:
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios::
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 9
addobject 4
playse SE_EXIT
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_3
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_4
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_4 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
addobject 2
setobjectxy 2, 9, 15
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9.3
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.3 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
delay 5
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.6 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_7 MSGBOX_AUTOCLOSE
playse SE_EXIT
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.7
delay 5
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9.6
delay 5
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9.7
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9.7
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
addobject 5
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_9 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Gimnasios_texto_11 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_13 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_12
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 5
playse SE_EXIT
waitse
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_18 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_22 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23 MSGBOX_AUTOCLOSE
playse MUS_RG_OBTAIN_KEY_ITEM
addobject ITEM_TRI_PASS
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23.1 MSGBOX_DEFAULT
waitse
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_27 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_28 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_29 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
playse MUS_RG_VICTORY_GYM_LEADER
msgbox RocketHideout_8F_Mision_Gimnasios_texto_30 MSGBOX_DEFAULT
delay 110
playse 560
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_31 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_32 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_33 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_15
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_34 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_35 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_16
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_5.4
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_5.3
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 9
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_17
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37.1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 79
setvar VAR_ROUTE111_STATE, 1
setvar VAR_ROUTE107_STATE, 1
setvar VAR_ROUTE108_STATE, 1
setvar VAR_ROUTE109_STATE, 1
setvar VAR_ROUTE106_STATE, 1
setvar VAR_ROUTE105_STATE, 1
release
end

RocketHideout_8F_Mision_Gimnasios_move_5.3:
delay_8
walk_right
walk_right
walk_right
walk_up
walk_up
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.4:
walk_down
face_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.1:
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.2:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.6:
emote_exclamation_mark
delay_8
face_down
delay_16
delay_8
face_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.7:
emote_exclamation_mark
delay_8
face_down
delay_16
delay_8
face_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.3:
emote_exclamation_mark
face_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.2:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_texto_1:
	.string "BLUE: So you too, GIOVANNI has also\n"
	.string "called ANDRA and me to be here. I hope\l"
	.string "it's important because I only need one\l"
	.string "more GYM BADGE to have all of them.$"

RocketHideout_8F_Mision_Gimnasios_texto_2:
	.string "GIOVANNI: Alright, ANDRA, {PLAYER},\n"
	.string "As you know, we have the MASTER\l"
	.string "BALL in our possession. With it, we can\l"
	.string "capture any POKÉMON, including…{PAUSE 25} you\l"
	.string "know who…$"

RocketHideout_8F_Mision_Gimnasios_texto_3:
	.string "Furthermore, thanks to the samples of\n"
	.string "ARTICUNO, ZAPDOS, and MOLTRES\l"
	.string "collected by you, we have successfully\l"
	.string "cloned these legendary POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_4:
	.string "On the other hand, FUJI has spoken with\n"
	.string "BLAINE and has informed him. BLAINE was\l"
	.string "one of the scientists who worked on the\l"
	.string "MEW project, and we believe he has an\l"
	.string "idea of where MEWTWO might be…$"

RocketHideout_8F_Mision_Gimnasios_texto_5:
	.string "BLUE: Excuse me, GIOVANNI, MEWTWO? I\n"
	.string "had never heard of such a POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_6:
.string "GIOVANNI: Ya habrá tiempo de ponerte al\n"
	.string "día, AZUL. Cuanto debes saber ahora es\l"
	.string "que en el momento en que se confirme\l"
	.string "su ubicación y le demos captura,\l"
	.string "tendremos todo lo que necesitamos\l"
	.string "para invadir la LIGA POKÉMON y derrocar\l"
	.string "a LANCE de una vez por{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Gimnasios_texto_6.1:
	.string "????: Lo saben.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.2:
	.string "GIOVANNI: PROTÓN, ¿qué ocurre?$"

RocketHideout_8F_Mision_Gimnasios_texto_6.3:
	.string "Fui a seguir negociando con FUJI, tal y\n"
	.string "como me dijo.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.4:
	.string "Alguien ha dado el chivatazo, la\n"
	.string "POLICÍA se presentó en su casa.\l"
	.string "Él ha sido detenido, yo por suerte\l"
	.string "pude escapar.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.5:
	.string "GIOVANNI: No puede ser{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Gimnasios_texto_6.6:
	.string "Además, saben lo que nos traemos entre\n"
	.string "manos con las AVES.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.7:
	.string "Alguien les informó acerca de los\n"
	.string "últimos avances en ingeniería genética,\l"
	.string "y de cómo es posible clonarlas.$"

RocketHideout_8F_Mision_Gimnasios_texto_7:
.string "Ese BLAINE{PAUSE 25}…{PAUSE 25}\n"
	.string "Nos ha traicionado, no hay otra\l"
	.string "explicación, trabaja para LANCE,\l"
	.string "o peor aún, para OAK.$"

RocketHideout_8F_Mision_Gimnasios_texto_8:
.string "ALTO RANGO: Perdone la intromisión,\n"
	.string "señor, pero es urgente.\l"
	.string "El CG de la LIGA ha emitido un\l"
	.string "comunicado, con los nuevos requisitos\l"
	.string "para participar, cito textualmente.$"

RocketHideout_8F_Mision_Gimnasios_texto_9:
	.string "-Además de las 8 MEDALLAS DE GIMNASIO,\n"
	.string "dado que únicamente conocemos de la\l"
	.string "existencia de tres AVES LEGENDARIAS en\l"
	.string "en nuestra KANTO, las cuales están\l"
	.string "celosamente protegidas.\l"
	.string "Estará, por tanto, terminantemente\l"
	.string "prohibido participar con cualquiera de\l"
	.string "estos tres POKÉMON, no solo en muestra\l"
	.string "de respeto, sino por la imposibilidad\l"
	.string "de su obtención por medios legales,\l"
	.string "entendiendo que cualquier ENTRENADOR\l"
	.string "en posesión de estos LEGENDARIOS habrá\l"
	.string "incurrido en prácticas ilegales, que\l"
	.string "de ningún modo aprobamos-.$"

RocketHideout_8F_Mision_Gimnasios_texto_10:
	.string "GIOVANNI: Ya veo{PAUSE 15}…{PAUSE 15} aquellos que hacen\n"
	.string "la ley, pueden moldearla a su gusto.$"

RocketHideout_8F_Mision_Gimnasios_texto_11:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_12:
.string "GIOVANNI: -Prácticas ilegales que\n"
	.string "de ningún modo aprobamos-, tiene\l"
	.string "gracia, viniendo de ellos.$"

RocketHideout_8F_Mision_Gimnasios_texto_13:
.string "Thanks, HIGH RANK.\n"
	.string "It's enough.$"

RocketHideout_8F_Mision_Gimnasios_texto_14:
.string "HIGH RANK: Sir{PAUSE 15}…{PAUSE 15}\n"
	.string "EXECUTIVES{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_15:
	.string "ANDRA: Damn BLAINE! He has betrayed\n"
	.string "us! FUJI was wrong about his\l"
	.string "loyality. If LANCE would be able\l"
	.string "to find MEWTWO, what could\l"
	.string "happen?$"

RocketHideout_8F_Mision_Gimnasios_texto_16:
	.string "GIOVANNI: No, ANDRA, we must trust\n"
	.string "that, like OAK, he has kept the secret.\l"
	.string "LANCE with MEWTWO in his possession\l"
	.string "would be the greatest catastrophe in\l"
	.string "the history of this region.$"

RocketHideout_8F_Mision_Gimnasios_texto_17:
	.string "Having been pushed to this extreme, all\n"
	.string "that's left is to settle this by the\l"
	.string "old school way. So a LEAGUE without\l"
	.string "LEGENDARIES…$"

RocketHideout_8F_Mision_Gimnasios_texto_18:
	.string "ANDRA, {PLAYER}, both of you have\n"
	.string "proven to be extraordinary trainers.\l"
	.string "{PLAYER}'s ability to defeat BRUNO is\l"
	.string "evidence that they can compete\l"
	.string "against the best.$"

RocketHideout_8F_Mision_Gimnasios_texto_19:
	.string "Both of you, along with BLUE, will be\n"
	.string "candidates to claim the title of the\l"
	.string "POKÉMON LEAGUE.$"

RocketHideout_8F_Mision_Gimnasios_texto_20:
	.string "You will gather the 8 GYM BADGES and\n"
	.string "head to INDIGO PLATEAU, no cheats, no\l"
	.string "shortcuts with LEGENDARIES{PAUSE 20}…{PAUSE 20} You will\l"
	.string "use the POKÉMON that you have been\l"
	.string "training and raising since you joined\l"
	.string "TEAM ROCKET.$"

RocketHideout_8F_Mision_Gimnasios_texto_21:
	.string "ANDRA: But sir, I thought TEAM ROCKET\n"
	.string "couldn't challenge GYM LEADERS for the\l"
	.string "BADGES.$"

RocketHideout_8F_Mision_Gimnasios_texto_22:
	.string "GIOVANNI: And that's how it is, ANDRA.\n"
	.string "Your status as a ROCKET falls among the\l"
	.string "cases of trainers without a LICENSE,\l"
	.string "which is what is truly needed to\l"
	.string "compete for the BADGES. It is assumed\l"
	.string "that a ROCKET doesn't have a license,\l"
	.string "and that's why you are kicked out of\l"
	.string "the GYMS, not for being a ROCKET, but\l"
	.string "for not having a LICENSE.$"

RocketHideout_8F_Mision_Gimnasios_texto_23:
	.string "GIOVANNI: Here you go, completely\n"
	.string "legal. They won't be able to give you any\l"
	.string "trouble entering any GYM.$"

RocketHideout_8F_Mision_Gimnasios_texto_23.1:
	.string "You obtained a TRAINER LICENSE from\n"
	.string "GIOVANNI's hands!$"

RocketHideout_8F_Mision_Gimnasios_texto_24:
	.string "Still, of course, they can deny you\n"
	.string "entry for being a ROCKET. What you will\l"
	.string "do is wear our uniform - as a mockery -\l"
	.string "laughing at TEAM ROCKET and ridiculing\l"
	.string "it. Our supposed failure at SILPH will\l"
	.string "fit perfectly with that.$"

RocketHideout_8F_Mision_Gimnasios_texto_25:
	.string "ANDRA: They will smell something fishy,\n"
	.string "and LT. SURGE has already seen us\l"
	.string "several times.$"

RocketHideout_8F_Mision_Gimnasios_texto_26:
	.string "GIOVANNI: LT. SURGE believes that no\n"
	.string "one has a chance against LANCE, and\l"
	.string "moreover, his military code will prevent\l"
	.string "him from denying {PLAYER} a battle\l"
	.string "once he is in front of him.$"

RocketHideout_8F_Mision_Gimnasios_texto_27:
	.string "BLUE, do you know how many BADGES RED\n"
	.string "has right now?$"

RocketHideout_8F_Mision_Gimnasios_texto_28:
	.string "BLUE: I think 6, after SILPH, he went\n"
	.string "straight to the SAFFRON GYM. Right now,\l"
	.string "he must be close to CINNABAR GYM.$"

RocketHideout_8F_Mision_Gimnasios_texto_29:
	.string "GIOVANNI: Mmm{PAUSE 20}…{PAUSE 20} There's no time to\n"
	.string "waste. Your top priority should be\l"
	.string "winning those 7 GYM BADGES as soon as\l"
	.string "possible. As for you, BLUE, since you're\l"
	.string "missing one, I think there's a solution\l"
	.string "for that…$"

RocketHideout_8F_Mision_Gimnasios_texto_30:
	.string "-GIOVANNI GAVE BLUE THE EARTH BADGE!-$"

RocketHideout_8F_Mision_Gimnasios_texto_31:
	.string "BLUE: Are you the last GYM LEADER?!$"

RocketHideout_8F_Mision_Gimnasios_texto_32:
	.string "GIOVANNI: Sometimes yes, sometimes no,\n"
	.string "it depends on when it's convenient, and\l"
	.string "now it is.$"

RocketHideout_8F_Mision_Gimnasios_texto_33:
	.string "BLUE: Excuse me, but I need to prepare\n"
	.string "thoroughly for the POKÉMON LEAGUE. I\l"
	.string "won't disappoint you, GIOVANNI.$"

RocketHideout_8F_Mision_Gimnasios_texto_34:
	.string "ANDRA, {PLAYER}, show how far a\n"
	.string "dedicated, disciplined, and committed\l"
	.string "ROCKET can go with their POKÉMON.\l"
	.string "Defeat all the KANTO GYM LEADERS, and I\l"
	.string "will give you the last BADGE just like I\l"
	.string "did with BLUE.$"

RocketHideout_8F_Mision_Gimnasios_texto_35:
	.string "ANDRA: I can't wait any longer! Those\n"
	.string "GYM LEADERS are going to fall like flies!\l"
	.string "Finally, I'll be able to face the\l"
	.string "supposed ELITE of the region!$"

RocketHideout_8F_Mision_Gimnasios_texto_36:
.string "GIOVANNI: Solo una entrenadora de verdad\n"
	.string "reaccionaría así: no ve la restricción\l"
	.string "de la LIGA como un problema, sino como\l"
	.string "una gran oportunidad que le obligará a\l"
	.string "mejorar mucho más.$"

RocketHideout_8F_Mision_Gimnasios_texto_36.1:
	.string "Espero que tú también afrontes este\n"
	.string "reto con el mismo entusiasmo, {PLAYER}.\l"
	.string "Ándate con cuidado, los LÍDERES ajustan\l"
	.string "su poder según quien tengan enfrente,\l"
	.string "AZUL y ROJO son protegidos de OAK, y\l"
	.string "como tales tienen ciertos privilegios.$"

RocketHideout_8F_Mision_Gimnasios_texto_36.2:
	.string "Entre ellos, poder participar en la\n"
	.string "LIGA POKÉMON sin LICENCIA, y enfrentar\l"
	.string "a unos LÍDERES algo disminuidos, pero\l"
	.string "yo no quiero eso para vosotros.$"

RocketHideout_8F_Mision_Gimnasios_texto_37:
.string "Desde la misma entrega de vuestro\n"
	.string "inicial, habéis pasado por todo\l"
	.string "tipo de dificultades, todo lo que\l"
	.string "tenéis lo habéis obtenido por méritos\l"
	.string "propios, sabéis cuál es la verdadera\l"
	.string "cara de esta región porque os habéis\l"
	.string "visto obligados a adaptaros a ella.$"

RocketHideout_8F_Mision_Gimnasios_texto_37.1:
	.string "Eso{PAUSE 15}…{PAUSE 15} en conjunto{PAUSE 15}…{PAUSE 15} os da\n"
	.string "ventaja y una fortaleza que no puede\l"
	.string "comprarse, ¡ve y muéstraselo a todos!$"

RocketHideout_8F_Mision_Gimnasios_move_1:
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_2:
emote_exclamation_mark
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_5:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_6:
face_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_7:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_8:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Gimnasios_move_10:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_11:
walk_right
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_13:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_14:
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_15:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_16:
walk_down
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_17:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_1.4:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Subterraneo_Silph::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1.4
waitmovement 0x0
waitse
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_6 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_17 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_85
delay 15
setvar VAR_UNUSED_0x40F7, 102
release
end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4.1:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Text_1:
.string "GIOVANNI: ¡Oh, {PLAYER}!\n"
.string "¡Te veo algo cambiado!\p"
	.string "No diría que has estado precisamente\n"
	.string "tomando con calma tus vacaciones.\l"
	.string "¿Me equivoco?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2:
.string "Antes de nada, debo darte una mala\n"
	.string "noticia, y es que OAK ha desaparecido.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2.1:
	.string "Después de lo ocurrido en la LIGA,\n"
	.string "quedamos en recluirlo en su laboratorio\l"
	.string "de PUEBLO PALETA, pero ha encontrado la\l"
	.string "la forma de desaparecer.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2.2:
	.string "Creemos que puede estar tramando algo,\n"
	.string "junto con BLAINE; el otro traidor que\l"
	.string "también ha desaparecido.\p"
	.string "Y mientras…{PAUSE 25} FUJI aún entre rejas,\n"
	.string "por fortuna, queda poco para su vuelta{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_3:
.string "Pero no te hecho regresar para\n"
	.string "hablar de OAK.\l"
	.string "El encargo que estoy a punto de darte\l"
	.string "es mucho más trascendental para la\l"
	.string "historia de nuestra región, escucha{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4:
.string "Desde siempre, aquellos ciudadanos de\n"
	.string "KANTO con la mente lo suficientemente\l"
	.string "abierta como para ver más allá de los\l"
	.string "150 originales; los que conocían otras\l"
	.string "regiones, habían viajado hasta la vecina\l"
	.string "JOHTO, o la lejana HOENN, se hacían una\l"
	.string "pregunta{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4.1:
	.string "¿Por qué no existe en KANTO un\n"
	.string "POKÉMON de las dimensiones de\l"
	.string "HO-OH, GROUDON o RAYQUAZA?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4.2:
	.string "El patrón de los -LEGENDARIOS MAYORES-\n"
	.string "se repite en todas las regiones\l"
	.string "conocidas, sin excepción.\l"
	.string "Todas{PAUSE 15}…{PAUSE 15} excepto nuestra KANTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5:
.string "Surgieron muchas teorías que trataban\n"
	.string "de responder a esta pregunta; algunos\l"
	.string "científicos e investigadores señalaron\l"
	.string "que era MEW dicho POKÉMON.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5.1:
	.string "Pero no podemos meterlo en el mismo\n"
	.string "saco que RAYQUAZA, o LUGIA{PAUSE 5}…{PAUSE 5}\l"
	.string "Entraría más en el perfil de JIRACHI\l"
	.string "en HOENN o{PAUSE 5}…{PAUSE 5}$"


RocketHideout8F_Mision_Subterraneo_Silph_Text_6:
.string "PROTÓN: {PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_7:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}CELEBI en JOHTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8:
.string "Otros apuntaban a que KANTO era una\n"
	.string "región desprovista de un POKÉMON así.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.1:
	.string "Sus POKÉMON de mayor jerarquía serían,\n"
	.string "en ese caso, DRAGONITE y MEW.\l"
	.string "Estableciendo el límite de poder de\l"
	.string "la región en 600 STATS BASE.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.2:
	.string "Después de todo, la historia de KANTO\n"
	.string "pudo propiciar que no se diesen los\l"
	.string "ingredientes necesarios para que surja\l"
	.string "un LUGIA o un HO-OH; mero azar.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.3:
	.string "De ser el caso, ello quedaría en una\n"
	.string "curiosa coincidencia, sin embargo{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_9:
.string "Un último grupo de investigadores\n"
	.string "apunta a que, efectivamente, dicho\l"
	.string "POKÉMON existiría; el único motivo\l"
	.string "por el que no lo conocemos sería\l"
	.string "ese: aún no ha sido encontrado.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10:
.string "Esta última teoría se subdivide en\n"
	.string "otras dos teorías.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10.1:
	.string "Una afirma que ese POKÉMON nos es\n"
	.string "ignoto por su escurridiza naturaleza.$"
	
RocketHideout8F_Mision_Subterraneo_Silph_Text_10.2:
	.string "La otra{PAUSE 15}…{PAUSE 15} afirma que es debido\n"
	.string "a su vasto poder, de tal magnitud que\l"
	.string "sobrepasaría el de un -LEGENDARIO MAYOR-.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_11:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12:
.string "Este tema siempre me ha fascinado.\n"
	.string "La posibilidad de que tal POKÉMON\l"
	.string "exista cambiaría la forma en que\l"
	.string "vemos KANTO para siempre.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12.1:
	.string "Entre nuestra cruzada para liberar\n"
	.string "la región de las garras de LANCE, y\l"
	.string "la poca información sobre dicho tema,\l"
	.string "el TEAM ROCKET dejó este asunto en\l"
	.string "pausa.\p"
	.string "Ahora, con KANTO recuperándose, y\n"
	.string "nuestra situación actual, es el momento\l"
	.string "de reiniciar esta investigación.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_13:
.string "Desde que SILPH es aliada nuestra, he\n"
	.string "tenido ocasión de reunirme varias\l"
	.string "veces con su PRESIDENTE.\p"
	.string "El caso es que en nuestra última\n"
	.string "reunión, salió este tema y{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_14:
.string "Resulta que SILPH cuenta con una gran\n"
	.string "biblioteca privada en sus pisos\l"
	.string "inferiores.\p"
	.string "No solo es la empresa más exitosa\n"
	.string "de KANTO, también es una de las más\l"
	.string "antiguas; dentro de esa biblioteca\l"
	.string "hay algunos documentos que hablan de\l"
	.string "un POKÉMON que podría encajar con lo\l"
	.string "que buscamos.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_15:
.string "Tu misión es muy simple, {PLAYER}.\n"
	.string "Solo tendrás que volver a SILPH y\l"
	.string "hablar con la recepcionista, ella\l"
	.string "te indicará cómo entrar a los pisos\l"
	.string "inferiores.\l"
	.string "Una vez allí, irás en busca de tan\l"
	.string "reveladores archivos.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_16:
.string "No solo yo, el PRESIDENTE de SILPH\n"
	.string "se mostró encantado de que fueras\l"
	.string "tú quien volviera a SILPH.\p"
	.string "En ese sentido, no encontrarás\n"
	.string "oposición alguna.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_17:
.string "Eso es todo, y recuerda: la\n"
	.string "recepcionista de SILPH te dará\l"
	.string "acceso a los pisos inferiores.\l"
	.string "Saluda al PRESIDENTE de mi parte,\l"
	.string "si es que llegas a verlo.$"

RocketHideout8F_Mision_Subterraneo_Silph_Move_1:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_3:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4:
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_5:
walk_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 50
fadescreen 0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5
waitmovement 0x0
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_676
setflag FLAG_HOENN_675
clearflag FLAG_HOENN_70
clearflag FLAG_HOENN_71
setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
clearflag FLAG_HOENN_81
clearflag FLAG_HOENN_82
setvar VAR_UNUSED_0x40F8, 11
setvar VAR_UNUSED_0x40F7, 107
release
end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3.1:
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1:
.string "GIOVANNI: ¿Y bien?\n"
	.string "¿Qué has averiguado, {PLAYER}?$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2:
.string "GIOVANNI: Mmm{PAUSE 25}…{PAUSE 25}\n"
	.string "Por lo que me dices, el texto que\l"
	.string "leíste ni siquiera cuestiona la\l"
	.string "existencia de ese POKÉMON.\p"
	.string "La da por hecho, y parece que se\n"
	.string "encuentra más cerca de lo que\l"
	.string "pensamos, en PUEBLO LAVANDA.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3:
.string "Pero{PAUSE 25}…{PAUSE 25}\n"
	.string "¿Donde?\l"
	.string "La TORRE POKÉMON sería el único\l"
	.string "lugar destacable, pero conocemos\l"
	.string "de ella todos sus rincones.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4:
.string "Tal vez{PAUSE 15}…{PAUSE 15}\n"
	.string "Sea de esos lugares imposibles de\l"
	.string "acceder, excepto para aquellos que\l"
	.string "ya saben donde está; si fuera el\l"
	.string "caso, nos quedaríamos sin saber la\l"
	.string "verdad{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5:
.string "GIOVANNI: ¡{PLAYER}!\n"
	.string "¡Tenemos que agotar todas\l"
	.string "las posibilidades!\p"
	.string "No puedo enviar a decenas de\n"
	.string "soldados a que se pongan a limpiar\l"
	.string "cada centímetro de PUEBLO LAVANDA,\l"
	.string "levantaría muchas sospechas.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6:
.string "Pero, sabiendo de esto solo los\n"
	.string "aquí presentes, puedes ser tú quien,\l"
	.string "de forma discreta, investigue cada\l"
	.string "rincón de PUEBLO LAVANDA.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6.1:
	.string "Irás tras algo que ha pasado inadvertido\n"
	.string "por incontables generaciones, tras un\l"
	.string "espejismo, {PLAYER}.$"


RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8:
.string "Eso es todo.\n"
	.string "Y recuerda, cada paso que des podrían\l"
	.string "ser nuevas páginas escritas en la\l"
	.string "historia reciente de KANTO.\l"
	.string "Quizá{PAUSE 15}…{PAUSE 15} destapemos algo que hace\l"
	.string "mucho debió de saberse{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3:
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4:
walk_slow_right
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5:
face_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.1
waitmovement 0x0
waitse
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 109
release
end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1:
.string "GIOVANNI: ¿Encontraste algo,\n"
	.string "{PLAYER}?$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2:
.string "Una historia increíble, increíble{PAUSE 25}…{PAUSE 25}\p"
	.string "¿Quién diría que semejante lugar se\n"
	.string "encuentra bajo PUEBLO LAVANDA?\l"
	.string "Era real después de todo, si ese\l"
	.string "lugar es real, el POKÉMON ESENCIA\l"
	.string "debe también serlo.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3:
.string "Y el LÍDER del culto te pidió\n"
	.string "expresamente guardar en secreto la\l"
	.string "forma de convocar a tal POKÉMON.\l"
	.string "Salvo por 2 o 3 ENTRENADORES en\l"
	.string "toda KANTO{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5:
.string "Supongo que se referiría a OAK y a\n"
	.string "mí también; no cabe duda de que hay\l"
	.string "cosas que aún se nos escapan.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.1:
	.string "Que tuviera también a MEW,\n"
	.string "desaparecido desde que creamos\l"
	.string "a MEWTWO{PAUSE 15} …{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.2:
	.string "Para esto se fundó el TEAM ROCKET, para\n"
	.string "descubrir los límites últimos del mundo.\l"
	.string "Y por eso, iremos ahora a ROCA OMBLIGO.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6:
.string "Uno de los trabajos que ATLAS ha\n"
	.string "estado haciendo en las ISLAS SETE,\l"
	.string "es encontrar y dejar registradas\l"
	.string "todas las rutas alternativas que\l"
	.string "hay de conexión entre las islas.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7:
.string "En teoría existen 7 islas, de ahí\n"
	.string "el nombre de ISLAS SETE, pero en\l"
	.string "la práctica se podrían considerar\l"
	.string "10 porciones de tierra de tamaño\l"
	.string "considerable.$" 

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.1:
	.string "Así, habría una octava isla justo al\n"
	.string "sur de ISLA SECUNDA, una novena al\l"
	.string "este de las ruinas de ISLA SÉTIMA, y\l"
	.string "una décima, que se encuentra algunos\l"
	.string "grados al noroeste de ISLA INTA.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.2:
	.string "Esta última es ROCA OMBLIGO.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8:
.string "LUGIA y HO-OH cuentan con un poder\n"
	.string "similar al de MEWTWO; nuestro plan\l"
	.string "de emergencia para salvar KANTO, tras\l"
	.string "el fracaso de MEWTWO, era precisamente\l"
	.string "el encontrar estos dos POKÉMON.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.1:
	.string "Al igual que LANCE, jamás pudimos\n"
	.string "hacerlo.\p"
	.string "Pero después de lo ocurrido en la LIGA\n"
	.string "POKÉMON, ATLAS me envió un informe con\l"
	.string "el reciente descubrimiento.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.2:
	.string "Esa décima isla esta el centro de\n"
	.string "las 7, cubierta de fuertes mareas,\l"
	.string "y con una gran cueva en su interior,\l"
	.string "aún por explorar.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9:
.string "No se me ocurre otro lugar donde\n"
	.string "puedan estar estas dos bestias,\l"
	.string "vistas por última vez hace décadas.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10:
.string "¡{PLAYER}!\n"
	.string "ROCA OMBLIGO está relativamente\l"
	.string "cerca de ISLA INTA, sin embargo,\l"
	.string "las corrientes entre ellas son las\l"
	.string "más fuertes de todo el ARCHI7.\p"
	.string "Sería correr demasiados riesgos,\n"
	.string "sin embargo{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11:
.string "ATLAS descubrió una ruta alternativa,\n"
	.string "partiendo del puerto de ISLA SECUNDA.\p"
	.string "Es más larga, pero las corrientes\n"
	.string "son menos traicioneras.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11.1:
	.string "Cruzaremos por ahí, ignora el cartel de\n"
	.string "precaución, lo han colocado más para\l"
	.string "ahorrarse problemas y lavarse las manos\l"
	.string "ante cualquier accidente, que por la\l"
	.string "verdadera peligrosidad de sus aguas.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12:
.string "Te espero en ROCA OMBLIGO, {PLAYER}.\n"
	.string "Esta vez seré yo en persona quien\l"
	.string "te haga compañía en esta misión.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3:
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4:
walk_slow_right
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 2
addobject 10
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_4 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_6.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_7
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_1, RocketHideout8F_Mision_Mansion_Oak_Text_14
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_16 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
delay 20
addobject 2
addobject 10
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_17 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout8F_Mision_Mansion_Oak_Move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_18 MSGBOX_AUTOCLOSE
delay 15
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_19 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F8, 27
setvar VAR_UNUSED_0x40F7, 113
release
end

RocketHideout8F_Mision_Mansion_Oak_Move_6.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Mansion_Oak_Text_1:
.string "ANDRA: Sir, that's the whole story.$"

RocketHideout8F_Mision_Mansion_Oak_Text_2:
.string "GIOVANNI: Excelente, ANDRA.\n"
	.string "{PLAYER} y tú habéis hecho un gran\l"
	.string "trabajo, ahora sabemos que esa reliquia\l"
	.string "formaba parte de DEOXYS, y que tanto\l"
	.string "OAK como BLAINE se esconden en una\l"
	.string "parte oculta de la MANSIÓN POKÉMON.$"
	
RocketHideout8F_Mision_Mansion_Oak_Text_2.1:
	.string "Cuando ambos estén bajo control, KANTO\n"
	.string "al fin podrá tener plena tranquilidad.\p"
	.string "Mientras, no sabemos lo que esos dos\n"
	.string "maníacos se traen entre manos.$"

RocketHideout8F_Mision_Mansion_Oak_Text_3:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout8F_Mision_Mansion_Oak_Text_4:
.string "ADMINISTRADORA ANDRA, EJECUTIVO\n"
	.string "PROTÓN{PAUSE 15}…{PAUSE 15} necesito hablar en privado con\l"
	.string "{PLAYER}. Salid un momento, por favor.$"

RocketHideout8F_Mision_Mansion_Oak_Text_5:
.string "Así que OAK te ha retado a acudir\n"
	.string "solo a la MANSIÓN POKÉMON{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Mansion_Oak_Text_6:
.string "La lógica dice que, sabiendo esto,\n"
	.string "debemos entrar con toda la fuerza\l"
	.string "de nuestra organización.\p"
	.string "Asegurarnos de destruir por completo\n"
	.string "lo que sea que estén haciendo allí.$"

RocketHideout8F_Mision_Mansion_Oak_Text_7:
.string "OAK es un hombre precavido, frío y\n"
	.string "calculador; si te ha lanzado ese\l"
	.string "reto a ti, viendo de primera mano\l"
	.string "cómo derrotaste a ROJO y LANCE, es\l"
	.string "porque de verdad cuenta con algo\l"
	.string "extraordinario en su poder.$"

RocketHideout8F_Mision_Mansion_Oak_Text_8:
.string "Sospecho que, de alguna forma, han\n"
	.string "recuperado a MEWTWO.$"

RocketHideout8F_Mision_Mansion_Oak_Text_8.1:
	.string "Si de verdad es así, y deciden usarlo a\n"
	.string "su antojo, toda la región corre peligro.$"

RocketHideout8F_Mision_Mansion_Oak_Text_9:
.string "Sin embargo, en el TEAM ROCKET nos\n"
	.string "tomamos muy en serio tanto el\l"
	.string "honor como la lealtad.{PAUSE 25}\p"
	.string "Si OAK te ha retado personalmente,\n"
	.string "y consideras que debes ir por tu\l"
	.string "cuenta, deberías hacerlo{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Mansion_Oak_Text_10:
.string "Pero{PAUSE 25}…{PAUSE 25}dada la importancia\n"
	.string "para toda la región que tiene este asunto,\l"
	.string "tanto yo como ATLAS, PETREL, ANDRA y el\l"
	.string "resto de miembros más destacados de la\l"
	.string "organización, nos mantendremos en la\l"
	.string "retaguardia, por si algo saliera mal.$"

RocketHideout8F_Mision_Mansion_Oak_Text_11:
.string "Tengo que asegurarme, {PLAYER}{PAUSE 15}…{PAUSE 15}\p"
	.string "Asegurarme de que estás preparado para\n"
	.string "todo, incluso para MEWTWO.$"

RocketHideout8F_Mision_Mansion_Oak_Text_12:
.string "Del mismo modo que ATLAS se aseguró\n"
	.string "de que tanto ANDRA como tú contábais\l"
	.string "con el mínimo de nivel para abordar\l"
	.string "la LIGA POKÉMON, esta situación\l"
	.string "requiere de la prueba máxima{PAUSE 5}…{PAUSE 5}$"

RocketHideout8F_Mision_Mansion_Oak_Text_13:
.string "Yo, GIOVANNI, LÍDER DEL TEAM ROCKET,\n"
	.string "¡me encargaré personalmente de llevar\l"
	.string "a tus POKÉMON al siguiente nivel.$"

RocketHideout8F_Mision_Mansion_Oak_Text_14:
.string "Me siento orgulloso de ti, {PLAYER}.\n"
	.string "Con tu nivel actual, KANTO no\l"
	.string "tiene ya ningún misterio para ti.$"

RocketHideout8F_Mision_Mansion_Oak_Text_15:
.string "Actualmente, soy mejor ENTRENADOR\n"
	.string "que cuando OAK y yo nos disputábamos\l"
	.string "el título de CAMPEÓN de KANTO.\p"
	.string "A pesar de ello, has sido capaz de\n"
	.string "derrotarme, no tengo palabras. Te has\l"
	.string "ganado el derecho de hacer lo que\l"
	.string "quieras en esta situación.$"

RocketHideout8F_Mision_Mansion_Oak_Text_16:
.string "ANDRA!!\n"
	.string "PROTON!!$"

RocketHideout8F_Mision_Mansion_Oak_Text_17:
	.string "Call ARCHER, PETREL, CHAMPION BLUE, and\n"
	.string "all the ROCKET EXECUTIVES in here. We\l"
	.string "need to make sure OAK and BLAINE stay\l"
	.string "put in the POKÉMON MANSION, and\l"
	.string "{PLAYER} doesn't face any threats.$"


RocketHideout8F_Mision_Mansion_Oak_Text_18:
	.string "PROTON: YES, SIR!$"


RocketHideout8F_Mision_Mansion_Oak_Text_19:
	.string "Go, {PLAYER}, and show OAK where the\n"
	.string "true strength of a TRAINER comes from.$"


RocketHideout8F_Mision_Mansion_Oak_Move_1:
face_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_3:
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_4:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_5:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_6:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_7:
walk_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_8:
walk_up
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Silph_move5.10:
emote_exclamation_mark
face_up
step_end

RocketHideout8F_Mision_Johto_move_9.1:
face_left
delay_8
delay_16
face_down
step_end


RocketHideout8F_Mision_Johto::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setflag FLAG_NUEVA_292
addobject 1
addobject 10
removeobject 2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_1 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout8F_Mision_Johto_move_3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_4
waitmovement 0x0
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout8F_Mision_Johto_Text_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_SHOP
addmoney 1500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout8F_Mision_Johto_Text_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Johto_Text_6 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_7
waitmovement 0x0
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_10 MSGBOX_DEFAULT
givemon SPECIES_RAIKOU, 70, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_11 MSGBOX_DEFAULT
givemon SPECIES_ENTEI, 70, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_12 MSGBOX_DEFAULT
givemon SPECIES_SUICUNE, 70, ITEM_LUM_BERRY
waitfanfare
msgbox RocketHideout8F_Mision_Johto_Text_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_15 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_16 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 10, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_10
applymovement 1, RocketHideout8F_Mision_Johto_move_11
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_18 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
applymovement 10, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 10, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 10, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 10
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
playse SE_M_STAT_INCREASE
applymovement 6, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 6, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
playse SE_SHOP
waitse
applymovement 6, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 3, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_6
applymovement 6, RocketHideout8F_Mision_Johto_move_3
applymovement 1, RocketHideout8F_Mision_Johto_move_13
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_21 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_22 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
waitse
applymovement 1, RocketHideout8F_Mision_Johto_move_9.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_14
applymovement 6, RocketHideout8F_Mision_Johto_move_15
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_24 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_2
applymovement 6, RocketHideout8F_Mision_Johto_move_16
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_17
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_26 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_27.1 MSGBOX_DEFAULT
waitfanfare
additem ITEM_TOWN_MAP
msgbox RocketHideout8F_Mision_Johto_Text_27 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_28 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_18
applymovement 1, RocketHideout8F_Mision_Johto_move_19
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 4
setvar VAR_UNUSED_0x40F7, 808
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7



RocketHideout_8F_Disguise_Player_3::
delay 40
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout8F_Mision_Johto_Text_29.1 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_30 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_672
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
setvar VAR_UNUSED_0x40F7, 117
release
end

RocketHideout8F_Mision_Johto_Text_30:
.string "GIOVANNI: I will be waiting for you in\n"
	.string "the MAXIMUM POTENTIAL REACHABLE ROOM.$"

RocketHideout8F_Mision_Johto_Text_27.1:
	.string "{PLAYER} obtained a MAP from GIOVANNI!!$"

RocketHideout8F_Mision_Johto_Text_18.1:
.string "ANDRA got promoted to BOSS ADMIN in\n"
	.string "the HOENN region!!$"

RocketHideout8F_Mision_Johto_Text_29.1:
.string "{PLAYER} got promoted to BOSS ADMIN\n"
	.string "in the JOHTO region!!$"

RocketHideout8F_Mision_Johto_Text_1:
.string "ANDRA: {PLAYER}! You are tireless! I\n"
	.string "was ready to enter forcing the door to\l"
	.string "CINNABAR MANSION, then you went in\l"
	.string "defeating everyone before!$"

RocketHideout8F_Mision_Johto_Text_2:
.string "GIOVANNI: You both have given TEAM\n"
	.string "ROCKET more than no one could have\l"
	.string "expected, your skills as TRAINERS is\l"
	.string "out of any rank that I could offer you\l"
	.string "on TEAM ROCKET, that's why we need to\l"
	.string "talk about your near future, something\l"
	.string "that will be a real challenge and will\l"
	.string "spread out the organization even more,\l"
	.string "but before that{PAUSE 15}…{PAUSE 15} Here are your rewards.$"

RocketHideout8F_Mision_Johto_Text_3:
	.string "YOU JUST INVOICED 1,500,000¥!!$"

RocketHideout8F_Mision_Johto_Text_4:
.string "GIOVANNI: {PAUSE 25}…{PAUSE 25}$"

RocketHideout8F_Mision_Johto_Text_5:
.string "Are you sure you don't want them,\n"
	.string "ANDRA?$"

RocketHideout8F_Mision_Johto_Text_6:
.string "ANDRA: I'm sure, I don't need them to\n"
	.string "build my best team.$"

RocketHideout8F_Mision_Johto_Text_7:
.string "GIOVANNI: It is your will, so be it.$"

RocketHideout8F_Mision_Johto_Text_8:
.string "You should know, {PLAYER}, that when\n"
	.string "we returned the JOHTO BEASTS to their\l"
	.string "original place, we took the liberty to\l"
	.string "analyze their DNA. The effect is\l"
	.string "obvious: we were able to clone them as\l"
	.string "we did with KANTO BIRDS.$"

RocketHideout8F_Mision_Johto_Text_9:
.string "As one of the BOSS ADMIN, you are\n"
	.string "entitled to a specimen of each one. I\l"
	.string "hope it doesn't bring back painful\l"
	.string "memories for you about your fight\l"
	.string "against LANCE. Keep in mind that those\l"
	.string "are clones.$"

RocketHideout8F_Mision_Johto_Text_10:
.string "YOU OBTAINED A RAIKOU AT LV:25!!$"

RocketHideout8F_Mision_Johto_Text_11:
.string "YOU OBTAINED A ENTEI AT LV:25!!$"

RocketHideout8F_Mision_Johto_Text_12:
.string "YOU OBTAINED A SUICUNE AT LV:25!!$"

RocketHideout8F_Mision_Johto_Text_13:
.string "Now, get comfortable, we have a lot to\n"
	.string "talk about.$"

RocketHideout8F_Mision_Johto_Text_14:
.string "With MEWTWO in our hands, KANTO BIRDS\n"
	.string "clones and JOHTO BEASTS, TEAM ROCKET\l"
	.string "has reached a power greater than\l"
	.string "months ago we could dream.$"
	

RocketHideout8F_Mision_Johto_Text_15:
.string "OAK arrested, LANCE stranded{PAUSE 15}…{PAUSE 15} KANTO is\n"
	.string "totally under our control, finally we\l"
	.string "will be able to bring back all the\l"
	.string "splendor the region had before war,\l"
	.string "that will require just time, which is why\l"
	.string "your destinies are far away from here.$"

RocketHideout8F_Mision_Johto_Text_16:
.string "ANDRA: Where will we go, sir?$"

RocketHideout8F_Mision_Johto_Text_17:
.string "I am going to dedicate all my efforts to\n"
	.string "rebuild KANTO as it should be. Now that\l"
	.string "I have ROCKET like you, I believe it is\l"
	.string "time to delegate totally my powers in\l"
	.string "our JOHTO and HOENN branches.$"

RocketHideout8F_Mision_Johto_Text_18:
.string "ANDRA! Now you will manage the TEAM\n"
	.string "ROCKET on HOENN region! You are\l"
	.string "promoted to BOSS ADMIN ROCKET and\l"
	.string "HOENN LEADER!$"

RocketHideout8F_Mision_Johto_Text_19:
.string "ANDRA: Wow!\n"
	.string "I can't believe it!$"

RocketHideout8F_Mision_Johto_Text_20:
.string "Our branch at HOENN is not totally built\n"
	.string "yet, but you can settle there at least\l"
	.string "ANDRA, unfortunately, the distance\l"
	.string "between both regions prevents to use\l"
	.string "teleportation technology to send you\l"
	.string "there, but do not worry about that, we\l"
	.string "have a FERRY on VERMILION waiting for\l"
	.string "you.$"

RocketHideout8F_Mision_Johto_Text_21:
.string "I know you love mythology and\n"
	.string "ANCESTRAL POKÉMON, ANDRA, which is\l"
	.string "why I am sending you to HOENN, we will\l"
	.string "dust off that region's mysteries, which\l"
	.string "are probably a lot.$"

RocketHideout8F_Mision_Johto_Text_22:
.string "ANDRA: I guess you mean about those\n"
	.string "RUINS that you can look at the DESERT,\l"
	.string "at DEWFORD TOWN north and at ROUTE\l"
	.string "120.$"

RocketHideout8F_Mision_Johto_Text_23:
.string "GIOVANNI: I see that I don't need to\n"
	.string "tell you anything else, that's all for\l"
	.string "you ANDRA, HOENN is waiting for you.$"

RocketHideout8F_Mision_Johto_Text_24:
.string "ANDRA: Do not expect that I will use\n"
	.string "exotic LEGENDARIES from HOENN in our\l"
	.string "next fight {PLAYER}, I told you that I\l"
	.string "will be the best just using NO\l"
	.string "LEGENDARIES, and I am going to keep it.\l"
	.string "I hope someday you visit HOENN, maybe I\l"
	.string "could go around for JOHTO, as the\l"
	.string "situation requires it!$"

RocketHideout8F_Mision_Johto_Text_25:
.string "GIOVANNI: Well {PLAYER}, you know\n"
	.string "there are a lot loose ends that are not\l"
	.string "solved because OAK interrupted us, but\l"
	.string "you should know before going to JOHTO.$"

RocketHideout8F_Mision_Johto_Text_26:
.string "First, take this.$"

RocketHideout8F_Mision_Johto_Text_27:
.string "With this MAP, you could locate yourself\n"
	.string "as you should be, inside a totally new\l"
	.string "region for you.$"

RocketHideout8F_Mision_Johto_Text_28:
.string "Now, this is not the adequate place to\n"
	.string "explain the goals you will be pursuing in\l"
	.string "JOHTO; that's the area next to here, the\l"
	.string "RESEARCH AREA ABOUT THE MAXIMUM\l"
	.string "POTENTIAL ACHIEVABLE BY A POKÉMON. We\l"
	.string "have finally opened the last zone, and\l"
	.string "that's where I will be waiting for you,\l"
	.string "{PLAYER}. There, you will understand\l"
	.string "the reasons behind the goals you will be\l"
	.string "pursuing in JOHTO.$"

RocketHideout8F_Mision_Johto_Text_29:
.string "GIOVANNI: A last thing {PLAYER},\n"
	.string "since now you are in charge of TEAM\l"
	.string "ROCKET in the JOHTO region! You are\l"
	.string "promoted to BOSS ADMIN ROCKET and\l"
	.string "JOHTO LEADER!$"

RocketHideout8F_Mision_Johto_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Johto_move_2:
face_down
step_end

RocketHideout8F_Mision_Johto_move_3:
face_right
step_end

RocketHideout8F_Mision_Johto_move_4:
walk_up
step_end

RocketHideout8F_Mision_Johto_move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_6:
face_left
step_end

RocketHideout8F_Mision_Johto_move_7:
walk_slow_down
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_8:
walk_slow_up
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_9:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_10:
face_up
step_end

RocketHideout8F_Mision_Johto_move_11:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_12:
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
step_end


RocketHideout8F_Mision_Johto_move_13:
walk_up
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_14:
walk_right
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_15:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout8F_Mision_Johto_move_16:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout8F_Mision_Johto_move_17:
walk_left
delay_8
walk_in_place_up
step_end

RocketHideout8F_Mision_Johto_move_18:
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_19:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_right
walk_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
addobject 2
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3
waitmovement 0x0
delay 10
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.3
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_103_RIVAL
playse SE_EXIT
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 168
release
end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.2:
delay_16
face_left
delay_16
face_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.3:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1:
	.string "GIOVANNI: As I told you, ANDRA, the\n"
	.string "RUINS OF ALPH must be under strict\l"
	.string "vigilance, as of now.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2:
	.string "GIOVANNI: Do you realize the kind of\n"
	.string "POKÉMON you've just faced? Our\l"
	.string "scientists have estimated it to have\l"
	.string "190 BASE SPECIAL ATTACK-far\l"
	.string "outstripping that of the highest\l"
	.string "recorded, DEOXYS' 180. Together with\l"
	.string "its other STATs, it achieves a total of\l"
	.string "660. There isn't a shred of doubt this\l"
	.string "POKÉMON surpasses even LEGENDARY\l"
	.string "POKÉMON like LUGIA and HO-OH in\l"
	.string "numbers. The limits of conventional\l"
	.string "POKÉMON have just been shattered, and\l"
	.string "the information from this POKÉMON will\l"
	.string "allow us to further perfect the\l"
	.string "SPECIAL ATTACK of newer MEWTWO\l"
	.string "prototypes. Perhaps, we'll even surpass\l"
	.string "that BASE of 190 too.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3:
	.string "But we're not here for that. I've\n"
	.string "already briefed ANDRA and asked her to\l"
	.string "be keen to any peculiar activities in\l"
	.string "the RUINS OF ALPH.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4:
	.string "We don't know that TRAINER's aims, but\n"
	.string "whatever he's after must be in there.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5:
	.string "However, we still need information. This\n"
	.string "is where I need your help, {PLAYER}.\l"
	.string "You must pay a visit to that cult in\l"
	.string "LAVENDER TOWN again and explain the\l"
	.string "situation to the LEADER. Perhaps he'll\l"
	.string "know what to do.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6:
	.string "That's all for now. ARCHER and I are\n"
	.string "really busy with all the stuff that we\l"
	.string "discussed back in GOLDENROD, although\l"
	.string "we won't hesitate to intervene if\l"
	.string "necessary. I'll be eager to hear about\l"
	.string "you.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7:
.string "ANDRA: Sir, yes, sir!$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8:
.string "No me dijiste que ese tipo contaba\n"
	.string "con KYOGRE, GROUDON y RAYQUAZA.\l"
	.string "¿De verdad enfrentaste a los tres\l"
	.string "LEGENDARIOS de HOENN a la vez?\p"
	.string "Ten mucho cuidado, he estudiado su\n"
	.string "mitología, y la leyenda habla de\l"
	.string "FORMAS PRIMIGENIAS aún más poderosas.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8.1:
	.string "Así es, las que de verdad crearon\n"
	.string "la tierra y el mar.\p"
	.string "No sé si ese tipo querrá comprobar la\n"
	.string "veracidad de esa leyenda, pero tenlo\l"
	.string "en cuenta.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1:
face_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2:
face_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4:
face_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6:
walk_in_place_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7:
walk_down
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Lago_Furia::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_1
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_4
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_7 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_8 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_LUGIA, 90, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_HO_OH, 90, ITEM_LUM_BERRY
waitfanfare
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_4
waitmovement 0x0
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_9
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_19 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
setflag FLAG_SYS_POKEDEX_GET
setflag FLAG_SYS_NATIONAL_DEX
special EnableNationalPokedex
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_20 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_29 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setflag FLAG_HOENN_108
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_NUEVA_292
clearflag FLAG_RECEIVED_SHOAL_SHELL_1
setvar VAR_VERDANTURF_TOWN_STATE, 1
setvar VAR_PACIFIDLOG_TOWN_STATE, 1
setvar VAR_MAUVILLE_CITY_STATE, 1
clearflag FLAG_RECEIVED_SHOAL_SALT_4
setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
setvar VAR_UNUSED_0x40F7, 180
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_30 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 9, 9
release
end

RocketHideout_8F_Mision_Lago_Furia_Texto_30:
	.string "Do you want to go to your office in\n"
	.string "JOHTO to see the documents regarding\l"
	.string "the new missions?$"

RocketHideout_8F_Mision_Lago_Furia_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_10:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_9:
walk_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_8:
walk_slow_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_7:
walk_slow_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_6:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_5:
face_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_3:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_2:
face_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_1:
face_down
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Texto_1:
	.string "GIOVANNI: {PLAYER}! You're\n"
	.string "extraordinary, you defeated the three\l"
	.string "most powerful POKÉMON of all time! Do\l"
	.string "you understand the reason for your\l"
	.string "victory? The moment the immortality of\l"
	.string "such POKÉMON was subject to the rules\l"
	.string "governing POKÉMON battles between two\l"
	.string "TRAINERS, their powers ceased to be\l"
	.string "infinite and, therefore, vulnerable.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_2:
	.string "That TRAINER tried to use them as\n"
	.string "conventional POKÉMON, and that's where\l"
	.string "they lost their essence.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_3:
	.string "However, only a TRAINER who has\n"
	.string "reached an unparalleled state of\l"
	.string "balance with their team could defeat\l"
	.string "them even in a POKÉMON battle. You were\l"
	.string "the only one who could do it,\l"
	.string "{PLAYER}…$"

RocketHideout_8F_Mision_Lago_Furia_Texto_6:
	.string "As is customary, after each major\n"
	.string "event, I gather you all here to assess\l"
	.string "everything{PAUSE 25}…{PAUSE 25} and to look to the future.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_7:
.string "Before anything else, your rewards.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_8:
.string "YOU JUST EARNED 2,000,000¥!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_9:
	.string "And not only that, thanks to all the\n"
	.string "commotion caused by ZEUS, and the\l"
	.string "entry to RUINS OF ALPH, we were able to\l"
	.string "extract the DNA of LUGIA and HO-OH,\l"
	.string "not their primordial forms, but the ones\l"
	.string "known by JOHTO's culture.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_10:
	.string "ANDRA finds it dishonorable to use this\n"
	.string "kind of POKÉMON, so only you will\l"
	.string "receive cloned specimens, {PLAYER}.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_11:
.string "YOU OBTAINED A LV.60 LUGIA!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_12:
.string "YOU OBTAINED A LV.60 HO-OH!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_13:
	.string "ANDRA: Don't think I won't know how to\n"
	.string "deal with them if you use them against\l"
	.string "me, {PLAYER}. I've already defeated\l"
	.string "the golden HO-OH, a form even more\l"
	.string "powerful than those clones, don't\l"
	.string "forget!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_14:
	.string "GIOVANNI: Alright, now let's talk about\n"
	.string "your future missions.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_15:
	.string "{PLAYER} did an excellent job\n"
	.string "gathering information about the DEEP\l"
	.string "BONDS of JOHTO. All this information has\l"
	.string "served our SCIENTISTS to optimize and\l"
	.string "further expand the power of future\l"
	.string "prototypes, just as MEWTWO once was.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_16:
	.string "However, JOHTO is much more than its\n"
	.string "TOWNS and CITIES; unlike KANTO, it has\l"
	.string "many places yet to be explored$"

RocketHideout_8F_Mision_Lago_Furia_Texto_17:
	.string "We have strong suspicions that these\n"
	.string "places hide unique POKÉMON, whose data\l"
	.string "could continue to provide fundamental\l"
	.string "information for our research.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_18:
	.string "The opening of the station connecting\n"
	.string "GOLDENROD with SAFFRON, and the\l"
	.string "demolition of LAVENDER TOWER, are\l"
	.string "approaching, but while awaiting these\l"
	.string "events, your mission will be to continue\l"
	.string "expanding what we know about POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_19:
	.string "Therefore, I'll give you something you\n"
	.string "should have had a long time ago.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_20:
.string "YOU OBTAINED A POKEDEX!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_21:
	.string "Courtesy of OAK, thanks to his\n"
	.string "invention, not only will the information\l"
	.string "of every new POKÉMON you encounter be\l"
	.string "sent to our database, it will also be\l"
	.string "recorded for your own use. You'll even\l"
	.string "be able to see the BASE STATs if you\l"
	.string "manage to catch the POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_22:
	.string "ANDRA: So this is what that spoiled\n"
	.string "brat RED used, I know several\l"
	.string "POKÉMANIACS who would give everything\l"
	.string "they have for an artifact like this. We\l"
	.string "will give it the best possible use, right,\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_23:
	.string "Does that mean I'm not returning to\n"
	.string "HOENN, sir?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_24:
	.string "GIOVANNI: That's right, ANDRA, for now\n"
	.string "you will stay in JOHTO and perform the\l"
	.string "same task that {PLAYER} has been\l"
	.string "doing. Both of you are the strongest\l"
	.string "trainers in the entire organization, and\l"
	.string "a mission like this, where you could\l"
	.string "face anything, requires the highest\l"
	.string "possible preparation.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_25:
.string "ANDRA: And where should we start?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_26:
	.string "GIOVANNI: I have left documents for\n"
	.string "you, with a detailed explanation of\l"
	.string "each of the missions you will undertake,\l"
	.string "in your respective offices. Don't worry,\l"
	.string "ANDRA, there is already a teleportation\l"
	.string "connection with the BASE in HOENN.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_27:
	.string "The order in which you decide to tackle\n"
	.string "them is up to you, though I would like\l"
	.string "you to delve as deeply as possible into\l"
	.string "each one. Once you've researched\l"
	.string "enough, return to my office.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_28:
.string "ANDRA: Cool, let's explore JOHTO!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_29:
	.string "Did you hear that, {PLAYER}? The most\n"
	.string "remote places of JOHTO await us. What\l"
	.string "mysteries will be waiting for us?$"

RocketHideout_8F_Mision_Base_Hoenn::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_2 MSGBOX_AUTOCLOSE
fadescreen 1
delay 60
fadescreen 0
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 184
release
end

RocketHideout_8F_Mision_Base_Hoenn_Move_10:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_8:
walk_slow_left
delay_16
walk_in_place_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_7:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_6:
face_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_5:
walk_slow_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_2:
face_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_4:
face_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_1:
walk_in_place_down
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Texto_1:
	.string "ANDRA: Hah! I knew you were going to\n"
	.string "appear soon, {PLAYER}! I just\l"
	.string "completed my missions too!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_2:
	.string "GIOVANNI: Our database has gathered\n"
	.string "valuable information from your\l"
	.string "expeditions, but I would like to hear\l"
	.string "from you. Tell me all the details…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_3:
	.string "I see{PAUSE 15}…{PAUSE 15} So JOHTO has several species\n"
	.string "believed to be extinct, and they\l"
	.string "inhabit that great paradise known as\l"
	.string "the west zone of CIANWOOD.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4:
	.string "It's not surprising; there are only 100\n"
	.string "original species cataloged in JOHTO, a\l"
	.string "very small number compared to the 151\l"
	.string "in KANTO or the 135 in HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1:
	.string "On the other hand, that SACRED DRAGON…\n"
	.string "ANDRA has already told me how her\l"
	.string "URSARING evolved thanks to the GOLDEN\l"
	.string "STONE.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2:
	.string "The number of POKÉMON it can react to\n"
	.string "is quite a mystery. I'll send ARCHER to\l"
	.string "that place to investigate and find one.\l"
	.string "Then, our top scientists will try to\l"
	.string "reproduce that sacred object so we can\l"
	.string "commercialize it among the best ROCKET\l"
	.string "members.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3:
	.string "ANDRA: Oh…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_5:
	.string "GIOVANNI: As for that guy EUSINE, don't\n"
	.string "worry, {PLAYER}. I'll send someone to\l"
	.string "find him. Everything he's seen and\l"
	.string "experienced in that pagoda will be of\l"
	.string "enormous use to our investigations.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_6:
	.string "What really worries me is your mission\n"
	.string "at the LAKE OF RAGE, {PLAYER}.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_7:
	.string "The result has been outstanding, and\n"
	.string "the POKÉMON found there, are\l"
	.string "exceptional. But those SCIENTISTS{PAUSE 15}…\l"
	.string "they don't work for us, they seem to\l"
	.string "pursue similar objectives to ours.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_8:
	.string "ANDRA: I also encountered scientists\n"
	.string "like that in HOENN, in the midst of\l"
	.string "searching for the REGIS…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_9:
	.string "GIOVANNI: As I expected, everything\n"
	.string "points to DEVON C.O.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_10:
.string "ANDRA: DEVON?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_11:
	.string "GIOVANNI: OAK and BLAINE contacted\n"
	.string "them in the past, before {PLAYER}\l"
	.string "defeated them. Thanks to that, they\l"
	.string "obtained the necessary funding to\l"
	.string "clone MEWTWO again and resurrect\l"
	.string "DEOXYS.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_12:
.string "ANDRA: And{PAUSE 15}…?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_13:
	.string "GIOVANNI: And DEVON agreed, with the\n"
	.string "condition of providing all the material\l"
	.string "related to DEOXYS. Fortunately, they\l"
	.string "didn't say a word about MEWTWO.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_14:
.string "Maybe is too soon, but{PAUSE 15}…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_15:
	.string "{PLAYER}! I want you to go with ANDRA\n"
	.string "to our HOENN branch, and she'll give you\l"
	.string "a general overview of the region.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_16:
	.string "The demolition of LAVENDER TOWN'S\n"
	.string "TOWER is imminent; Meanwhile, there's\l"
	.string "nothing holding you here, and our HOENN\l"
	.string "BASE is the only one you haven't visited\l"
	.string "yet.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_17:
	.string "Once LAVENDER TOWN'S TOWER is\n"
	.string "demolished, construction will begin at\l"
	.string "record speed on the new RADIO TOWER. In\l"
	.string "the meantime, I inform you that the II\l"
	.string "GRAND MEETING IN GOLDENROD CITY is\l"
	.string "scheduled soon.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_18:
	.string "ANDRA: Wow! Now that KANTO and JOHTO\n"
	.string "are about to achieve the unity\l"
	.string "proposed in the I GRAND MEETING…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_19:
	.string "GIOVANNI: We have everything to make\n"
	.string "the KANTO-JOHTO duo into a global\l"
	.string "power of the POKÉMON WORLD.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_20:
.string "ANDRA: Sounds{PAUSE 25}…{PAUSE 15} shocking.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_21:
	.string "GIOVANNI: And it will be, you'll see when\n"
	.string "you see what there is to show, but for\l"
	.string "now{PAUSE 25}…{PAUSE 15} You have at your disposal the\l"
	.string "teleportation that sends you to HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_22:
	.string "I hope you guide {PLAYER} correctly\n"
	.string "through HOENN, stay attentive to my\l"
	.string "call.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_23:
	.string "ANDRA: Don't worry sir, {PLAYER} won't\n"
	.string "waste any time there, I'm sure!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_24:
	.string "I'll wait for you at the entrance to the\n"
	.string "HOENN base; I'll be your tour guide!$"

RocketHideout_8F_Mision_Neo_Canela::
lock
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 7
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_1
waitmovement 0x0
playse SE_PIN
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_1.1
waitmovement 0x0
waitse
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Neo_Canela_Move_6
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_8.1
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_8.2
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8.3
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
delay 20
removeobject 7
removeobject 8
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 191
release
end

RocketHideout_8F_Mision_Neo_Canela_Move_8.1:
delay_8
face_right
delay_16
face_down
delay_16
face_right
delay_16
delay_16
delay_16
face_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_8.2:
walk_in_place_left
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_8.3:
face_left
delay_16
delay_8
walk_left
delay_16
walk_in_place_left
delay_8
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


RocketHideout_8F_Mision_Neo_Canela_Move_8:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_7:
face_right
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_5:
face_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_4:
face_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_2:
walk_slow_up
walk_slow_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_1.1:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_1:
walk_up
walk_up
walk_up
walk_up
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Texto_1:
	.string "????: I was able to escape at the last\n"
	.string "moment, due to the TELEPORT of my\l"
	.string "MAGMORTAR.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_2:
	.string "GIOVANNI: {PLAYER}, your absence\n"
	.string "from KANTO-JOHTO has prevented you\l"
	.string "from finding out, but the phenomenon\l"
	.string "has been felt in both regions: the\l"
	.string "volcano on CINNABAR ISLAND has\l"
	.string "erupted, engulfing everything in its\l"
	.string "path.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_3:
	.string "BLAINE: The LABORATORY{PAUSE 25}…{PAUSE 25} the POKÉMON\n"
	.string "MANSION{PAUSE 25}…{PAUSE 25} the GYM{PAUSE 25}…{PAUSE 25} now everything lies\l"
	.string "at the bottom of the sea{PAUSE 15}…$"

RocketHideout_8F_Mision_Neo_Canela_Texto_4:
	.string "OAK: The issue is that, after the I\n"
	.string "GOLDENROD CONFERENCE, we continued\l"
	.string "our investigations there. A very\l"
	.string "important part of our recent projects\l"
	.string "is now lost, dozens of meters\l"
	.string "underground.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_5:
	.string "BLAINE: Fortunately, the most\n"
	.string "important underground areas were made\l"
	.string "to withstand any natural disaster.\l"
	.string "After {PLAYER} defeated us, we built\l"
	.string "many more underground floors; they are\l"
	.string "like an underground bunker.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_6:
	.string "GIOVANNI: So there's still a chance\n"
	.string "that it is not destroyed yet.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_7:
	.string "OAK: We must verify it; you know as well\n"
	.string "as I do, the valuable information we\l"
	.string "keep there.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_8:
	.string "BLAINE: However, not anyone can go; the\n"
	.string "eruption may have unleashed all the\l"
	.string "prototypes we had there in the testing\l"
	.string "phase.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_9:
	.string "GIOVANNI: We agree, the most suitable\n"
	.string "person to carry out this mission is\l"
	.string "{PLAYER}. They have more than enough\l"
	.string "experience in this kind of situations.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_10:
	.string "OAK: That's right, I'll be waiting for\n"
	.string "you on CINNABAR ISLAND, {PLAYER}.\l"
	.string "There, I'll tell you exactly what you\l"
	.string "need to do.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_11:
	.string "BLAINE: It's a relief to have a TRAINER\n"
	.string "like you on our side; I hope you can\l"
	.string "recover as much as possible from this\l"
	.string "catastrophe.$"

RocketHideout_8F_Mision_Central_Energia::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_1 MSGBOX_DEFAULT
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_2 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_3 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_5 MSGBOX_DEFAULT
givemon SPECIES_SILVALLY, 90, ITEM_NONE
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_UNUSED_0x272
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
clearflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
setvar VAR_UNUSED_0x40F7, 202
release
end

RocketHideout_8F_Mision_Central_Energia_Move_5:
walk_slow_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Central_Energia_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Mision_Central_Energia_Move_1:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Central_Energia_Texto_1:
	.string "-{PLAYER} gave the HARD DRIVE\n"
	.string "to GIOVANNI!-$"

RocketHideout_8F_Mision_Central_Energia_Texto_2:
	.string "GIOVANNI: I knew you wouldn't\n"
	.string "disappoint, {PLAYER}. There's no\l"
	.string "reward that can compare to the\l"
	.string "information you've just brought back.\l"
	.string "There are millions invested in research\l"
	.string "here, so it's only appropriate to give\l"
	.string "you some of them.$"

RocketHideout_8F_Mision_Central_Energia_Texto_3:
	.string "-{PLAYER} JUST EARNED 2,000,000¥!-$"

RocketHideout_8F_Mision_Central_Energia_Texto_4:
	.string "Take this as well, it's a project that\n"
	.string "comes from a distant region, some of\l"
	.string "our best scientists have made contact\l"
	.string "with it.$"

RocketHideout_8F_Mision_Central_Energia_Texto_5:
.string "YOU OBTAINED A LV.70 SILVALLY!!$"

RocketHideout_8F_Mision_Central_Energia_Texto_6:
	.string "It seems it can change its type\n"
	.string "depending on the object it is holding\l"
	.string "it. Inside the top floors of KANTO\l"
	.string "RADIO TOWER, they will be sold, very\l"
	.string "soon you will be able to enter,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Central_Energia_Texto_7:
	.string "Returning to the issue of CINNABAR\n"
	.string "ISLAND{PAUSE 25}…{PAUSE 15} I would appreciate it if you\l"
	.string "didn't speak with anyone about\l"
	.string "whatever you may have seen there, not\l"
	.string "even with ANDRA.$"

RocketHideout_8F_Mision_Central_Energia_Texto_8:
	.string "Many of the prototypes we left there\n"
	.string "are in the testing phase, they are\l"
	.string "volatile and still need to get better.\l"
	.string "However, you must have felt the\l"
	.string "tremendous potential of some of them.$"

RocketHideout_8F_Mision_Central_Energia_Texto_9:
	.string "Until we are certain we have something\n"
	.string "truly significant, something we can\l"
	.string "control with complete confidence{PAUSE 15}…\l"
	.string "those projects are completely\l"
	.string "confidential, do you understand\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Central_Energia_Texto_10:
	.string "Now, let's talk about your next mission:\n"
	.string "finish the issue about the roads to\l"
	.string "SAFFRON CITY.$"

RocketHideout_8F_Mision_Central_Energia_Texto_11:
	.string "It seems that strange POKÉMON has\n"
	.string "returned, and it's interfering with the\l"
	.string "final phase of the construction.$"

RocketHideout_8F_Mision_Central_Energia_Texto_12:
	.string "I'm afraid there's no choice but to\n"
	.string "capture it so it definitively doesn't\l"
	.string "cause any more problems.$"

RocketHideout_8F_Mision_Central_Energia_Texto_13:
	.string "So, your mission will be, on the eve of\n"
	.string "the II GRAND MEETING in GOLDENROD, to\l"
	.string "take charge of that POKÉMON.$"

RocketHideout_8F_Mision_Central_Energia_Texto_14:
	.string "I'll be heading to GOLDENROD now; I have\n"
	.string "to organize the preparations for the\l"
	.string "meeting with the DIRECTOR.$"

RocketHideout_8F_Mision_Central_Energia_Texto_15:
	.string "It's time to start reaping the rewards\n"
	.string "of our work, {PLAYER}. In a very short\l"
	.string "time, we're witnessing significant\l"
	.string "transformations in both regions, the\l"
	.string "same ones that have been brewing for a\l"
	.string "year now, since the I GRAND MEETING or\l"
	.string "even before.$"



RocketHideout_8F_Final_DLC::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Final_DLC_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_2, RocketHideout_8F_Final_DLC_Texto_14
applymovement 1, CuevaTesoro4_Jefe_Final_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Final_DLC_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_MEWTWO, 100, ITEM_MEWTWONITE_Y
waitfanfare
msgbox RocketHideout_8F_Final_DLC_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Final_DLC_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_21 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 216
delay 50
warpsilent MAP_DEVON_S9, 40, 7
release
end

RocketHideout_8F_Final_DLC_Move_7:
walk_slow_down
step_end

RocketHideout_8F_Final_DLC_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_5:
face_up
step_end

RocketHideout_8F_Final_DLC_Move_4:
walk_slow_left
step_end

RocketHideout_8F_Final_DLC_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Final_DLC_Move_2:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_1:
face_right
step_end

RocketHideout_8F_Final_DLC_Texto_1:
	.string "GIOVANNI: {PLAYER}! ARCHER and I\n"
	.string "should have been there. Tell me\l"
	.string "everything. What happened to ANDRA?$"

RocketHideout_8F_Final_DLC_Texto_2:
	.string "I understand. We should have realized\n"
	.string "that the atmosphere and role of DEVON\l"
	.string "were very appealing to someone like\l"
	.string "BILL's assistant. I suppose he was\l"
	.string "right; we never paid him enough\l"
	.string "attention.$"

RocketHideout_8F_Final_DLC_Texto_3:
	.string "As for ANDRA{PAUSE 15}…{PAUSE 15} perhaps it's for the best\n"
	.string "this way. After all, her quest may lead\l"
	.string "to a discovery more significant than all\l"
	.string "the research we're conducting{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_4:
	.string "Meanwhile, DEVON has taken action.\n"
	.string "Nevertheless, this doesn't affect our\l"
	.string "plans, even though they are privy to\l"
	.string "everything discussed at the II GRAND\l"
	.string "MEETING.$"

RocketHideout_8F_Final_DLC_Texto_5:
	.string "With ANDRA's absence, our base in HOENN\n"
	.string "has been left without a LEADER, and you\l"
	.string "will be in charge. After the events at\l"
	.string "the RUINS OF ALPH, all the LEGENDARY\l"
	.string "POKÉMON that gathered there returned\l"
	.string "to their original locations. This means\l"
	.string "that the THREE LEGENDARY POKÉMON of\l"
	.string "HOENN: KYOGRE, GROUDON and RAYQUAZA,\l"
	.string "will be there. One of your objectives\l"
	.string "will be to find them in order to study\l"
	.string "them. However{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_6:
	.string "Your main objective will be to gather as\n"
	.string "much information as possible about\l"
	.string "DEVON.$"

RocketHideout_8F_Final_DLC_Texto_7:
	.string "Where it operates, where its research\n"
	.string "laboratories are located, what its\l"
	.string "projects and ambitions are{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_8:
	.string "OAK came just before you; he was the\n"
	.string "one to inform me initially.$"

RocketHideout_8F_Final_DLC_Texto_9:
	.string "He personally confronted his PRESIDENT\n"
	.string "and was defeated. This occurred while\l"
	.string "the EXECUTIVES restrained BILL, ANDRA\l"
	.string "and ELM.$"

RocketHideout_8F_Final_DLC_Texto_10:
	.string "There's no doubt they have resources\n"
	.string "and are well-versed in the art of\l"
	.string "POKÉMON combat.$"

RocketHideout_8F_Final_DLC_Texto_11:
	.string "Perhaps they can push you to your\n"
	.string "limits more than in the RUINS OF ALPH,\l"
	.string "who knows.$"

RocketHideout_8F_Final_DLC_Texto_12:
	.string "That's why, {PLAYER}, I want to test\n"
	.string "you again, this time using our most\l"
	.string "advanced projects.$"

RocketHideout_8F_Final_DLC_Texto_13:
	.string "Now, face the full power of the\n"
	.string "technology developed by two regions!$"

RocketHideout_8F_Final_DLC_Texto_14:
.string "Really amazing, you are still on the top.$"

RocketHideout_8F_Final_DLC_Texto_15:
	.string "There's no doubt, you are the most\n"
	.string "valuable asset that TEAM ROCKET\l"
	.string "possesses. Your story as a LEGENDARY\l"
	.string "TRAINER still has much to offer, trust\l"
	.string "me.$"

RocketHideout_8F_Final_DLC_Texto_16:
	.string "I want you to have this. I know you\n"
	.string "won't resort to it as a cure-all that\l"
	.string "will solve everything, as we tried in the\l"
	.string "past, but consider it as another option.$"

RocketHideout_8F_Final_DLC_Texto_17:
.string "YOU OBTAINED A MEWTWO AT LV.100!!$"

RocketHideout_8F_Final_DLC_Texto_18:
.string "The original MEWTWO is yours, {PLAYER}.$"

RocketHideout_8F_Final_DLC_Texto_19:
	.string "Of course, it is equipped with the\n"
	.string "latest in technology: the MEGA STONE\l"
	.string "that transforms it into its Y form. As I\l"
	.string "mentioned in the meeting, the\l"
	.string "&-VOLCARONA you faced was crucial in\l"
	.string "boosting its SPECIAL ATTACK to\l"
	.string "stratospheric levels.$"

RocketHideout_8F_Final_DLC_Texto_20:
	.string "That's all, {PLAYER}. I recommend\n"
	.string "exploring and gradually adapting to\l"
	.string "HOENN. DEVON's headquarters are in\l"
	.string "RUSTBORO CITY, however, we don't know\l"
	.string "if that's their main operational center.$"

RocketHideout_8F_Final_DLC_Texto_21:
	.string "Meanwhile, we are still developing the\n"
	.string "prototypes of level II and{PAUSE 35}…{PAUSE 35} III. Until\l"
	.string "then{PAUSE 15}…{PAUSE 15} keep improving.$"

