RocketHideout_4F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_4F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_4F_OnFrame
    .byte 0

RocketHideout_4F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 46, PokemonTower5F_Escena_4_Blaine
map_script_2 VAR_UNUSED_0x40F7, 58, RocketHideout_4F_Escena_Castigo_Reclutas
map_script_2 VAR_ROUTE105_STATE, 5, RocketHideout_4F_Escena_Motoristas
map_script_2 VAR_UNUSED_0x40F7, 805, RocketHideout_4F_Disguise_Player
	.2byte 0


RocketHideout_4F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 804, RocketHideout_4F_Disguise_Player_2
	.2byte 0

RocketHideout_4F_Disguise_Player_2::
setobjectxy 1, 18, 8
applymovement 1, RocketHideout_4F_Disguise_Player_2_move_1
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.10
setvar VAR_UNUSED_0x40F7, 805
end

RocketHideout_4F_Disguise_Player_2_move_1:
face_right
step_end

RocketHideout8F_Mision_Johto_move_12.10:
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
	
	



RocketHideout4F_1::
end

RocketHideout4F_Dialogos_Giovanni::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 216
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC
compare VAR_UNUSED_0x40F7, 178
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC
compare VAR_UNUSED_0x40F7, 167
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda
compare VAR_UNUSED_0x40F7, 116
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto
compare VAR_UNUSED_0x40F7, 112
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak
compare VAR_UNUSED_0x40F7, 106
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera
compare VAR_UNUSED_0x40F7, 101
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph
compare VAR_UNUSED_0x40F7, 92
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga
compare VAR_UNUSED_0x40F7, 94
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas
compare VAR_UNUSED_0x40F7, 78
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios
compare VAR_UNUSED_0x40F7, 71
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph
compare VAR_UNUSED_0x40F7, 62
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves
compare VAR_UNUSED_0x40F7, 51
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda
compare VAR_UNUSED_0x40F7, 43
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda
compare VAR_UNUSED_0x40F7, 38
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1:
.string "Estoy sorprendido de que hayas logrado\n"
	.string "llegar tan lejos. Grandes cambios se\l"
	.string "avecinan, el futuro de KANTO es\l"
	.string "incierto, y lo que puedas encontrarte\l"
	.string "en HOENN una incógnita. Espero que\l"
	.string "hayas disfrutado de este DLC, que\l"
	.string "marca la transición hacia el final del\l"
	.string "hack. Como siempre, puedes encontrarme\l"
	.string "tanto en el canal de youtube\l"
	.string "DragonsdenTV, como en el foro Whack a\l"
	.string "hack. HOENN espera, toda historia tiene\l"
	.string "su fin, pero esta... aún no, sigues\l"
	.string "participando en su devenir, de modo\l"
	.string "que...mantente mejorando hasta la\l"
	.string "próxima versión.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1:
.string "Enjoy JOHTO {PLAYER}, squeeze out\n"
	.string "every moment and place and get further\l"
	.string "than anyone has. Someday, you will face\l"
	.string "back and see how much you have seen\l"
	.string "lived… Every story has its end, but this\l"
	.string "one… not for now.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1:
.string "We'll be finding out once and for all the\n"
	.string "mystery of the -pendiente, no portear-.\l"
	.string "Once we do it, there will be nothing that\l"
	.string "could prevent us from turning both\l"
	.string "KANTO and JOHTO into global powers in\l"
	.string "the POKÉMON WORLD.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1:
.string "JOHTO region is the one with the most\n"
	.string "history and tradition in the known\l"
	.string "world. You can't deny that something…\l"
	.string "spiritual is going on there. And perhaps\l"
	.string "we will never get to comprehend it at\l"
	.string "all, nevertheless, we cannot ignore it's\l"
	.string "power.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1:
.string "The POKÉMON LEAGUE has maintained its\n"
	.string "impassable position since the war\l"
	.string "happened, but because of the lack of\l"
	.string "opposition, they've gotten weaker.\l"
	.string "LANCE trust his POKÉMON because of\l"
	.string "their high BASE STATS, but since you\l"
	.string "have defeated the SACRED KANTO BIRDS,\l"
	.string "you already know that BASE STATS are\l"
	.string "not the only thing needed for winning a\l"
	.string "battle.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1:
.string "Go to the POKÉMON MANSION, {PLAYER},\n"
	.string "and show OAK how a TRAINER fights when\l"
	.string "he's synchronized with his POKÉMON.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1:
.string "Maybe that secret entrance is in the\n"
	.string "outsides of LAVENDER TOWN, have you\l"
	.string "checked the south, ROUTE 12?$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1:
.string "Talk to the SILPH receptionist, she will\n"
	.string "show you that grand private library\l"
	.string "they have underground. As I've been\l"
	.string "told, all the data of thet -pendiente, no\l"
	.string "portear- are in the S3, in the last room.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1:
.string "Relax, {PLAYER}, and enjoy the\n"
	.string "islands. There are many things to do\l"
	.string "there, if you know where to go, maybe\l"
	.string "you should pay ARCHER a visit, he may\l"
	.string "show you some of their secrets. After\l"
	.string "all, no one knows the SEVII ISLANDS\l"
	.string "better than him.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1:
.string "You can fight the GYMS in the other\n"
	.string "that you want to, however, I'd recommend\l"
	.string "that you beat them in the traditional\l"
	.string "order. Also, CINNAMON GYM is closed\l"
	.string "right now, we need to wait until that\l"
	.string "scumbag of BLAINE re-opens it. When\l"
	.string "you obtain the 7th medal, remember that\l"
	.string "you'll have to beat VIRIDIAN CITY's one,\l"
	.string "our own GYM.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1:
.string "I trust you, {PLAYER}. SILPH's\n"
	.string "security has a reputation for being\l"
	.string "relentless, but they've never faced\l"
	.string "trainers like ANDRA or you. Go to SILPH,\l"
	.string "and show them how a real ROCKET fights!$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1:
.string "We've located ARTICUNO in the SEAFOAM\n"
	.string "ISLANDS, so you'll need to cross all\l"
	.string "these ROUTES: 12, 13, 14 and 15, on the\l"
	.string "south of LAVENDER TOWN to finally\l"
	.string "arrive in FUCHSIA CITY. Don't\l"
	.string "underestimate the situation,\l"
	.string "{PLAYER}. My advice is to train on the\l"
	.string "way to ARTICUNO, you need more than\l"
	.string "just knowing how to fight to defeat a\l"
	.string "SACRED BIRD.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1:
.string "GIOVANNI: So you think I'm being\n"
	.string "inefficient for sitting here without\l"
	.string "doing a thing, compared to the rest of\l"
	.string "executives that are constantly working\l"
	.string "with every class of technology. But, let\l"
	.string "me tell you something, kid, when you\l"
	.string "have seen as much as I have, you'll\l"
	.string "realize that your inner thinking is more\l"
	.string "powerful and valuable than anything\l"
	.string "you can find anywhere.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1:
.string "Our meeting with FUJI is vital for us,\n"
	.string "{PLAYER}. Once in the POKÉMON TOWER,\l"
	.string "BLUE will assure the lower floors, while\l"
	.string "you'll be guarding the uppers and will\l"
	.string "warn PROTON if anything happens.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1:
.string "Got it? I want that supposed\n"
	.string "KANGASKHAN out of the ROCK TUNNEL. You\l"
	.string "can get there from CELADON's\l"
	.string "undergrounds, which will lead you to\l"
	.string "LAVENDER TOWN. From there, walk a bit to\l"
	.string "the North and you'll see the entrance.\l"
	.string "Also, do not enter the POKÉMON TOWER,\l"
	.string "we already have plans there.$"




RocketHideout4F_3::
lock     
faceplayer     
msgbox RocketHideout4F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_3:
.string "Don't worry comrade! If anyone manages\n"
	.string "to get in here, he'll never reach our\l"
	.string "LEADER! Not without the LIFT KEY\l"
	.string "hahaha!$"



RocketHideout4F_5::
lock     
faceplayer     
msgbox RocketHideout4F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_5:
.string "Be sure to maintain distance and\n"
	.string "respect if you talk to our LEADER,\l"
	.string "grunt. If there is something that\l"
	.string "defines us is our impeccable fulfillment\l"
	.string "of the protocol.$"



RocketHideout4F_6::
lock     
faceplayer     
msgbox RocketHideout4F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_6:
.string "Be sure to maintain distance and\n"
	.string "respect if you talk to our LEADER,\l"
	.string "grunt. If there is something that\l"
	.string "defines us is our impeccable fulfillment\l"
	.string "of the protocol.$"



RocketHideout4F_7::
end



RocketHideout4F_10::
end

RocketHideout_4F_Mision_Andra_Fucsia::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 1
addobject 10
playbgm 559, FALSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5
waitmovement 0x0
fadedefaultbgm
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 9
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_2::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_2
waitmovement 0x0
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 1
addobject 10
playbgm 559, FALSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_1.1
waitmovement 0x0
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_1 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Andra_Fucsia_move_6
waitmovement 0x0
fadedefaultbgm
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 9
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_Texto_1:
.string "ANDRA: Always late! You haven't seen\n"
	.string "GIOVANNI yet, and our great leader has\l"
	.string "already assigned me a mission! What do\l"
	.string "you think? Seems like there are a lot of\l"
	.string "disturbances in FUCHSIA CITY with\l"
	.string "motorcyclists and CYCLING ROAD, that's\l"
	.string "where we come in as mediators, you know.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_2:
.string "What do you think about our new\n"
	.string "workplace? It seems like PETREL was\l"
	.string "overstating when he said CELADON den\l"
	.string "had no comparison with the ROUTE 5 one,\l"
	.string "it is true, is much bigger but looks very\l"
	.string "similar.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_3:
.string "Anyways, I'm gonna head out of here, my\n"
	.string "first mission must be flawless, and it\l"
	.string "will be done perfectly. By the way,\l"
	.string "GIOVANNI asked me about you; you\l"
	.string "should go to show up at his office,\l"
	.string "maybe he wants something specific from\l"
	.string "you.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_4:
.string "As I said!\n"
	.string "FUCHSIA CITY is mine!$"

RocketHideout_4F_Mision_Andra_Fucsia_move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_1.1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_2:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_3:
emote_exclamation_mark
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_4:
walk_in_place_down
walk_in_place_right
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5:
walk_up
walk_right
walk_right
walk_right
face_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.1:
walk_right
walk_right
walk_right
face_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_6:
walk_down
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_1::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
fadeoutbgm 0
playse 0
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2

RocketHideout_4F_Giovanni_Mision_1_2::
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
fadeoutbgm 0
playse 0
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_2.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_1_Parte2


RocketHideout_4F_Giovanni_Mision_1_Parte2::
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_3
waitmovement 0x0
fadeoutbgm 0
playse 582
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_10 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11 MSGBOX_AUTOCLOSE
fadescreen 1
delay 60
fadescreen 0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_16 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 4
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
playse MUS_RG_SILPH
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_17 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_12
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_12
waitmovement 0x0
delay 30
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_19 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_25 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_26 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_27 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_13
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 4
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_28 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_29 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_30 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_31 MSGBOX_AUTOCLOSE
fadedefaultbgm
setvar VAR_UNUSED_0x40F7, 39
release
end

RocketHideout_4F_Giovanni_Mision_1_Texto_1:
.string "????: {PLAYER}, am I wrong?\n"
	.string "Come in.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_2:
.string "????: Presenting to you, HIGH RANK\n"
	.string "GRUNT {PLAYER}, sir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_3:
.string "Had served officially in 4 missions,\n"
	.string "succeeding at 3 of them, he prevented\l"
	.string "CONSUL from CHRONO ISLAND from\l"
	.string "undermining our commercial situation,\l"
	.string "he played a crucial role stealing BILL's\l"
	.string "patent, greatly improving our\l"
	.string "communications, he also stole the\l"
	.string "famous relic from SS.ANNE CAPTAIN,\l"
	.string "which is currently being investigated\l"
	.string "by our best scientists, his only defeat\l"
	.string "in a real fight was against to that\l"
	.string "mysterious PALLET TOWN trainer on\l"
	.string "MT.MOON fail, and as some people says,\l"
	.string "he was the unique GRUNT who was not\l"
	.string "intimidated by the ridiculous power of\l"
	.string "his rival, fighting until the end.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_4:
.string "GIOVANNI: All right, PROTON, thanks for\n"
	.string "introducing him.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_5:
.string "As you can see, {PLAYER}, we don't\n"
	.string "overlook anything, and we consider each\l"
	.string "one of the results of every asset that\l"
	.string "comprises this grand organization.\l"
	.string "Evaluating their contributions is the\l"
	.string "fairest way to determine the place they\l"
	.string "deserve, don't you think?$"

RocketHideout_4F_Giovanni_Mision_1_Texto_6:
.string "So you come from CHRONO ISLAND, you\n"
	.string "may think that most of the things that\l"
	.string "you saw are kind of awkward. But let me\l"
	.string "tell you, despite the strange things,\l"
	.string "KANTO is a region which is worthed\l"
	.string "visiting and exploring. There are many\l"
	.string "iconic places, really good POKÉMON and a\l"
	.string "unique history. Nevertheless, it's\l"
	.string "people… we need to talk about them\l"
	.string "apart.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7:
.string "You were recruited as a ROCKET for\n"
	.string "stealing POKÉMON and other valuable\l"
	.string "objects so we have a good balance in\l"
	.string "cash. That is the main function of 90%\l"
	.string "of grunts: unethical, but still\l"
	.string "necessary.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_8:
.string "However, both ANDRA and you were\n"
	.string "promoted to HIGH RANK, which keeps you\l"
	.string "far from this kind of missions so you\l"
	.string "can take part in more relevant things\l"
	.string "for TEAM ROCKET, especially if we talk\l"
	.string "in medium and long time terms.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_9:
.string "This also means that you get access to\n"
	.string "the organization's main propose\l"
	.string "intentions, the real situation of\l"
	.string "today's KANTO and its history.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_10:
.string "But it's still too early, I want you to\n"
	.string "grow up and learn more under my\l"
	.string "command, to explore this region more, to\l"
	.string "enjoy all of it… We will have a meeting,\l"
	.string "when the appropriate time comes.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11:
.string "Apart from that, let's talk about the\n"
	.string "other thing I wanted. Talk about that\l"
	.string "mysterious trainer, after all, you were\l"
	.string "the one who fought for the longest\l"
	.string "time. Tell me everything about him: his\l"
	.string "POKÉMON, objects, the moves he used,\l"
	.string "his strategies, his appearance,\l"
	.string "possible weaknesses… anything you can\l"
	.string "think about.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12:
.string "GIOVANNI: … … I see, he doesn't seem like\n"
	.string "the average, CHARMELEON is a POKÉMON\l"
	.string "that's not seen everyday, at least not\l"
	.string "seen in the wild since the great war.\l"
	.string "You also said that he carried a POKÉDEX,\l"
	.string "all together meaning that he comes from\l"
	.string "PALLET TOWN, also the team that you\l"
	.string "described is extremely powerful if we\l"
	.string "are conscious of the distance between\l"
	.string "PALLET TOWN and MT. MOON added to the\l"
	.string "fact that his experience as a trainer is\l"
	.string "still very little.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_13:
.string "Maybe you think someone like him is\n"
	.string "impossible to beat and certainly a\l"
	.string "menace, but trust me when I say that\l"
	.string "you cannot define KANTO with a simple\l"
	.string "trainer. No matter how strong he is, no\l"
	.string "one is unbeatable, absolutely no one,\l"
	.string "and everyone can be defeated. You will\l"
	.string "understand how far are what you think\l"
	.string "are your limits the further you get into\l"
	.string "our organization.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_14:
.string "That's all about that mysterious\n"
	.string "trainer, now let's move on to the third\l"
	.string "and last thing I wanted to talk about.\l"
	.string "So, the thing is…$"

RocketHideout_4F_Giovanni_Mision_1_Texto_15:
.string "GRUNT: Excuse me sir, the FUCHSIA CITY\n"
	.string "GYM LEADER wants to talk with you\l"
	.string "immediately, he said it is an emergency.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_16:
.string "GIOVANNI: Let him in.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_17:
 .string "GIOVANNI: I hope you have a great\n"
	.string "reason, KOGA. You have just interrupted\l"
	.string "my meeting with the young grunt\l"
	.string "{PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_18:
.string "KOGA: Haven't you noticed yet? There\n"
	.string "are rumors that a KANGASKHAN has been\l"
	.string "seen in the deepest of ROCK TUNNEL.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_19:
.string "GIOVANNI: Go on.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20:
.string "KOGA: If this is true, SAFARI ZONE would\n"
	.string "lose a lot of people trying to catch\l"
	.string "that uncommon motherly POKÉMON on\l"
	.string "their own. We had advertised SAFARI\l"
	.string "ZONE as a place where exclusive\l"
	.string "POKÉMON can be caught, like\l"
	.string "KANGASKHAN, which serves as our symbol\l"
	.string "of KANTO's nature, It is supposed to be\l"
	.string "available only through our captive\l"
	.string "breeding program, someone trying to be\l"
	.string "funny must have released that POKÉMON\l"
	.string "there, previously catching it at our\l"
	.string "safari.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21:
.string "KOGA: GIOVANNI, because you are a 20%\n"
	.string "owner of SAFARI ZONE, I've come to warn\l"
	.string "you, but I'm also here to ask you to\l"
	.string "handle this situation. You know our\l"
	.string "losses will be substantial if this rumor\l"
	.string "is true. The exclusivity of SAFARI ZONE\l"
	.string "could vanish instantly.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22:
.string "GIOVANNI: I get it KOGA, I will handle\n"
	.string "this, do not worry about that, you know\l"
	.string "what I think about SAFARI ZONE though,\l"
	.string "it was a great investment that became\l"
	.string "less trough time, even as prices lower,\l"
	.string "fewer and fewer people go., dealing with\l"
	.string "this right now will just delay it from\l"
	.string "bankrupt, I bet in less than 3 years it\l"
	.string "will no longer exists, even so stopping\l"
	.string "it from falling right now would mean a\l"
	.string "several million profits.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_23:
.string "KOGA: I'm counting on you then.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_24:
.string "GIOVANNI: No one except a ROCKET with\n"
	.string "a KANGASKHAN will exit from there, if\l"
	.string "there really is one inside.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_25:
.string "KOGA: I'll be attentive to any updates.\n"
	.string "We must act quickly, a lot of curious\l"
	.string "people will get there at any moment.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_26:
.string "GIOVANNI: That's all, KOGA, I'll send you\n"
	.string "the results as soon as I get them. Now\l"
	.string "if you excuse me, I got a chat to finish.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_27:
.string "KOGA: … …\n"
	.string "Long live to good old KANTO.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_28:
.string "GIOVANNI: Change of plans {PLAYER},\n"
	.string "you have already heard KOGA, your\l"
	.string "mission now will be to clean even the\l"
	.string "deepest nook at ROCK TUNNEL in\l"
	.string "searching of that supposed\l"
	.string "KANGASKHAN, clean all proofs, every\l"
	.string "possible trace that can indicate a\l"
	.string "KANGASKHAN was there.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_29:
.string "You can find ROCK TUNNEL by going\n"
	.string "through UNDERGROUND PATH in the east\l"
	.string "of the city, you can't get lost from\l"
	.string "there, you will arrive at LAVENDER TOWN\l"
	.string "and once there, ROCK TUNNEL is to the\l"
	.string "north.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_30:
.string "That's all {PLAYER}, if that\n"
	.string "KANGASKHAN exists, capture it and bring\l"
	.string "it here as proof, also; avoid entering\l"
	.string "LAVENDER'S POKÉMON TOWER, I don't wanna\l"
	.string "any ROCKET there, at least for now, got\l"
	.string "it?$"

RocketHideout_4F_Giovanni_Mision_1_Texto_31:
.string "GIOVANNI: Then get to work!$"


RocketHideout_4F_Giovanni_Mision_1_move_1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_2:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_right
walk_slow_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_2.1:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_right
walk_slow_up
step_end


RocketHideout_4F_Giovanni_Mision_1_move_3:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_4:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_6:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_7:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_9:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_10:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_slow_left
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_11:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_12:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_1_move_13:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto


RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Resto::
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 15
playse SE_SHOP
addmoney 95000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1, MSGBOX_DEFAULT
givemon SPECIES_KABUTO, 28, ITEM_HARD_STONE
waitfanfare
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 8
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_9
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20 MSGBOX_AUTOCLOSE
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23 MSGBOX_AUTOCLOSE
playse MUS_RG_RIVAL_EXIT
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 8
delay 15
playse MUS_RG_ROCKET_HIDEOUT 
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 44
release
end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1:
.string "{PLAYER}, how timely! Already, I have\n"
	.string "been informed of your excellent job\l"
	.string "snatching the KANGASKHAN from that\l"
	.string "opportunist at the last moment.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2:
.string "I know that scientist already took\n"
	.string "advantage of the situation at MT.MOON,\l"
	.string "you should know this is not the first\l"
	.string "time that he has caused us problems, he\l"
	.string "is some kind of rare POKÉMON fanatic\l"
	.string "scavenger who will do anything to get\l"
	.string "them, no matter what, like BILL, but\l"
	.string "without the economic resources he has.\l"
	.string "I am glad you taught that coward a\l"
	.string "lesson in the name of TEAM ROCKET,\l"
	.string "that, besides finding the famous\l"
	.string "KANGASKHAN, deserves a great reward.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3:
.string "You just earnt 95,000 POKÉS!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4:
.string "GIOVANNI: And, for celebrating your\n"
	.string "victory against that opportunist, TEAM\l"
	.string "ROCKET will reward you with a KABUTO.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5:
.string "Well, technically you're recovering that\n"
	.string "DOME FOSSIL that was taken from you\l"
	.string "time ago and with interest, it is now a\l"
	.string "KABUTO and trained up to level 28, if I'm\l"
	.string "not messing up. PROTON! GIVE {PLAYER}\l"
	.string "the stolen KABUTO!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6:
.string "PROTON: With pleasure, boss.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1:
.string "YOU OBTAINED A KABUTO AT LV.28!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7:
.string "GIOVANNI: Technically this fossil is\n"
	.string "worthed hundreds of thousand POKÉS on\l"
	.string "the black market, but your story with it\l"
	.string "is worthed even more…$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8:
.string "Moving on, we will examine the\n"
	.string "precedence of that KANGASKHAN so we\l"
	.string "know where it comes from. It's still a\l"
	.string "mystery that a POKÉMON like that is\l"
	.string "found in that place.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9:
	.string "Well, {PLAYER}, when I instructed you\n"
	.string "about your last mission, I told you that\l"
	.string "you mustn't get close to the POKÉMON\l"
	.string "TOWER due to the fact that that place\l"
	.string "is closely related with our next move…$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10:
.string "We're sending a full platoon so we can\n"
	.string "collect as much CUBONE's skulls as we\l"
	.string "can, since they're very worthed on the\l"
	.string "black market.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11:
	.string "However, it's just a cover-up, an excuse\n"
	.string "for everyone to look up because of our\l"
	.string "fame. Our true objective is calling the\l"
	.string "attention of FUJI so he gets to\l"
	.string "LAVENDER'S TOWER at the exact moment…$"


RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12:
.string "FUJI was one of our best scientists,\n"
	.string "he's the only person that knows every\l"
	.string "detail about our most crucial and\l"
	.string "important projects, {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13:
.string "Your mission is simple, {PLAYER}, while\n"
	.string "PROTON makes business in private on\l"
	.string "the last floor of the tower, you will be\l"
	.string "standing on the stairs that lead there,\l"
	.string "so in case that something happens you\l"
	.string "can warn both of them. You also will be\l"
	.string "guaranteeing the privacy of the\l"
	.string "conversation. I don't want absolutely\l"
	.string "anyone to get to the last floor of that\l"
	.string "tower until the business chat is done,\l"
	.string "understood?$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14:
.string "Good, nothing mustn't go wrong in this\n"
	.string "mission, {PLAYER}. Because of that,\l"
	.string "you will team up, apart from other\l"
	.string "grunts, with a TRAINER that, as far as I\l"
	.string "know, you already know each other…$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15:
	.string "GIOVANNI: Huh, surprised? BLUE agreed\n"
	.string "to become our ally while he was crossing\l"
	.string "the NUGGET BRIDGE on ROUTE 24. Because\l"
	.string "of: his acting at BILL's, the fact that\l"
	.string "he's OAK's grandson and RED's direct\l"
	.string "rival, if I'm not wrong; he's the perfect\l"
	.string "person for becoming our double agent.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16:
	.string "BLUE: So you're that ROCKET that I\n"
	.string "fought back in the SS.ANNE. Yo hide well\l"
	.string "your best soldiers, GIOVANNI, you'd\l"
	.string "deploy more grunts like {PLAYER} all\l"
	.string "over the common ROUTES. It's hardly\l"
	.string "impossible to train hard if there are\l"
	.string "only normal trainers. Could you believe\l"
	.string "that most of your guys are still\l"
	.string "carrying ZUBATS and RATTATAS at level\l"
	.string "17? You'd fire 'em all ‘cause of\l"
	.string "incompetents.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17:
.string "GIOVANNI: You still have many things\n"
	.string "yet to see, young one. If you think that\l"
	.string "GYM LEADERS are the best ones around,\l"
	.string "let me tell you that you're wrong,\l"
	.string "however, I haven't called you so we talk\l"
	.string "about that.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18:
	.string "The unique option that could ruin this\n"
	.string "plan is RED, my sources ubicates him at\l"
	.string "ROUTE 10, at the foot of ROCK TUNNEL,\l"
	.string "you were lucky to not encounter him\l"
	.string "again on your last mission {PLAYER},\l"
	.string "due to his rate of progress, it seems\l"
	.string "like to he will arrive to LAVENDER TOWN\l"
	.string "at same time as the mission, just in\l"
	.string "case he enters LAVENDER TOWER, we\l"
	.string "can't risk having a MT.MOON 2.0, this is\l"
	.string "where you will act BLUE.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19:
	.string "You will be notified when RED arrives,\n"
	.string "and you will be on the lower floors of\l"
	.string "the TOWER, once he appears, you will\l"
	.string "pretend being there spontaneously,\l"
	.string "without mentioning TEAM ROCKET, try\l"
	.string "convincing him to back away, talk him\l"
	.string "about GHOST of the TOWER, that needs a\l"
	.string "SCOPE SILPH, etc. If he continues ahead\l"
	.string "anyways, notify {PLAYER} immediately.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20:
	.string "{PLAYER}! I don't want you to seek\n"
	.string "revenge with RED, in case you get\l"
	.string "notified of his imminent arrival, go up\l"
	.string "to the last floor and you will notify\l"
	.string "PROTON, that's the only reason to\l"
	.string "interrupt their meeting.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21:
	.string "BLUE: Why do you care that much about\n"
	.string "RED! If I fight together with\l"
	.string "{PLAYER} for sure we would defeat\l"
	.string "him!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22:
	.string "GIOVANNI: The truth is that no one\n"
	.string "actually was even close to defeating\l"
	.string "him, to an unattainable strength we\l"
	.string "just can use our cunning to make him\l"
	.string "appear where we want… and gain some\l"
	.string "time.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23:
.string "BLUE: Hmph!\n"
	.string "I will turn the table against RED, you\l"
	.string "are going to see.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24:
	.string "GIOVANNI: A bit arrogant and\n"
	.string "prepotent, but has a big potential…\l"
	.string "PROTON will meet you soon {PLAYER},\l"
	.string "get ahead along all the rest of GRUNTS\l"
	.string "to start with the CUBONES lure and\l"
	.string "attract FUJI, I count on you.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_1.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_3:
