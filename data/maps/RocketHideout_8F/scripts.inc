RocketHideout_8F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_8F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_8F_OnFrame
	.byte 0

RocketHideout_8F_OnFrame:
map_script_2 VAR_UNUSED_0x40DC, 12, RocketHideout_8F_Mision_Silph_Despues
map_script_2 VAR_UNUSED_0x40F7, 803, RocketHideout_8F_Disguise_Player
map_script_2 VAR_UNUSED_0x40F7, 809, RocketHideout_8F_Disguise_Player_3
	.2byte 0

RocketHideout_8F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 802, RocketHideout_8F_Disguise_Player_2
map_script_2 VAR_UNUSED_0x40F7, 808, RocketHideout_8F_Disguise_Player_4
	.2byte 0

RocketHideout_8F_Disguise_Player_2::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 803
end

RocketHideout_8F_Disguise_Player_4::
setobjectxy 1, 8, 7
playse SE_M_STAT_INCREASE
applymovement 1, RocketHideout_6F_Disguise_Player_2_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.5
setvar VAR_UNUSED_0x40F7, 809
end

RocketHideout_6F_Disguise_Player_2_Move_1:
face_right
step_end

RocketHideout8F_Mision_Johto_move_12.5:
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_4
face_up
delay_4
face_right
delay_4
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
face_up
delay_8
face_right
delay_8
face_down
delay_8
face_left
delay_8
delay_8
face_up
delay_8
delay_8
face_right
delay_8
delay_8
face_down
delay_8
delay_8
face_left
delay_8
step_end

RocketHideout8F_1::
end



RocketHideout8F_2::
end

RocketHideout_8F_Mision_Articuno_Zapdos::
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
removeobject 7
removeobject 8
lockall
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3 MSGBOX_AUTOCLOSE
playse SE_EXIT
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 4
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_5
waitmovement 0x0
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12.1 MSGBOX_AUTOCLOSE
delay 25
playse SE_SHOP
addmoney 175000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_EVIOLITE
waitfanfare
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.2 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
delay 5
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
addobject 11
delay 15
showmonpic SPECIES_ZAPDOS, 17, 1   
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.2 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
playse SE_PIN
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
showmonpic SPECIES_ARTICUNO, 17, 1   
playmoncry SPECIES_ARTICUNO, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20.1 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_6
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.1 MSGBOX_AUTOCLOSE
delay 10
showmonpic SPECIES_MOLTRES, 17, 1   
playmoncry SPECIES_MOLTRES, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.3 MSGBOX_AUTOCLOSE
delay 5
hidemonpic
delay 5
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 11
delay 15
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.3
waitmovement 0x0
delay 5
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_3
waitmovement 0x0
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.3 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.4 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_11
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_10
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.2 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideout_8F_Mision_Articuno_Zapdos_Move_13
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
setvar VAR_UNUSED_0x40F7, 63
release
end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.4:
face_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.1:
face_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.2:
face_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12.3:
walk_slow_right
delay_16
delay_8
walk_slow_left
delay_16
delay_8
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_1:
	.string "GIOVANNI: Was hältst du davon,\n"
	.string "{PLAYER}? Ein deutlich besserer\l"
	.string "Arbeitsplatz, als die muffige vierte\l"
	.string "Etage über uns, nicht wahr?\p"
	.string "Also, hast du etwas herausgefunden?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2:
	.string "So ist es also. SARAH ist also EICHs\n"
	.string "Enkeltochter und BLAUs ältere\l"
	.string "Schwester.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_2.1:
	.string "Deinem Bericht zufolge geht dort etwas\n"
	.string "äußerst Ungewöhnliches vor sich.\p"
	.string "Entweder hat EICH ein POKéMON benutzt,\n"
	.string "um dort aufzuräumen oder dieses LABOR\l"
	.string "ist nicht so unschuldig, wie es den\l"
	.string "Anschein erweckt.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_3:
	.string "ANDRA: Da hast du dir also ein BISASAM\n"
	.string "geschnappt, was? Nicht schlecht. Nur\l"
	.string "wenige TRAINER besitzen eins.\p"
	.string "Aber glaub nicht, dass du mich\n"
	.string "damit abhängen wirst!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_4:
.string "BLAU: Du hast nach mir gerufen, GIOVANNI?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_5:
	.string "GIOVANNI: Ganz recht, BLAU. {PLAYER}\n"
	.string "hat deiner geliebten Heimatstadt einen\l"
	.string "kurzen Besuch abgestattet. Schließlich\l"
	.string "hast du uns wichtige Informationen\l"
	.string "über die Menschen vorenthalten, die du\l"
	.string "schon dein ganzes Leben lang kennst.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_6:
.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10} … {PAUSE 10}…{PAUSE 10}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_7:
	.string "BLAU: Ich habe dir schon alles gesagt\n"
	.string "GIOVANNI. Mein Verhältnis zu OPA ist\l"
	.string "reine Formsache. Er hat sich nur um\l"
	.string "meine Schwester SARAH und mich\l"
	.string "gekümmert, weil wir miteinander\l"
	.string "verwandt sind. Ich lebe mit meiner\l"
	.string "Schwester, die viel besser mit ihm\l"
	.string "zurechtkommt.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_8:
	.string "Und was ROT angeht. Er war schon immer\n"
	.string "OPAs Liebling. Ein Streber, dem OPA alles\l"
	.string "beigebracht hat. So weit ich mich\l"
	.string "erinnern kann, hat er ihm das Kämpfen\l"
	.string "beigebracht. Fast so, als hätte er ROT\l"
	.string "gezielt darauf vorbereitet, stets\l"
	.string "seinen Willen auszuführen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9:
	.string "BLAU: Und das ist alles.\p"
	.string "Mehr gibt es nicht GIOVANNI!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.1:
	.string "Und ich werde ganz sicher nicht dorthin\n"
	.string "zurückkehren. Ich habe endlich die\l"
	.string "Freiheit, der TRAINER zu werden, der ich\l"
	.string "sein will. OPA und SARAH wollten nur,\l"
	.string "dass ich mir eine gute Stelle sichere,\l"
	.string "um meinen Beitrag zu leisten.\p"
	.string "Sie sehen mich nur als Last!$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_9.2:
	.string "Aber ich habe andere Pläne. Ich werde\n"
	.string "auf meine Weise an die Spitze kommen\l"
	.string "und ihnen beweisen, wie sehr sie mich\l"
	.string "unterschätzt haben!\p"
	.string "Ich werde garantiert kein\n"
	.string "Schoßhündchen der TOP VIER!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_10:
	.string "GIOVANNI: Nur ein wahrer ROCKET würde\n"
	.string "so reden, BLAU. Sei unbesorgt. Wir\l"
	.string "werden nicht zulassen, dass sie dir\l"
	.string "ihren Willen aufzwingen. Vertraue mir.\l"
	.string "Hier gehörst du hin.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_11:
.string "BLAU. D{PAUSE 15}-{PAUSE 15}danke, Sir {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12:
	.string "GIOVANNI: So. Ich habe euch drei hier\n"
	.string "hergerufen, weil ihr die Anforderungen\l"
	.string "für diese spezielle Mission erfüllt.\p"
	.string "Eigentlich sind es drei Missionen,\n"
	.string "alle von höchster Priorität.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_12.1:
	.string "Aber bevor ich dazu komme, gibt es noch\n"
	.string "etwas, was ich tun möchte. {PLAYER},\l"
	.string "hier ist deine Belohnung für die\l"
	.string "wertvollen Informationen, die du\l"
	.string "gesammelt hast.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_13:
    .string "Du erhältst 175.000¥!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_14:
	.string "GIOVANNI: Darüber hinaus erhältst du\n"
	.string "auch das hier. BLAU und ANDRA haben\l"
	.string "bereits jeweils eins. Ich kann es nicht\l"
	.string "verantworten, dass einer meiner besten\l"
	.string "Leute ohne dieses Item herumläuft.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15:
	.string "Das ist ein EVOLITH.\p"
	.string "Es existieren nur wenige von ihnen in\n"
	.string "der Region. Es erhöht die VERTEIDIGUNG\l"
	.string "und SPEZIAL-VERTEIDIGUNG von POKéMON\l"
	.string "um 50 %, die sich noch\l"
	.string "weiterentwickeln können.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.1:
	.string "Damit würde dein GOLBAT\n"
	.string "außergewöhnlich widerstandsfähig\l"
	.string "werden. Aber du kannst es auch anderen\l"
	.string "POKéMON zum Tragen geben: MAGMAR,\l"
	.string "RIZEROS, SICHLOR und sogar ELEKTEK\l"
	.string "gehören zu den besten Kandidaten für\l"
	.string "dieses Item. Nutze es weise.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_15.2:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16:
	.string "Alle Missionen, die ich euch von nun an\n"
	.string "zuteilen werde, sind streng vertraulich.\p"
	.string "Diejenigen, die keinen Zugang zur\n"
	.string "UNTERIRDISCHEN BASIS haben, dürfen\l"
	.string "unter keinen Umständen etwas von ihnen\l"
	.string "erfahren.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.1:
	.string "Die meisten ROCKETs eingeschlossen.\p"
	.string "Worauf ich hinaus will: Basierend auf\n"
	.string "der Sichtweise, dass wir bei TEAM\l"
	.string "ROCKET Diebstähle begehen, um unsere\l"
	.string "Projekte zu finanzieren, werdet ihr\l"
	.string "genau das als Grund angeben, wenn ihr\l"
	.string "von ROCKETs oder Leuten außerhalb\l"
	.string "unserer Organisation nach euren\l"
	.string "Missionen gefragt werdet: Eure einzige\l"
	.string "Antwort wird also sein, dass ihr\l"
	.string "Diebstähle begeht - seien es\l"
	.string "Gegenstände oder POKéMON.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_16.2:
    .string "Gut. Kommen wir zum nächsten Punkt {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_17:
	.string "GIOVANNI: ANDRA erinnerst du dich an\n"
	.string "das KRAFTWERK, dass dein Interesse\l"
	.string "geweckt hatte? Von deiner Vermutung,\l"
	.string "dass sich dort ein außergewöhnlich\l"
	.string "mächtiges POKéMON aufhalte?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_18:
.string "ANDRA: Ja, Sir! Ich erinnere mich!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19:
	.string "GIOVANNI: Damals habe ich euch nicht\n"
	.string "alles erzählt. Wir versuchen schon seit\l"
	.string "einiger Zeit, die Aufenthaltsorte der\l"
	.string "drei LEGENDÄREN VÖGEL herauszufinden.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.1:
	.string "Es sind drei der ältesten, mächtigsten\n"
	.string "und heiligsten POKéMON dieser Region.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.2:
	.string "Eines von ihnen, das ELEKTRO-FLUG\n"
	.string "POKéMON ZAPDOS, womöglich das\l"
	.string "gefährlichste und unberechenbarste\l"
	.string "der drei, lebt derzeit im KRAFTWERK.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_19.3:
	.string "Kein Wunder, dass du seine Präsenz\n"
	.string "gespürt hast, ANDRA. Glaube mir, wenn\l"
	.string "ich dir sage, dass seine elektrischen\l"
	.string "Entladungen mit nichts zu vergleichen\l"
	.string "sind, was du je gesehen hast.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20:
	.string "Dann wäre da noch das EIS-FLUG\n"
	.string "POKéMON ARKTOS. Obgleich es als das am\l"
	.string "leichtesten zu bändigende POKéMON\l"
	.string "unter ihnen gilt, ist es nicht weniger\l"
	.string "gefährlich und überaus\l"
	.string "widerstandsfähig.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_20.1:
	.string "Wir haben eines von ihnen ausfindig\n"
	.string "gemacht. Es lebt derzeit in den\l"
	.string "SEESCHAUMINSELN, südwestlich von\l"
	.string "FUCHSANIA CITY.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_21:
.string "BLAU: Eines von ihnen?$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22:
	.string "GIOVANNI: Genau. Wir glauben nicht,\n"
	.string "dass von jedem jeweils nur eines\l"
	.string "existiert. Vielmehr könnte es mehr als\l"
	.string "nur ein ZAPDOS UND ARKTOS geben.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.1:
	.string "Das ändert jedoch nichts an der\n"
	.string "Tatsache, dass sie außergewöhnlich\l"
	.string "selten, mächtig und schwer zu fangende\l"
	.string "POKéMON sind.$"
	
RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.2:
	.string "Das Letzte von ihnen, LAVADOS, wurde\n"
	.string "auf dem Gipfel des GLUTBERGES\l"
	.string "gesichtet, dem symbolträchtigen\l"
	.string "Vulkan von EILAND EINS.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_22.3:
	.string "Es ist zwar nicht so schnell wie ZAPDOS\n"
	.string "und weniger widerstandsfähig als\l"
	.string "ARKTOS, doch besitzt es dafür die\l"
	.string "verheerendsten FEUER-ATTACKEN.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23:
    .string "Eure Missionen lauten wie folgt.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.1:
	.string "ANDRA wird sich mit einem Komitee,\n"
	.string "bestehend aus unseren fähigsten\l"
	.string "Wissenschaftlern und Strategen\l"
	.string "beraten, um einen Plan zur Infiltration\l"
	.string "des KRAFTWERKs auszuarbeiten, ohne die\l"
	.string "Aufmerksamkeit der Behörden zu\l"
	.string "erregen.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.2:
	.string "BLAU wird umgehend nach EILAND EINS\n"
	.string "aufbrechen. Ich habe bereits eine\l"
	.string "Überfahrt in ORANIA CITY organisiert,\l"
	.string "die dich ohne Umwege dorthin bringt.\p"
	.string "Da du ein TURTOK besitzt, bist du am\n"
	.string "besten geeignet, um gegen LAVADOS\l"
	.string "anzutreten. Ich vertraue darauf, dass\l"
	.string "du über die Fähigkeiten verfügst, die\l"
	.string "es braucht, um die Flammen dieses\l"
	.string "lodernden Vogels zu ersticken {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.3:
	.string "Gib ihm das und selbst LAVADOS' Flammen\n"
	.string "werden nicht in der Lage sein, einen\l"
	.string "KANTO-STARTER zu bezwingen.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.4:
	.string "BLAU erhält eine OFFENSIVWESTE!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_23.5:
	.string "BLAU: Danke, SIR!\p"
	.string "Jetzt ist mein TURTOK unbesiegbar!!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24:
	.string "GIOVANNI: Und was dich betrifft,\n"
	.string "{PLAYER} {PAUSE 15}…{PAUSE 15} Du wirst dir ARKTOS auf\l"
	.string "den SEESCHAUMINSELN vornehmen.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.1:
	.string "Die Sicherheitsvorkehrungen dort sind\n"
	.string "vergleichsweise lasch.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.2:
	.string "Ich rate dir, ROUTE 12 südlich\n"
	.string "von LAVANDIA zu nehmen.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_24.3:
	.string "Es mag ein langer Weg sein, aber die\n"
	.string "Reise nach FUCHSANIA CITY und den\l"
	.string "SEESCHAUMINSELN werden dich und dein\l"
	.string "Team noch stärker machen.\p"
	.string "Ich vertraue auf deine Fähigkeiten\n"
	.string "als TRAINER, {PLAYER}.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_25:
	.string "Allerdings dürft ihr die Vögel nicht\n"
	.string "fangen. Eure Mission lautet lediglich,\l"
	.string "sie zu besiegen und ihnen eine Feder zu\l"
	.string "zupfen. Diese Probe wird unserer\l"
	.string "Forschung ausreichen, um diese POKéMON\l"
	.string "in einer kontrollierten Umgebung zu\l"
	.string "klonen, ohne dass ihr Verschwinden\l"
	.string "Verdacht erregt {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_26:
	.string "Ich vertraue darauf, dass ihr euch der\n"
	.string "Tragweite dieser Mission bewusst seid.\p"
	.string "Wir werden die Machtverhältnisse dieser\n"
	.string "Region auf den Kopf stellen und die von\l"
	.string "den Eliten auferlegten Grenzen\l"
	.string "sprengen!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27:
	.string "GIOVANNI: Das wäre alles. Ihr seid\n"
	.string "hiermit autorisiert, den Raum rechts\l"
	.string "von meinem Büro zu betreten.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.1:
	.string "Dort findet ihr entscheidende\n"
	.string "Informationen über die LEGENDÄREN\l"
	.string "VÖGEL und alle anderen uns bekannten\l"
	.string "LEGENDÄREN POKéMON.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_27.2:
	.string "Das ist alles und merkt euch: KANTOs\n"
	.string "Geschichte wird hier und jetzt\l"
	.string "geschrieben - mit jedem Schritt,\l"
	.string "den ihr macht.$"

RocketHideout_8F_Mision_Articuno_Zapdos_Texto_28:
	.string "ANDRA: Ich bin immer noch völlig baff,\n"
	.string "{PLAYER}! Jeder von uns wird sich auf\l"
	.string "die Jagd nach einem LEGENDÄREN\l"
	.string "POKéMON machen!\p"
	.string "Das wird ja immer verrückter, oder?\p"
	.string "Ich werde dich über meine Mission mit\n"
	.string "ZAPDOS auf dem Laufenden halten und\l"
	.string "hoffe, dass du dasselbe tust!$"

