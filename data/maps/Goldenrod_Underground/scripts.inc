Goldenrod_Underground_MapScripts::
	.byte 0

 @ Goldenrod Underground Precios Fichas
	.set TRAPINCH_COINS,    1200
	.set BAGON_COINS,       6000
	.set DEINO_COINS,       6000
	.set BELDUM_COINS,      6000
	.set WISHIWASHI_COINS,  7500
	.set LLAMASFERA_COINS,  1000
	.set C.XPERTO_COINS,    2400
	.set CHAL.ASALTO_COINS, 2800
	.set GAF.ELEGID_COINS,  3000

GoldenrodUnderground1::
end



GoldenrodUnderground2::
end



GoldenrodUnderground3::
lock
faceplayer
	checkitem ITEM_COIN_CASE
	goto_if_eq VAR_RESULT, TRUE, GoldenrodUnderground3_Fin
msgbox GoldenrodUnderground3_texto_1 MSGBOX_NPC
msgbox GoldenrodUnderground3_texto_2 MSGBOX_NPC
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_COIN_CASE
msgbox GoldenrodUnderground3_texto_3 MSGBOX_DEFAULT
waitfanfare
release
end

GoldenrodUnderground3_Fin::
msgbox GoldenrodUnderground3_Fin_texto_1 MSGBOX_NPC
release
end

GoldenrodUnderground3_Fin_texto_1:
	.string "Ahora soy un hombre nuevo, ¡voy a\n"
	.string "montar una peluquería y todo!$"

GoldenrodUnderground3_texto_3:
.string "¡Obtuviste un MONEDERO\n"
	.string "de manos de Supernecio!$"

GoldenrodUnderground3_texto_2:
	.string "¡Toma! ¡No quiero volver a ver esto en mi\n"
	.string "vida!$"

GoldenrodUnderground3_texto_1:
	.string "¡Estoy acabado! Perdí todo lo que\n"
	.string "tenía en las tragaperras.$"



GoldenrodUnderground4::
end



GoldenrodUnderground5::
end



GoldenrodUnderground6::
end



GoldenrodUnderground7::
end



GoldenrodUnderground8::
end



GoldenrodUnderground9::
lock     
faceplayer     
msgbox Text_9, MSGBOX_DEFAULT
release     
end

Text_9:
.string "Aquí puedes llegar a encontrar\n"
.string "cosas incluso más interesantes que\l"
.string "en el CASINO y el CENTRO\l"
.string "COMERCIAL.\l"
.string "¡Es lo que tiene el mercado negro,\l"
.string "nunca sabes lo que puedes\l"
.string "llegar a ver por aquí!$"



GoldenrodUnderground10::
end



GoldenrodUnderground11::
end



GoldenrodUnderground_EventScript_Maton::
	trainerbattle_single TRAINER_MAY_LILYCOVE_MUDKIP, GoldenrodUnderground_Text_MatonIntro, GoldenrodUnderground_Text_MatonDefeated
	msgbox GoldenrodUnderground_Text_MatonPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Necio::
	trainerbattle_single TRAINER_MAY_LILYCOVE_TORCHIC, GoldenrodUnderground_Text_NecioIntro, GoldenrodUnderground_Text_NecioDefeated
	msgbox GoldenrodUnderground_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Ladron::
	trainerbattle_single TRAINER_WAYNE, GoldenrodUnderground_Text_LadronIntro, GoldenrodUnderground_Text_LadronDefeated
	msgbox GoldenrodUnderground_Text_LadronPostBattle, MSGBOX_AUTOCLOSE
	end



GoldenrodUnderground_EventScript_Maton2::
	trainerbattle_single TRAINER_TRAINER_105, GoldenrodUnderground_Text_Maton2Intro, GoldenrodUnderground_Text_Maton2Defeated
	msgbox GoldenrodUnderground_Text_Maton2PostBattle, MSGBOX_AUTOCLOSE
	end

Goldenrod_Underground_Motero_Bloqueo::
lock
faceplayer
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_EVER_GRANDE_CITY_STATE, 0
goto_if_gt Goldenrod_Underground_Motero_Bloqueo_2
release
end

