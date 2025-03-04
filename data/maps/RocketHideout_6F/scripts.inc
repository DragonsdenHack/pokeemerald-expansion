RocketHideout_6F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_6F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
	.byte 0


RocketHideout_6F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 29, RocketHideout_6F_Escena_Lance
map_script_2 VAR_UNUSED_0x40F7, 31, RocketHideout_6F_Escena_Lance_2
map_script_2 VAR_UNUSED_0x40F7, 801, RocketHideout_6F_Disguise_Player
	.2byte 0

RocketHideout_6F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 800, RocketHideout_6F_Disguise_Player_2
	.2byte 0

RocketHideout_6F_Disguise_Player_2::
setobjectxy 14, 29, 25
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
setvar VAR_UNUSED_0x40F7, 801
end

RocketHideout6F_1::
lock     
faceplayer     
msgbox RocketHideout6F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_1:
	.string "HAH! KANTO folks think we're dumb, but\n"
	.string "we've got more weapons than they'd\l"
	.string "know! Don't ever show ‘em your full\l"
	.string "repertoire, boy! Hohoho!$"

RocketHideout6F_2::
lock     
faceplayer     
msgbox RocketHideout6F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_2:
	.string "PETREL, this BASE's executive here?\n"
	.string "He's the sort of foe no one likes to\l"
	.string "fight. With all his poison and\l"
	.string "explosives, it's just too risky of a\l"
	.string "fight. You just can't get anywhere\l"
	.string "without a PSYCHIC POKÉMON, and\l"
	.string "especially if all you got's the physical\l"
	.string "sort.$"



RocketHideout6F_3::
lock     
faceplayer     
msgbox RocketHideout6F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_3:
	.string "Hey, I heard JOHTO's BASE made some\n"
	.string "great improvements on radio waves and\l"
	.string "their potential effects on POKÉMON. I'd\l"
	.string "like to stop by sometime.$"



RocketHideout6F_4::
lock     
faceplayer     
msgbox RocketHideout6F_Text_4, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_4:
.string "…\n"
.string "…\p"
.string "-Seems like he is resting, but also\n"
	.string "seems ready to expect to any order\l"
	.string "that he could receive from PETREL.-$"



RocketHideout6F_5::
lock     
faceplayer     
msgbox RocketHideout6F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_5:
.string "…\n"
.string "…\p"
.string "-Seems like he is resting, but also\n"
	.string "seems ready to expect to any order\l"
	.string "that he could receive from PETREL.-$"



RocketHideout6F_6::
lock     
faceplayer     
msgbox RocketHideout6F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_6:
	.string "Stats are a waste without practical\n"
	.string "application! It's estimated that the\l"
	.string "average person loses four hours on\l"
	.string "menial work, inefficiency, or just plain\l"
	.string "lollygagging. With the eight hours for\l"
	.string "sleep, eight more for work, another two\l"
	.string "for other obligations, that's only six\l"
	.string "left for personal business. What a\l"
	.string "waste to lose four of them just like\l"
	.string "that! But that's why TEAM ROCKET's\l"
	.string "where it is-procrastination doesn't\l"
	.string "exist here! What're you doing, GRUNT?!\l"
	.string "Go do your job!$"



RocketHideout6F_7::
lock     
faceplayer     
msgbox RocketHideout6F_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_7:
	.string "I don't see anything wrong with what we\n"
	.string "do here. We all win-just look at those\l"
	.string "POKÉMON. They're happy in the company\l"
	.string "of their species. They get stronger,\l"
	.string "the TRAINERs are happy, and we make\l"
	.string "money! Life's like that. The\l"
	.string "entrepreneurs are the ones to strike it\l"
	.string "big!$"



RocketHideout6F_14::
end



RocketHideout6F_15::
lock     
faceplayer     
msgbox RocketHideout6F_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_15:
	.string "Over seventy percent of the POKÉMON\n"
	.string "traffic flow on KANTO's market runs\l"
	.string "through us, all thanks to the GAME\l"
	.string "CORNER and the constant stream of\l"
	.string "POKÉMON from here and the other bases.\l"
	.string "No one's overtaking us in that\l"
	.string "department.$"



RocketHideout6F_16::
end



RocketHideout6F_17::
end



RocketHideout6F_18::
lock     
faceplayer     
msgbox RocketHideout6F_Text_18, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_18:
	.string "-A SCYTHER's inside. It seems to go for\n"
	.string "110,000¥ in the GAME CORNER.-$"



RocketHideout6F_19::
lock     
faceplayer     
msgbox RocketHideout6F_Text_19, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_19:
	.string "-A DRATINI's inside. It seems to go for\n"
	.string "53,000¥ in the GAME CORNER.-$"



RocketHideout6F_20::
end



RocketHideout6F_21::
lock     
faceplayer     
msgbox RocketHideout6F_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_21:
	.string "Apparently ARCHER, the EXECUTIVE\n"
	.string "running the CHRONO ISLAND WAREHOUSE,\l"
	.string "is the strongest of the three ROCKET\l"
	.string "ADMINISTRATORS. I've heard he's got a\l"
	.string "SCYTHER that can make mincemeat of\l"
	.string "anything with its blades.$"



RocketHideout6F_22::
lock     
faceplayer     
msgbox RocketHideout6F_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_22:
.string "It's a pleasure to work knowing that\n"
	.string "you act under the command of your own\l"
	.string "will! Not like those citizens of KANTO,\l"
	.string "submitted like little lambs to the will\l"
	.string "of the ELITE 4!$"



RocketHideout6F_23::
lock     
faceplayer     
msgbox RocketHideout6F_Text_23, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_23:
.string "There's nothing like the freedom that\n"
	.string "comes from going outside the law! TEAM\l"
	.string "ROCKET RULES!!$"



RocketHideout6F_24::
lock     
faceplayer     
msgbox RocketHideout6F_Text_24, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_24:
	.string "This BASE earns more than a million POKÉ\n"
	.string "per week as payment for tending to\l"
	.string "POMÉMON. What no one out there knows is\l"
	.string "that it's a mere cover for our real\l"
	.string "business! Thanks to the sales of EGGs\l"
	.string "produced here, we rake in twenty times\l"
	.string "more than caring for those POKÉMON\l"
	.string "ever could!$"



RocketHideout6F_25::
lock     
faceplayer     
msgbox RocketHideout6F_Text_25, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_25:
	.string "Maybe it's a tad cruel to part these\n"
	.string "POKÉMON from their EGGs, but normally,\l"
	.string "TRAINERs treat their treat their\l"
	.string "POKÉMON well, even us ROCKETs. Us\l"
	.string "whipping them? That's just an overblown\l"
	.string "cliché. Though it's true that some\l"
	.string "among our numbers are that.$"



