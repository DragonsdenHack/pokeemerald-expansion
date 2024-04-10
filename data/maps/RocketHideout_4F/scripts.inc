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
compare VAR_UNUSED_0x40F7, 115
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
	.string "su fin, pero esta{PAUSE 20}…{PAUSE 20} aún no, sigues\l"
	.string "participando en su devenir, de modo\l"
	.string "que…mantente mejorando hasta la\l"
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
	.string "lived…{PAUSE 25} Every story has its end, but this\l"
	.string "one…{PAUSE 25} not for now.$"

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
	.string "Congratulations, {PLAYER}, you defeated\n"
	.string "OAK. There is still much to see; the\l"
	.string "JOHTO region awaits you. However, the\l"
	.string "translation ends here... for now. Soon\l"
	.string "(2024), both JOHTO and the DLC will be\l"
	.string "available in English. For more\l"
	.string "information, please check the post on\l"
	.string "Pokecommunity, and remember, keep\l"
	.string "improving yourself.$"

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
	.string "told, all the data of that 'ESSENCE\l"
	.string "POKÉMON- are in the S3, in the last room.$"

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
.string "You can fight the GYMS in the order\n"
	.string "that you want to, however, I'd recommend\l"
	.string "that you beat them in the traditional\l"
	.string "order. Also, CINNABAR GYM is closed\l"
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
	.string "BIKERS and CYCLING ROAD, that's\l"
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
	.string "people…{PAUSE 25} we need to talk about them\l"
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
	.string "enjoy all of it…{PAUSE 25} We will have a meeting,\l"
	.string "when the appropriate time comes.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11:
.string "Apart from that, let's talk about the\n"
	.string "other thing I wanted. Talk about that\l"
	.string "mysterious trainer, after all, you were\l"
	.string "the one who fought for the longest\l"
	.string "time. Tell me everything about him: his\l"
	.string "POKÉMON, objects, the moves he used,\l"
	.string "his strategies, his appearance,\l"
	.string "possible weaknesses…{PAUSE 25} anything you can\l"
	.string "think about.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12:
.string "GIOVANNI: {PAUSE 25}…{PAUSE 25} …{PAUSE 25} I see, he doesn't seem like\n"
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
	.string "fewer and fewer people go. Dealing with\l"
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
.string "KOGA: {PAUSE 25}…{PAUSE 25}…{PAUSE 25} …{PAUSE 25}\n"
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
.string "You just earnt 95,000 POKÉ!$"

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
	.string "worthed hundreds of thousand POKÉ on\l"
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
	.string "appear where we want…{PAUSE 25} and gain some\l"
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
	.string "PROTON: Call all HIGH RANK GRUNTS and\n"
	.string "EXECUTIVES available in the BASE!\l"
	.string "Protect the access to our LEADER! If\l"
	.string "the situation requires it, resort to our\l"
	.string "special specimens roo…$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5:
.string "GIOVANNI: HOLD ON!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6:
	.string "GIOVANNI: We won't be doing that,\n"
	.string "PROTON.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7:
.string "PROTON: B-but sir…$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8:
	.string "GIOVANNI: I want all EXECUTIVES and\n"
	.string "HIGH RANK GRUNTS inside DEEP ROCKET\l"
	.string "BASE right now.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9:
	.string "GRUNT: As you wish, BOSS.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_10:
	.string "GIOVANNI: PROTON, provide me detailed\n"
	.string "information about his team and the\l"
	.string "actual level that manages the CELADON\l"
	.string "CITY GYM LEADER, ERIKA.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_11:
.string "PROTON: Right away sir.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_12:
	.string "PROTON: The LEADER ERIKA has today a\n"
	.string "VICTREEBEL at level 29, a TANGELA at\l"
	.string "level 24 and a VILEPLUME at level 29.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_13:
	.string "GIOVANNI: All right, what level has the\n"
	.string "lost KANGASKHAN that {PLAYER}\l"
	.string "caught at ROCK TUNNEL?$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_14:
.string "PROTON: Exactly at level 29, sir.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_15:
	.string "GIOVANNI: Well…{PAUSE 25} feels perfect as a\n"
	.string "hierarchy that miserable trainer could\l"
	.string "expect for someone like me, bring that\l"
	.string "KANGASKHAN and some other two POKÉMON\l"
	.string "of slightly lesser strength and level,\l"
	.string "an ONYX and RHYHORN to fit in well.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_16:
