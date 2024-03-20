LavenderRadioP3_MapScripts::
	.byte 0

LavenderRadioP3_3::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_3:
.string "True chaos doesn't make noise.$"




LavenderRadioP3_4::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_4:
	.string "I never trust someone who has no\n"
	.string "enemies.$"





LavenderRadioP3_5::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_5:
	.string "GASTLY and HAUNTER are now in the\n"
	.string "southern CEMETERY... Do you think some\l"
	.string "of them have migrated elsewhere? The\l"
	.string "plot in CERULEAN CITY perhaps? Maybe\l"
	.string "you're right.$"




LavenderRadioP3_8::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_8, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_8:
	.string "The greater the uncertainty, the more\n"
	.string "valuable the option.$"





LavenderRadioP3_9::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_9, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_9:
	.string "Higher and higher, challenges becoming\n"
	.string "more and more difficult. Until when?$"





LavenderRadioP3_10::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_10, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_10:
	.string "Tolerance will reach such a level that\n"
	.string "intelligent people will be forbidden to\l"
	.string "speak so as not to offend the\l"
	.string "imbeciles.$"



LavenderRadioP3_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_3, LavenderRadioP3_Text_CientificoIntro, LavenderRadioP3_Text_CientificoDefeated
	msgbox LavenderRadioP3_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


LavenderRadioP3Documento_100::
msgbox LavenderRadioP3Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP3Documento_Text_100:
.string "4th Analysis & Investment$"



LavenderRadioP3Documento_101::
msgbox LavenderRadioP3Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP3Documento_Text_101:
	.string "-There's an illusion of power that\n"
	.string "generates a certain madness around\l"
	.string "you-.$"

LavenderRadioP3_Master_Ball::
lock
faceplayer
msgbox Text_CompraPokemon MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_MASTER_RADIO, 0
switch VAR_RESULT
case 0, EventScript_MasterBall
case 1, EventScript_PiedraRocket
release
end

EventScript_MasterBall::
lock
showmoneybox 0, 0
msgbox EventScript_MasterBall_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 300000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 300000 0
waitse
updatemoneybox
delay 20
hidemoneybox
giveitem ITEM_MASTER_BALL, 1
release
end

EventScript_PiedraRocket::
lock
showmoneybox 0, 0
msgbox EventScript_PiedraRocket_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 2500000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 2500000 0
waitse
updatemoneybox
delay 20
hidemoneybox
giveitem ITEM_CHIPPED_POT, 1
release
end

EventScript_MasterBall_Texto_1:
.string "¿Seguro que quiere una MASTER BALL?\n"
	.string "Costará 300 K POKÉS.$"

EventScript_PiedraRocket_Texto_1:
.string "¿Seguro que quiere una PIEDRA ROCKET?\n"
	.string "Costará 2,5 M POKÉS.$"


LavenderRadioP3_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon MSGBOX_AUTOCLOSE
waitmessage
multichoice 22, 0, MULTI_VENTA_POKEMON_RADIO, 0
switch VAR_RESULT
case 0, EventScript_Espurr
case 1, EventScript_Wooloo
case 2, EventScript_Toxel
case 3, EventScript_Ferroseed
case 4, EventScript_Grookey
case 5, EventScript_Cryogonal
case 6, EventScript_Cramorant
case 7, EventScript_Gible
release
end

EventScript_Cryogonal::
lock
showmoneybox 0, 0
msgbox EventScript_Cryogonal_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 105000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 105000 0
waitse
updatemoneybox
delay 20
hidemoneybox
givemon SPECIES_CRYOGONAL, 58, ITEM_NONE
release
end

EventScript_Gible::
lock
showmoneybox 0, 0
msgbox EventScript_Gible_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 175000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 175000 0
waitse
updatemoneybox
delay 20
hidemoneybox
givemon SPECIES_GIBLE, 20, ITEM_NONE
release
end

EventScript_Cramorant::
lock
showmoneybox 0, 0
msgbox EventScript_Cramorant_Texto_1 MSGBOX_YESNO
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
givemon SPECIES_CRAMORANT, 60, ITEM_NONE
release
end

EventScript_Espurr::
lock
showmoneybox 0, 0
msgbox EventScript_Espurr_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 30000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 30000 0
waitse
updatemoneybox
delay 20
hidemoneybox
givemon SPECIES_ESPURR, 40, ITEM_NONE
release
end

EventScript_Wooloo::
lock
showmoneybox 0, 0
msgbox EventScript_Wooloo_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 40000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 40000 0
waitse
updatemoneybox
delay 20
hidemoneybox
givemon SPECIES_WOOLOO, 45, ITEM_NONE
release
end

EventScript_Toxel::
lock
showmoneybox 0, 0
msgbox EventScript_Toxel_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 57000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 57000 0
waitse
updatemoneybox
delay 20
hidemoneybox
givemon SPECIES_TOXEL, 35, ITEM_NONE
release
end

EventScript_Ferroseed::
lock
showmoneybox 0, 0
msgbox EventScript_Ferroseed_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 60000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 60000 0
waitse
updatemoneybox
delay 20
hidemoneybox
givemon SPECIES_FERROSEED, 38, ITEM_NONE
release
end


EventScript_Grookey::
lock
showmoneybox 0, 0
msgbox EventScript_Grookey_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 80000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 80000 0
waitse
updatemoneybox
delay 20
hidemoneybox
givemon SPECIES_GROOKEY, 15, ITEM_NONE
release
end

EventScript_Cryogonal_Texto_1:
.string "Are you sure you want CRYOGONAL?\n"
	.string "It will cost 105,000 POKÉ.$"

EventScript_Cramorant_Texto_1:
.string "Are you sure you want CRAMORANT?\n"
	.string "It will cost 110,000 POKÉ.$"

EventScript_Gible_Texto_1:
.string "Are you sure you want GIBLE?\n"
	.string "It will cost 175,000 POKÉ.$"

EventScript_Grookey_Texto_1:
.string "Are you sure you want GROOKEY?\n"
	.string "It will cost 80,000 POKÉ.$"

EventScript_Ferroseed_Texto_1:
.string "Are you sure you want FERROSEED?\n"
	.string "It will cost 60,000 POKÉ.$"

EventScript_Toxel_Texto_1:
.string "Are you sure you want TOXELL?\n"
	.string "It will cost 57,000 POKÉ.$"

EventScript_Wooloo_Texto_1:
.string "Are you sure you want WOOLOO?\n"
	.string "It will cost 40,000 POKÉ.$"

EventScript_Espurr_Texto_1:
.string "Are you sure you want ESPURR?\n"
	.string "It will cost 30,000 POKÉ.$"

Text_CompraPokemon:
.string "Welcome, sir.\n"
	.string "How may I assist you?$"

EventScript_Compra_No::
msgbox EventScript_Compra_No_Texto_1 MSGBOX_AUTOCLOSE
hidemoneybox
release
end

EventScript_Compra_No_Texto_1:
	.string "Please come again!$"

Tienda_Pokemon_No_Money::
msgbox Tienda_Pokemon_No_Money_Texto_1 MSGBOX_AUTOCLOSE
hidemoneybox
release
end

Tienda_Pokemon_No_Money_Texto_1:
.string "You don't have enough money!$"