RocketHideout6F_26::
lock     
faceplayer     
msgbox RocketHideout6F_Text_26, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_26:
	.string "We've got cameras scattered from here\n"
	.string "across ROUTE 5. This gives us time to\l"
	.string "organize the DAYCARE without raising\l"
	.string "suspicion.$"



RocketHideout6FDocumento_100::
msgbox RocketHideout6FDocumento_Text_100, MSGBOX_DEFAULT  
release
end

RocketHideout6FDocumento_Text_100:
	.string "-A DRATINI's inside. It seems to go for\n"
	.string "53,000¥ in the GAME CORNER.-$"



RocketHideout6FDocumento_101::
msgbox RocketHideout6FDocumento_Text_101, MSGBOX_DEFAULT  
release
end

RocketHideout6FDocumento_Text_101:
	.string "-A SCYTHER's inside. It seems to go for\n"
	.string "110,000¥ in the GAME CORNER.-$"



RocketHideout6FDocumento_102::
msgbox RocketHideout6FDocumento_Text_102, MSGBOX_AUTOCLOSE 
release
end

RocketHideout6FDocumento_Text_102:
.string "VALUE IN GAME CORNER COINS\n"
	.string "OF THE FOLLOWING GOODS:l"
	.string "- ABRA(LV:9): 180\l"
	.string "- CLEFAIRY(LV:8): 500\l"
	.string "- NUGGET: 500\l"
	.string "- SMOKE BALL: 800\l"
	.string "- COAL/M. SEED/M. WATER: 1,000\l"
	.string "- YELLOW FLUTE: 1,600\l"
	.string "- PINSIR(LV:18): 2,500\l"
	.string "- DRATINI(LV:18): 2,800\l"
	.string "- TM. IRON TAIL: 3,500\l"
	.string "- TM.THUNDERB/I.BEAM/FLAMETH: 4,000\l"
	.string "- TM.SHADOW BALL: 4,500\l"
	.string "- SCYTHER (LV:25): 5,500\l"
	.string "- PORYGON (LV:26): 9,999\l"
	.string "- DOME/HELIX FOSSIL: 15,000\l"
	.string "- OLD AMBER: 22,500\p"
	.string "Note: 1 COIN is equivalent to 20¥.$"

RocketHideout_6F_Petrel_Mision_1::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_1, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2.2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_2.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_3, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_3.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move4
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_4, MSGBOX_AUTOCLOSE
delay 5
msgbox RocketHideout_6F_Petrel_Text_Mision_5, MSGBOX_AUTOCLOSE
delay 15
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2.1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_7, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_7.1, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_7.2, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
waitse
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_8, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_9, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_9.1, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_10, MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move7
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_11, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move6.2
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move6.1
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
delay 20
removeobject 27
setvar VAR_UNUSED_0x40F7, 10
release
end

RocketHideout_6F_Petrel_Mision_1_move6.2:
delay_16
face_left
delay_16
delay_8
face_up
step_end

RocketHideout_6F_Petrel_Mision_1_move6.1:
walk_fast_left
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end



RocketHideout_6F_Petrel_Text_Mision_1:
.string "???: Bienvenidos a nuestra\n"
	.string "BASE-GUARDERÍA de ruta 5, nuevos\l"
	.string "RECLUTAS, sois los últimos en\l"
	.string "incorporaros a nuestra actividad\l"
	.string "en KANTO.\l"
	.string "Yo soy PETREL, ADMIN.ROCKET y\l"
	.string "jefe al mando de esta base.$"

RocketHideout_6F_Petrel_Text_Mision_2:
.string "PETREL: Seré breve.\n"
	.string "La principal razón de ser de esta\l"
	.string "BASE es servir de apoyo financiero\l"
	.string "para nuestros proyectos.$"

RocketHideout_6F_Petrel_Text_Mision_2.1:
	.string "Aquí nos limitamos a realizar\n"
	.string "investigaciones sobre posibles\l"
	.string "negocios rentables, y a llevarlas\l"
	.string "a la práctica, todo con el fin de\l"
	.string "llevar dinero a los proyectos\l"
	.string "realmente trascendentales{PAUSE 5}…{PAUSE 5}$"

RocketHideout_6F_Petrel_Text_Mision_3:
.string "He oído que vuestro rendimiento\n"
	.string "fue aceptable en ISLA INTA,\l"
	.string "está por ver vuestra\l"
	.string "evolución en KANTO.$"

RocketHideout_6F_Petrel_Text_Mision_3.1:
	.string "Como RECLUTAS novatos que sóis,\n"
	.string "reuniréis en vuestra II MISIÓN\l"
	.string "OFICIAL, la primera en KANTO,\l"
	.string "con otros reclutas situados\l"
	.string "en el MT.MOON, al oeste de\l"
	.string "CIUDAD CELESTE.$"

RocketHideout_6F_Petrel_Text_Mision_4:
	.string "Once there, you'll be cleaning out all\n"
	.string "the FOSSILs, MOON STONEs, NUGGETs, and\l"
	.string "any other valuables you find. Prioritize\l"
	.string "the FOSSILs foremost. Their value on\l"
	.string "the black market trump any POKÉMON we\l"
	.string "could ever sell in the CELADON GAME\l"
	.string "CORNER.$"

RocketHideout_6F_Petrel_Text_Mision_5:
	.string "When you finish up, come back here to\n"
	.string "measure your contributions, and we'll\l"
	.string "build your rewards based on that. Any\l"
	.string "questions?$"

RocketHideout_6F_Petrel_Text_Mision_6:
	.string "ANDRA: I was just wondering, SIR. How'll\n"
	.string "our performance be evaluated for the\l"
	.string "mission? Given that there are many of\l"
	.string "us, will we be graded just as a group, or\l"
	.string "will we be graded individually too?$"

RocketHideout_6F_Petrel_Text_Mision_7:
.string "PETREL: Así que tenemos a una\n"
	.string "RECLUTA competitiva, si lo que te\l"
	.string "preocupa es la imposibilidad de\l"
	.string "ascender por quedar opacada entre\l"
	.string "la actuación de una media, te lo\l"
	.string "dejaré muy claro.\l"
	.string "Tienes dos formas de escalar aquí:$"

RocketHideout_6F_Petrel_Text_Mision_7.1:
	.string "1 - Para cada misión grupal\n"
	.string "realizamos evaluaciones de cada\l"
	.string "rendimiento individual.$"

RocketHideout_6F_Petrel_Text_Mision_7.2:
	.string "2 - No en todas las misiones\n"
	.string "enviamos RECLUTAS en masa, algunas\l"
	.string "son individuales o en pareja, como\l"
	.string "la vuestra en CASA CÓNSUL.\l"
	.string "En estas misiones tu mérito,\l"
	.string "o tu culpa, es mayor.$"