RocketHideout_8F_Mision_Articuno_Zapdos_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_2:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_3:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_5:
walk_in_place_down
walk_slow_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_6:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_7:
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_8:
walk_slow_left
walk_in_place_left
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_9:
face_left
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_10:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_12:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_13:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Articuno_Zapdos_Move_14:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.1:
face_up
step_end

RocketHideout_8F_Mision_Silph_move4.1:
walk_down
walk_left
walk_left
walk_left
walk_down
step_end


RocketHideout_8F_Mision_Silph_move4.2:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move5.2:
walk_left
walk_down
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Silph_move5.3:
face_right
step_end

RocketHideout_8F_Mision_Silph_No::
fadescreen 1
delay 20
changeavatar 2
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addmoney 500000 0
givemon SPECIES_AERODACTYL, 35, ITEM_SHARP_BEAK
giveitem ITEM_ULTRA_BALL, 50
removeobject 9
fadescreen 0
setflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BRENDANS_HOUSE_MOM
setvar VAR_UNUSED_0x40DC, 13
setvar VAR_UNUSED_0x40F7, 72
setvar VAR_UNUSED_0x40FD, 1
msgbox RocketHideout_8F_Mision_Silph_No_Texto_1, MSGBOX_AUTOCLOSE
release
end

RocketHideout_8F_Mision_Silph_No_Texto_1:
	.string "-Du wurdest zum OFFIZIER befördert,\n"
	.string "hast 50 ULTRABÄLLE erhalten, ein\l"
	.string "AERODACTYL und dazu noch 500.000¥.\p"
	.string "Deine nächste Mission ist in SAFFRONIA\n"
	.string "CITY bei SILPH. Um deinen Skin-Wechsel\l"
	.string "zu sehen, musst du den Raum verlassen.-$"

RocketHideout_8F_Mision_Silph::
lock
msgbox RocketHideout_8F_Mision_Silph_Yes, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_8F_Mision_Silph_No
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
setflag FLAG_NUEVA_839
addobject 3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move2
waitmovement 0x0
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_2 MSGBOX_DEFAULT
waitse
msgbox RocketHideout_8F_Mision_Silph_text_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_move4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_5 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move5
applymovement 3, RocketHideout_8F_Mision_Silph_move5
waitmovement 0x0
applymovement 3, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.1
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 3, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 3, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
removeobject 3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 9
playse SE_M_STAT_INCREASE
applymovement 9, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 9, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_7 MSGBOX_AUTOCLOSE
playse SE_SHOP
waitse
delay 10
applymovement 9, RocketHideout_8F_Mision_Silph_move5.3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Articuno_Zapdos_Move_9
applymovement 1, RocketHideout_8F_Mision_Silph_move5.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout8F_Mision_Johto_move_12.6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
changeavatar 2
setvar VAR_UNUSED_0x40F7, 802
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7
end

RocketHideout8F_Mision_Johto_move_12.6:
walk_in_place_right
step_end



RocketHideout_8F_Disguise_Player::
delay 10
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_8F_Mision_Silph_text_6 MSGBOX_DEFAULT
waitfanfare
showmoneybox 0, 0
msgbox RocketHideout_8F_Mision_Silph_text_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_9 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_10 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
msgbox RocketHideout_8F_Mision_Silph_text_11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_ULTRA_BALL, 50
waitfanfare
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_12.6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_12 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Silph_text_13 MSGBOX_DEFAULT
givemon SPECIES_AERODACTYL, 35, ITEM_SHARP_BEAK
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_9.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_13.2 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Silph_text_13.3 MSGBOX_AUTOCLOSE
waitfanfare
msgbox RocketHideout_8F_Mision_Silph_text_13.4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_13.5 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_14 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_12.7
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.75
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_15 MSGBOX_AUTOCLOSE
setflag FLAG_NUEVA_790
clearflag FLAG_HIDE_PETALBURG_WOODS_AQUA_GRUNT
call Script_SetGrayscaleTint
warpsilent MAP_ROUTE27, 37, 12
delay 200
release
end

RocketHideout8F_Mision_Johto_move_12.75:
walk_in_place_up
step_end

RocketHideout8F_Mision_Johto_move_12.7:
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_3
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_38 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_39 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_40 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_41 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_42 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_43 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_44 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_45 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_10
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_46.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_47 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_12
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_48 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_48.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_13
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_49 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Silph_text_49.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_50 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Silph_text_51 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_52 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout_8F_Mision_Silph_Despues_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_53 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, RocketHideout_8F_Mision_Silph_move11
waitmovement 0x0
delay 10
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_move12
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Silph_Despues_Move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_54 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Silph_Despues_Move_15
applymovement 9, RocketHideout_8F_Mision_Silph_Despues_Move_13.1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Silph_text_55 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 9
fadescreen 0
setvar VAR_UNUSED_0x40DC, 13
setvar VAR_UNUSED_0x40F7, 72
setvar VAR_UNUSED_0x40FD, 1
release
end

RocketHideout_8F_Mision_Silph_Despues_Move_9.1:
face_down
delay_16
delay_8
face_right
delay_8
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_15:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_14:
walk_slow_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_13:
walk_slow_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_13.1:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_12:
walk_slow_up
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_11:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_10:
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
delay_4
delay_4
delay_4
delay_4
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_slow_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_9:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_8:
walk_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_7:
walk_in_place_slow_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_6:
walk_right
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_5:
face_down
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_4:
walk_in_place_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_3:
face_up
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Silph_Despues_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

RocketHideout_8F_Mision_Silph_Yes:
	.string "Möchtest du die Szene fortsetzen?\p"
	.string "-Wenn du 'JA' drückst und ein Bug\n"
	.string "auftritt, kannst du 'Nein' drücken,\l"
	.string "um die Szene zu überspringen.-$"

RocketHideout_8F_Mision_Silph_text_1:
	.string "GIOVANNI: Ah, {PLAYER}!\p"
	.string "Wir haben dich schon erwartet.\n"
	.string "Komm rein!$"

RocketHideout_8F_Mision_Silph_text_2:
	.string "-{PLAYER} übergibt die Federn\n"
	.string "von ARKTOS und ZAPDOS.-$"

RocketHideout_8F_Mision_Silph_text_3:
	.string "GIOVANNI: Du hast Außergewöhnliches\n"
	.string "geleistet, {PLAYER}! Du hast nicht\l"
	.string "nur deine Mission mit ARKTOS\l"
	.string "erfolgreich abgeschlossen, sondern\l"
	.string "auch eine entscheidende Rolle in der\l"
	.string "bezüglich von ZAPDOS gehabt!\p"
	.string "Zudem hat mich KOGA über deinen Sieg\n"
	.string "gegen BRUNO von den TOP VIER auf\l"
	.string "dem RADWEG unterrichtet!$"

RocketHideout_8F_Mision_Silph_text_4:
	.string "GIOVANNI: Du und ANDRA habt TEAM\n"
	.string "ROCKET mit eurer Leistung und\l"
	.string "Tapferkeit einen unschätzbaren Dienst\l"
	.string "erwiesen! Insbesondere du, ANDRA!\p"
	.string "LAMBDA hat mir berichtet, wie du dich\n"
	.string "den Angriffen von zehn POLIZISTEN zur\l"
	.string "Wehr gesetzt und uns damit genug Zeit\l"
	.string "verschafft hast, euch beide zu retten!$"

RocketHideout_8F_Mision_Silph_text_5:
	.string "Aufgrund dieser außergewöhnlichen\n"
	.string "Leistungen habt ihr beide, ANDRA und\l"
	.string "PLAYER, mein uneingeschränktes\l"
	.string "Vertrauen gewonnen!\p"
	.string "Ihr beide werdet hiermit zu\n"
	.string "TEAM ROCKET OFFIZIEREN befördert!$"

RocketHideout_8F_Mision_Silph_text_6:
	.string "{PLAYER} wurde zum TEAM ROCKET\n"
	.string "OFFIZIER befördert!!$"

RocketHideout_8F_Mision_Silph_text_7:
	.string "GIOVANNI: Das ist deine Belohnung,\n"
	.string "ANDRA! Ich bin gespannt, wie du es in\l"
	.string "dein hervorragendes Team investieren\l"
	.string "wirst.$"

RocketHideout_8F_Mision_Silph_text_8:
	.string "GIOVANNI: Was dich betrifft,\n"
	.string "{PLAYER}. Aufgrund deiner Siege\l"
	.string "gegen zwei der KANTO-VÖGEL und BRUNO {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_9:
.string "{PAUSE 15}…{PAUSE 15} sollst du das hier erhalten.$"

RocketHideout_8F_Mision_Silph_text_10:
	.string "-Du erhältst 500.000¥!!-$"

RocketHideout_8F_Mision_Silph_text_11:
	.string "Ebenfalls solltest du diese hier haben:\n"
	.string "50 HYPERBÄLLE. Ein Trainer von deinem\l"
	.string "Kaliber sollte stets genug Bälle mit\l"
	.string "sich tragen, um POKéMON nach Belieben\l"
	.string "fangen zu können.$"

RocketHideout_8F_Mision_Silph_text_12:
	.string "Abschließend möchte ich dir noch dieses\n"
	.string "POKéMON überreichen. Ein mächtiges,\l"
	.string "einst ausgestorbenes Wesen, welches\l"
	.string "von unseren Wissenschaftlern\l"
	.string "wiederbelebt wurde.\p"
	.string "Ich bin mir sicher, dass es dein\n"
	.string "Team perfekt ergänzen wird.$"

RocketHideout_8F_Mision_Silph_text_13:
.string "DU ERHÄLTST EIN LEVEL 35 AERODACTYL!$"

RocketHideout_8F_Mision_Silph_text_13.1:
	.string "Als ROCKET OFFIZIER habt ihr nun die\n"
	.string "Erlaubnis, den südlichen Bereich der\l"
	.string "UNTERIRDISCHEN BASIS zu betreten.$"

RocketHideout_8F_Mision_Silph_text_13.2:
	.string "Hier, nimm den hier.$"

RocketHideout_8F_Mision_Silph_text_13.3:
	.string "DU ERHÄLTST DEN VIP-SCHLÜSSEL!$"

RocketHideout_8F_Mision_Silph_text_13.4:
	.string "Dort findet ihr einige exklusive\n"
	.string "Ressourcen, mit denen ihr eure\l"
	.string "Teams noch stärker machen könnt.$"

RocketHideout_8F_Mision_Silph_text_13.5:
	.string "Es dient auch als ein Ruhebereich, den\n"
	.string "ihr zusammen mit anderen OFFIZIEREN\l"
	.string "teilt.$"

RocketHideout_8F_Mision_Silph_text_14:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_15:
	.string "Ich habe einst gesagt, dass ich euch\n"
	.string "die Geschichte über den Ursprung TEAM\l"
	.string "ROCKETs erzählen werde und wie es zu\l"
	.string "dem wurde, was es heute ist.\p"
	.string "Mit eurer Erfahrung in dieser Region\n"
	.string "und in Anbetracht dessen, was sich\l"
	.string "noch ereignen wird, ist dieser\l"
	.string "Zeitpunkt nun gekommen.\p"
	.string "Also, hört gut zu.$"

RocketHideout_8F_Mision_Silph_text_16:
	.string "Alles begann vor fünf Jahren mit JOHTOs\n"
	.string "Einmarsch in KANTO. Es … hat uns völlig\l"
	.string "überrumpelt, weil unser ländlicher und\l"
	.string "friedlicher Nachbar keine Armee besaß,\l"
	.string "die unserer gleichkam.$"

RocketHideout_8F_Mision_Silph_text_17:
	.string "Angeführt wurde dieser Angriff von\n"
	.string "SIEGFRIED, dem Enkel eines alten\l"
	.string "DRACHENMEISTERs aus EBENHOLZ CITY. Er\l"
	.string "war ein außergewöhnlicher TRAINER und\l"
	.string "offen gestanden hätte es gar nicht\l"
	.string "anders kommen können. Er ist nämlich\l"
	.string "ein direkter Nachkomme der\l"
	.string "prestigeträchtigsten DRACHENPROFI\l"
	.string "Familie {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_17.1:
	.string "Seit seiner Kindheit war er in der Kunst\n"
	.string "des Trainings des TYPEN ausgebildet\l"
	.string "worden, das viele als das Mächtigste\l"
	.string "und Heiligste betrachten. Er hatte\l"
	.string "seine Fähigkeit zur Schau gestellt, das\l"
	.string "volle Potenzial von DRAGORAN entfalten\l"
	.string "zu können, einem POKéMON, das zu den\l"
	.string "stärksten NICHT-LEGENDÄREN gehört\l"
	.string "und sogar die Macht der LEGENDÄREN\l"
	.string "VÖGEL übertrifft.$"
	
RocketHideout_8F_Mision_Silph_text_17.2:
	.string "SIEGFRIED wurde ein gefürchteter\n"
	.string "TRAINER. Mit nur drei seiner heiligen\l"
	.string "DRACHEN sicherte er sich die Macht in\l"
	.string "JOHTO.$"

RocketHideout_8F_Mision_Silph_text_18:
	.string "Doch das alleine reichte nicht aus, um\n"
	.string "sich KANTO Untertan zu machen.\p"
	.string "Denn auch unsere Region hatte stets\n"
	.string "hervorragende und talentierte TRAINER\l"
	.string "hervorgebracht.$"

RocketHideout_8F_Mision_Silph_text_18.1:
	.string "In jenen Tagen wechselte der Titel des\n"
	.string "CHAMPs ständig zwischen mir und EICH\l"
	.string "hin und her. Wir lieferten uns viele\l"
	.string "erbitterte Kämpfe. So entwickelte sich\l"
	.string "ein Gleichgewicht zwischen uns, denn\l"
	.string "wer auch immer den Titel verlor, nahm die\l"
	.string "Position ein, die heute BRUNO in der TOP\l"
	.string "VIER innehat. Natürlich war ich auf\l"
	.string "BODEN-POKéMON spezialisiert, während\l"
	.string "EICH in der Nutzung von\l"
	.string "NORMALEN-POKéMON brillierte {PAUSE 15}…{PAUSE 15}.$"

RocketHideout_8F_Mision_Silph_text_19:
	.string "SIEGFRIED wusste, dass wir beide das\n"
	.string "größte Hindernis bei seinem Ziel waren,\l"
	.string "KANTO unter seine Kontrolle zu bringen.\p"
	.string "Und das trotz seiner DRACHEN. Und so\n"
	.string "begann er, nach einer Macht zu streben.\p"
	.string "Nach einer {PAUSE 25}…{PAUSE 25} die im Bereich des\n"
	.string "Göttlichen lag.$"

RocketHideout_8F_Mision_Silph_text_20:
	.string "Er erfuhr sogar von den LEGENDÄREN\n"
	.string "POKéMON LUGIA UND HO-OH, deren Stärke\l"
	.string "in KANTO ihresgleichen suchte. Doch\l"
	.string "erwies sich seine Suche als erfolglos.$"

RocketHideout_8F_Mision_Silph_text_21:
	.string "So wandte er seiner Aufmerksamkeit\n"
	.string "einer Legende zu, die mit HO-OH in\l"
	.string "Verbindung stand. Eine, in der HO-OH\l"
	.string "drei POKéMON, die dem Untergang geweiht\l"
	.string "waren, mit seiner Essenz erfüllte und\l"
	.string "sie zu JOHTOs drei LEGENDÄREN BESTIEN\l"
	.string "machte. Dieses Ereignis trug sich vor\l"
	.string "150 Jahren zu und wurde als das -WUNDER\l"
	.string "DES VERBRANNTEN TURMS- bekannt. Nach\l"
	.string "diesem Ereignis zogen sie durch die\l"
	.string "Region, unermüdlich angetrieben von\l"
	.string "jener überwältigenden Macht.$"

RocketHideout_8F_Mision_Silph_text_22:
	.string "Dieses Mal war SIEGFRIEDs Suche nicht\n"
	.string "vergebens. Er und seine DRACHEN jagten\l"
	.string "und trieben schließlich die BESTIEN,\l"
	.string "eine nach der anderen, in die Ecke.\p"
	.string "Es gelang ihm, sie einzufangen.$"

RocketHideout_8F_Mision_Silph_text_23:
	.string "Und der Rest, so sagt man, ist\n"
	.string "Geschichte. Mit den JOHTO BESTIEN\l"
	.string "unter seiner Kontrolle setzte er seine\l"
	.string "Invasion fort.$"

RocketHideout_8F_Mision_Silph_text_23.1:
	.string "Gemeinsam mit einem Strategen, den er\n"
	.string "sich an die Seite geholt hatte, MAJOR\l"
	.string "BOB, zerschlug SIEGFRIED jeglichen\l"
	.string "Widerstand in KANTO und zwang die\l"
	.string "Region mit einer Gewalt in die Knie, die\l"
	.string "ihresgleichen suchte. Abgesehen von\l"
	.string "EICH und mir, wurde jeder TRAINER, der\l"
	.string "sich SIEGFRIED in den Weg stellte, zu\l"
	.string "einer bloßen Nummer in einer Statistik -\l"
	.string "einer Statistik, welche die Praxis der\l"
	.string "Abschlachtung in KANTO einführte.$"

