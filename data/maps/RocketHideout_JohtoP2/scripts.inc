RocketHideout_JohtoP2_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_JohtoP2_Disguise_OnResume
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_JohtoP2_Disguise_OnResume
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_JohtoP2_Disguise_OnResume
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_JohtoP2_Disguise_OnResume
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_JohtoP2_Disguise_OnResume
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_JohtoP2_Disguise_OnResume
	.byte 0

RocketHideout_JohtoP2_Disguise_OnResume:
map_script_2 VAR_ROUTE131_STATE, 3, RocketHideout_JohtoP2_Disguise_Player_2
map_script_2 VAR_ROUTE131_STATE, 5, RocketHideout_JohtoP2_Disguise_AltoRango
map_script_2 VAR_ROUTE131_STATE, 7, RocketHideout_JohtoP2_Disguise_Ejecutivo
map_script_2 VAR_ROUTE131_STATE, 8, RocketHideout_JohtoP2_Disguise_Admin
map_script_2 VAR_ROUTE131_STATE, 9, RocketHideout_JohtoP2_Disguise_AdminJefe
map_script_2 VAR_ROUTE131_STATE, 10, RocketHideout_JohtoP2_Disguise_Jefe
	.2byte 0

RocketHideout_JohtoP2_OnFrame:
map_script_2 VAR_ROUTE131_STATE, 4, RocketHideout_JohtoP2_Disguise_Player
	.2byte 0

RocketHideout_JohtoP2_Disguise_Jefe::
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, JohtoP2_Disguise_Player_Move_1
waitse
playse MUS_OBTAIN_ITEM
delay 20
setvar VAR_ROUTE131_STATE, 4
release
end

RocketHideout_JohtoP2_Disguise_AdminJefe::
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, JohtoP2_Disguise_Player_Move_1
waitse
playse MUS_OBTAIN_ITEM
delay 20
setvar VAR_ROUTE131_STATE, 4
release
end

RocketHideout_JohtoP2_Disguise_Admin::
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, JohtoP2_Disguise_Player_Move_1
waitse
playse MUS_OBTAIN_ITEM
delay 20
setvar VAR_ROUTE131_STATE, 4
release
end

RocketHideout_JohtoP2_Disguise_Ejecutivo::
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, JohtoP2_Disguise_Player_Move_1
waitse
playse MUS_OBTAIN_ITEM
delay 20
setvar VAR_ROUTE131_STATE, 4
release
end

RocketHideout_JohtoP2_Disguise_AltoRango::
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, JohtoP2_Disguise_Player_Move_1
waitse
playse MUS_OBTAIN_ITEM
delay 20
setvar VAR_ROUTE131_STATE, 4
release
end


RocketHideout_JohtoP2_Disguise_Player_2::
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, JohtoP2_Disguise_Player_Move_1
waitse
playse MUS_OBTAIN_ITEM
delay 20
setvar VAR_ROUTE131_STATE, 4
release
end

RocketHideout_JohtoP2_Disguise_Player::
setvar VAR_ROUTE131_STATE, 30
release
end

JohtoP2_Disguise_Player_Move_1:
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
step_end


RocketHideoutJohtoP2Documento_100::
lock        
msgbox RocketHideoutJohtoP2Documento_Text_100, MSGBOX_DEFAULT
msgbox RocketHideoutJohtoP2Documento_Text_100.1, MSGBOX_DEFAULT
msgbox RocketHideoutJohtoP2Documento_Text_101, MSGBOX_DEFAULT
release     
end

RocketHideoutJohtoP2Documento_Text_100:
	.string "-It appears to be a document, written\n"
	.string "and signed by GIOVANNI himself.-$"

RocketHideoutJohtoP2Documento_Text_100.1:
	.string "Dear {PLAYER}, we haven't been idle\n"
	.string "either. Our top scientists within the\l"
	.string "DEEP BASE have at long last created the\l"
	.string "POKÉMON STONE-an item that can evolve a\l"
	.string "POKÉMON past its natural limit. In\l"
	.string "short, we can recreate any experiment\l"
	.string "or prototype developed at our hands or\l"
	.string "those of our former foes. The creation\l"
	.string "of a single stone, however, comes at an\l"
	.string "immense economic cost. That's why only\l"
	.string "the three ADMINs of JOHTO, HOENN, and\l"
	.string "the SEVII ISLANDS have been given one\l"
	.string "unit each. Compatible POKÉMON will gain\l"
	.string "100 BASE STATs, much like MEGA\l"
	.string "EVOLUTION, but without the drawback of\l"
	.string "having no item. Thanks to the\l"
	.string "collaboration of BILL, BLAINE, OAK, and\l"
	.string "ELM, we have a wide variety of POKÉMON\l"
	.string "that will respond to the STONE. They are\l"
	.string "as follows:$"

RocketHideoutJohtoP2Documento_Text_101:
.string "- ELECTRODE\n"
	.string "- MAGMORTAR\l"
	.string "- ELECTIVIRE\l"
	.string "- PORYGON2\l"
	.string "- NIDOKING\l"
	.string "- NIDOQUEEN\l"
	.string "- AERODACTYL\l"
	.string "- TAUROS\l"
	.string "…\l"
	.string "…\p"
	.string "Choose wisely.$"



