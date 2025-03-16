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
	.string "extraño pasa en ese lugar, u OAK\l"
	.string "se ha teletransportado usando algún\l"
	.string "POKÉMON, o ese LABORATORIO no es tan\l"
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
	.string "de ROCKET.\p"
	.string "Es aquí donde se llevan a cabo los\n"
	.string "proyectos de verdad; esos que marcarán\l"
	.string "una diferencia real, y gran parte de su\l"
	.string "valor diferencial radica en su secretismo.\p"
	.string "Por ello, estas misiones y estos planes\n"
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
.string "AZUL: ¿Un ejemplar?$"

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
	.string "(Has sido ascendido a EJECUTIVO y\n"
	.string "recibido 50 ULTRA BALL, un AAERODACTYL y\l"
	.string "500.000¥. Tu próxima misión está en\l"
	.string "CIUDAD AZAFRÁN -SEDE SILPH-. Para ver\l"
	.string "el cambio de skin, sal del despacho de\l"
	.string "GIOVANNI).$"

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
	.string "¿Continuar escena Lore? (Si das SÍ y\n"
	.string "ocurre algún error, con la opción NO\l"
	.string "podrás saltarte esta parte y seguir).$"

RocketHideout_8F_Mision_Silph_text_1:
.string "GIOVANNI: ¡Ah, {PLAYER}!, estábamos\n"
	.string "esperándote, ¡pasa!$"

RocketHideout_8F_Mision_Silph_text_2:
.string "-{PLAYER} entregó las plumas de\n"
	.string "ARTICUNO y ZAPDOS-$"

RocketHideout_8F_Mision_Silph_text_3:
.string "GIOVANNI: ¡Qué extraordinario\n"
	.string "trabajo has hecho, {PLAYER}!\l"
	.string "¡No solo has cumplido tu misión\l"
	.string "con ARTICUNO, también te has\l"
	.string "ocupado de ZAPDOS!\l"
	.string "KOGA también me ha informado de\l"
	.string "cómo te enfrentaste a BRUNO de\l"
	.string "ÉLITE 4 en el CAMINO BICIS y le\l"
	.string "derrotaste.$"

RocketHideout_8F_Mision_Silph_text_4:
.string "GIOVANNI: Ambos, tú y ANDRA,\n"
	.string "habéis demostrado un desempeño y\l"
	.string "valor hacia el TEAM ROCKET que no\l"
	.string "tienen precio; PETREL ya me ha\l"
	.string "puesto al día de cómo 10 policías\l"
	.string "juntos no fueron suficiente para\l"
	.string "reducirte, ANDRA; resististe el\l"
	.string "tiempo suficiente como para que\l"
	.string "pudiéramos salvarte.$"

RocketHideout_8F_Mision_Silph_text_5:
.string "GIOVANNI: Por todo esto, ambos,\n"
	.string "ANDRA y {PLAYER}, os habéis ganado\l"
	.string "mi confianza, y los dos quedáis\l"
	.string "ascendidos a EJECUTIVOS ROCKET.$"

RocketHideout_8F_Mision_Silph_text_6:
.string "¡¡{PLAYER} fue ascendido a EJECUTIVO\n"
	.string "ROCKET!!$"

RocketHideout_8F_Mision_Silph_text_7:
.string "GIOVANNI: Aquí tienes tu\n"
	.string "recompensa ANDRA, espero que la\l"
	.string "reinviertas para hacer aún mejor\l"
	.string "ese gran equipo que has\l"
	.string "construido.$"

RocketHideout_8F_Mision_Silph_text_8:
.string "GIOVANNI: En cuanto a ti {PLAYER},\n"
	.string "acorde con tus resultados, las dos\l"
	.string "AVES LEGENDARIAS, BRUNO{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_9:
.string "GIOVANNI: Esta es tu recompensa.$"

RocketHideout_8F_Mision_Silph_text_10:
	.string "¡Te has embolsado 500.000¥!$"

RocketHideout_8F_Mision_Silph_text_11:
.string "Toma esto también, alguien de tu\n"
	.string "categoría debe de poder capturar\l"
	.string "cualquier POKÉMON en cualquier\l"
	.string "momento, ¡50 ULTRABALLS!$"

RocketHideout_8F_Mision_Silph_text_12:
.string "Y por último este POKÉMON, el más\n"
	.string "raro y poderoso de los FÓSILES de\l"
	.string "KANTO, seguro que puede ser una\l"
	.string "buena incorporación para tu\l"
	.string "equipo.$"

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
.string "Todas las combinaciones nos conducían\n"
	.string "a DITTO, se nos agotaba el tiempo y\l"
	.string "los fondos.\l"
	.string "Si no sacábamos algo pronto, a KANTO\l"
	.string "no le quedaba otra vía: rendirse.$"

RocketHideout_8F_Mision_Silph_text_26:
.string "Fue en ese momento{PAUSE 25}…{PAUSE 25}tras muchos\n"
	.string "fracasos, cuando finalmente pudimos\l"
	.string "incluso mejorar al legendario MEW,\l"
	.string "creando, a partir de su ADN, un POKÉMON\l"
	.string "hecho específicamente para el combate\l"
	.string "y{PAUSE 25}…{PAUSE 25} para ganar la guerra de KANTO.$"

RocketHideout_8F_Mision_Silph_text_27:
.string "Más rápido, más potente y polivalente\n"
	.string "que las bestias de JOHTO, estimamos su\l"
	.string "poder a la par que los mismísimos LUGIA\l"
	.string "y HO-OH que LANCE nunca pudo encontrar.\l"
	.string "Además, sus capacidades mentales no se\l"
	.string "parecían a nada conocido{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_28:
.string "Con MEWTWO, podíamos acabar con\n"
	.string "todo esto, y poner a LANCE en su lugar.\l"
	.string "Era poderoso{PAUSE 25}…{PAUSE 25} muy poderoso{PAUSE 25}…{PAUSE 25} tanto\l"
	.string "que salió de nuestro control justo cuando\l"
	.string "realizábamos las últimas pruebas.$"

RocketHideout_8F_Mision_Silph_text_29:
.string "El laboratorio de ISLA CANELA\n"
	.string "donde llevamos a cabo este\l"
	.string "desesperado plan en la sombra\l"
	.string "quedó destruido, y MEWTWO escapó,\l"
	.string "perdiéndose para siempre{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_30:
.string "Poco después, a KANTO no le quedó\n"
	.string "más remedio que rendirse.\l"
	.string "LANCE, se autoproclamó CAMPEÓN de KANTO\l"
	.string "y JOHTO simultáneamente.\l"
	.string "Entonces, llegó el momento de quitarse de\l"
	.string "en medio todas sus posibles amenazas{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_31:
.string "Sin embargo, para mi sorpresa, OAK\n"
	.string "fue el primero en arrodillarse.\l"
	.string "Le ofreció todos sus conocimientos como\l"
	.string "investigador, prometiendo ayudar al\l"
	.string "nuevo gobierno.\l"
	.string "Lo peor es que{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_32:
.string "{PAUSE 15}…{PAUSE 15}me señaló a mí como principal peligro.\n"
	.string "Le habló de nuestros planes para\l"
	.string "intentar derrocarle. Aunque nunca\l"
	.string "llegó a mencionar el PROYECTO MEWTWO,\l"
	.string "sí que me culpó de conspirar\l"
	.string "incluso tras la guerra.$"