RocketHideout_6F_Petrel_Text_Mision_8:
.string "Entendido, ¡no defraudaremos\n"
	.string "al TEAM ROCKET y a\l"
	.string "sus aspiraciones!$"

RocketHideout_6F_Petrel_Text_Mision_9:
.string "PETREL: Bien, marchad ya. Vuestra\n"
	.string "llegada a KANTO y esta misión han\l"
	.string "coincidido y ahora váis a\l"
	.string "contrareloj, ya habrá tiempo de\l"
	.string "explicaros cómo funcionan aquí las\l"
	.string "cosas.$"

RocketHideout_6F_Petrel_Text_Mision_9.1:
	.string "¡Traedme esos FÓSILES y liquidad\n"
	.string "a todo el que se oponga!$"

RocketHideout_6F_Petrel_Text_Mision_10:
.string "ANDRA: ¡ENTENDIDO, SIR!$"

RocketHideout_6F_Petrel_Text_Mision_11:
.string "ANDRA: Estamos de suerte, {PLAYER}.\n"
	.string "Acabamos de llegar y ya tenemos\l"
	.string "trabajo; vamos a hacernos con\l"
	.string "todos esos FÓSILES sin importar\l"
	.string "quién se oponga; nos vemos en la\l"
	.string "entrada este del MT.MOON.$"

RocketHideout_6F_Petrel_Mision_1_move1:
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_1_move2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_1_move2.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Mision_1_move2.2:
delay_8
face_up
delay_8
step_end

RocketHideout_6F_Petrel_Mision_1_move3:
walk_up
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_1_move4:
walk_slow_down
face_left
step_end

RocketHideout_6F_Petrel_Mision_1_move5:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_1_move6:
face_up
step_end

RocketHideout_6F_Petrel_Mision_1_move7:
face_down
step_end


RocketHideout_6F_Warp::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Warp_move2.1
waitmovement 0x0
msgbox RocketHideout_6F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_6F_Warp_No
warp MAP_ROUTE5_HOUSE1, 0, 2
release
end

RocketHideout_6F_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Warp_move1
release
end

RocketHideout_6F_Warp_Text_YesNo:
	.string "A slight jump is enough to reach the\n"
	.string "stairs leading to the DAYCARE. Do you\l"
	.string "want to leave the BASE?$"

RocketHideout_6F_Warp_move2.1:
walk_in_place_down
step_end

RocketHideout_6F_Warp_move1:
walk_slow_right
step_end

RocketHideout_6F_Petrel_Mision_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_1, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_3, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_4, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_5, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_6, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_7, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_2_7.1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move5
waitmovement 0x0
delay 10
playse SE_SHOP
removemoney 999999 0
updatemoneybox
delay 80
playse SE_M_EMBER
msgbox RocketHideout_6F_Petrel_Text_Mision_2_8, MSGBOX_AUTOCLOSE
waitfanfare
delay 50
hidemoneybox
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_9, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_10, MSGBOX_AUTOCLOSE
delay 15
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_2_10.1, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_11, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_2_11.1, MSGBOX_AUTOCLOSE
delay 15
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_12, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4.1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_12.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_2_13, MSGBOX_AUTOCLOSE
setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
setvar VAR_UNUSED_0x40F7, 19
setvar VAR_UNUSED_0x40FC, 2
release
end

RocketHideout_6F_Petrel_Mision_2_move4.1:
delay_8
face_up
delay_8
step_end

RocketHideout_6F_Petrel_Mision_2_move3.1:
face_up
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Text_Mision_2_1:
	.string "PETREL: GRUNT {PLAYER}, we've gotten\n"
	.string "word on your performance at MT. MOON.\l"
	.string "HIGH RANK GRUNT FRANK's already told me\l"
	.string "his side of the story-how we would've\l"
	.string "gotten two more FOSSILs in our wallets.\l"
	.string "Do you have any idea how much money\l"
	.string "that is, {PLAYER}? The projects and\l"
	.string "resources we'd fund with that?$"


RocketHideout_6F_Petrel_Text_Mision_2_2:
.string "…$"

RocketHideout_6F_Petrel_Text_Mision_2_3:
	.string "I could just leave you to rot in prison,\n"
	.string "long enough for you to think about what\l"
	.string "you'd done. Or even worse, I could just\l"
	.string "expel you from TEAM ROCKET altogether.$"

RocketHideout_6F_Petrel_Text_Mision_2_4:
	.string "But that said, maybe the leader of the\n"
	.string "mission's a rough and impatient sort.\l"
	.string "Maybe he's lost his objectivity and\l"
	.string "impartiality in the heat of the mission.$"

RocketHideout_6F_Petrel_Text_Mision_2_5:
	.string "It's not every day the average GRUNT\n"
	.string "faces down their superior and comes\l"
	.string "out on top. Either you're incredibly\l"
	.string "brave or incredibly stupid. Or both. So\l"
	.string "let's find out.$"

RocketHideout_6F_Petrel_Text_Mision_2_6:
	.string "I've got a mission for you. Let's see\n"
	.string "just how far your bravery as a TRAINER\l"
	.string "and that -ROCKET code of honor- of yours\l"
	.string "takes you.$"

RocketHideout_6F_Petrel_Text_Mision_2_7:
.string "Pero antes debes de\n"
	.string "responsabilizarte por tu deficiente\l"
	.string "rendimiento.\l"
	.string "En el mercado negro, el valor\l"
	.string "estimado de los FÓSILES perdidos\l"
	.string "es mayor que todo lo que has aportado\l"
	.string "al TEAM ROCKET hasta ahora.$"

RocketHideout_6F_Petrel_Text_Mision_2_7.1:
	.string "Por ello, para enmendar esas\n"
	.string "ganancias potenciales, abonarás\l"
	.string "al TEAM ROCKET todo el dinero\l"
	.string "físico del que dispones.\l"
	.string "Como castigo y\l"
	.string "prueba de lealtad.$"

RocketHideout_6F_Petrel_Text_Mision_2_8:
.string "Te has quedado con 0¥.$"

RocketHideout_6F_Petrel_Text_Mision_2_9:
.string "PETREL: El pago justo por una\n"
	.string "nueva oportunidad, ¿no crees? Te\l"
	.string "aseguro que si cumples con éxito\l"
	.string "este encargo, el dinero será el\l"
	.string "menor de tus problemas; de lograrlo\l"
	.string "el TEAM ROCKET se ahorraría una\l"
	.string "fortuna en transporte y logística.$"