Goldenrod_Underground_Motero_Bloqueo_2::
delay 20
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse MUS_RG_ENCOUNTER_BOY
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_105, Goldenrod_Underground_Motero_Bloqueo_Texto_4
msgbox Goldenrod_Underground_Motero_Bloqueo_Texto_5 MSGBOX_AUTOCLOSE
applymovement 12, Goldenrod_Underground_Motero_Bloqueo_Move_1
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_HARBOR_SSTIDAL
removeobject 12
playse SE_EXIT
release
end

Goldenrod_Underground_Motero_Bloqueo_Move_1:
face_up
step_end

Goldenrod_Underground_Motero_Bloqueo_Texto_1:
.string "¿Tienes algún problema? ¡Largo de aquí,\n"
	.string "este lugar no es para pijos como tú!$"

Goldenrod_Underground_Motero_Bloqueo_Texto_2:
.string "… …$"

Goldenrod_Underground_Motero_Bloqueo_Texto_3:
.string "Quieres pelea? ¡De nada van a servirte\n"
	.string "esos POKÉMON comprados!$"

Goldenrod_Underground_Motero_Bloqueo_Texto_4:
.string "¿Quién te ha vendido esos POKÉMON?$"

Goldenrod_Underground_Motero_Bloqueo_Texto_5:
.string "¡Puaf, me confié! ¡Espera a que avise al\n"
	.string "JEFE! ¡Por mucho que hayas comprado\l"
	.string "POKÉMON de calidad, él siempre se queda\l"
	.string "con los mejores!$"

Goldenrod_Underground_Tienda_Pokemon::
lock
faceplayer
msgbox Goldenrod_Underground_Tienda_Pokemon_Texto_1 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Underground_Tienda_Pokemon_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_SUBTERRANEO_TRIGAL, 0
switch VAR_RESULT
case 0, EventScript_Trapinch
case 1, EventScript_Bagon
case 2, EventScript_Deino
case 3, EventScript_Beldum
CASE 4, EventScript_Wishiwashi
release
end


Goldenrod_Underground_Tienda_Pokemon_Texto_1:
.string "Me dedico a traer raros y poderosos\n"
	.string "POKÉMON de otras regiones, y venderlos\l"
	.string "aquí a buen precio.$"

Goldenrod_Underground_Tienda_Pokemon_Texto_2:
.string "Esta es mi oferta, no encontrarás nada\n"
	.string "igual en toda JOHTO.$"

EventScript_Trapinch::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 1
msgbox EventScript_Trapinch_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, TRAPINCH_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins TRAPINCH_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_TRAPINCH, 32, ITEM_NONE
release
end

MauvilleCity_GameCorner_EventScript_NoMonedero::
msgbox MauvilleCity_GameCorner_Texto_Monedero MSGBOX_AUTOCLOSE
release
end

MauvilleCity_GameCorner_Texto_Monedero:
.string "¡Se requiere de un MONEDERO!$"

EventScript_Compra_Fichas_No::
hidecoinsbox 0, 0
release
end

Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas::
msgbox Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas_Texto_1 MSGBOX_AUTOCLOSE
hidecoinsbox 0, 0
release
end

Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas_Texto_1:
.string "No tienes suficientes fichas.$"

EventScript_Trapinch_Texto_1:
.string "¿Quieres a TRAPINCH? Costará 1.200\n"
	.string "FICHAS.$"

EventScript_Bagon_Texto_1:
.string "¿Quieres a BAGON? Costará 6.000\n"
	.string "FICHAS.$"

EventScript_Deino_Texto_1:
.string "¿Quieres a DEINO? Costará 6.000\n"
	.string "FICHAS.$"

EventScript_Beldum_Texto_1:
.string "¿Quieres a BELDUM? Costará 6.000\n"
	.string "FICHAS.$"

EventScript_Wishiwashi_Texto_1:
.string "¿Quieres a WISHIWASHI? Costará\n"
	.string "7.500 FICHAS.$"

EventScript_Llamasfera_Texto_1:
.string "¿Quieres la LLAMASFERA?\n"
	.string "Costará 1.000 FICHAS.$"

EventScript_Cxperto_Texto_1:
.string "¿Quieres la CINTA XPERTO?\n"
	.string "Costará 2.400 FICHAS.$"

EventScript_Chaleco_Texto_1:
.string "¿Quieres el CHALECO ASALTO?\n"
	.string "Costará 2.800 FICHAS.$"

