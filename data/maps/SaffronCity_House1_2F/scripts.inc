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
    .string "Meine Geheimnisse!\p"
    .string "Zeitvertreib: Mienenspiel\n"
    .string "Hobby: Puppen sammeln\l"
    .string "Lieblings-POKéMON: PIEPI!$"



SaffronCityHouse12FDocumento_101::
msgbox SaffronCityHouse12FDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityHouse12FDocumento_Text_101:
    .string "Ein Spiel mit MARIO!$"



SaffronCityHouse12FDocumento_102::
msgbox SaffronCityHouse12FDocumento_Text_102, MSGBOX_DEFAULT  
release
end

SaffronCityHouse12FDocumento_Text_102:
.string "Ein seltenes POKéMON!\n"
    .string "Hmm? Es ist nur eine Puppe!$"

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
additem ITEM_CHOICE_SPECS
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
	.string "Du erhältst ein WAHLGLAS\n"
	.string "von der NACHAHMERIN!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_1:
	.string "Ich habe es satt, dass mir jeder nur\n"
	.string "Puppen zum Spielen bringt!\p"
	.string "Keiner weiß, dass mein echtes Talent\n"
	.string "POKéMON-Kämpfe sind! Sie behandeln\l"
	.string "mich wie ein kleines Kind! Am liebsten\l"
	.string "würde ich einen starken Trainer finden,\l"
	.string "mit dem ich meine Zeit verbringen kann!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_2:
.string "…\n"
	.string "…$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_3:
	.string "Tut mir leid. Ich dachte, du wärst dieser\n"
	.string "Trainer, aber du musst noch stärker\l"
	.string "werden.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_4:
	.string "Das WAHLGLAS erhöht den\n"
	.string "SPEZIAL-ANGRIFF eines POKéMON um 50 %,\l"
	.string "aber dafür kannst du nur eine Attacke\l"
	.string "einsetzen. Es ist perfekt für POKéMON\l"
	.string "wie SIMSALA, GLURAK oder BLITZA.$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_5:
	.string "Heyy! Du hast alle ORDEN! Dein Team\n"
	.string "muss richtig stark sein! Wie wäre es mit\l"
	.string "einem Kampf? Komm schon. Wenn du mich\l"
	.string "besiegst, werde ich dir ein Item geben,\l"
	.string "das du sonst nirgendwo finden wirst!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_6:
.string "Also, wirst du gegen mich kämpfen?$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_7:
.string "Hast du das gehört, PIEPI?\n"
	.string "Das wird lustig!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_8:
.string "Wunderbar!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_9:
	.string "Das war super! Guck! Ich zeige dir das\n"
	.string "Geheimnis, mit dem du SPEZIAL-ATTACKEN\l"
	.string "einsetzen kannst, die sogar stärker\l"
	.string "sind als die von SABRINA!$"

SaffronCity_House1_2F_Entrenador_Especial_Texto_10:
.string "Oh …\n"
	.string "Das ist schade …\l"
	.string "Ich dachte, vielleicht {PAUSE 5}…{PAUSE 5}$"


