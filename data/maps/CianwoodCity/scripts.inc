CianwoodCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CianwoodCity_OnTransition
map_script MAP_SCRIPT_ON_FRAME_TABLE, CianwoodCity_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, CianwoodCity_OnFrame
	.byte 0
	
CianwoodCity_OnTransition::
setflag FLAG_VISITED_CIANWOOD_CITY
end

CianwoodCity_OnFrame:
map_script_2 VAR_VERDANTURF_TOWN_STATE, 18, CianwoodCity_Miguel_Warp
map_script_2 VAR_UNUSED_0x40F7, 150, CianwoodCity_Recluta
	.2byte 0

CianwoodCity_Miguel_Warp::
setvar VAR_VERDANTURF_TOWN_STATE, 19
warpsilent MAP_ROUTE50, 55, 21
waitmovement 0x0
release
end

CianwoodCity1::
end



CianwoodCity2::
lock     
faceplayer     
msgbox CianwoodCity_Text_2, MSGBOX_DEFAULT
release     
end

CianwoodCity_Text_2:
	.string "CHUCK's POLIWRATH has something\n"
	.string "special. I know POLIWRATH by itself is\l"
	.string "tough, but his is made of different\l"
	.string "stuff, no doubt.$"



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
	.string "Do you want to challenge CHUCK? I'm\n"
	.string "sorry, but my husband left for MOUNT\l"
	.string "MORTAR two weeks ago to train. If you\l"
	.string "decide to explore the mountain and find\l"
	.string "him, could you tell him to come back\l"
	.string "soon? Thank you.$"

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
	.string "This city comes alive quite a bit in the\n"
	.string "summer. It's a spectacle to see the\l"
	.string "STARYU and CHINCHOU shining in the\l"
	.string "water during the night!$"



CianwoodCity9::
lock     
faceplayer     
msgbox CianwoodCity_Text_9, MSGBOX_DEFAULT
release     
end

CianwoodCity_Text_9:
	.string "The rocks to the north can be broken.\n"
	.string "Some people have encountered POKÉMON\l"
	.string "that were hidden underneath them.$"



CianwoodCity11:
end



CianwoodCity12::
lock     
faceplayer     
msgbox CianwoodCity_Text_12, MSGBOX_DEFAULT
release     
end

CianwoodCity_Text_12:
	.string "Our LEADER's POLIWRATH is very\n"
	.string "exceptional; CHUCK rescued it from\l"
	.string "being engulfed by a storm when it was\l"
	.string "just a POLIWAG. Acts like that leave a\l"
	.string "lasting mark.$"



CianwoodCityDocumento_100::
msgbox CianwoodCityDocumento_Text_100, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_100:
.string "CIANWOOD CITY POKÉMON GYM\n"
	.string "LEADER: CHUCK\l"
	.string "Last samurai!$"



CianwoodCityDocumento_101::
msgbox CianwoodCityDocumento_Text_101, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_101:
.string "500 Years of Tradition\n"
	.string "CIANWOOD CITY PHARMACY\l"
	.string "We await your medicinal queries$"



CianwoodCityDocumento_102::
msgbox CianwoodCityDocumento_Text_102, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_102:
	.string "CIANWOOD CITY\n"
	.string "A port surrounded by rough seas$"



CianwoodCityDocumento_103::
msgbox CianwoodCityDocumento_Text_103, MSGBOX_SIGN   
end

CianwoodCityDocumento_Text_103:
	.string "{PAUSE 10}…{PAUSE 10}\n"
	.string "{PAUSE 10}…{PAUSE 10}\l"
	.string "An ancient inscription reads as\l"
	.string "follows: -Don't let appearances\l"
	.string "deceive you. Paradise awaits to the\l"
	.string "west, beyond the rugged mountain-.$"

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
fadeoutbgm 0
playse 566
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
fadeoutbgm 0
playse 590
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
.string "ALDER: ??$"

CianwoodCity_Evento_Mirto_Texto_2:
.string "Oh, {PLAYER}, what a surprise.$"

CianwoodCity_Evento_Mirto_Texto_3:
	.string "I apologize that you couldn't come with\n"
	.string "us to BELL TOWER; AGATHA clearly holds\l"
	.string "you in high esteem. It's only a matter\l"
	.string "of time before the GRAND MASTER\l"
	.string "invites you in; he's been very busy\l"
	.string "lately sorting out various matters…$"

CianwoodCity_Evento_Mirto_Texto_4:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