RocketHideout_6F_Petrel_Text_Mision_2_10:
.string "Y es que, como sabrás, el PUERTO de\n"
	.string "CIUDAD CARMÍN ha sido nuestro eje\l"
	.string "conector entre KANTO y el ARCHI7.\l"
	.string "Pero{PAUSE 15}…{PAUSE 15} la policía de KANTO está\l"
	.string "cada vez más pendiente.\l"
	.string "Se hace más y más difícil y caro\l"
	.string "sobornar a los marineros para\l"
	.string "importar nuestras mercancías y\l"
	.string "reclutas desde ISLA INTA.$"

RocketHideout_6F_Petrel_Text_Mision_2_10.1:
	.string "Tu intervención silenciando a la\n"
	.string "CÓNSUL frenó esto, pero es cuestión\l"
	.string "de tiempo que nos corten el\l"
	.string "chiringito{PAUSE 5}…{PAUSE 5}$"

RocketHideout_6F_Petrel_Text_Mision_2_11:
.string "Ahora, ¿cuál es tu misión?\n"
	.string "Nos han llegado rumores de que\l"
	.string "BILL: ese estúpido que solo ve\l"
	.string "a los POKÉMON como cromos\l"
	.string "coleccionables, ha desarrollado un\l"
	.string "sistema de teletransporte capaz de\l"
	.string "cubrir grandes distancias.$"

RocketHideout_6F_Petrel_Text_Mision_2_11.1:
	.string "Tu misión será hacerle una visita,\n"
	.string "en su casa al norte de CIUDAD\l"
	.string "CELESTE. Vive al final de RUTA 25,\l"
	.string "allí te harás con la patente o toda\l"
	.string "información respecto a ese novedoso\l"
	.string "sistema de teletransporte.$"

RocketHideout_6F_Petrel_Text_Mision_2_12:
.string "Si finalmente consigues obtener\n"
	.string "información útil, nuestros\l"
	.string "científicos podrán desarrollar\l"
	.string "puntos de conexión a larga distancia\l"
	.string "entre ISLA INTA y KANTO.$"

RocketHideout_6F_Petrel_Text_Mision_2_12.1:
	.string "Ello nos ahorraría millones, y\n"
	.string "dejaríamos de depender de otros.$"

RocketHideout_6F_Petrel_Text_Mision_2_13:
	.string "Aquí tienes tu oportunidad, {PLAYER}.\n"
	.string "No vuelvas a decepcionarme.$"

RocketHideout_6F_Petrel_Mision_2_move1:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_2_move2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_2_move3:
face_up
delay_1
walk_slow_up
walk_in_place_left
step_end


RocketHideout_6F_Petrel_Mision_2_move4:
walk_slow_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_2_move5:
walk_right
step_end

RocketHideout_6F_Petrel_Mision_2_move6:
walk_left
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_7.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout_6F_Petrel_Mision_3_Bill::
lockall
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
addobject 28
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_2.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_3
waitmovement 0x0
playse SE_PIN
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_2
waitmovement 0x0
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_4
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_5
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_3 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_4 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_9
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_5 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_9
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_7 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_8 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_10
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_10 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_11
waitmovement 0x0
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_12 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_13
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
removeobject 28
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_13 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_14 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_15.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_15.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_15.3
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.2 MSGBOX_AUTOCLOSE
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 1
setvar VAR_UNUSED_0x40F7, 800
warpsilent MAP_ROCKET_HIDEOUT_6F, 28, 25

RocketHideout_6F_Petrel_Mision_3_Bill_move_15.3:
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_15.1:
emote_exclamation_mark
delay_16
delay_16
delay_16
face_up
delay_16
delay_8
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_15.2:
emote_exclamation_mark
delay_16
delay_16
delay_16
delay_8
face_down
delay_16
delay_8
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_2.1:
delay_8
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.2:
walk_down
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.3:
walk_up
face_left
step_end

RocketHideout8F_Mision_Johto_move_12.2:
face_up
step_end

RocketHideout8F_Mision_Johto_move_12.3:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_12.4:
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_texto_19.1:
.string "PETREL: Now you, ANDRA.$"


RocketHideout_6F_Disguise_Player::
applymovement 27, RocketHideout8F_Mision_Johto_move_12.2
waitmovement 0x0
playse SE_PIN
applymovement 27, RocketHideout8F_Mision_Johto_move_12.3
waitmovement 0x0
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_16 MSGBOX_DEFAULT
waitfanfare
applymovement 27, RocketHideout8F_Mision_Johto_move_12.4
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_19.1 MSGBOX_AUTOCLOSE
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1
applymovement 27, RocketHideout8F_Mision_Johto_move_12.1
waitse
playse SE_M_SOLAR_BEAM
applymovement 27, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
removeobject 27
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 39
playse SE_M_STAT_INCREASE
applymovement 39, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
playfanfare MUS_OBTAIN_SYMBOL
waitfanfare
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_17 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 125000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_18 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_15
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_SHOP
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_16
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_20 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_22 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_23 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_16.1
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_16.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_17
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_25 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_26.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_28 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_29 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_17
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_30 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_19
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_19
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_31 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_32 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_33.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_16.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_34 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18
waitmovement 0x0
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_35 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_20
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_36 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move6.2
applymovement 39, RocketHideout_6F_Petrel_Mision_1_move6.1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18.2
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 39
delay 20
setvar VAR_UNUSED_0x40F7, 23
release
end

RocketHideout_6F_Petrel_Mision_3_Bill_move_18.2:
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_18.1:
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_16.2:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_16.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_12.1:
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
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_texto_1:
.string "ATLAS: Es inadmisible, PETREL.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_2:
.string "Deberías de saber que BILL es\n"
	.string "el niñito mimado de las élites de\l"
	.string "esta región. Ese tipo siempre\l"
	.string "cuenta con una guardia personal\l"
	.string "que le vigila a una distancia\l"
	.string "prudencial.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_2.1:
	.string "Por si fuera poco, toda la\n"
	.string "POLICÍA de CIUDAD CELESTE\l"
	.string "está pendiente de él.\l"
	.string "Ha sido una imprudencia enviar a\l"
	.string "uno de los nuestros a robar algo\l"
	.string "tan importante de esta manera.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_3:
.string "Fortunately for us, I could rescue\n"
	.string "{PLAYER} at the last moment, so the\l"
	.string "patent will let us save millions on\l"
	.string "transport and logistics.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_4:
	.string "ARCHER: {PLAYER}'s\n"
	.string "intervention-defeating some POLICE,\l"
	.string "getting the patent, and even holding it\l"
	.string "to the last moment-has been the\l"
	.string "determining factor in this mission's\l"
	.string "success.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_5:
.string "PETREL: You are right, ARCHER.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_6:
	.string "PETREL: I need to apologize to you,\n"
	.string "{PLAYER}. I wasn't conscious of the\l"
	.string "danger you were in, and I should've\l"
	.string "thought a person like BILL would've\l"
	.string "been protected. I'd been told you were\l"
	.string "a good TRAINER, and I figured your skill\l"
	.string "would suffice to silence that braggart,\l"
	.string "but I hadn't expected the\l"
	.string "instantaneous POLICE response.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_7:
	.string "PETREL: But how did you know about this\n"
	.string "mission, ARCHER? I thought you were\l"
	.string "still in charge of our BASEs in the\l"
	.string "SEVII ISLANDS.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_8:
.string "ATLAS: Y lo sigo siendo. ANDRA se\n"
	.string "enteró de la misión y me avisó\l"
	.string "inmediatamente.\l"
	.string "Mi SKARMORY hizo el resto.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_9:
.string "ATLAS: {PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_10:
.string "Yo me retiro, hay trabajo\n"
	.string "por hacer en las islas.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_11:
.string "¡PETREL!\n"
	.string "Procura recompensar como es debido\l"
	.string "a estos 2 reclutas. Sus actuaciones\l"
	.string "van a partir de ahora ahorrarnos un\l"
	.string "tiempo precioso y millones.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_11.1:
	.string "PETREL: Recibido, ADMIN.JEFE ATLAS.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_12:
.string "ATLAS: No creas que te he salvado\n"
	.string "por sentir especial predilección\l"
	.string "hacia ti. Eres un activo valioso\l"
	.string "para nuestra organización y has\l"
	.string "actuado acorde a nuestros valores,\l"
	.string "con eso basta{PAUSE 15}…{PAUSE 15}\l"
	.string "Os veré a los dos en próximos\l"
	.string "eventos.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_13:
	.string "PETREL: ARCHER's the personification\n"
	.string "of efficiency. That's why he's the most\l"
	.string "highly ranked ADMIN of TEAM ROCKET.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_14:
.string "En cuanto a vosotros, me disculpo\n"
	.string "de nuevo, especialmente contigo,\l"
	.string "{PLAYER}. Muchos pensaban que en\l"
	.string "ISLA INTA solo había debiluchos e\l"
	.string "incompetentes.\l"
	.string "Habéis demostrado que no.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_15:
.string "Por el desempeño y lealtad\n"
	.string "mostrados hacia el TEAM ROCKET,\l"
	.string "ambos sois ascendidos.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.1:
	.string "Pasáis de ser unos soldados rasos\n"
	.string "comunes, a RECLUTAS DE ALTO RANGO.\l"
	.string "Eso os dará potestad para dirigir\l"
	.string "ciertas misiones, como hizo FRANK\l"
	.string "con vosotros en el MT.MOON, además\l"
	.string "de el rango suficiente como para\l"
	.string "asistir a reuniones privadas con\l"
	.string "nuestro LÍDER GIOVANNI.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.2:
	.string "También acceso a cierta información\n"
	.string "privilegiada, pero todo eso a su\l"
	.string "tiempo{PAUSE 5}…{PAUSE 5}$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_16:
.string "{PLAYER} got promoted to HIGH RANK\n"
	.string "GRUNT!!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_17:
	.string "PETREL: To celebrate your new status\n"
	.string "here and as payment for the success of\l"
	.string "your respective missions, these are\l"
	.string "your rewards. To you, {PLAYER}, given\l"
	.string "the savings this patent will bring and\l"
	.string "as compensation for the POKÉ taken\l"
	.string "after the MT. MOON mission, you get the\l"
	.string "following…$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_18:
.string "You've just earned 125,000¥!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_19:
	.string "PETREL: And for you, ANDRA. Your\n"
	.string "warning to ARCHER was also crucial, and\l"
	.string "you'd completed your task in VERMILION\l"
	.string "CITY. In your case, the total reward is\l"
	.string "75,000 POKÉ.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_20:
.string "PETREL: So now…\n"
.string "I will talk to you two about your next\l"
	.string "mission. You both know about S.S. ANNE,\l"
	.string "don't you?$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_21:
	.string "ANDRA: The famous transatlantic ship\n"
	.string "that's just arrived at the VERMILION\l"
	.string "harbor.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_22:
	.string "PETREL: Indeed. It's quite the\n"
	.string "tradition to throw a big party on the\l"
	.string "cruise before her final farewell from\l"
	.string "VERMILION.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_23:
	.string "PETREL: I don't want you two to just\n"
	.string "take advantage of their carelessness\l"
	.string "for some mere POKÉMON or merchandise.\l"
	.string "What I'm ordering of you is much smaller,\l"
	.string "yet so much more highly valued than all\l"
	.string "of that… It's a flask.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_24:
.string "ANDRA: A jar?$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_25:
.string "PETREL: El CAPITÁN del SS.ANNE ha\n"
	.string "recorrido incontables regiones y\l"
	.string "realizado innumerables viajes por\l"
	.string "el mundo.\l"
	.string "En uno de ellos, halló algo que\l"
	.string "podría ser el fragmento de un POKÉMON.\l"
	.string "Algo que no se corresponde\l"
	.string "con nada que conozcamos.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_26:
.string "PETREL: Sabemos que dicho\n"
	.string "fragmento lo guarda en un frasco.\l"
	.string "Ya lo ha mostrado en múltiples\l"
	.string "entrevistas; siempre lo lleva\l"
	.string "consigo, jamás se separa de él.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_26.1:
	.string "Así que entraréis a su camarote y\n"
	.string "se lo quitaréis por la fuerza.\l"
	.string "No os queda otra que combatir, por\l"
	.string "eso os envío a vosotros.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_27:
	.string "ANDRA: So how'll we infiltrate the ship?\n"
	.string "As far as I know, without a TICKET,\l"
	.string "those sailors will never let us board.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_28:
	.string "PETREL: I've already prepared an\n"
	.string "evasive maneuver. It's a bit\l"
	.string "rudimentary, but it works. Your\l"
	.string "collaborator will await you at the\l"
	.string "VERMILION harbor. Don't worry about\l"
	.string "distinguishing him-you'll recognize him\l"
	.string "immediately.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_29:
.string "PETREL: …$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_30:
.string "PETREL: You should know this mission is\n"
	.string "an express request from GIOVANNI…$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_31:
	.string "PETREL: Our LEADER thinks those\n"
	.string "fragments could be part of a mighty\l"
	.string "LEGENDARY POKÉMON, and he doesn't want\l"
	.string "to miss the chance to get the flask and\l"
	.string "investigate it before the S.S. ANNE\l"
	.string "disappears from KANTO's shores until\l"
	.string "next year.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_32:
.string "ANDRA: We'll do it for sure!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_33:
.string "PETREL: Confío en vosotros.\n"
	.string "Ambos habéis demostrado\l"
	.string "habilidad para combatir.$"
	
