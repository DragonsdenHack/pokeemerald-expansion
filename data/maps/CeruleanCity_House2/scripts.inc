CeruleanCity_House2_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeruleanCity_House2_OnFrame
	.byte 0

CeruleanCity_House2_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 10, CeruleanCityHouse2_Montanero
	.2byte 0

CeruleanCityHouse2_1::
lock     
faceplayer     
msgbox CeruleanCity_House2_Text_1, MSGBOX_DEFAULT
release     
end

CeruleanCity_House2_Text_1:
.string "{PAUSE 5}…{PAUSE 5}$"



CeruleanCityHouse2_2::
lock     
faceplayer     
msgbox CeruleanCity_House2_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_House2_Text_2:
	.string "Sieh dir nur an, was du angerichtet\n"
	.string "hast! Wir werden Monate brauchen, um\l"
	.string "uns davon zu erholen!$"

CeruleanCity_House2_Batalla_Montañero_move3.1:
emote_exclamation_mark
step_end

CeruleanCityHouse2_Montanero::
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
applymovement 3, CeruleanCity_House2_Batalla_Montañero_move1
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move1
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1.1, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_1.2, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2, MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.01, MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.1, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move2
waitmovement 0x0
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_2.2, MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move3
waitmovement 0x0
playse SE_PIN
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move3.1
waitmovement 0x0
waitse
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_3, MSGBOX_AUTOCLOSE
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move4
waitmovement 0x0
trainerbattle_no_intro TRAINER_GRUNT_AQUA_HIDEOUT_4, CeruleanCity_House2_Batalla_Montañero_Text_4
msgbox CeruleanCity_House2_Batalla_Montañero_Text_5, MSGBOX_AUTOCLOSE
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move5
applymovement 1, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
delay 10
playse SE_SHOP
waitse
delay 10
playse SE_SHOP
waitse
delay 10
playse SE_SHOP
waitse
delay 10
applymovement 4, CeruleanCity_House2_Batalla_Montañero_move7
applymovement OBJ_EVENT_ID_PLAYER, CeruleanCity_House2_Batalla_Montañero_move6
waitmovement 0x0
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_6.1, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_TM28
waitfanfare
msgbox CeruleanCity_House2_Batalla_Montañero_Text_7, MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_SOFT_SAND
waitfanfare
delay 10
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8, MSGBOX_AUTOCLOSE
delay 15
msgbox CeruleanCity_House2_Batalla_Montañero_Text_8.1, MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
fadescreen 1
delay 20
removeobject 3
removeobject 4
fadescreen 0
setvar VAR_UNUSED_0x40F7, 11
release
end

CeruleanCity_House2_Batalla_Montañero_Text_1:
	.string "Es ist aus, WANDERER! Das passiert halt,\n"
	.string "wenn man mit exklusiven TMs angibt!$"

CeruleanCity_House2_Batalla_Montañero_Text_1.1:
	.string "Pech für dich, dass die TM SCHAUFLER\n"
	.string "für uns ziemlich nützlich ist! Hättest\l"
	.string "du dich kooperativ gezeigt, hätten wir\l"
	.string "dein Haus nicht verwüstet!$"
	
CeruleanCity_House2_Batalla_Montañero_Text_1.2:
	.string "Weil du so stur warst, nehmen wir jetzt\n"
	.string "einfach alle deine TMs mit. Hättest\l"
	.string "einfach welche rausrücken sollen,\l"
	.string "als wir noch nett gefragt haben!$"

CeruleanCity_House2_Batalla_Montañero_Text_2:
	.string "WANDERER: Ich werde euch nicht eine\n"
	.string "einzige TM überlassen! Wenn wir nach\l"
	.string "eurer Pfeife getanzt hätten, würdet ihr\l"
	.string "nur unsere Gutmütigkeit ausnutzen! Wir\l"
	.string "wissen genau, wofür Ihr sie einsetzen\l"
	.string "werdet!$"
	
CeruleanCity_House2_Batalla_Montañero_Text_2.01:
	.string "Ihr werdet die TMs nicht in diesem Haus\n"
	.string "finden, weil ich sie immer bei mir trage!\l"
	.string "Ihr werdet mich im Kampf besiegen\l"
	.string "müssen!$"

CeruleanCity_House2_Batalla_Montañero_Text_2.1:
	.string "Wie schade, dass ihr alle Schwächlinge\n"
	.string "seid! Mein SCHAUFLER wird eure\l"
	.string "mickrigen RETTAN und RATTFRATZ\l"
	.string "begraben!$"

CeruleanCity_House2_Batalla_Montañero_Text_2.2:
	.string "Los, komm schon!$"

CeruleanCity_House2_Batalla_Montañero_Text_3:
	.string "Und dieses Grotten-RATTFRATZ hier?\p"
	.string "Wer bist du? Du willst dich mit mir\n"
	.string "anlegen? Das wirst du noch bitter\l"
	.string "bereuen!$"

CeruleanCity_House2_Batalla_Montañero_Text_4:
.string "Oh{PAUSE 10}…{PAUSE 10} No{PAUSE 10}…{PAUSE 10} Bitte{PAUSE 10}…{PAUSE 10}$"

CeruleanCity_House2_Batalla_Montañero_Text_5:
	.string "Genau das passiert, wenn man uns\n"
	.string "ROCKETs unterschätzt! Du wirst für\l"
	.string "deine große Fresse bezahlen!$"

CeruleanCity_House2_Batalla_Montañero_Text_6:
	.string "Wie ist nochmal dein Name? {PLAYER}?\n"
	.string "Wow! Dieser WANDERER hatte 20\l"
	.string "SCHAUFLER TMs! Und er wollte sie alle\l"
	.string "für sich behalten! Dank dir gehören sie\l"
	.string "jetzt uns! Wir werden LAMBDA von deiner\l"
	.string "Leistung hier berichten!$"

CeruleanCity_House2_Batalla_Montañero_Text_6.1:
	.string "Hier, für dich. Das hast du dir verdient!$"

CeruleanCity_House2_Batalla_Montañero_Text_7:
	.string "Er hatte noch 'n anderes Item. Es\n"
	.string "scheint BODEN-Attacken zu verstärken.\p"
	.string "Dieser kleine Schlingel hat es bestimmt\n"
	.string "benutzt, um seinen SCHAUFLER zu\l"
	.string "verstärken. Hier, kannste haben.$"

CeruleanCity_House2_Batalla_Montañero_Text_8:
	.string "Das war's erstmal, Kumpel. Mit diesen\n"
	.string "TMs können wir allgemein besser graben\l"
	.string "und leichter aus Höhlen verschwinden.\p"
	.string "Du hast uns geholfen, wertvolle\n"
	.string "Ressourcen für unsere Organisation zu\l"
	.string "sammeln.$"

CeruleanCity_House2_Batalla_Montañero_Text_8.1:
	.string "Gute Arbeit. Wir sehen uns in der\n"
	.string "KASERNE. Du weißt schon welche.$"

CeruleanCity_House2_Batalla_Montañero_move1:
walk_in_place_right
step_end

CeruleanCity_House2_Batalla_Montañero_move2:
walk_in_place_left
step_end

CeruleanCity_House2_Batalla_Montañero_move3:
walk_right
step_end

CeruleanCity_House2_Batalla_Montañero_move4:
walk_left
step_end

CeruleanCity_House2_Batalla_Montañero_move5:
walk_right
walk_right
face_up
step_end

CeruleanCity_House2_Batalla_Montañero_move6:
face_down
step_end

CeruleanCity_House2_Batalla_Montañero_move7:
walk_left
face_up
step_end