RocketHideout_8F_Mision_Silph_text_33:
.string "LANCE no tardó en lanzar contra mi\n"
	.string "persona una campaña de desprestigio.\l"
	.string "A pesar de haber dado todo por\l"
	.string "mantener KANTO en manos de sus\l"
	.string "habitantes, LANCE logró convencer\l"
	.string "a la opinión pública de que yo era\l"
	.string "el malo, y él el salvador.\l"
	.string "Según la versión oficial, LANCE solo se\l"
	.string "vio obligado a intervenir después de un\l"
	.string "descarado intento de Golpe de Estado por\l"
	.string "mi parte, tras revalidar mi título de\l"
	.string "CAMPEÓN.$"

RocketHideout_8F_Mision_Silph_text_34:
.string "Esto, por supuesto, es una absoluta\n"
	.string "estupidez y un sin sentido para\l"
	.string "cualquiera que haya vivido la guerra.\l"
	.string "Pero{PAUSE 15}…{PAUSE 15} una mentira repetida\l"
	.string "mil veces acaba siendo verdad, por puro\l"
	.string "desgaste han conseguido ir difuminando\l"
	.string "la realidad, hasta el punto en que\l"
	.string "incluso aquellos presentes, hoy dudan\l"
	.string "dudan de lo que realmente vivieron.$"

RocketHideout_8F_Mision_Silph_text_36:
.string "Desde ese entonces, todo lo asociado a\n"
	.string "mi nombre, en su día uno de los más\l"
	.string "prestigiosos de KANTO, se convirtió\l"
	.string "en la mayor deshonra y vergüenza.$"

RocketHideout_8F_Mision_Silph_text_37:
.string "De este modo, y así las cosas,\n"
	.string "cuando un poder te somete de esta\l"
	.string "forma, siendo imposible discutirle\l"
	.string "mediante la justicia, solo queda\l"
	.string "reunir un poder aún mayor que el\l"
	.string "suyo, para así devolverle el favor\l"
	.string "con la misma moneda.$"

RocketHideout_8F_Mision_Silph_text_37.1:
.string "Bajo esa premisa mantuve vivo al TEAM\n"
	.string "ROCKET, y bajo ella sigue a día de hoy.$"

RocketHideout_8F_Mision_Silph_text_38:
.string "He ahí la razón de todas estas\n"
	.string "zonas de investigación, el porqué\l"
	.string "os he mandado a donde habitan las AVES,\l"
	.string "y el porqué reunimos todo el dinero\l"
	.string "posible para invertir en proyectos.\l"
	.string "Si el propio sistema hace que sea\l"
	.string "imposible prosperar de forma legítima,\l"
	.string "el tomarte la justicia por tu mano\l"
	.string "es casi un deber acorde a todo aquel\l"
	.string "al que aún le queden principios.$"

RocketHideout_8F_Mision_Silph_text_39:
.string "Todo lo que el TEAM ROCKET ha\n"
	.string "buscado en este tiempo ha sido el\l"
	.string "tratar de reunir un poder suficiente\l"
	.string "como para derrocar a LANCE, y acabar\l"
	.string "con su tiranía enmascarada.\l"
	.string "Por eso aparentamos ser una organización\l"
	.string "endeble y torpe, preocupada por temas\l"
	.string "triviales como el dinero o el robo de\l"
	.string "POKÉMON: nada más lejos de la realidad,\l"
	.string "con ello lo que conseguimos es que LANCE\l"
	.string "no centre todas sus energías en\l"
	.string "aplastarnos, pues no nos ve como una\l"
	.string "amenaza seria{PAUSE 25}…{PAUSE 25}aún.$"

RocketHideout_8F_Mision_Silph_text_40:
.string "No podía contaros todo esto en\n"
	.string "mejor momento, ya que nuestra\l"
	.string "próxima misión, la de todo el TEAM\l"
	.string "ROCKET, está relacionada de forma\l"
	.string "directa con todo esto.$"

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
.string "PROTÓN: Un plan brillante, señor.$"

RocketHideout_8F_Mision_Silph_text_52:
.string "GIOVANNI: Que ya está en marcha, en\n"
	.string "estos momentos los puntos de control\l"
	.string "con AZAFRÁN habrán sido tomados.\l"
	.string "Prepárate, PROTÓN, formarás parte de\l"
	.string "los efectivos que despejen el camino.$"

RocketHideout_8F_Mision_Silph_text_53:
.string "PROTÓN: A la orden, JEFE.$"

RocketHideout_8F_Mision_Silph_text_54:
.string "GIOVANNI: ANDRA y {PLAYER}, confío\n"
	.string "en vuestra capacidad como entrenadores.\l"
	.string "SILPH supondrá un nuevo reto para\l"
	.string "a probaros, dicen que su seguridad\l"
	.string "es impenetrable: quiero que os\l"
	.string "encargéis de demostrar lo contrario.$"

RocketHideout_8F_Mision_Silph_text_55:
.string "ANDRA: No le fallaremos, JEFE.$"

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
.string "AZUL: Así que tú también, GIOVANNI\n"
	.string "nos ha hecho también venir a ANDRA\l"
	.string "y a mí, espero que sea importante\l"
	.string "porque únicamente me queda una\l"
	.string "MEDALLA DE GIMNASIO para completar\l"
	.string "las 8.$"

RocketHideout_8F_Mision_Gimnasios_texto_2:
.string "GIOVANNI: ANDRA, {PLAYER}, AZUL{PAUSE 15}…{PAUSE 15}\n"
	.string "Como sabéis, tenemos la MASTER BALL en\l"
	.string "nuestro poder, con ella podremos\l"
	.string "capturar a cualquier POKÉMON.\l"
	.string "Incluido{PAUSE 25}…{PAUSE 25} quien ya sabéis{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Gimnasios_texto_3:
.string "Más aún, gracias a las muestras de\n"
	.string "ARTICUNO, ZAPDOS y MOLTRES\l"
	.string "recogidas por vosotros, hemos\l"
	.string "logrado clonar con éxito a estos\l"
	.string "legendarios POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_4:
.string "Por otro lado, FUJI ha hablado con\n"
	.string "BLAINE y le ha puesto al\l"
	.string "corriente, BLAINE fue uno de los\l"
	.string "científicos que trabajó en el\l"
	.string "proyecto MEW, y creemos que tiene\l"
	.string "idea de dónde puede estar MEWTWO{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Gimnasios_texto_5:
.string "AZUL: Disculpe GIOVANNI, ¿MEWTWO?\n"
	.string "Nunca había oído de tal POKÉMON.$"

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
.string "Gracias, ALTO RANGO.\n"
	.string "Puedes retirarte.$"

RocketHideout_8F_Mision_Gimnasios_texto_14:
.string "ALTO RANGO: Señor{PAUSE 15}…{PAUSE 15}\n"
	.string "Ejecutivos{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_15:
.string "ANDRA: ¡Maldito BLAINE! ¡Nos ha vendido\n"
	.string "a todos! FUJI tenía la certeza de\l"
	.string "que seguía siendo fiel a nosotros.\l"
	.string "Si LANCE supiera lo de MEWTWO, ¿qué\l"
	.string "podría llegar a pasar?$"

RocketHideout_8F_Mision_Gimnasios_texto_16:
.string "GIOVANNI: No, ANDRA.\n"
	.string "Hemos de confiar en que, al igual que\l"
	.string "OAK, se ha guardado el secreto. LANCE\l"
	.string "con MEWTWO en su poder sería la\l"
	.string "mayor catástrofe en la historia de\l"
	.string "esta región.$"

