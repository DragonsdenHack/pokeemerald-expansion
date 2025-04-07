SixIsland_Laboratorio_MapScripts::
	.byte 0

SixIsland_Laboratorio_Acromo::
lock
faceplayer
goto_if_set FLAG_HOENN_149, SixIsland_Laboratorio_Acromo_Final
goto_if_set FLAG_HOENN_148, SixIsland_Laboratorio_Acromo_Meteorito
delay 10
playse SE_PIN
applymovement 1, SixIsland_Laboratorio_Acromo_Move_1
waitmovement 0x0
waitse
msgbox SixIsland_Laboratorio_Acromo_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_2 MSGBOX_AUTOCLOSE
msgbox SixIsland_Laboratorio_Acromo_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SixIsland_Laboratorio_Acromo_Move_2
waitmovement 0x0
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_4 MSGBOX_AUTOCLOSE
msgbox SixIsland_Laboratorio_Acromo_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_7 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HOENN_148
checkitem ITEM_METEORITE
goto_if_eq VAR_RESULT, FALSE, SixIsland_Laboratorio_Acromo_No
delay 10
goto SixIsland_Laboratorio_Acromo_Meteorito_Si
release
end

SixIsland_Laboratorio_Acromo_Meteorito::
msgbox SixIsland_Laboratorio_Acromo_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_11 MSGBOX_AUTOCLOSE
delay 10
checkitem ITEM_METEORITE
goto_if_eq VAR_RESULT, FALSE, SixIsland_Laboratorio_Acromo_No
goto SixIsland_Laboratorio_Acromo_Meteorito_Si

SixIsland_Laboratorio_Acromo_Meteorito_Si::
delay 10
playse SE_PIN
applymovement 1, SixIsland_Laboratorio_Acromo_Move_1
waitmovement 0x0
waitse
msgbox SixIsland_Laboratorio_Acromo_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_14 MSGBOX_AUTOCLOSE
msgbox SixIsland_Laboratorio_Acromo_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_OBTAIN_BADGE
msgbox SixIsland_Laboratorio_Acromo_Texto_16 MSGBOX_DEFAULT
waitfanfare
removeitem ITEM_METEORITE
delay 10
playse SE_PIN
applymovement 1, SixIsland_Laboratorio_Acromo_Move_1
waitmovement 0x0
waitse
msgbox SixIsland_Laboratorio_Acromo_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SixIsland_Laboratorio_Acromo_Move_3
waitmovement 0x0
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, SixIsland_Laboratorio_Acromo_Move_4
waitmovement 0x0
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_19 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox SixIsland_Laboratorio_Acromo_Texto_20 MSGBOX_DEFAULT
givemon SPECIES_DURALUDON, 50, ITEM_STEEL_GEM
waitfanfare
msgbox SixIsland_Laboratorio_Acromo_Texto_21 MSGBOX_AUTOCLOSE
delay 10
msgbox SixIsland_Laboratorio_Acromo_Texto_22 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_149
release
end

SixIsland_Laboratorio_Acromo_Move_3:
face_up
step_end

SixIsland_Laboratorio_Acromo_Move_4:
face_player
step_end

SixIsland_Laboratorio_Acromo_No::
msgbox SixIsland_Laboratorio_Acromo_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox SixIsland_Laboratorio_Acromo_Texto_9 MSGBOX_AUTOCLOSE
release
end


SixIsland_Laboratorio_Acromo_Final::
msgbox SixIsland_Laboratorio_Acromo_Texto_23 MSGBOX_AUTOCLOSE
release
end

SixIsland_Laboratorio_Acromo_Move_2:
delay_8
face_up
delay_16
delay_8
face_player
step_end

SixIsland_Laboratorio_Acromo_Move_1:
emote_exclamation_mark
step_end

SixIsland_Laboratorio_Acromo_Texto_1:
	.string "????: Well, this is indeed outstanding.$"

SixIsland_Laboratorio_Acromo_Texto_2:
	.string "It relieves me knowing that I'm not the\n"
	.string "only willing to go further than the law.$"

SixIsland_Laboratorio_Acromo_Texto_3:
	.string "This place, more like the whole\n"
	.string "archipelago, is a mystery.$"

SixIsland_Laboratorio_Acromo_Texto_4:
	.string "I come from a distant region, and I have\n"
	.string "seen that a lot of its species can be\l"
	.string "found here as well.$"

SixIsland_Laboratorio_Acromo_Texto_5:
	.string "It is nothing but this peculiar\n"
	.string "connection that made me stay in this\l"
	.string "hidden clearing.$"

SixIsland_Laboratorio_Acromo_Texto_6:
	.string "It looks like you're an uneasy soul as\n"
	.string "well, aren't you? In fact, you may have\l"
	.string "found something that could help my\l"
	.string "investigations.$"

SixIsland_Laboratorio_Acromo_Texto_7:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

SixIsland_Laboratorio_Acromo_Texto_8:
	.string "Mhhh{PAUSE 20}…{PAUSE 20} No.$"

SixIsland_Laboratorio_Acromo_Texto_9:
	.string "If you ever find something that you\n"
	.string "think may help my work here, come to\l"
	.string "visit me. I shall reward you with a very\l"
	.string "special POKÉMON.$"

SixIsland_Laboratorio_Acromo_Texto_10:
	.string "Did you find anything?$"

SixIsland_Laboratorio_Acromo_Texto_11:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

SixIsland_Laboratorio_Acromo_Texto_12:
	.string "Mhh{PAUSE 10}…{PAUSE 10}\p"
	.string "This METEORITE{PAUSE 10}…{PAUSE 10}\p"
	.string "Where did you get it?$"

SixIsland_Laboratorio_Acromo_Texto_13:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

SixIsland_Laboratorio_Acromo_Texto_14:
	.string "So… the ALTERING CAVE…\p"
	.string "Very interesting.$"

SixIsland_Laboratorio_Acromo_Texto_15:
	.string "I think this is exactly what I was\n"
	.string "looking for. Thanks to it, I'll be one\l"
	.string "step nearer to the answers I'm seeking\l"
	.string "about all this biodiversity.$"

SixIsland_Laboratorio_Acromo_Texto_16:
	.string "{PLAYER} gave the METEORITE to the\n"
	.string "mysterious scientist!!$"

SixIsland_Laboratorio_Acromo_Texto_17:
	.string "Oh!$"

SixIsland_Laboratorio_Acromo_Texto_18:
	.string "In the end, my only purpose is reaching\n"
	.string "the maximum in terms of the potential\l"
	.string "of a POKÉMON, and you have pushed me\l"
	.string "nearer to my objective.$"

SixIsland_Laboratorio_Acromo_Texto_19:
	.string "Accept this POKÉMON as a reward.\n"
	.string "I am deeply grateful.$"

SixIsland_Laboratorio_Acromo_Texto_20:
	.string "YOU RECEIVED A LV.50 DURALUDON!!$"

SixIsland_Laboratorio_Acromo_Texto_21:
	.string "This POKÉMON is worth studying, trust\n"
	.string "me. It won't befriend a TYRANITAR, and\l"
	.string "as I discovered, it can reach an even\l"
	.string "greater potential.$"

SixIsland_Laboratorio_Acromo_Texto_22:
	.string "How?\p"
	.string "That's a mystery…{PAUSE 25} For now.$"

SixIsland_Laboratorio_Acromo_Texto_23:
	.string "If there really is a peak, unreachable\n"
	.string "by interacting with POKÉMON, don't you\l"
	.string "think it may be reachable by scientific\l"
	.string "methods rather than emotional ones?$"

