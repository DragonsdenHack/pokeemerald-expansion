FourIsland_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, FourIsland_OnTransition
	.byte 0

FourIsland_OnTransition::
setflag FLAG_VISITED_FOUR_ISLAND
end

FourIsland1::
lock
faceplayer
msgbox FourIsland1_texto_1 MSGBOX_NPC
release
end

FourIsland1_texto_1:
	.string "We are so sorry, but we are\n"
	.string "empty. Maybe in the future,\l"
	.string "trainer.$"


FourIsland2::
lock     
faceplayer     
msgbox FourIsland_Text_2, MSGBOX_DEFAULT
release     
end

FourIsland_Text_2:
.string "LORELEI has gone back.\p"
    .string "The LAPRAS she has, I imagine it\n"
    .string "to be the one she met as a child.\p"
    .string "I believe it was in ICEFALL CAVE\n"
    .string "that she caught it.\p"
    .string "Perhaps that POKéMON has been with\n"
    .string "her ever since.$"


FourIsland3::
end


FourIsland4::
lock     
faceplayer     
msgbox FourIsland_Text_4, MSGBOX_DEFAULT
release     
end

FourIsland_Text_4:
.string "Ooh, chilly!\p"
    .string "I made a slushie using ice I\n"
    .string "shaved inside ICEFALL CAVE.\p"
    .string "It's chilly and tasty!$"


FourIsland5::
lock     
faceplayer     
msgbox FourIsland_Text_5, MSGBOX_DEFAULT
release     
end

FourIsland_Text_5:
.string "Oh, you found me!\n"
    .string "Please don't tell LORELEI.\p"
    .string "Did you know that LORELEI has lots\n"
    .string "and lots of stuffed dolls?\p"
    .string "Every time she comes back to\n"
    .string "FOUR ISLAND, her collection grows!$"

FourIsland6::
end

FourIsland7::
end



FourIslandDocumento_100::
msgbox FourIslandDocumento_Text_100, MSGBOX_SIGN   
end

FourIslandDocumento_Text_100:
.string "FOUR ISLAND\n"
    .string "The Warm, Blue, Floe Island$"



FourIslandDocumento_101::
msgbox FourIslandDocumento_Text_101, MSGBOX_SIGN   
end

FourIslandDocumento_Text_101:
.string "LORELEI'S HOUSE$"

FourIsland_Encuentro_Zeus_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, FourIsland_Encuentro_Zeus_Move_1
waitmovement 0x0
goto FourIsland_Encuentro_Zeus

FourIsland_Encuentro_Zeus_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, FourIsland_Encuentro_Zeus_Move_1.1
waitmovement 0x0
goto FourIsland_Encuentro_Zeus

FourIsland_Encuentro_Zeus::
msgbox FourIsland_Encuentro_Zeus_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 9, FourIsland_Encuentro_Zeus_Move_2
waitmovement 0x0
delay 15
applymovement 9, FourIsland_Encuentro_Zeus_Move_3
waitmovement 0x0
fadeoutbgm 0
playse 586
msgbox FourIsland_Encuentro_Zeus_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox FourIsland_Encuentro_Zeus_Texto_3 MSGBOX_AUTOCLOSE
msgbox FourIsland_Encuentro_Zeus_Texto_4 MSGBOX_AUTOCLOSE
applymovement 9, FourIsland_Encuentro_Zeus_Move_4
waitmovement 0x0
msgbox FourIsland_Encuentro_Zeus_Texto_5 MSGBOX_AUTOCLOSE
applymovement 9, FourIsland_Encuentro_Zeus_Move_5
waitmovement 0x0
msgbox FourIsland_Encuentro_Zeus_Texto_6 MSGBOX_AUTOCLOSE
applymovement 9, FourIsland_Encuentro_Zeus_Move_6
waitmovement 0x0
msgbox FourIsland_Encuentro_Zeus_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox FourIsland_Encuentro_Zeus_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox FourIsland_Encuentro_Zeus_Texto_9 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_2F_POKE_BALL
fadescreen 1
delay 20
removeobject 9
fadescreen 0
fadeoutbgm 0
playse 548
setvar VAR_UNUSED_0x40F7, 96
release
end

FourIsland_Encuentro_Zeus_Texto_1:
	.string "Damn it, where could they have hidden\n"
	.string "them...$"

FourIsland_Encuentro_Zeus_Texto_2:
	.string "You don't appear to be from this place,\n"
	.string "and you also don't seem like a typical\l"
	.string "trainer, but what does that matter; all\l"
	.string "trainers along with their POKÉMON are\l"
	.string "equal against the creator of\l"
	.string "everything.$"