RocketHideout_8F_Mision_Gimnasios_texto_17:
.string "Habiéndonos empujado hasta este\n"
	.string "extremo, solo nos queda resolver\l"
	.string "esto a la antigua, de modo que una\l"
	.string "LIGA sin LEGENDARIOS{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_18:
.string "ANDRA, {PLAYER}, ambos habéis\n"
	.string "demostrado ser extraordinarios\l"
	.string "entrenadores, que {PLAYER} haya\l"
	.string "sido capaz de derrotar a BRUNO es\l"
	.string "prueba de que puede competir\l"
	.string "contra los mejores{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_19:
.string "Los dos, junto con AZUL, seréis\n"
	.string "candidatos a haceros con el título\l"
	.string "de la LIGA POKÉMON.$"

RocketHideout_8F_Mision_Gimnasios_texto_20:
.string "Reuniréis las 8 MEDALLAS DE\n"
	.string "GIMNASIO, y partiréis hacia la\l"
	.string "MESETA AÑIL, sin trampas, sin\l"
	.string "atajos de LEGENDARIOS{PAUSE 25}…{PAUSE 25} usaréis los\l"
	.string "POKÉMON que lleváis entrenando y\l"
	.string "criando desde que entrásteis a\l"
	.string "formar parte del TEAM ROCKET.$"

RocketHideout_8F_Mision_Gimnasios_texto_21:
.string "ANDRA: Pero, señor, creía que los\n"
	.string "ROCKET no podían enfrentar a los\l"
	.string "LÍDERES DE GIMNASIO por MEDALLAS.$"

RocketHideout_8F_Mision_Gimnasios_texto_22:
.string "GIOVANNI: Y así es ANDRA, vuestra\n"
	.string "condición de ROCKET está entre los\l"
	.string "casos de entrenadores sin\l"
	.string "LICENCIA, que es lo que\l"
	.string "verdaderamente se necesita para\l"
	.string "competir por las MEDALLAS, se da\l"
	.string "por hecho que un ROCKET no tiene\l"
	.string "licencia, y por ello se os echa de\l"
	.string "los GIMNASIOS, por no tener\l"
	.string "LICENCIA, realmente no por ser\l"
	.string "un ROCKET.$"

RocketHideout_8F_Mision_Gimnasios_texto_23:
.string "GIOVANNI: Aquí tenéis, totalmente\n"
	.string "legales, no os podrán poner\l"
	.string "ninguna traba para entrar a\l"
	.string "cualquier GIMNASIO.$"

RocketHideout_8F_Mision_Gimnasios_texto_23.1:
.string "¡OBTUVISTE UNA LICENCIA ENTRENADOR DE\n"
	.string "MANOS DE GIOVANNI!$"

RocketHideout_8F_Mision_Gimnasios_texto_24:
.string "Aún con esto, por supuesto que pueden\n"
	.string "negaros entrar por ser un ROCKET,\l"
	.string "lo que haréis será llevar nuestro\l"
	.string "uniforme -a modo de mofa-,\l"
	.string "riéndoos del TEAM ROCKET y\l"
	.string "ridiculizándolo, nuestro supuesto\l"
	.string "fracaso en SILPH encajará con ello\l"
	.string "perfectamente.$"

RocketHideout_8F_Mision_Gimnasios_texto_25:
.string "ANDRA: Se olerán algo raro, ¡y el\n"
	.string "LT.SURGE ya nos ha visto varias veces!$"

RocketHideout_8F_Mision_Gimnasios_texto_26:
.string "GIOVANNI: El LT.SURGE cree que nadie\n"
	.string "tiene posibilidad ante LANCE, y además,\l"
	.string "su código bélico le impedirá negarle a\l"
	.string "{PLAYER} un combate.$"

RocketHideout_8F_Mision_Gimnasios_texto_27:
.string "AZUL, ¿sabes cuantas MEDALLAS\n"
	.string "tiene ahora mismo ROJO?$"

RocketHideout_8F_Mision_Gimnasios_texto_28:
.string "AZUL: Creo que 6, después de SILPH\n"
	.string "fue directo al GIMNASIO de\l"
	.string "AZAFRÁN, debe de estar ya rumbo a\l"
	.string "ISLA CANELA.$"

RocketHideout_8F_Mision_Gimnasios_texto_29:
.string "GIOVANNI: Mmm{PAUSE 25}…{PAUSE 25}\n"
	.string "No hay tiempo que perder, vuestra\l"
	.string "máxima prioridad debe ser ganar\l"
	.string "esas 7 MEDALLAS de GIMNASIO cuanto\l"
	.string "antes, en cuanto a ti AZUL, ya que\l"
	.string "te falta una, creo que eso tiene\l"
	.string "solución{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Gimnasios_texto_30:
.string "-GIOVANNI LE ENTREGÓ A AZUL LA\n"
	.string "MEDALLA TIERRA.-$"

RocketHideout_8F_Mision_Gimnasios_texto_31:
	.string "AZUL: ¿¡Usted es el último LÍDER!?$"

RocketHideout_8F_Mision_Gimnasios_texto_32:
.string "GIOVANNI: A veces sí, a veces no,\n"
	.string "depende de cuando sea conveniente,\l"
	.string "y ahora lo es.$"

RocketHideout_8F_Mision_Gimnasios_texto_33:
.string "AZUL: Con permiso, pero tengo que\n"
	.string "prepararme a conciencia para la\l"
	.string "LIGA POKÉMON, no le decepcionaré.$"

RocketHideout_8F_Mision_Gimnasios_texto_34:
.string "ANDRA, {PLAYER}{PAUSE 15}…{PAUSE 15} demostrad cuan\n"
	.string "lejos puede llegar un ROCKET dedicado,\l"
	.string "disciplinado y comprometido.\l"
	.string "Derrotad a todos los LÍDERES de KANTO,\l"
	.string "y os daré la última MEDALLA, de igual\l"
	.string "forma que he hecho con AZUL.$"

RocketHideout_8F_Mision_Gimnasios_texto_35:
.string "ANDRA: ¡No puedo aguantar más!\n"
	.string "¡Esos LÍDERES DE GIMNASIO van a\l"
	.string "caer como moscas!\l"
	.string "¡Por fin podré enfrentarme a la\l"
	.string "supuesta ÉLITE de la región!$"

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
	.string "¿Dónde?\l"
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
.string "ANDRA: Y eso fue todo lo que\n"
	.string "sucedió, señor.$"

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
.string "¡¡ANDRA!!\n"
	.string "¡¡PROTÓN!!$"

RocketHideout8F_Mision_Mansion_Oak_Text_17:
.string "Llamad al ADMINISTRADOR JEFE\n"
	.string "ATLAS, al ADMINISTRADOR PETREL, al\l"
	.string "actual CAMPEÓN AZUL, y convocad al\l"
	.string "resto de ALTOS RANGOS de la\l"
	.string "organización, debemos de\l"
	.string "asegurarnos que, sea como sea, OAK\l"
	.string "y BLAINE no salgan de la MANSIÓN\l"
	.string "POKÉMON, y de que {PLAYER} no corra\l"
	.string "ningún peligro.$"

RocketHideout8F_Mision_Mansion_Oak_Text_18:
.string "PROTÓN: ¡A LA ORDEN, SEÑOR!$"

