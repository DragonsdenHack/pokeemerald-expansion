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
.string "As a ROCKET must be hard to have\n"
	.string "enough with a RATATTA and ZUBAT. I\l"
	.string "hope you don't come back to this place,\l"
	.string "here we only deal with distinguished\l"
	.string "people with worthy POKÉMON. Like that\l"
	.string "guy who came here a few earlier with\l"
	.string "his SQUIRTLE, a good specimen, yes…$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_2:
.string "The POKÉMON world is so big, even from\n"
	.string "all I saw, I'm not even close to meeting\l"
	.string "all kinds of POKÉMON that exist.\l"
	.string "Stronger and more impressive POKÉMON\l"
	.string "exists there!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_3:
.string "...\n"
	.string "...$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_4:
.string "Are you challenging me to a fight?!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_5:
.string "Boy you don't know what you are asking\n"
	.string "for, I have more than 100 POKÉMON in my\l"
	.string "hands, I had a chance to get the best\l"
	.string "specimens of this region by my many\l"
	.string "journeys through this region.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_6:
.string "Do you wanna still challenge me?$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_7:
.string "You can't recognize a great TRAINER\n"
	.string "when is ahead of you, eh? I will show\l"
	.string "you that there are people that are\l"
	.string "better off not dealing with them!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_8:
.string "My majestic POKÉMON!\n"
	.string "¿How?!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_9:
.string "Well, I thought that I could've beaten\n"
	.string "you easily with 3 POKÉMON, my RAPIDASH\l"
	.string "potency should be more than enough to\l"
	.string "overthrow any close TRAINER, I admit\l"
	.string "that I am impressed.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_10:
.string "Accept this as a good faith gift, you\n"
	.string "could exchange it at the BICYCLE SHOP\l"
	.string "in CERULEAN CITY for a new BIKE, even\l"
	.string "if you are a ROCKET or not, your\l"
	.string "collection is impressive.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_11:
.string "{PLAYER} received a BIKE VOUCHER\n"
	.string "from the CHAIRMAN!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_12:
.string "Clever boy, if you behave well I won't\n"
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
.string "That was amazing! The great TRAINERS\n"
	.string "can come from everywhere! Even from\l"
	.string "TEAM ROCKET!$"



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
.string "I hope to not use my SNORLAX, ROCKET,\n"
	.string "to any move you will end up crushed so\l"
	.string "be careful about your manners.$"

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
	.string "talk to our CHAIRMAN, if he wants to, he\l"
	.string "would bury you with all the TEAM\l"
	.string "ROCKET.$"


VermilionCity_Segundo_NPC_Texto_2:
.string "I didn't expect our CHAIRMAN could be\n"
	.string "defeated…$"