RocketHideout_8F_Mision_Silph_text_24:
	.string "Das war der Moment, in dem EICH und ich\n"
	.string "einen anderen Weg einschlagen mussten.\p"
	.string "Der Moment, indem wir begriffen, dass\n"
	.string "wir mit unseren damaligen Mitteln\l"
	.string "nichts gegen den Zorn dieser Kreaturen\l"
	.string "ausrichten konnten {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_25:
	.string "Zu jener Zeit war ich der\n"
	.string "einflussreichste Geschäftsmann in\l"
	.string "KANTO, während EICH der berühmteste\l"
	.string "Forscher war. Wir vereinten unsere\l"
	.string "Mittel, um einem Mythos nachzujagen {PAUSE 25}…{PAUSE 25}\l"
	.string "Genauer gesagt einem MYTHISCHEN\l"
	.string "POKéMON namens MEW {PAUSE 5}…{PAUSE 25}$"
	
RocketHideout_8F_Mision_Silph_text_25.1:
	.string "FUJI, mit seiner beispiellosen\n"
	.string "Expertise bezüglich MEW, übernahm die\l"
	.string "Leitung unseres Projektes.\l"
	.string "Dank ihm fanden wir FERN-EILAND, wo\p"
	.string "wir MEW fingen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_25.2:
	.string "Doch mit MEW alleine würden wir das\n"
	.string "Ruder nicht herumreißen können. Seine\l"
	.string "Natur hinderte es nämlich daran, sich in\l"
	.string "jegliche Form von Konflikt\l"
	.string "einzumischen. Daher benötigten wir\l"
	.string "eine weitere Komponente.$"

RocketHideout_8F_Mision_Silph_text_25.3:
	.string "Und so riefen wir -PROJEKT MEWTU- ins\n"
	.string "Leben. Es hatte ein Ziel: MEWs\l"
	.string "Kampf-Potenzial für den Krieg voll\l"
	.string "auszuschöpfen.$"

RocketHideout_8F_Mision_Silph_text_25.4:
	.string "Doch das war leichter gesagt als getan.\n"
	.string "Die Ergebnisse waren lediglich\l"
	.string "deformierte Anomalien, die MEW nur vage\l"
	.string "ähnelten. Diese Kopien behielten\l"
	.string "lediglich 48 % seiner ursprünglichen\l"
	.string "STATUSWERTE bei und besaßen nur seine\l"
	.string "Fähigkeit, sich zu verwandeln.\p"
	.string "Damit konnten wir natürlich nichts\n"
	.string "anfangen, also ließen wir diese frühen\l"
	.string "Prototypen frei.$"

RocketHideout_8F_Mision_Silph_text_25.5:
	.string "Ihr kennt sie wahrscheinlich eher unter\n"
	.string "dem Namen DITTO. Vielleicht seid ihr\l"
	.string "einigen Exemplaren bereits begegnet.\p"
	.string "Sie wurden im POKéMON-HAUS und in\n"
	.string "einigen Routen östlich von FUCHSANIA\l"
	.string "gesichtet.$"

RocketHideout_8F_Mision_Silph_text_25.6:
	.string "Unzählige Kombinationen führten\n"
	.string "lediglich zu DITTOs und unsere\l"
	.string "Ressourcen waren nun vollends\l"
	.string "erschöpft. Uns blieb lediglich ein\l"
	.string "Versuch übrig. Wir wussten, dass, wenn\l"
	.string "wir in diesem kritischen Moment\l"
	.string "scheitern würden, KANTO nur eins\l"
	.string "übrig bliebe: zu kapitulieren.$"

RocketHideout_8F_Mision_Silph_text_26:
	.string "Doch entgegen all unserer bisherigen\n"
	.string "Fehlschläge entstand in diesem\l"
	.string "entscheidenden Moment aus MEWs DNA\l"
	.string "ein POKéMON, dessen Existenz die\l"
	.string "Verkörperung des Wortes -Kampf- war.\p"
	.string "Es war der Schlüssel zum Sieg in\n"
	.string "diesem Krieg.$"

RocketHideout_8F_Mision_Silph_text_27:
	.string "Es übertraf die JOHTO BESTIEN in\n"
	.string "Schnelligkeit und Zerstörungskraft so\l"
	.string "sehr, dass wir vermuteten, dass ihm nur\l"
	.string "die verschollenen LEGENDÄREN POKéMON\l"
	.string "LUGIA und HO-OH gefährlich werden\l"
	.string "könnten. Seine mentalen Fähigkeiten\l"
	.string "übertrafen alles, was wir je gesehen\l"
	.string "hatten {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_28:
	.string "Mit MEWTU hätten wir uns gegen\n"
	.string "SIEGFRIED wehren und den gesamten\l"
	.string "Krieg beenden können. Aber es war so\l"
	.string "mächtig, so unglaublich mächtig, dass {PAUSE 25}…{PAUSE 25}\l"
	.string "es sich während des letzten Tests\l"
	.string "unserer Kontrolle entzog.$"

RocketHideout_8F_Mision_Silph_text_29:
	.string "Das Labor auf der ZINNOBERINSEL, in\n"
	.string "dem wir heimlich an unseren\l"
	.string "verzweifelten Plan gearbeitet hatten,\l"
	.string "wurde zerstört und MEWTU floh und\l"
	.string "verschwand für immer {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_30:
	.string "Damit blieb KANTO nichts anderes übrig,\n"
	.string "als sich SIEGFRIED zu ergeben, der sich\l"
	.string "selbst zum CHAMP von sowohl KANTO als\l"
	.string "auch JOHTO ernannte. Nun konnte er\l"
	.string "sich daran machen, alle verbliebenen\l"
	.string "Bedrohungen zu eliminieren {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_31:
	.string "Zu meinem Erstaunen war es EICH, der\n"
	.string "sich SIEGFRIED als Erster anschloss,\l"
	.string "als dieser die Macht übernahm. Er bot\l"
	.string "ihm sein gesamtes Wissen über POKéMON\l"
	.string "an und versprach der neuen Regierung\l"
	.string "seine Treue. Doch das Schlimmste war,\l"
	.string "dass {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Silph_text_32:
	.string "Z{PAUSE 15}…{PAUSE 15} er mich zum Sündenbock machte und\n"
	.string "ihm unsere Pläne verriet, ihn zu\l"
	.string "stürzen. Zwar schwieg er über MEWTU,\l"
	.string "doch bezichtigte er mich, dass ich nie\l"
	.string "aufhören würde, an seinem Untergang zu\l"
	.string "arbeiten.$"

RocketHideout_8F_Mision_Silph_text_33:
	.string "Das hörend, startete SIEGFRIED sofort\n"
	.string "eine gewaltige Hetzkampagne gegen\l"
	.string "mich. Und obwohl ich mein ganzes Sein\l"
	.string "KANTO und seinem Volk gewidmet hatte,\l"
	.string "verschlangen sie seine Verleumdungen -\l"
	.string "seine Lügen, dass er als Retter der\l"
	.string "Region hergekommen sei, um meine\l"
	.string "angeblichen Pläne hinsichtlich eines\l"
	.string "Putsches zu vereiteln, wobei ich in\l"
	.string "Wahrheit nur meinen Titel als CHAMP\l"
	.string "wiedergewinnen wollte!$"

RocketHideout_8F_Mision_Silph_text_34:
	.string "Selbstverständlich sind sich die\n"
	.string "Überlebenden des Krieges über die\l"
	.string "Falschheit dieser Geschichte im Klaren.\p"
	.string "Doch {PAUSE 15}...{PAUSE 15} mit der Einschüchterung des\n"
	.string "Volkes, das sich ihm fügt und einer\l"
	.string "regelrechten Flut an Propaganda, ist es\l"
	.string "SIEGFRIED gelungen die Wahrheit derart\l"
	.string "zu verzerren, dass selbst jene, die den\l"
	.string "Krieg hautnah miterlebt haben, an ihren\l"
	.string "eigenen Erinnerungen zweifeln.$"

RocketHideout_8F_Mision_Silph_text_36:
	.string "Von da an wurde mein Name - einst einer\n"
	.string "der angesehensten in der Region - und\l"
	.string "alles, was mit ihm in Verbindung stand,\l"
	.string "zum Verachtetsten in ganz KANTO.$"

RocketHideout_8F_Mision_Silph_text_37:
	.string "Und wie es so ist, wenn man auf diese\n"
	.string "Weise von einer Macht unterworfen wird,\l"
	.string "reicht einem die Gerechtigkeit alleine\l"
	.string "nicht aus, um sich von ihr zu befreien.\p"
	.string "Daher bleibt nur noch eine einzige\n"
	.string "Möglichkeit übrig und zwar eine noch\l"
	.string "größere Macht anzusammeln, um Gleiches\l"
	.string "mit Gleichem zu vergelten.$"

RocketHideout_8F_Mision_Silph_text_37.1:
	.string "Mit diesem Gedanken hielt ich TEAM\n"
	.string "ROCKET am Leben und es existiert\l"
	.string "bis heute.$"

RocketHideout_8F_Mision_Silph_text_38:
	.string "Das ist der Grund, warum wir so viele\n"
	.string "Forschungsinstitute errichtet haben,\l"
	.string "in die Gebiete der LEGENDÄREN VÖGEL\l"
	.string "eingedrungen sind und auf illegale\l"
	.string "Mittel zurückgegriffen haben, um uns\l"
	.string "das notwendige Kapital zu beschaffen.\p"
	.string "Das neue System macht es einem\n"
	.string "unmöglich, Geld auf legale Weise\l"
	.string "anzusammeln. In so einem Fall wird es\l"
	.string "also schon fast zur moralischen Pflicht\l"
	.string "für jeden, der Prinzipien hat, das\l"
	.string "Gesetz selbst in die Hand zu nehmen.$"

RocketHideout_8F_Mision_Silph_text_39:
	.string "Alles, wonach TEAM ROCKET all die Jahre\n"
	.string "gestrebt hat, war die Macht, SIEGFRIED\l"
	.string "zu stürzen und seiner heimlichen\l"
	.string "Tyrannei ein Ende zu setzen. Und das\l"
	.string "alles unter der Maske eines rüpelhaften\l"
	.string "Narren, der von Banalitäten wie Geld\l"
	.string "oder dem Diebstahl von POKéMON\l"
	.string "besessen ist. Es ist nichts anderes als\l"
	.string "ein Akt der Täuschung, um Schwäche\l"
	.string "vorzugaukeln und somit SIEGFRIED\l"
	.string "daran zu hindern, uns mit seiner\l"
	.string "gesamten Macht zu vernichten.\p"
	.string "Denn in seinen Augen sind wir bislang\n"
	.string "keine ernstzunehmende Bedrohung\l"
	.string "{PAUSE 25}…{PAUSE 25} Noch nicht.$"

RocketHideout_8F_Mision_Silph_text_40:
	.string "Ich denke, es gab keinen passenderen\n"
	.string "Moment, um all dies offenzulegen.\p"
	.string "Denn unsere nächste Mission ist direkt\n"
	.string "mit all dem hier verknüpft und\l"
	.string "entscheidend für TEAM ROCKETs\l"
	.string "Zukunft.$"

RocketHideout_8F_Mision_Silph_text_41:
	.string "Die SILPH COMPANY ist das\n"
	.string "bedeutendste Unternehmen in ganz\l"
	.string "KANTO. Ihr Einfluss reicht bis zu den\l"
	.string "SEVII EILANDEN. Sie stellt sämtliche\l"
	.string "TRAINER-Artikel in KANTO her und hat\l"
	.string "nun eine bahnbrechende Neuerung\l"
	.string "enthüllt: Eine Revolution im Fangen\l"
	.string "von POKéMON.$"

RocketHideout_8F_Mision_Silph_text_42:
	.string "Der MEISTERBALL soll in der Lage sein,\n"
	.string "jedes POKéMON unter jeglichen\l"
	.string "Umständen fangen zu können.\p"
	.string "Quasi ein unfehlbarer POKÉBALL.\p"
	.string "Der Traum eines jeden TRAINERs,\n"
	.string "insbesondere der Sammler.$"

RocketHideout_8F_Mision_Silph_text_43:
	.string "Ein solches Item wäre entscheidend, um\n"
	.string "ein POKéMON wie MEWTU wieder\l"
	.string "einzufangen und das vor allem jetzt, wo\l"
	.string "SIEGFRIED noch nichts von seiner\l"
	.string "Existenz weiß. Wir haben ein paar\l"
	.string "Vermutungen bezüglich seines aktuellen\l"
	.string "Aufenthaltsortes, nachdem es von der\l"
	.string "ZINNOBERINSEL geflohen ist {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_44:
	.string "Unser Plan lautet, einen Angriff auf\n"
	.string "SILPH zu starten. Unser primäres Ziel\l"
	.string "wird es sein, den MEISTERBALL in die\l"
	.string "Hände zu kriegen, doch haben wir noch\l"
	.string "eine weitere Absicht: und zwar alle zu\l"
	.string "täuschen. Der Angriff muss so\l"
	.string "inszeniert werden, dass alle glauben,\l"
	.string "dass TEAM ROCKET endgültig vernichtet\l"
	.string "sei. Wir werden für die breite\l"
	.string "Öffentlichkeit zu Geistern, während wir\l"
	.string "in Wahrheit unseren Höhepunkt\l"
	.string "erreichen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_45:
	.string "Ich für meinen Teil werde dem\n"
	.string "PRÄSIDENTEN von SILPH ein Angebot\l"
	.string "unterbreiten, bei dem er gar nicht\l"
	.string "anders kann, als auf unsere Seite zu\l"
	.string "wechseln. Ich bin mir relativ sicher,\l"
	.string "dass er mit den neuen Auflagen und\l"
	.string "Abgaben, die SIEGFRIEDs Regierung auf\l"
	.string "seine Produkte verhängt hat, alles\l"
	.string "andere als zufrieden ist.$"

RocketHideout_8F_Mision_Silph_text_46:
.string "ANDRA!\p"
	.string "{PLAYER}!\p"
	.string "Eure Mission bei SILPH\n"
	.string "lautet wie folgt:$"

RocketHideout_8F_Mision_Silph_text_46.1:
	.string "Wir werden das Gebäude mit einer großen\n"
	.string "Menge unserer Leute stürmen, während\l"
	.string "ihr zwei das Sicherheitsteam des\l"
	.string "PRÄSIDENTEN außer Gefecht setzt.\p"
	.string "Sobald ihr das erledigt habt, werde ich\n"
	.string "die Gelegenheit haben, in Ruhe mit ihm\l"
	.string "zu sprechen und ihm die Lage zu\l"
	.string "erklären. Ihr müsst mir die notwendige\l"
	.string "Zeit verschaffen, damit ich ihn von\l"
	.string "unserer Sache überzeugen kann!$"

RocketHideout_8F_Mision_Silph_text_46.2:
	.string "Haltet jeden auf, der sich Zugang zu\n"
	.string "uns verschaffen will! Seien es weitere\l"
	.string "Sicherheitskräfte oder etwaige\l"
	.string "Trainer! Mein Gespräch mit dem\l"
	.string "PRÄSIDENTEN muss absolut vertraulich\l"
	.string "bleiben! Habt ihr das verstanden?$"

RocketHideout_8F_Mision_Silph_text_47:
	.string "ANDRA. Nicht einmal SIEGFRIED\n"
	.string "höchstpersönlich wird an uns\l"
	.string "vorbeikommen, SIR!$"

RocketHideout_8F_Mision_Silph_text_48:
	.string "GIOVANNI: Sobald ich den PRÄSIDENTEN\n"
	.string "überzeugt habe, werden wir den\l"
	.string "MEISTERBALL in unserem Besitz haben\l"
	.string "und noch wichtiger:\l"
	.string "die Unterstützung von SILPH.$"

RocketHideout_8F_Mision_Silph_text_48.1:
	.string "Von da an wird uns nichts und niemand\n"
	.string "mehr aufhalten können! Wenn ich das\l"
	.string "Zeichen gebe, werdet ihr zusammen mit\l"
	.string "unseren anderen HOCHRANGIGEN\l"
	.string "Mitgliedern das Gebäude verlassen,\l"
	.string "während unsere weniger fähigen Leute\l"
	.string "und ich zurückbleiben.\p"
	.string "Auf diese Weise wird es ein Leichtes\n"
	.string "sein, zu mir zu gelangen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_49:
	.string "Wenn alles nach Plan läuft, wird\n"
	.string "dieser lästige ROT auftauchen.$"

RocketHideout_8F_Mision_Silph_text_49.1:
	.string "Es gibt kaum etwas Wirkungsvolleres,\n"
	.string "als eine Niederlage gegen diese\l"
	.string "ziellose, hohle Marionette von einem\l"
	.string "TRAINER. Ich werde mich in der Rolle als\l"
	.string "ROTs Feind besiegen lassen und dann\l"
	.string "verschwinden, bevor unsere Aktion die\l"
	.string "Runde macht und die Polizei auftaucht {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Silph_text_50:
	.string "So werden wir drei Fliegen mit einer\n"
	.string "Klappe schlagen: Wir werden den\l"
	.string "MEISTERBALL besitzen, SILPH als\l"
	.string "Verbündeten gewinnen und die\l"
	.string "Öffentlichkeit wird denken, dass TEAM\l"
	.string "ROCKET endgültig erledigt sei.$"

