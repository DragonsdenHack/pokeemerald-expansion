SeafoamIslands_5F_MapScripts::
	.byte 0

SeafoamIslands5F_5::
end



SeafoamIslands5F_6::
lock
msgbox SeafoamIslands5F_6_texto_1, MSGBOX_SIGN
release
end

SeafoamIslands5F_6_texto_1:
	.string "-Offenbar blockiert dieser Fels hier\n"
	.string "die starken Strömungen.-$"



SeafoamIslands5FDocumento_100::
msgbox SeafoamIslands5FDocumento_Text_100, MSGBOX_SIGN   
end

SeafoamIslands5FDocumento_Text_100:
.string "Felsen könnten die Strömung\n"
    .string "vielleicht umlenken!$"



SeafoamIslands5FDocumento_101::
msgbox SeafoamIslands5FDocumento_Text_101, MSGBOX_SIGN   
end

SeafoamIslands5FDocumento_Text_101:
.string "VORSICHT!\n"
    .string "GEFÄHRLICHE STRÖMUNG!$"


SeafoamIslands_5F_Combate_Articuno::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 68
goto_if_gt SeafoamIslands_5F_Combate_Articuno_Derrotado
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
@msgbox SeafoamIslands_5F_Combate_Articuno_Texto_1 MSGBOX_DEFAULT
@closemessage
@playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
@waitmoncry
@@@@@@@@@@@@@@@@@@@@@@@@@@@@
waitse
playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
message SeafoamIslands_5F_Combate_Articuno_Texto_1
waitmessage
waitmoncry
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
waitbuttonpress
trainerbattle_no_intro TRAINER_ARTICUNO, SeafoamIslands_5F_Combate_Articuno_Texto_2
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_3 MSGBOX_DEFAULT
waitse
delay 20
playse SE_POKENAV_CALL
delay 30
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_5F_Combate_Articuno_Move_1
waitmovement 0x0
delay 20
playse SE_POKENAV_HANG_UP
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SeafoamIslands_5F_Combate_Articuno_Move_1
waitmovement 0x0
waitse
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.4 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.5 MSGBOX_AUTOCLOSE
delay 10
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_4.6 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_839
playse SE_PC_OFF
waitse
delay 20
setflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_RIVAL_SIBLING
setvar VAR_UNUSED_0x40F7, 69
release
end

SeafoamIslands_5F_Combate_Articuno_Derrotado::
msgbox SeafoamIslands_5F_Combate_Articuno_Texto_5 MSGBOX_AUTOCLOSE
release
end

SeafoamIslands_5F_Combate_Articuno_Texto_1:
.string "Ark!$"

SeafoamIslands_5F_Combate_Articuno_Texto_2:
.string "Ark…$"

SeafoamIslands_5F_Combate_Articuno_Texto_3:
	.string "Du hast dem LEGENDÄREN POKéMON ARKTOS\n"
	.string "eine Feder gezupft!$"

SeafoamIslands_5F_Combate_Articuno_Texto_4:
	.string "GIOVANNI: {PLAYER}! {PAUSE 35}… {PAUSE 35}…{PAUSE 35} Hast du\n"
	.string "bereits ARKTOS besiegt? Großartig!\p"
	.string "Gut gemacht, {PLAYER}! BLAU hat\n"
	.string "ebenfalls seine Mission mit dem Sieg\l"
	.string "über LAVADOS am GLUTBERG erfolgreich\l"
	.string "zum Abschluss gebracht.$"

SeafoamIslands_5F_Combate_Articuno_Texto_4.1:
	.string "{PAUSE 35}… {PAUSE 35}…{PAUSE 35}$"

SeafoamIslands_5F_Combate_Articuno_Texto_4.2:
	.string "Ich rufe dich an, weil ANDRA\n"
	.string "in Schwierigkeiten steckt.$"
	
SeafoamIslands_5F_Combate_Articuno_Texto_4.3:
	.string "Der Plan, unauffällig ins KRAFTWERK\n"
	.string "einzudringen, ist gescheitert und jetzt\l"
	.string "ist sie von Polizisten umzingelt.$"
	
SeafoamIslands_5F_Combate_Articuno_Texto_4.4:
	.string "Natürlich haben diese allein keine\n"
	.string "Chance gegen sie. Aber es ist nur eine\l"
	.string "Frage der Zeit, bis sie einen\l"
	.string "ARENALEITER oder sogar ein Mitglied der\l"
	.string "TOP VIER benachrichtigen, um sie mit\l"
	.string "Gewalt festzunehmen!$"
	
SeafoamIslands_5F_Combate_Articuno_Texto_4.5:
	.string "Ich möchte, dass du dich dem\n"
	.string "Rettungsteam anschließt, {PLAYER}.\p"
	.string "Falls es brenzlig wird, brauchen wir\n"
	.string "unsere stärksten Trainer vor Ort, um\l"
	.string "sie von dort rauszuholen.$"

SeafoamIslands_5F_Combate_Articuno_Texto_4.6:
	.string "Die anderen Mitglieder des Teams warten\n"
	.string "außerhalb des KRAFTWERKs auf ROUTE 10\l"
	.string "auf dich. Beeil dich!\p"
	.string "Jede Sekunde zählt!$"

SeafoamIslands_5F_Combate_Articuno_Texto_5:
	.string "-Es scheint zu schwach zum\n"
	.string "Kämpfen zu sein.-$"

SeafoamIslands_5F_Combate_Articuno_Move_1:
emote_exclamation_mark
step_end