RocketHideout8F_Mision_Mansion_Oak_Text_19:
.string "GIOVANNI: Ve, {PLAYER}.\p"
	.string "Demuéstrale a OAK de dónde\n"
	.string "realmente proviene el poder\l"
	.string "de un ENTRENADOR.$"

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
.string "GIOVANNI: Te espero en la SALA DEL\n"
	.string "POTENCIAL MÁXIMO ALCANZABLE.$"

RocketHideout8F_Mision_Johto_Text_27.1:
.string "¡¡{PLAYER} obtuvo un MAPA de\n"
	.string "manos de GIOVANNI!$"

RocketHideout8F_Mision_Johto_Text_18.1:
.string "¡¡ANDRA fue ascendida a ADMIN\n"
	.string "JEFE EN LA REGION DE HOENN!!$"

RocketHideout8F_Mision_Johto_Text_29.1:
.string "¡¡{PLAYER} fue ascendido a ADMIN\n"
	.string "JEFE EN LA REGION DE JOHTO!!$"

RocketHideout8F_Mision_Johto_Text_1:
.string "ANDRA: ¡{PLAYER}!\n"
	.string "¡Eres incansable!\p"
	.string "Yo ya estaba lista para entrar por\n"
	.string "la fuerza a la MANSIÓN POKÉMON.\p"
	.string "¡Y vas tú y derrotas a todos antes!$"

RocketHideout8F_Mision_Johto_Text_2:
.string "GIOVANNI: Ambos le habéis dado al\n"
	.string "TEAM ROCKET más de lo que nadie\l"
	.string "pudiera esperar, vuestro nivel\l"
	.string "como ENTRENADORES se sale de\l"
	.string "cualquier rango que pueda\l"
	.string "ofreceros en el TEAM ROCKET.\p"
	.string "Es por ello que toca hablar de\n"
	.string "vuestro futuro inmediato, algo que\l"
	.string "os suponga un reto de verdad y\l"
	.string "expanda la organización aún más,\l"
	.string "pero antes{PAUSE 15}…{PAUSE 15}\p"
	.string "Vuestras recompensas.$"

RocketHideout8F_Mision_Johto_Text_3:
	.string "¡Te has embolsado 1.500.000¥!$"

RocketHideout8F_Mision_Johto_Text_4:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Johto_Text_5:
.string "¿Estás segura de que no los\n"
	.string "quieres, ANDRA?$"

RocketHideout8F_Mision_Johto_Text_6:
.string "ANDRA: Segura, no los necesito\n"
	.string "para formar mi mejor equipo.$"

RocketHideout8F_Mision_Johto_Text_7:
.string "GIOVANNI: Es tu voluntad,\n"
	.string "que así sea.$"

RocketHideout8F_Mision_Johto_Text_8:
.string "Debes saber, {PLAYER}, que cuando\n"
	.string "devolvimos a las BESTIAS DE JOHTO\l"
	.string "a su lugar de origen, nos tomamos\l"
	.string "la libertad de analizar sus ADN.\p"
	.string "El resultado es claro: hemos podido\n"
	.string "clonarlos al igual que hicimos con\l"
	.string "las AVES DE KANTO.$"

RocketHideout8F_Mision_Johto_Text_9:
.string "Como uno de los ADMINISTRADORES, te\n"
	.string "corresponde un ejemplar de cada.\p"
	.string "Espero que no te traigan malos\n"
	.string "recuerdos de tu combate con LANCE,\l"
	.string "recuerda que son clones.$"

RocketHideout8F_Mision_Johto_Text_10:
.string "¡¡OBTUVISTE UN RAIKOU AL NV.70!!$"

RocketHideout8F_Mision_Johto_Text_11:
.string "¡¡OBTUVISTE UN ENTEI AL NV.70!!$"

RocketHideout8F_Mision_Johto_Text_12:
.string "¡¡OBTUVISTE UN SUICUNE AL NV.70!!$"

RocketHideout8F_Mision_Johto_Text_13:
.string "Y ahora, ponéos cómodos, tenemos\n"
	.string "mucho de lo que hablar.$"

RocketHideout8F_Mision_Johto_Text_14:
.string "Con MEWTWO en nuestro poder,\n"
	.string "clones de las AVES DE KANTO y\l"
	.string "BESTIAS DE JOHTO, el TEAM ROCKET\l"
	.string "ha alcanzado un poder mayor del\l"
	.string "que hace meses podríamos soñar.$"
	

RocketHideout8F_Mision_Johto_Text_15:
.string "OAK detenido, LANCE atado{PAUSE 25}…{PAUSE 25}\n"
	.string "KANTO está totalmente bajo nuestro\l"
	.string "control, al fin podremos devolver\l"
	.string "a la región todo el esplendor que\l"
	.string "tuvo antes de la guerra.\p"
	.string "Eso no requerirá más que de tiempo,\n"
	.string "es por ello que vuestros destinos se\l"
	.string "alejan de aquí.$"

RocketHideout8F_Mision_Johto_Text_16:
.string "ANDRA: ¿Dónde iremos, señor?$"

RocketHideout8F_Mision_Johto_Text_17:
.string "Yo dedicaré todos mis esfuerzos en\n"
	.string "reconstruir KANTO como es debido.\p"
	.string "Ahora que cuento con ROCKET\n"
	.string "como vosotros, creo que ha llegado\l"
	.string "el momento de delegar por completo\l"
	.string "mis poderes en nuestras sucursales\l"
	.string "de JOHTO y HOENN.$"

RocketHideout8F_Mision_Johto_Text_18:
.string "¡ANDRA!\n"
	.string "¡A partir de ahora estarás al mando\l"
	.string "del TEAM ROCKET en la región de HOENN!\p"
	.string "¡Quedas ascendida a ADMIN.JEFE\n"
	.string "ROCKET y LÍDER en HOENN!$"

RocketHideout8F_Mision_Johto_Text_19:
.string "ANDRA: ¡Wow!\p"
	.string "¡No puedo creerlo!$"

RocketHideout8F_Mision_Johto_Text_20:
.string "Nuestra sucursal en HOENN aún no\n"
	.string "está construída al 100%, pero\l"
	.string "puedes instalar tus cosas allí.\p"
	.string "Lamentablemente, la distancia entre\n"
	.string "regiones nos impide, por el momento,\l"
	.string "emplear la tecnología del teletransporte.\p"
	.string "Pero no te preocupes, tienes un\n"
	.string "Ferry en CARMÍN esperándote.$"

RocketHideout8F_Mision_Johto_Text_21:
.string "Sé que te encantan la mitología y\n"
	.string "los POKÉMON ANCESTRALES, ANDRA.\p"
	.string "Es por ello que te envío a HOENN,\n"
	.string "poco a poco desenpolvaremos los\l"
	.string "misterios de esa región, que son\l"
	.string "muchos.$"

RocketHideout8F_Mision_Johto_Text_22:
.string "ANDRA: Supongo que se refiere a esas\n"
	.string "RUINAS que pueden verse en el DESIERTO,\l"
	.string "cerca de PUEBLO AZULIZA, y en RUTA 120.$"

RocketHideout8F_Mision_Johto_Text_23:
.string "GIOVANNI: Veo que no hace falta\n"
	.string "que te diga nada más, por tu\l"
	.string "parte, eso es todo, ANDRA.\p"
	.string "HOENN te espera.$"