RocketHideout_8F_Mision_Silph_text_51:
	.string "LANCE: Ein brillanter Plan, Sir!$"

RocketHideout_8F_Mision_Silph_text_52:
	.string "GIOVANNI: Und er ist bereits in vollem\n"
	.string "Gange. In diesem Moment dürften die\l"
	.string "Kontrollpunkte an den Grenzen von\l"
	.string "SAFFRONIA CITY bereits eingenommen\l"
	.string "worden sein, sodass wir freie Bahn\l"
	.string "zur Stadt haben. Ihr solltet euch\l"
	.string "bereitmachen. LANCE, du wirst die\l"
	.string "Einheiten leiten, die uns den restlichen\l"
	.string "Weg zu SILPH sichern.$"

RocketHideout_8F_Mision_Silph_text_53:
.string "LANCE: Ja, Sir!$"

RocketHideout_8F_Mision_Silph_text_54:
	.string "GIOVANNI: ANDRA, {PLAYER}. Ich\n"
	.string "vertraue auf eure Fähigkeiten als\l"
	.string "TRAINER. SAFFRONIA CITY und SILPH\l"
	.string "werden euch eine weitere Gelegenheit\l"
	.string "bieten, euch zu beweisen.\p"
	.string "Es heißt, ihre Sicherheitsvorkehrungen\n"
	.string "seien unüberwindbar.\p"
	.string "Beweist, dass dem nicht so ist.$"

RocketHideout_8F_Mision_Silph_text_55:
	.string "ANDRA: Wir werden Sie nicht\n"
	.string "enttäuschen, BOSS.$"

RocketHideout_8F_Mision_Silph_move1:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move2:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Silph_move3:
face_left
step_end

RocketHideout_8F_Mision_Silph_move4:
face_down
step_end

RocketHideout_8F_Mision_Silph_move5:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Silph_move6:
walk_slow_right
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move7:
walk_slow_left
walk_in_place_down
step_end

RocketHideout_8F_Mision_Silph_move8:
face_up
step_end

RocketHideout_8F_Mision_Silph_move9:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Silph_move10:
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move11:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Silph_move12:
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Silph_move13:
walk_down
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios::
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
removeobject 2
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_8
addobject 9
addobject 4
playse SE_EXIT
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_3
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_4
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_2 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_4 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6 MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
addobject 2
setobjectxy 2, 9, 15
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9.3
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.3 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
delay 5
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.6 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_6.7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_7 MSGBOX_AUTOCLOSE
playse SE_EXIT
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_9
delay 5
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_9.7
delay 5
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9.6
delay 5
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9.7
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9.7
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
addobject 5
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_9 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Gimnasios_texto_11 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_8F_Mision_Gimnasios_texto_13 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_14 MSGBOX_AUTOCLOSE
applymovement 5, RocketHideout_8F_Mision_Gimnasios_move_12
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 5
playse SE_EXIT
waitse
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_18 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_19 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_13
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_22 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23 MSGBOX_AUTOCLOSE
playse MUS_RG_OBTAIN_KEY_ITEM
addobject ITEM_TRI_PASS
msgbox RocketHideout_8F_Mision_Gimnasios_texto_23.1 MSGBOX_DEFAULT
waitse
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_26 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_27 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_28 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_29 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
playse MUS_RG_VICTORY_GYM_LEADER
msgbox RocketHideout_8F_Mision_Gimnasios_texto_30 MSGBOX_DEFAULT
delay 110
playse 560
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_9
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_31 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_32 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_33 MSGBOX_AUTOCLOSE
applymovement 4, RocketHideout_8F_Mision_Gimnasios_move_15
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_8
removeobject 4
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_34 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_5
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_35 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_14
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
applymovement 9, RocketHideout_8F_Mision_Gimnasios_move_16
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_5.4
applymovement 2, RocketHideout_8F_Mision_Gimnasios_move_5.3
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 9
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_17
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Gimnasios_move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_36.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Gimnasios_move_5.2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Gimnasios_texto_37.1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 79
setvar VAR_ROUTE111_STATE, 1
setvar VAR_ROUTE107_STATE, 1
setvar VAR_ROUTE108_STATE, 1
setvar VAR_ROUTE109_STATE, 1
setvar VAR_ROUTE106_STATE, 1
setvar VAR_ROUTE105_STATE, 1
release
end

RocketHideout_8F_Mision_Gimnasios_move_5.3:
delay_8
walk_right
walk_right
walk_right
walk_up
walk_up
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.4:
walk_down
face_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.1:
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_5.2:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.6:
emote_exclamation_mark
delay_8
face_down
delay_16
delay_8
face_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.7:
emote_exclamation_mark
delay_8
face_down
delay_16
delay_8
face_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.3:
emote_exclamation_mark
face_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.2:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_texto_1:
	.string "BLAU: Du bist also auch hier, was?\p"
	.string "GIOVANNI hat mich und ANDRA ebenfalls\n"
	.string "herbestellt. Es ist hoffentlich wichtig,\l"
	.string "denn ich brauche nur noch einen\l"
	.string "einzigen ORDEN, um meine acht\l"
	.string "vollzumachen.$"

RocketHideout_8F_Mision_Gimnasios_texto_2:
	.string "GIOVANNI: Also gut. ANDRA, {PLAYER},\n"
	.string "BLAU. Wie geplant, ist der MEISTERBALL\l"
	.string "nun in unserem Besitz. Damit können wir\l"
	.string "jedes POKéMON fangen, einschließlich\l"
	.string "MEWTU {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Gimnasios_texto_3:
	.string "Darüber hinaus ist es uns durch die\n"
	.string "Federn von LAVADOS, ZAPDOS UND ARKTOS,\l"
	.string "die ihr gesammelt habt, gelungen, diese\l"
	.string "legendären POKéMON zu klonen!$"

RocketHideout_8F_Mision_Gimnasios_texto_4:
	.string "Noch vielversprechender ist, dass FUJI\n"
	.string "mit einem Wissenschaftler gesprochen\l"
	.string "hat, der einst am MEWTU Projekt\l"
	.string "mitgearbeitet hat. Die Rede ist von\l"
	.string "PYRO. PYRO hat unermüdlich daran\l"
	.string "gearbeitet, MEWTU zu lokalisieren und\l"
	.string "glaubt zu wissen, wo es sich aktuell\l"
	.string "aufhält!$"

RocketHideout_8F_Mision_Gimnasios_texto_5:
	.string "BLAU: Tut mir leid, GIOVANNI. Aber,\n"
	.string "MEWTU? Ich habe noch nie von diesem\l"
	.string "POKéMON gehört.$"

RocketHideout_8F_Mision_Gimnasios_texto_6:
	.string "GIOVANNI: Es wird sich noch die\n"
	.string "Gelegenheit ergeben, dir alles zu\l"
	.string "erzählen, BLAU. Was du für den Moment\l"
	.string "wissen musst, ist, dass, sobald wir\l"
	.string "seinen Standort kennen und es\l"
	.string "gefangen haben, wir alles haben werden,\l"
	.string "was wir brauchen, um die POKéMON LIGA\l"
	.string "zu stürmen und SIEGFRIED ein für alle\l"
	.string "mal das Handwerk zu legen.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.1:
	.string "????: Sie wissen es.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.2:
	.string "GIOVANNI: LANCE, was ist passiert?$"

RocketHideout_8F_Mision_Gimnasios_texto_6.3:
	.string "Ich war bei FUJI, um mit ihm zu sprechen\n"
	.string "- wie Sie es befohlen haben, Sir.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.4:
	.string "Jemand hat uns verraten. Die KANTO\n"
	.string "POLIZEI ist in LAVANDIA aufgetaucht.\p"
	.string "Ich konnte zwar dank TELEPORT fliehen,\n"
	.string "aber FUJI hatte weniger Glück.\p"
	.string "Sie haben ihn festgenommen.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.5:
	.string "GIOVANNI: Das {PAUSE 25}…{PAUSE 25} kann nicht {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_6.6:
	.string "Das ist noch nicht alles. Sie wissen\n"
	.string "auch über all unsere Projekte bezüglich\l"
	.string "der LEGENDÄREN KANTO VÖGEL Bescheid.$"

RocketHideout_8F_Mision_Gimnasios_texto_6.7:
	.string "Jemand muss sie über unsere neuesten\n"
	.string "Fortschritte in der Gentechnik\l"
	.string "informiert haben - das wir nun in der\l"
	.string "Lage sind, die VÖGEL zu klonen.$"

RocketHideout_8F_Mision_Gimnasios_texto_7:
	.string "PYRO! Er hat uns verraten! Es kann\n"
	.string "keine andere Erklärung geben! Er\l"
	.string "arbeitet für SIEGFRIED oder noch\l"
	.string "schlimmer: für EICH!$"

RocketHideout_8F_Mision_Gimnasios_texto_8:
	.string "HOCHRANGIGER RÜPEL: Verzeihen Sie\n"
	.string "bitte die Störung, Sir, aber es ist\l"
	.string "dringend. Die Liga-Leitung hat gerade\l"
	.string "eine Erklärung veröffentlicht, in der\l"
	.string "sie die Anforderungen für die Teilnahme\l"
	.string "an der POKéMON LIGA erneuert haben.\p"
	.string "Ich zitiere:$"

RocketHideout_8F_Mision_Gimnasios_texto_9:
	.string "-Neben der Bedingung, alle acht Orden\n"
	.string "zu besitzen, ist der Einsatz der drei\l"
	.string "LEGENDÄREN VÖGEL strengtens verboten.\p"
	.string "Da nur drei von ihnen in der Region\n"
	.string "gesichtet wurden und diese unter dem\l"
	.string "Schutz des Staates stehen, wird jeder\l"
	.string "TRAINER, der eines dieser POKéMON\l"
	.string "besitzt, wegen illegaler Handlungen\l"
	.string "verhaftet, die von uns keinesfalls\l"
	.string "toleriert werden.-$"

RocketHideout_8F_Mision_Gimnasios_texto_10:
	.string "GIOVANNI: Verstehe {PAUSE 15}…{PAUSE} Diejenigen, die\n"
	.string "die Gesetze machen, können sie sets so\l"
	.string "zurechtbiegen, wie es ihnen passt.$"

RocketHideout_8F_Mision_Gimnasios_texto_11:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_12:
	.string "GIOVANNI: -wegen illegaler Handlungen\n"
	.string "verhaftet, die von uns keinesfalls\l"
	.string "toleriert werden.- Und das kommt\l"
	.string "ausgerechnet von denen …$"

RocketHideout_8F_Mision_Gimnasios_texto_13:
	.string "GIOVANNI: Danke. Du kannst gehen.$"

RocketHideout_8F_Mision_Gimnasios_texto_14:
.string "HOCHRANGIGER RÜPEL: Ja, Sir!\p"
	.string "Offiziere {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_15:
	.string "ANDRA: Dieser verdammte PYRO! Er hat\n"
	.string "uns verraten! Und dabei war sich FUJI\l"
	.string "sicher, dass er auf unserer Seite sei!\p"
	.string "Was würde passieren, wenn SIEGFRIED\n"
	.string "von MEWTU erfährt?$"

RocketHideout_8F_Mision_Gimnasios_texto_16:
	.string "GIOVANNI: Nein, ANDRA. Wir können\n"
	.string "darauf vertrauen, dass er, wie schon\l"
	.string "EICH, die Sache für sich behält.\p"
	.string "SIEGFRIED mit MEWTU in seinem Besitz\n"
	.string "wäre die größte Katastrophe in der\l"
	.string "Geschichte dieser Region.$"

RocketHideout_8F_Mision_Gimnasios_texto_17:
	.string "Jetzt, wo wir am Rande des Abgrunds\n"
	.string "stehen, bleibt uns nichts anderes\l"
	.string "übrig, als die Sache auf die altmodische\l"
	.string "Weise zu klären: die LIGA ohne\l"
	.string "LEGENDÄRE POKéMON herauszufordern. {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_18:
	.string "ANDRA, {PLAYER}. Ihr habt euch als\n"
	.string "außergewöhnliche Trainer erwiesen.\p"
	.string "{PLAYER}s Sieg über BRUNO beweist,\n"
	.string "dass ihr es mit den Besten aufnehmen\l"
	.string "könnt {PAUSE 15}…{PAUSE 15}$"

RocketHideout_8F_Mision_Gimnasios_texto_19:
	.string "Ihr beide werdet zusammen mit BLAU zu\n"
	.string "Herausforderern, die den Champ-Titel\l"
	.string "der POKéMON LIGA erlangen können.$"

RocketHideout_8F_Mision_Gimnasios_texto_20:
	.string "Ihr werdet alle acht ORDEN sammeln und\n"
	.string "zum INDIGO PLATEAU gehen. Ihr werdet\l"
	.string "das weder durch Schummeln noch\l"
	.string "Abkürzungen wie die Nutzung von\l"
	.string "LEGENDÄREN POKéMON erreichen.\p"
	.string "Stattdessen nutzt ihr die POKéMON, die\n"
	.string "euch schon seit eurem Anfang bei TEAM\l"
	.string "ROCKET tatkräftig zur Seite gestanden\l"
	.string "haben.$"

RocketHideout_8F_Mision_Gimnasios_texto_21:
	.string "ANDRA: Aber Sir. Wurde es ROCKETs nicht\n"
	.string "verboten, die ARENALEITER\l"
	.string "herauszufordern und somit ORDEN\l"
	.string "zu sammeln?$"

RocketHideout_8F_Mision_Gimnasios_texto_22:
	.string "GIOVANNI: Das stimmt, ANDRA. Euer\n"
	.string "Status als ROCKETs verhindert, dass ihr\l"
	.string "eine TRAINER-LIZENZ erhaltet.\p"
	.string "Und genau diese braucht ihr, um\n"
	.string "ARENALEITER herausfordern zu können.\l"
	.string "Es wird stets davon ausgegangen, dass\l"
	.string "ROCKETs keine Lizenzen besitzen und\l"
	.string "dementsprechend werdet ihr immer\l"
	.string "sofort aus den Arenen rausgeworfen:\l"
	.string "Also nicht, weil ihr ROCKETs seid,\l"
	.string "sondern weil ihr keine LIZENZ habt.$"

RocketHideout_8F_Mision_Gimnasios_texto_23:
	.string "Also nehmt die hier. Diese sind völlig\n"
	.string "legal. Ihr werdet nun keine Probleme\l"
	.string "mehr haben, eine ARENA zu betreten.$"

RocketHideout_8F_Mision_Gimnasios_texto_23.1:
	.string "DU ERHÄLTST EINE TRAINER-LIZENZ\n"
	.string "VON GIOVANNI!$"

RocketHideout_8F_Mision_Gimnasios_texto_24:
	.string "Natürlich könnte euch trotzdem der\n"
	.string "Zugang verwehrt werden, weil ihr\l"
	.string "ROCKETs seid. Daher werdet ihr das\l"
	.string "Tragen eurer TEAM ROCKET Uniform damit\l"
	.string "erklären, dass ihr es aus Jux tut - als\l"
	.string "eine sarkastische Anspielung unseres\l"
	.string "vermeintlichen Scheiterns beim Angriff\l"
	.string "auf SILPH.$"

RocketHideout_8F_Mision_Gimnasios_texto_25:
	.string "ANDRA: Aber sie werden doch merken,\n"
	.string "dass etwas nicht stimmt. Zumal uns\l"
	.string "MAJOR BOB schon mehrmals gesehen hat.$"

RocketHideout_8F_Mision_Gimnasios_texto_26:
	.string "GIOVANNI: MAJOR BOB ist fest davon\n"
	.string "überzeugt, dass niemand eine Chance\l"
	.string "gegen SIEGFRIED hat. Außerdem wird ihn\l"
	.string "sein Ehrenkodex daran hindern, eure\l"
	.string "Herausforderungen abzulehnen.$"

RocketHideout_8F_Mision_Gimnasios_texto_27:
	.string "BLAU, weißt du zufällig, wie viele\n"
	.string "ORDEN ROT aktuell besitzt?$"

RocketHideout_8F_Mision_Gimnasios_texto_28:
	.string "BLAU: Ich denke sechs. Nach der ganzen\n"
	.string "SILPH Geschichte hat er direkt die\l"
	.string "ARENA in SAFFRONIA herausgefordert.\p"
	.string "Er müsste mittlerweile auf dem Weg\n"
	.string "zur ZINNOBERINSEL sein.$"

RocketHideout_8F_Mision_Gimnasios_texto_29:
	.string "GIOVANNI: Gut. Wir haben keine Zeit zu\n"
	.string "verlieren. Eure oberste Priorität ist\n"
	.string "nun, so schnell wie möglich die ersten\l"
	.string "sieben ORDEN zu sammeln. Und was dich\l"
	.string "betrifft, BLAU. Du brauchst nur noch\l"
	.string "einen. Glücklicherweise kann ich dir\l"
	.string "dabei helfen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_8F_Mision_Gimnasios_texto_30:
	.string "-GIOVANNI ÜBERREICHT BLAU DEN ERDORDEN-$"