RocketHideout_6F_Petrel_Mision_3_Bill_texto_33.1:
	.string "Ese CAPITÁN se ha curtido en\n"
	.string "los mares de todo el mundo,\l"
	.string "solo un ENTRENADOR notable\l"
	.string "podría desarmarlo.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_34:
.string "ANDRA: ¡Nosotros seremos\n"
.string "sobresalientes, SIR!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_35:
.string "PETREL: Eso es todo, caballeros.\n"
	.string "Cuanto antes lleguéis\l"
	.string "al SS.ANNE, de más tiempo\l"
	.string "dispondréis hasta que zarpe,\l"
	.string "buenas tardes.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_36:
.string "ANDRA: Vamos allá, {PLAYER}.\n"
	.string "¡El SS.ANNE es nuestro!$"

RocketHideout_6F_Petrel_Mision_3_Bill_move_1:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_2:
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_4:
walk_in_place_up
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_5:
face_left
emote_exclamation_mark
delay_1
walk_in_place_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_6:
face_left
delay_1
walk_in_place_down
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_7:
walk_in_place_down
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_8:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_9:
walk_in_place_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_10:
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_11:
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_12:
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_13:
walk_up
walk_up
walk_left
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_15:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_16:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_17:
walk_up
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_18:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_19:
emote_exclamation_mark
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_20:
face_down
step_end



RocketHideout_6F_Petrel_Post_SSanne::
lockall
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 39
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 80000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_GREAT_BALL, 20
waitfanfare
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
playse SE_SHOP
delay 20
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_5 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_5
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_6 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_7
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_7
waitmovement 0x0
waitse
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_8 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_9 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_7
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_7
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_14 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_15 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_16.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_17.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.3
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_18.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_19 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_9
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_10
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_20 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move6.2
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_11
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 39
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
setvar VAR_UNUSED_0x40F7, 33
release
end

RocketHideout_6F_Petrel_Post_SSanne_move_4.2:
face_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_4.3:
face_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_4.1:
delay_8
face_up
delay_16
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_8.1:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end


RocketHideout_6F_Petrel_Post_SSanne_Texto_1:
	.string "PETREL: Excellent work, GRUNTS.\n"
	.string "GIOVANNI'll be eager to start\l"
	.string "investigating the contents of that\l"
	.string "flask.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_2:
.string "PETREL: Here's your reward.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_3:
	.string "You've just earned 80,000¥!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_4:
	.string "PETREL: In addition, take this: twenty\n"
	.string "GREAT BALLs for each of you. Recruits\l"
	.string "like you need some means at their\l"
	.string "disposal.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_5:
	.string "PETREL: And now, please, take a seat\n"
	.string "and make yourselves comfortable. We\l"
	.string "have much to discuss.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_6:
	.string "PETREL: Firstly, I must tell you our\n"
	.string "scientists, thanks to the patent\l"
	.string "stolen by {PLAYER}, are already on\l"
	.string "the verge of creating instantaneous\l"
	.string "long-distance teleportation points.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_7:
	.string "This new invention will allow us to\n"
	.string "connect this base with that of CHRONO\l"
	.string "ISLAND, and especially with that of our\l"
	.string "headquarters, the CELADON BASE.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_8:
.string "PETREL: {PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_9:
.string "PETREL: En vuestra primera misión,\n"
	.string "ya en el MT.MOON, mostrasteis cierta\l"
	.string "peculiaridad que se salía del\l"
	.string "estereotipo del soldado medio.\l"
	.string "Se os dio una oportunidad, con dos\l"
	.string "misiones de cierta complejidad\l"
	.string "para poneros a prueba, y habéis\l"
	.string "cumplido con las expectativas.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_10:
.string "A la vista de los recientes\n"
	.string "acontecimientos, el mismo GIOVANNI\l"
	.string "me informó de que, en caso de\l"
	.string "cumplir también con el robo en el\l"
	.string "SS.ANNE, seáis trasladados a la\l"
	.string "base principal de inmediato.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_11:
.string "PETREL: En otras palabras, a partir de\n"
	.string "ahora formaréis parte de la guardia\l"
	.string "personal de GIOVANNI.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_11.1:
	.string "Sentíos afortunados y sobre todo\n"
	.string "dad la talla, ahí trabajaréis con\l"
	.string "la maldita élite de nuestra\l"
	.string "organización.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_12:
	.string "ANDRA: ¡Estamos preparados,\n"
	.string "ADMINISTRADOR PETREL!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_13:
.string "PETREL: Bien. Vuestro traslado se\n"
	.string "efectuará cuando terminemos de\l"
	.string "ajustar la red de teletransporte.\l"
	.string "Así, no será necesario ir hasta\l"
	.string "CIUDAD AZULONA a pie.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_13.1:
	.string "Mientras tanto, os habéis ganado\n"
	.string "un merecido descanso; desde\l"
	.string "vuestra llegada habéis encadenado\l"
	.string "tres misiones seguidas a buen\l"
	.string "rendimiento; de modo que os\l"
	.string "concedo este periodo, hasta vuestro\l"
	.string "traslado, como tiempo libre.$"
	
RocketHideout_6F_Petrel_Post_SSanne_Texto_13.2:
	.string "Recomiendo que os relajéis y\n"
	.string "exploréis KANTO.\l"
	.string "Aprovechad también para entrenar a\l"
	.string "vuestros POKÉMON, capturar algunos\l"
	.string "nuevos, y sobretodo prepararos\l"
	.string "mentalmente para vuestro traslado,\l"
	.string "deberéis de presentaros en las\l"
	.string "mejores condiciones posibles ante\l"
	.string "GIOVANNI.$"
	
RocketHideout_6F_Petrel_Post_SSanne_Texto_13.3:
	.string "Esta BASE es un hediondo cobertizo\n"
	.string "infestado de RATATTAS, comparado con\l"
	.string "las limpias e inmaculadas oficinas de\l"
	.string "nuestros subterráneos en AZULONA.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_14:
.string "Y otra cosa más, a vuestra llegada, os\n"
	.string "prometí daros ciertas nociones\l"
	.string "generales sobre KANTO.\l"
	.string "Pero la urgencia de la misión en\l"
	.string "el MT.MOON, al final hizo que os\l"
	.string "quedárais sin esa formación básica.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_15:
.string "Ahora que ya lleváis cierto tiempo\n"
	.string "aquí, y la cosa está más calmada,\l"
	.string "os pregunto: ¿Qué opinión os\l"
	.string "merece la gente de KANTO?$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_16:
.string "ANDRA: Hay cierta diferencia con\n"
	.string "la gente de ISLA INTA, el hecho de\l"
	.string "ser ROCKET aquí parece estar muy\l"
	.string "estigmatizado, la gente te señala\l"
	.string "con el dedo de forma despectiva,\l"
	.string "aún sin tú haber dado indicios de\l"
	.string "hacer algo malo.$"
	