RocketHideout8F_Mision_Johto_Text_24:
.string "ANDRA: No creas que usaré en tu contra\n"
	.string "LEGENDARIOS exóticos de HOENN, para\l"
	.string "nuestro próximo combate, {PLAYER}.\p"
	.string "Te dije que llegaría a ser la mejor\n"
	.string "con NO LEGENDARIOS, y lo mantengo.\p"
	.string "¡Espero que algún día visites HOENN,\n"
	.string "tal vez yo me pase por JOHTO, si\l"
	.string "la situación lo requiere!$"

RocketHideout8F_Mision_Johto_Text_25:
.string "GIOVANNI: Bien, {PLAYER}.\p"
	.string "Sabes que quedaron muchos cabos sueltos,\n"
	.string "que no pudieron resolverse por la\l"
	.string "irrupción de OAK, pero que debes\l"
	.string "saber antes de viajar a JOHTO.$"

RocketHideout8F_Mision_Johto_Text_26:
.string "En primer lugar, toma esto.$"

RocketHideout8F_Mision_Johto_Text_27:
.string "Con este MAPA podrás ubicarte\n"
	.string "como es debido dentro de toda una\l"
	.string "región totalmente nueva para ti.$"

RocketHideout8F_Mision_Johto_Text_28:
.string "Ahora, este no es el lugar más\n"
	.string "adecuado para explicarte los objetivos\l"
	.string "tras los que irás en JOHTO.\p"
	.string "Ese lugar está en la sala de al lado, en\n"
	.string "nuestra ZONA DE INVESTIGACIÓN ACERCA\l"
	.string "DEL MÁXIMO POTENCIAL ALCANZABLE.\l"
	.string "Al fin hemos abierto la última de las\l"
	.string "zonas, y es allí donde te espero, {PLAYER}.\p"
	.string "En ese lugar entenderás el porqué de\n"
	.string "muchos de los objetivos tras los que\l"
	.string "irás en JOHTO.$"

RocketHideout8F_Mision_Johto_Text_29:
.string "GIOVANNI: Una última cosa, {PLAYER}.\p"
	.string "¡A partir de ahora estarás al mando\n"
	.string "del TEAM ROCKET en la región de JOHTO!\p"
	.string "¡Quedas ascendido a ADMIN.JEFE\n"
	.string "ROCKET y LÍDER en JOHTO!$"

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
removeobject 6
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
.string "GIOVANNI: Como te decía, ANDRA.\p"
	.string "A partir de ahora, las RUINAS ALFA\n"
	.string "deben estar bajo máxima vigilancia.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2:
.string "GIOVANNI: {PLAYER}, ¿te das cuenta\n"
	.string "del POKÉMON que has enfrentado?\p"
	.string "Nuestros científicos han fijado\n"
	.string "su ATAQUE ESPECIAL en 190 puntos.\p"
	.string "Hasta ahora, creíamos que los 180\n"
	.string "Además, su reparto, con solo 50\l"
	.string "puntos en ATAQUE, para un total de\l"
	.string "de 675 puntos, es inmejorable.\p"
	.string "Este POKÉMON es incluso superior en\n"
	.string "números a LEGENDARIOS MAYORES como\l"
	.string "LUGIA y HO-OH. Los límites a los\l"
	.string "que creíamos que podían llegar los\l"
	.string "POKÉMON convencionales acaban de\l"
	.string "expandirse, y la información que\l"
	.string "obtendremos de este POKÉMON nos\l"
	.string "ayudará a perfeccionar aún más el\l"
	.string "ATAQUE ESPECIAL de nuevos prototipos\l"
	.string "de MEWTWO.\p"
	.string "Tal vez{PAUSE 15}…{PAUSE 15} logremos incluso pasar de\n"
	.string "esos 190 puntos.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3:
.string "Pero no estamos aquí para eso.\n"
	.string "Ya he puesto al día a ANDRA, y le\l"
	.string "he pedido que esté atenta a todo\l"
	.string "lo que pueda darse en RUINAS ALFA.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4:
.string "No sabemos lo que ese ENTRENADOR\n"
	.string "pretende, pero lo que busca debe\l"
	.string "de estar en ese lugar.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5:
.string "Sin embargo, nos falta información.\n"
	.string "Es aquí donde entras tú, {PLAYER};\l"
	.string "deberás visitar el CULTO LAVANDA una\l"
	.string "vez más, explicarle la situación a su\l"
	.string "LÍDER. Tal vez él sepa qué hacer.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6:
.string "Eso es todo por ahora, ATLAS y yo\n"
	.string "estamos muy ocupados, poniendo en\l"
	.string "marcha todos los puntos hablados\l"
	.string "en TRIGAL, pero no dudaremos en\l"
	.string "intervenir si es necesario.\p"
	.string "Espero noticias vuestras.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7:
.string "ANDRA: ¡A la orden, señor!$"

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
.string "¿Quieres ir a tu despacho en JOHTO para\n"
	.string "ver los documentos sobre las nuevas\l"
	.string "misiones?$"

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
.string "GIOVANNI: ¡{PLAYER}!\p"
	.string "¡Eres extraordinario, pudiste con los 3\n"
	.string "POKÉMON más poderosos de la historia!\p"
	.string "¿Entiendes el motivo de tu victoria?\p"
	.string "En el momento en que la inmortalidad de\n"
	.string "tales POKÉMON se vio sujeta a las reglas\l"
	.string "que rigen el combate POKÉMON entre dos\l"
	.string "ENTRENADORES, sus poderes dejaron de\l"
	.string "ser infinitos y, por tanto, vulnerables.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_2:
.string "Ese ENTRENADOR quiso usarlos como\n"
	.string "POKÉMON convencionales, y ahí\l"
	.string "perdieron su esencia.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_3:
.string "No obstante, solo un ENTRENADOR que ha\n"
	.string "alcanzado un estado de equilibrio sin\l"
	.string "igual con su equipo, podría llegar a\l"
	.string "batirles, aún siendo un combate\l"
	.string "POKÉMON. Tú eras el único que podía\l"
	.string "hacerlo, {PLAYER}{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Lago_Furia_Texto_6:
.string "Como ya es habitual, después de cada\n"
	.string "gran acontecimiento, os reúno aquí\l"
	.string "para hacer balance de todo…{PAUSE 25}\p"
	.string "Y mirar hacia el futuro.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_7:
.string "Antes de nada, vuestras recompensas.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_8:
	.string "¡Te has embolsado 2.000.000¥!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_9:
.string "Y no solo eso, gracias a todo el revuelo\n"
	.string "causado por ZEUS, y la entrada a\l"
	.string "RUINAS ALFA, pudimos extraer los ADN\l"
	.string "de LUGIA y HO-OH. No de sus formas\l"
	.string "primigenias, pero sí las conocidas\l"
	.string "por la cultura de JOHTO.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_10:
.string "ANDRA ve deshonroso usar esta clase de\n"
	.string "POKÉMON, de modo que solo tú recibirás\l"
	.string "ejemplares clonados, {PLAYER}.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_11:
.string "¡¡OBTUVISTE UN LUGIA AL NV.90!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_12:
.string "¡¡OBTUVISTE UN HO-OH AL NV.90!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_13:
.string "ANDRA: ¡{PLAYER}!\p"
	.string "¡No creas que no sabré cómo lidiar con\n"
	.string "ellos si los usas en mi contra!\p"
	.string "Ya derroté al HO-OH dorado, una forma\n"
	.string "aún más poderosa que esos clones.\p"
	.string "¡No lo olvides!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_14:
.string "GIOVANNI: Bien. Ahora, hablemos de\n"
	.string "vuestras futuras misiones.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_15:
.string "{PLAYER} hizo un trabajo excelente\n"
	.string "recopilando información sobre los\l"
	.string "FUERTE VÍNCULO de JOHTO.\p"
	.string "Toda esa información nos ha servido\n"
	.string "para optimizar y expandir aún más\l"
	.string "el poder de futuros prototipos, de\l"
	.string "igual modo que se hizo con MEWTWO\l"
	.string "en su día.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_16:
.string "No obstante, JOHTO es mucho más que\n"
	.string "sus pueblos y ciudades, a diferencia de\l"
	.string "KANTO, cuenta con muchos lugares aún\l"
	.string "por explorar.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_17:
.string "Tenemos serias sospechas de que estos\n"
	.string "lugares esconden POKÉMON únicos,\l"
	.string "cuyos datos podrían seguir aportando\l"
	.string "información fundamental para nuestras\l"
	.string "investigaciones.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_18:
.string "La apertura de la estación que conecta\n"
	.string "TRIGAL con AZAFRÁN, y la demolición de\l"
	.string "la TORRE POKÉMON se aproximan, pero a\l"
	.string "la espera de estos acontecimientos,\l"
	.string "vuestra misión será seguir expandiendo\l"
	.string "lo que sabemos sobre los POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_19:
.string "Por ello, os daré algo que deberíais\n"
	.string "haber tenido hace mucho.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_20:
.string "¡OBTUVISTE UNA POKÉDEX!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_21:
.string "Cortesía de OAK. Gracias a su invento,\n"
	.string "no solo se enviará la información de\l"
	.string "todo nuevo POKÉMON que encontréis a\l"
	.string "nuestra base de datos, también\l"
	.string "quedará registrada para uso propio.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_22:
.string "ANDRA: De modo que esto es lo que ese\n"
	.string "malcriado de ROJO usaba, sé de varios\l"
	.string "POKEMANÍACOS que darían todo lo que\l"
	.string "tienen por un artefacto como este.\p"
	.string "Nosotros le daremos el mejor uso\n"
	.string "posible, ¿verdad, {PLAYER}?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_23:
.string "¿Quiere decir entonces que no regreso a\n"
	.string "HOENN, señor?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_24:
.string "GIOVANNI: Así es, ANDRA. Por ahora te\n"
	.string "quedarás en JOHTO y harás la misma\l"
	.string "tarea que ha estado haciendo\l"
	.string "{PLAYER}. Sois los dos entrenadores\l"
	.string "más fuertes de toda la organización, y\l"
	.string "una misión así, en la que podéis\l"
	.string "enfrentaros a cualquier cosa, requiere\l"
	.string "de la mayor preparación posible.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_25:
.string "ANDRA: ¿Y por dónde empezamos?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_26:
.string "GIOVANNI: Os he dejado documentos, con\n"
	.string "una explicación detallada sobre cada\l"
	.string "una de las misiones que abordaréis, en\l"
	.string "vuestros respectivos despachos. No te\l"
	.string "preocupes, ANDRA, ya hay conexión vía\l"
	.string "teletransporte con la BASE en HOENN.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_27:
.string "El orden en el que decidáis hacerlas es\n"
	.string "cosa vuestra, aunque me gustaría que\l"
	.string "indagárais lo máximo posible en cada\l"
	.string "una de ellas. Una vez investigado lo\l"
	.string "suficiente, regresad a mi despacho.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_28:
.string "ANDRA: ¡Genial, vamos a explorar JOHTO!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_29:
.string "¿Has oído, {PLAYER}? Los lugares más\n"
	.string "recónditos de JOHTO nos esperan, ¿qué\l"
	.string "misterios estarán esperándonos?$"

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
.string "ANDRA: ¡Ja! ¡Sabía que aparecerías\n"
	.string "pronto, {PLAYER}! ¡Yo acabo de\l"
	.string "completar también mis misiones!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_2:
.string "GIOVANNI: Nuestra base de datos ha\n"
	.string "recogido información muy valiosa de\l"
	.string "vuestras expediciones, pero me\l"
	.string "gustaría oíros a vosotros.\p"
	.string "Contadme todos los detalles{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_3:
.string "Ya veo{PAUSE 25}…{PAUSE 25} Así que JOHTO cuenta con\n"
	.string "varias especies creídas extintas, y\l"
	.string "que habitan en ese gran paraíso que es\l"
	.string "la zona oeste de ORQUÍDEA.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4:
.string "No me extraña, únicamente hay\n"
	.string "catalogadas 100 especies originales de\l"
	.string "JOHTO, un número muy pequeño si lo\l"
	.string "comparamos con las 151 de KANTO, o las\l"
	.string "135 de HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1:
	.string "Por otro lado, ese DRAGÓN SAGRADO{PAUSE 25}…{PAUSE 25}\p"
	.string "ANDRA ya me ha hablado de cómo su\n"
	.string "URSARING evolucionó gracias a la\l"
	.string "PIEDRA SAGRADA.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2:
	.string "La cantidad de POKÉMON a la que pueda\n"
	.string "reaccionar es todo un misterio, enviaré\l"
	.string "a ATLAS a ese lugar para que lo\l"
	.string "investigue y encuentre una. Después,\l"
	.string "nuestros mejores científicos tratarán\l"
	.string "de reproducir ese objeto sagrado, para\l"
	.string "así poder comercializarlo entre los\l"
	.string "mejores ROCKET.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3:
	.string "ANDRA: Oh{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_5:
.string "GIOVANNI: En cuanto a lo de ese tal\n"
	.string "EUSINE, no te preocupes, {PLAYER}, mandaré\l"
	.string "a buscarle. Todo lo que él ha visto y\l"
	.string "vivido en esa pagoda nos será de gran\l"
	.string "utilidad para nuestras investigaciones.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_6:
.string "Lo que realmente me preocupa es tu\n"
	.string "misión en el LAGO DE LA FURIA.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_7:
.string "El resultado ha sido inmejorable, y el\n"
	.string "POKÉMON hallado ahí excepcional. Pero\l"
	.string "esos CIENTÍFICOS{PAUSE 25}…{PAUSE 25} no trabajan para\l"
	.string "nosotros, y aún así parecen perseguir\l"
	.string "objetivos similares a los nuestros.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_8:
.string "ANDRA: Yo también me crucé con\n"
	.string "personajes así en HOENN, en plena\l"
	.string "búsqueda de los REGIS{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_9:
.string "GIOVANNI: Tal y como temía, todo apunta\n"
	.string "a que se trata de DEVON S.A.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_10:
.string "ANDRA: ¿DEVON?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_11:
.string "GIOVANNI: OAK y BLAINE contactaron\n"
	.string "con ellos en el pasado, antes de que\l"
	.string "{PLAYER} les derrotara. Gracias a\l"
	.string "ello obtuvieron la financiación\l"
	.string "necesaria para clonar de nuevo a\l"
	.string "MEWTWO y resucitar a DEOXYS.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_12:
.string "ANDRA: ¿Y{PAUSE 15}…{PAUSE 15}?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_13:
.string "GIOVANNI: Y DEVON accedió, con la\n"
	.string "condición de entregar todo el material\l"
	.string "referente a DEOXYS. Afortunadamente,\l"
	.string "de MEWTWO no dijeron una sola palabra.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_14:
.string "Tal vez sea algo pronto, pero{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_15:
.string "¡{PLAYER}!\p"
	.string "Quiero que acompañes a ANDRA a nuestra\n"
	.string "sucursal en HOENN, y te dé nociones\l"
	.string "generales sobre la región.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_16:
.string "La demolición de TORRE POKÉMON es\n"
	.string "inminente, en este momento ya deben de\l"
	.string "haber evacuado todo para llevarla a\l"
	.string "cabo. Mientras, nada os retiene aquí, y\l"
	.string "nuestra BASE en HOENN es la única que\l"
	.string "aún no has visitado.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_17:
.string "En cuanto TORRE POKÉMON sea demolida,\n"
	.string "comenzará la construcción en tiempo\l"
	.string "récord de la nueva TORRE RADIO.\p"
	.string "Entretanto, os informo de que se\n"
	.string "celebrará la II GRAN REUNIÓN EN\l"
	.string "CIUDAD TRIGAL.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_18:
.string "ANDRA: ¡Wow! Ahora que KANTO y JOHTO\n"
	.string "están a punto de lograr la unión que se\l"
	.string "propuso en la I GRAN REUNIÓN{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_19:
.string "GIOVANNI: Tenemos todo para convertir\n"
	.string "al binomio KANTO-JOHTO en la principal\l"
	.string "potencia del MUNDO POKÉMON.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_20:
.string "ANDRA: Suena{PAUSE 25}…{PAUSE 25} impactante.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_21:
.string "GIOVANNI: Y lo será, ya lo verás cuando\n"
	.string "veas lo que hay por mostrar, pero por el\l"
	.string "momento{PAUSE 25}…{PAUSE 25} Tenéis a vuestra disposición\l"
	.string "el teletransporte que manda a HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_22:
.string "Espero que guíes correctamente a\n"
	.string "{PLAYER} por HOENN, estad atentos a\l"
	.string "mi llamada.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_23:
.string "ANDRA: No se preocupe, {PLAYER} no\n"
	.string "perderá el tiempo allí, ¡seguro!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_24:
.string "Te espero en la entrada a la base de\n"
	.string "HOENN, ¡haré de guía turística!$"

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
.string "????: Logré escapar en el último\n"
	.string "momento, gracias al TELETRANSPORTE\l"
	.string "de mi MAGMORTAR.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_2:
.string "GIOVANNI: {PLAYER}, tu ausencia en\n"
	.string "KANTO-JOHTO te ha impedido enterarte,\l"
	.string "pero el fenómeno se ha sentido en las\l"
	.string "dos regiones: el volcán de ISLA CANELA\l"
	.string "ha estallado, y ha engullido todo a su\l"
	.string "paso.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_3:
.string "BLAINE: El LABORATORIO{PAUSE 35}…{PAUSE 35} la MANSIÓN\n"
	.string "POKÉMON{PAUSE 35}…{PAUSE 35} el GIMNASIO{PAUSE 35}…{PAUSE 35} todo yace ahora\l"
	.string "en el fondo del mar.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_4:
.string "OAK: La cuestión es que, después de la I\n"
	.string "CONFERENCIA DE TRIGAL, continuamos\l"
	.string "con nuestras investigaciones allí.\p"
	.string "Una parte muy importante de nuestros\n"
	.string "últimos proyectos está ahora perdida,\l"
	.string "decenas de metros bajo tierra.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_5:
.string "BLAINE: Por suerte, las zonas\n"
	.string "subterráneas más importantes fueron\l"
	.string "hechas a prueba de todo desastre\l"
	.string "natural. Después de que {PLAYER}\l"
	.string "nos derrotara, construimos\l"
	.string "muchos pisos subterráneos más,\l"
	.string "son como un búnker.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_6:
.string "GIOVANNI: Cabe entonces la posibilidad\n"
	.string "de que no hayan sido destruidos.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_7:
.string "OAK: Debemos comprobarlo, sabes tan\n"
	.string "bien como yo la preciada información\l"
	.string "que guardamos ahí dentro.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_8:
.string "BLAINE: Pero no puede ir cualquiera, la\n"
	.string "erupción habrá liberado a todos los\l"
	.string "prototipos que ahí teníamos en fase\l"
	.string "de prueba.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_9:
.string "GIOVANNI: Estamos de acuerdo, el más\n"
	.string "indicado para realizar esta misión es\l"
	.string "{PLAYER}. Cuenta con experiencia más que\l"
	.string "sobrada en esta clase de situaciones.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_10:
.string "OAK: Así es, te estaré esperando en\n"
	.string "ISLA CANELA, {PLAYER}. Ahí te diré\l"
	.string "exactamente lo que debes hacer.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_11:
.string "BLAINE: Es un alivio tener a un\n"
	.string "ENTRENADOR como tú de nuestro lado,\l"
	.string "espero que puedas recuperar todo lo\l"
	.string "posible de esta catástrofe.$"

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
.string "-{PLAYER} entregó a GIOVANNI el\n"
	.string "DISCO DURO-$"

RocketHideout_8F_Mision_Central_Energia_Texto_2:
.string "GIOVANNI: No esperaba menos de ti,\n"
	.string "{PLAYER}. No hay recompensa que\l"
	.string "pueda igualar la información que\l"
	.string "acabas de recuperar. Hay millones\l"
	.string "invertidos en investigación aquí\l"
	.string "dentro, qué menos que darte unos\l"
	.string "tantos de ellos.$"

RocketHideout_8F_Mision_Central_Energia_Texto_3:
	.string "¡Te has embolsado 2.000.000¥!$"

RocketHideout_8F_Mision_Central_Energia_Texto_4:
.string "Toma esto también, es un proyecto\n"
	.string "proveniente de una región lejana,\l"
	.string "nuestros mejores científicos han\l"
	.string "tenido contacto con él.$"

RocketHideout_8F_Mision_Central_Energia_Texto_5:
.string "¡OBTUVISTE UN SILVALLY AL NV.90!$"

RocketHideout_8F_Mision_Central_Energia_Texto_6:
.string "Al parecer, puede cambiar de tipo en\n"
	.string "función del objeto que lleve equipado.\l"
	.string "En los pisos superiores de la TORRE\l"
	.string "RADIO de LAVANDA se venderán, dentro\l"
	.string "de muy poco podrás entrar, {PLAYER}.$"

RocketHideout_8F_Mision_Central_Energia_Texto_7:
.string "Volviendo al tema de CANELA{PAUSE 25}…{PAUSE 25}\p"
	.string "Agradecería que no hablaras con nadie\n"
	.string "sobre lo que hayas podido ver ahí, ni\l"
	.string "siquiera con ANDRA.$"

RocketHideout_8F_Mision_Central_Energia_Texto_8:
.string "Muchos de los prototipos que ahí\n"
	.string "dejamos están en fase de prueba, son\l"
	.string "inestables y están por perfeccionar.\p"
	.string "Aún así, habrás sentido el tremendo\n"
	.string "potencial de algunos.$"

RocketHideout_8F_Mision_Central_Energia_Texto_9:
.string "Hasta que no estemos seguros de tener\n"
	.string "algo grande de verdad, que podamos\l"
	.string "controlar con total garantía{PAUSE 25}…{PAUSE 25} esos\l"
	.string "proyectos son confidenciales.\p"
	.string "¿Me entiendes, {PLAYER}?$"