RocketHideout_8F_Mision_Gimnasios_texto_31:
	.string "BLAU: Du bist der achte ARENALEITER?!$"

RocketHideout_8F_Mision_Gimnasios_texto_32:
	.string "GIOVANNI: Manchmal ja, manchmal nein.\p"
	.string "Je nachdem, wie es mir passt. Und gerade\n"
	.string "passt es mir.$"

RocketHideout_8F_Mision_Gimnasios_texto_33:
	.string "BLAU: Alles klar. Wenn ihr mich\n"
	.string "entschuldigen würdet. Ich habe noch\l"
	.string "viel Arbeit vor mir, bevor ich die\l"
	.string "POKéMON LIGA herausfordere. Ich werde\l"
	.string "dich nicht enttäuschen, GIOVANNI.$"

RocketHideout_8F_Mision_Gimnasios_texto_34:
	.string "ANDRA, {PLAYER}. Zeigt, wie weit es ein\n"
	.string "entschlossener und disziplinierter\l"
	.string "ROCKET mit seinen POKéMON bringen\l"
	.string "kann! Besiegt alle ARENALEITER in\l"
	.string "KANTO! Dann werde ich euch den letzten\l"
	.string "ORDEN übergeben, wie ich gerade bei\l"
	.string "BLAU getan habe.$"

RocketHideout_8F_Mision_Gimnasios_texto_35:
	.string "ANDRA: Ich halte es nicht länger aus!\p"
	.string "Ich werde alle ARENALEITER dem\n"
	.string "Erdboden gleichmachen! Endlich kann\l"
	.string "ich mir diese Hochstapler vorknöpfen,\l"
	.string "die sich für die Elite KANTOs halten!$"

RocketHideout_8F_Mision_Gimnasios_texto_36:
	.string "GIOVANNI: Nur ein wahrer Trainer\n"
	.string "reagiert so! Sie sieht die\l"
	.string "Einschränkungen der LIGA nicht als\l"
	.string "Hindernis, sondern als Gelegenheit,\l"
	.string "noch stärker zu werden.$"

RocketHideout_8F_Mision_Gimnasios_texto_36.1:
	.string "Ich hoffe, du stellst dich dieser\n"
	.string "Herausforderung mit demselben Eifer,\l"
	.string "{PLAYER}! Sei vorsichtig: Die\l"
	.string "ARENALEITER passen ihre Stärke an die\l"
	.string "Herausforderer an. BLAU und ROT stehen\l"
	.string "unter EICHs Gunst und genießen\l"
	.string "dementsprechend gewisse Privilegien.$"

RocketHideout_8F_Mision_Gimnasios_texto_36.2:
	.string "Unter anderem dürfen sie an der\n"
	.string "POKéMON LIGA ohne LIZENZ teilnehmen\l"
	.string "und kämpfen dabei gegen schwächere\l"
	.string "Teams der ARENALEITER. Aber für ANDRA\l"
	.string "und dich will ich das nicht.$"

RocketHideout_8F_Mision_Gimnasios_texto_37:
	.string "Seit du dein erstes POKéMON erhalten\n"
	.string "hast, hast du dich vielen\l"
	.string "Herausforderungen gestellt. Alles, was\l"
	.string "du besitzt, hast du dir hart erarbeitet.\p"
	.string "Du bist dir mittlerweile über die wahre\n"
	.string "Natur dieser Region im Klaren und hast\l"
	.string "gelernt, dich ihr anzupassen.$"

RocketHideout_8F_Mision_Gimnasios_texto_37.1:
	.string "Das verleiht dir einen Vorteil und eine\n"
	.string "Stärke, die man sich mit Geld nicht\l"
	.string "kaufen kann.\p"
	.string "Geh und zeig es ihnen allen!$"

RocketHideout_8F_Mision_Gimnasios_move_1:
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_2:
emote_exclamation_mark
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_3:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_5:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_6:
face_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_7:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_8:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout_8F_Mision_Gimnasios_move_9:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Gimnasios_move_10:
walk_slow_left
walk_in_place_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_11:
walk_right
walk_in_place_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_13:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Gimnasios_move_14:
face_left
step_end

RocketHideout_8F_Mision_Gimnasios_move_15:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_16:
walk_down
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideout_8F_Mision_Gimnasios_move_17:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_1.4:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Subterraneo_Silph::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_1 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Subterraneo_Silph_Move_1.4
waitmovement 0x0
waitse
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_2.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_5.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_6 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_8.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_10.2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_15 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Subterraneo_Silph_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Subterraneo_Silph_Text_17 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_85
delay 15
setvar VAR_UNUSED_0x40F7, 102
release
end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4.1:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4.2:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Text_1:
.string "GIOVANNI: Oh, {PLAYER}!\p"
.string "You look a bit changed!\p"
	.string "I wouldn't say you've exactly been\n"
	.string "taking it easy on your vacation.\p"
	.string "Am I wrong?$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2:
	.string "First and foremost, I must give you\n"
	.string "some unfortunate news: OAK has\l"
	.string "completely vanished from the map.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2.1:
	.string "After the POKÉMON LEAGUE, we agreed to\n"
	.string "confine him to his laboratory in PALLET\l"
	.string "TOWN, but he has found a way to\l"
	.string "disappear.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_2.2:
	.string "The thing is{PAUSE 15}…{PAUSE 15} we suspect he might be\n"
	.string "scheming something with BLAINE, the\l"
	.string "other traitor who, curiously, has also\l"
	.string "vanished.\p"
	.string "Meanwhile, FUJI is still under arrest…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_3:
	.string "But I haven't brought back my top\n"
	.string "ROCKET to talk about OAK. The task I'm\l"
	.string "about to assign you is much more\l"
	.string "transcendental for the history of\l"
	.string "our region. Listen…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4:
	.string "For as long as anyone can remember,\n"
	.string "KANTO citizens with open minds, those\l"
	.string "who've looked beyond the original 150,\l"
	.string "who've known about other regions, like\l"
	.string "JOHTO or HOENN, asked about{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4.1:
	.string "Why isn't here, in KANTO, a POKÉMON with\n"
	.string "the characteristics of HO-OH, GROUDON,\l"
	.string "or RAYQUAZA? Each region has, at least,\l"
	.string "one 'MAJOR LEGENDARY', except for\l"
	.string "KANTO, which is quite peculiar…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_4.2:
	.string "Each region has, at least, one\n"
	.string "'MAJOR LEGENDARY', except for\l"
	.string "KANTO, which is quite peculiar…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5:
	.string "Several theories emerged trying to\n"
	.string "answer this question. Some scientists\l"
	.string "and researchers claimed it was MEW.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_5.1:
	.string "However, we can't group MEW with\n"
	.string "RAYQUAZA or LUGIA. It aligns more with\l"
	.string "the profile of JIRACHI in HOENN or…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_6:
.string "PROTON: {PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_7:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}CELEBI in JOHTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8:
	.string "Some argued that KANTO just didn't\n"
	.string "have one single MAJOR LEGENDARY.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.1:
	.string "Then, DRAGONITE and MEW would be the\n"
	.string "top power here.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.2:
	.string "After all, KANTO's history might not\n"
	.string "have provided the conditions for a\l"
	.string "LUGIA or HO-OH to develop here. In that\l"
	.string "sense, it might be a matter of mere\l"
	.string "chance, natural selection.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_8.3:
	.string "If this were the case, it would be a\n"
	.string "curious coincidence, but{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_9:
	.string "One last group of researchers points\n"
	.string "out that such a POKÉMON would, indeed,\l"
	.string "exist; the only reason we don't know\l"
	.string "about it's precisely that: we haven't\l"
	.string "found it yet.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10:
	.string "This last theory breaks down\n"
	.string "into two others.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_10.1:
	.string "One says we don't know about this\n"
	.string "POKÉMON because of its elusive nature.$"
	
RocketHideout8F_Mision_Subterraneo_Silph_Text_10.2:
	.string "The other claims its power is so great\n"
	.string "that it exceeds even the 'MAJOR\l"
	.string "LEGENDARIES' ones, so powerful that it\l"
	.string "would be able to become invisible to\l"
	.string "human eyes.\p"
	.string "Maybe it's both, or none{PAUSE 20}…{PAUSE 20} I don't know.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_11:
.string "GIOVANNI: {PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12:
    .string "This topic has always intrigued me,\n"
	.string "{PLAYER}. The existence of such a\l"
	.string "POKÉMON could reshape our perception\l"
	.string "of KANTO.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_12.1:
	.string "Due to our main goal: saving KANTO\n"
	.string "from LANCE, and the lack of information\l"
	.string "about this, we paused the research.\p"
	.string "But now it's time to kickstart this\n"
	.string "investigation.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_13:
	.string "Since SILPH became our ally, I've had\n"
	.string "the opportunity to meet several times\l"
	.string "with the PRESIDENT.\p"
	.string "The thing is, in our last meeting,\n"
	.string "this topic came up, and…$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_14:
	.string "SILPH actually has a huge private\n"
	.string "library in their lower floors, off-limits\l"
	.string "to the public. SILPH isn't just KANTO's\l"
	.string "most successful company, but also one\l"
	.string "of the oldest. In that private library,\l"
	.string "there are some documents talking about\l"
	.string "the existence of a POKÉMON that could\l"
	.string "fit with what we're looking for.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_15:
	.string "Your mission is quite simple,\n"
	.string "{PLAYER}: you just have to return to\l"
	.string "SILPH and speak with the receptionist\l"
	.string "to get access to the lower floors.\p"
	.string "Thus you could reach those potentially\n"
	.string "revealing documents.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_16:
	.string "It's not just me; SILPH PRESIDENT was\n"
	.string "excited about your return to SILPH.\l"
	.string "In that sense, you won't encounter\l"
	.string "any opposition.$"

RocketHideout8F_Mision_Subterraneo_Silph_Text_17:
	.string "GIOVANNI: Alright, {PLAYER},\n"
	.string "remember, the SILPH receptionist will\l"
	.string "get you into the lower floors.\l"
	.string "Send my regards to the PRESIDENT for me,\l"
	.string "if you get to see him.\p"
	.string "That's all!$"

RocketHideout8F_Mision_Subterraneo_Silph_Move_1:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_3:
face_up
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_4:
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Subterraneo_Silph_Move_5:
walk_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 50
fadescreen 0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5
waitmovement 0x0
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_676
setflag FLAG_HOENN_675
clearflag FLAG_HOENN_70
clearflag FLAG_HOENN_71
setflag FLAG_HIDE_VICTORY_ROAD_ENTRANCE_WALLY
setflag FLAG_HIDE_PETALBURG_GYM_WALLYS_DAD
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
clearflag FLAG_HOENN_81
clearflag FLAG_HOENN_82
setvar VAR_UNUSED_0x40F8, 11
setvar VAR_UNUSED_0x40F7, 107
release
end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3.1:
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_1:
	.string "GIOVANNI: And? What information\n"
	.string "did you uncover, {PLAYER}?$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_2:
.string "Mmm{PAUSE 25}…{PAUSE 25}\p"
	.string "So{PAUSE 20}…{PAUSE 20} From what you're\n"
	.string "telling me, the text you read doesn't\l"
	.string "even question the existence of that\l"
	.string "POKÉMON; it takes it for granted.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_3:
.string "But{PAUSE 25}…{PAUSE 25}\p"
	.string "Where?\p"
	.string "The POKÉMON TOWER is the only notable\n"
	.string "place, but we've explored every inch\l"
	.string "of it.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_4:
	.string "Perhaps{PAUSE 20}…{PAUSE 20} It's one of those places\n"
	.string "impossible to access, except for those\l"
	.string "who already know where it is. If that\l"
	.string "were the case, we would remain without\l"
	.string "knowing the truth.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_5:
.string "{PLAYER}!\p"
	.string "We must explore every option!\p"
	.string "I can't send tons of ROCKET GRUNTs\n"
	.string "to comb through every corner of\l"
	.string "LAVENDER TOWN, just to looking for\l"
	.string "some ancient hidden passage; that\l"
	.string "would raise too many suspicions.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6:
	.string "However, with only those present here\n"
	.string "knowing about this, you can discreetly\l"
	.string "be the one to investigate it.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_6.1:
	.string "You'll go after something that has\n"
	.string "gone unnoticed for countless\l"
	.string "generations, after a mirage, {PLAYER}.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_Texto_8:
	.string "That concludes it, {PLAYER}.\p"
	.string "Keep this in mind; every step you take\n"
	.string "could add new pages to the recent\l"
	.string "history of KANTO. Perhaps{PAUSE 25}…{PAUSE 25} we'll\l"
	.string "uncover something that should have been\l"
	.string "known a long time ago.$"

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_3:
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_4:
walk_slow_right
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Primera_Vez_move_5:
face_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1
waitmovement 0x0
delay 15
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1 MSGBOX_AUTOCLOSE
delay 15
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.1
waitmovement 0x0
waitse
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
setvar VAR_UNUSED_0x40F7, 109
release
end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2.2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_1:
	.string "GIOVANNI: Did you find anything,\n"
	.string "{PLAYER}?$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_2:
	.string "An incredible story, incredible{PAUSE 20}…{PAUSE 20} Who\n"
	.string "would have thought that such a place is\l"
	.string "right beneath LAVENDER TOWN? It was\l"
	.string "real after all; if that place is real,\l"
	.string "the POKÉMON must be real too.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_3:
	.string "And the cult LEADER expressly asked\n"
	.string "you to keep secret the way to summon\l"
	.string "such a POKEMON. Except for the very top\l"
	.string "KANTO TRAINERS{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_4:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5:
	.string "I guess he meant OAK and me. There's\n"
	.string "definitely a lot we still don't know.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.1:
	.string "The fact of having MEW, missed since we\n"
	.string "created MEWTWO{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_5.2:
	.string "That's the reason TEAM ROCKET was\n"
	.string "founded for, to unlock the ultimate\l"
	.string "limits of the world. And that's why we\l"
	.string "are now going to NAVEL ROCK.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_6:
	.string "ARCHER has been busy in the SEVII\n"
	.string "ISLANDS, finding and logging all the\l"
	.string "alternative routes connecting the\l"
	.string "islands.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7:
	.string "Theoretically, there are 7 islands,\n"
	.string "hence the name 'SEVII'.\l"
	.string "However, actually we could count 10\l"
	.string "substantial landmasses.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.1:
	.string "'EIGHT ISLAND' is south of TWO ISLAND.\p"
	.string "'NINE ISLAND' is east of SEVEN ISLAND.\p"
	.string "'TEN ISLAND' is northwest of ONE ISLAND.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_7.2:
	.string "This 'TEN ISLAND' is called NAVEL ROCK.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8:
	.string "LUGIA and HO-OH have power on par with\n"
	.string "MEWTWO. Our emergency plan to save\l"
	.string "KANTO after MEWTWO's escape was to\l"
	.string "locate these two POKÉMON.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.1:
	.string "However, as happened to LANCE,\n"
	.string "we were not able to do it.\p"
	.string "After the POKÉMON LEAGUE, ARCHER\n"
	.string "sent me a report about this new\l"
	.string "discovery.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_8.2:
	.string "A tenth island, just in the center of\n"
	.string "the 7, covered by strong tides and\l"
	.string "hiding an unexplored cave.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_9:
	.string "I can't think on another place where\n"
	.string "these two beasts, last seen decades\l"
	.string "ago, could be.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_10:
.string "{PLAYER}!\p"
	.string "NAVEL ROCK is relatively close to\n"
	.string "FIVE ISLAND; however, the currents\l"
	.string "between them are the strongest of\l"
	.string "all the SEVEN ISLANDS.\l"
	.string "It would be too risky to attempt\l"
	.string "to pass through there, fortunately{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11:
	.string "ARCHER discovered an alternative\n"
	.string "route, starting from the TWO ISLAND\l"
	.string "port. It's longer, but the currents are\l"
	.string "less treacherous.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_11.1:
	.string "We'll go through that way.\p"
	.string "Don't worry about the caution sign;\n"
	.string "it's more of a precaution to avoid\l"
	.string "trouble than an indication of real\l"
	.string "danger.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Texto_12:
	.string "I'll wait you there, {PLAYER}.\p"
	.string "This time, it's me who's gonna\n"
	.string "join you on this mission.$"

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_1:
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_2:
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_3:
walk_slow_left
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_4:
walk_slow_right
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Lugia_Roca_Ombligo_Move_5:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 2
addobject 10
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_2.1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_4 MSGBOX_AUTOCLOSE
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_5 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_4
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_6.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_7
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_1, RocketHideout8F_Mision_Mansion_Oak_Text_14
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_16 MSGBOX_AUTOCLOSE
delay 15
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
delay 20
addobject 2
addobject 10
fadescreen 0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_17 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideout8F_Mision_Mansion_Oak_Move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_18 MSGBOX_AUTOCLOSE
delay 15
delay 15
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
fadescreen 1
removeobject 2
removeobject 10
delay 20
fadescreen 0
delay 15
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
msgbox RocketHideout8F_Mision_Mansion_Oak_Text_19 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F8, 27
setvar VAR_UNUSED_0x40F7, 113
release
end