FourIsland_Encuentro_Zeus_Texto_3:
	.string "I'm pursuing two dangerous criminals;\n"
	.string "someone very wise trapped two ANCIENT\l"
	.string "POKÉMON on these islands, centuries\l"
	.string "ago. Two POKÉMON with a power capable\l"
	.string "of shaking the world and altering its\l"
	.string "weather conditions.$"

FourIsland_Encuentro_Zeus_Texto_4:
	.string "These two POKÉMON sleep somewhere,\n"
	.string "sealed and away from civilization, but\l"
	.string "within the territory of the SEVEN\l"
	.string "ISLANDS, that's for certain.$"

FourIsland_Encuentro_Zeus_Texto_5:
	.string "I came here because of the legend\n"
	.string "surrounding this cave and a poweful\l"
	.string "ICE/WATER-type POKÉMON, but the most\l"
	.string "I've encountered are wild LAPRAS; it\l"
	.string "doesn't seem like there's anything\l"
	.string "captivating here.$"

FourIsland_Encuentro_Zeus_Texto_6:
	.string "My next destination is the ALTERING\n"
	.string "CAVE, north of SIX ISLAND; there are\l"
	.string "enormous footprints there that match\l"
	.string "those of one of the two ANCIENT\l"
	.string "POKÉMON.$"

FourIsland_Encuentro_Zeus_Texto_7:
	.string "I must find those POKÉMON before those\n"
	.string "fanatics do; now that they know how to\l"
	.string "awaken them, I can't allow that to\l"
	.string "happen.$"

FourIsland_Encuentro_Zeus_Texto_8:
.string "...$"

FourIsland_Encuentro_Zeus_Texto_9:
	.string "If you spot anything unusual, inform me\n"
	.string "right away; I'll be exploring in the\l"
	.string "ALTERING CAVE. See you later,\l"
	.string "-TRAINER-.$"

FourIsland_Encuentro_Zeus_Move_1:
face_right
step_end

FourIsland_Encuentro_Zeus_Move_1.1:
walk_right
walk_in_place_right
step_end

FourIsland_Encuentro_Zeus_Move_2:
emote_exclamation_mark
step_end

FourIsland_Encuentro_Zeus_Move_3:
walk_left
walk_left
walk_left
step_end

FourIsland_Encuentro_Zeus_Move_4:
face_up
step_end

FourIsland_Encuentro_Zeus_Move_5:
face_left
step_end

FourIsland_Encuentro_Zeus_Move_6:
walk_in_place_left
step_end


FourIsland_Secundaria_Anciana::
lock
faceplayer
compare VAR_ROUTE109_STATE, 6
goto_if_eq FourIsland_Secundaria_Anciana_4
compare VAR_ROUTE109_STATE, 5
goto_if_eq FourIsland_Secundaria_Anciana_3
compare VAR_ROUTE109_STATE, 3
goto_if_gt FourIsland_Secundaria_Anciana_2
msgbox FourIsland_Secundaria_Anciana_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox FourIsland_Secundaria_Anciana_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_4
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_5
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_5 MSGBOX_AUTOCLOSE
msgbox FourIsland_Secundaria_Anciana_Texto_6 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_4
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_6.1 MSGBOX_AUTOCLOSE
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_5
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_7 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE109_STATE, 4
release
end

FourIsland_Secundaria_Anciana_2::
msgbox FourIsland_Secundaria_Anciana_Texto_7 MSGBOX_AUTOCLOSE
release
end

FourIsland_Secundaria_Anciana_3::
delay 20
msgbox FourIsland_Secundaria_Anciana_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox FourIsland_Secundaria_Anciana_Texto_12 MSGBOX_DEFAULT
waitse
playse SE_PIN
applymovement 2, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox FourIsland_Secundaria_Anciana_Texto_8 MSGBOX_AUTOCLOSE
delay 30
msgbox FourIsland_Secundaria_Anciana_Texto_9 MSGBOX_AUTOCLOSE
msgbox FourIsland_Secundaria_Anciana_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM85
msgbox FourIsland_Secundaria_Anciana_Texto_13 MSGBOX_DEFAULT
waitfanfare
setvar VAR_ROUTE109_STATE, 6
release
end

FourIsland_Secundaria_Anciana_4::
msgbox FourIsland_Secundaria_Anciana_Texto_11 MSGBOX_AUTOCLOSE
release
end

