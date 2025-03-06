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
compare VAR_UNUSED_0x40F7, 204
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoLavanda
compare VAR_UNUSED_0x40F7, 201
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral
compare VAR_UNUSED_0x40F7, 190
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela
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
compare VAR_UNUSED_0x40F7, 94
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas
compare VAR_UNUSED_0x40F7, 92
goto_if_gt RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga
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

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoLavanda::
faceplayer
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1 MSGBOX_AUTOCLOSE
release
end


RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral::
faceplayer
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCentral_Texto_1:
	.string "Vuelve a la vías de tren, {PLAYER}. La\n"
	.string "conexión TRIGAL-AZAFRÁN está\l"
	.string "prácticamente cerrada, solo ese\l"
	.string "POKÉMON se interpone en nuestro\l"
	.string "camino. Si recorres toda la vía desde\l"
	.string "CIUDAD TRIGAL, eventualmente lo\l"
	.string "encontrarás.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela::
faceplayer
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_NeoCanela_Texto_1:
	.string "El PROFESOR OAK te estará esperando en\n"
	.string "lo que queda de ISLA CANELA. Confía en\l"
	.string "él, {PLAYER}. Él te dirá qué hacer.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1.1 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Final_DLC_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Final_DLC_Texto_6 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_FinDLC_Texto_1.1:
	.string "Ve a la BASE de HOENN, {PLAYER}.$"


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
	.string "su fin, pero esta{PAUSE 25}…{PAUSE 25} aún no, sigues\l"
	.string "participando en su devenir, de modo\l"
	.string "que{PAUSE 25}…{PAUSE 25}mantente mejorando hasta la\l"
	.string "próxima versión.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionesDLC_Texto_1:
	.string "Make the most of JOHTO,  {PLAYER}.\n"
	.string "Explore every hidden corner and push\l"
	.string "beyond where anyone else has gone. One\l"
	.string "day, you'll look back and realize just\l"
	.string "how much you've seen and done. Every\l"
	.string "story has its end, but this one… not\l"
	.string "just yet.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoSegunda_Texto_1:
	.string "We're going to unravel the mystery of\n"
	.string "the Essence POKÉMON once and for all.\l"
	.string "Once we do, nothing will stop us from\l"
	.string "turning KANTO and JOHTO into the\l"
	.string "powerhouses of the POKÉMON world.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionJohto_Texto_1:
	.string "The JOHTO region is the most historical\n"
	.string "and traditional place in the known\l"
	.string "world. There's something… spiritual\l"
	.string "about it, no doubt. And while we may\l"
	.string "never fully understand it, we cannot\l"
	.string "ignore its power.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLiga_Texto_1:
	.string "The POKÉMON LEAGUE has remained\n"
	.string "unchallenged since the war, but having\l"
	.string "no opposition has also weakened them.\l"
	.string "LANCE relies on his POKÉMON's superior\l"
	.string "BASE STATs, but you defeated the\l"
	.string "SACRED KANTO BIRDs. You know firsthand\l"
	.string "that STATs aren't everything in a\l"
	.string "battle.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionMansionOak_Texto_1:
	.string "Go to the POKÉMON MANSION, {PLAYER},\n"
	.string "and show OAK how a TRAINER in sync with\l"
	.string "their POKÉMON should battle.$"


RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionCultoPrimera_Texto_1:
	.string "That secret entrance might be just\n"
	.string "outside LAVENDER TOWN. Have you\l"
	.string "checked the southern path, on Route\l"
	.string "12?$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSotanoSilph_Texto_1:
	.string "Speak to the SILPH receptionist. She'll\n"
	.string "show you to the private library they\l"
	.string "have in the basement. According to the\l"
	.string "PRESIDENT, the data on that ESSENCE\l"
	.string "POKÉMON is in S3, in the last room.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionIslas_Texto_1:
	.string "Relax and enjoy the islands, {PLAYER}. There's a\n"
	.string "lot to do there if you know where to\l"
	.string "look. Maybe if you visit ARCHER at our\l"
	.string "headquarters, he'll show you some of its\l"
	.string "secrets, knows the SEVII ISLANDS better\l"
	.string "than anyone.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionGimnasios_Texto_1:
	.string "You can tackle the gyms in any order\n"
	.string "you like, {PLAYER}, but I recommend following\l"
	.string "the traditional route. By the way, CINNABAR\l"
	.string "GYM is closed right now, so you'll have to\l"
	.string "wait for that coward BLAINE to reopen\l"
	.string "it. And remember, once you've earned the\l"
	.string "first seven BADGES, you still have our\l"
	.string "GYM in VIRIDIAN CITY to conquer.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionSilph_Texto_1:
	.string "I have the utmost faith in you,\n"
	.string "{PLAYER}. SILPH's security is known to\l"
	.string "be tight, but they've never faced\l"
	.string "TRAINERS like you, or ANDRA before. Go to\l"
	.string "SILPH and show them how a real ROCKET\l"
	.string "fights!$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionAves_Texto_1:
	.string "We have located ARTICUNO at the\n"
	.string "Seafoam Islands. To get there, you'll\l"
	.string "first need to head to LAVENDER TOWN\l"
	.string "and then south, through through Routes\l"
	.string "12, 13, 14, and 15, and then across the\l"
	.string "sea by FUCHSIA CITY. Don't get too\l"
	.string "confident, {PLAYER}. My advice is to use the long\l"
	.string "journey to ARTICUNO as training. It takes\l"
	.string "more than just battle skills to defeat\l"
	.string "a SACRED BIRD.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_BaseProfunda_Texto_1:
	.string "So, you think I'm being inefficient and\n"
	.string "setting a poor example by sitting here,\l"
	.string "seemingly doing nothing, while the\l"
	.string "other executives are busy with their\l"
	.string "technology? Let me tell you something,\l"
	.string "kid. When you've seen what I've seen,\l"
	.string "there comes a point where your own mind\l"
	.string "becomes far more powerful and valuable\l"
	.string "than any information you could gather\l"
	.string "out there.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_MisionLavanda_Texto_1:
	.string "That meeting with MR. FUJI is crucial for\n"
	.string "our goals, {PLAYER}. Once you arrive\l"
	.string "to the POKÉMON TOWER, BLUE will secure\l"
	.string "the lower floors. You will stand guard\l"
	.string "on the upper levels and alert Proton at\l"
	.string "once if anything goes wrong. Do you\l"
	.string "understand? You are the last line of\l"
	.string "defense.$"

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan::
msgbox RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout4F_Dialogos_Giovanni_Dialogo_Kangaskhan_Texto_1:
	.string "Well? I want that KANGASKHAN out of\n"
	.string "ROCK TUNNEL. You can get there through\l"
	.string "the underground path east of CELADON;\l"
	.string "it'll take you to LAVENDER TOWN. Once\l"
	.string "you're there, ROCK TUNNEL is just to the\l"
	.string "north. And remember, I don't want you\l"
	.string "entering POKÉMON TOWER, we have plans\l"
	.string "there.$"




