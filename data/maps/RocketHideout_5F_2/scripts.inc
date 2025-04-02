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
	.string "I led the project to build our JOHTO HQ,\n"
	.string "I had to defeat and silence many to do\l"
	.string "it. What did you do?$"

RocketHideout_5F_2_Primer_Ejecutivo_Texto_1:
	.string "All of us here, at VIP AREA, did\n"
	.string "something great for TEAM ROCKET.$"

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
	.string "If you want a good advice, buy a\n"
	.string "LARVITAR and train it.$"

RocketHideout_5F_2_Segundo_Ejecutivo_Texto_2:
	.string "With a NIDOKING or NIDOQUEEN, TEAM\n"
	.string "ROCKET members will respect you; but\l"
	.string "with a TYRANITAR, they'll fear you.$"

RocketHideout_5F_2_Segundo_Ejecutivo_Texto_3:
	.string "As a PSEUDOLEGENDARY and ROCK/DARK\n"
	.string "TYPE, it's the top refering to status\l"
	.string "and hierarchy; even for a ROCKET\l"
	.string "EXECUTIVE.$"



RocketHideout_5F_2_Tercer_Ejecutivo::
lock
faceplayer
msgbox RocketHideout_5F_2_Tercer_Ejecutivo_Texto_1 MSGBOX_NPC
release
end

RocketHideout_5F_2_Tercer_Ejecutivo_Texto_1:
	.string "An idea does not survive because it is\n"
	.string "better than another, but because the\l"
	.string "person who believes in it has survived.$"

RocketHideout_5F_2_Cuarto_Ejecutivo::
lock
faceplayer
msgbox RocketHideout_5F_2_Cuarto_Ejecutivo_Texto_1 MSGBOX_NPC
release
end

RocketHideout_5F_2_Cuarto_Ejecutivo_Texto_1:
	.string "Thanks to a contact at SINNOH, we can\n"
	.string "count on a few POKEMON from that\l"
	.string "region. The supply is very limited, so\l"
	.string "the market is exclusively for\l"
	.string "EXECUTIVES.$"

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
delay 50
hidemoneybox
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
delay 50
hidemoneybox
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
delay 50
hidemoneybox
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
delay 50
hidemoneybox
givemon SPECIES_HIPPOPOTAS, 33, ITEM_NONE
release
end


EventScript_Shieldon::
lock
showmoneybox 0, 0
msgbox EventScript_Shieldon_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 110000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 110000 0
waitse
updatemoneybox
delay 50
hidemoneybox
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
delay 50
hidemoneybox
givemon SPECIES_LARVITAR, 28, ITEM_NONE
release
end

EventScript_Buneary_Texto_1:
.string "Are you sure you want BUNEARY?\n"
	.string "It'll cost ¥14,000.$"

EventScript_Croagunk_Texto_1:
.string "Are you sure you want CROAGUNK?\n"
	.string "It'll cost ¥25,000.$"

EventScript_Budew_Texto_1:
.string "Are you sure you want BUDEW?\n"
	.string "It'll cost ¥29,000$"

EventScript_Hippopotas_Texto_1:
.string "Are you sure you want HIPPOPOTAS?\n"
	.string "It'll cost ¥33,000$"

EventScript_Shieldon_Texto_1:
.string "Are you sure you want SHIELDON?\n"
	.string "It'll cost ¥110,000.$"

EventScript_Larvitar_Texto_1.1:
.string "Are you sure you want LARVITAR?\n"
	.string "It'll cost ¥170,000.$"

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
	.2byte 102
	.2byte 103
    .2byte 104
    .2byte 608
	.2byte 620
	.2byte 621
	.2byte ITEM_NONE
	release
	end

RocketHideout_5F_2_Quinto_Ejecutivo::
lock
faceplayer
msgbox RocketHideout_5F_2_Quinto_Ejecutivo_Texto_1 MSGBOX_NPC
release
end

RocketHideout_5F_2_Quinto_Ejecutivo_Texto_1:
	.string "If I were you, I'd check out the mart\n"
	.string "above, for all the EGG MOVES your\l"
	.string "POKEMON can learn. More than one\l"
	.string "EXECUTIVE has been pleasantly\l"
	.string "surprised.$"

RocketHideout_5F_2_Cartel::
lock
msgbox RocketHideout_5F_2_Cartel_Texto_1 MSGBOX_SIGN
release
end

RocketHideout_5F_2_Cartel_Texto_1:
	.string "VIP AREA - EXECUTIVES ONLY$"

RocketHideout_5F_2_Llave::
compare VAR_UNUSED_0x40F7, 71
goto_if_gt RocketHideout_5F_2_Despues
delay 10
msgbox RocketHideout_5F_2_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

RocketHideout_5F_2_Despues::
delay 10
msgbox RocketHideout_5F_2_Texto_2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 7, 7, 0x335, FALSE
setmetatile 7, 6, 0x335, FALSE
setmetatile 8, 6, 0x334, FALSE
setmetatile 8, 8, 0x334, FALSE
setmetatile 8, 7, 0x334, FALSE
setmetatile 8, 8, 0x334, FALSE
special DrawWholeMapView
delay 20
release
end

RocketHideout_5F_2_Texto_2:
	.string "Want to use the VIP AREA KEY?$"

RocketHideout_5F_2_Texto_1:
	.string "-A special key is required-$"


