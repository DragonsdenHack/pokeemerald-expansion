LavenderRadioP9_MapScripts::
	.byte 0

LavenderRadioP9Documento_100::
msgbox LavenderRadioP9Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP9Documento_Text_100:
.string "9th Data analysing$"

LavenderRadioP9Documento_101::
msgbox LavenderRadioP9Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP9Documento_Text_101:
.string "-Freedom without compromise is useless-.$"

LavenderRadioP9_EventScript_Rocket::
	trainerbattle_single TRAINER_TRAINER_184, LavenderRadioP9_Text_RocketIntro, LavenderRadioP9_Text_RocketDefeated
	msgbox LavenderRadioP9_Text_RocketPostBattle, MSGBOX_AUTOCLOSE
	end

LavenderRadioP9_Primer_Cientifico::
lock
faceplayer
msgbox LavenderRadioP9_Primer_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP9_Primer_Cientifico_Texto_1:
	.string "Nostalgia is based in a primal desire\n"
	.string "which objective is absolutely\l"
	.string "unrecoverable, as it is the old POKÉMON\l"
	.string "TOWER.$"

LavenderRadioP9_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP9_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP9_Segundo_Cientifico_Texto_1:
	.string "Technology has enhanced the equipment\n"
	.string "of our top men. PROTON now has an\l"
	.string "OVERQWILL and a BOOHOO, PETREL with a\l"
	.string "PURAKKUSU and a GALARIAN WEEZING.\l"
	.string "None of this would have been possible\l"
	.string "without all the information gathered by\l"
	.string "people like you.$"

LavenderRadioP9_Primer_Rocket::
lock
faceplayer
msgbox LavenderRadioP9_Primer_Rocket_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP9_Primer_Rocket_Texto_1:
.string "¿Cree que algún día podré ser\n"
	.string "EJECUTIVO?\l"
	.string "A ALTO RANGO puedes llegar con el\l"
	.string "tiempo, si eres constante y\l"
	.string "demuestras lealtad al TEAM ROCKET,\l"
	.string "pero el paso a EJECUTIVO pocos lo\l"
	.string "dan, para eso necesitas hacer algo\l"
	.string "grande, como usted cuando invadió\l"
	.string "SILPH o derrotó a las AVES.$"

LavenderRadioP9_Policia::
lock
faceplayer
msgbox LavenderRadioP9_Policia_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP9_Policia_Texto_1:
.string "A diferencia de SILPH, aquí no hay\n"
	.string "ascensor, para llegar hasta el final\l"
	.string "hay que pasar por todos los pisos\l"
	.string "anteriores, ¡y su seguridad!$"

LavenderRadioP9_Cambio_Skin::
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_103_RIVAL
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_CAPTAIN_STERN
setvar VAR_VERDANTURF_TOWN_STATE, 10
setvar VAR_UNUSED_0x40F7, 93
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_ROUTE_103_RIVAL
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
msgbox LavenderRadioP9_Cambio_Skin_Texto MSGBOX_AUTOCLOSE
setdisguise [363]
release
end

LavenderRadioP9_Cambio_Skin_Texto:
.string "CALLATE$"