RocketHideout4F_3::
lock     
faceplayer     
msgbox RocketHideout4F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_3:
	.string "Don't worry, brother! Even if someone\n"
	.string "manages to get into the base, they'll\l"
	.string "never reach the boss! Not without the\l"
	.string "Elevator Key, haha!$"



RocketHideout4F_5::
lock     
faceplayer     
msgbox RocketHideout4F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout4F_Text_5:
	.string "Show some respect and keep your\n"
	.string "distance when you approach the boss,\l"
	.string "recruit. If there's one thing TEAM\l"
	.string "ROCKET is known for, it's our strict\l"
	.string "protocols.$"



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
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5
waitmovement 0x0
fadedefaultbgm
delay 20
playse SE_SLIDING_DOOR
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
opendoor 20, 23
waitdooranim
addobject 9
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 9
closedoor 20, 23
waitdooranim
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
delay 10
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
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
opendoor 20, 23
waitdooranim
addobject 9
applymovement 9, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 9
closedoor 20, 23
waitdooranim
setvar VAR_UNUSED_0x40F7, 38
release
end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.3:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

RocketHideout_4F_Mision_Andra_Fucsia_move_5.2:
walk_up
step_end

RocketHideout_4F_Mision_Andra_Fucsia_Texto_1:
.string "ANDRA: Always late!\p"
	.string "While you took your sweet time getting\n"
	.string "here, our great BOSS has already given\l"
	.string "me a mission. There's been some trouble\l"
	.string "with the BIKERS on the CYCLING ROAD in\l"
	.string "FUCHSIA, and guess who's going in as\l"
	.string "'mediators'? That's right, us.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_2:
	.string "So, what do you think of the new digs?\n"
	.string "Petrel might have been exaggerating\l"
	.string "when he said the CELADON HQ was\l"
	.string "nothing like the one on Route 5. Sure,\l"
	.string "it's bigger, but it looks pretty similar,\l"
	.string "don't you think?$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_3:
.string "Sea como sea, me largo ya, mi\n"
	.string "primera misión aquí no puede tener\l"
	.string "ningún fallo, se cumplirá de forma\l"
	.string "impecable.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_3.1:
	.string "A propósito, GIOVANNI me ha\n"
	.string "preguntado por ti, deberías de\l"
	.string "presentarte ya en su despacho,\l"
	.string "puede que quiera algo concreto de\l"
	.string "ti.$"

RocketHideout_4F_Mision_Andra_Fucsia_Texto_4:
.string "Like I said!\n"
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
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.1
waitmovement 0x0
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
delay 60
fadescreen 0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_14 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_9
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_16 MSGBOX_AUTOCLOSE
delay 20
applymovement 6, RocketHideout_4F_Giovanni_Mision_1_move_10
waitmovement 0x0
delay 30
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 4
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11
waitmovement 0x0
playse MUS_RG_SILPH
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.2
waitmovement 0x0
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_18 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_12
applymovement 10, RocketHideout_4F_Giovanni_Mision_1_move_12
waitmovement 0x0
waitse
delay 30
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_20.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_21.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_22.2 MSGBOX_AUTOCLOSE
delay 10
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
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_30.1 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_1_move_11.1
waitmovement 0x0
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_1_move_8
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_1_Texto_31 MSGBOX_AUTOCLOSE
fadedefaultbgm
setvar VAR_UNUSED_0x40F8, 1
setvar VAR_UNUSED_0x40F7, 39
release
end

RocketHideout_4F_Giovanni_Mision_1_move_11.2:
delay_8
face_right
delay_16
delay_8
face_up
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_1_move_11.1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.3:
delay_16
face_up
delay_16
delay_8
face_down
delay_16
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_8.2:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5.2:
face_up
step_end

RocketHideout_4F_Giovanni_Mision_1_move_5.1:
delay_8
face_left
delay_16
delay_16
face_down
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_1_Texto_1:
.string "????: {PLAYER}, am I right?\n"
	.string "Come in.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_2:
	.string "????: High-Ranking Grunt {PLAYER},\n"
	.string "sir, reporting for duty.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_3:
.string "Ha servido de forma oficial en 4\n"
	.string "misiones, teniendo éxito en 3 de\l"
	.string "ellas; le paró los pies a la\l"
	.string "CÓNSUL de ISLA INTA antes de que\l"
	.string "comprometiese nuestra situación\l"
	.string "comercial; fue clave en el robo a\l"
	.string "la patente de BILL que ha mejorado\l"
	.string "radicalmente nuestras comunicaciones;\l"
	.string "autor también del robo a la famosa\l"
	.string "reliquia del CAPITÁN del SS.ANNE{PAUSE 15}…{PAUSE 15}$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_3.1:
	.string "Su única derrota en combate fue a\n"
	.string "manos de ese misterioso ENTRENADOR,\l"
	.string "durante el fiasco del MT.MOON.\l"
	.string "Según los presentes, fue el único\l"
	.string "RECLUTA que no se dejó intimidar por\l"
	.string "el ridículo poder de su rival,\l"
	.string "peleando hasta el final.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_4:
.string "GIOVANNI: Excelente, PROTÓN.\n"
	.string "Gracias por la presentación.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_5:
.string "Como puedes ver, aquí no\n"
	.string "dejamos nada al azar. Tenemos en\l"
	.string "cuenta cada uno de los resultados\l"
	.string "de cada una de las células que\l"
	.string "forman esta gran organización, su\l"
	.string "correcta combinación y evaluación\l"
	.string "es la forma más justa de determinar\l"
	.string "qué lugar ocupa cada miembro.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_6:
.string "Con que vienes de ISLA INTA{PAUSE 15}…{PAUSE 15}\n"
	.string "Muchas de las cosas que has visto\l"
	.string "en KANTO te parecerán extrañas, te\l"
	.string "aseguro que es una región que vale\l"
	.string "la pena visitar; cuenta con lugares\l"
	.string "icónicos, muy buenos POKÉMON y una\l"
	.string "historia única. Sin embargo, su\l"
	.string "gente{PAUSE 25}…{PAUSE 25} es otro decir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7:
.string "Como ROCKET, te enrolaste en\n"
	.string "nuestra organización con el fin de\l"
	.string "robar POKÉMON u otros objetos\l"
	.string "valiosos, que equilibren la balanza\l"
	.string "de nuestros flujos de efectivo.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_7.1:
	.string "Esa es la función que tienen el\n"
	.string "90% de ROCKET, función poco ética\l"
	.string "pero necesaria, he de añadir.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_8:
.string "No obstante, tanto ANDRA como tú\n"
	.string "fuisteis ascendidos a ALTO RANGO.\l"
	.string "Ello os aleja de este tipo de misiones,\l"
	.string "para pasar a ser parte de cuestiones\l"
	.string "mucho más relevantes en el futuro\l"
	.string "a medio y largo plazo del TEAM ROCKET.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_9:
	.string "This also means you'll have privileged\n"
	.string "access to information about the\l"
	.string "ultimate purpose of our organization,\l"
	.string "the current situation in KANTO, and the\l"
	.string "true history of this region.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_10:
.string "Pero aún es demasiado pronto,\n"
	.string "quiero que crezcáis y mejoréis aún\l"
	.string "más bajo mi mando, que exploréis\l"
	.string "un poco más la región, disfrutéis\l"
	.string "de ello{PAUSE 25}…{PAUSE 25} y a su debido tiempo\l"
	.string "tendremos una reunión.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11:
.string "Eso por un lado, ahora pasemos a\n"
	.string "la segunda parte de esta charla:\l"
	.string "quiero que me hables de ese\l"
	.string "misterioso ENTRENADOR.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_11.1:
	.string "Fuiste tú quien más tiempo lo enfrentó,\n"
	.string "cuéntame todo sobre él, sus POKÉMON,\l"
	.string "objetos y movimientos que usó, forma\l"
	.string "de combatir, rasgos, actitud, puntos\l"
	.string "débiles{PAUSE 25}…{PAUSE 25} todo lo que se te pase\l"
	.string "por la cabeza.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12:
.string "GIOVANNI: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}\n"
	.string "Ya veo, no parece alguien\l"
	.string "convencional, un CHARMELEON no se\l"
	.string "ve así como así en la KANTO actual.\l"
	.string "Solo las élites tienen acceso a esa\l"
	.string "clase de POKÉMON, inexistentes desde\l"
	.string "hace tiempo en estado salvaje.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_12.1:
	.string "Si también llevaba una POKÉDEX,\n"
	.string "todo indica a que ese niño viene\l"
	.string "de PUEBLO PALETA. El equipo que me\l"
	.string "has descrito es absurdamente\l"
	.string "poderoso, teniendo en cuenta la\l"
	.string "distancia entre PUEBLO PALETA y el\l"
	.string "MT.MOON, además del poco bagaje que\l"
	.string "debe llevar como ENTRENADOR.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_13:
.string "Tal vez veas a alguien de esas\n"
	.string "dimensiones como inalcanzable, y\l"
	.string "ciertamente es una amenaza.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_13.1:
	.string "Pero{PAUSE 15}…{PAUSE 15} créeme cuando te digo que KANTO es\n"
	.string "mucho más que un ENTRENADOR. Por muy\l"
	.string "fuerte que sea, nadie, absolutamente\l"
	.string "nadie, es intocable y todos, de un\l"
	.string "modo u otro, pueden llegar a caer\l"
	.string "ante la oposición adecuada.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_13.2:
	.string "Te irás dando cuenta de lo lejos que\n"
	.string "están lo que ahora tienes por límites,\l"
	.string "conforme más te vayas adentrando en\l"
	.string "nuestra organización.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_14:
.string "Eso es todo en cuanto a 'ROJO'.\n"
	.string "Ahora, pasemos a la tercera y\l"
	.string "última parte de tu convocatoria\l"
	.string "aquí, hablemos de{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_1_Texto_15:
.string "RECLUTA: Disculpe, señor.\n"
	.string "El LÍDER de GIMNASIO de CIUDAD FUCSIA\l"
	.string "quiere verle inmediatamente, dice\l"
	.string "que es urgente, señor.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_16:
.string "GIOVANNI: Hacedle pasar.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_17:
.string "GIOVANNI: Espero que tu causa sea\n"
	.string "de fuerza mayor, KOGA.\l"
	.string "Acabas de interrumpir mi reunión\l"
	.string "con el joven recluta {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_18:
.string "KOGA: Haven't you heard?\n"
	.string "A KANGASKHAN has been\l"
	.string "spotted deep in ROCK TUNNEL!$"

RocketHideout_4F_Giovanni_Mision_1_Texto_19:
.string "GIOVANNI: Go on.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20:
.string "KOGA: Si eso llegara a ser cierto,\n"
	.string "la ZONA SAFARI perdería una enorme\l"
	.string "cantidad de público, lanzándose a\l"
	.string "la caza del raro POKÉMON maternal\l"
	.string "por su cuenta.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20.1:
	.string "Hemos vendido la ZONA SAFARI como\n"
	.string "un lugar único, en el que existen\l"
	.string "POKÉMON que solo pueden encontrarse\l"
	.string "allí, KANGASKHAN es uno de los mayores\l"
	.string "símbolos de esa flora y fauna.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_20.2:
	.string "Su procedencia supuestamente es\n"
	.string "debida a nuestra crianza en\l"
	.string "cautiverio, y a nada más.\l"
	.string "No pueden surgir de la nada, alguien\l"
	.string "debió de hacer la gracia, soltando\l"
	.string "uno atrapado allí.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21:
.string "KOGA: GIOVANNI, como dueño del 20%\n"
	.string "de las acciones totales de la ZONA\l"
	.string "SAFARI que eres, vengo a informarte,\l"
	.string "pero sobre todo a pedirte que te\l"
	.string "hagas cargo de esta situación.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_21.1:
	.string "Las pérdidas serían millonarias al\n"
	.string "instante de confirmarse este rumor,\l"
	.string "y nuestra imagen de exclusividad se\l"
	.string "rompería en pedazos.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22:
.string "GIOVANNI: Entiendo, KOGA.\n"
	.string "Me haré cargo de la situación,\l"
	.string "pero ya sabes lo que pienso.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_22.1:
	.string "ZONA SAFARI fue una gran inversión,\n"
	.string "que con el paso del tiempo ha ido a\l"
	.string "menos. Incluso bajando los precios a\l"
	.string "niveles ridículos, la gente cada\l"
	.string "vez va menos, este movimiento solo\l"
	.string "retrasará su inevitable caída.$"
	
RocketHideout_4F_Giovanni_Mision_1_Texto_22.2:
	.string "Mi pronóstico es que en menos de 3\n"
	.string "años dejará de existir. Aun así,\l"
	.string "el frenar esa caída puede suponer\l"
	.string "varias decenas de millones de\l"
	.string "ganancias respecto a dejarla caer.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_23:
.string "KOGA: Cuento contigo, entonces.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_24:
	.string "GIOVANNI: No one who isn't a ROCKET will\n"
	.string "leave that place with a KANGASKHAN if\l"
	.string "there is one to be found.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_25:
	.string "KOGA: I'll be keeping an eye on the news.\n"
	.string "We need to act fast; the area will soon\l"
	.string "be swarming with gawkers hoping for a\l"
	.string "glimpse.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_26:
.string "GIOVANNI: Eso es todo, KOGA.\n"
	.string "Te haré saber lo ocurrido, ahora si me\l"
	.string "disculpas, tengo una charla por terminar.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_27:
.string "KOGA: {PAUSE 15}… {PAUSE 15}…{PAUSE 15}\n"
	.string "Viva la vieja KANTO.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_28:
.string "GIOVANNI: Cambio de planes, {PLAYER}.\n"
	.string "Ya has oído a KOGA, tu misión ahora\l"
	.string "será limpiar hasta el último rincón\l"
	.string "del TÚNEL ROCA.\l"
	.string "Borra toda prueba, todo indicio\l"
	.string "posible que pueda indicar que un\l"
	.string "KANGASKHAN estuvo allí.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_29:
.string "Podrás encontrar el TÚNEL ROCA\n"
	.string "pasando primero por la VÍA\l"
	.string "SUBTERRÁNEA, al este de la ciudad.\l"
	.string "A partir de ahí no tiene pérdida,\l"
	.string "llegarás a PUEBLO LAVANDA, y una\l"
	.string "vez allí, el TÚNEL ROCA está al\l"
	.string "norte.$"

RocketHideout_4F_Giovanni_Mision_1_Texto_30:
.string "Eso es todo, {PLAYER}.\n"
	.string "Si ese KANGASKHAN existe, hazte con\l"
	.string "él y tráelo aquí como prueba.$" 
	
RocketHideout_4F_Giovanni_Mision_1_Texto_30.1:
	.string "Otra cosa más, evita la TORRE POKÉMON\n"
	.string "de PUEBLO LAVANDA. No quiero ROCKETS\l"
	.string "en ese lugar, al menos por ahora\l"
	.string "¿entendido?$"

RocketHideout_4F_Giovanni_Mision_1_Texto_31:
.string "GIOVANNI: ¡Entonces, a trabajar!$"


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
delay_8
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_1_move_7:
delay_8
walk_slow_right
delay_16
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
delay 10
showmoneybox 0, 0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2.1 MSGBOX_AUTOCLOSE
delay 25
playse SE_SHOP
addmoney 95000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
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
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.2 MSGBOX_AUTOCLOSE
delay 10
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
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.2 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_SILPH_SCOPE
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.3 MSGBOX_DEFAULT
waitfanfare
delay 30
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
waitse
delay 20
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_21 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.6
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_22 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_23 MSGBOX_AUTOCLOSE
playbgm 528, FALSE
applymovement 8, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 8
delay 15
fadedefaultbgm
delay 55
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.1 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.2 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 44
release
end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.6:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.5:
delay_8
face_right
delay_16
delay_8
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_8.1:
walk_in_place_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4:
delay_8
walk_slow_left
delay_16
delay_8
face_down
delay_16
delay_8
walk_slow_right
delay_16
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.1:
face_right
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.2:
walk_in_place_left
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.3:
delay_16
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_1:
.string "GIOVANNI: ¡{PLAYER}, qué oportuno!\n"
	.string "Ya me han informado de tu\l"
	.string "excelente trabajo, quitándole el\l"
	.string "KANGASKHAN de las manos a ese\l"
	.string "miserable en el último momento.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2:
.string "Tengo entendido que ese científico\n"
	.string "ya se aprovechó antes de la\l"
	.string "situación, en el MT.MOON. Has de\l"
	.string "saber que no es la primera vez que\l"
	.string "nos da problemas, es una especie\l"
	.string "de oportunista, un carroñero,\l"
	.string "fanático de los POKÉMON raros.\p"
	.string "Hará todo para obtenerlos, sin importar\n"
	.string "los medios, igual que BILL, pero\l"
	.string "sin sus recursos económicos.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_2.1:
	.string "Me alegra que hayas puesto en su\n"
	.string "lugar a ese cobarde, en el nombre\l"
	.string "del TEAM ROCKET. Eso, junto a encontrar\l"
	.string "al famoso KANGASKHAN, merecen una buena\l"
	.string "recompensa.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_3:
	.string "¡Te has embolsado 95.000¥!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_4:
.string "GIOVANNI: Y aún más. Para celebrar\n"
	.string "tu venganza sobre ese aprovechado,\l"
	.string "el TEAM ROCKET te recompensará\l"
	.string "también con un KABUTO.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5:
.string "Técnicamente estás recuperando el\n"
	.string "FÓSIL DOMO que te fue arrebatado\l"
	.string "en su momento, y con intereses. Ya\l"
	.string "convertido en KABUTO y criado hasta\l"
	.string "el nivel 28, si no recuerdo mal.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_5.1:
	.string "¡PROTÓN!\n"
	.string "¡Entrega el KABUTO a {PLAYER}!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6:
.string "PROTON: With pleasure, boss.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_6.1:
.string "Obtained a LV.28 KABUTO!$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_7:
.string "GIOVANNI: Técnicamente, su valor es\n"
	.string "de varios cientos de miles en\l"
	.string "el mercado negro, pero tu\l"
	.string "historia con este FÓSIL vale más\l"
	.string "que todo eso{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_8:
.string "Por ahora, el tema queda zanjado.\n"
	.string "Examinaremos a ese KANGASKHAN, para\l"
	.string "determinar su procedencia; sigue\l"
	.string "siendo todo un misterio su presencia\l"
	.string "en el TÚNEL ROCA.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_9:
.string "Bien, {PLAYER}. En tu última misión\n"
	.string "te recalqué la importancia de no\l"
	.string "acercarte a la TORRE POKÉMON, ese\l"
	.string "lugar está muy relacionado con\l"
	.string "nuestro próximo movimiento{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_10:
.string "Vamos a enviar a un pelotón\n"
	.string "completo, para recolectar el máximo\l"
	.string "número de cráneos de CUBONE posible.\l"
	.string "Algo de gran valor en el mercado negro.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11:
.string "Sin embargo, esta es solo la\n"
	.string "tapadera, la excusa hacia la que\l"
	.string "todos mirarán debido a nuestra\l"
	.string "fama.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_11.1:
	.string "El verdadero objetivo es llamar la\n"
	.string "atención de FUJI, para que acuda a\l"
	.string "TORRE POKÉMON en el momento exacto{PAUSE 5}…{PAUSE 5}$"


RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_12:
.string "FUJI fue uno de nuestros mejores\n"
	.string "científicos en el pasado.\l"
	.string "Es el único que conoce en detalle\l"
	.string "datos cruciales de uno de nuestros\l"
	.string "más grandes proyectos.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13:
.string "Tu misión es simple, {PLAYER}.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.1:
	.string "PROTÓN se encargará de llevar a\n"
	.string "FUJI hasta el último piso para\l"
	.string "negociar en privado.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_13.2:
	.string "Mientras, tú te encargarás de garantizar\n"
	.string "la confidencialidad de dicha reunión;\l"
	.string "no quiero que absolutamente nadie\l"
	.string "interceda mientras la negociación dure.\l"
	.string "¿Ha quedado claro?$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_14:
.string "Perfecto, nada debe de salir mal\n"
	.string "en esta misión.\l"
	.string "Por ello, además del resto de reclutas,\l"
	.string "formarás equipo con otro ENTRENADOR.\l"
	.string "Diría que{PAUSE 15}…{PAUSE 15} ya os conocéis{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_15:
.string "GIOVANNI: ¿Sorprendido?\n"
	.string "AZUL accedió a aliarse con\l"
	.string "nosotros en su paso por el PUENTE\l"
	.string "PEPITA, al tiempo de tu actuación\l"
	.string "en la casa de BILL.\l"
	.string "Su condición de nieto del PROF.OAK\l"
	.string "y rival directo de ROJO, hacen de\l"
	.string "él un agente doble perfecto.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16:
.string "AZUL: Así que el ROCKET del\n"
	.string "SS.ANNE{PAUSE 15}…{PAUSE 15}$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_16.1:
	.string "Escondes bien a tus soldados más\n"
	.string "valiosos, GIOVANNI. Ya podrías soltar\l"
	.string "a más como {PLAYER} por las rutas, es\l"
	.string "imposible seguir mejorando con gente\l"
	.string "tan mediocre deambulando en ellas.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17:
.string "GIOVANNI: Te queda mucho por ver\n"
	.string "de esta región, jovencito. Si crees\l"
	.string "que los LÍDERES DE GIMNASIO son lo\l"
	.string "mejor de por aquí, estás muy errado.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.1:
	.string "Las auténticas leyendas de KANTO, así\n"
	.string "como las de JOHTO, tienden a permanecer\l"
	.string "en las sombras.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.2:
	.string "Pero no te culpo, esta es ahora la\n"
	.string "nueva KANTO, y la única que gente a\l"
	.string "partir de tu edad conocerá.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_17.3:
	.string "AZUL: Mmm{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18:
.string "Volviendo al plan: la única variable\n"
	.string "capaz de torcerlo es ROJO, mis fuentes\l"
	.string "lo sitúan en RUTA 10, ya en TÚNEL ROCA.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.1:
	.string "Por su ritmo de avance, todo apunta\n"
	.string "a que llegará a PUEBLO LAVANDA en plena\l"
	.string "misión. Si por algún casual decide\l"
	.string "colarse en la TORRE POKÉMON, no podemos\l"
	.string "arriesgarnos a tener un MT.MOON 2.0.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_18.2:
	.string "Aquí es donde entras tú, AZUL.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19:
.string "Se te avisará de la llegada de\n"
	.string "ROJO, y te colocarás en los pisos\l"
	.string "inferiores de la TORRE, una vez\l"
	.string "aparezca, fingirás estar ahí de\l"
	.string "forma espontánea, sin nombrar\l"
	.string "nunca al TEAM ROCKET, tratarás de\l"
	.string "convencerlo para que dé media vuelta.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.1:
	.string "Háblale de los fantasmas, de que\n"
	.string "necesita un SCOPE SILPH{PAUSE 15}…{PAUSE 15}\l"
	.string "Si decidiese subir de todos modos,\l"
	.string "avisa a {PLAYER} inmediatamente.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.2:
	.string "Por otro lado, esto es para\n"
	.string "vosotros, un SCOPE SILPH.\l"
	.string "Con ello podréis capturar cualquier\l"
	.string "fantasma dentro de TORRE POKÉMON.$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_19.3:
.string "¡{PLAYER} obtuvo un SCOPE SILPH!$"

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
.string "GIOVANNI: Algo arrogante y\n"
	.string "prepotente, pero con potencial{PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.1:
	.string "PROTÓN se reunirá en breves\n"
	.string "contigo, {PLAYER}. Adelántate junto\l"
	.string "con el resto de reclutas para iniciar\l"
	.string "el señuelo de los CUBONE, y atraer a\l"
	.string "FUJI.$"
	
RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Text_24.2:
	 .string "Cuento contigo.$"

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
playse SE_BREAKABLE_DOOR
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_5
waitmovement 0x0
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_2
waitmovement 0x0
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.2
waitmovement 0x0
waitse
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.1
waitmovement 0x0
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
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
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
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17.1 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
delay 20
playse SE_EXIT
addobject 10
setobjectxy 10, 20, 9
waitse
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_13
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_14
waitmovement 0x0
applymovement 1, RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_7
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19.1 MSGBOX_AUTOCLOSE
delay 10
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

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.2:
jump_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Move_8.1:
walk_in_place_up
step_end

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_1:
	.string "Warning to all GRUNTs!\p"
	.string "A mysterious RED TRAINER has\n"
	.string "infiltrated into our BASE!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_2:
	.string "GIOVANNI: Oh, we don't need to keep\n"
	.string "spying to get information about him, he\l"
	.string "just came to the lion's den.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_3:
	.string "GRUNT: Sir orders! All of us are falling\n"
	.string "as dominoes tokens against their\l"
	.string "POKÉMON power!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_4:
	.string "PROTON: Call all HIGH-RANK GRUNTs and\n"
	.string "EXECUTIVEs available in the BASE!\l"
	.string "Protect the access to our LEADER!\p"
	.string "If the situation requires it, resort\n"
	.string "to our special specimens roo…$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_5:
.string "GIOVANNI: HOLD ON!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_6:
.string "GIOVANNI: No vamos a hacer nada\n"
	.string "de eso, PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_7:
.string "PROTÓN: P{PAUSE 15}-{PAUSE 15}pero señor{PAUSE 15}…{PAUSE 15}$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8:
.string "GIOVANNI: Quiero a todos los\n"
	.string "EJECUTIVOS y ROCKET DE ALTO RANGO\l"
	.string "dentro de la BASE ROCKET PROFUNDA.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_8.1:
	.string "¡YA!$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_9:
.string "RECLUTA: ¡A sus órdenes, JEFE!$"

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
.string "GIOVANNI: Nunca enseñes todas las\n"
	.string "cartas a tu enemigo, {PLAYER}.\l"
	.string "Por muy fuerte que ese ROJO sea, nunca\l"
	.string "podrá combatir contra algo que siquiera\l"
	.string "sabe de su existencia.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_17.1:
	.string "Para cuando lo sepa, será demasiado\n"
	.string "tarde para él, pues no habrá dispuesto\l"
	.string "de tiempo para adaptarse, nunca\l"
	.string "llegará a nuestro nivel combatiendo con\l"
	.string "la mediocridad que abunda en los\l"
	.string "pueblos y ciudades de la KANTO actual.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_18:
.string "PROTÓN: Aquí tiene, señor.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19:
.string "GIOVANNI: No quiero que cometas\n"
	.string "ninguna estupidez, {PLAYER}.\l"
	.string "Sé que deseas medir fuerzas con ese\l"
	.string "ENTRENADOR, y vengarte por tu\l"
	.string "derrota en el MT.MOON.$"

RocketHideout_4F_Giovanni_Mision_Llegada_Rojo_Text_19.1:
	.string "Ahora eres más fuerte y capaz que en\n"
	.string "ese entonces, pero aún no es el\l"
	.string "momento; lo prioritario ahora es\l"
	.string "mantener a ese chico en la ignorancia,\l"
	.string "al menos hasta averiguar sus intenciones{PAUSE 5}…{PAUSE 5}$"

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
delay_8
walk_left
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_left
walk_left
face_up
delay_16
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
waitse
delay 20
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
delay 10
showmoneybox 0, 0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 135000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4.1 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
givemon SPECIES_CUBONE, 20, ITEM_THICK_CLUB
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
waitmovement 0x0
waitse
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.1
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.2
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Torre_Lavanda_Move_2.4
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.2 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13 MSGBOX_AUTOCLOSE
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.2 MSGBOX_AUTOCLOSE
delay 10
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
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
special DrawWholeMapView
delay 45
playse SE_PIN
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
waitse
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_3
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_5
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20.1 MSGBOX_AUTOCLOSE
delay 15
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_9
waitmovement 0x0
waitse
delay 10
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

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.1:
face_left
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.2:
face_down
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_6.3:
delay_8
face_right
delay_16
delay_8
face_down
delay_8
delay_16
walk_in_place_down
delay_8
step_end

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
setmetatile 21, 11, 0x299, TRUE
setmetatile 22, 11, 0x299, TRUE
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
.string "GIOVANNI: Excelente trabajo, ANDRA.\n"
	.string "Los DRATINI y SCYTHER recolectados en\l"
	.string "la ZONA SAFARI se venderán a precio de\l"
	.string "oro, como premio en el CASINO.\l"
	.string "Aquí tienes tu recompensa.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_2:
.string "GIOVANNI: Tú también estás de\n"
	.string "vuelta, {PLAYER}.\l"
	.string "Mantuviste en privado, tal y como te\l"
	.string "ordené, la conversación entre FUJI y\l"
	.string "PROTÓN; una negociación clave para\l"
	.string "nosotros, por ello, aquí tienes.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_3:
	.string "¡Te has embolsado 135.000¥!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4:
.string "GIOVANNI: Y otra cosa más, en el\n"
	.string "nombre del TEAM ROCKET, te obsequio\l"
	.string "con uno de los CUBONE robados en\l"
	.string "la TORRE POKÉMON.\l"
	.string "Pero no un CUBONE cualquiera, este\l"
	.string "lleva equipado un HUESO GRUESO, objeto\l"
	.string "que multiplica por 2 su ATAQUE, tanto a\l"
	.string "CUBONE como a su evolución, MAROWAK.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_4.1:
	.string "Un regalo digno de aquel que\n"
	.string "pudo batir al MAROWAK de FUJI.\l"
	.string "¿No crees?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_5:
.string "¡HAS RECIBIDO UN CUBONE AL NV.20!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_6:
.string "GIOVANNI: Cerrando este tema…\n"
	.string "Os interesará saber que, investigando al\l"
	.string "KANGASKHAN encontrado en el TÚNEL ROCA,\l"
	.string "vimos que su fisiología era muy similar\l"
	.string "al de la línea evolutiva CUBONE-MAROWAK.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7:
.string "En la ZONA SAFARI, todos los KANGASKHAN\n"
	.string "son criados en cautiverio.\l"
	.string "Con todo tipo de comodidades, es natural\l"
	.string "que las crías se desarrollen siempre\l"
	.string "hasta alcanzar esa fase…$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.1:
	.string "Pero la línea evolutiva CUBONE-MAROWAK\n"
	.string "no está clara; CUBONE surge como tal\l"
	.string "en el momento de tomar el cráneo de su\l"
	.string "madre fallecida.$"
	
RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.2:
	.string "Sin embargo, ¿y si su madre no fallece?\n"
	.string "¿En qué se convertiría CUBONE?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_7.3:
	.string "Según lo que indica nuestro\n"
	.string "estudio, en un KANGASKHAN.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_8:
.string "Esto es difícilmente demostrable.\n"
	.string "Solo en el supuesto de que TORRE POKÉMON\l"
	.string "dejara de existir, se podría ver lo\l"
	.string "que ocurre con los CUBONE de allí que\l"
	.string "emigren en masa hacia el TÚNEL ROCA.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9:
    .string "TÚNEL ROCA es, en realidad, un lugar más\n"
	.string "propicio para la reproducción y super-\l"
	.string "vivencia de CUBONE que TORRE POKÉMON.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.1:
.string "Si con el paso de generaciones comenzaran\n"
	.string "a aparecer también KANGASKHAN, este\l"
	.string "hecho constituiría una prueba irrefutable\l"
	.string "del vínculo entre ambas especies.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.2:
.string "Basándonos en esta hipótesis, la\n"
	.string "presencia del KANGASKHAN que allí\l"
	.string "capturaste, {PLAYER}, cobra sentido.$"


RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.3:
	.string "Así es, tal vez ese KANGASKHAN sea el\n"
	.string "primer caso de una cría que, sin llegar\l"
	.string "a ser CUBONE, emigró al túnel, logró\l"
	.string "sobrevivir y se convirtió en KANGASKHAN\l"
	.string "por su cuenta.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_9.4:
	.string "Tal vez sea un fenómeno que veamos\n"
	.string "cada vez con más frecuencia, solo\l"
	.string "tiempo lo dirá.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10:
.string "GIOVANNI: Dejando esto de lado, y\n"
	.string "aprovechando que ambos estáis aquí, es\l"
    .string "el momento de dar el siguiente paso.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.1:
    .string "ANDRA: ¿A qué se refiere?$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_10.2:
	.string "GIOVANNI: Los dos habéis demostrado ser\n"
	.string "competentes y dignos de confianza.\l"
	.string "Ya lleváis 6 misiones con nosotros,\l"
	.string "cumpliendo deforma satisfactoria en 5\l"
	.string "de ellas, muy pocos pueden decir eso\l"
	.string "en tan poco tiempo.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_11:
.string "Pero, como habréis podido comprobar,\n"
	.string "el TEAM ROCKET tiene vetada su\l"
	.string "presencia en cualquier comercio\l"
	.string "público de la región, incluso del\l"
	.string "CENTRO COMERCIAL AZULONA.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_12:
.string "Pese a ello, no debéis preocuparos.\n"
	.string "Sé que dos ALTO RANGO en ascenso\l"
	.string "estarán ansiosos de poder invertir el\l"
	.string "dinero que buenamente han ganado en\l"
	.string "mejorar aún más a sus POKÉMON.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_13:
.string "En esta organización nunca dejamos\n"
	.string "nada al azar, hace ya tiempo que\l"
	.string "nos procuramos una inmensa red comercial\l"
	.string "privada, mayor que la propia oferta\l"
	.string "impuesta y fijada por esas sanguijuelas\l"
	.string "de la MESETA AÑIL.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14:
.string "A vuestra llegada aquí, se os avisó\n"
	.string "de que poco a poco iríais descubriendo\l"
	.string "algunos de los secretos que el TEAM\l"
	.string "ROCKET guarda.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.1:
	.string "Pues bien{PAUSE 25}…{PAUSE 25} ha llegado el momento de\n"
	.string "desvelar uno de ellos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_14.2:
	.string "¡PROTÓN!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_15:
.string "PROTÓN: A la orden, jefe.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_16:
.string "ANDRA: Wow! A secret base hidden inside\n"
	.string "a secret base? How clever!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17:
.string "GIOVANNI: Así es, ANDRA.\n"
	.string "Lo verdaderamente importante de este\l"
	.string "lugar se encuentra a partir de esas\l"
	.string "escaleras, muchos piensan que el\l"
	.string "CASINO es la tapadera de esta BASE.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_17.1:
	.string "Pero se equivocan…\n"
	.string "Esta BASE es la tapadera de lo que\l"
	.string "ahí abajo hay realmente.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_18:
.string "Espero que seáis conscientes de la\n"
	.string "magnitud de este secreto.\l"
	.string "Si las autoridades de KANTO tuvieran\l"
	.string "la más mínima idea de la que tenemos\l"
	.string "aquí montada, no dudarían en destinar\l"
	.string "todos sus recursos en destruirnos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_19:
.string "GIOVANNI: Solo nuestros científicos y\n"
	.string "soldados a partir de ALTO RANGO tienen\l"
	.string "acceso a este lugar, podréis entrar\l"
	.string "siempre y cuando queráis, interactuando\l"
	.string "con el PC de PROTÓN.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20:
.string "GIOVANNI: Eso es todo por ahora.\n"
	.string "A falta de nuevas misiones, os\l"
	.string "concedo tiempo libre para que\l"
	.string "exploréis la -BASE ROCKET PROFUNDA-.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_20.1:
	.string "Así, os iréis haciendo una idea de en\n"
	.string "qué invertimos todos nuestros recursos.$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_21:
.string "ANDRA: ¡Todo un honor que deposite\n"
	.string "su confianza en nosotros, GIOVANNI!$"

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Text_22:
.string "ANDRA: Nos vemos allí abajo, {PLAYER}.\n"
	.string "¡Voy a disfrutar como una niña,\l"
	.string "explorando cada rincón de uno\l"
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
walk_fast_down
walk_fast_down
walk_fast_right
step_end

RocketHideout_4F_Giovanni_Mision_Base_Profunda_Move_12:
walk_fast_down
walk_fast_right
walk_fast_right
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
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8.1 MSGBOX_AUTOCLOSE
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
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_10
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12
waitmovement 0x0
delay 10
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


RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6.1:
walk_in_place_down
step_end


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
delay 50
hidemoneybox
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.2
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_18 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_19 MSGBOX_DEFAULT
givemon SPECIES_ARTICUNO, 60, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_20 MSGBOX_DEFAULT
givemon SPECIES_ZAPDOS, 60, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_21 MSGBOX_DEFAULT
givemon SPECIES_MOLTRES, 60, ITEM_LUM_BERRY
waitfanfare
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_22 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.3
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_12.4
waitmovement 0x0
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_14
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_25 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
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
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_31 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Mision_Islas_Sete_Lance_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_32 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_676
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_HIDE_FANCLUB_BOY
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setflag FLAG_HIDE_LILYCOVE_HARBOR_FERRY_SAILOR
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 95
release
end

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1:
.string "????: Ya no tienes la sartén por\n"
	.string "el mango, LANCE.\l"
	.string "Sugiero que te calmes.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_1.1:
	.string "????: Pero{PAUSE 25}…{PAUSE 25} ahora vienes a mí a decir{PAUSE 25}…{PAUSE 25}\n"
	.string "que lleve todo esto de la forma más\l"
	.string "justa posible y escuche tus exigencias.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_2:
.string "GIOVANNI: Si quieres conservar parte de\n"
	.string "tus privilegios y tu poder, deberás\l"
	.string "cumplir con las siguientes condiciones{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_3:
.string "Provocar la renuncia de ROJO al título\n"
	.string "de CAMPEÓN, y borrarlo del mapa.\l"
	.string "Quiero fuera de juego a ese experimento\l"
	.string "de OAK, llevadlo a algún lugar apartado\l"
	.string "y decid a los medios que está realizando\l"
	.string "una especie de entrenamiento secreto.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4:
.string "Con ello, mantendréis a AZUL como\n"
	.string "vigente CAMPEÓN, él nos informará de\l"
	.string "cualquier paso en falso que tratéis de\l"
	.string "dar en contra nuestra, LANCE.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_4.1:
    .string "Por tu bien, espero que no\n"
	.string "cometas ninguna estupidez.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_5:
.string "Confirmaréis la disolución definitiva\n"
	.string "del TEAM ROCKET; ello implica que todo\l"
	.string "ROCKET real que sea visto, será tomado\l"
	.string "como un ciudadano más, con su respectivo\l"
	.string "permiso para entrar en las tiendas.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_6:
.string "LANCE: {PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_7:
.string "GIOVANNI: Y por último, reduciréis en\n"
	.string "un 80% toda la presión fiscal, tanto de\l"
	.string "SILPH como del resto de pequeños\l"
	.string "negocios de KANTO; se acabó el chuparle\l"
	.string "la sangre a los ciudadanos, y el\l"
	.string "mantenerlos bajo un régimen de\l"
	.string "esclavitud camuflado.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8:
.string "Eso es todo. Y recuerda, un solo mal\n"
	.string "gesto, un leve indicio de que intentas\l"
	.string "algo raro, y toda KANTO sabrá lo\l"
	.string "ocurrido en el HALL DE LA FAMA.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_8.1:
	.string "¡Ahora, fuera de mi vista!$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_9:
.string "PROTÓN: Señor, ¿cree que hacemos\n"
	.string "lo correcto negociando con gente\l"
	.string "así?\l"
	.string "¿No deberíamos…?$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_10:
.string "GIOVANNI: Lo sé, PROTÓN, pero KANTO\n"
	.string "no está preparada para asimilar todo\l"
	.string "lo ocurrido; todo cuanto necesita es\l"
	.string "alcanzar de nuevo la estabilidad, no\l"
	.string "una nueva revolución por todo lo alto\l"
	.string "que meta aún más caos a la región.\l"
	.string "Por el momento, LANCE está atado, y\l"
	.string "con las nuevas condiciones impuestas,\l"
	.string "todo tenderá a mejorar{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_11:
.string "GIOVANNI: {PLAYER}, demostraste ser\n"
	.string "un ENTRENADOR excepcional en el\l"
	.string "HALL DE LA FAMA, único, de esos\l"
	.string "que aparecen una vez cada 50 años,\l"
	.string "solo alguien así pudo haber derrotado a\l"
	.string "un equipo con un poder tan incontenible\l"
	.string "como el que tenía LANCE.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_12:
.string "Por fortuna, hemos devuelto a\n"
	.string "RAIKOU, ENTEI y SUICUNE a sus\l"
	.string "hábitats naturales de JOHTO.\l"
	.string "Esperemos que ningún maníaco como\l"
	.string "LANCE tenga la intención y el poder\l"
	.string "como para volver a atraparlos{PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_13:
.string "GIOVANNI: {PAUSE 5}…{PAUSE 5}$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_14:
.string "Hemos cumplido con el propósito\n"
	.string "por el que el TEAM ROCKET renació,\l"
	.string "{PLAYER}: salvar KANTO de las garras\l"
	.string "de LANCE, y tú has sido más que\l"
	.string "fundamental para ello.\l"
	.string "Junto con ATLAS y ANDRA, has alcanzado\l"
	.string "el rango más alto que puedo ofrecer a\l"
	.string "un miembro del TEAM ROCKET en KANTO.$"

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
.string "YOU INVOICED 1,000,000¥!!$"

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
.string "Of course, we still have MEWTWO as a\n"
	.string "milestone; still is a danger that\l"
	.string "we have to take care of.\l"
	.string "But… I don't want to involve you in\l"
	.string "a mission like that for the moment.$"

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
	.string "kind of POKÉMON very similar to JOHTO ones.$"

RocketHideout_4F_Mision_Islas_Sete_Lance_Texto_27:
.string "With this you can travel legally by\n"
	.string "taking the VERMILION FERRY.$"

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
delay_16
walk_in_place_left
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_5:
walk_right
delay_16
walk_in_place_right
step_end

RocketHideout_4F_Mision_Islas_Sete_Lance_Move_6:
walk_left
delay_16
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
delay_16
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
playse SE_BREAKABLE_DOOR
waitse
delay 10
msgbox PokemonTower5F_Escena_4_Blaine_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonTower5F_Escena_4_Blaine_Move_9
waitmovement 0x0
delay 10
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
opendoor 20, 23
waitdooranim
applymovement 12, RocketHideout_4F_Mision_Andra_Fucsia_move_5.2
waitmovement 0x0
removeobject 12
closedoor 20, 23
waitdooranim
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
.string "BLAINE: W'What…{PAUSE 30} B'B'But…{PAUSE 20} Why???$"

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
delay_8
walk_slow_down
delay_8
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
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1
waitmovement 0x0
waitse
delay 10
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
delay 5
applymovement 14, RocketHideout_4F_Giovanni_Mision_1_move_1
delay 5
applymovement 15, RocketHideout_4F_Giovanni_Mision_1_move_1
delay 5
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20 MSGBOX_AUTOCLOSE
applymovement 13, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
applymovement 14, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
applymovement 15, RocketHideout_4F_Escena_Castigo_Reclutas_Move_7
delay 5
waitmovement 0x0
delay 20
applymovement 1, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 13
removeobject 14
removeobject 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_4F_Escena_Castigo_Reclutas_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 10, RocketHideout_4F_Escena_Castigo_Reclutas_Move_2.1
waitmovement 0x0
delay 10
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

RocketHideout_4F_Escena_Castigo_Reclutas_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_left
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_4.1:
jump_in_place_up
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Move_6.1:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_1:
.string "PROTON: GRUNTs responsible for the\n"
	.string "LAVENDER TOWN mission present\l"
	.string "themselves, SIR.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2:
.string "GIOVANNI: And?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_2.2:
.string "And…{PAUSE 25} And what, exactly? {PAUSE 25}…{PAUSE 25} Sir…{PAUSE 25}.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_3:
.string "GIOVANNI: I thought I was clear enough\n"
	.string "when I told you what to do in the\l"
	.string "POKÉMON TOWER. You didn't just get\l"
	.string "CUBONE's skulls and make some noise.\p"
	.string "You went further, why?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_4:
.string "GRUNTs: It was an accident, sir. We just\n"
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
.string "GRUNTs: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

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
.string "RECLUTA: {PAUSE 25}…{PAUSE 25}$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_15:
.string "GIOVANNI: A large underground\n"
	.string "GRAVEYARD is going to be built in south\l"
	.string "LAVENDER TOWN. FUJI will need help, and\l"
	.string "you'll be there for anything that he may\l"
	.string "require. In addition to your usual\l"
	.string "ROCKET function, your time off will go\l"
	.string "to that cause. Any inconvenience?$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_16:
.string "GRUNTs: No, sir, no!$"

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
	.string "promoted to HIGH-RANK, due to you\l"
	.string "having shown strength, constancy and,\l"
	.string "specially, the ability of learning from\l"
	.string "your mistakes.$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_19:
.string "Now, get out of my sight!\p"
	.string "Your DAY ONE starts now!$"

RocketHideout_4F_Escena_Castigo_Reclutas_Texto_20:
.string "GRUNTs: Sir, yes, sir!$"

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
waitse
addobject 16
applymovement 16, RocketHideout_4F_Escena_Motoristas_Move_11
waitmovement 0x0
msgbox RocketHideout_4F_Escena_Motoristas_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, RocketHideout_4F_Escena_Motoristas_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_4F_Escena_Motoristas_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_4F_Escena_Motoristas_Move_12
waitmovement 0x0
delay 10
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



