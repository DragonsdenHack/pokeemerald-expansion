Goldenrod_GameCorner_MapScripts::
	.byte 0

 @ Goldenrod Casino Precios Fichas
	.set LUPA_COINS,            800
	.set TOXISFERA_COINS,       1000
	.set CASCO_COINS,           1600
	.set VIDASFERA_COINS,       2800
	.set CINTA_COINS,           3000
	.set TEDDIURSA_COINS,       500
	.set SHUCKLE_COINS,         1250
	.set SUDOWOODO_COINS,       2400
	.set CYNDAQUIL_COINS,       4200
	.set LARVITAR_COINS,        5500

GoldenrodGameCorner1::
end



GoldenrodGameCorner2::
end



GoldenrodGameCorner3::
end



GoldenrodGameCorner4::
end



GoldenrodGameCorner5::
lock     
faceplayer     
msgbox Goldenrod_GameCorner_Text_5, MSGBOX_DEFAULT
release     
end

Goldenrod_GameCorner_Text_5:
.string "Si no tienes un MONEDERO para\n"
.string "jugar y comprar aquí, siempre\l"
.string "puedes ir al SUBTERRÁNEO de la\l"
.string "ciudad. Por allí siempre es fácil\l"
.string "pillar un MONEDERO.$"



GoldenrodGameCorner6::
lock     
faceplayer     
msgbox Goldenrod_GameCorner_Text_6, MSGBOX_DEFAULT
release     
end

Goldenrod_GameCorner_Text_6:
.string "A pesar de que sé que todas las\n"
.string "probabilidades conducen a que a\l"
.string "largo plazo pierda,\l"
.string "¡no puedo dejar de jugar, es la\l"
.string "ilusión del control!$"



GoldenrodGameCorner7::
lock     
faceplayer     
msgbox Goldenrod_GameCorner_Text_7, MSGBOX_DEFAULT
release     
end

Goldenrod_GameCorner_Text_7:
.string "Maldición…\n"
.string "CYNDAQUIL no para de subir su\l"
.string "valor en FICHAS, creo que es\l"
.string "porque cada vez quedan menos en\l"
.string "estado salvaje.$"



GoldenrodGameCorner8::
lock     
faceplayer     
msgbox Goldenrod_GameCorner_Text_8, MSGBOX_DEFAULT
release     
end

Goldenrod_GameCorner_Text_8:
.string "Vivir es un juego.\n"
.string "¡Y yo jugaré hasta que no pueda\l"
.string "más!$"




GoldenrodGameCorner9::
lock     
faceplayer     
msgbox Goldenrod_GameCorner_Text_9, MSGBOX_DEFAULT
release     
end

Goldenrod_GameCorner_Text_9:
.string "Poco me importa ganar o perder\n"
.string "aquí, voy tan sobrado de dinero\l"
.string "que realmente ya nada me importa.\l"
.string "¡Puedo comprarlo todo, y a la vez\l"
.string "nada!$"

Goldenrod_Tienda_Items::
lock
faceplayer
msgbox Goldenrod_Underground_Items_Texto_1 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Underground_Items_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ITEMS_TRIGAL, 0
switch VAR_RESULT
case 0, EventScript_Lupa
case 1, EventScript_Toxisfera
case 2, EventScript_Casco
case 3, EventScript_Vidasfera
case 4, EventScript_Cinta
release
end

Goldenrod_Underground_Items_Texto_1:
.string "Canjea tus FICHAS por premios.$"

Goldenrod_Underground_Items_Texto_2:
.string "¿Qué premio quieres?$"

EventScript_Lupa_Texto_1:
.string "¿Quieres la LUPA?\n"
	.string "Costará 800 FICHAS.$"

EventScript_Lupa::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 1
msgbox EventScript_Lupa_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, LUPA_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins LUPA_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_WIDE_LENS
release
end

EventScript_Toxisfera::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 2
msgbox EventScript_Toxisfera_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, TOXISFERA_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins TOXISFERA_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_TOXIC_ORB
release
end

EventScript_Casco::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 3
msgbox EventScript_Casco_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, CASCO_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins CASCO_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_ROCKY_HELMET
release
end

EventScript_Vidasfera::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 4
msgbox EventScript_Vidasfera_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, VIDASFERA_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins VIDASFERA_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_LIFE_ORB
release
end

EventScript_Cinta::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 5
msgbox EventScript_Cinta_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, CINTA_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins CINTA_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_CHOICE_BAND
release
end

Goldenrod_Pokemon_Items::
lock
faceplayer
msgbox Goldenrod_Underground_Items_Texto_1 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Underground_Items_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_POKEMON_TRIGAL, 0
switch VAR_RESULT
case 0, EventScript_Teddiursa
case 1, EventScript_Shuckle
case 2, EventScript_Sudowoodo
case 3, EventScript_Cyndaquil
case 4, EventScript_Larvitar
release
end

EventScript_Teddiursa::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 6
msgbox EventScript_Teddiursa_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, TEDDIURSA_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins TEDDIURSA_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_TEDDIURSA, 28, ITEM_NONE
release
end

EventScript_Shuckle::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 7
msgbox EventScript_Shuckle_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, SHUCKLE_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins SHUCKLE_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_SHUCKLE, 40, ITEM_NONE
release
end

EventScript_Sudowoodo::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 8
msgbox EventScript_Sudowoodo_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, SUDOWOODO_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins SUDOWOODO_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_SUDOWOODO, 50, ITEM_NONE
release
end

EventScript_Cyndaquil::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 9
msgbox EventScript_Cyndaquil_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, CYNDAQUIL_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins CYNDAQUIL_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_CYNDAQUIL, 12, ITEM_NONE
release
end

EventScript_Larvitar::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 10
msgbox EventScript_Larvitar_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, LARVITAR_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins LARVITAR_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_LARVITAR, 28, ITEM_NONE
release
end