walk_down
walk_down
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4:
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_5:
walk_right
walk_up
walk_up
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_6:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_9:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_10:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_izq::
lockall
playse SE_DING_DONG
delay 40
playse SE_PIN
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Llegada_Rojo

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_der::
lockall
playse SE_DING_DONG
delay 40
playse SE_PIN
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Llegada_Rojo

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo::
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_3 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5
waitmovement 0x0
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_9
waitmovement 0x0
delay 20
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 20
playse SE_SELECT
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16 MSGBOX_AUTOCLOSE
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
special DrawWholeMapView
delay 60
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_11
waitmovement 0x0
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12
waitmovement 0x0
setflag FLAG_HIDE_FANCLUB_OLD_LADY
removeobject 10
playse SE_EXIT
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
fadescreen 1
delay 20
playse SE_EXIT
addobject 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13
waitmovement 0x0
fadescreen 0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14
waitmovement 0x0
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 5, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
delay 10
addobject 5
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_16
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_17
waitmovement 0x0
playse SE_EXIT
removeobject 6
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_22 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
removeobject 10
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_18
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 54
warp MAP_ROCKET_HIDEOUT_5F, 2, 2
release
end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1:
	.string "WARNING TO ALL GRUNTS! A mysterious\n"
	.string "TRAINER dressed as RED has infiltrated\l"
	.string "into our BASE!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_2:
	.string "GIOVANNI: Oh, we don't need to keep\n"
	.string "spying to get information about him, he\l"
	.string "just came to the lion's den.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_3:
	.string "GRUNT: Sir orders! All of us are falling\n"
	.string "as dominoes tokens against their\l"
	.string "POKÉMONs power!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4:
.string "PROTÓN: ¡Llamad a todos los\n"
	.string "RECLUTAS DE ALTO RANGO y\l"
	.string "EJECUTIVOS disponibles en la BASE!\l"
	.string "¡Proteged el acceso a nuestro\l"
	.string "LÍDER!\l"
	.string "¡Si fuere necesario, recurrid a\l"
	.string "nuestra sala de específemenes\l"
	.string "esp...!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5:
.string "GIOVANNI: ¡ALTO!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6:
.string "GIOVANNI: No vamos a hacer nada de\n"
	.string "eso PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7:
.string "PROTÓN: P-pero señor...$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8:
.string "GIOVANNI: Quiero a todos los\n"
	.string "EJECUTIVOS y SOLDADOS DE ALTO\l"
	.string "RANGO dentro de la BASE ROCKET\l"
	.string "PROFUNDA ya.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9:
.string "RECLUTA: A sus órdenes JEFE.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10:
.string "GIOVANNI: PROTÓN, proporcióname\n"
	.string "información detallada sobre el\l"
	.string "equipo y niveles que actualmente\l"
	.string "maneja la LÍDER DE GIMNASIO de\l"
	.string "CIUDAD AZULONA, ERIKA.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11:
.string "PROTÓN: Enseguida señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12:
.string "PROTÓN: La LÍDER ERIKA cuenta a\n"
	.string "día de hoy con un VICTREBEEL al\l"
	.string "nivel 29, un TANGELA al nivel 24,\l"
	.string "y un VILEPLUME al nivel 29.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13:
.string "GIOVANNI: Perfecto, ¿a qué nivel\n"
	.string "estaba el KANGASKHAN perdido que\l"
	.string "{PLAYER} atrapó en el TÚNEL ROCA?$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14:
.string "PROTÓN: Exactamente al nivel 29,\n"
	.string "señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15:
.string "GIOVANNI: Bien, da el pego\n"
	.string "perfectamente con la jerarquía que\l"
	.string "ese infeliz puede esperarse de\l"
	.string "alguien como yo, traéme a ese\l"
	.string "KANGASKHAN y a otros dos POKÉMON\l"
	.string "de nivel y poder algo inferior,\l"
	.string "ONIX y RHYHORN encajarían.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16:
.string "PROTÓN: Enseguida, jefe.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17:
.string "GIOVANNI: Nunca enseñes todas tus\n"
	.string "cartas a tu enemigo {PLAYER}, por\l"
	.string "muy fuerte que ese ROJO sea, nunca\l"
	.string "podrá combatir contra algo que\l"
	.string "siquiera sabe que existe, para\l"
	.string "cuando lo sepa, será demasiado\l"
	.string "tarde para él, pues no habrá\l"
	.string "dispuesto de tiempo para\l"
	.string "adaptarse, nunca llegará a nuestro\l"
	.string "nivel combatiendo con la\l"
	.string "mediocridad que abunda en los\l"
	.string "pueblos y ciudades de esta región.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18:
.string "PROTÓN: Aquí tiene señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19:
.string "GIOVANNI: No quiero que cometas\n"
	.string "ninguna estupidez {PLAYER}, sé que\l"
	.string "deseas medir tus fuerzas con ese\l"
	.string "entrenador después de que te\l"
	.string "derrotara en el MT.MOON, siendo\l"
	.string "ahora más fuerte y capaz que en\l"
	.string "ese entonces, pero aún no es el\l"
	.string "momento, lo prioritario ahora es\l"
	.string "mantener a ese chico en el\l"
	.string "desconocimiento hasta al menos\l"
	.string "averiguar sus intenciones...$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20:
.string "RECLUTA: Señor, acaba de robarle\n"
	.string "su LLAVE ASCENSOR a un recluta, ya\l"
	.string "nada le impide su acceso a usted.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21:
.string "GIOVANNI: Espléndido.\n"
	.string "¡{PLAYER}!\l"
	.string "¡PROTÓN!\l"
	.string "¡Adentro ya!\l"
	.string "¡Se avisará a todo el personal\l"
	.string "cuando esto acabe!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_22:
.string "PROTÓN: ¡A la orden!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3:
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_3.1:
walk_up
walk_up
walk_right
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_4:
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5:
walk_down
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_9:
walk_right
walk_up
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_10:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_11:
walk_left
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_12:
walk_down
walk_left
walk_left
walk_down
walk_down
walk_right
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13:
walk_up
walk_left
walk_left
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14:
walk_right
walk_right
walk_down
walk_in_place_left
step_end


RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_15:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_16:
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_17:
walk_right
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_18:
walk_down
walk_right
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Izq::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Base_Profunda

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Der::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2.1
waitmovement 0x0
goto RocketHideout_4F_Giovanni_Mision_Base_Profunda

RocketHideout_4F_Giovanni_Mision_Base_Profunda::
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1 MSGBOX_AUTOCLOSE
playse SE_SHOP
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 40000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_CUBONE, 20, ITEM_THICK_CLUB
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15 MSGBOX_AUTOCLOSE
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
special DrawWholeMapView
delay 60
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1
waitmovement 0x0
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 52
release
end

RocketHideout_4F_PC::
compare VAR_UNUSED_0x40F7, 51
goto_if_gt RocketHideout_4F_Warp
msgbox RocketHideout_4F_PC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_4F_Warp::
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 20, 8, 0x255, TRUE
setmetatile 21, 8, 0x256, TRUE
setmetatile 22, 8, 0x257, TRUE
setmetatile 22, 9, 0x25F, TRUE
setmetatile 21, 9, 0x25E, TRUE
setmetatile 20, 9, 0x25D, FALSE
setmetatile 20, 10, 0x265, FALSE
setmetatile 21, 10, 0x266, TRUE
setmetatile 22, 10, 0x267, TRUE
special DrawWholeMapView
delay 60
release
end

RocketHideout_4F_Warp_No::
release
end

RocketHideout_4F_PC_Texto_1:
.string "Este ordenador parece que cumple\n"
	.string "una función de gran importancia...$"

RocketHideout_4F_Warp_Text_YesNo:
.string "¿Quieres activar la entrada\n"
	.string "secreta?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1:
.string "GIOVANNI: Excelente trabajo en\n"
	.string "FUCSIA, ANDRA, los DRATINI y\l"
	.string "SCYTHER recolectados en la ZONA\l"
	.string "SAFARI se venderán a precio de oro\l"
	.string "como premio aquí en nuestro\l"
	.string "CASINO, aquí tienes tu recompensa.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2:
.string "GIOVANNI: Tú también estás de\n"
	.string "vuelta {PLAYER}, has mantenido en\l"
	.string "privado tal y como te ordené la\l"
	.string "conversación entre FUJI y PROTÓN,\l"
	.string "una negociación clave para\l"
	.string "nosotros, por ello aquí tienes tu\l"
	.string "recompensa.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3:
.string "¡Acabas de facturar 40000 POKÉS!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4:
.string "GIOVANNI: Y otra cosa más, en\n"
	.string "nombre del TEAM ROCKET te obsequio\l"
	.string "con uno de los CUBONES robados en\l"
	.string "la TORRE POKÉMON, pero no un\l"
	.string "CUBONE cualquiera, este lleva\l"
	.string "equipado un HUESO GRUESO, objeto\l"
	.string "que multiplica por 2 su ataque\l"
	.string "físico y a su evolución MAROWAK,\l"
	.string "un regalo digno del que hizo\l"
	.string "posible su captura batiendo a\l"
	.string "FUJI.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5:
.string "¡HAS RECIBIDO UN CUBONE AL NV:20!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6:
.string "GIOVANNI: Cerrando este tema...\n"
	.string "Os interesará saber que\l"
	.string "investigando al KANGASKHAN\l"
	.string "encontrado en el TÚNEL ROCA, vimos\l"
	.string "que su fisiología era muy similar\l"
	.string "a la de la línea evolutiva\l"
	.string "CUBONE-MAROWAK.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7:
.string "GIOVANNI: En la ZONA SAFARI todos\n"
	.string "los KANGASKHAN son criados con\l"
	.string "todo tipo de comodidades, y las\l"
	.string "crías se desarrollan siempre hasta\l"
	.string "alcanzar esa fase...\l"
	.string "La línea evolutiva de\l"
	.string "CUBONE-MAROWAK no está clara, un\l"
	.string "CUBONE surge como tal cuando toma\l"
	.string "el cráneo de su madre fallecida,\l"
	.string "sin embargo, ¿si su madre no\l"
	.string "falleciese en qué se convertiría?\l"
	.string "Según lo que indica nuestro\l"
	.string "estudio, en un KANGASKHAN.\l"
	.string "De modo que si de repente en la\l"
	.string "ZONA SAFARI acabásemos de forma\l"
	.string "prematura con los KANGASKHAN\l"
	.string "adultos, las crías por\l"
	.string "circunstancias acabarían siendo\l"
	.string "CUBONES...$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8:
.string "GIOVANNI: La forma más fiel de\n"
	.string "probar esto sería derrumbar la\l"
	.string "TORRE LAVANDA, obligar a los\l"
	.string "CUBONE de allí a emigrar al TÚNEL\l"
	.string "ROCA en masa, un lugar más\l"
	.string "propicio para su reproducción que\l"
	.string "esa tétrica torre, y ver que\l"
	.string "ocurre.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9:
.string "GIOVANNI: Si al tiempo comenzaran\n"
	.string "a aparecer KANGASKHAN de forma\l"
	.string "frecuente, ello constituiría una\l"
	.string "prueba definitiva de este vínculo\l"
	.string "entre especies, tal vez el\l"
	.string "fenómeno KANGASKHAN del TÚNEL\l"
	.string "ROCA haya sido un caso aislado de\l"
	.string "una cría que sin llegar a ser\l"
	.string "CUBONE emigró al túnel, logró\l"
	.string "sobrevivir y se convirtió en\l"
	.string "KANGASKHAN por su cuenta, tal vez\l"
	.string "un fenómeno que veremos cada vez\l"
	.string "más con el paso del tiempo, si\l"
	.string "toda esta hipótesis es cierta\l"
	.string "claro.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10:
.string "GIOVANNI: Dejando esto de lado, y\n"
	.string "aprovechando que estáis los dos\l"
	.string "aquí, ambos habéis demostrado ser\l"
	.string "competentes, lleváis 6 misiones\l"
	.string "con nosotros habiendo cumplido de\l"
	.string "forma satisfactoria en 5, algunas\l"
	.string "de ellas de gran importancia, como\l"
	.string "la patente robada a BILL y la\l"
	.string "reliquia del SS.ANNE, lo que os ha\l"
	.string "procurado una buena cantidad de\l"
	.string "ingresos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11:
.string "GIOVANNI: Sin embargo, como habéis\n"
	.string "podido comprobar, el TEAM ROCKET\l"
	.string "tiene vetada su presencia en\l"
	.string "cualquier comercio público de la\l"
	.string "región, incluído el enorme centro\l"
	.string "comercial de esta ciudad.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12:
.string "GIOVANNI: Pero no debéis\n"
	.string "preocuparos, sé que dos\l"
	.string "entrenadores como vosotros estarán\l"
	.string "ansiosos de poder invertir ese\l"
	.string "dinero que buenamente habéis\l"
	.string "ganado en mejorar aún más a\l"
	.string "vuestro equipo POKÉMON.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13:
.string "GIOVANNI: En esta organización\n"
	.string "nunca dejamos nada al azar, hace\l"
	.string "ya tiempo que nos procuramos una\l"
	.string "inmensa red comercial privada,\l"
	.string "mayor que la propia oferta\l"
	.string "impuesta y fijada por esas\l"
	.string "sanguijuelas de la MESETA AÑIL.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14:
.string "GIOVANNI: A vuestra llegada os\n"
	.string "dije a ambos que poco a poco os\l"
	.string "iría enseñando algunos de los\l"
	.string "secretos de nuestra organización,\l"
	.string "a medida que fuéseis ganando\l"
	.string "experiencia, pues bien, ha llegado\l"
	.string "el momento de mostraros uno de\l"
	.string "ellos...\l"
	.string "¡PROTÓN!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15:
.string "PROTÓN: A la orden jefe.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16:
.string "ANDRA: ¡Guau!\n"
	.string "¿Una base secreta oculta dentro de\l"
	.string "otra base secreta?\l"
	.string "¡Ingenioso!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17:
.string "GIOVANNI: Así es ANDRA, lo\n"
	.string "verdaderamente importante de este\l"
	.string "lugar se encuentra a partir de\l"
	.string "esas escaleras, muchos piensan que\l"
	.string "el CASINO es la tapadera de esta\l"
	.string "base, pero se equivocan...\l"
	.string "Esta base es la tapadera de lo que\l"
	.string "ahí abajo hay realmente.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18:
.string "GIOVANNI: Espero que seáis\n"
	.string "conscientes de lo que os acabo de\l"
	.string "mostrar, si las autoridades de\l"
	.string "esta región tuvieran la más mínima\l"
	.string "idea de la que tenemos aquí\l"
	.string "montada, no dudarían en bombardear\l"
	.string "el CASINO y toda CIUDAD AZULONA si\l"
	.string "fuere necesario.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19:
.string "GIOVANNI: Solo nuestros\n"
	.string "científicos y soldados a partir de\l"
	.string "ALTO RANGO tienen acceso a este\l"
	.string "lugar, podréis entrar siempre y\l"
	.string "cuando queráis interactuando con\l"
	.string "el PC de PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20:
.string "GIOVANNI: Eso es todo por ahora, a\n"
	.string "falta de nuevas misiones, os\l"
	.string "concedo tiempo libre para que\l"
	.string "exploréis la -BASE ROCKET\l"
	.string "PROFUNDA-, y os vayáis haciendo\l"
	.string "una idea de en qué invertimos\l"
	.string "todos nuestros recursos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21:
.string "ANDRA: Todo un honor que deposite\n"
	.string "su confianza en nosotros GIOVANNI.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22:
.string "ANDRA: Nos vemos allí abajo\n"
	.string "{PLAYER}, ¡voy a disfrutar como una\l"
	.string "niña explorando cada rincón de uno\l"
	.string "de los lugares más secretos y\l"
	.string "confidenciales de esta región!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2:
walk_up
walk_up
walk_up
walk_right
walk_up
walk_right
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_2.1:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4:
walk_in_place_left
walk_in_place_down
step_end


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6:
walk_slow_right
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_7:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8:
emote_exclamation_mark
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9:
walk_in_place_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_11:
walk_down
walk_down
walk_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12:
walk_down
walk_right
walk_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Izq::
lock
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 10
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 11
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2
waitmovement 0x0
goto RocketHideout_4F_Mision_Islas_Sete_Lance



RocketHideout_4F_Mision_Islas_Sete_Lance_Der::
lock
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 10
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 11
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 1
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2.1
waitmovement 0x0
goto RocketHideout_4F_Mision_Islas_Sete_Lance



RocketHideout_4F_Mision_Islas_Sete_Lance::
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8 MSGBOX_AUTOCLOSE
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_7
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8
waitmovement 0x0
delay 15
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 11, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_13
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
removeobject 11
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8.1
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.1
waitmovement 0x0
delay 10
playse SE_M_COSMIC_POWER
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 3
setvar VAR_UNUSED_0x40F7, 804
warpsilent MAP_ROCKET_HIDEOUT_4F, 19, 8


RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2:
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8.1:
delay_8
delay_8
face_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.1:
walk_down
walk_left
walk_left
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3:
face_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.4:
walk_up
walk_left
walk_up
walk_up
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end



RocketHideout_4F_Disguise_Player::
delay 10
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_15 MSGBOX_DEFAULT
waitfanfare
showmoneybox 0, 0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_16 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 1000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17 MSGBOX_DEFAULT
waitfanfare
delay 40
hidemoneybox
delay 40
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_19 MSGBOX_DEFAULT
givemon SPECIES_ARTICUNO, 15, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_20 MSGBOX_DEFAULT
givemon SPECIES_ZAPDOS, 15, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_21 MSGBOX_DEFAULT
givemon SPECIES_MOLTRES, 15, ITEM_LUM_BERRY
waitfanfare
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_RAINBOW_PASS
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_30 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FANCLUB_BOY
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
setvar VAR_UNUSED_0x40F7, 95
release
end

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1:
.string "????: You no longer have the upper hand\n"
	.string "LANCE, now you better calm down.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1:
.string "????: But… Now you come to me to say…\n"
	.string "That I take this in the most fair way\l"
	.string "possible and that I hear your demands.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2:
.string "GIOVANNI: If you want to keep some of\n"
	.string "your privileges and power, you shall\l"
	.string "accept some conditions…$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3:
.string "Cause the resignation of RED from the\n"
	.string "title of CHAMPION, and wipe him from the\l"
	.string "map, I want that crazy experiment of\l"
	.string "OAK of the game, take him to an isolated\l"
	.string "place and tell the media he is realizing\l"
	.string "some sort of secret training.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4:
.string "With that you will maintain BLUE like\n"
	.string "the current CHAMPION, he will inform us\l"
	.string "of any misstep that you try to take\l"
	.string "against us, LANCE for your own good I\l"
	.string "hope you don't do anything stupid.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5:
.string "You will confirm the definitive\n"
	.string "dissolution of TEAM ROCKET, that\l"
	.string "implies that every real ROCKET will be\l"
	.string "seen as another citizen, and will be\l"
	.string "allowed to enter every store in KANTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6:
.string "LANCE: ...$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7:
.string "GIOVANNI: And lastly, you will reduce\n"
	.string "all the tax pressure from SILPH and the\l"
	.string "other small businesses of KANTO, the\l"
	.string "time of leeching of the citizens and\l"
	.string "keeping them in camouflaged slave\l"
	.string "conditions is over, maybe with that\l"
	.string "they will start to like you a little.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8:
.string "That's all, and remember, any miss\n"
	.string "conduct, a little hint that you are\l"
	.string "trying something weird, and all of KANTO\l"
	.string "will know what happened in the HALL OF\l"
	.string "FAME, now get off my sight.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9:
.string "PROTON: Sir, do you believe we are doing\n"
	.string "the right thing negotiating with people\l"
	.string "like that? Shouldn't we…?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10:
.string "GIOVANNI: I know PROTON, but KANTO is\n"
	.string "not prepared to assimilate everything\l"
	.string "that has happen, everything it needs is\l"
	.string "to reach stability again, not another\l"
	.string "revolution that brings more chaos into\l"
	.string "the region, for the moment LANCE is tied\l"
	.string "up, and with the conditions imposed\l"
	.string "everything will tend to get better…$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11:
.string "GIOVANNI: {PLAYER}, you demonstrate\n"
	.string "to be an excellent TRAINER in the HALL\l"
	.string "OF FAME, unique, one of those who\l"
	.string "appear every 50 years, only someone\l"
	.string "like that could have stopped a team as\l"
	.string "powerful as the one LANCE had.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12:
.string "Luckily we brought back RAIKOU, ENTEI\n"
	.string "and SUICUNE to their natural habitats\l"
	.string "in JOHTO, let's hope there isn't another\l"
	.string "maniac like LANCE with the intention\l"
	.string "and power to re-capture them…$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13:
.string "GIOVANNI: ...$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14:
.string "We have fulfilled the purpose of why\n"
	.string "TEAM ROCKET was created {PLAYER}:\l"
	.string "you were fundamental in saving KANTO\l"
	.string "from the hands of LANCE, along with\l"
	.string "ATLAS and ANDRA, you have reached the\l"
	.string "highest rank I can give to any member\l"
	.string "of TEAM ROCKET in KANTO:\l"
	.string "ADMINISTRATOR.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_15:
.string "{PLAYER} HAS BEEN PROMOTED TO\n"
	.string "ADMINISTRATOR!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_16:
.string "GIOVANNI: TEAM ROCKET is your home\n"
	.string "{PLAYER}, you have completely gained\l"
	.string "that rank, this is your reward for your\l"
	.string "achievement in the POKEMON LEAGUE,\l"
	.string "consider it as a symbolic payment, what\l"
	.string "you did in the HALL OF FAME can't be paid\l"
	.string "with just money.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17:
.string "YOU INVOICED 1 MILLION POKÉS!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18:
.string "Not only that, but as you know, we\n"
	.string "managed to create a stable duplicate\l"
	.string "of the DNA of ARTICUNO, ZAPDOS and\l"
	.string "MOLTRES to create identical clones in a\l"
	.string "successful way, what else than to offer\l"
	.string "the first copies to the one who made\l"
	.string "them possible.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_19:
.string "YOU RECEIVED A LV.15 ARTICUNO!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_20:
.string "YOU RECEIVED A LV.15 ZAPDOS!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_21:
.string "YOU RECEIVED A LV.15 MOLTRES!!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22:
.string "GIOVANNI: Use them or not on your team\n"
	.string "is a personal decision, you have\l"
	.string "demonstrated that you have an enough\l"
	.string "level for managing POKEMON of this\l"
	.string "caliber.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23:
.string "With this we focus on the second reason\n"
	.string "of the foundation of TEAM ROCKET:\l"
	.string "learn about the POKEMON world and its\l"
	.string "mysteries, explore the limits of its\l"
	.string "potential and reach where no one else\l"
	.string "has reached.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24:
.string "Of course, we still have MEWTWO as an\n"
	.string "objective in the horizon, it still is a\l"
	.string "danger that we have to take care of,\l"
	.string "but I don't want to involve you in a\l"
	.string "mission like that for the moment.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25:
.string "After what you have done, you deserve\n"
	.string "to take some good vacations, give you\l"
	.string "the time to celebrate and assimilate\l"
	.string "everything that you have achieved\l"
	.string "before you have to go again in new\l"
	.string "challenges even harder.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26:
.string "That's why I want you to travel to SEVII\n"
	.string "ISLANDS, your natal place, again, and\l"
	.string "explore the islands in peace, I've heard\l"
	.string "there's very good TRAINERS there, as\l"
	.string "well as plants and animals very similar\l"
	.string "to JOHTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27:
.string "With this you can travel legally by\n"
	.string "taking the ferry in VERMILION.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28:
.string "{PLAYER} received the RAINBOW PASS.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29:
.string "SEVII ISLANDS are famous for its ruins\n"
	.string "in SIX ISLAND and SEVEN, dated 1500\l"
	.string "years of age, they have a lot of\l"
	.string "similarities with RUINS OF ALPH of\l"
	.string "JOHTO, it is believed they keep some\l"
	.string "sort of secret.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_30:
.string "Do you remember the jar you and ANDRA\n"
	.string "stole from the CAPTAIN of the SS.ANNE\l"
	.string "just before working directly under my\l"
	.string "orders?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31:
.string "We believe its content comes from the\n"
	.string "ruins, I won't tell you directly to go\l"
	.string "investigate as another mission, I just\l"
	.string "inform you of it, if you feel curious,\l"
	.string "you can go look at the ruins and try to\l"
	.string "find something.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32:
.string "That's all for the moment {PLAYER}, we\n"
	.string "will notify you when we have news of\l"
	.string "MEWTWO or any other singular POKEMON,\l"
	.string "SEVII ISLANDS and its mysteries are\l"
	.string "waiting, go and enjoy your vacations.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_2.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3:
walk_in_place_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4:
walk_left
walk_in_place_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5:
walk_right
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6:
walk_left
walk_in_place_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_7:
face_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_8:
emote_exclamation_mark
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_9:
walk_down
walk_down
walk_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10:
face_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_11:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12:
face_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_13:
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14:
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1
waitmovement 0x0
special RemoveCameraObject
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonTower5F_Escena_4_Blaine_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
addobject 12
applymovement 12, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_3 MSGBOX_AUTOCLOSE
playse MUS_RG_POKE_MANSION
msgbox PokemonTower5F_Escena_4_Blaine_Texto_4 MSGBOX_AUTOCLOSE
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_2
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_4
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_6
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_2
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower5F_Escena_4_Blaine_Texto_11_1 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_13 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_7
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_4
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_16 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_8
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_9
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_19 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonTower5F_Escena_4_Blaine_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_10
waitmovement 0x0
msgbox PokemonTower5F_Escena_4_Blaine_Texto_21 MSGBOX_AUTOCLOSE
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_11
waitmovement 0x0
delay 15
msgbox PokemonTower5F_Escena_4_Blaine_Texto_22 MSGBOX_AUTOCLOSE
fadedefaultbgm
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_12
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_12
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox PokemonTower5F_Escena_4_Blaine_Texto_23 MSGBOX_AUTOCLOSE
delay 40
msgbox PokemonTower5F_Escena_4_Blaine_Texto_24 MSGBOX_AUTOCLOSE
delay 20
applymovement 12, PokemonTower5F_Escena_4_Blaine_Move_13
waitmovement 0x0
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
removeobject 12
delay 60
setvar VAR_UNUSED_0x40F7, 47
warpsilent MAP_POKEMON_TOWER_5F, 18, 9
release
end

PokemonTower5F_Escena_4_Blaine_Texto_1:
.string "RECLUTA: El LÍDER de ISLA CANELA ha\n"
	.string "llegado, señor.$"

PokemonTower5F_Escena_4_Blaine_Texto_2:
.string "GIOVANNI: Hacedle pasar.$"

PokemonTower5F_Escena_4_Blaine_Texto_3:
.string "BLAINE: ¿Querías verme, GIOVANNI?$"

PokemonTower5F_Escena_4_Blaine_Texto_4:
.string "GIOVANNI: Así es, iré al grano, BLAINE.\n"
	.string "Me temo que tendré que retirarte los\l"
	.string "fondos para seguir produciendo\l"
	.string "PORYGON en masa.$"

PokemonTower5F_Escena_4_Blaine_Texto_5:
.string "BLAINE: P-Pero... ¿A qué se deb...?$"

PokemonTower5F_Escena_4_Blaine_Texto_6:
.string "GIOVANNI: Has hecho un gran trabajo,\n"
	.string "ese no es el problema. PORYGON es un\l"
	.string "artículo de lujo que muy poca gente se\l"
	.string "puede permitir. Sacamos mucho dinero\l"
	.string "por cada ejemplar, es cierto, pero\l"
	.string "tenemos docenas de ellos en la\l"
	.string "recámara.$"

PokemonTower5F_Escena_4_Blaine_Texto_7:
.string "Bajar el precio es inviable, ya que su\n"
	.string "costo es grande, no queda otra que\l"
	.string "adaptar la producción al ritmo de\l"
	.string "demanda. KANTO apenas tiene para sí\l"
	.string "misma, era de esperar.$"

PokemonTower5F_Escena_4_Blaine_Texto_8:
.string "No obstante... me consta que SILPH ya ha\n"
	.string "creado una versión optimizada de\l"
	.string "PORYGON. La producción del nuevo\l"
	.string "PORYGON2 cuesta 3 veces la del\l"
	.string "PORYGON normal, lo cual lo hace inviable\l"
	.string "como producto de masas.$"