RocketHideout_6F_Petrel_Post_SSanne_Texto_16.1:
	.string "En general, KANTO nos odia, es\n"
	.string "como si{PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_17:
.string "PETREL: Les hubieran convencido de\n"
	.string "que los malos de la película somos\l"
	.string "nosotros. Exacto, ANDRA, exacto.$"
	
	
RocketHideout_6F_Petrel_Post_SSanne_Texto_17.1:
	.string "LANCE gobierna ahora KANTO, y una\n"
	.string "consecuencia de ello es que puede\l"
	.string "manipular el relato a su antojo.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_17.2:
	.string "La realidad es que somos una organi-\n"
	.string "zación privada a la que no le queda\l"
	.string "más opción que recurrir al crimen\l"
	.string "organizado para recuperar lo que es\l"
	.string "suyo; no un sindicato del crimen amoral\l"
	.string "y asesino como quieren hacer ver\l"
	.string "desde las puertas de MESETA AÑIL.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_18:
.string "Ya os iréis enterando de cómo\n"
	.string "funcionan las cosas por aquí,\l"
	.string "especialmente ahora, que iréis\l"
	.string "a CIUDAD AZULONA.\l"
	.string "GIOVANNI estará encantado de dar\l"
	.string "detalles a dos jóvenes competentes\l"
	.string "como vosotros.$"
	
RocketHideout_6F_Petrel_Post_SSanne_Texto_18.1:
	.string "Eso es todo. Aprovechad el tiempo\n"
	.string "libre que os habéis ganado, y\l"
	.string "cuando la máquina esté lista,\l"
	.string "recibiréis una llamada.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_19:
.string "At your service, ADMIN PETREL!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_20:
	.string "{PLAYER}!! I'll be training up on\n"
	.string "ROUTEs 9 and 10, just east of CERULEAN\l"
	.string "CITY. Now with CUT under our belts,\l"
	.string "we've got the run of the place. If you\l"
	.string "need me, that's where I'll be.$"


RocketHideout_6F_Petrel_Post_SSanne_move_1:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_3:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_4:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_5:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_6:
walk_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_7:
emote_exclamation_mark
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_8:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_9:
face_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_10:
face_down
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_11:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Escena_Lance::
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
applymovement 26, RocketHideout_6F_Escena_Lance_move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_3
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 33, RocketHideout_6F_Escena_Lance_move_2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_11 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_12 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_move_5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_5
waitmovement 0x0
delay 20
setvar VAR_UNUSED_0x40F7, 30
warpsilent MAP_INDIGO_PLATEAU, 13, 15
release
end

RocketHideout_6F_Escena_Lance_Texto_11:
.string "{PLAYER}! Did you notice?$"

RocketHideout_6F_Escena_Lance_Texto_12:
	.string "Seems like LANCE is making an official\n"
	.string "announcement. They're broadcasting it\l"
	.string "live. We're missing it!$"

RocketHideout_6F_Escena_Lance_move_1:
face_left
step_end

RocketHideout_6F_Escena_Lance_move_2:
face_left
emote_exclamation_mark
step_end

RocketHideout_6F_Escena_Lance_move_3:
face_right
step_end

RocketHideout_6F_Escena_Lance_move_4:
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Escena_Lance_move_5:
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

RocketHideout_6F_Escena_Lance_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move7
delay 20
applymovement 35, RocketHideout_6F_Escena_Lance_2_move1
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 20
applymovement 31, RocketHideout_6F_Escena_Lance_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_14 MSGBOX_AUTOCLOSE
applymovement 31, RocketHideout_6F_Escena_Lance_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_15 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_2_move1
applymovement 35, RocketHideout_6F_Escena_Lance_2_move1
applymovement 29, RocketHideout_6F_Escena_Lance_2_move1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move1
applymovement 32, RocketHideout_6F_Escena_Lance_2_move4
applymovement 30, RocketHideout_6F_Escena_Lance_2_move4
applymovement 26, RocketHideout_6F_Escena_Lance_2_move4
applymovement 36, RocketHideout_6F_Escena_Lance_2_move5
applymovement 34, RocketHideout_6F_Escena_Lance_2_move5
applymovement 37, RocketHideout_6F_Escena_Lance_2_move5
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_16 MSGBOX_AUTOCLOSE
applymovement 26, RocketHideout_6F_Escena_Lance_2_move5
fadescreen 1
delay 20
removeobject 35
removeobject 29
removeobject 32
removeobject 30
removeobject 36
removeobject 34
removeobject 37
fadescreen 0
delay 15
applymovement 31, RocketHideout_6F_Escena_Lance_2_move6
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_17 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_2_move1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move1
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_18 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
fadescreen 1
delay 20
removeobject 31
removeobject 33
fadescreen 0
setflag FLAG_HIDE_PETALBURG_CITY_WALLY
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
clearflag FLAG_VISITED_INDIGO_PLATEAU
setvar VAR_UNUSED_0x40F7, 32
release
end

RocketHideout_6F_Escena_Lance_Texto_13:
.string "This is awful! What are we going to do\n"
	.string "now?$"

RocketHideout_6F_Escena_Lance_Texto_14:
	.string "PETREL: Calm down, GRUNT. We have\n"
	.string "more than enough resources to manage\l"
	.string "on our own. All this means is that they\l"
	.string "see us as a threat.$"

RocketHideout_6F_Escena_Lance_Texto_15:
.string "Why are you all standing here?!\n"
	.string "Everyone, get back to work!$"

RocketHideout_6F_Escena_Lance_Texto_16:
	.string "At your service, ADMIN PETREL!$"

RocketHideout_6F_Escena_Lance_Texto_17:
	.string "ANDRA. {PLAYER}. Come to my office\n"
	.string "immediately. I have news for you.$"

RocketHideout_6F_Escena_Lance_Texto_18:
	.string "ANDRA: Yes, sir!$"

RocketHideout_6F_Escena_Lance_2_move1:
walk_in_place_up
step_end

RocketHideout_6F_Escena_Lance_2_move2:
face_left
step_end

RocketHideout_6F_Escena_Lance_2_move3:
walk_in_place_right
walk_in_place_down
step_end

RocketHideout_6F_Escena_Lance_2_move4:
walk_in_place_left
step_end

RocketHideout_6F_Escena_Lance_2_move5:
walk_in_place_right
step_end

RocketHideout_6F_Escena_Lance_2_move6:
walk_in_place_down
step_end

RocketHideout_6F_Escena_Lance_2_move7:
face_up
step_end