RocketHideout_8F_Mision_Central_Energia_Texto_10:
.string "Ahora, hablemos de tu próxima misión:\n"
	.string "finiquitar el asunto de las vías\l"
	.string "hacia AZAFRÁN.$"

RocketHideout_8F_Mision_Central_Energia_Texto_11:
.string "Al parecer, ese extraño POKÉMON ha\n"
	.string "vuelto, y está interfiriendo con la\l"
	.string "fase final de la construcción.$"

RocketHideout_8F_Mision_Central_Energia_Texto_12:
.string "Me temo que no queda otra que\n"
	.string "capturarlo para que definitivamente\l"
	.string "no cause más problemas.$"

RocketHideout_8F_Mision_Central_Energia_Texto_13:
.string "De modo que tu misión será, a las\n"
	.string "vísperas de la II GRAN REUNIÓN en\l"
	.string "TRIGAL, hacerte cargo de ese POKÉMON.$"

RocketHideout_8F_Mision_Central_Energia_Texto_14:
.string "Yo partiré ya hacia TRIGAL, debo montar\n"
	.string "los preparativos de la reunión, junto\l"
	.string "con el PRESIDENTE.$"

RocketHideout_8F_Mision_Central_Energia_Texto_15:
.string "Es el momento de ir recogiendo los\n"
	.string "frutos de nuestro trabajo, {PLAYER}.\l"
	.string "En muy poco tiempo estamos viviendo\l"
	.string "grandes transformaciones en ambas\l"
	.string "regiones, esas mismas que llevan 1 año\l"
	.string "fraguándose, desde la I GRAN REUNIÓN o\l"
	.string "incluso antes.$"



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
.string "GIOVANNI: ¡{PLAYER}! Debimos estar\n"
	.string "ahí ATLAS y yo. Cuéntame todo, ¿y\l"
	.string "ANDRA?$"

RocketHideout_8F_Final_DLC_Texto_2:
.string "Ya veo. Debimos suponer que el ambiente\n"
	.string "y rol de DEVON eran muy atractivos para\l"
	.string "alguien como el ayudante de BILL.\l"
	.string "Supongo que tenía razón, nunca le\l"
	.string "prestamos la atención suficiente.$"

RocketHideout_8F_Final_DLC_Texto_3:
.string "En cuanto a ANDRA{PAUSE 25}…{PAUSE 25} tal vez sea mejor\n"
	.string "así. Después de todo, puede que su\l"
	.string "búsqueda concluya en un\l"
	.string "descubrimiento más importante que\l"
	.string "todas las investigaciones que estamos\l"
	.string "llevando a cabo{PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Final_DLC_Texto_4:
.string "Por otro lado, DEVON ha movido ficha.\p"
	.string "Esto no cambia en nada nuestros\n"
	.string "planes, a pesar de que sepan todo lo\l"
	.string "hablado en la II GRAN REUNIÓN.$"

RocketHideout_8F_Final_DLC_Texto_5:
.string "Ante la ausencia de ANDRA, nuestra BASE\n"
	.string "de HOENN ha quedado sin un LÍDER, tú\l"
	.string "estarás al mando. Después de lo de\l"
	.string "RUINAS ALFA, todos los POKÉMON\l"
	.string "LEGENDARIOS que allí se concentraron\l"
	.string "volvieron a su lugar de origen.\l"
	.string "Esto implica que los 3 LEGENDARIOS de\l"
	.string "HOENN: KYOGRE, GROUDON y RAYQUAZA,\l"
	.string "estarán allí, uno de tus objetivos será\l"
	.string "encontrarlos, para poder estudiarlos.\p"
	.string "Sin embargo{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Final_DLC_Texto_6:
.string "Tu misión primordial será obtener toda\n"
	.string "la información posible sobre DEVON.$"

RocketHideout_8F_Final_DLC_Texto_7:
.string "Dónde opera, en qué lugar asienta sus\n"
	.string "laboratorios de investigación, cuáles\l"
	.string "son sus proyectos y ambiciones{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Final_DLC_Texto_8:
.string "OAK vino poco antes que tú, fue el\n"
	.string "primero en ponerme al tanto.$"

RocketHideout_8F_Final_DLC_Texto_9:
.string "Se enfrentó personalmente a su\n"
	.string "PRESIDENTE, y fue derrotado. Esto al\l"
	.string "tiempo que sus EJECUTIVOS contuvieron\l"
	.string "a BILL, ANDRA y ELM.$"

RocketHideout_8F_Final_DLC_Texto_10:
.string "No hay duda de que cuentan con\n"
	.string "recursos, y conocen bien el arte del\l"
	.string "combate POKÉMON.$"

RocketHideout_8F_Final_DLC_Texto_11:
.string "Tal vez puedan llevarte al límite de tu\n"
	.string "nivel, más aún que en RUINAS ALFA,\l"
	.string "quién sabe.$"

RocketHideout_8F_Final_DLC_Texto_12:
.string "Es por ello, {PLAYER}, que quiero\n"
	.string "volver a ponerte a prueba, esta vez\l"
	.string "haciendo uso de nuestros proyectos\l"
	.string "más punteros.$"

RocketHideout_8F_Final_DLC_Texto_13:
.string "Ahora, ¡enfrenta todo el poder de la\n"
	.string "tecnología desarrollada por 2\l"
	.string "regiones!$"

RocketHideout_8F_Final_DLC_Texto_14:
.string "Asombroso, sigues estando en la cima.$"

RocketHideout_8F_Final_DLC_Texto_15:
.string "No hay duda, eres el activo más valioso\n"
	.string "con el que el TEAM ROCKET cuenta. Tu\l"
	.string "historia como ENTRENADOR LEGENDARIO\l"
	.string "tiene aún mucho por ofrecer, créeme.$"

RocketHideout_8F_Final_DLC_Texto_16:
.string "Quiero que tengas esto, sé que no\n"
	.string "recurrirás a ello como una panacea que\l"
	.string "solucionará todo, tal y como nosotros\l"
	.string "intentamos en el pasado, pero\l"
	.string "considéralo una opción más.$"

RocketHideout_8F_Final_DLC_Texto_17:
.string "¡¡OBTUVISTE UN MEWTWO AL NV.100!!$"

RocketHideout_8F_Final_DLC_Texto_18:
.string "El MEWTWO original es tuyo, {PLAYER}.$"

RocketHideout_8F_Final_DLC_Texto_19:
.string "Por supuesto, viene con lo último en\n"
	.string "tecnología: la MEGA-PIEDRA que le\l"
	.string "convierte en su forma Y. Como dije en la\l"
	.string "reunión, el &-VOLCARONA que\l"
	.string "enfrentaste fue vital en la mejora de\l"
	.string "su ATAQUE ESPECIAL hasta niveles\l"
	.string "estratosféricos.$"

RocketHideout_8F_Final_DLC_Texto_20:
.string "Eso es todo, {PLAYER}. Te recomiendo\n"
	.string "explorar y adaptarte poco a poco a\l"
	.string "HOENN. La sede de DEVON está en CIUDAD\l"
	.string "FÉRRICA, sin embargo, no sabemos si ese\l"
	.string "es o no su centro de operaciones.$"

RocketHideout_8F_Final_DLC_Texto_21:
.string "Mientras, seguiremos desarrollando los\n"
	.string "prototipos de nivel II y …III.\p"
	.string "Hasta entonces{PAUSE 25}…{PAUSE 35} mantente mejorando.$"

