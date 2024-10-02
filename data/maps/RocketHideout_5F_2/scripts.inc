RocketHideout_5F_2_MapScripts::
	.byte 0

RocketHideout_5F_2_Primer_Ejecutivo::
lock
faceplayer
msgbox RocketHideout_5F_2_Primer_Ejecutivo_Texto_1 MSGBOX_NPC
delay 10
msgbox RocketHideout_5F_2_Primer_Ejecutivo_Texto_2 MSGBOX_NPC
release
end

RocketHideout_5F_2_Primer_Ejecutivo_Texto_2:
	.string "Yo dirigí el proyecto de construcción\n"
	.string "de nuestra base en JOHTO. Tuve que\l"
	.string "derrotar y silenciar a muchos para\l"
	.string "lograrlo, ¿tú que hiciste?$"

RocketHideout_5F_2_Primer_Ejecutivo_Texto_1:
	.string "Todos los que estamos aquí hicimos algo\n"
	.string "importante para el TEAM ROCKET.$"

RocketHideout_5F_2_Segundo_Ejecutivo::
lock
faceplayer
msgbox RocketHideout_5F_2_Segundo_Ejecutivo_Texto_1 MSGBOX_NPC
delay 10
msgbox RocketHideout_5F_2_Segundo_Ejecutivo_Texto_2 MSGBOX_NPC
delay 10
msgbox RocketHideout_5F_2_Segundo_Ejecutivo_Texto_3 MSGBOX_NPC
release
end

RocketHideout_5F_2_Segundo_Ejecutivo_Texto_1:
	.string "Si quieres un consejo, compra un\n"
	.string "LARVITAR y entrénalo.$"

RocketHideout_5F_2_Segundo_Ejecutivo_Texto_2:
	.string "Con un NIDOKING o NIDOQUEEN los ROCKET\n"
	.string "te respetarán, pero con un TYRANITAR\l"
	.string "te temerán.$"

RocketHideout_5F_2_Segundo_Ejecutivo_Texto_3:
	.string "Como PSEUDOLEGENDARIO y TIPO\n"
	.string "ROCA/SINIESTRO, es lo máximo en cuanto\l"
	.string "estatus y jerarquía. Incluso para un\l"
	.string "EJECUTIVO ROCKET.$"





RocketHideout_5F_2_Tercer_Ejecutivo::
lock
faceplayer
msgbox RocketHideout_5F_2_Tercer_Ejecutivo_Texto_1 MSGBOX_NPC
release
end

RocketHideout_5F_2_Tercer_Ejecutivo_Texto_1:
	.string "La forma más rápida de matar algo\n"
	.string "especial es compararlo con otra cosa.$"

RocketHideout_5F_2_Cuarto_Ejecutivo::
lock
faceplayer
msgbox RocketHideout_5F_2_Cuarto_Ejecutivo_Texto_1 MSGBOX_NPC
release
end

RocketHideout_5F_2_Cuarto_Ejecutivo_Texto_1:
	.string "Gracias a un contacto en SINNOH,\n"
	.string "podemos contar con unos pocos POKÉMON\l"
	.string "de esa región. La oferta es muy escasa,\l"
	.string "y por eso el mercado es exclusivo para\l"
	.string "EJECUTIVOS.$"

BaseRocketEjecutiva_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_BASE_EJECUTIVA, 0
switch VAR_RESULT
case 0, EventScript_Buneary
case 1, EventScript_Croagunk
case 2, EventScript_Budew
case 3, EventScript_Hippopotas
case 4, EventScript_Shieldon
case 5, EventScript_Larvitar_2
release
end

EventScript_Buneary::
lock
showmoneybox 0, 0
msgbox EventScript_Buneary_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 14000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 14000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_BUNEARY, 30, ITEM_NONE
release
end

EventScript_Croagunk::
lock
showmoneybox 0, 0
msgbox EventScript_Croagunk_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 25000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 25000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_CROAGUNK, 32, ITEM_NONE
release
end

EventScript_Budew::
lock
showmoneybox 0, 0
msgbox EventScript_Budew_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 29000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 29000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_BUDEW, 15, ITEM_NONE
release
end

EventScript_Hippopotas::
lock
showmoneybox 0, 0
msgbox EventScript_Hippopotas_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 33000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 33000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_HIPPOPOTAS, 33, ITEM_NONE
release
end


EventScript_Shieldon::
lock
showmoneybox 0, 0
msgbox EventScript_Frosmoth_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 110000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 110000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_SHIELDON, 35, ITEM_NONE
release
end

EventScript_Larvitar_2::
lock
showmoneybox 0, 0
msgbox EventScript_Larvitar_Texto_1.1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 170000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 170000 0
waitse
updatemoneybox
delay 20
hidemoneybox
delay 20
givemon SPECIES_LARVITAR, 28, ITEM_NONE
release
end

EventScript_Buneary_Texto_1:
.string "¿Seguro que quiere a BUNEARY?\n"
	.string "Costará 14.000¥.$"

EventScript_Croagunk_Texto_1:
.string "¿Seguro que quiere a CROAGUNK?\n"
	.string "Costará 25.000¥.$"

EventScript_Budew_Texto_1:
.string "¿Seguro que quiere a BUDEW?\n"
	.string "Costará 29.000¥.$"

EventScript_Hippopotas_Texto_1:
.string "¿Seguro que quiere a HIPPOPOTAS?\n"
	.string "Costará 33.000¥.$"

EventScript_Shieldon_Texto_1:
.string "¿Seguro que quiere a SHIELDON?\n"
	.string "Costará 110.000¥.$"

EventScript_Larvitar_Texto_1.1:
.string "¿Seguro que quiere a LARVITAR?\n"
	.string "Costará 170.000¥.$"

Base_Profunda_Mercado_Ejecutivos_EventScript_Clerk::
	lock
	faceplayer
	message gText_HowMayIServeYou
	waitmessage
	pokemart Base_Profunda_Mercado_Ejecutivos_Pokemart
	msgbox gText_PleaseComeAgain, MSGBOX_DEFAULT
	release
	end

	.align 2
Base_Profunda_Mercado_Ejecutivos_Pokemart:
    .2byte 794
    .2byte 612
	.2byte 618
	.2byte 32
	.2byte ITEM_NONE
	release
	end