FourIsland_Secundaria_Anciana_Texto_1:
	.string "Why is a youngster like you in a place\n"
	.string "like this? There's nothing here that\l"
	.string "could interest you. Only LORELEI comes\l"
	.string "here occasionally; it's the place where\l"
	.string "she grew up.$"

FourIsland_Secundaria_Anciana_Texto_2:
.string "… …$"

FourIsland_Secundaria_Anciana_Texto_3:
	.string "So you managed to beat LORELEI in a\n"
	.string "battle; you must be quite powerful.$"

FourIsland_Secundaria_Anciana_Texto_4:
	.string "She honed her skills training in the\n"
	.string "ICEFALL CAVE. Many believe there are\l"
	.string "only LAPRAS, but I'll reveal a secret; a\l"
	.string "very powerful ICE-TYPE POKÉMON lives\l"
	.string "there. My grandparents used to recount\l"
	.string "legends.$"

FourIsland_Secundaria_Anciana_Texto_5:
	.string "LORELEI could never find it, nor did she\n"
	.string "search excessively; she always focused\l"
	.string "on taking care of her LAPRAS.$"

FourIsland_Secundaria_Anciana_Texto_6:
	.string "But beyond the small lake after\n"
	.string "climbing the waterfall, there is\l"
	.string "something... something special.$"

FourIsland_Secundaria_Anciana_Texto_6.1:
	.string "Perhaps if you check the rocks, you\n"
	.string "might find a gap to move forward, even\l"
	.string "if it seems impossible... That's what\l"
	.string "sets true trainers apart, going beyond\l"
	.string "apparent limits, right?$"

FourIsland_Secundaria_Anciana_Texto_7:
	.string "If you come across something, would you\n"
	.string "be able to show me that unique\l"
	.string "POKÉMON?$"

FourIsland_Secundaria_Anciana_Texto_8:
	.string "Oh! So, after all, the legend was true;\n"
	.string "our ICEFALL CAVE concealed such a\l"
	.string "majestic POKÉMON.$"

FourIsland_Secundaria_Anciana_Texto_9:
	.string "Look... it's pure ice; LORELEI would feel\n"
	.string "quite jealous of you right now, kid, I\l"
	.string "can assure you.$"

FourIsland_Secundaria_Anciana_Texto_10:
	.string "Take this, my gift for making an old lady\n"
	.string "like me feel the excitement of the\l"
	.string "mysteries of this world again.$"

FourIsland_Secundaria_Anciana_Texto_11:
	.string "Ohhh... So many mysteries still to solve;\n"
	.string "if LORELEI, dedicating her entire life\l"
	.string "to the ICE TYPE, hasn't been able to\l"
	.string "find that POKÉMON on her own island...\l"
	.string "How many incredible POKÉMON might be\l"
	.string "out there waiting?$"

FourIsland_Secundaria_Anciana_Texto_12:
	.string "{PLAYER} showed the GLASTRIER to\n"
	.string "the OLD WOMAN!$"

FourIsland_Secundaria_Anciana_Texto_13:
	.string "You obtained TM85 ROCK SLIDE from the\n"
	.string "OLD WOMAN!$"



Isla_Cuarta_Activador_Entrada::
compare VAR_ROUTE109_STATE, 3
goto_if_gt Isla_Cuarta_Activador_Entrada_Pasa
release
end

Isla_Cuarta_Activador_Entrada_Pasa::
delay 15
msgbox Isla_Cuarta_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Cuarta_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_2
waitmovement 0x0
release
end

Isla_Cuarta_Activador_Entrada_Pasa_Move_1:
emote_exclamation_mark
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_2:
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_3:
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_4:
face_up
step_end

Isla_Cuarta_Activador_Entrada_Pasa_Move_5:
face_player
step_end

Isla_Cuarta_Activador_Entrada_Texto_1:
.string "... ...$"

Isla_Cuarta_Activador_Entrada_Pasa_Text_YesNo:
	.string "This rock is practically submerged; if\n"
	.string "you go carefully, you could go through\l"
	.string "it. Do you want to try?$"



Isla_Cuarta_Activador_Entrada_2::
compare VAR_ROUTE109_STATE, 3
goto_if_gt Isla_Cuarta_Activador_Entrada_Pasa_2
release
end

Isla_Cuarta_Activador_Entrada_Pasa_2::
delay 15
msgbox Isla_Cuarta_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_1
waitmovement 0x0
msgbox Isla_Cuarta_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
applymovement OBJ_EVENT_ID_PLAYER, Isla_Cuarta_Activador_Entrada_Pasa_Move_3
waitmovement 0x0
release
end