EventScript_Gafas_Texto_1:
.string "¿Quieres las GAFAS ELEGIDAS?\n"
	.string "Costarán 3.000 FICHAS.$"

EventScript_Toxisfera_Texto_1:
.string "¿Quieres la TOXISFERA?\n"
	.string "Costará 1.000 FICHAS.$"

EventScript_Casco_Texto_1:
.string "¿Quieres el CASCO DENTADO?\n"
	.string "Costará 1.600 FICHAS.$"

EventScript_Vidasfera_Texto_1:
.string "¿Quieres la VIDASFERA?\n"
	.string "Costará 2.800 FICHAS.$"

EventScript_Cinta_Texto_1:
.string "¿Quieres la CINTA ELEGIDA?\n"
	.string "Costará 3.000 FICHAS.$"

EventScript_Teddiursa_Texto_1:
.string "¿Quieres un TEDDIURSA?\n"
	.string "Costará 500 FICHAS.$"

EventScript_Shuckle_Texto_1:
.string "¿Quieres un SHUCKLE?\n"
	.string "Costará 1.250 FICHAS.$"

EventScript_Sudowoodo_Texto_1:
.string "¿Quieres un SUDOWOODO?\n"
	.string "Costará 2.400 FICHAS.$"

EventScript_Cyndaquil_Texto_1:
.string "¿Quieres un CYNDAQUIL?\n"
	.string "Costará 4.200 FICHAS.$"

EventScript_Larvitar_Texto_1:
.string "¿Quieres un LARVITAR?\n"
	.string "Costará 5.500 FICHAS.$"

EventScript_Bagon::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 2
msgbox EventScript_Bagon_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, BAGON_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins BAGON_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_BAGON, 20, ITEM_NONE
release
end

EventScript_Deino::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 3
msgbox EventScript_Deino_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, DEINO_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins DEINO_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_DEINO, 20, ITEM_NONE
release
end

EventScript_Beldum::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 4
msgbox EventScript_Beldum_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, BELDUM_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins BELDUM_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_BELDUM, 20, ITEM_NONE
release
end

EventScript_Wishiwashi::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 5
msgbox EventScript_Wishiwashi_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, WISHIWASHI_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins WISHIWASHI_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
givemon SPECIES_WISHIWASHI, 50, ITEM_NONE
release
end

Goldenrod_Underground_Tienda_Items_Texto_1:
.string "No encontrarás objetos de esta calidad\n"
	.string "ahí afuera.$"

Goldenrod_Underground_Tienda_Items_Texto_2:
.string "¡Observa!$"

Goldenrod_Underground_Tienda_Items::
lock
faceplayer
msgbox Goldenrod_Underground_Tienda_Items_Texto_1 MSGBOX_AUTOCLOSE
msgbox Goldenrod_Underground_Tienda_Items_Texto_2 MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_ITEMS_SUBTERRANEO_TRIGAL, 0
switch VAR_RESULT
case 0, EventScript_Llamasfera
case 1, EventScript_Cxperto
case 2, EventScript_Chaleco
case 3, EventScript_Gafas
release
end

EventScript_Llamasfera::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 6
msgbox EventScript_Llamasfera_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, LLAMASFERA_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins LLAMASFERA_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_FLAME_ORB
release
end

EventScript_Cxperto::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 7
msgbox EventScript_Cxperto_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, C.XPERTO_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins C.XPERTO_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_EXPERT_BELT
release
end

EventScript_Chaleco::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 8
msgbox EventScript_Chaleco_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, CHAL.ASALTO_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins CHAL.ASALTO_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_ASSAULT_VEST
release
end

EventScript_Gafas::
lock
showcoinsbox 0, 0
setvar VAR_TEMP_1, 8
msgbox EventScript_Gafas_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_Fichas_No
checkcoins VAR_TEMP_2
goto_if_lt VAR_TEMP_2, GAF.ELEGID_COINS, Goldenrod_Underground_Tienda_Pokemon_Sin_Fichas
delay 15
playse SE_SHOP
removecoins GAF.ELEGID_COINS
updatecoinsbox 1, 1
waitse
delay 20
hidemoneybox
delay 20
additem ITEM_CHOICE_SPECS
release
end