RocketHideout_6F_Aviso_Cientifico::
delay 10
playse SE_PIN
applymovement 26, RocketHideout_6F_Aviso_Cientifico_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Aviso_Cientifico_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Aviso_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Aviso_Cientifico_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 26, RocketHideout_6F_Aviso_Cientifico_Move_2
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 36
release
end

RocketHideout_6F_Aviso_Cientifico_Texto_1:
.string "RECLUTA DE ALTO RANGO {PLAYER}, al\n"
	.string "fin, gracias a la patente que\l"
	.string "robaste a BILL hemos podido\l"
	.string "concluir el proyecto de conexión\l"
	.string "entre bases vía teletransporte,\l"
	.string "puedes usarlo a partir de ahora\l"
	.string "cuando quieras.$"

RocketHideout_6F_Aviso_Cientifico_Texto_1.1:
	.string "ANDRA acaba de teletransportarse a\n"
	.string "la base de AZULONA tal como se os\l"
	.string "ha asignado, están a la espera de\l"
	.string "tu llegada al cuartel para\l"
	.string "iniciaros en vuestro nuevo\l"
	.string "entorno.$"

RocketHideout_6F_Aviso_Cientifico_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_6F_Aviso_Cientifico_Move_2:
walk_in_place_right
step_end

RocketHideout_6F_Maquina_Teletransporte::
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Maquina_Teletransporte_2
msgbox RocketHideout_6F_Maquina_Teletransporte_Texto_1 MSGBOX_AUTOCLOSE
release
end



RocketHideout_6F_Maquina_Teletransporte_Texto_1:
.string "…\n"
	.string "…\p"
.string "-Seems that this machine's development\n"
	.string "is still in the earliest stages.-$"

RocketHideout_6F_Maquina_Teletransporte_2::
msgbox RocketHideout_6F_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_6F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_3F, 2, 3
release
end

RocketHideout_6F_Maquina_Teletransporte_YesNo:
.string "The machine is ready for use.\n"
	.string "Do you want to teleport to the CELADON BASE?$"

RocketHideout_6F_Maquina_Teletransporte_No::
release
end


Base_Ruta_5_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon_Ruta_5 MSGBOX_AUTOCLOSE
waitmessage
multichoice 0, 0, MULTI_VENTA_BASE_RUTA_5, 0
switch VAR_RESULT
case 0, EventScript_Rattata
case 1, EventScript_Mankey
case 2, EventScript_Voltorb
case 3, EventScript_Koffing
release
end

EventScript_Voltorb::
lock
showmoneybox 0, 0
msgbox EventScript_Voltorb_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 9000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 9000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_VOLTORB, 12, ITEM_NONE
release
end

EventScript_Koffing::
lock
showmoneybox 0, 0
msgbox EventScript_Koffing_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 11000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 11000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_KOFFING, 13, ITEM_NONE
release
end

EventScript_Mankey::
lock
showmoneybox 0, 0
msgbox EventScript_Mankey_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 8000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 8000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_MANKEY, 12, ITEM_NONE
release
end

EventScript_Rattata::
lock
showmoneybox 0, 0
msgbox EventScript_Rattata_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 3000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 3000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_RATTATA, 9, ITEM_NONE
release
end

Text_CompraPokemon_Ruta_5:
.string "How's everything going, comrade?\n"
	.string "How can I help you?$"

EventScript_Voltorb_Texto_1:
.string "Are you sure you want VOLTORB? It'll\n"
	.string "cost 9,000 POKÉ.$"

EventScript_Koffing_Texto_1:
.string "Are you sure you want KOFFING? I'll\n"
	.string "cost 11,000 POKÉ.$"

EventScript_Mankey_Texto_1:
.string "Are you sure you want MANKEY? It'll\n"
	.string "cost 8,000 POKÉ.$"

EventScript_Rattata_Texto_1:
.string "Are you sure you want RATTATA? It'll\n"
	.string "cost 3,000 POKÉ.$"

RocketHideout_6F_Petrel::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Petrel_2
msgbox RocketHideout_6F_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Move_Izq
waitmovement 0x0
release
end

RocketHideout_6F_Petrel_Move_Izq:
face_left
step_end

RocketHideout_6F_Petrel_2::
msgbox RocketHideout_6F_Petrel_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Petrel_Texto_1:
	.string "PETREL: Kid, you ought to know that\n"
	.string "ROCKET ADMINs aren't to be interrupted\l"
	.string "for trivial matters. Our time's is too\l"
	.string "valuable.$"

RocketHideout_6F_Petrel_Texto_2:
	.string "PETREL: It's been a source of pride for\n"
	.string "me to have been your chief ADMIN in\l"
	.string "your first contact with KANTO. You've\l"
	.string "shown there are still ROCKETs worth\l"
	.string "their salt. I only hope you and ANDRA\l"
	.string "live up to the demands of our great\l"
	.string "leader GIOVANNI.$"

RocketHideout_6F_Cientifico_Maquina::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Cientifico_Maquina_2
msgbox RocketHideout_6F_Cientifico_Maquina_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Cientifico_Maquina_2::
msgbox RocketHideout_6F_Cientifico_Maquina_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Cientifico_Maquina_Texto_1:
.string "We are working on a long-distance\n"
	.string "teleportation system that connects\l"
	.string "the bases of CELADON CITY and this\l"
	.string "one. Do you know how much money we\l"
	.string "would save on transportation if we\l"
	.string "manage to achieve it?$"

RocketHideout_6F_Cientifico_Maquina_Texto_2:
	.string "We did it! All thanks to you stealing\n"
	.string "BILL's patents. Use the system\l"
	.string "whenever you want. You just need to\l"
	.string "interact with the machine to teleport.$"


SeteoIvs::
msgbox SeteoIvs_Texto_1 MSGBOX_AUTOCLOSE
msgbox SeteoIvs_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SeteoIvs_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SeteoIvs_No
delay 10
msgbox SeteoIvs_Texto_4 MSGBOX_AUTOCLOSE
goto SetIVs
release
end

SeteoIvs_No::
msgbox SeteoIvs_No_Texto_1 MSGBOX_AUTOCLOSE
release
end

SeteoIvs_Texto_4:
	.string "Escoga al POKÉMON que quiere potenciar.$"

SeteoIvs_No_Texto_1:
	.string "As you wish, CHIEF ADMIN.$"

SeteoIvs_Texto_3:
	.string "It will cost only 100,000 POKÉ.\n"
	.string "Are you interested, SIR?$"

SeteoIvs_Texto_1:
	.string "We've successfully engineered\n"
	.string "technology to fully exploit the genetic\l"
	.string "potential of a POKÉMON.$"

SeteoIvs_Texto_2:
	.string "As a result, any POKÉMON subjected to\n"
	.string "our treatment will have 31 IVs in all 6\l"
	.string "STATS.$"


