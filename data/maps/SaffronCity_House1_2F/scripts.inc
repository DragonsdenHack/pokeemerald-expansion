SaffronCity_House1_2F_MapScripts::
	.byte 0

SaffronCityHouse12F_1::
end



SaffronCityHouse12F_2::
end



SaffronCityHouse12F_3::
end



SaffronCityHouse12F_4::
end



SaffronCityHouse12FDocumento_100::
msgbox SaffronCityHouse12FDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityHouse12FDocumento_Text_100:
 .string "…\p"
    .string "My Secrets!\p"
    .string "Skill: Mimicry!\n"
    .string "Hobby: Collecting dolls!\l"
    .string "Favorite POKÉMON: CLEFAIRY!$"



SaffronCityHouse12FDocumento_101::
msgbox SaffronCityHouse12FDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityHouse12FDocumento_Text_101:
.string "A game with MARIO wearing a bucket\n"
    .string "on his head!$"



SaffronCityHouse12FDocumento_102::
msgbox SaffronCityHouse12FDocumento_Text_102, MSGBOX_DEFAULT  
release
end

SaffronCityHouse12FDocumento_Text_102:
.string "This is a rare POKÉMON!\n"
    .string "Huh? It's only a doll!$"

SaffronCity_House1_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE120_STATE, 0
goto_if_gt SaffronCity_House1_2F_Entrenador_Especial_3
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt SaffronCity_House1_2F_Entrenador_Especial_2
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end


SaffronCity_House1_2F_Entrenador_Especial_2::
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SaffronCity_House1_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GAFASELEGIDAS, SaffronCity_House1_2F_Entrenador_Especial_Texto_8
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem 444
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE120_STATE, 1
release
end


SaffronCity_House1_2F_Entrenador_Especial_2_No::
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

SaffronCity_House1_2F_Entrenador_Especial_3::
msgbox SaffronCity_House1_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end


SaffronCity_House1_2F_Entrenador_Especial_Texto_1.1:
	.string "You obtained CHOICE SPECS from the\n"
	.string "COPYCAT!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_1:
	.string "I'm so bored and tired of people just\n"
	.string "bringing me dolls to play with. No one\l"
	.string "knows my true talent is POKÉMON\l"
	.string "battling, they treat me as a mere child.\l"
	.string "I really want to find a good TRAINER to\l"
	.string "spend time with.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_2:
.string "...\n"
	.string "...$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_3:
	.string "I'm sorry, I thought you might be that\n"
	.string "trainer, but you still have to improve\l"
	.string "yourself even more.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_4:
	.string "The CHOICE SPECS increases the\n"
	.string "SPECIAL ATTACK of a POKÉMON by 50%,\l"
	.string "but you only can use one move, they're\l"
	.string "perfect for POKÉMON like ALAKAZAM,\l"
	.string "CHARIZARD or JOLTEON.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_5:
	.string "Heyy! You've got all the BADGES! Your\n"
	.string "team must be very strong! Why don't we\l"
	.string "battle? Come on, if you defeat me I'll\l"
	.string "give you an object you won't find In any\l"
	.string "other place!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_6:
.string "So, do you accept the challenge?$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_7:
.string "Did you hear that, CLEFABLE?\n"
	.string "Let's have some fun!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_8:
.string "Splendid!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_9:
	.string "That was amazing! Look! I'm going to\n"
	.string "show you the secret that you'll be able\l"
	.string "to use SPECIAL ATTACKS with a power\l"
	.string "even superior to SABRINA's.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_10:
.string "Oh...\n"
	.string "So sad...\l"
	.string "I thought maybe...$"
