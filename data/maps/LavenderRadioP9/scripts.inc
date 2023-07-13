LavenderRadioP9_MapScripts::
	.byte 0

LavenderRadioP9Documento_100::
msgbox LavenderRadioP9Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP9Documento_Text_100:
.string "9no Análisis de datos$"

LavenderRadioP9Documento_101::
msgbox LavenderRadioP9Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP9Documento_Text_101:
.string "-La libertad sin compromiso es inútil-.$"

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
.string "La nostalgia se basa en un deseo\n"
	.string "primal cuyo objeto es totalmente\l"
	.string "irrecuperable, igual que la antigua\l"
	.string "TORRE POKEMON.$"

LavenderRadioP9_Segundo_Cientifico::
lock
faceplayer
msgbox LavenderRadioP9_Segundo_Cientifico_Texto_1 MSGBOX_NPC
release
end

LavenderRadioP9_Segundo_Cientifico_Texto_1:
	.string "La tecnología ha mejorado los equipos\n"
	.string "de nuestros mejores hombres.\l"
	.string "PROTON ahora cuenta con un OVERQWILL\l"
	.string "y un BOOHOO, PETREL con un PURAKUSSU\l"
	.string "y un WEEZING-GALAR.\l"
	.string "Nada de esto hubiera sido posible sin\l"
	.string "toda la información recolectada por\l"
	.string "gente como tú.$"

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
setvar VAR_UNUSED_0x40F7, 168
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_EVER_GRANDE_POKEMON_CENTER_1F_SCOTT
setvar VAR_ROUTE105_STATE, 5
msgbox LavenderRadioP9_Cambio_Skin_Texto MSGBOX_AUTOCLOSE
release
end

LavenderRadioP9_Cambio_Skin_Texto:
.string "CALLATE$"