.string "PROTON: Right away, sir.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17:
	.string "GIOVANNI: You never show your cards to\n"
	.string "your enemy, {PLAYER}: he never would\l"
	.string "fight against something that doesn't\l"
	.string "know that exists, no matter how strong\l"
	.string "he is. It will be too late when he\l"
	.string "notices, as there won't be enough time\l"
	.string "to adapt, he will never reach our level\l"
	.string "fighting against the mediocrity that\l"
	.string "surrounds towns and cities of this\l"
	.string "region.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18:
	.string "PROTON: Here you go, sir.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19:
	.string "GIOVANNI: I don't want you to act as a\n"
	.string "fool right now, {PLAYER}, I know that\l"
	.string "you want to fight against that trainer\l"
	.string "after he defeated you in MT. MOON now\l"
	.string "that you have become stronger.\l"
	.string "However, this is not the time, our\l"
	.string "priority right now is keeping all this as\l"
	.string "a secret to him until we know his true\l"
	.string "intentions…$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_20:
	.string "GRUNT: Sir, he has just got the LIFT KEY\n"
	.string "from a grunt. There's nothing to prevent\l"
	.string "him from reaching you now.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_21:
	.string "GIOVANNI: Good. {PLAYER}! PROTON!\n"
	.string "Get inside now! You all will be told when\l"
	.string "this is over!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_22:
	.string "PROTON: Sir, yes, sir!$"

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
	.string "This computer seems to have a great\n"
	.string "important function…$"

RocketHideout_4F_Warp_Text_YesNo:
	.string "Do you want to toggle the secret\n"
	.string "entrance?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_1:
	.string "GIOVANNI: Excellent work in FUCHSIA,\n"
	.string "ANDRA. Now those DRATINI and SCYTHER\l"
	.string "will be sold at the price of gold as\l"
	.string "prices in our CASINO. Here is your\l"
	.string "reward.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2:
	.string "GIOVANNI: You have returned as well,\n"
	.string "{PLAYER}, you have maintained the\l"
	.string "chat between FUJI and PROTON private\l"
	.string "as I instructed, which has been key for\l"
	.string "us. Then you deserve your reward.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3:
.string "You just earnt 40,000 POKÉ!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4:
	.string "GIOVANNI: Also, in the name of TEAM\n"
	.string "ROCKET I'm rewarding you with one of the\l"
	.string "CUBONES that were stolen from the\l"
	.string "POKÉMON TOWER. But this is not an usual\l"
	.string "one, this CUBONE has equipped the\l"
	.string "THICK CLUB, an object that duplicates\l"
	.string "it's physical attack when evolved into\l"
	.string "MAROWAK. It's certainly a proper gift\l"
	.string "for the one that, fighting FUJI, made\l"
	.string "it's capture possible.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5:
.string "YOU JUST RECEIVED A CUBONE AT LV:20!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6:
	.string "GIOVANNI: To wrap up…{PAUSE 20} You'll be\n"
	.string "interested to know that, after\l"
	.string "investigating on that KANGASKHAN you\l"
	.string "found on the ROCK TUNNEL, we\l"
	.string "discovered that it's physiology is\l"
	.string "really similar to the evolution line of\l"
	.string "CUBONE-MAROWAK.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7:
.string "GIOVANNI: In the SAFARI ZONE, all\n"
	.string "KANGASKHAN grow in comfort, and the\l"
	.string "offspring always develop until they\l"
	.string "reach that stage{PAUSE 20}…{PAUSE 20} The evolutionary\l"
	.string "line of CUBONE-MAROWAK is uncertain; a\l"
	.string "CUBONE emerges when it takes the skull\l"
	.string "of its deceased mother. However, if its\l"
	.string "mother do not die, what would it\l"
	.string "become? According to our study, a\l"
	.string "KANGASKHAN. So, if we kill all the adult\l"
	.string "KANGASKHAN in the SAFARI ZONE, the\l"
	.string "offspring would, under certain\l"
	.string "circumstances, end up becoming\l"
	.string "CUBONES…$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8:
	.string "GIOVANNI: The most accurate way to\n"
	.string "prove this would be to demolish the\l"
	.string "LAVENDER TOWN TOWER, force the CUBONE\l"
	.string "there to migrate in mass to ROCK\l"
	.string "TUNNEL, a more suitable place for their\l"
	.string "reproduction than that gloomy tower,\l"
	.string "and see what happens.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9:
.string "GIOVANNI: If, with the passage of time,\n"
	.string "KANGASKHAN started appearing\l"
	.string "frequently, it would constitute proof\l"
	.string "of this link between species. Perhaps\l"
	.string "the KANGASKHAN phenomenon in ROCK\l"
	.string "TUNNEL was an isolated case of an\l"
	.string "offspring that, without becoming a\l"
	.string "CUBONE, migrated to the tunnel, managed\l"
	.string "to survive, and became a KANGASKHAN on\l"
	.string "its own. Maybe a phenomenon that we will\l"
	.string "observe increasingly over time, if this$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10:
.string "GIOVANNI: Ignoring the matter at hand,\n"
	.string "I would like to take this opportunity to\l"
	.string "acknowledge your competence. Both of\l"
	.string "you have completed six missions with\l"
	.string "us, and have succeeded in five of them.\l"
	.string "Some of these missions were of\l"
	.string "significant importance, such as\l"
	.string "retrieving the patent stolen from BILL\l"
	.string "and the relic from the SS. ANNE. Your\l"
	.string "success in these missions has earned\l"
	.string "you a good amount of income.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11:
.string "GIOVANNI: However, as you have been\n"
	.string "able to verify, TEAM ROCKET is banned\l"
	.string "from entering any public pokémart in\l"
	.string "the region, including this city's main\l"
	.string "shopping center.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12:
.string "GIOVANNI: But you need not worry. I\n"
	.string "know that two trainers like yourselves\l"
	.string "will be eager to invest that\l"
	.string "hard-earned money into improving even\l"
	.string "more your POKÉMON team.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13:
.string "GIOVANNI: In this organization, we\n"
	.string "never leave anything to chance. A long\l"
	.string "time ago, we established an immense\l"
	.string "private commercial network, larger than\l"
	.string "the supply imposed and set by those\l"
	.string "leeches of the INDIGO PLATEAU.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14:
.string "GIOVANNI: When you arrived, I told both\n"
	.string "of you that I would be showing you some\l"
	.string "secrets of our organization but only\l"
	.string "when you'd have gained some experience.\l"
	.string "Well, now I'll be showing you one of\l"
	.string "them…{PAUSE 30} PROTON!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15:
.string "PROTON: As you wish, sir.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16:
.string "ANDRA: Wow! A secret base hidden inside\n"
	.string "a secret base? How clever!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17:
.string "GIOVANNI: Indeed, ANDRA; in fact, it's\n"
	.string "downstairs where what truly matters is.\l"
	.string "Many people believe that the CASINO is\l"
	.string "a cover-up for this base, but they're\l"
	.string "wrong{PAUSE 20}…{PAUSE 20} This base IS the cover-up for\l"
	.string "what's downstairs.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18:
.string "GIOVANNI: I hope you are aware of what\n"
	.string "I have just shown you. If the\l"
	.string "authorities had any idea of what we\l"
	.string "have here, they wouldn't hesitate to\l"
	.string "bomb the CASINO and all of CELADON if\l"
	.string "necessary.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19:
.string "GIOVANNI: Only our scientists and HIGH\n"
	.string "RANK grunts can access here. You can\l"
	.string "access it whenever you want by just\l"
	.string "interacting with PROTON's laptop.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20:
.string "GIOVANNI: That's all, for now. While\n"
	.string "you're not on a mission, you may have\l"
	.string "some time off so you can explore the\l"
	.string "DEEP ROCKET BASE and get\l"
	.string "acknowledgement of where we really\l"
	.string "invest all our resources.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21:
.string "ANDRA: It's quite an honor that you\n"
	.string "trust us this much, GIOVANNI.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22:
.string "ANDRA: Well, see ya down there,\n"
	.string "{PLAYER}. I'm gonna enjoy it like a kid\l"
	.string "exploring every meter of one of the\l"
	.string "most secret and confidential places in\l"
	.string "this region!$"

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
.string "????: But…{PAUSE 30} Now you come to me to say…\n"
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
.string "LANCE: …$"

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
.string "GIOVANNI: …$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14:
.string "We have fulfilled the purpose of why\n"
	.string "TEAM ROCKET was created {PLAYER}:\l"
	.string "you were fundamental in saving KANTO\l"
	.string "from the hands of LANCE, along with\l"
	.string "ARCHER and ANDRA, you have reached the\l"
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
	.string "achievement in the POKÉMON LEAGUE,\l"
	.string "consider it as a symbolic payment, what\l"
	.string "you did in the HALL OF FAME can't be paid\l"
	.string "with just money.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_17:
.string "YOU INVOICED 1 MILLION POKÉ!!$"

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
	.string "level for managing POKÉMON of this\l"
	.string "caliber.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23:
.string "With this we focus on the second reason\n"
	.string "of the foundation of TEAM ROCKET:\l"
	.string "learn about the POKÉMON world and its\l"
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
	.string "there's very good TRAINERS, as well as\l"
	.string "plants and animals very similar to JOHTO.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27:
.string "With this you can travel legally by\n"
	.string "taking the ferry in VERMILION.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_28:
.string "{PLAYER} received the RAINBOW PASS.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_29:
.string "SEVII ISLANDS are famous for its ruins\n"
	.string "in SIX and SEVEN ISLANDS, dated 1500\l"
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
	.string "MEWTWO or any other singular POKÉMON,\l"
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
.string "GRUNT: CINNABAR LEADER has arrived, SIR.$"

PokemonTower5F_Escena_4_Blaine_Texto_2:
.string "GIOVANNI: Let him in.$"

PokemonTower5F_Escena_4_Blaine_Texto_3:
.string "BLAINE: You wanted to see me, GIOVANNI?$"

PokemonTower5F_Escena_4_Blaine_Texto_4:
.string "GIOVANNI: Indeed. I'll make it quick,\n"
	.string "BLAINE. I'm afraid I will be retiring you\l"
	.string "the founding for mass production of\l"
	.string "PORYGON.$"

PokemonTower5F_Escena_4_Blaine_Texto_5:
.string "BLAINE: W-What…{PAUSE 30} B-B-But…{PAUSE 20} Why???$"

PokemonTower5F_Escena_4_Blaine_Texto_6:
.string "GIOVANNI: You did a great job, that's\n"
	.string "not the problem. PORYGON is a luxury\l"
	.string "product that only a few can afford. We\l"
	.string "gain a lot of money for each one we sell,\l"
	.string "that's true, but we also have dozens in\l"
	.string "our storages.$"

PokemonTower5F_Escena_4_Blaine_Texto_7:
.string "Lowering the prices is inevitable, due\n"
	.string "to their huge cost, we can't do anything\l"
	.string "but adapt the production rhythms to\l"
	.string "the demands of the population. KANTO\l"
	.string "barely has for itself, and this was\l"
	.string "easily expected.$"

PokemonTower5F_Escena_4_Blaine_Texto_8:
.string "Nevertheless…{PAUSE 20} I am aware of the fact\n"
	.string "that SILPH has developed an optimized\l"
	.string "version of PORYGON. The cost of the new\l"
	.string "PORYGON2 is three times the one of the\l"
	.string "normal PORYGON, making it\l"
	.string "non-profitable as a mass market\l"
	.string "product.$"

PokemonTower5F_Escena_4_Blaine_Texto_9:
.string "It's competitive value is another thing\n"
	.string "that we'll talk about later. As it seems,\l"
	.string "PORYGON2 is not the end, it's potential\l"
	.string "may be higher.$"

PokemonTower5F_Escena_4_Blaine_Texto_10:
.string "Therefore, I offer you, as compensation\n"
	.string "for the withdrawal of funds, to work\l"
	.string "here with our team of scientists. Not\l"
	.string "only in the search for a better version\l"
	.string "of PORYGON, but also of NIDOK…{PAUSE 20}$"

PokemonTower5F_Escena_4_Blaine_Texto_11:
.string "BLAINE: You know nothing will surpass\n"
	.string "the original project, GIOVANNI.$"
	
	
PokemonTower5F_Escena_4_Blaine_Texto_11_1:
.string "GIOVANNI: It's enough if it surpasses\n"
	.string "an ordinary LEGENDARY.$"
	