CianwoodCity_Evento_Mirto_Texto_5:
	.string "As for my POKÉMON, we've tried\n"
	.string "everything, but it's still the same. None\l"
	.string "of the treatments that work with other\l"
	.string "POKÉMON seem to apply to my VOLCARONA.\l"
	.string "I was recommended to visit this\l"
	.string "PHARMACY, the oldest in JOHTO, but\l"
	.string "nothing appears to affect my POKÉMON's\l"
	.string "body. Only its own energy, the same\l"
	.string "energy that's devouring it from within.$"

CianwoodCity_Evento_Mirto_Texto_6:
	.string "Many desire to have the strongest\n"
	.string "POKÉMON. They speak of power as if they\l"
	.string "were mere numbers tossed in the air, but\l"
	.string "they fail to realize the enormous cost\l"
	.string "involved in reaching certain levels for\l"
	.string "POKÉMON physiology. They only see the\l"
	.string "outcome, not the causes and effects\l"
	.string "that lead to it.$"

CianwoodCity_Evento_Mirto_Texto_7:
	.string "Whatever happens, I will never see the\n"
	.string "power and strength of POKÉMON in the\l"
	.string "same way again; I have now encountered\l"
	.string "their ultimate limits. My bond with\l"
	.string "VOLCARONA has been so deep that I have\l"
	.string "pushed beyond the boundary of vigor\l"
	.string "and strength, only to collide with its\l"
	.string "antagonist: illness.$"

CianwoodCity_Evento_Mirto_Texto_8:
	.string "I'll return once again to BELL TOWER,\n"
	.string "{PLAYER}, to explore all my\l"
	.string "possibilities. The wisest and most\l"
	.string "formidable TRAINER in the region will\l"
	.string "soon visit the site. The LEADER of\l"
	.string "ECRUTEAK CITY mentioned him to me; he's\l"
	.string "the only one with a DEEP BOND POKÉMON\l"
	.string "of greater overall power than my\l"
	.string "VOLCARONA. Even if his is a\l"
	.string "PSEUDO-LEGENDARY and we can't assess\l"
	.string "it in the same way. Maybe he knows\l"
	.string "something we've missed.$"

CianwoodCity_Evento_Mirto_Texto_9:
	.string "Good bye, {PLAYER}. If I hurry up,\n"
	.string "maybe I can see the sunset in ECRUTEAK\l"
	.string "CITY. Who knows how long I will\l"
	.string "contemplate this beautiful world with\l"
	.string "VOLCARONA by my side?$"

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
.string "You obtained an HERACRONITE\n"
	.string "from CHUCK's WIFE!!$"

CianwoodCity_Esposa_Anibal_Heracrosita_Texto_1:
	.string "Thank you for letting my husband know;\n"
	.string "he's arrived just in time to celebrate\l"
	.string "the city's festivities and be with his\l"
	.string "family. Take this. CHUCK said he\l"
	.string "wouldn't be using it anymore. He found\l"
	.string "it once when he got lost in the ILEX\l"
	.string "FOREST.$"

CianwoodCity_Esposa_Anibal_Heracrosita_Texto_2:
	.string "My husband said he had never seen such\n"
	.string "brute force as that of a HERACROSS\l"
	.string "holding that item, although he\l"
	.string "also mentioned it made it slower. He\l"
	.string "preferred that samurai POKÉMON from a\l"
	.string "distant region.$"

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
	.string "I've been looking for you, sir! GIOVANNI\n"
	.string "sends an urgent message; the scheduled\l"
	.string "meeting is going to take place in\l"
	.string "GOLDENROD CITY. Right now, he's too\l"
	.string "busy to call you, but he told me I'd find\l"
	.string "you in CIANWOOD CITY…$"

CianwoodCity_Recluta_Texto_2:
	.string "Our LEADER wants you to go to\n"
	.string "GOLDENROD RADIO TOWER immediately and\l"
	.string "attend the big meeting like the rest of\l"
	.string "the high-ranking TEAM ROCKET members.\l"
	.string "That's all, sir.$"

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
	.string "EUSINE: See, this rock is hollow; there's\n"
	.string "a narrow tunnel behind it that goes\l"
	.string "through the mountain.$"

CianwoodCity_Eusine_Camino_Secreto_Texto_2:
	.string "After you cross to the other side, be\n"
	.string "sure to replace the rock properly; we\l"
	.string "wouldn't want this place swarming with\l"
	.string "tourists, right?$"



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

