RocketHideout_JohtoP2_MapScripts::
	.byte 0


RocketHideoutJohtoP2Documento_100::
lock        
msgbox RocketHideoutJohtoP2Documento_Text_100, MSGBOX_DEFAULT
msgbox RocketHideoutJohtoP2Documento_Text_101, MSGBOX_DEFAULT
release     
end

RocketHideoutJohtoP2Documento_Text_100:
	.string "(It appears to be a document written\n"
	.string "and signed by GIOVANNI himself). Dear\l"
	.string "{PLAYER}, we haven't been idle either.\l"
	.string "From the DEEP BASE, our top scientists\l"
	.string "have finally managed to develop the\l"
	.string "ultimate POKÉMON STONE, one that allows\l"
	.string "for a final evolution of POKÉMON that\l"
	.string "naturally shouldn't be able to evolve\l"
	.string "further. In other words, it allows us\l"
	.string "access to all experiments and\l"
	.string "prototypes created by both us and our\l"
	.string "former enemies. The creation of a single\l"
	.string "stone, however, comes at an immense\l"
	.string "economic cost. That's why only the 3\l"
	.string "LEADERS of JOHTO, HOENN, and the SEVII\l"
	.string "ISLANDS have been given one unit.\l"
	.string "Compatible POKÉMON will have their BASE\l"
	.string "STATS boosted by 100, similar to MEGA\l"
	.string "EVOLUTION, but allowing the use of an\l"
	.string "item. Thanks to the collaboration of\l"
	.string "BILL, BLAINE, OAK, and ELM, we have a\l"
	.string "wide variety of POKÉMON that will\l"
	.string "respond to the STONE. They are as\l"
	.string "follows:$"

RocketHideoutJohtoP2Documento_Text_101:
.string "- ELECTRODE\n"
	.string "- MAGMORTAR\l"
	.string "- ELECTIVIRE\l"
	.string "- PORYGON2\l"
	.string "- NIDOKING\l"
	.string "- NIDOQUEEN\l"
	.string "- AERODACTYL\l"
	.string "- TAUROS\l"
	.string "...\l"
	.string "...\p"
	.string "Choose wisely.$"



RocketHideoutJohtoP2Documento_102::
msgbox RocketHideoutJohtoP2Documento_Text_102, MSGBOX_SIGN   
end

RocketHideoutJohtoP2Documento_Text_102:
	.string "-This place belongs to the TRAINER\n"
	.string "where the old and the new have come\l"
	.string "together-.$"

RocketHideoutJohtoP2_Obtencion_Deoxys::
lock
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_DEOXYS, 50, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
removeobject 2
release
end

RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_1:
.string "(There is a text written on the POKÉ BALL,\n"
	.string "is redacted by GIOVANNI)$"

RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_2:
	.string "-{PLAYER}, the services you have\n"
	.string "rendered to TEAM ROCKET have been of\l"
	.string "immeasurable value. I know the best is\l"
	.string "yet to come; this organization holds no\l"
	.string "secrets for you. That's why I want you\l"
	.string "to be the first to have a specimen of\l"
	.string "DEOXYS. We have yet to reproduce the\l"
	.string "genetic material of the ATTACK and\l"
	.string "DEFENSE forms, but we have succeeded\l"
	.string "with the BASE form.-$"

RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_3:
.string "YOU OBTAINED A DEOXYS AT LV.50!!$"


RocketHideoutJohtoP2_Obtencion_Regis::
lock
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGIROCK, 20, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_4 MSGBOX_DEFAULT
givemon SPECIES_REGISTEEL, 20, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGICE, 20, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
removeobject 3
release
end

RocketHideoutJohtoP2_Obtencion_Regis_Texto_1:
	.string "(There is a message written in the POKÉ\n"
	.string "BALL, it is redacted by ANDRA)$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_2:
	.string "-{PLAYER}, GIOVANNI sent me to HOENN\n"
	.string "to find the equivalent of the\l"
	.string "LEGENDARY BIRDS of KANTO in that\l"
	.string "region. After much research, I managed\l"
	.string "to locate the chambers housing the\l"
	.string "so-called REGIS and decipher the\l"
	.string "puzzles leading to them. Our scientists\l"
	.string "handled the rest, and just like the\l"
	.string "LEGENDARIES of KANTO and JOHTO, they\l"
	.string "were able to clone their genetic\l"
	.string "material. Here are 3 of the first\l"
	.string "successfully replicated specimens.\l"
	.string "Someone like you will surely know how to\l"
	.string "make the most of their unique STAT\l"
	.string "combinations.-$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_3:
.string "YOU OBTAINED A LV.20 REGIROCK!!$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_4:
.string "YOU OBTAINED A LV.20 REGISTEEL!!$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_5:
.string "YOU OBTAINED A LV.20 REGICE!!$"

RocketHideoutJohtoP2_Obtencion_Piedra_Rocket::
release
end

RocketHideoutJohtoP2_Documento_Lago::
msgbox RocketHideoutJohtoP2_Documento_Lago_Texto_1 MSGBOX_SIGN
msgbox RocketHideoutJohtoP2_Documento_Lago_Texto_2 MSGBOX_SIGN
msgbox RocketHideoutJohtoP2_Documento_Lago_Texto_3 MSGBOX_SIGN
release
end

RocketHideoutJohtoP2_Documento_Lago_Texto_1:
.string "LAKE OF RAGE QUEST$"

RocketHideoutJohtoP2_Documento_Lago_Texto_2:
	.string "Information: MAHOGANY TOWN has always\n"
	.string "upheld the legend of a huge monster\l"
	.string "dwelling within what is now called the\l"
	.string "LAKE OF FURY. The oldest descriptions\l"
	.string "do not match GYARADOS. The very way its\l"
	.string "inhabitants refer to the lake <LAKE OF\l"
	.string "IKARY> suggests the existence of\l"
	.string "creatures we are unfamiliar with, deep\l"
	.string "within the place.$"

RocketHideoutJohtoP2_Documento_Lago_Texto_3:
	.string "What to do?: Talk with the fishermen\n"
	.string "that inhabit the lake surroundings.$"


RocketHideoutJohtoP2_Documento_Ruta47::
msgbox RocketHideoutJohtoP2_Documento_Ruta47_Texto_1 MSGBOX_SIGN
msgbox RocketHideoutJohtoP2_Documento_Ruta47_Texto_2 MSGBOX_SIGN
msgbox RocketHideoutJohtoP2_Documento_Ruta47_Texto_3 MSGBOX_SIGN
release
end

RocketHideoutJohtoP2_Documento_Ruta47_Texto_1:
.string "ROUTE 47 MISSION$"

RocketHideoutJohtoP2_Documento_Ruta47_Texto_2:
	.string "Information: Legends tell of a colossal\n"
	.string "rocky pathway, leading to a\l"
	.string "paradise-like location, to the west of\l"
	.string "CIANWOOD. The <ROUTE 47>, never\l"
	.string "documented on conventional maps, yet\l"
	.string "clandestinely guarded by a select few.$"

RocketHideoutJohtoP2_Documento_Ruta47_Texto_3:
	.string "What to do?: Talk with CHUCK, CIANWOOD\n"
	.string "LEADER, and investigate the rocky\l"
	.string "pathway to the west of the city.$"


RocketHideoutJohtoP2_Documento_ViasTren::
msgbox RocketHideoutJohtoP2_Documento_ViasTren_Texto_1 MSGBOX_SIGN
msgbox RocketHideoutJohtoP2_Documento_ViasTren_Texto_2 MSGBOX_SIGN
msgbox RocketHideoutJohtoP2_Documento_ViasTren_Texto_3 MSGBOX_SIGN
release
end

RocketHideoutJohtoP2_Documento_ViasTren_Texto_1:
.string "TRAIN TRACKS MISSION$"

RocketHideoutJohtoP2_Documento_ViasTren_Texto_2:
	.string "Information: Numerous workers have\n"
	.string "reported the appearance of a powerful\l"
	.string "POKÉMON, seemingly drawn to the\l"
	.string "magnetism generated by the railways.\l"
	.string "This POKÉMON has already caused\l"
	.string "significant damage to the\l"
	.string "infrastructure, and so far, no one has\l"
	.string "been able to identify it. The primary\l"
	.string "affected area lies on the border\l"
	.string "between KANTO and JOHTO.$"

RocketHideoutJohtoP2_Documento_ViasTren_Texto_3:
	.string "What to do?: Talk with the workers near\n"
	.string "MT. SILVER and seek to explore the\l"
	.string "areas surrounding the railway tracks in\l"
	.string "that area.$"