RocketHideoutJohtoP2Documento_102::
msgbox RocketHideoutJohtoP2Documento_Text_102, MSGBOX_SIGN   
end

RocketHideoutJohtoP2Documento_Text_102:
	.string "-This place belongs to the TRAINER\n"
	.string "where the old and the new have come\l"
	.string "together-$"

RocketHideoutJohtoP2_Obtencion_Deoxys::
lock
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_DEOXYS, 80, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_1
removeobject 2
release
end

RocketHideoutJohtoP2_Obtencion_Deoxys_Texto_1:
	.string "-Some text has been etched on the\n"
	.string "POKÉ BALL by GIOVANNI.-$"

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
.string "YOU OBTAINED A DEOXYS AT LV.80!!$"


RocketHideoutJohtoP2_Obtencion_Regis::
lock
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_1 MSGBOX_AUTOCLOSE
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGIROCK, 75, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_4 MSGBOX_DEFAULT
givemon SPECIES_REGISTEEL, 75, ITEM_NONE
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideoutJohtoP2_Obtencion_Regis_Texto_3 MSGBOX_DEFAULT
givemon SPECIES_REGICE, 75, ITEM_NONE
waitfanfare
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_ALT_2
removeobject 3
release
end

RocketHideoutJohtoP2_Obtencion_Regis_Texto_1:
	.string "-Some text has been etched on\n"
	.string "the POKÉ BALL, signed by ANDRA.-$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_2:
	.string "-Hey, {PLAYER}. GIOVANNI had sent me\n"
	.string "to HOENN to seek out its equivalent to\l"
	.string "KANTO's LEGENDARY BIRDs. It took a ton\l"
	.string "of research, but I tracked the\l"
	.string "chambers housing the so-called REGIs\l"
	.string "and cracked the puzzles hiding them.\l"
	.string "Then our scientists managed to clone\l"
	.string "their genetic material-just like the\l"
	.string "LEGENDARIES of KANTO and JOHTO. Here\l"
	.string "are three of the first successful\l"
	.string "replicas. If anyone can maximize their\l"
	.string "unique STAT combinations, it's you.-$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_3:
.string "YOU OBTAINED A LV.75 REGIROCK!!$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_4:
.string "YOU OBTAINED A LV.75 REGISTEEL!!$"

RocketHideoutJohtoP2_Obtencion_Regis_Texto_5:
.string "YOU OBTAINED A LV.75 REGICE!!$"

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

Ascenso_Rocket_Rangos::
msgbox Ascenso_Rocket_Rangos_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x40F7, 218
goto_if_gt Ascenso_Rocket_Rangos_Despues
multichoice 22, 0, MULTI_POKEMON_ASCENSOS, 0
switch VAR_RESULT
case 0, EventScript_Recluta
case 1, EventScript_AltoRango
case 2, EventScript_Ejecutivo
case 3, EventScript_Admin
case 4, EventScript_AdminJefe
release
end

Ascenso_Rocket_Rangos_Despues::
multichoice 22, 0, MULTI_POKEMON_ASCENSOS_DESPUES, 0
switch VAR_RESULT
case 0, EventScript_Recluta
case 1, EventScript_AltoRango
case 2, EventScript_Ejecutivo
case 3, EventScript_Admin
case 4, EventScript_AdminJefe
case 5, EventScript_Jefe
release
end

Ascenso_Rocket_Rangos_Texto_1:
.string "¿Qué indumentaria quieres llevar?$"

EventScript_Recluta::
delay 10
playse SE_M_COSMIC_POWER
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 80
changeavatar 0
setvar VAR_ROUTE131_STATE, 3
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 16, 2
delay 100
release
end

EventScript_AltoRango::
delay 10
playse SE_M_COSMIC_POWER
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 80
changeavatar 1
setvar VAR_ROUTE131_STATE, 5
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 16, 2
delay 100
release
end

EventScript_Ejecutivo::
delay 10
playse SE_M_COSMIC_POWER
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 80
changeavatar 2
setvar VAR_ROUTE131_STATE, 7
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 16, 2
delay 100
release
end

EventScript_Admin::
delay 10
playse SE_M_COSMIC_POWER
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 80
changeavatar 3
setvar VAR_ROUTE131_STATE, 8
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 16, 2
delay 100
release
end

EventScript_AdminJefe::
delay 10
playse SE_M_COSMIC_POWER
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 80
changeavatar 4
setvar VAR_ROUTE131_STATE, 9
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 16, 2
delay 100
release
end

EventScript_Jefe::
delay 10
playse SE_M_COSMIC_POWER
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 80
changeavatar 5
setvar VAR_ROUTE131_STATE, 10
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 16, 2
delay 100
release
end

Ascenso_Rocket_Rangos_Cartel::
lock
msgbox Ascenso_Rocket_Rangos_Cartel_Texto_1 MSGBOX_SIGN
release
end

Ascenso_Rocket_Rangos_Cartel_Texto_1:
.string "VESTIDOR\p"
	.string "Interactúa con el vestidor de\n"
	.string "arriba para cambiar tu aspecto.$"