RocketHideout8F_Mision_Mansion_Oak_Move_6.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Mansion_Oak_Text_1:
.string "ANDRA: SIR, that's the whole story.$"

RocketHideout8F_Mision_Mansion_Oak_Text_2:
	.string "GIOVANNI: Excellent job, ANDRA. Both\n"
	.string "you and {PLAYER} have done a great\l"
	.string "job. Now we know that the relic was part\l"
	.string "of DEOXYS, and with both OAK and BLAINE\l"
	.string "under control, KANTO can finally reach\l"
	.string "the peace. We don't know what those lab\l"
	.string "maniacs are up to.$"
	
RocketHideout8F_Mision_Mansion_Oak_Text_2.1:
	.string "And{PAUSE 25}…{PAUSE 25} once both OAK and BLAINE are\n"
	.string "under control, KANTO will finally be\l"
	.string "able to reach the peace. But…\p"
	.string "We don't know what those two are up to.$"

RocketHideout8F_Mision_Mansion_Oak_Text_3:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

RocketHideout8F_Mision_Mansion_Oak_Text_4:
	.string "EXECUTIVE PROTON, ADMIN. ANDRA, I need\n"
	.string "to speak privately with {PLAYER}.\p"
	.string "Step outside for a moment.$"

RocketHideout8F_Mision_Mansion_Oak_Text_5:
	.string "GIOVANNI: So, OAK has challenged you to\n"
	.string "go alone to the POKÉMON MANSION{PAUSE 15}…{PAUSE 15}$"

RocketHideout8F_Mision_Mansion_Oak_Text_6:
	.string "Common sense says we should go full\n"
	.string "force into that POKÉMON MANSION and\l"
	.string "obliterate whatever they're up to this\l"
	.string "time.$"

RocketHideout8F_Mision_Mansion_Oak_Text_7:
	.string "OAK is a cautious, cold, and calculated\n"
	.string "man. If he has thrown such a challenge\l"
	.string "at you, having witnessed firsthand how\l"
	.string "you defeated both RED and LANCE, it's\l"
	.string "because he genuinely possesses\l"
	.string "something extraordinary in his power.$"

RocketHideout8F_Mision_Mansion_Oak_Text_8:
	.string "I suspect that, somehow, they have\n"
	.string "recovered MEWTWO, too.$"

RocketHideout8F_Mision_Mansion_Oak_Text_8.1:
	.string "If that's indeed the case, and they\n"
	.string "decide to use it as they please, the\l"
	.string "entire region is in serious danger.$"

RocketHideout8F_Mision_Mansion_Oak_Text_9:
	.string "However, in TEAM ROCKET, we take both\n"
	.string "honor and loyalty very seriously. If OAK\l"
	.string "has personally challenged you, and you\l"
	.string "believe you should go on your own, you\l"
	.string "should do so…$"

RocketHideout8F_Mision_Mansion_Oak_Text_10:
	.string "However, given the significance this\n"
	.string "matter holds for the entire region,\l"
	.string "both ARCHER and me, along with PETREL,\l"
	.string "ANDRA, PROTON, and the other prominent\l"
	.string "members of the organization will stay in\l"
	.string "the background, {PLAYER}, in case\l"
	.string "anything goes wrong.$"

RocketHideout8F_Mision_Mansion_Oak_Text_11:
	.string "I need to ensure, {PLAYER}, that you\n"
	.string "are ready for everything, even for\l"
	.string "MEWTWO.$"

RocketHideout8F_Mision_Mansion_Oak_Text_12:
	.string "Just like ARCHER made sure both you and\n"
	.string "ANDRA were ready for the POKÉMON\l"
	.string "LEAGUE, now it's time for the\l"
	.string "ultimate challenge.$"

RocketHideout8F_Mision_Mansion_Oak_Text_13:
	.string "I, GIOVANNI, TEAM ROCKET LEADER, will\n"
	.string "personally take your POKÉMON to the\l"
	.string "next level!$"

RocketHideout8F_Mision_Mansion_Oak_Text_14:
	.string "I am proud of you, {PLAYER}. With your\n"
	.string "current level, KANTO holds no more\l"
	.string "mysteries for you.$"

RocketHideout8F_Mision_Mansion_Oak_Text_15:
	.string "It's crazy, {PLAYER}, I've improved so\n"
	.string "much since the days when OAK and I were\l"
	.string "going head-to-head for the KANTO\l"
	.string "Championship. Yet, you managed to\l"
	.string "outshine me. You've got the freedom to\l"
	.string "call the shots now.$"

RocketHideout8F_Mision_Mansion_Oak_Text_16:
.string "ANDRA!!\n"
	.string "PROTON!!$"

RocketHideout8F_Mision_Mansion_Oak_Text_17:
	.string "Call ARCHER, PETREL, CHAMPION BLUE, and\n"
	.string "all the ROCKET EXECUTIVEs in here. We\l"
	.string "need to make sure OAK and BLAINE stay\l"
	.string "put in the POKÉMON MANSION, and\l"
	.string "{PLAYER} doesn't face any threats.$"

RocketHideout8F_Mision_Mansion_Oak_Text_18:
	.string "PROTON: YES, SIR!$"

RocketHideout8F_Mision_Mansion_Oak_Text_19:
	.string "Go, {PLAYER}, and show OAK where the\n"
	.string "true strength of a TRAINER comes from.$"


RocketHideout8F_Mision_Mansion_Oak_Move_1:
face_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_2:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_3:
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_4:
walk_slow_left
walk_in_place_left
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_5:
walk_slow_right
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_6:
face_up
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_7:
walk_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_8:
walk_up
walk_in_place_down
step_end

RocketHideout8F_Mision_Mansion_Oak_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Silph_move5.10:
emote_exclamation_mark
face_up
step_end

RocketHideout8F_Mision_Johto_move_9.1:
face_left
delay_8
delay_16
face_down
step_end


RocketHideout8F_Mision_Johto::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_HIDE_FANCLUB_OLD_LADY
setflag FLAG_NUEVA_292
addobject 1
addobject 10
removeobject 2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_1 MSGBOX_AUTOCLOSE
applymovement 10, RocketHideout8F_Mision_Johto_move_3
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_4
waitmovement 0x0
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout8F_Mision_Johto_Text_2 MSGBOX_AUTOCLOSE
delay 15
playse SE_SHOP
addmoney 1500000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout8F_Mision_Johto_Text_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout8F_Mision_Johto_Text_6 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_2
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
waitse
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_9 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_7
waitmovement 0x0
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_10 MSGBOX_DEFAULT
givemon SPECIES_RAIKOU, 70, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_11 MSGBOX_DEFAULT
givemon SPECIES_ENTEI, 70, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout8F_Mision_Johto_Text_12 MSGBOX_DEFAULT
givemon SPECIES_SUICUNE, 70, ITEM_LUM_BERRY
waitfanfare
msgbox RocketHideout8F_Mision_Johto_Text_13 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_8
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_15 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_16 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 10, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement 10, RocketHideout8F_Mision_Johto_move_10
applymovement 1, RocketHideout8F_Mision_Johto_move_11
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_18 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, RocketHideout8F_Mision_Mansion_Oak_Move_3
waitmovement 0x0
applymovement 10, RocketHideout_8F_Mision_Silph_move5.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 10, RocketHideout8F_Mision_Johto_move_12.1
applymovement 1, RocketHideout_8F_Mision_Silph_move4.2
waitse
playse SE_M_SOLAR_BEAM
applymovement 10, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 10
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
playse SE_M_STAT_INCREASE
applymovement 6, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_SYMBOL
applymovement 6, RocketHideout_8F_Mision_Silph_move5.1
waitmovement 0x0
waitfanfare
playse SE_SHOP
waitse
applymovement 6, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
applymovement 3, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_19 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_6
applymovement 6, RocketHideout8F_Mision_Johto_move_3
applymovement 1, RocketHideout8F_Mision_Johto_move_13
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_10
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Johto_move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_21 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_22 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 1, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
waitse
applymovement 1, RocketHideout8F_Mision_Johto_move_9.1
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Johto_Text_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_14
applymovement 6, RocketHideout8F_Mision_Johto_move_15
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_24 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_2
applymovement 6, RocketHideout8F_Mision_Johto_move_16
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_17
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_25 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout8F_Mision_Johto_move_5
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_26 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout8F_Mision_Johto_Text_27.1 MSGBOX_DEFAULT
waitfanfare
additem ITEM_TOWN_MAP
msgbox RocketHideout8F_Mision_Johto_Text_27 MSGBOX_AUTOCLOSE
msgbox RocketHideout8F_Mision_Johto_Text_28 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout8F_Mision_Johto_Text_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_18
applymovement 1, RocketHideout8F_Mision_Johto_move_19
waitmovement 0x0
playse SE_M_COSMIC_POWER
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 4
setvar VAR_UNUSED_0x40F7, 808
warpsilent MAP_ROCKET_HIDEOUT_8F, 9, 7



RocketHideout_8F_Disguise_Player_3::
delay 40
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout8F_Mision_Johto_Text_29.1 MSGBOX_DEFAULT
waitfanfare
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
msgbox RocketHideout8F_Mision_Johto_Text_30 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_672
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_SEAFLOOR_CAVERN_ROOM_9_MAXIE
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_HIDE_RUSTURF_TUNNEL_AQUA_GRUNT
setvar VAR_UNUSED_0x40F7, 117
release
end

RocketHideout8F_Mision_Johto_Text_30:
.string "GIOVANNI: I will be waiting for you in\n"
	.string "the MAXIMUM POTENTIAL REACHABLE ROOM.$"

RocketHideout8F_Mision_Johto_Text_27.1:
	.string "{PLAYER} obtained a MAP from GIOVANNI!!$"

RocketHideout8F_Mision_Johto_Text_18.1:
.string "ANDRA got promoted to BOSS ADMIN in\n"
	.string "the HOENN region!!$"

RocketHideout8F_Mision_Johto_Text_29.1:
.string "{PLAYER} got promoted to BOSS ADMIN\n"
	.string "in the JOHTO region!!$"

RocketHideout8F_Mision_Johto_Text_1:
.string "ANDRA: {PLAYER}! You are tireless! I\n"
	.string "was ready to enter forcing the door to\l"
	.string "CINNABAR MANSION, then you went in\l"
	.string "defeating everyone before!$"

RocketHideout8F_Mision_Johto_Text_2:
.string "GIOVANNI: You both have given TEAM\n"
	.string "ROCKET more than no one could have\l"
	.string "expected, your skills as TRAINERS is\l"
	.string "out of any rank that I could offer you\l"
	.string "on TEAM ROCKET, that's why we need to\l"
	.string "talk about your near future, something\l"
	.string "that will be a real challenge and will\l"
	.string "spread out the organization even more,\l"
	.string "but before that{PAUSE 15}…{PAUSE 15} Here are your rewards.$"

RocketHideout8F_Mision_Johto_Text_3:
	.string "YOU JUST INVOICED ¥1,500,000!!$"

RocketHideout8F_Mision_Johto_Text_4:
.string "GIOVANNI: {PAUSE 25}…{PAUSE 25}$"

RocketHideout8F_Mision_Johto_Text_5:
.string "Are you sure you don't want them,\n"
	.string "ANDRA?$"

RocketHideout8F_Mision_Johto_Text_6:
.string "ANDRA: I'm sure, I don't need them to\n"
	.string "build my best team.$"

RocketHideout8F_Mision_Johto_Text_7:
.string "GIOVANNI: It is your will, so be it.$"

RocketHideout8F_Mision_Johto_Text_8:
.string "You should know, {PLAYER}, that when\n"
	.string "we returned the JOHTO BEASTS to their\l"
	.string "original place, we took the liberty to\l"
	.string "analyze their DNA. The effect is\l"
	.string "obvious: we were able to clone them as\l"
	.string "we did with KANTO BIRDS.$"

RocketHideout8F_Mision_Johto_Text_9:
.string "As one of the BOSS ADMIN, you are\n"
	.string "entitled to a specimen of each one. I\l"
	.string "hope it doesn't bring back painful\l"
	.string "memories for you about your fight\l"
	.string "against LANCE. Keep in mind that those\l"
	.string "are clones.$"

RocketHideout8F_Mision_Johto_Text_10:
.string "YOU OBTAINED A RAIKOU AT LV:70!!$"

RocketHideout8F_Mision_Johto_Text_11:
.string "YOU OBTAINED A ENTEI AT LV:70!!$"

RocketHideout8F_Mision_Johto_Text_12:
.string "YOU OBTAINED A SUICUNE AT LV:70!!$"

RocketHideout8F_Mision_Johto_Text_13:
.string "Now, get comfortable, we have a lot to\n"
	.string "talk about.$"

RocketHideout8F_Mision_Johto_Text_14:
.string "With MEWTWO in our hands, KANTO BIRDS\n"
	.string "clones and JOHTO BEASTS, TEAM ROCKET\l"
	.string "has reached a power greater than\l"
	.string "months ago we could dream.$"
	

RocketHideout8F_Mision_Johto_Text_15:
.string "OAK arrested, LANCE stranded{PAUSE 15}…{PAUSE 15} KANTO is\n"
	.string "totally under our control, finally we\l"
	.string "will be able to bring back all the\l"
	.string "splendor the region had before war,\l"
	.string "that will require just time, which is why\l"
	.string "your destinies are far away from here.$"

RocketHideout8F_Mision_Johto_Text_16:
.string "ANDRA: Where will we go, SIR?$"

RocketHideout8F_Mision_Johto_Text_17:
.string "I am going to dedicate all my efforts to\n"
	.string "rebuild KANTO as it should be. Now that\l"
	.string "I have ROCKET like you, I believe it is\l"
	.string "time to delegate totally my powers in\l"
	.string "our JOHTO and HOENN branches.$"

RocketHideout8F_Mision_Johto_Text_18:
.string "ANDRA! Now you will manage the TEAM\n"
	.string "ROCKET on HOENN region! You are\l"
	.string "promoted to BOSS ADMIN ROCKET and\l"
	.string "HOENN LEADER!$"

RocketHideout8F_Mision_Johto_Text_19:
.string "ANDRA: Wow!\n"
	.string "I can't believe it!$"

RocketHideout8F_Mision_Johto_Text_20:
.string "Our branch at HOENN is not totally built\n"
	.string "yet, but you can settle there at least\l"
	.string "ANDRA, unfortunately, the distance\l"
	.string "between both regions prevents to use\l"
	.string "teleportation technology to send you\l"
	.string "there, but do not worry about that, we\l"
	.string "have a FERRY on VERMILION waiting for\l"
	.string "you.$"

RocketHideout8F_Mision_Johto_Text_21:
.string "I know you love mythology and\n"
	.string "ANCESTRAL POKÉMON, ANDRA, which is\l"
	.string "why I am sending you to HOENN, we will\l"
	.string "dust off that region's mysteries, which\l"
	.string "are probably a lot.$"

RocketHideout8F_Mision_Johto_Text_22:
.string "ANDRA: I guess you mean about those\n"
	.string "RUINS that you can look at the DESERT,\l"
	.string "at DEWFORD TOWN north and at ROUTE\l"
	.string "120.$"

RocketHideout8F_Mision_Johto_Text_23:
.string "GIOVANNI: I see that I don't need to\n"
	.string "tell you anything else, that's all for\l"
	.string "you ANDRA, HOENN is waiting for you.$"

RocketHideout8F_Mision_Johto_Text_24:
.string "ANDRA: Do not expect that I will use\n"
	.string "exotic LEGENDARIES from HOENN in our\l"
	.string "next fight, {PLAYER}; I told you that\l"
	.string "I will be the best just using NO\l"
	.string "LEGENDARIES, and I am going to keep it.\p"
	.string "I hope someday you visit HOENN, maybe I\n"
	.string "could go around for JOHTO, if the\l"
	.string "situation requires it!$"

RocketHideout8F_Mision_Johto_Text_25:
.string "GIOVANNI: Well, {PLAYER}, you know\n"
	.string "there are a lot loose ends that are not\l"
	.string "solved because OAK interrupted us, but\l"
	.string "you should know before going to JOHTO.$"

RocketHideout8F_Mision_Johto_Text_26:
.string "First, take this.$"

RocketHideout8F_Mision_Johto_Text_27:
.string "With this MAP, you could locate yourself\n"
	.string "as you should be, inside a totally new\l"
	.string "region for you.$"

RocketHideout8F_Mision_Johto_Text_28:
.string "Now, this is not the adequate place to\n"
	.string "explain the goals you will be pursuing in\l"
	.string "JOHTO; that's the area next to here, the\l"
	.string "RESEARCH AREA ABOUT THE MAXIMUM\l"
	.string "POTENTIAL ACHIEVABLE BY A POKÉMON. We\l"
	.string "have finally opened the last zone, and\l"
	.string "that's where I will be waiting for you,\l"
	.string "{PLAYER}. There, you will understand\l"
	.string "the reasons behind the goals you will be\l"
	.string "pursuing in JOHTO.$"