PokemonTower5F_Escena_4_Blaine_Texto_12:
.string "BLAINE: Hah. What about 3!?$"

PokemonTower5F_Escena_4_Blaine_Texto_13:
.string "GIOVANNI: Will you then accept my\n"
	.string "offer? A scientist like you deserves a\l"
	.string "second chance. Opposite from FUJI, you\l"
	.string "still have that inner flame of wanting\l"
	.string "even more.$"

PokemonTower5F_Escena_4_Blaine_Texto_14:
.string "BLAINE: I'm sorry, GIOVANNI. Even\n"
	.string "MEWTWO was too much for me. What's the\l"
	.string "deal of creating something as powerful\l"
	.string "if you cannot control it?$"

PokemonTower5F_Escena_4_Blaine_Texto_15:
.string "GIOVANNI: That's why we're here, BLAINE,\n"
	.string "so we can learn from our mistakes and\l"
	.string "become stronger. That won't happen\l"
	.string "again, at least not with these days\l"
	.string "technology.$"

PokemonTower5F_Escena_4_Blaine_Texto_16:
.string "Can't you see it, BLAINE? The gods of\n"
	.string "the POKÉMON world forgave us with a\l"
	.string "reason. We could have fallen inside\l"
	.string "LANCE's claws during the great purge,\l"
	.string "and ended up in a jail for the rest of\l"
	.string "our lives. But because of X or because\l"
	.string "of Y you're still in CINNABAR and I'm still\l"
	.string "hidden in the shadows.$"

PokemonTower5F_Escena_4_Blaine_Texto_17:
.string "BLAINE: Forgiven?! We're under their\n"
	.string "mercy! They can burn to the ground this\l"
	.string "base if they discovered it, or burn up\l"
	.string "my lab tomorrow if they did a single\l"
	.string "inspection! We're outlaws!$"

PokemonTower5F_Escena_4_Blaine_Texto_18:
.string "GIOVANNI: Doing less that what we're\n"
	.string "capable of for improving this region is\l"
	.string "wasting that gift, BLAINE.$"

PokemonTower5F_Escena_4_Blaine_Texto_19:
.string "BLAINE: {PAUSE 20} …{PAUSE 20}$"

PokemonTower5F_Escena_4_Blaine_Texto_20:
.string "I'll need some time to think about it.$"

PokemonTower5F_Escena_4_Blaine_Texto_21:
.string "GIOVANNI: I'll be here, BLAINE. You can\n"
	.string "still make the project of your life.$"

PokemonTower5F_Escena_4_Blaine_Texto_22:
.string "BLAINE: That will always be a\n"
	.string "possibility, until the last of my days.$"

PokemonTower5F_Escena_4_Blaine_Texto_23:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

PokemonTower5F_Escena_4_Blaine_Texto_24:
.string "How fortunate that you ignore why I\n"
	.string "got to keep my position at CINNABAR,\l"
	.string "ex-CHAMPION.$"

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
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
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
.string "PROTON: GRUNTS responsible for the\n"
	.string "LAVENDER TOWN mission present\l"
	.string "themselves, SIR.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2:
.string "GIOVANNI: And?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2:
.string "And…{PAUSE 25} And what, exactly? Sir…{PAUSE 25}.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3:
.string "GIOVANNI: I thought I was clear enough\n"
	.string "when I told you what to do in the\l"
	.string "POKÉMON TOWER. You didn't just get\l"
	.string "CUBONE's skulls and make some noise. You\l"
	.string "went further, why?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4:
.string "GRUNTS: It was an accident, sir. We just\n"
	.string "wanted not to be bored, but the mother\l"
	.string "of CUBONE took it really seriously and…\l"
	.string "We couldn't manage it properly.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5:
.string "GIOVANNI: Do you realize that you have\n"
	.string "just shown a really poor image not only\l"
	.string "to FUJI, with whom we were negotiating,\l"
	.string "but to the entire population of KANTO?\l"
	.string "If LANCE's government's discrediting\l"
	.string "campaigns weren't enough, now\l"
	.string "everybody knows what the ROCKETS have\l"
	.string "done in LAVENDER TOWN.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_6:
.string "Your lack of common sense and ethics\n"
	.string "deserves the maximum penalty.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_7:
.string "Believe me when I say that if I punished\n"
	.string "you proportionally of your mistakes, my\l"
	.string "NIDOKING would get to 0 PP in his whole\l"
	.string "offensive repertory.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_8:
.string "GRUNTS: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_9:
.string "GIOVANNI: Nevertheless…{PAUSE 25}.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_10:
.string "We are no assassins. Although your\n"
	.string "recent actions make it seem opposite.\l"
	.string "I'm offering you an opportunity of\l"
	.string "redemption.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_11:
.string "In compensation for the damage that\n"
	.string "you've caused, you'll be donating 70% of\l"
	.string "your wages to LAVENDER's charity.\l"
	.string "Meanwhile, TEAM ROCKET will be paying\l"
	.string "for your basic needs…{PAUSE 25} as long as you\l"
	.string "fulfill your part of the agreement.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_12:
.string "GRUNT: S-{PAUSE 25}Sir…{PAUSE 25} Thanks for this second\n"
	.string "chance. I swear you won't regret about\l"
	.string "not using your NIDOK….$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_13:
.string "GIOVANNI: That's not all.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_14:
.string "RECLUTA: …$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15:
.string "GIOVANNI: A large underground\n"
	.string "GRAVEYARD is going to be built in south\l"
	.string "LAVENDER TOWN. FUJI will need help, and\l"
	.string "you'll be there for anything that he may\l"
	.string "require. In addition to your usual\l"
	.string "ROCKET function, your time off will go\l"
	.string "to that cause. Any inconvenience?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16:
.string "GRUNTS: No, sir, no!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_17:
.string "GIOVANNI: This is your chance. One year\n"
	.string "of economic and recreational\l"
	.string "deprivation, in exchange for cleansing\l"
	.string "your stain. I warn you in advance, at\l"
	.string "the slightest mistake, you will be\l"
	.string "exiled forever.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_18:
.string "But if you keep yourselves stoic, at\n"
	.string "the end of the year you will earn not\l"
	.string "only forgiveness, but also you will be\l"
	.string "promoted to HIGH RANK, due to you\l"
	.string "having shown strength, constancy and,\l"
	.string "specially, the ability of learning from\l"
	.string "your mistakes.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19:
.string "Now, get out of my sight. Your DAY ONE\n"
	.string "starts now!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20:
.string "GRUNTS: Sir, yes, sir!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21:
.string "GIOVANNI: Damn unconscious, now\n"
	.string "everyone in KANTO will confuse malice\l"
	.string "with ignorance…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22:
	.string "PROTÓN: That's why DEEP BASE is only\n"
	.string "reserved for a few.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_23:
.string "PROTON: But…$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_24:
.string "GIOVANNI: What's the matter, PROTON?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_25:
.string "PROTON: There is something I didn't\n"
	.string "understand. A large underground\l"
	.string "GRAVEYARD in LAVENDER TOWN? I thought\l"
	.string "POKÉMON TOWER was more than enough to\l"
	.string "host all the graves.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_26:
.string "GIOVANNI: It is yet too soon to talk\n"
	.string "about that, PROTON, too soon. That time\l"
	.string "will arrive.$"

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
.string "GIOVANNI: Well?$"

RocketHideout_4F_Escena_Motoristas_Texto_1:
	.string "KOGA: It's irreversible, SAFARI ZONE\n"
	.string "will close its doors in the upcoming\l"
	.string "weeks.$"

RocketHideout_4F_Escena_Motoristas_Texto_2:
	.string "GIOVANNI: It was to be expected; now\n"
	.string "that the borders with JOHTO have\l"
	.string "opened, everyone will want to visit the\l"
	.string "neighboring region and its exotic\l"
	.string "POKÉMON.$"

RocketHideout_4F_Escena_Motoristas_Texto_3:
	.string "KOGA: Not to mention that more than\n"
	.string "one has already captured a KANGASKHAN\l"
	.string "in ROCK TUNNEL and made it public.$"

RocketHideout_4F_Escena_Motoristas_Texto_4:
	.string "GIOVANNI: The new times, KOGA, many\n"
	.string "things are going to change, not all for\l"
	.string "the better.$"

RocketHideout_4F_Escena_Motoristas_Texto_5:
	.string "Not even TEAM ROCKET escapes the\n"
	.string "changes, we have become great, so much\l"
	.string "so that it will be impossible to make\l"
	.string "everyone happy…$"

