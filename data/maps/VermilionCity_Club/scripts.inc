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
.string "Hört den anderen TRAINERn\n"
	.string "aufmerksam zu!$"



VermilionClubDocumento_101::
msgbox VermilionClubDocumento_Text_101, MSGBOX_SIGN   
end

VermilionClubDocumento_Text_101:
    .string "Wenn jemand prahlt,\n"
	.string "dann prahle zurück!$"

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
delay 10
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_5 MSGBOX_DEFAULT
delay 15
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_Club_Secundaria_AncianoMachop_3
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_7 MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_CLUBFANS, VermilionCity_Club_Secundaria_AncianoMachop_Texto_8
delay 15
playse SE_PIN
applymovement 2, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
delay 5
applymovement 3, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
delay 5
applymovement 4, VermilionCity_Club_Secundaria_AncianoMachop_Move_1
waitmovement 0x0
waitse
delay 10
applymovement 1, VermilionCity_Club_Secundaria_AncianoMachop_Move_1.1
waitmovement 0x0
delay 10
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_9 MSGBOX_DEFAULT
delay 10
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_10 MSGBOX_DEFAULT
playfanfare MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_BIKE_VOUCHER
waitfanfare
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_11 MSGBOX_DEFAULT
setvar VAR_UNUSED_0x409B, 2
release
end

VermilionCity_Club_Secundaria_AncianoMachop_Move_1.1:
delay_8
face_down
delay_16
face_right
delay_16
face_left
delay_8
face_player
step_end


VermilionCity_Club_Secundaria_AncianoMachop_3::
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_12 MSGBOX_DEFAULT
release
end

VermilionCity_Club_Secundaria_AncianoMachop_4::
msgbox VermilionCity_Club_Secundaria_AncianoMachop_Texto_2 MSGBOX_DEFAULT
release
end


VermilionCity_Club_Secundaria_AncianoMachop_Texto_1:
	.string "Als Mitglied von TEAM ROCKET muss dein\n"
	.string "Leben echt kläglich sein, mit deinen\l"
	.string "mickrigen RATTFRATZ und ZUBAT. Ich\l"
	.string "hoffe wirklich, dass du dich hier nicht\l"
	.string "mehr blicken lässt. Hier verkehren wir\l"
	.string "nur mit angesehenen Leuten und\l"
	.string "befassen uns ausschließlich mit\l"
	.string "würdigen POKéMON. So wie der junge\l"
	.string "Mann, der vorhin hier war. Er besitzt ein\l"
	.string "ganz entzückendes SCHIGGY. Ein ganz\l"
	.string "prächtiges Exemplar, ja …{PAUSE 5}$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_2:
	.string "Die POKéMON-Welt ist riesig! Trotz\n"
	.string "meiner geschichtsträchtigen Reise bin\l"
	.string "ich nur einem Bruchteil aller POKéMON\l"
	.string "der Welt begegnet. Da draußen\l"
	.string "existieren noch stärkere und\l"
	.string "beeindruckendere POKéMON!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_4:
.string "Forderst du mich etwa zu\n"
.string "einem Kampf heraus?!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_5:
	.string "Mein Junge! Ich glaube, du weißt nicht,\n"
	.string "mit wem du dich hier gerade anlegst. Ich\l"
	.string "habe über 100 POKéMON gefangen und\l"
	.string "dank meiner Reisen besitze ich die\l"
	.string "Crème de la Crème der gesamten Region.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_6:
.string "Willst du immer noch gegen\n"
.string "mich kämpfen?$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_7:
	.string "Du merkst es echt nicht, wenn ein\n"
	.string "außergewöhnlicher TRAINER vor dir\l"
	.string "steht, was? Ich werde dir zeigen, dass\l"
	.string "es Leute gibt, mit denen man sich\l"
	.string "besser nicht anlegt!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_8:
.string "Meine majestätischen POKéMON!\n"
	.string "Wie?!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_9:
	.string "Tja. Ich dachte, drei POKéMON wären\n"
	.string "genug. Alleine die Kraft meines GALOPPA\l"
	.string "sollte genug sein, um jeden\l"
	.string "gewöhnlichen TRAINER abzuhängen. Ich\l"
	.string "muss zugeben, ich bin beeindruckt.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_10:
	.string "Nimm das hier als Zeichen meines\n"
	.string "Respekts. Du kannst es im FAHRRADLADEN\l"
	.string "in AZURIA CITY gegen ein neues FAHRRAD\l"
	.string "eintauschen. Mitglied von TEAM ROCKET\l"
	.string "hin oder her, deine POKéMON sind\l"
	.string "wirklich beeindruckend.$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_11:
	.string "{PLAYER} erhält einen RAD-COUPON vom\n"
	.string "VORSITZENDEN des POKéMON-FANCLUBS!$"

VermilionCity_Club_Secundaria_AncianoMachop_Texto_12:
	.string "Kluger Bursche. Wenn du dich gut\n"
	.string "verhältst, werde ich die Polizei nicht\l"
	.string "verständigen.$"

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
	.string "Wer bist du? Du verdienst es nicht,\n"
	.string "hier zu sein!$"

VermilionCity_Tercer_NPC_Texto_2:
	.string "Das war unglaublich! Starke TRAINER\n"
	.string "können also von überall herkommen!\l"
	.string "Sogar von TEAM ROCKET!$"



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
	.string "Leg dich nicht mit mir an oder du wirst\n"
	.string "Bekanntschaft mit meinem RELAXO\n"
	.string "machen! Pass also besser auf, was du\l"
	.string "sagst!$"

VermilionCity_Cuarto_NPC_Texto_2:
	.string "Wow! Ich dachte, unser VORSITZENDER\n"
	.string "wäre viel stärker …{PAUSE 5}$"



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
	.string "Sei höflich zu unserem VORSITZENDEN\n"
	.string "und zolle ihm Respekt, wenn du mit ihm\l"
	.string "redest! Wenn er wollte, könnte er dich\l"
	.string "mitsamt dem Rest von TEAM ROCKET auf\l"
	.string "der Stelle dem Erdboden gleichmachen!$"


VermilionCity_Segundo_NPC_Texto_2:
	.string "Ich hätte nie gedacht, dass unser\n"
	.string "VORSITZENDER verlieren könnte {PAUSE 5}…{PAUSE 5}$"