PokemonTower5F_Escena_4_Blaine_Texto_9:
.string "Su valor competitivo es otra historia,\n"
	.string "aún está por ver. Según parece,\l"
	.string "PORYGON2 no es el fin, su potencial es\l"
	.string "mayor.$"

PokemonTower5F_Escena_4_Blaine_Texto_10:
.string "Es por ello que te ofrezco, en\n"
	.string "compensación a la retirada de fondos,\l"
	.string "trabajar aquí con nuestro equipo de\l"
	.string "científicos. No solo en la búsqueda de\l"
	.string "una mejor versión de PORYGON, también\l"
	.string "de NIDOK...$"

PokemonTower5F_Escena_4_Blaine_Texto_11:
.string "BLAINE: Sabes que nada superará al\n"
	.string "proyecto original, GIOVANNI. $"
	
	
PokemonTower5F_Escena_4_Blaine_Texto_11_1:
.string "GIOVANNI: Basta con que supere a un\n"
	.string "LEGENDARIO normal y corriente.$"
	

PokemonTower5F_Escena_4_Blaine_Texto_12:
.string "BLAINE: Jah... ¡A 3 más bien!$"

PokemonTower5F_Escena_4_Blaine_Texto_13:
.string "GIOVANNI: ¿Aceptas entonces mi\n"
	.string "oferta? Un CIENTÍFICO como tú merece\l"
	.string "una segunda oportunidad. A diferencia\l"
	.string "de FUJI, sé que tú aún conservas viva\l"
	.string "esa llama que te impulsa a querer más.$"

PokemonTower5F_Escena_4_Blaine_Texto_14:
.string "BLAINE: Lo siento, GIOVANNI. Pero lo de\n"
	.string "MEWTWO también fue demasiado para mí,\l"
	.string "¿de qué sirve crear tanto poder si\l"
	.string "después no puede controlarse?$"

PokemonTower5F_Escena_4_Blaine_Texto_15:
.string "GIOVANNI: Por eso seguimos aquí,\n"
	.string "BLAINE, para aprender de los errores\l"
	.string "del pasado y volver más fuertes. Eso no\l"
	.string "volverá a ocurrir, no con la tecnología\l"
	.string "de ahora.$"

PokemonTower5F_Escena_4_Blaine_Texto_16:
.string "¿No lo ves, BLAINE? Los dioses del\n"
	.string "mundo POKÉMON nos perdonaron por algo,\l"
	.string "pudimos caer en las manos de LANCE\l"
	.string "durante la gran purga y quedar presos\l"
	.string "de por vida, o algo peor. Pero por -a- o\l"
	.string "por -b- tú has logrado conservar tu\l"
	.string "puesto en CANELA y yo permanecer\l"
	.string "oculto.$"

PokemonTower5F_Escena_4_Blaine_Texto_17:
.string "BLAINE: ¡¿Nos han perdonado?!\n"
	.string "¡Estamos a su merced! ¡Pueden arrasar\l"
	.string "hoy con esta base si la descubriesen o\l"
	.string "quemar mañana mi laboratorio si\l"
	.string "hicieran una inspección! ¡Somos\l"
	.string "prófugos!$"

PokemonTower5F_Escena_4_Blaine_Texto_18:
.string "GIOVANNI: Hacer menos que todo lo que\n"
	.string "esté en nuestra mano por recuperar la\l"
	.string "región sería una pobre manera de\l"
	.string "aprovechar este regalo, BLAINE.$"

PokemonTower5F_Escena_4_Blaine_Texto_19:
.string "BLAINE: ...$"

PokemonTower5F_Escena_4_Blaine_Texto_20:
.string "Necesito pensarlo, GIOVANNI.$"

PokemonTower5F_Escena_4_Blaine_Texto_21:
.string "GIOVANNI: Aquí estaré, BLAINE. Aún\n"
	.string "estás a tiempo de hacer el proyecto de\l"
	.string "tu vida.$"

PokemonTower5F_Escena_4_Blaine_Texto_22:
.string "BLAINE: Eso siempre será una\n"
	.string "posibilidad, hasta el último de mis\l"
	.string "días.$"

PokemonTower5F_Escena_4_Blaine_Texto_23:
.string "... ...$"

PokemonTower5F_Escena_4_Blaine_Texto_24:
.string "Muy oportuno que no sepas el motivo por\n"
	.string "el que logré conservar mi puesto en\l"
	.string "CANELA, ex-CAMPEÓN.$"

PokemonTower5F_Escena_4_Blaine_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_1.1:
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_2:
face_left
step_end

PokemonTower5F_Escena_4_Blaine_Move_3:
walk_left
step_end

PokemonTower5F_Escena_4_Blaine_Move_4:
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_5:
face_up
step_end

PokemonTower5F_Escena_4_Blaine_Move_6:
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_7:
face_right
step_end

PokemonTower5F_Escena_4_Blaine_Move_8:
walk_fast_left
walk_fast_up
step_end

PokemonTower5F_Escena_4_Blaine_Move_9:
walk_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_10:
walk_up
walk_right
walk_in_place_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_11:
face_down
step_end

PokemonTower5F_Escena_4_Blaine_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
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
walk_down
walk_down
walk_right
walk_right
step_end

PokemonTower5F_Escena_4_Blaine_Move_13:
walk_right
face_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas::
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
addobject 10
addobject 13
addobject 14
addobject 15
addobject 1
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1.1
waitmovement 0x0
special RemoveCameraObject
delay 10
applymovement 10, RocketHideout_4F_Escena_Castigo_Reclutas_Move_1
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2 MSGBOX_AUTOCLOSE
delay 30
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_6 MSGBOX_AUTOCLOSE
delay 20
playmoncry SPECIES_NIDOKING, CRY_MODE_ENCOUNTER
delay 60
playse SE_PIN
applymovement 13, RocketHideout_4F_Mision_Andra_Fucsia_move_3
applymovement 14, RocketHideout_4F_Mision_Andra_Fucsia_move_3
applymovement 15, RocketHideout_4F_Mision_Andra_Fucsia_move_3
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_6.1
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19 MSGBOX_AUTOCLOSE
applymovement 13, RocketHideout_4F_Giovanni_Mision_1_move_1
applymovement 14, RocketHideout_4F_Giovanni_Mision_1_move_1
applymovement 15, RocketHideout_4F_Giovanni_Mision_1_move_1
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20 MSGBOX_AUTOCLOSE
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
waitmovement 0x0
delay 20
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 13
removeobject 14
removeobject 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_25 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setvar VAR_UNUSED_0x40F7, 59
warpsilent MAP_VIRIDIAN_CITY, 21, 2
release
end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_6.1:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1:
.string "PROTÓN: Los RECLUTAS responsables de\n"
	.string "la misión en PUEBLO LAVANDA se\l"
	.string "presentan, señor.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2:
.string "GIOVANNI: ¿Y bien?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2:
.string "Y… y bien qué, ¿s-señor?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3:
.string "GIOVANNI: Creí haber dejado claras\n"
	.string "vuestras funciones en TORRE POKÉMON.\l"
	.string "No os limitásteis a recoger cráneos de\l"
	.string "CUBONE y armar ruido, fuisteis más allá.\l"
	.string "¿Por qué?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4:
.string "RECLUTAS: Fue un accidente, señor. Solo\n"
	.string "queríamos pasar el rato, la madre de\l"
	.string "CUBONE se lo tomó muy enserio y… se nos\l"
	.string "fue de las manos.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5:
.string "GIOVANNI: ¿Os dáis cuenta de la pobre\n"
	.string "imagen que habéis dado a FUJI, con\l"
	.string "quien estábamos en plena negociación?\l"
	.string "No solo a FUJI, a toda KANTO. Como si\l"
	.string "las campañas de LANCE no fueran\l"
	.string "suficiente, toda la región sabe ya lo\l"
	.string "que el TEAM ROCKET hizo en PUEBLO\l"
	.string "LAVANDA.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_6:
.string "Vuestra incompetencia y falta de ética\n"
	.string "merecen un castigo ejemplar.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_7:
.string "Creedme, si os castigara de forma\n"
	.string "proporcional a vuestro fracaso, mi\l"
	.string "NIDOKING agotaría antes sus PP en\l"
	.string "todo su repertorio ofensivo.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_8:
.string "RECLUTAS: … …$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9:
.string "GIOVANNI: Aunque…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10:
.string "No somos asesinos, a pesar de que\n"
	.string "vuestras últimas acciones hagan\l"
	.string "parecer lo contrario. Os daré la\l"
	.string "oportunidad de redimiros.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11:
.string "En compensación al daño causado,\n"
	.string "donaréis el 70% de vuestro sueldo a la\l"
	.string "beneficencia de PUEBLO LAVANDA, el\l"
	.string "TEAM ROCKET por otro lado se encargará\l"
	.string "de cubrir vuestras necesidades\l"
	.string "básicas… mientras cumpláis vuestra\l"
	.string "parte del trato.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12:
.string "RECLUTA: S-señor…gracias por esta\n"
	.string "segunda oportunidad, le prometo que no\l"
	.string "se arrepentirá de no haber usado a su\l"
	.string "NIDOK…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13:
.string "GIOVANNI: Aún no he acabado.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14:
.string "RECLUTA: …$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15:
.string "GIOVANNI: Va a construirse un enorme\n"
	.string "CEMENTERIO subterráneo, al sur de\l"
	.string "PUEBLO LAVANDA. FUJI necesitará\l"
	.string "ayuda, y vosotros estaréis allí para\l"
	.string "todo lo que requiera. Además de\l"
	.string "vuestra labor normal como ROCKET, el\l"
	.string "tiempo libre que os quede irá para esa\l"
	.string "causa. ¿Algún inconveniente?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16:
.string "RECLUTAS: ¡Ninguno, señor!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17:
.string "GIOVANNI: Aquí tenéis vuestra\n"
	.string "oportunidad: 1 año de privación\l"
	.string "económica y lúdica, a cambio de limpiar\l"
	.string "vuestra mancha. Os aviso de antemano,\l"
	.string "al mínimo fallo, quedaréis desterrados\l"
	.string "definitivamente…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_18:
.string "Pero si os mantenéis estoicos, al\n"
	.string "concluir el año no solo os ganaréis el\l"
	.string "perdón, también seréis ascendidos a\l"
	.string "ALTO RANGO, puesto que habréis\l"
	.string "demostrado fortaleza, constancia y,\l"
	.string "especialmente, capacidad de aprender\l"
	.string "de vuestros errores.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19:
.string "GIOVANNI: Ahora, fuera de mi vista.\n"
	.string "¡Comienza vuestro día 1!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20:
.string "RECLUTAS: ¡A la orden, señor!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21:
.string "GIOVANNI: Malditos inconscientes,\n"
	.string "ahora toda KANTO confundirá maldad\l"
	.string "con ignorancia…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22:
.string "PROTÓN: Por eso la BASE PROFUNDA está\n"
	.string "solo reservada a unos pocos.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23:
.string "PROTON: Pero…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24:
.string "GIOVANNI: ¿Qué ocurre, PROTON?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_25:
.string "PROTÓN: Hay algo que no he entendido.\n"
	.string "¿Un enorme CEMENTERIO subterráneo en\l"
	.string "PUEBLO LAVANDA? Creí que TORRE\l"
	.string "POKÉMON ya era más que suficiente para\l"
	.string "albergar todas las tumbas.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_26:
.string "GIOVANNI: Aún es pronto para hablar de\n"
	.string "eso, PROTÓN, muy pronto. Ya llegará su\l"
	.string "hora.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Move_1:
walk_in_place_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_2:
face_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_3:
face_down
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_4:
walk_in_place_down
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_5:
walk_fast_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_6:
walk_fast_down
walk_in_place_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_7:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideout_4F_Escena_Motoristas::
lock
delay 20
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower5F_Escena_4_Blaine_Move_1.1
waitmovement 0x0
special RemoveCameraObject
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_1
waitmovement 0x0
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_1.1 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_6
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_12 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_9
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_13 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_10
waitmovement 0x0
addobject 16
applymovement 16, RocketHideout_4F_Escena_Motoristas_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_14 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_12
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_17 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Escena_Motoristas_Texto_19 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_ROUTE105_STATE, 6
setflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_NUEVA_839
warpsilent MAP_VIAS_TREN2, 65, 11
release
end

RocketHideout_4F_Escena_Motoristas_Move_12:
face_right
step_end

RocketHideout_4F_Escena_Motoristas_Move_11:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_10:
emote_exclamation_mark
face_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_9:
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_8:
walk_in_place_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_7:
face_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_6:
emote_exclamation_mark
step_end

RocketHideout_4F_Escena_Motoristas_Move_5:
walk_slow_left
step_end

RocketHideout_4F_Escena_Motoristas_Move_4:
face_down
step_end

RocketHideout_4F_Escena_Motoristas_Move_3:
face_left
step_end

RocketHideout_4F_Escena_Motoristas_Move_2:
walk_in_place_up
step_end

RocketHideout_4F_Escena_Motoristas_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
step_end

RocketHideout_4F_Escena_Motoristas_Texto_1.1:
.string "GIOVANNI: ¿Y bien?$"

RocketHideout_4F_Escena_Motoristas_Texto_1:
.string "KOGA: Es irreversible, ZONA SAFARI\n"
	.string "cerrará sus puertas en las próximas\l"
	.string "semanas.$"

RocketHideout_4F_Escena_Motoristas_Texto_2:
.string "GIOVANNI: Era de esperar, ahora que las\n"
	.string "fronteras con JOHTO se han abierto,\l"
	.string "todos querrán visitar la región vecina\l"
	.string "y sus exóticos POKÉMON.$"

RocketHideout_4F_Escena_Motoristas_Texto_3:
.string "KOGA: Sin mencionar que más de uno ha\n"
	.string "capturado ya un KANGASKHAN en el\l"
	.string "TÚNEL ROCA, y lo ha hecho público.$"

RocketHideout_4F_Escena_Motoristas_Texto_4:
.string "GIOVANNI: Los nuevos tiempos KOGA,\n"
	.string "muchas cosas van a cambiar, no todas\l"
	.string "para bien.$"

RocketHideout_4F_Escena_Motoristas_Texto_5:
.string "Ni siquiera el TEAM ROCKET escapa a los\n"
	.string "cambios, nos hemos vuelto grandes,\l"
	.string "tanto que nos será imposible contentar\l"
	.string "a todos…$"

RocketHideout_4F_Escena_Motoristas_Texto_6:
.string "KOGA: ¿Te refieres a…?$"

RocketHideout_4F_Escena_Motoristas_Texto_7:
.string "GIOVANNI: Así es, el cierre de las VÍAS\n"
	.string "SUBTERRÁNEAS.$"

RocketHideout_4F_Escena_Motoristas_Texto_8:
.string "Antaño sirvieron de refugio durante la\n"
	.string "guerra, y más recientemente resultaron\l"
	.string "ser una gran red de tráfico para\l"
	.string "nosotros.$"

RocketHideout_4F_Escena_Motoristas_Texto_9:
.string "Gracias a ellas obtuvimos enormes\n"
	.string "ingresos de los productos importados\l"
	.string "por mar desde nuestra base de ISLAS\l"
	.string "SETE, algo que fue optimizado vía\l"
	.string "teletransporte gracias a la patente de\l"
	.string "BILL.$"

RocketHideout_4F_Escena_Motoristas_Texto_10:
.string "Ahora, con la unión de KANTO y JOHTO, no\n"
	.string "son más que un lastre para el comercio\l"
	.string "entre regiones, ya he recibido\l"
	.string "presiones desde TORRE RADIO y el\l"
	.string "MAGNETOTREN para que sean cerradas, y\l"
	.string "así se hará.$"

RocketHideout_4F_Escena_Motoristas_Texto_11:
.string "KOGA: Pero…$"

RocketHideout_4F_Escena_Motoristas_Texto_12:
.string "GIOVANNI: El TEAM ROCKET se ha hecho\n"
	.string "grande. En su día nos fue de gran ayuda\l"
	.string "para mantenernos a flote, pero hoy\l"
	.string "podemos prescindir de ellas.$"

RocketHideout_4F_Escena_Motoristas_Texto_13:
.string "KOGA: ¿Qué hay de los MOTORISTAS? Su\n"
	.string "rol principal era el de vender los\l"
	.string "productos importados, las vías eran\l"
	.string "como su segunda cas…$"

RocketHideout_4F_Escena_Motoristas_Texto_14:
.string "PETREL: ¿Me ha llamado, JEFE?$"

RocketHideout_4F_Escena_Motoristas_Texto_15:
.string "GIOVANNI: Así es, ambos habéis sido el\n"
	.string "enlace entre el TEAM ROCKET y los\l"
	.string "MOTORISTAS.$"

RocketHideout_4F_Escena_Motoristas_Texto_16:
.string "Por ello, os pido que les comuniquéis la\n"
	.string "dura decisión del cierre de las vías.\l"
	.string "Prescindimos de sus servicios, pero el\l"
	.string "TEAM ROCKET no olvida.$"

RocketHideout_4F_Escena_Motoristas_Texto_17:
.string "A pesar de haber quedado obsoletos en\n"
	.string "la KANTO actual, todo MOTORISTA que\l"
	.string "desee convertirse en miembro del TEAM\l"
	.string "ROCKET y trabajar en nuestras\l"
	.string "distintas bases y sucursales, será más\l"
	.string "que bienvenido.$"

RocketHideout_4F_Escena_Motoristas_Texto_18:
.string "Con ello zanjamos este tema. KOGA,\n"
	.string "PETREL… eso es todo.$"

RocketHideout_4F_Escena_Motoristas_Texto_19:
.string "PETREL: … …$"

RocketHideout_4F_Dialogo_Proton::
lock
faceplayer
msgbox RocketHideout_4F_Dialogo_Proton_Texto_1 MSGBOX_NPC
msgbox RocketHideout_4F_Dialogo_Proton_Texto_2 MSGBOX_NPC
release
end

RocketHideout_4F_Dialogo_Proton_Texto_2:
.string "Yo, aunque sigo siendo EJECUTIVO, soy\n"
	.string "el de mayor confianza para GIOVANNI.\l"
	.string "Por otro lado, ADMIN únicamente están\l"
	.string "PETREL y ATLAS, este último siendo\l"
	.string "ADMIN.JEFE, ya que dentro de nuestra\l"
	.string "sucursal en ISLAS SETE es la máxima\l"
	.string "autoridad.$"

RocketHideout_4F_Dialogo_Proton_Texto_1:
.string "Los distintos rangos de esta\n"
	.string "organización son, de menos a más:\l"
	.string "RECLUTA, RECLUTA ALTO RANGO,\l"
	.string "EJECUTIVO, ADMINISTRADOR,\l"
	.string "ADMINISTRADOR JEFE, LÍDER.$"