RocketHideout8F_Mision_Johto_Text_29:
.string "GIOVANNI: A last thing, {PLAYER}.\p"
	.string "Since now, you are in charge of TEAM\n"
	.string "ROCKET in the JOHTO region! You are\l"
	.string "promoted to BOSS ADMIN ROCKET and\l"
	.string "JOHTO LEADER!$"

RocketHideout8F_Mision_Johto_move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Johto_move_2:
face_down
step_end

RocketHideout8F_Mision_Johto_move_3:
face_right
step_end

RocketHideout8F_Mision_Johto_move_4:
walk_up
step_end

RocketHideout8F_Mision_Johto_move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_6:
face_left
step_end

RocketHideout8F_Mision_Johto_move_7:
walk_slow_down
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_8:
walk_slow_up
delay_16
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_9:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_10:
face_up
step_end

RocketHideout8F_Mision_Johto_move_11:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_12:
face_up
delay_4
face_right
delay_4
face_down
delay_4
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
delay_2
face_up
delay_2
face_right
delay_2
face_down
delay_2
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
face_left
face_up
face_right
face_down
step_end


RocketHideout8F_Mision_Johto_move_13:
walk_up
walk_right
walk_right
walk_right
walk_up
delay_8
walk_in_place_down
step_end

RocketHideout8F_Mision_Johto_move_14:
walk_right
delay_16
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_15:
walk_down
walk_right
walk_right
walk_right
step_end

RocketHideout8F_Mision_Johto_move_16:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout8F_Mision_Johto_move_17:
walk_left
delay_8
walk_in_place_up
step_end

RocketHideout8F_Mision_Johto_move_18:
walk_in_place_left
step_end

RocketHideout8F_Mision_Johto_move_19:
walk_down
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
walk_right
walk_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_1
addobject 2
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3
waitmovement 0x0
delay 10
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.2
applymovement 6, RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.3
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_103_RIVAL
removeobject 6
playse SE_EXIT
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 168
release
end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.2:
delay_16
face_left
delay_16
face_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.3:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_1:
	.string "GIOVANNI: As I told you, ANDRA, the\n"
	.string "RUINS OF ALPH must be under strict\l"
	.string "vigilance, as of now.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_2:
	.string "GIOVANNI: Do you realize the kind of\n"
	.string "POKÉMON you've just faced? Our\l"
	.string "scientists have estimated it to have\l"
	.string "190 BASE SPECIAL ATTACK, far\l"
	.string "outstripping that of the highest\l"
	.string "recorded, DEOXYS' 180. Together with\l"
	.string "its other STATs, it achieves a total of\l"
	.string "660. There isn't a shred of doubt this\l"
	.string "POKÉMON surpasses even LEGENDARY\l"
	.string "POKÉMON like LUGIA and HO-OH in\l"
	.string "numbers. The limits of conventional\l"
	.string "POKÉMON have just been shattered, and\l"
	.string "the information from this POKÉMON will\l"
	.string "allow us to further perfect the\l"
	.string "SPECIAL ATTACK of newer MEWTWO\l"
	.string "prototypes. Perhaps, we'll even surpass\l"
	.string "that BASE of 190 too.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_3:
	.string "But we're not here for that. I've\n"
	.string "already briefed ANDRA and asked her to\l"
	.string "be keen to any peculiar activities in\l"
	.string "the RUINS OF ALPH.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_4:
	.string "We don't know that TRAINER's aims, but\n"
	.string "whatever he's after must be in there.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_5:
	.string "However, we still need information. This\n"
	.string "is where I need your help, {PLAYER}.\l"
	.string "You must pay a visit to that cult in\l"
	.string "LAVENDER TOWN again and explain the\l"
	.string "situation to the LEADER. Perhaps he'll\l"
	.string "know what to do.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_6:
	.string "That's all for now. ARCHER and I are\n"
	.string "really busy with all the stuff that we\l"
	.string "discussed back in GOLDENROD, although\l"
	.string "we won't hesitate to intervene if\l"
	.string "necessary. I'll be eager to hear about\l"
	.string "you.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_7:
.string "ANDRA: SIR, yes, SIR!$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8:
	.string "You didn't tell me that guy had KYOGRE,\n"
	.string "GROUDON and RAYQUAZA. Did you really\l"
	.string "faced the SUPER-ANCIENT HOENN trio?\p"
	.string "Be very careful, I've studied their\n"
	.string "mythology, and the legend talks about\l"
	.string "even stronger PRIMAL FORMS.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Texto_8.1:
	.string "That's right, the ones who really\n"
	.string "created the land and the sea.\p"
	.string "I don't know if this guy will want to\n"
	.string "check the veracity of this legend, but\l"
	.string "keep it in mind.$"

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_1:
face_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_2:
face_left
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_3:
walk_up
walk_up
walk_up
walk_up
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_4:
face_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_5:
walk_in_place_down
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_6:
walk_in_place_right
step_end

RocketHideout8F_Mision_Culto_Lavanda_Segunda_Vez_Move_7:
walk_down
walk_right
walk_right
step_end

RocketHideout_8F_Mision_Lago_Furia::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_1
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_4
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_7 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_8 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_11 MSGBOX_DEFAULT
givemon SPECIES_LUGIA, 90, ITEM_LUM_BERRY
waitfanfare
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_HO_OH, 90, ITEM_LUM_BERRY
waitfanfare
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_4
waitmovement 0x0
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_9
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_19 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
setflag FLAG_SYS_POKEDEX_GET
setflag FLAG_SYS_NATIONAL_DEX
special EnableNationalPokedex
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_20 MSGBOX_DEFAULT
waitfanfare
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_22 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_23 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Lago_Furia_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Lago_Furia_Move_11
waitmovement 0x0
waitse
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_28 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Lago_Furia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_29 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setflag FLAG_HOENN_108
setflag FLAG_RECEIVED_SHOAL_SHELL_2
setflag FLAG_NUEVA_292
clearflag FLAG_RECEIVED_SHOAL_SHELL_1
setvar VAR_VERDANTURF_TOWN_STATE, 1
setvar VAR_PACIFIDLOG_TOWN_STATE, 1
setvar VAR_MAUVILLE_CITY_STATE, 1
clearflag FLAG_RECEIVED_SHOAL_SALT_4
setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
setvar VAR_UNUSED_0x40F7, 180
msgbox RocketHideout_8F_Mision_Lago_Furia_Texto_30 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq IcePath_Llamada_Giovanni_No
warpsilent MAP_ROCKET_HIDEOUT_JOHTO_P2, 9, 9
release
end

RocketHideout_8F_Mision_Lago_Furia_Texto_30:
	.string "Do you want to go to your office in\n"
	.string "JOHTO to see the documents regarding\l"
	.string "the new missions?$"

RocketHideout_8F_Mision_Lago_Furia_Move_11:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_10:
walk_up
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_9:
walk_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_8:
walk_slow_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_7:
walk_slow_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_6:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_5:
face_left
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_3:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_2:
face_right
step_end

RocketHideout_8F_Mision_Lago_Furia_Move_1:
face_down
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Lago_Furia_Texto_1:
	.string "GIOVANNI: {PLAYER}! You're\n"
	.string "extraordinary, you defeated the three\l"
	.string "most powerful POKÉMON of all time!\p"
	.string "Do you understand the reason for your\n"
	.string "victory? The moment the immortality of\l"
	.string "such POKÉMON was subject to the rules\l"
	.string "governing POKÉMON battles between two\l"
	.string "TRAINERS, their powers ceased to be\l"
	.string "infinite and, therefore, vulnerable.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_2:
	.string "That TRAINER tried to use them as\n"
	.string "conventional POKÉMON, and that's where\l"
	.string "they lost their essence.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_3:
	.string "However, only a TRAINER who has\n"
	.string "reached an unparalleled state of\l"
	.string "balance with their team could defeat\l"
	.string "them even in a POKÉMON battle. You were\l"
	.string "the only one who could do it,\l"
	.string "{PLAYER}…$"

RocketHideout_8F_Mision_Lago_Furia_Texto_6:
	.string "As is customary, after each major\n"
	.string "event, I gather you all here to assess\l"
	.string "everything{PAUSE 25}…{PAUSE 25} and to look to the future.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_7:
.string "Before anything else, your rewards.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_8:
.string "YOU JUST EARNED ¥2,000,000!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_9:
	.string "And not only that, thanks to all the\n"
	.string "commotion caused by ZEUS, and the\l"
	.string "entry to RUINS OF ALPH, we were able to\l"
	.string "extract the DNA of LUGIA and HO-OH,\l"
	.string "not their primordial forms, but the ones\l"
	.string "known by JOHTO's culture.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_10:
	.string "ANDRA finds it dishonorable to use this\n"
	.string "kind of POKÉMON, so only you will\l"
	.string "receive cloned specimens, {PLAYER}.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_11:
.string "YOU OBTAINED A LV.60 LUGIA!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_12:
.string "YOU OBTAINED A LV.60 HO-OH!!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_13:
	.string "ANDRA: Don't think I won't know how to\n"
	.string "deal with them if you use them against\l"
	.string "me, {PLAYER}. I've already defeated\l"
	.string "the golden HO-OH, a form even more\l"
	.string "powerful than those clones, don't\l"
	.string "forget!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_14:
	.string "GIOVANNI: Alright, now let's talk about\n"
	.string "your future missions.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_15:
	.string "{PLAYER} did an excellent job\n"
	.string "gathering information about the DEEP\l"
	.string "BONDS of JOHTO. All this information has\l"
	.string "served our SCIENTISTS to optimize and\l"
	.string "further expand the power of future\l"
	.string "prototypes, just as MEWTWO once was.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_16:
	.string "However, JOHTO is much more than its\n"
	.string "TOWNS and CITIES; unlike KANTO, it has\l"
	.string "many places yet to be explored$"

RocketHideout_8F_Mision_Lago_Furia_Texto_17:
	.string "We have strong suspicions that these\n"
	.string "places hide unique POKÉMON, whose data\l"
	.string "could continue to provide fundamental\l"
	.string "information for our research.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_18:
	.string "The opening of the station connecting\n"
	.string "GOLDENROD with SAFFRON, and the\l"
	.string "demolition of POKÉMON TOWER, are\l"
	.string "approaching, but while awaiting these\l"
	.string "events, your mission will be to continue\l"
	.string "expanding what we know about POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_19:
	.string "Therefore, I'll give you something you\n"
	.string "should have had a long time ago.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_20:
.string "YOU OBTAINED A POKEDEX!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_21:
	.string "Courtesy of OAK, thanks to his\n"
	.string "invention, not only will the information\l"
	.string "of every new POKÉMON you encounter be\l"
	.string "sent to our database, it will also be\l"
	.string "recorded for your own use. You'll even\l"
	.string "be able to see the BASE STATs if you\l"
	.string "manage to catch the POKÉMON.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_22:
	.string "ANDRA: So this is what that spoiled\n"
	.string "brat RED used, I know several\l"
	.string "POKÉMANIACS who would give everything\l"
	.string "they have for an artifact like this. We\l"
	.string "will give it the best possible use, right,\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_23:
	.string "Does that mean I'm not returning to\n"
	.string "HOENN, SIR?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_24:
	.string "GIOVANNI: That's right, ANDRA, for now\n"
	.string "you will stay in JOHTO and perform the\l"
	.string "same task that {PLAYER} has been\l"
	.string "doing. Both of you are the strongest\l"
	.string "TRAINERS in the entire organization, and\l"
	.string "a mission like this, where you could\l"
	.string "face anything, requires the highest\l"
	.string "possible preparation.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_25:
.string "ANDRA: And where should we start?$"

RocketHideout_8F_Mision_Lago_Furia_Texto_26:
	.string "GIOVANNI: I have left documents for\n"
	.string "you, with a detailed explanation of\l"
	.string "each of the missions you will undertake,\l"
	.string "in your respective offices. Don't worry,\l"
	.string "ANDRA, there is already a teleportation\l"
	.string "connection with the BASE in HOENN.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_27:
	.string "The order in which you decide to tackle\n"
	.string "them is up to you, though I would like\l"
	.string "you to delve as deeply as possible into\l"
	.string "each one. Once you've researched\l"
	.string "enough, return to my office.$"

RocketHideout_8F_Mision_Lago_Furia_Texto_28:
.string "ANDRA: Cool, let's explore JOHTO!$"

RocketHideout_8F_Mision_Lago_Furia_Texto_29:
	.string "Did you hear that, {PLAYER}? The most\n"
	.string "remote places of JOHTO await us. What\l"
	.string "mysteries will be waiting for us?$"

RocketHideout_8F_Mision_Base_Hoenn::
lock
clearflag FLAG_HIDE_ROUTE_103_RIVAL
addobject 6
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_1
waitmovement 0x0
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_2 MSGBOX_AUTOCLOSE
fadescreen 1
delay 60
fadescreen 0
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox CianwoodEusineHouse_Combate_Texto_1.1 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_15 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Base_Hoenn_Move_7
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_18 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_8
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_21 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_22 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_10
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_23 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Base_Hoenn_Move_4
applymovement 6, RocketHideout_8F_Mision_Base_Hoenn_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Base_Hoenn_Texto_24 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_103_RIVAL
fadescreen 1
delay 20
removeobject 6
fadescreen 0
setvar VAR_UNUSED_0x40F7, 184
release
end

RocketHideout_8F_Mision_Base_Hoenn_Move_10:
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_9:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_8:
walk_slow_left
delay_16
walk_in_place_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_7:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_6:
face_left
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_5:
walk_slow_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_2:
face_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_4:
face_down
step_end

RocketHideout_8F_Mision_Base_Hoenn_Move_1:
walk_in_place_down
walk_in_place_right
step_end

RocketHideout_8F_Mision_Base_Hoenn_Texto_1:
	.string "ANDRA: Hah! I knew you were going to\n"
	.string "appear soon, {PLAYER}! I just\l"
	.string "completed my missions too!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_2:
	.string "GIOVANNI: Our database has gathered\n"
	.string "valuable information from your\l"
	.string "expeditions, but I would like to hear\l"
	.string "from you. Tell me all the details…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_3:
	.string "I see{PAUSE 15}…{PAUSE 15} So JOHTO has several species\n"
	.string "believed to be extinct, and they\l"
	.string "inhabit that great paradise known as\l"
	.string "the west zone of CIANWOOD.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4:
	.string "It's not surprising; there are only 100\n"
	.string "original species cataloged in JOHTO, a\l"
	.string "very small number compared to the 151\l"
	.string "in KANTO or the 135 in HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.1:
	.string "On the other hand, that SACRED DRAGON…\n"
	.string "ANDRA has already told me how her\l"
	.string "URSARING evolved thanks to the GOLDEN\l"
	.string "STONE.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.2:
	.string "The number of POKÉMON it can react to\n"
	.string "is quite a mystery. I'll send ARCHER to\l"
	.string "that place to investigate and find one.\l"
	.string "Then, our top scientists will try to\l"
	.string "reproduce that sacred object so we can\l"
	.string "commercialize it among the best ROCKET\l"
	.string "members.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_4.3:
	.string "ANDRA: Oh…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_5:
	.string "GIOVANNI: As for that guy EUSINE, don't\n"
	.string "worry, {PLAYER}. I'll send someone to\l"
	.string "find him. Everything he's seen and\l"
	.string "experienced in that pagoda will be of\l"
	.string "enormous use to our investigations.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_6:
	.string "What really worries me is your mission\n"
	.string "at the LAKE OF RAGE, {PLAYER}.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_7:
	.string "The result has been outstanding, and\n"
	.string "the POKÉMON found there, are\l"
	.string "exceptional. But those SCIENTISTS{PAUSE 15}…\l"
	.string "they don't work for us, they seem to\l"
	.string "pursue similar objectives to ours.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_8:
	.string "ANDRA: I also encountered scientists\n"
	.string "like that in HOENN, in the midst of\l"
	.string "searching for the REGIS…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_9:
	.string "GIOVANNI: As I expected, everything\n"
	.string "points to DEVON C.O.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_10:
.string "ANDRA: DEVON?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_11:
	.string "GIOVANNI: OAK and BLAINE contacted\n"
	.string "them in the past, before {PLAYER}\l"
	.string "defeated them. Thanks to that, they\l"
	.string "obtained the necessary funding to\l"
	.string "clone MEWTWO again and resurrect\l"
	.string "DEOXYS.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_12:
.string "ANDRA: And{PAUSE 15}…?$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_13:
	.string "GIOVANNI: And DEVON agreed, with the\n"
	.string "condition of providing all the material\l"
	.string "related to DEOXYS. Fortunately, they\l"
	.string "didn't say a word about MEWTWO.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_14:
.string "Maybe is too soon, but{PAUSE 15}…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_15:
	.string "{PLAYER}! I want you to go with ANDRA\n"
	.string "to our HOENN branch, and she'll give you\l"
	.string "a general overview of the region.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_16:
	.string "The demolition of LAVENDER TOWN'S\n"
	.string "TOWER is imminent; Meanwhile, there's\l"
	.string "nothing holding you here, and our HOENN\l"
	.string "BASE is the only one you haven't visited\l"
	.string "yet.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_17:
	.string "Once LAVENDER TOWN'S TOWER is\n"
	.string "demolished, construction will begin at\l"
	.string "record speed on the new RADIO TOWER. In\l"
	.string "the meantime, I inform you that the II\l"
	.string "GRAND MEETING IN GOLDENROD CITY is\l"
	.string "scheduled soon.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_18:
	.string "ANDRA: Wow! Now that KANTO and JOHTO\n"
	.string "are about to achieve the unity\l"
	.string "proposed in the I GRAND MEETING…$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_19:
	.string "GIOVANNI: We have everything to make\n"
	.string "the KANTO-JOHTO duo into a global\l"
	.string "power of the POKÉMON WORLD.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_20:
.string "ANDRA: Sounds{PAUSE 25}…{PAUSE 15} shocking.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_21:
	.string "GIOVANNI: And it will be, you'll see when\n"
	.string "you see what there is to show, but for\l"
	.string "now{PAUSE 25}…{PAUSE 15} You have at your disposal the\l"
	.string "teleportation that sends you to HOENN.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_22:
	.string "I hope you guide {PLAYER} correctly\n"
	.string "through HOENN, stay attentive to my\l"
	.string "call.$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_23:
	.string "ANDRA: Don't worry, SIR. {PLAYER} won't\n"
	.string "waste any time there, I'm sure!$"

RocketHideout_8F_Mision_Base_Hoenn_Texto_24:
	.string "I'll wait for you at the entrance to the\n"
	.string "HOENN base; I'll be your tour guide!$"

RocketHideout_8F_Mision_Neo_Canela::
lock
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 7
addobject 8
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_1
waitmovement 0x0
playse SE_PIN
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_1.1
waitmovement 0x0
waitse
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_4 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Neo_Canela_Move_6
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_5
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_4
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_7
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Neo_Canela_Texto_11 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_8F_Mision_Neo_Canela_Move_8.1
applymovement 8, RocketHideout_8F_Mision_Neo_Canela_Move_8.2
applymovement 7, RocketHideout_8F_Mision_Neo_Canela_Move_8.3
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
delay 20
removeobject 7
removeobject 8
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 191
release
end

RocketHideout_8F_Mision_Neo_Canela_Move_8.1:
delay_8
face_right
delay_16
face_down
delay_16
face_right
delay_16
delay_16
delay_16
face_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_8.2:
walk_in_place_left
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_8.3:
face_left
delay_16
delay_8
walk_left
delay_16
walk_in_place_left
delay_8
walk_down
walk_down
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end


RocketHideout_8F_Mision_Neo_Canela_Move_8:
walk_in_place_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_7:
face_right
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_5:
face_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_4:
face_left
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_3:
walk_in_place_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_2:
walk_slow_up
walk_slow_up
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_1.1:
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Move_1:
walk_up
walk_up
walk_up
walk_up
emote_exclamation_mark
step_end

RocketHideout_8F_Mision_Neo_Canela_Texto_1:
	.string "????: I was able to escape at the last\n"
	.string "moment, due to the TELEPORT of my\l"
	.string "MAGMORTAR.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_2:
	.string "GIOVANNI: {PLAYER}, your absence\n"
	.string "from KANTO-JOHTO has prevented you\l"
	.string "from finding out, but the phenomenon\l"
	.string "has been felt in both regions: the\l"
	.string "volcano on CINNABAR ISLAND has\l"
	.string "erupted, engulfing everything in its\l"
	.string "path.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_3:
	.string "BLAINE: The LABORATORY{PAUSE 25}…{PAUSE 25} the POKÉMON\n"
	.string "MANSION{PAUSE 25}…{PAUSE 25} the GYM{PAUSE 25}…{PAUSE 25} now everything lies\l"
	.string "at the bottom of the sea{PAUSE 15}…$"

RocketHideout_8F_Mision_Neo_Canela_Texto_4:
	.string "OAK: The issue is that, after the I\n"
	.string "GOLDENROD CONFERENCE, we continued\l"
	.string "our investigations there. A very\l"
	.string "important part of our recent projects\l"
	.string "is now lost, dozens of meters\l"
	.string "underground.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_5:
	.string "BLAINE: Fortunately, the most\n"
	.string "important underground areas were made\l"
	.string "to withstand any natural disaster.\l"
	.string "After {PLAYER} defeated us, we built\l"
	.string "many more underground floors; they are\l"
	.string "like an underground bunker.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_6:
	.string "GIOVANNI: So there's still a chance\n"
	.string "that it is not destroyed yet.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_7:
	.string "OAK: We must verify it; you know as well\n"
	.string "as I do, the valuable information we\l"
	.string "keep there.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_8:
	.string "BLAINE: However, not anyone can go; the\n"
	.string "eruption may have unleashed all the\l"
	.string "prototypes we had there in the testing\l"
	.string "phase.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_9:
	.string "GIOVANNI: We agree, the most suitable\n"
	.string "person to carry out this mission is\l"
	.string "{PLAYER}. They have more than enough\l"
	.string "experience in this kind of situations.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_10:
	.string "OAK: That's right, I'll be waiting for\n"
	.string "you on CINNABAR ISLAND, {PLAYER}.\l"
	.string "There, I'll tell you exactly what you\l"
	.string "need to do.$"

RocketHideout_8F_Mision_Neo_Canela_Texto_11:
	.string "BLAINE: It's a relief to have a TRAINER\n"
	.string "like you on our side; I hope you can\l"
	.string "recover as much as possible from this\l"
	.string "catastrophe.$"

RocketHideout_8F_Mision_Central_Energia::
lock
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
delay 20
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_1 MSGBOX_DEFAULT
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_2 MSGBOX_AUTOCLOSE
showmoneybox 0, 0
delay 20
playse SE_SHOP
addmoney 2000000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_3 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_4 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_5 MSGBOX_DEFAULT
givemon SPECIES_SILVALLY, 90, ITEM_NONE
waitfanfare
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_3
waitmovement 0x0
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_4
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_1
waitmovement 0x0
delay 10
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Mision_Central_Energia_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Mision_Central_Energia_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_UNUSED_0x272
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
fadescreen 1
delay 20
removeobject 1
fadescreen 0
clearflag FLAG_HIDE_ROUTE_119_TEAM_AQUA
clearflag FLAG_HIDE_BATTLE_TOWER_OPPONENT
setvar VAR_UNUSED_0x40F7, 202
release
end

RocketHideout_8F_Mision_Central_Energia_Move_5:
walk_slow_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_4:
face_up
step_end

RocketHideout_8F_Mision_Central_Energia_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Mision_Central_Energia_Move_1:
walk_in_place_down
step_end

RocketHideout_8F_Mision_Central_Energia_Move_2:
walk_slow_left
step_end

RocketHideout_8F_Mision_Central_Energia_Texto_1:
	.string "-{PLAYER} gave the HARD DRIVE\n"
	.string "to GIOVANNI!-$"

RocketHideout_8F_Mision_Central_Energia_Texto_2:
	.string "GIOVANNI: I knew you wouldn't\n"
	.string "disappoint, {PLAYER}. There's no\l"
	.string "reward that can compare to the\l"
	.string "information you've just brought back.\l"
	.string "There are millions invested in research\l"
	.string "here, so it's only appropriate to give\l"
	.string "you some of them.$"

RocketHideout_8F_Mision_Central_Energia_Texto_3:
	.string "-{PLAYER} JUST EARNED ¥2,000,000!-$"

RocketHideout_8F_Mision_Central_Energia_Texto_4:
	.string "Take this as well, it's a project that\n"
	.string "comes from a distant region, some of\l"
	.string "our best scientists have made contact\l"
	.string "with it.$"

RocketHideout_8F_Mision_Central_Energia_Texto_5:
.string "YOU OBTAINED A LV.70 SILVALLY!!$"

RocketHideout_8F_Mision_Central_Energia_Texto_6:
	.string "It seems it can change its type\n"
	.string "depending on the object it is holding\l"
	.string "it. Inside the top floors of KANTO\l"
	.string "RADIO TOWER, they will be sold, very\l"
	.string "soon you will be able to enter,\l"
	.string "{PLAYER}.$"

RocketHideout_8F_Mision_Central_Energia_Texto_7:
	.string "Returning to the issue of CINNABAR\n"
	.string "ISLAND{PAUSE 25}…{PAUSE 15} I would appreciate it if you\l"
	.string "didn't speak with anyone about\l"
	.string "whatever you may have seen there, not\l"
	.string "even with ANDRA.$"

RocketHideout_8F_Mision_Central_Energia_Texto_8:
	.string "Many of the prototypes we left there\n"
	.string "are in the testing phase, they are\l"
	.string "volatile and still need to get better.\l"
	.string "However, you must have felt the\l"
	.string "tremendous potential of some of them.$"

RocketHideout_8F_Mision_Central_Energia_Texto_9:
	.string "Until we are certain we have something\n"
	.string "truly significant, something we can\l"
	.string "control with complete confidence{PAUSE 15}…\l"
	.string "those projects are completely\l"
	.string "confidential, do you understand\l"
	.string "{PLAYER}?$"

RocketHideout_8F_Mision_Central_Energia_Texto_10:
	.string "Now, let's talk about your next mission:\n"
	.string "finish the issue about the roads to\l"
	.string "SAFFRON CITY.$"

RocketHideout_8F_Mision_Central_Energia_Texto_11:
	.string "It seems that strange POKÉMON has\n"
	.string "returned, and it's interfering with the\l"
	.string "final phase of the construction.$"

RocketHideout_8F_Mision_Central_Energia_Texto_12:
	.string "I'm afraid there's no choice but to\n"
	.string "capture it so it definitively doesn't\l"
	.string "cause any more problems.$"

RocketHideout_8F_Mision_Central_Energia_Texto_13:
	.string "So, your mission will be, on the eve of\n"
	.string "the II GRAND MEETING in GOLDENROD, to\l"
	.string "take charge of that POKÉMON.$"

RocketHideout_8F_Mision_Central_Energia_Texto_14:
	.string "I'll be heading to GOLDENROD now; I have\n"
	.string "to organize the preparations for the\l"
	.string "meeting with the DIRECTOR.$"

RocketHideout_8F_Mision_Central_Energia_Texto_15:
	.string "It's time to start reaping the rewards\n"
	.string "of our work, {PLAYER}. In a very short\l"
	.string "time, we're witnessing significant\l"
	.string "transformations in both regions, the\l"
	.string "same ones that have been brewing for a\l"
	.string "year now, since the I GRAND MEETING or\l"
	.string "even before.$"



RocketHideout_8F_Final_DLC::
lock
clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
addobject 1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Mansion_Oak_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_1 MSGBOX_AUTOCLOSE
fadescreen 1
delay 40
fadescreen 0
msgbox RocketHideout_8F_Final_DLC_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_2
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_3
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_4
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_8F_Final_DLC_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_5
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_7
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_13 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GIOVANNI_2, RocketHideout_8F_Final_DLC_Texto_14
applymovement 1, CuevaTesoro4_Jefe_Final_Move_9
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox RocketHideout_8F_Final_DLC_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_MEWTWO, 100, ITEM_MEWTWONITE_Y
waitfanfare
msgbox RocketHideout_8F_Final_DLC_Texto_18 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_8F_Final_DLC_Texto_19 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_1
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_20 MSGBOX_AUTOCLOSE
applymovement 1, RocketHideout_8F_Final_DLC_Move_6
waitmovement 0x0
msgbox RocketHideout_8F_Final_DLC_Texto_21 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 216
delay 50
warpsilent MAP_DEVON_S9, 40, 7
release
end

RocketHideout_8F_Final_DLC_Move_7:
walk_slow_down
step_end

RocketHideout_8F_Final_DLC_Move_6:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_5:
face_up
step_end

RocketHideout_8F_Final_DLC_Move_4:
walk_slow_left
step_end

RocketHideout_8F_Final_DLC_Move_3:
walk_slow_right
step_end

RocketHideout_8F_Final_DLC_Move_2:
walk_in_place_down
step_end

RocketHideout_8F_Final_DLC_Move_1:
face_right
step_end

RocketHideout_8F_Final_DLC_Texto_1:
	.string "GIOVANNI: {PLAYER}! ARCHER and I\n"
	.string "should have been there. Tell me\l"
	.string "everything. What happened to ANDRA?$"

RocketHideout_8F_Final_DLC_Texto_2:
	.string "I understand. We should have realized\n"
	.string "that the atmosphere and role of DEVON\l"
	.string "were very appealing to someone like\l"
	.string "BILL's assistant. I suppose he was\l"
	.string "right; we never paid him enough\l"
	.string "attention.$"

RocketHideout_8F_Final_DLC_Texto_3:
	.string "As for ANDRA{PAUSE 15}…{PAUSE 15} perhaps it's for the best\n"
	.string "this way. After all, her quest may lead\l"
	.string "to a discovery more significant than all\l"
	.string "the research we're conducting{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_4:
	.string "Meanwhile, DEVON has taken action.\n"
	.string "Nevertheless, this doesn't affect our\l"
	.string "plans, even though they are privy to\l"
	.string "everything discussed at the II GRAND\l"
	.string "MEETING.$"

RocketHideout_8F_Final_DLC_Texto_5:
	.string "With ANDRA's absence, our base in HOENN\n"
	.string "has been left without a LEADER, and you\l"
	.string "will be in charge. After the events at\l"
	.string "the RUINS OF ALPH, all the LEGENDARY\l"
	.string "POKÉMON that gathered there returned\l"
	.string "to their original locations. This means\l"
	.string "that the THREE LEGENDARY POKÉMON of\l"
	.string "HOENN: KYOGRE, GROUDON and RAYQUAZA,\l"
	.string "will be there. One of your objectives\l"
	.string "will be to find them in order to study\l"
	.string "them. However{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_6:
	.string "Your main objective will be to gather as\n"
	.string "much information as possible about\l"
	.string "DEVON.$"

RocketHideout_8F_Final_DLC_Texto_7:
	.string "Where it operates, where its research\n"
	.string "laboratories are located, what its\l"
	.string "projects and ambitions are{PAUSE 15}…$"

RocketHideout_8F_Final_DLC_Texto_8:
	.string "OAK came just before you; he was the\n"
	.string "one to inform me initially.$"

RocketHideout_8F_Final_DLC_Texto_9:
	.string "He personally confronted his PRESIDENT\n"
	.string "and was defeated. This occurred while\l"
	.string "the EXECUTIVEs restrained BILL, ANDRA\l"
	.string "and ELM.$"

RocketHideout_8F_Final_DLC_Texto_10:
	.string "There's no doubt they have resources\n"
	.string "and are well-versed in the art of\l"
	.string "POKÉMON combat.$"

RocketHideout_8F_Final_DLC_Texto_11:
	.string "Perhaps they can push you to your\n"
	.string "limits more than in the RUINS OF ALPH,\l"
	.string "who knows.$"

RocketHideout_8F_Final_DLC_Texto_12:
	.string "That's why, {PLAYER}, I want to test\n"
	.string "you again, this time using our most\l"
	.string "advanced projects.$"

RocketHideout_8F_Final_DLC_Texto_13:
	.string "Now, face the full power of the\n"
	.string "technology developed by two regions!$"

RocketHideout_8F_Final_DLC_Texto_14:
.string "Really amazing, you are still on the top.$"

RocketHideout_8F_Final_DLC_Texto_15:
	.string "There's no doubt, you are the most\n"
	.string "valuable asset that TEAM ROCKET\l"
	.string "possesses. Your story as a LEGENDARY\l"
	.string "TRAINER still has much to offer, trust\l"
	.string "me.$"

RocketHideout_8F_Final_DLC_Texto_16:
	.string "I want you to have this. I know you\n"
	.string "won't resort to it as a cure-all that\l"
	.string "will solve everything, as we tried in the\l"
	.string "past, but consider it as another option.$"

RocketHideout_8F_Final_DLC_Texto_17:
.string "YOU OBTAINED A MEWTWO AT LV.100!!$"

RocketHideout_8F_Final_DLC_Texto_18:
.string "The original MEWTWO is yours, {PLAYER}.$"

RocketHideout_8F_Final_DLC_Texto_19:
	.string "Of course, it is equipped with the\n"
	.string "latest in technology: the MEGA STONE\l"
	.string "that transforms it into its Y form. As I\l"
	.string "mentioned in the meeting, the\l"
	.string "&-VOLCARONA you faced was crucial in\l"
	.string "boosting its SPECIAL ATTACK to\l"
	.string "stratospheric levels.$"

RocketHideout_8F_Final_DLC_Texto_20:
	.string "That's all, {PLAYER}. I recommend\n"
	.string "exploring and gradually adapting to\l"
	.string "HOENN. DEVON's headquarters are in\l"
	.string "RUSTBORO CITY, however, we don't know\l"
	.string "if that's their main operational center.$"

RocketHideout_8F_Final_DLC_Texto_21:
	.string "Meanwhile, we are still developing the\n"
	.string "prototypes of level II and{PAUSE 35}…{PAUSE 35} III. Until\l"
	.string "then{PAUSE 15}…{PAUSE 15} keep improving.$"

