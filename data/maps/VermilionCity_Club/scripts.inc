VermilionCity_Club_MapScripts::
	.byte 0

VermilionClub1::
end



VermilionClub2::
end



VermilionClub3::
end



VermilionClub4::
end



VermilionClub5::
end



VermilionClub6::
end



VermilionClubDocumento_100::
msgbox VermilionClubDocumento_Text_100, MSGBOX_SIGN   
end

VermilionClubDocumento_Text_100:
.string "Let's listen politely to the rest of the\n"
	.string "trainers!$"



VermilionClubDocumento_101::
msgbox VermilionClubDocumento_Text_101, MSGBOX_SIGN   
end

VermilionClubDocumento_Text_101:
	.string "If someone laughs, laugh back.$"

VermilionCity_Club_Secundaria_AncianoMachop::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Club_Secundaria_AncianoMachop_4
compare VAR_UNUSED_0x409B, 1
goto_if_eq VermilionCity_Club_Secundaria_AncianoMachop_2
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_1 MSGBOX_DEFAULT
release
end

VermilionCity_Club_Secundaria_AncianoMachop_2::
delay 20
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_3 MSGBOX_DEFAULT
delay 20
applymovement 1, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_4 MSGBOX_DEFAULT
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_5 MSGBOX_DEFAULT
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_Club_Secundaria_AncianoMachop_3
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_7 MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_CLUBFANS, VermilionCity_Club_Secundaria_AncianoMachop_Texto_8
delay 15
playse SE_PIN
applymovement 2, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
applymovement 3, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
applymovement 4, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_9 MSGBOX_DEFAULT
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_10 MSGBOX_DEFAULT
playfanfare MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_BIKE_VOUCHER
waitfanfare
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_11 MSGBOX_DEFAULT
setvar VAR_UNUSED_0x409B, 2
release
end


VermilionCity_Club_Secundaria_AncianoMachop_3::
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_12 MSGBOX_DEFAULT
release
end

VermilionCity_Club_Secundaria_AncianoMachop_4::
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_2 MSGBOX_DEFAULT
release
end


VermilionCity_Club_Secundaria_AncianoMachop_Texto_1:
	.string "As a ROCKET, it's a dog's life with your\n"
	.string "meager RATTATA and ZUBAT. I do hope\l"
	.string "you won't come back. Here, we deal with\l"
	.string "only distinguished people with worthy\l"
	.string "POKÉMON. Such as that man who stopped\l"
	.string "by a while ago with his delightful\l"
	.string "WARTORTLE. A fine specimen, yes…$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_2:
	.string "The POKÉMON world is so vast! Despite\n"
	.string "my well-storied journey, I haven't even\l"
	.string "met a fraction of all the POKÉMON in the\l"
	.string "world. Stronger, more impressive\l"
	.string "POKÉMON await out there!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_4:
.string "Are you challenging me to a fight?!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_5:
	.string "Now, kid. You don't know what you're\n"
	.string "getting yourself into here. I've got\l"
	.string "over a hundred POMÉMON right here, and\l"
	.string "thanks to my travels, I've got the\l"
	.string "cream of the crop in all the region.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_6:
.string "Do you wanna still challenge me?$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_7:
	.string "You just can't tell when a great\n"
	.string "TRAINER's standing right in front of\l"
	.string "you, eh? I'll show you there are people\l"
	.string "you don't want to mess with!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_8:
.string "My majestic POKÉMON!\n"
	.string "How?!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_9:
	.string "Well. I thought I'd have easily beaten\n"
	.string "you with just three POKÉMON. My\l"
	.string "RAPIDASH's power should've been enough\l"
	.string "to buck any ordinary TRAINER. I've got\l"
	.string "to admit-I'm impressed.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_10:
	.string "Take this as a gift in good faith. You\n"
	.string "can exchange it at the BICYCLE SHOP in\l"
	.string "CERULEAN CITY for a new BIKE. ROCKET or\l"
	.string "not, your collection's quite impressive.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_11:
.string "{PLAYER} received a BIKE VOUCHER\n"
	.string "from the CHAIRMAN!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_12:
	.string "Clever kid, if you behave well, I won't\n"
	.string "call the police.$"

VermilionCity_Club_Secundaria_AncianoMachop_Move_1:
emote_exclamation_mark
step_end

VermilionCity_Seel::
lock
faceplayer
playmoncry SPECIES_SEEL, CRY_MODE_ENCOUNTER
msgbox VermilionCity_Seel_Texto_1 MSGBOX_DEFAULT
waitmoncry
release
end

VermilionCity_Seel_Texto_1:
.string "SEEL: KYUUUO!$"


VermilionCity_Pikachu::
lock
faceplayer
playmoncry SPECIES_PIKACHU, CRY_MODE_ENCOUNTER
msgbox VermilionCity_Pikachu_Texto_1 MSGBOX_DEFAULT
waitmoncry
release
end

VermilionCity_Pikachu_Texto_1:
.string "PIKACHU: CHU! PIKACHU!$"



VermilionCity_Tercer_NPC::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Tercer_NPC_2
msgbox VermilionCity_Tercer_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Tercer_NPC_2::
msgbox VermilionCity_Tercer_NPC_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Tercer_NPC_Texto_1:
.string "Who are you? You don't deserve to stay\n"
	.string "in this place!$"

VermilionCity_Tercer_NPC_Texto_2:
	.string "That was amazing! Great TRAINERS can\n"
	.string "come from anywhere! Even from TEAM\l"
	.string "ROCKET!$"



VermilionCity_Cuarto_NPC::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Cuarto_NPC_2
msgbox VermilionCity_Cuarto_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Cuarto_NPC_2::
msgbox VermilionCity_Cuarto_NPC_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Cuarto_NPC_Texto_1:
	.string "Don't make me crush you with my\n"
	.string "SNORLAX. You'd better watch your mouth.$"

VermilionCity_Cuarto_NPC_Texto_2:
.string "Wow, I thought our CHAIRMAN was much\n"
	.string "stronger…$"



VermilionCity_Segundo_NPC::
lock
faceplayer
compare VAR_UNUSED_0x409B, 1
goto_if_gt VermilionCity_Segundo_NPC_2
msgbox VermilionCity_Segundo_NPC_Texto_1 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Segundo_NPC_2::
msgbox VermilionCity_Segundo_NPC_Texto_2 MSGBOX_AUTOCLOSE
release
end

VermilionCity_Segundo_NPC_Texto_1:
	.string "Be polite and show respect when you\n"
	.string "talk to our CHAIRMAN. If he wanted, he\l"
	.string "could bury you with the rest of TEAM\l"
	.string "ROCKET.$"


VermilionCity_Segundo_NPC_Texto_2:
.string "I didn't expect our CHAIRMAN could be\n"
	.string "defeated…$"
