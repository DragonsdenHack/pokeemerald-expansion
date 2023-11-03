LavenderRadioP3_MapScripts::
	.byte 0

LavenderRadioP3_3::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_3, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_3:
.string "El verdadero caos no hace ruido.$"




LavenderRadioP3_4::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_4, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_4:
.string "Nunca me fío de alguien que no tiene\n"
.string "enemigos.$"





LavenderRadioP3_5::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_5, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_5:
.string "Los GASTLY y HAUNTER ahora están en el\n"
.string "cementerio del sur… ¿Crees que una\l"
.string "parte ha emigrado a otro lugar? ¿La\l"
.string "parcela de CIUDAD CARMÍN? Tal vez\l"
.string "tengas razón.$"




LavenderRadioP3_8::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_8, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_8:
.string "Cuanto mayor es la incertidumbre, más\n"
.string "valiosa es la opción.$"





LavenderRadioP3_9::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_9, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_9:
.string "Cada vez más alto, cada vez más\n"
.string "difíciles los retos. ¿Hasta cuándo?$"





LavenderRadioP3_10::
lock     
faceplayer     
msgbox LavenderRadioP3_Text_10, MSGBOX_DEFAULT
release     
end

LavenderRadioP3_Text_10:
.string "La tolerancia llegará a tal nivel que las\n"
.string "personas inteligentes tendrán\l"
.string "prohibido hablar para no ofender a los\l"
.string "imbéciles.$"



LavenderRadioP3_EventScript_Cientifico::
	trainerbattle_single TRAINER_CRISTIN_3, LavenderRadioP3_Text_CientificoIntro, LavenderRadioP3_Text_CientificoDefeated
	msgbox LavenderRadioP3_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


LavenderRadioP3Documento_100::
msgbox LavenderRadioP3Documento_Text_100, MSGBOX_SIGN   
end

LavenderRadioP3Documento_Text_100:
.string "4to Análisis & Inversión$"



LavenderRadioP3Documento_101::
msgbox LavenderRadioP3Documento_Text_101, MSGBOX_SIGN   
end

LavenderRadioP3Documento_Text_101:
.string "-Hay una ilusión de poder que produce\n"
	.string "en tu interior cierta locura-.$"


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
delay 20
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
delay 20
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
delay 20
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
delay 20
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
delay 20
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
delay 20
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
delay 20
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
delay 20
givemon SPECIES_GROOKEY, 15, ITEM_NONE
release
end

EventScript_Cryogonal_Texto_1:
.string "¿Seguro que quiere a CRYOGONAL?\n"
	.string "Costará 105000 POKÉS.$"

EventScript_Cramorant_Texto_1:
.string "¿Seguro que quiere a CRAMORANT?\n"
	.string "Costará 110000 POKÉS.$"

EventScript_Gible_Texto_1:
.string "¿Seguro que quiere a GIBLE?\n"
	.string "Costará 175000 POKÉS.$"

EventScript_Grookey_Texto_1:
.string "¿Seguro que quiere a GROOKEY?\n"
	.string "Costará 80000 POKÉS.$"

EventScript_Ferroseed_Texto_1:
.string "¿Seguro que quiere a FERROSEED?\n"
	.string "Costará 60000 POKÉS.$"

EventScript_Toxel_Texto_1:
.string "¿Seguro que quiere a TOXEL? Costará\n"
	.string "57000 POKÉS.$"

EventScript_Wooloo_Texto_1:
.string "¿Seguro que quiere a WOOLOO? Costará\n"
	.string "40000 POKÉS.$"

EventScript_Espurr_Texto_1:
.string "¿Seguro que quiere a ESPURR? Costará\n"
	.string "30000 POKÉS.$"

Text_CompraPokemon:
.string "Bienvenido señor, ¿en qué puedo\n"
	.string "ayudarle?$"

EventScript_Compra_No::
msgbox EventScript_Compra_No_Texto_1 MSGBOX_AUTOCLOSE
hidemoneybox
release
end

EventScript_Compra_No_Texto_1:
.string "¡Vuelva cuando quiera!$"

Tienda_Pokemon_No_Money::
msgbox Tienda_Pokemon_No_Money_Texto_1 MSGBOX_AUTOCLOSE
hidemoneybox
release
end

Tienda_Pokemon_No_Money_Texto_1:
.string "¡No tiene suficiente dinero!$"