RocketHideout_4F_Escena_Motoristas_Texto_6:
.string "KOGA: Do you mean…?$"

RocketHideout_4F_Escena_Motoristas_Texto_7:
	.string "GIOVANNI: Yes, the close of the\n"
	.string "UNDERGROUND PATHS.$"

RocketHideout_4F_Escena_Motoristas_Texto_8:
	.string "In the past, they served as refuge\n"
	.string "during the war, and more recently, they\l"
	.string "turned out to be a great trafficking\l"
	.string "network for us.$"

RocketHideout_4F_Escena_Motoristas_Texto_9:
	.string "Thanks to them, we obtained huge\n"
	.string "revenues from products imported by sea\l"
	.string "from our SEVII ISLANDS base, something\l"
	.string "that was optimized via teleportation\l"
	.string "thanks to BILL's patent.$"

RocketHideout_4F_Escena_Motoristas_Texto_10:
	.string "Nowadays, with the union between KANTO\n"
	.string "Y JOHTO, they are nothing more than a\l"
	.string "burden for business between regions. I\l"
	.string "have already received pressure from\l"
	.string "the RADIO TOWER and the MAGNETRAIN to\l"
	.string "have them closed, and that's what will\l"
	.string "be done.$"

RocketHideout_4F_Escena_Motoristas_Texto_11:
.string "KOGA: But…$"

RocketHideout_4F_Escena_Motoristas_Texto_12:
	.string "GIOVANNI: TEAM ROCKET has grown. In\n"
	.string "those days, they were of great help to\l"
	.string "keep us afloat, but today we can do\l"
	.string "without them.$"

RocketHideout_4F_Escena_Motoristas_Texto_13:
	.string "KOGA: What about the BIKERS? Their\n"
	.string "main role was to sell imported goods,\l"
	.string "the roads were like their second hom…$"

RocketHideout_4F_Escena_Motoristas_Texto_14:
.string "PETREL: Did you call me, BOSS?$"

RocketHideout_4F_Escena_Motoristas_Texto_15:
	.string "GIOVANNI: That's right, both of you\n"
	.string "have been the link between TEAM ROCKET\l"
	.string "and the BIKERS.$"

RocketHideout_4F_Escena_Motoristas_Texto_16:
	.string "Therefore, I ask you to communicate to\n"
	.string "them the tough decision of closing the\l"
	.string "roads. We are going to rid ourselves of\l"
	.string "their services, but TEAM ROCKET does\l"
	.string "not forget.$"

RocketHideout_4F_Escena_Motoristas_Texto_17:
	.string "Despite becoming obsolete in the\n"
	.string "current KANTO, any BIKER who wishes to\l"
	.string "become a member of TEAM ROCKET and\l"
	.string "work in our various bases and branches\l"
	.string "will be more than welcome.$"

RocketHideout_4F_Escena_Motoristas_Texto_18:
	.string "With that, we wrap up this matter. KOGA,\n"
	.string "PETREL{PAUSE 15}…{PAUSE 15} that's all.$"

RocketHideout_4F_Escena_Motoristas_Texto_19:
.string "PETREL: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout_4F_Dialogo_Proton::
lock
faceplayer
msgbox RocketHideout_4F_Dialogo_Proton_Texto_1 MSGBOX_NPC
msgbox RocketHideout_4F_Dialogo_Proton_Texto_2 MSGBOX_NPC
release
end

RocketHideout_4F_Dialogo_Proton_Texto_2:
	.string "Even though I'm still an EXECUTIVE, I'm\n"
	.string "GIOVANNI's most trusted one. Meanwhile,\l"
	.string "PETREL and ARCHER are the only ADMINS,\l"
	.string "with ARCHER as the HEAD ADMIN, since\l"
	.string "he's the highest authority in our SEVII\l"
	.string "ISLANDS branch.$"


RocketHideout_4F_Dialogo_Proton_Texto_1:
	.string "The organization's hierarchy consists\n"
	.string "of several levels, starting with GRUNT,\l"
	.string "then HIGH-RANK GRUNT, followed by\l"
	.string "EXECUTIVE, ADMINISTRATOR, CHIEF\l"
	.string "ADMINISTRATOR, and finally, LEADER.$"



