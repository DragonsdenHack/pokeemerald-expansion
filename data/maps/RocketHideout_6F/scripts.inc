RocketHideout_6F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, RocketHideout_6F_Disguise_Player_OnResume
map_script MAP_SCRIPT_ON_FRAME_TABLE, RocketHideout_6F_OnFrame
	.byte 0


RocketHideout_6F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 29, RocketHideout_6F_Escena_Lance
map_script_2 VAR_UNUSED_0x40F7, 31, RocketHideout_6F_Escena_Lance_2
map_script_2 VAR_UNUSED_0x40F7, 801, RocketHideout_6F_Disguise_Player
	.2byte 0

RocketHideout_6F_Disguise_Player_OnResume:
map_script_2 VAR_UNUSED_0x40F7, 800, RocketHideout_6F_Disguise_Player_2
	.2byte 0

RocketHideout_6F_Disguise_Player_2::
setobjectxy 14, 29, 25
playse SE_M_STAT_INCREASE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
setvar VAR_UNUSED_0x40F7, 801
end

RocketHideout6F_1::
lock     
faceplayer     
msgbox RocketHideout6F_Text_1, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_1:
	.string "HA! Die Idioten hier in KANTO denken, wir\n"
	.string "wären dumm. Aber wir haben mehr Waffen,\l"
	.string "als sie sich in ihren schlimmsten\l"
	.string "Träumen vorstellen können! Zeige denen\l"
	.string "nie unser ganzes Repertoire, Junge!\p"
	.string "Hahaha!$"

RocketHideout6F_2::
lock     
faceplayer     
msgbox RocketHideout6F_Text_2, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_2:
	.string "LAMBDA? Der Leiter dieser BASIS? Er ist\n"
	.string "niemand, den du zum Feind haben willst.\p"
	.string "Er ist ein Experte im Bereich der\n"
	.string "Gift-Attacken und Explosionen, was\l"
	.string "einen Kampf gegen ihn riskant macht.\l"
	.string "Ohne ein PSYCHO-POKéMON wirst du kein\l"
	.string "Land gegen ihn sehen. Vor allem, wenn du\l"
	.string "nur physische Angreifer hast.$"



RocketHideout6F_3::
lock     
faceplayer     
msgbox RocketHideout6F_Text_3, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_3:
	.string "Hey. Ich habe gehört, unsere JOHTO\n"
	.string "BASIS hat große Fortschritte bei\l"
	.string "Radiowellen und deren potenziellen\l"
	.string "Auswirkungen auf POKéMON gemacht.\p"
	.string "Das würde ich mir gerne mal ansehen.$"



RocketHideout6F_4::
lock     
faceplayer     
msgbox RocketHideout6F_Text_4, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_4:
.string "…\n"
.string "…\p"
	.string "-Scheint, als würde er sich auszuruhen.\n"
	.string "Aber gleichzeitig wirkt er bereit für\l"
	.string "jeden Befehl, den er von LAMBDA\l"
	.string "erhalten könnte-$"



RocketHideout6F_5::
lock     
faceplayer     
msgbox RocketHideout6F_Text_5, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_5:
.string "…\n"
.string "…\p"
	.string "-Scheint, als würde er sich auszuruhen.\n"
	.string "Aber gleichzeitig wirkt er bereit für\l"
	.string "jeden Befehl, den er von LAMBDA\l"
	.string "erhalten könnte-$"



RocketHideout6F_6::
lock     
faceplayer     
msgbox RocketHideout6F_Text_6, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_6:
	.string "traducir$"



RocketHideout6F_7::
lock     
faceplayer     
msgbox RocketHideout6F_Text_7, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_7:
	.string "Ich sehe nichts Falsches an dem, was\n"
	.string "wir hier tun. Alle gewinnen. Schau dir\l"
	.string "doch nur mal die POKéMON hier an. Sie\l"
	.string "sind glücklich, in Gesellschaft ihrer\l"
	.string "Artgenossen zu sein. Sie werden\l"
	.string "stärker, ihre TRAINER sind zufrieden\l"
	.string "und wir verdienen Kohle!\p"
	.string "So funktioniert das Leben. Die\n"
	.string "Unternehmer sind diejenigen, die\l"
	.string "es zu etwas bringen!$"



RocketHideout6F_14::
end



RocketHideout6F_15::
lock     
faceplayer     
msgbox RocketHideout6F_Text_15, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_15:
	.string "Über siebzig Prozent des\n"
	.string "POKéMON-Handels in KANTO geht über uns\l"
	.string "und das verdanken wir der SPIELHALLE\l"
	.string "und dem stetigen Nachschub an POKéMON\l"
	.string "von hier und den anderen Basen.\p"
	.string "In dem Bereich kann uns niemand\n"
	.string "das Wasser reichen.$"



RocketHideout6F_16::
end



RocketHideout6F_17::
end



RocketHideout6F_18::
lock     
faceplayer     
msgbox RocketHideout6F_Text_18, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_18:
	.string "-Darin befindet sich ein SICHLOR. In\n"
	.string "der SPIELHALLE geht es offenbar für\n"
	.string "110,000¥ über den Tisch.-$"



RocketHideout6F_19::
lock     
faceplayer     
msgbox RocketHideout6F_Text_19, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_19:
	.string "-Darin befindet sich ein DRATINI. In der\n"
	.string "SPIELHALLE geht es offenbar für 53,000¥\l"
	.string "über den Tisch.-$"



RocketHideout6F_20::
end



RocketHideout6F_21::
lock     
faceplayer     
msgbox RocketHideout6F_Text_21, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_21:
	.string "Anscheinend ist ATLAS, der das\n"
	.string "ROCKET-LAGER auf EILAND FÜNF leitet,\l"
	.string "stärker als LANCE und LAMBDA. Ich habe\l"
	.string "gehört, er hat ein SICHLOR, das mit\l"
	.string "seinen Klingen alles zu Hackfleisch\l"
	.string "verarbeitet.$"



RocketHideout6F_22::
lock     
faceplayer     
msgbox RocketHideout6F_Text_22, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_22:
	.string "Es fühlt sich gut an, mit dem Wissen zu\n"
	.string "arbeiten, dass man nach eigenem\l"
	.string "Ermessen handelt! Ganz anders als die\l"
	.string "Bürger von KANTO, die sich wie kleine\l"
	.string "Lämmer dem Willen der TOP VIER beugen!$"



RocketHideout6F_23::
lock     
faceplayer     
msgbox RocketHideout6F_Text_23, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_23:
	.string "Nichts fühlt sich so geil an wie die\n"
	.string "Freiheit, die man außerhalb des\l"
	.string "Gesetzes genießt!\p"
	.string "TEAM ROCKET ROCKT!!$"



RocketHideout6F_24::
lock     
faceplayer     
msgbox RocketHideout6F_Text_24, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_24:
	.string "Diese BASIS verdient über 1,000,000¥\n"
	.string "pro Woche mit der Pflege von POKéMON.\l"
	.string "Aber niemand weiß, dass es nur 'ne\l"
	.string "Tarnung für unser eigentliches\l"
	.string "Geschäft ist! Mit dem Verkauf der\l"
	.string "hier gezüchteten EIER machen wir\l"
	.string "zwanzigmal mehr Kohle, als mit der\l"
	.string "Pflege ihrer Eltern!$"



RocketHideout6F_25::
lock     
faceplayer     
msgbox RocketHideout6F_Text_25, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_25:
	.string "Vielleicht ist es ein bisschen grausam,\n"
	.string "die POKéMON von ihren EIERN zu trennen.\p"
	.string "Aber normalerweise behandeln TRAINER\n"
	.string "ihre POKéMON gut - sogar wir von TEAM\l"
	.string "ROCKET. Das wir sie misshandeln, ist\l"
	.string "doch nur ein Klischee. Obwohl es schon\l"
	.string "stimmt, dass es bei uns ein paar solche\l"
	.string "Typen gibt …$"



RocketHideout6F_26::
lock     
faceplayer     
msgbox RocketHideout6F_Text_26, MSGBOX_DEFAULT
release     
end

RocketHideout6F_Text_26:
	.string "Wir haben überall, von hier bis zur ROUTE\n"
	.string "5, Kameras installiert. So können wir\l"
	.string "den HORT ohne Aufsehen führen.$"



RocketHideout6FDocumento_100::
msgbox RocketHideout6FDocumento_Text_100, MSGBOX_DEFAULT  
release
end

RocketHideout6FDocumento_Text_100:
	.string "-Darin befindet sich ein DRATINI. In der\n"
	.string "SPIELHALLE geht es offenbar für ¥53,000\l"
	.string "über den Tisch.-$"



RocketHideout6FDocumento_101::
msgbox RocketHideout6FDocumento_Text_101, MSGBOX_DEFAULT  
release
end

RocketHideout6FDocumento_Text_101:
	.string "-Darin befindet sich ein SICHLOR.\n"
	.string "In der SPIELHALLE geht es offenbar\l"
	.string "für ¥110.000 über den Tisch.-$"



RocketHideout6FDocumento_102::
msgbox RocketHideout6FDocumento_Text_102, MSGBOX_AUTOCLOSE 
release
end

RocketHideout6FDocumento_Text_102:
.string "VALUE IN GAME CORNER COINS\n"
	.string "OF THE FOLLOWING GOODS:\p"
	.string "- ABRA(LV:9): 180\n"
	.string "- CLEFAIRY(LV:8): 500\l"
	.string "- NUGGET: 500\l"
	.string "- SMOKE BALL: 800\l"
	.string "- COAL/M. SEED/M. WATER: 1,000\l"
	.string "- YELLOW FLUTE: 1,600\l"
	.string "- PINSIR(LV:18): 2,500\l"
	.string "- DRATINI(LV:18): 2,800\l"
	.string "- TM. IRON TAIL: 3,500\l"
	.string "- TM.THUNDERB/I.BEAM/FLAMETH: 4,000\l"
	.string "- TM.SHADOW BALL: 4,500\l"
	.string "- SCYTHER (LV:25): 5,500\l"
	.string "- PORYGON (LV:26): 9,999\l"
	.string "- DOME/HELIX FOSSIL: 15,000\l"
	.string "- OLD AMBER: 22,500\p"
	.string "Note: 1 COIN is equivalent to ¥20.$"

RocketHideout_6F_Petrel_Mision_1::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_1, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2.2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_2.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_3, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_3.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move4
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_4, MSGBOX_AUTOCLOSE
delay 5
msgbox RocketHideout_6F_Petrel_Text_Mision_5, MSGBOX_AUTOCLOSE
delay 15
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2.1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_7, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_7.1, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_7.2, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
waitse
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_8, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_9, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, RocketHideout_6F_Petrel_Mision_1_move2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_9.1, MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move5
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_10, MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move7
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_11, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move6.2
applymovement 27, RocketHideout_6F_Petrel_Mision_1_move6.1
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
clearflag FLAG_HIDE_ROUTE_118_GABBY_AND_TY_1
delay 20
removeobject 27
setvar VAR_UNUSED_0x40F7, 10
release
end

RocketHideout_6F_Petrel_Mision_1_move6.2:
delay_16
face_left
delay_16
delay_8
face_up
step_end

RocketHideout_6F_Petrel_Mision_1_move6.1:
walk_fast_left
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end



RocketHideout_6F_Petrel_Text_Mision_1:
	.string "????: Willkommen in unserer HORT-BASIS\n"
	.string "auf Route 5. Ich heiße LAMBDA. Ich bin\l"
	.string "ein TEAM ROCKET ADMINISTRATOR und\l"
	.string "Leiter dieser Basis.$"

RocketHideout_6F_Petrel_Text_Mision_2:
	.string "LAMBDA: Ich fasse mich kurz. Der\n"
	.string "Hauptzweck dieser BASIS besteht in der\l"
	.string "finanziellen Unterstützung unserer\l"
	.string "Projekte.$"

RocketHideout_6F_Petrel_Text_Mision_2.1:
	.string "Hier beschränken wir uns darauf,\n"
	.string "profitable Geschäftsideen zu\l"
	.string "entwickeln und sie in die Praxis\l"
	.string "umzusetzen: Alles, um das nötige Geld\l"
	.string "für die wirklich bahnbrechenden\l"
	.string "Forschungen zu beschaffen {PAUSE 5}…{PAUSE 5}$"

RocketHideout_6F_Petrel_Text_Mision_3:
	.string "Ich habe gehört, dass ihr euch auf\n"
	.string "EILAND FÜNF ganz okay angestellt habt.\p"
	.string "Aber es bleibt abzuwarten, wie ihr euch\n"
	.string "hier in KANTO schlägt.$"

RocketHideout_6F_Petrel_Text_Mision_3.1:
	.string "Als die unerfahrenen RÜPEL, die ihr\n"
	.string "seid, werdet ihr jetzt eure ZWEITE\l"
	.string "OFFIZIELLE MISSION absolvieren, die\l"
	.string "zugleich eure erste in KANTO ist.\p"
	.string "Ihr werdet westlich von AZURIA CITY\n"
	.string "mit den Rekruten zusammenarbeiten, die\l"
	.string "auf dem MONDBERG stationiert sind.$"

RocketHideout_6F_Petrel_Text_Mision_4:
	.string "Einmal dort angekommen, werdet ihr den\n"
	.string "Ort von allen Arten von FOSSILIEN,\l"
	.string "MONDSTEINEN, NUGGETs und anderen\l"
	.string "Wertgegenständen freiräumen. Priorität\l"
	.string "haben dabei die FOSSILIEN. Ihr Wert auf\l"
	.string "dem Schwarzmarkt ist enorm - mehr als\l"
	.string "der aller POKéMON, die wir in der\l"
	.string "SPIELHALLE verkaufen.$"

RocketHideout_6F_Petrel_Text_Mision_5:
	.string "Wenn ihr fertig seid, kommt hierher\n"
	.string "zurück, damit alle Funde ausgewertet\l"
	.string "werden können. Wir werden euch\l"
	.string "dementsprechend belohnen.\p"
	.string "Gibt es Fragen?$"

RocketHideout_6F_Petrel_Text_Mision_6:
	.string "ANDRA: Ich habe Fragen bezüglich einer\n"
	.string "Sache, SIR. Wie wird unsere Leistung bei\l"
	.string "der Mission bewertet? Wir sind immerhin\l"
	.string "viele. Werden wir nur als Gruppe\l"
	.string "bewertet oder auch individuell?$"

RocketHideout_6F_Petrel_Text_Mision_7:
	.string "LAMBDA: Wir haben hier also einen\n"
	.string "ehrgeizigen RÜPEL. Wenn du dir Sorgen\l"
	.string "machst, dass es unmöglich ist, in der\l"
	.string "Organisation aufzusteigen, weil deine\l"
	.string "individuellen Leistungen in größeren\l"
	.string "Operationen untergehen, dann weißt du\l"
	.string "bereits, dass für uns das Team an\l"
	.string "erster Stelle steht. Ich werde es\l"
	.string "trotzdem klar und deutlich erklären.\p"
	.string "Es gibt zwei Möglichkeiten, wie du\n"
	.string "hier aufsteigen kannst:$"

RocketHideout_6F_Petrel_Text_Mision_7.1:
	.string "1 - Bei jeder Gruppenmission bewerten\n"
	.string "wir neben anderen Kriterien auch die\l"
	.string "Leistung jedes Einzelnen.$"

RocketHideout_6F_Petrel_Text_Mision_7.2:
	.string "2 - Wir entsenden nicht bei allen\n"
	.string "Missionen viele RÜPEL. Manche Missionen\l"
	.string "werden alleine oder in Zweierteams\l"
	.string "durchgeführt, wie eure im HAUS der\l"
	.string "KONSULIN. In solchen Missionen wiegen\l"
	.string "eure Verdienste, aber auch euer\l"
	.string "Versagen, umso schwerer.$"

RocketHideout_6F_Petrel_Text_Mision_8:
	.string "ANDRA: Verstanden! Wir werden TEAM\n"
	.string "ROCKET mitsamt seinen Bestrebungen\l"
	.string "nicht enttäuschen!$"

RocketHideout_6F_Petrel_Text_Mision_9:
	.string "LAMBDA: Alles klar. Dann legt mal los!\p"
	.string "Eure Ankunft hier überschneidet sich\n"
	.string "mit der Mission. Also habt ihr keine Zeit\l"
	.string "zu verlieren. Später werden wir genug\l"
	.string "Gelegenheit haben, zu besprechen, wie\l"
	.string "der Laden hier läuft.$"

RocketHideout_6F_Petrel_Text_Mision_9.1:
	.string "Schnappt euch alle FOSSILIEN und\n"
	.string "vernichtet jeden, der sich euch\l"
	.string "in den Weg stellt!$"

RocketHideout_6F_Petrel_Text_Mision_10:
.string "ANDRA: SIR, JAWOHL, SIR!$"

RocketHideout_6F_Petrel_Text_Mision_11:
	.string "Wir haben wirklich Glück, {PLAYER}! Wir\n"
	.string "sind gerade hier angekommen und wurden\l"
	.string "schon einer neuen Mission zugeteilt.\p"
	.string "Schnappen wir uns all die FOSSILIEN …\n"
	.string "um jeden Preis! Wir sehen uns später\l"
	.string "beim Eingang zum MONDBERG.$"

RocketHideout_6F_Petrel_Mision_1_move1:
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_1_move2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_1_move2.1:
delay_8
face_up
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Mision_1_move2.2:
delay_8
face_up
delay_8
step_end

RocketHideout_6F_Petrel_Mision_1_move3:
walk_up
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_1_move4:
walk_slow_down
face_left
step_end

RocketHideout_6F_Petrel_Mision_1_move5:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_1_move6:
face_up
step_end

RocketHideout_6F_Petrel_Mision_1_move7:
face_down
step_end


RocketHideout_6F_Warp::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Warp_move2.1
waitmovement 0x0
msgbox RocketHideout_6F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_6F_Warp_No
warp MAP_ROUTE5_HOUSE1, 0, 2
release
end

RocketHideout_6F_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Warp_move1
release
end

RocketHideout_6F_Warp_Text_YesNo:
	.string "Ein kleiner Sprung genügt, um die Treppe\n"
	.string "zur PENSION zu erreichen. Möchtest du\l"
	.string "die BASIS verlassen?$"

RocketHideout_6F_Warp_move2.1:
walk_in_place_down
step_end

RocketHideout_6F_Warp_move1:
walk_slow_right
step_end

RocketHideout_6F_Petrel_Mision_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_1, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_3, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_4, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_5, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_6, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_7, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_2_7.1, MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move5
waitmovement 0x0
delay 10
playse SE_SHOP
removemoney 999999 0
updatemoneybox
delay 80
playse SE_M_EMBER
msgbox RocketHideout_6F_Petrel_Text_Mision_2_8, MSGBOX_AUTOCLOSE
waitfanfare
delay 50
hidemoneybox
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_2_move6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_9, MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Text_Mision_2_2, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_10, MSGBOX_AUTOCLOSE
delay 15
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move3.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_2_10.1, MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_11, MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Text_Mision_2_11.1, MSGBOX_AUTOCLOSE
delay 15
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_12, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move4.1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Text_Mision_2_12.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_2_move2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Text_Mision_2_13, MSGBOX_AUTOCLOSE
setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 1
setvar VAR_UNUSED_0x40F7, 19
setvar VAR_UNUSED_0x40FC, 2
release
end

RocketHideout_6F_Petrel_Mision_2_move4.1:
delay_8
face_up
delay_8
step_end

RocketHideout_6F_Petrel_Mision_2_move3.1:
face_up
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Text_Mision_2_1:
	.string "LAMBDA: RÜPEL {PLAYER}. Wir wurden\n"
	.string "über dein Handeln auf dem MONDBERG\l"
	.string "unterrichtet. Der HOCHRANGIGE RÜPEL\l"
	.string "FRANK hat mir seine Seite der\l"
	.string "Geschichte erzählt. Ihm zufolge hätten\l"
	.string "wir zwei FOSSILIEN mehr auf unserem\l"
	.string "Konto verbuchen können. Hast du auch\l"
	.string "nur die reinste Vorstellung davon, wie\l"
	.string "viel Geld das ist, {PLAYER}?\p"
	.string "Die Projekte und Ressourcen, die wir\n"
	.string "damit hätten finanzieren können?$"

RocketHideout_6F_Petrel_Text_Mision_2_2:
.string "…$"

RocketHideout_6F_Petrel_Text_Mision_2_3:
	.string "Ich könnte dich einfach im Gefängnis\n"
	.string "verrotten lassen und zwar lange genug,\l"
	.string "damit du gründlich über dein Versagen\l"
	.string "nachdenken könntest! Oder noch\l"
	.string "schlimmer, ich könnte dich einfach\l"
	.string "aus TEAM ROCKET rausschmeißen!$"

RocketHideout_6F_Petrel_Text_Mision_2_4:
	.string "Jetzt, wo das gesagt ist. Vielleicht ist\n"
	.string "der Anführer der Mission von der groben\l"
	.string "und ungeduldigen Sorte.\p"
	.string "Vielleicht hat er in der Hitze des\n"
	.string "Gefechts vorübergehend sein\l"
	.string "Urteilsvermögen eingebüßt.$"

RocketHideout_6F_Petrel_Text_Mision_2_5:
	.string "Es kommt nicht jeden Tag vor, dass ein\n"
	.string "RÜPEL sich mit seinem Vorgesetzten\l"
	.string "anlegt und gewinnt. Entweder bist du\l"
	.string "unglaublich mutig oder unglaublich\l"
	.string "dämlich. Oder beides.\p"
	.string "Finden wir es heraus.$"

RocketHideout_6F_Petrel_Text_Mision_2_6:
	.string "Ich habe eine Mission für dich. Lass uns\n"
	.string "sehen, wie weit dich dein Mut als\l"
	.string "TRAINER und sogenannter\l"
	.string "-ROCKET Ehrenkodex- bringen.$"

RocketHideout_6F_Petrel_Text_Mision_2_7:
	.string "traducir$"

RocketHideout_6F_Petrel_Text_Mision_2_7.1:
	.string "traducir$"

RocketHideout_6F_Petrel_Text_Mision_2_8:
.string "Du hast jetzt ¥0.$"

RocketHideout_6F_Petrel_Text_Mision_2_9:
	.string "LAMBDA: Ein fairer Preis für eine zweite\n"
	.string "Chance, nicht wahr? Ich verspreche dir,\l"
	.string "wenn diese Mission ein Erfolg wird, wirst\l"
	.string "du dir nie wieder Sorgen um Geld machen\l"
	.string "müssen. Denn wenn die Mission Erfolg\l"
	.string "hat, führt das zur drastischen Senkung\l"
	.string "unserer Betriebskosten in allen\l"
	.string "Bereichen.$"

RocketHideout_6F_Petrel_Text_Mision_2_10:
	.string "Wir haben den Hafen von ORANIA als\n"
	.string "Lebensader zwischen KANTO und EILAND\l"
	.string "FÜNF genutzt. Aber die Bullen in KANTO\l"
	.string "schnüffeln schon seit einiger Zeit dort\l"
	.string "herum und es wird immer anstrengender\l"
	.string "und teurer, Seeleute zu bestechen, um\l"
	.string "Waren und Truppen aus EILAND FÜNF\l"
	.string "reinzuschmuggeln.$"


RocketHideout_6F_Petrel_Text_Mision_2_10.1:
	.string "Auch wenn dein Eingreifen die KONSULIN\n"
	.string "zum Stillschweigen gebracht hat, ist es\l"
	.string "nur eine Frage der Zeit, bis sie uns den\l"
	.string "Zugang dorthin komplett abschneiden …$"

RocketHideout_6F_Petrel_Text_Mision_2_11:
	.string "Und hier kommt deine Mission ins Spiel.\n"
	.string "Wir haben Gerüchte über diesen BILL\l"
	.string "gehört - diesen Idioten, der POKéMON\l"
	.string "nur als Sammelsticker ansieht. Scheint\l"
	.string "so, als hätte er ein\l"
	.string "Teleportations-System entwickelt, das\l"
	.string "große Distanzen überbrücken kann.$"

RocketHideout_6F_Petrel_Text_Mision_2_11.1:
	.string "Deine Aufgabe ist es, ihm in seinem Haus\n"
	.string "NÖRDLICH von AZURIA CITY am Ende von\l"
	.string "ROUTE 25 einen Besuch abzustatten und\l"
	.string "entweder das Patent oder sämtliche\l"
	.string "Informationen zu diesem neuartigen\l"
	.string "Teleportations-System in die Finger zu\l"
	.string "kriegen.$"

RocketHideout_6F_Petrel_Text_Mision_2_12:
	.string "Wenn du es schaffst, diese wertvollen\n"
	.string "Informationen in die Finger zu kriegen,\l"
	.string "könnten unsere Wissenschaftler damit\l"
	.string "ein Teleportations-Netzwerk zwischen\l"
	.string "EILAND FÜNF und KANTO entwickeln.$"

RocketHideout_6F_Petrel_Text_Mision_2_12.1:
	.string "Das würde uns Millionen von\n"
	.string "POKéDOLLARN an Transportkosten\l"
	.string "sparen und wir wären nicht länger\l"
	.string "von anderen abhängig.$"

RocketHideout_6F_Petrel_Text_Mision_2_13:
	.string "Das ist deine Chance, dein Versagen auf\n"
	.string "dem MONDBERG wieder gutzumachen.$"

RocketHideout_6F_Petrel_Mision_2_move1:
walk_right
walk_down
walk_down
walk_down
walk_down
walk_right
walk_down
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_2_move2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_2_move3:
face_up
delay_1
walk_slow_up
walk_in_place_left
step_end


RocketHideout_6F_Petrel_Mision_2_move4:
walk_slow_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_2_move5:
walk_right
step_end

RocketHideout_6F_Petrel_Mision_2_move6:
walk_left
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_7.1:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

RocketHideout_6F_Petrel_Mision_3_Bill::
lockall
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
addobject 28
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_2.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_3
waitmovement 0x0
playse SE_PIN
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_2
waitmovement 0x0
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_4
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_5
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_2.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_3 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_4 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_9
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_5 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_9
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_7 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_8 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_10
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_9 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_10 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_11
waitmovement 0x0
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_7
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_12 MSGBOX_AUTOCLOSE
applymovement 28, RocketHideout_6F_Petrel_Mision_3_Bill_move_13
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
removeobject 28
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_13 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_14 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 27, RocketHideout_6F_Petrel_Mision_3_Bill_move_15.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_15.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_15.3
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.2 MSGBOX_AUTOCLOSE
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
waitse
playse SE_M_SOLAR_BEAM
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout8F_Mision_Johto_move_12
delay 100
changeavatar 1
setvar VAR_UNUSED_0x40F7, 800
warpsilent MAP_ROCKET_HIDEOUT_6F, 28, 25

RocketHideout_6F_Petrel_Mision_3_Bill_move_15.3:
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_15.1:
emote_exclamation_mark
delay_16
delay_16
delay_16
face_up
delay_16
delay_8
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_15.2:
emote_exclamation_mark
delay_16
delay_16
delay_16
delay_8
face_down
delay_16
delay_8
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_2.1:
delay_8
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.2:
walk_down
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14.3:
walk_up
face_left
step_end

RocketHideout8F_Mision_Johto_move_12.2:
face_up
step_end

RocketHideout8F_Mision_Johto_move_12.3:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_12.4:
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_texto_19.1:
.string "LAMBDA: Jetzt zu dir, ANDRA.$"


RocketHideout_6F_Disguise_Player::
applymovement 27, RocketHideout8F_Mision_Johto_move_12.2
waitmovement 0x0
playse SE_PIN
applymovement 27, RocketHideout8F_Mision_Johto_move_12.3
waitmovement 0x0
playfanfare MUS_OBTAIN_SYMBOL
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_16 MSGBOX_DEFAULT
waitfanfare
applymovement 27, RocketHideout8F_Mision_Johto_move_12.4
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_19.1 MSGBOX_AUTOCLOSE
playse SE_M_COSMIC_POWER
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.1
applymovement 27, RocketHideout8F_Mision_Johto_move_12.1
waitse
playse SE_M_SOLAR_BEAM
applymovement 27, RocketHideout8F_Mision_Johto_move_12
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
removeobject 27
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 39
playse SE_M_STAT_INCREASE
applymovement 39, RocketHideout8F_Mision_Johto_move_12.1
waitmovement 0x0
playfanfare MUS_OBTAIN_SYMBOL
waitfanfare
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_14.3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_17 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 125000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_18 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_15
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_SHOP
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_16
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_20 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_21 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_22 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_23 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_16.1
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_16.1
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_24 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_17
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_25 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_26.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_2.1
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_28 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_29 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_17
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_30 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_19
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_19
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_31 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_32 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_33.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_16.2
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_34 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18
waitmovement 0x0
delay 10
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_35 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_3_Bill_move_20
applymovement 39, RocketHideout_6F_Petrel_Mision_3_Bill_move_12
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Mision_3_Bill_texto_36 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move6.2
applymovement 39, RocketHideout_6F_Petrel_Mision_1_move6.1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Mision_3_Bill_move_18.2
waitmovement 0x0
setflag FLAG_HIDE_LILYCOVE_MUSEUM_PATRON_1
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
removeobject 39
delay 20
setvar VAR_UNUSED_0x40F7, 23
release
end

RocketHideout_6F_Petrel_Mision_3_Bill_move_18.2:
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_18.1:
face_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_16.2:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_16.1:
emote_exclamation_mark
step_end

RocketHideout8F_Mision_Johto_move_12.1:
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
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_texto_1:
.string "ATLAS: Das ist inakzeptabel, LAMBDA!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_2:
	.string "Du solltet wissen, dass Bill quasi die\n"
	.string "Verkörperung eines verwöhnten Balges\l"
	.string "der Elite der Region ist. Er hat stets\l"
	.string "einen Leibwächter bei sich.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_2.1:
	.string "Und als wäre das noch nicht genug,\n"
	.string "stellt die POLIZEI von AZURIA CITY sein\l"
	.string "Wohl über alles andere.\p"
	.string "Es war leichtsinnig, nur einen von\n"
	.string "uns loszuschicken, um etwas von so\l"
	.string "großer Bedeutung zu stehlen.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_3:
	.string "Glücklicherweise konnte ich {PLAYER}\n"
	.string "noch im letzten Moment retten, sodass\l"
	.string "wir nun das Patent besitzen, dass uns\l"
	.string "Millionen an Transport- und\l"
	.string "Logistikkosten sparen wird.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_4:
	.string "ATLAS: Das Eingreifen von {PLAYER} -\n"
	.string "sprich den Sieg über einige POLIZISTEN,\l"
	.string "die Erlangung des Patents und dessen\l"
	.string "Verteidigung bis zu meinem Erscheinen,\l"
	.string "war entscheidend für den Erfolg dieser\l"
	.string "Mission.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_5:
.string "LAMBDA: Da hast du recht, ATLAS.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_6:
	.string "LAMBDA: Ich schulde dir eine\n"
	.string "Entschuldigung, {PLAYER}. Mir war\l"
	.string "nicht bewusst, in welcher Gefahr du\l"
	.string "warst und ich hätte wissen müssen, dass\l"
	.string "jemand wie BILL gut geschützt ist. Man\l"
	.string "hatte mir gesagt, dass du ein fähiger\l"
	.string "TRAINER bist und deshalb dachte ich,\l"
	.string "dein Können wäre genug, um dieses\l"
	.string "Großmaul zum Schweigen zu bringen, aber\l"
	.string "ich hatte nicht mit so einer schnellen\l"
	.string "und heftigen Reaktion von der POLIZEI\l"
	.string "gerechnet.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_7:
	.string "LAMBDA: Aber wie hast du überhaupt von\n"
	.string "dieser Mission erfahren, ATLAS? Ich\l"
	.string "dachte, du wärst mit der Leitung der\l"
	.string "BASIS auf EILAND FÜNF beschäftigt.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_8:
	.string "ATLAS: Das stimmt, LAMBDA. Aber ANDRA\n"
	.string "hat den Ernst der Mission erkannt und\l"
	.string "mich ohne zu Zögern darüber informiert.\p"
	.string "Mein PANZAERON hat den Rest erledigt.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_9:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_10:
	.string "In Ordnung. Ich muss jetzt los. Auf den\n"
	.string "Inseln gibt es noch viel zu tun.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_11:
.string "LAMBDA!\p"
	.string "Ich hoffe, du wirst diese beiden RÜPEL\n"
	.string "entsprechend belohnen. Ihre\l"
	.string "Leistungen werden uns in der Zukunft\l"
	.string "wertvolle Zeit und Millionen sparen.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_11.1:
	.string "traducir$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_12:
	.string "ATLAS: Bilde dir nicht zu viel darauf\n"
	.string "ein, dass ich dich gerettet habe. Du\n"
	.string "bist lediglich ein wertvoller\l"
	.string "Aktivposten für unsere Organisation\l"
	.string "und hast im Sinne unserer moralischen\l"
	.string "Werte gehandelt. Das reicht aus {PAUSE 15}…{PAUSE 15} Ich\l"
	.string "werde euch beide früher oder später\l"
	.string "wiedersehen.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_13:
	.string "LAMBDA: ATLAS ist die Verkörperung von\n"
	.string "Effizienz. Deswegen ist er der\l"
	.string "CHEF-ADMINISTRATOR von TEAM ROCKET.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_14:
	.string "Was euch angeht, entschuldige ich mich\n"
	.string "noch einmal. Besonders bei dir,\l"
	.string "{PLAYER}. Viele dachten, EILAND FÜNF\l"
	.string "würde nur Schwächlinge und unfähige\l"
	.string "ROCKETs hervorbringen. Aber ihr habt\l"
	.string "hiermit das Gegenteil bewiesen!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_15:
	.string "Aufgrund eurer hervorragenden\n"
	.string "Leistung und Loyalität zu TEAM ROCKET\l"
	.string "werdet ihr hiermit befördert.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.1:
	.string "Aufgrund eurer hervorragenden\n"
	.string "Leistung und Loyalität zu TEAM ROCKET\l"
	.string "werdet ihr hiermit befördert. Ihr steigt\l"
	.string "von gewöhnlichen RÜPELN zu\l"
	.string "HOCHRANGIGEN RÜPELN auf. Das gibt euch\l"
	.string "die Möglichkeit, eigene Missionen zu\l"
	.string "leiten - so wie es FRANK am MONDBERG\l"
	.string "getan hat. Außerdem erhaltet ihr das\l"
	.string "Recht an Vorstandssitzungen mit\l"
	.string "unserem ANFÜHRER GIOVANNI\l"
	.string "teilzunehmen.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_15.2:
	.string "Darüber hinaus erhaltet ihr noch\n"
	.string "Zugang zu bestimmten vertraulichen\l"
	.string "Informationen. Aber das ist ein\l"
	.string "Thema für ein anderes Mal.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_16:
.string "{PLAYER} wurde zum HOCHRANGIGEN\n"
	.string "RÜPEL befördert!!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_17:
	.string "LAMBDA: Um euren neuen Status zu\n"
	.string "feiern und als Belohnung für den Erfolg\l"
	.string "eurer jeweiligen Missionen, erhaltet ihr\l"
	.string "jetzt eure Belohnungen {PAUSE 15}…{PAUSE 15} Für dich\l"
	.string "{PLAYER}, aufgrund der Einsparungen,\l"
	.string "die dieses Patent einbringen wird und\l"
	.string "als Ausgleich für die POKéDOLLAR, die\l"
	.string "nach der MONDBERG-Mission einbehalten\l"
	.string "wurden {PAUSE 15}...{PAUSE 15} erhältst du das Folgende {PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_18:
.string "Du erhältst ¥125.000!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_19:
	.string "LAMBDA: Was dich betrifft, ANDRA. Das\n"
	.string "du ATLAS gewarnt hast, war ebenfalls\l"
	.string "entscheidend und du hast darüber\l"
	.string "hinaus deine Mission in ORANIA CITY\l"
	.string "erfolgreich beendet. In deinem Fall\l"
	.string "beträgt die Gesamtbelohnung ¥75.000$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_20:
.string "LAMBDA: Also dann {PAUSE 25}…{PAUSE 25}\p"
	.string "Ich werde euch jetzt eure nächste\n"
	.string "Mission geben. Ihr kennt doch die M.S.\l"
	.string "ANNE, oder?$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_21:
	.string "ANDRA: Der berühmte Luxusliner, der\n"
	.string "gerade im Hafen von ORANIA angekommen\l"
	.string "ist?$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_22:
	.string "LAMBDA: Genau der. Es ist mittlerweile\n"
	.string "schon Tradition, dass dort, vor ihrer\l"
	.string "endgültigen Abfahrt aus ORANIA, eine\l"
	.string "riesen Party veranstaltet wird {PAUSE 5}…{PAUSE 5}$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_23:
	.string "LAMBDA: Ich will nicht, dass ihr beide\n"
	.string "dort einfach nur von der allgemeinen\l"
	.string "Unachtsamkeit profitiert, um ein paar\l"
	.string "POKéMON oder Waren zu stehlen. Nein.\p"
	.string "Was ich von euch will, ist viel kleiner,\n"
	.string "aber von weitaus größerem Wert als all\l"
	.string "das {PAUSE 5}…{PAUSE 5} Es ist eine Phiole.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_24:
.string "ANDRA: Eine Phiole?$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_25:
	.string "LAMBDA: Der KAPITÄN der M.S. ANNE hat in\n"
	.string "seiner langen Karriere als Seemann\l"
	.string "unzählige Regionen bereist. Auf einer\l"
	.string "dieser Reisen hat er etwas entdeckt:\l"
	.string "Ein Fragment, das anscheinend von\l"
	.string "einem POKéMON stammt. Doch es passt zu\l"
	.string "keinem uns bekannten POKéMON.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_26:
	.string "LAMBDA: Wir wissen, dass dieser KAPITÄN\n"
	.string "dieses Fragment in einer Phiole\l"
	.string "aufbewahrt. Er hat sie in diversen\l"
	.string "Interviews zur Schau gestellt und\l"
	.string "trägt sie immer bei sich.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_26.1:
	.string "Eure Aufgabe ist es, in seine Kammer\n"
	.string "einzubrechen und sie mit Gewalt an euch\l"
	.string "zu reißen. Es gibt keine andere\l"
	.string "Möglichkeit für uns, sie zu bekommen.\p"
	.string "Und genau deshalb habe ich euch beide\n"
	.string "für diese Mission ausgewählt.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_27:
	.string "ANDRA: Und wie sollen wir an Bord des\n"
	.string "Schiffs kommen? Soweit ich weiß, werden\l"
	.string "uns die Matrosen ohne ein BOOTSTICKET\l"
	.string "niemals an Bord lassen.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_28:
	.string "LAMBDA: Ich habe mir dazu schon was\n"
	.string "einfallen lassen. Es ist zwar simpel,\l"
	.string "aber effektiv. Euer Komplize wird euch\l"
	.string "am Hafen von ORANIA erwarten. Macht\l"
	.string "euch keine Sorgen.\p"
	.string "Ihr werdet ihn sofort erkennen.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_29:
.string "{PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_30:
	.string "LAMBDA: Und noch etwas. Ihr solltet\n"
	.string "wissen, dass GIOVANNI\l"
	.string "höchstpersönlich diese Mission\l"
	.string "angeordnet hat {PAUSE 5}…{PAUSE 5}$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_31:
	.string "Unser ANFÜHRER denkt, dass dieses\n"
	.string "Fragment Teil eines mächtigen\l"
	.string "LEGENDÄREN POKéMON sein könnte und\l"
	.string "er möchte die Gelegenheit nicht\l"
	.string "verstreichen lassen, die Phiole in\l"
	.string "seinen Besitz zu bringen und sie\l"
	.string "untersuchen zu lassen, bevor die M.S.\p"
	.string "ANNE wieder von KANTO ablegt und erst\n"
	.string "nächstes Jahr wieder kommt.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_32:
.string "ANDRA: Wir werden nicht versagen!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_33:
	.string "LAMBDA: Ich zähle auf euch. Ihr habt\n"
	.string "großartige Fähigkeiten im Kampf\l"
	.string "bewiesen.$"
	
RocketHideout_6F_Petrel_Mision_3_Bill_texto_33.1:
	.string "Dieser KAPITÄN hat auf seinen vielen\n"
	.string "Fahrten durch die Weltmeere zahlreiche\l"
	.string "Erfahrungen gesammelt und seine\l"
	.string "POKéMON werden das widerspiegeln.\p"
	.string "Haltet eure POKéMON bereit, um\n"
	.string "euch ihm entgegenzustellen.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_34:
	.string "ANDRA: Das habe ich keine Zweifel, SIR!$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_35:
	.string "LAMBDA: Das wäre alles. Und jetzt beeilt\n"
	.string "euch! Je früher ihr dort ankommt, desto\l"
	.string "mehr Zeit habt ihr, bevor das Schiff\l"
	.string "ablegt. Macht's gut.$"

RocketHideout_6F_Petrel_Mision_3_Bill_texto_36:
	.string "ANDRA: Ziehen wir's durch, {PLAYER}!\p"
	.string "Die M.S. Anne wird uns gehören!$"

RocketHideout_6F_Petrel_Mision_3_Bill_move_1:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_2:
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_4:
walk_in_place_up
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_5:
face_left
emote_exclamation_mark
delay_1
walk_in_place_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_6:
face_left
delay_1
walk_in_place_down
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_7:
walk_in_place_down
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_8:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_9:
walk_in_place_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_10:
face_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_11:
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_12:
face_up
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_13:
walk_up
walk_up
walk_left
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_14:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_15:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_16:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_17:
walk_up
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_18:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_19:
emote_exclamation_mark
step_end

RocketHideout_6F_Petrel_Mision_3_Bill_move_20:
face_down
step_end



RocketHideout_6F_Petrel_Post_SSanne::
lockall
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 39
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_1
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_3
waitmovement 0x0
showmoneybox 0, 0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_2 MSGBOX_AUTOCLOSE
playse SE_SHOP
addmoney 80000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_3 MSGBOX_DEFAULT
waitfanfare
delay 50
hidemoneybox
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_4 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_GREAT_BALL, 20
waitfanfare
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
playse SE_SHOP
delay 20
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_5 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_5
waitmovement 0x0
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_6 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_7
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_7
waitmovement 0x0
waitse
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_7 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_8 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_9 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_7
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_7
waitmovement 0x0
waitse
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.1
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_13.3 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_14 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_15 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8.1
waitmovement 0x0
delay 15
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_16.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.2
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.3
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_17.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_6
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4.3
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_18.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RocketHideout_6F_Petrel_Post_SSanne_move_4
waitmovement 0x0
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_8
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_19 MSGBOX_AUTOCLOSE
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_9
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Post_SSanne_move_10
waitmovement 0x0
msgbox RocketHideout_6F_Petrel_Post_SSanne_Texto_20 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Petrel_Mision_1_move6.2
applymovement 39, RocketHideout_6F_Petrel_Post_SSanne_move_11
waitmovement 0x0
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
removeobject 39
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
setvar VAR_UNUSED_0x40F7, 33
release
end

RocketHideout_6F_Petrel_Post_SSanne_move_4.2:
face_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_4.3:
face_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_4.1:
delay_8
face_up
delay_16
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_8.1:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end


RocketHideout_6F_Petrel_Post_SSanne_Texto_1:
	.string "LAMBDA: Hervorragende Arbeit!\p"
	.string "GIOVANNI wird es kaum erwarten können,\n"
	.string "mehr über den Inhalt dieser Phiole zu\l"
	.string "erfahren.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_2:
.string "LAMBDA: Hier. Eure Belohnung.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_3:
	.string "Du erhältst 80.000¥!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_4:
	.string "Zusätzlich bekommt ihr noch das hier:\n"
	.string "20 SUPERBÄLLE für jeden von euch.\p"
	.string "Rekruten wie ihr solltet immer\n"
	.string "welche haben.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_5:
	.string "LAMBDA: Und jetzt nehmt bitte Platz\n"
	.string "und macht's euch gemütlich. Wir haben\l"
	.string "viel zu bereden.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_6:
	.string "LAMBDA: Zunächst will ich euch\n"
	.string "mitteilen, dass unsere Wissenschaftler,\l"
	.string "dank des Patents, das {PLAYER}\l"
	.string "gestohlen hat, bereits kurz davor\l"
	.string "stehen, sofortige\l"
	.string "Fernteleporatationspunkte zu\l"
	.string "entwickeln.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_7:
	.string "Diese neue Erfindung wird es uns\n"
	.string "ermöglichen, diese Basis mit der von\l"
	.string "EILAND FÜNF zu verbinden. Und noch\l"
	.string "wichtiger: mit unserem Hauptquartier,\l"
	.string "der PRISMANIA BASIS.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_8:
.string "LAMBDA: {PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_9:
	.string "LAMBDA: Als ihr zum ersten Mal hier\n"
	.string "angekommen seid und eure erste Mission\l"
	.string "auf dem MONDBERG beendet habt, habt\l"
	.string "ihr bereits eine gewisse Eigenart\l"
	.string "demonstriert, die weit über die eines\l"
	.string "gewöhnlichen RÜPELs hinausgeht.\p"
	.string "Deshalb habe ich euch eine Chance\n"
	.string "gegeben - in Form von zwei Missionen\l"
	.string "von gewisser Komplexität und ihr habt\l"
	.string "sämtliche Erwartungen erfüllt.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_10:
	.string "Angesichts der jüngsten Ereignisse hat\n"
	.string "GIOVANNI persönlich angeordnet, dass\l"
	.string "ihr nach Abschluss dieser Mission\l"
	.string "sofort ins Hauptquartier nach\l"
	.string "PRISMANIA CITY versetzt werdet, um\l"
	.string "direkt für ihn zu arbeiten.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_11:
	.string "LAMBDA: Oder anders gesagt: Ihr gehört\n"
	.string "ab jetzt zur persönlichen Leibgarde\l"
	.string "von GIOVANNI.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_11.1:
	.string "Geht feiern! Und tut vor allem eins:\n"
	.string "Werdet dieser Stellung gerecht! Ihr\l"
	.string "werdet dort mit der verdammten Elite\l"
	.string "unserer Organisation\l"
	.string "zusammenarbeiten!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_12:
	.string "ANDRA: Wir sind bereit,\n"
	.string "ADMINISTRATOR LAMBDA!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_13:
	.string "LAMBDA: Gut. Eure Versetzung ist mit\n"
	.string "dem Abschluss der\l"
	.string "Teleportationsmaschinen geplant.\p"
	.string "So müsst ihr nicht zu Fuß durch\n"
	.string "ganz KANTO watscheln.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_13.1:
	.string "Mit eurer hervorragenden Leistung in\n"
	.string "drei aufeinanderfolgenden Missionen\l"
	.string "habt ihr euch eine wohlverdiente\l"
	.string "Auszeit verdient. Ihr habt Ferien\l"
	.string "bis zu eurer Versetzung.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_13.2:
	.string "Ruht euch aus. Lernt KANTO ein wenig\n"
	.string "kennen, da ihr nicht von hier seid.\l"
	.string "Nutzt die Gelegenheit, eure POKéMON zu\l"
	.string "trainieren. Vielleicht fangt ihr auch\l"
	.string "ein paar Neue. Und vor allem: Bereitet\l"
	.string "euch mental auf eure Versetzung vor.\p"
	.string "Ihr solltet euch von eurer\n"
	.string "Schokoladenseite präsentieren, wenn\l"
	.string "ihr GIOVANNI gegenübertretet.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_13.3:
	.string "Verglichen mit den makellosen Büros\n"
	.string "unserer unterirdischen Basis in\l"
	.string "PRISMANIA CITY ist dieser Ort hier ein\l"
	.string "modriger Drecksschuppen, der nur so\l"
	.string "von RATTFRATZ wimmelt.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_14:
	.string "Außerdem hatte ich euch bei eurer\n"
	.string "Ankunft hier versprochen, euch\l"
	.string "allgemeines Wissen über KANTO\l"
	.string "mitzugeben und zu zeigen, wie man sich\l"
	.string "am besten in den Städten verhält. Doch\l"
	.string "wegen der Dringlichkeit eurer ersten\l"
	.string "Mission am Mondberg habt ihr diese Teile\l"
	.string "eurer Standard-Ausbildung verpasst.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_15:
	.string "Jetzt, wo ihr schon eine Weile hier seid\n"
	.string "und sich die Dinge etwas beruhigt\l"
	.string "haben, würde ich euch gerne etwas\l"
	.string "fragen. Was haltet ihr von den Menschen\l"
	.string "in KANTO?$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_16:
	.string "ANDRA: Es gibt einen deutlichen\n"
	.string "Unterschied zwischen ihnen und den\l"
	.string "Menschen auf EILAND FÜNF. Hier\l"
	.string "scheinen alle ein sehr negatives Bild\l"
	.string "von TEAM ROCKET zu haben. Die Leute\l"
	.string "begegnen uns mit Verachtung und zeigen\l"
	.string "mit dem Finger auf uns, selbst wenn wir\l"
	.string "nichts Schlimmes verbrochen haben.$"
	
RocketHideout_6F_Petrel_Post_SSanne_Texto_16.1:
	.string "Allgemein hasst die Bevölkerung von\n"
	.string "KANTO uns einfach. Es ist, als ob {PAUSE 15}…{PAUSE 15}$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_17:
	.string "LAMBDA: … Als ob sie überzeugt wären,\n"
	.string "wir wären die Schurken in einem\l"
	.string "Billigstreifen. Das! Genau das\l"
	.string "ist es, ANDRA!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_17.1:
	.string "Das ist das Resultat einer gezielten\n"
	.string "Hetzkampagne, verkörpert durch die\l"
	.string "Manipulation von Informationen, Fakten\l"
	.string "und Demagogie!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_17.2:
	.string "Und wir sind eine private Organisation,\n"
	.string "die trotzdem handelt! Wir haben keine\l"
	.string "andere Wahl, als uns auf organisiertes\l"
	.string "Verbrechen zu stützen, um\l"
	.string "zurückzuholen, was uns gehört! Wir sind\l"
	.string "kein mörderisches und unmoralisches\l"
	.string "Verbrechersyndikat, wie es die vom\l"
	.string "INDIGO-PLATEAU behaupten!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_18:
	.string "Ihr werdet bald verstehen, wie die Dinge\n"
	.string "hier laufen. Vor allem, da ihr nach\l"
	.string "PRISMANIA CITY gehen werdet. Ich bin\l"
	.string "sicher, GIOVANNI wird sich freuen, zwei\l"
	.string "so jungen und fähigen Leuten wie euch\l"
	.string "die Sache genauer zu erklären.$"
	
RocketHideout_6F_Petrel_Post_SSanne_Texto_18.1:
	.string "Das war alles, was ich euch noch sagen\n"
	.string "wollte. Genießt eure wohlverdiente\l"
	.string "Auszeit. Ich lasse euch wissen, sobald\l"
	.string "die Maschine einsatzbereit ist.$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_19:
	.string "ANDRA: Zu Ihren Diensten,\n"
	.string "ADMINISTRATOR, LAMBDA!$"

RocketHideout_6F_Petrel_Post_SSanne_Texto_20:
	.string "{PLAYER}!! Ich werde auf den ROUTEN 9\n"
	.string "und 10, östlich von AZURIA CITY\l"
	.string "trainieren. Jetzt, wo wir ZERSCHNEIDER\l"
	.string "haben, können wir dorthin gehen.\p"
	.string "Wenn du mich suchst, weißt du also,\n"
	.string "wo du mich findest.$"

RocketHideout_6F_Petrel_Post_SSanne_move_1:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_2:
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_3:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_4:
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_5:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_in_place_left
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_6:
walk_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_7:
emote_exclamation_mark
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_8:
walk_in_place_right
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_9:
face_up
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_10:
face_down
step_end

RocketHideout_6F_Petrel_Post_SSanne_move_11:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Escena_Lance::
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
applymovement 26, RocketHideout_6F_Escena_Lance_move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_3
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 33, RocketHideout_6F_Escena_Lance_move_2
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_11 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_move_4
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_12 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_move_5
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_move_5
waitmovement 0x0
delay 20
setvar VAR_UNUSED_0x40F7, 30
warpsilent MAP_INDIGO_PLATEAU, 13, 15
release
end

RocketHideout_6F_Escena_Lance_Texto_11:
.string "{PLAYER}! Hast du das mitbekommen?$"

RocketHideout_6F_Escena_Lance_Texto_12:
	.string "Scheint so, als würde SIEGFRIED eine\n"
	.string "offizielle Ankündigung machen. Sie\l"
	.string "übertragen es gerade live im TV!\p"
	.string "Wir verpassen es noch!$"

RocketHideout_6F_Escena_Lance_move_1:
face_left
step_end

RocketHideout_6F_Escena_Lance_move_2:
face_left
emote_exclamation_mark
step_end

RocketHideout_6F_Escena_Lance_move_3:
face_right
step_end

RocketHideout_6F_Escena_Lance_move_4:
walk_left
walk_left
walk_left
walk_left
step_end

RocketHideout_6F_Escena_Lance_move_5:
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

RocketHideout_6F_Escena_Lance_2::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move7
delay 20
applymovement 35, RocketHideout_6F_Escena_Lance_2_move1
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_13 MSGBOX_AUTOCLOSE
delay 20
applymovement 31, RocketHideout_6F_Escena_Lance_2_move2
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_14 MSGBOX_AUTOCLOSE
applymovement 31, RocketHideout_6F_Escena_Lance_2_move3
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_15 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_2_move1
applymovement 35, RocketHideout_6F_Escena_Lance_2_move1
applymovement 29, RocketHideout_6F_Escena_Lance_2_move1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move1
applymovement 32, RocketHideout_6F_Escena_Lance_2_move4
applymovement 30, RocketHideout_6F_Escena_Lance_2_move4
applymovement 26, RocketHideout_6F_Escena_Lance_2_move4
applymovement 36, RocketHideout_6F_Escena_Lance_2_move5
applymovement 34, RocketHideout_6F_Escena_Lance_2_move5
applymovement 37, RocketHideout_6F_Escena_Lance_2_move5
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_16 MSGBOX_AUTOCLOSE
applymovement 26, RocketHideout_6F_Escena_Lance_2_move5
fadescreen 1
delay 20
removeobject 35
removeobject 29
removeobject 32
removeobject 30
removeobject 36
removeobject 34
removeobject 37
fadescreen 0
delay 15
applymovement 31, RocketHideout_6F_Escena_Lance_2_move6
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_17 MSGBOX_AUTOCLOSE
applymovement 33, RocketHideout_6F_Escena_Lance_2_move1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Escena_Lance_2_move1
waitmovement 0x0
msgbox RocketHideout_6F_Escena_Lance_Texto_18 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
fadescreen 1
delay 20
removeobject 31
removeobject 33
fadescreen 0
setflag FLAG_HIDE_PETALBURG_CITY_WALLY
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
clearflag FLAG_VISITED_INDIGO_PLATEAU
setvar VAR_UNUSED_0x40F7, 32
release
end

RocketHideout_6F_Escena_Lance_Texto_13:
.string "Oh, Scheiße!\p"
	.string "Was machen wir jetzt!$"

RocketHideout_6F_Escena_Lance_Texto_14:
	.string "LAMBDA: Komm runter, RÜPEL. Wir haben\n"
	.string "mehr als genug Mittel, um\l"
	.string "zurechtzukommen. All das zeigt nur,\l"
	.string "dass sie uns als Bedrohung ansehen.$"

RocketHideout_6F_Escena_Lance_Texto_15:
	.string "Was steht ihr hier alle noch rum?!\n"
	.string "Zurück an die Arbeit!$"

RocketHideout_6F_Escena_Lance_Texto_16:
	.string "Wie Sie befehlen, ADMINISTRATOR LAMBDA!$"

RocketHideout_6F_Escena_Lance_Texto_17:
	.string "ANDRA. {PLAYER}. Kommt sofort in mein\n"
	.string "Büro! Ich habe Neuigkeiten für euch.$"

RocketHideout_6F_Escena_Lance_Texto_18:
	.string "ANDRA: Ja, Sir!$"

RocketHideout_6F_Escena_Lance_2_move1:
walk_in_place_up
step_end

RocketHideout_6F_Escena_Lance_2_move2:
face_left
step_end

RocketHideout_6F_Escena_Lance_2_move3:
walk_in_place_right
walk_in_place_down
step_end

RocketHideout_6F_Escena_Lance_2_move4:
walk_in_place_left
step_end

RocketHideout_6F_Escena_Lance_2_move5:
walk_in_place_right
step_end

RocketHideout_6F_Escena_Lance_2_move6:
walk_in_place_down
step_end

RocketHideout_6F_Escena_Lance_2_move7:
face_up
step_end

RocketHideout_6F_Aviso_Cientifico::
delay 10
playse SE_PIN
applymovement 26, RocketHideout_6F_Aviso_Cientifico_Move_1
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_6F_Aviso_Cientifico_Move_2
waitmovement 0x0
delay 10
msgbox RocketHideout_6F_Aviso_Cientifico_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox RocketHideout_6F_Aviso_Cientifico_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 26, RocketHideout_6F_Aviso_Cientifico_Move_2
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 36
release
end

RocketHideout_6F_Aviso_Cientifico_Texto_1:
	.string "Finally, HIGH RANK GRUNT {PLAYER},\n"
	.string "thanks to the patent you'd robbed BILL\l"
	.string "of, we've established connections\l"
	.string "between bases through teleportation.\p"
	.string "You can use it as you please.$"

RocketHideout_6F_Aviso_Cientifico_Texto_1.1:
	.string "ANDRA's just teleported to the CELADON\n"
	.string "HQ, as per assignment.\l"
	.string "They await your arrival at the barracks\l"
	.string "for the start of your next mission.$"

RocketHideout_6F_Aviso_Cientifico_Move_1:
emote_exclamation_mark
walk_in_place_left
step_end

RocketHideout_6F_Aviso_Cientifico_Move_2:
walk_in_place_right
step_end

RocketHideout_6F_Maquina_Teletransporte::
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Maquina_Teletransporte_2
msgbox RocketHideout_6F_Maquina_Teletransporte_Texto_1 MSGBOX_AUTOCLOSE
release
end



RocketHideout_6F_Maquina_Teletransporte_Texto_1:
.string "…\n"
	.string "…\p"
    .string "-Seems that this machine's development\n"
	.string "is still in the earliest stages.-$"

RocketHideout_6F_Maquina_Teletransporte_2::
msgbox RocketHideout_6F_Maquina_Teletransporte_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_6F_Maquina_Teletransporte_No
delay 10
playse SE_M_CHARGE
delay 20
playse SE_M_TELEPORT
warpsilent MAP_ROCKET_HIDEOUT_3F, 2, 3
release
end

RocketHideout_6F_Maquina_Teletransporte_YesNo:
.string "The machine is ready for use.\p"
    .string "Do you want to TELEPORT to\n"
	.string "the CELADON BASE?$"

RocketHideout_6F_Maquina_Teletransporte_No::
release
end


Base_Ruta_5_Tienda_Pokemon::
lock
faceplayer
msgbox Text_CompraPokemon_Ruta_5 MSGBOX_AUTOCLOSE
waitmessage
multichoice 0, 0, MULTI_VENTA_BASE_RUTA_5, 0
switch VAR_RESULT
case 0, EventScript_Rattata
case 1, EventScript_Mankey
case 2, EventScript_Voltorb
case 3, EventScript_Koffing
release
end

EventScript_Voltorb::
lock
showmoneybox 0, 0
msgbox EventScript_Voltorb_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 9000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 9000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_VOLTORB, 12, ITEM_NONE
release
end

EventScript_Koffing::
lock
showmoneybox 0, 0
msgbox EventScript_Koffing_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 11000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 11000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_KOFFING, 13, ITEM_NONE
release
end

EventScript_Mankey::
lock
showmoneybox 0, 0
msgbox EventScript_Mankey_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 8000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 8000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_MANKEY, 12, ITEM_NONE
release
end

EventScript_Rattata::
lock
showmoneybox 0, 0
msgbox EventScript_Rattata_Texto_1 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq EventScript_Compra_No
checkmoney 3000
goto_if_eq VAR_RESULT, FALSE, Tienda_Pokemon_No_Money
delay 15
playse SE_SHOP
removemoney 3000 0
waitse
updatemoneybox
delay 50
hidemoneybox
givemon SPECIES_RATTATA, 9, ITEM_NONE
release
end

Text_CompraPokemon_Ruta_5:
.string "How's everything going, comrade?\p"
	.string "How can I help you?$"

EventScript_Voltorb_Texto_1:
.string "Are you sure you want VOLTORB?\n"
	.string "It'll cost ¥9,000.$"

EventScript_Koffing_Texto_1:
.string "Are you sure you want KOFFING?\n"
	.string "It'll cost ¥11,000.$"

EventScript_Mankey_Texto_1:
.string "Are you sure you want MANKEY?\n"
	.string "It'll cost ¥8,000.$"

EventScript_Rattata_Texto_1:
.string "Are you sure you want RATTATA?\n"
	.string "It'll cost ¥3,000.$"

RocketHideout_6F_Petrel::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Petrel_2
msgbox RocketHideout_6F_Petrel_Texto_1 MSGBOX_AUTOCLOSE
applymovement 14, RocketHideout_6F_Petrel_Move_Izq
waitmovement 0x0
release
end

RocketHideout_6F_Petrel_Move_Izq:
face_left
step_end

RocketHideout_6F_Petrel_2::
msgbox RocketHideout_6F_Petrel_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Petrel_Texto_1:
	.string "PETREL: Kid, you ought to know that\n"
	.string "ROCKET ADMINs aren't to be interrupted\l"
	.string "for trivial matters. Our time's is too\l"
	.string "valuable.$"

RocketHideout_6F_Petrel_Texto_2:
	.string "PETREL: It's been a source of pride for\n"
	.string "me to have been your chief ADMIN in\l"
	.string "your first contact with KANTO. You've\l"
	.string "shown there are still ROCKETs worth\l"
	.string "their salt. I only hope you and ANDRA\l"
	.string "live up to the demands of our great\l"
	.string "BOSS, GIOVANNI.$"

RocketHideout_6F_Cientifico_Maquina::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 35
goto_if_gt RocketHideout_6F_Cientifico_Maquina_2
msgbox RocketHideout_6F_Cientifico_Maquina_Texto_1 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Cientifico_Maquina_2::
msgbox RocketHideout_6F_Cientifico_Maquina_Texto_2 MSGBOX_AUTOCLOSE
release
end

RocketHideout_6F_Cientifico_Maquina_Texto_1:
.string "We are working on a long-distance\n"
	.string "teleportation system that connects\l"
	.string "the bases of CELADON CITY and this\l"
	.string "one. Do you know how much money we\l"
	.string "would save on transportation if we\l"
	.string "manage to achieve it?$"

RocketHideout_6F_Cientifico_Maquina_Texto_2:
	.string "We did it! All thanks to you stealing\n"
	.string "BILL's patents. Use the system\l"
	.string "whenever you want. You just need to\l"
	.string "interact with the machine to teleport.$"


SeteoIvs::
msgbox SeteoIvs_Texto_1 MSGBOX_AUTOCLOSE
msgbox SeteoIvs_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SeteoIvs_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SeteoIvs_No
delay 10
msgbox SeteoIvs_Texto_4 MSGBOX_AUTOCLOSE
goto SetIVs
release
end

SeteoIvs_No::
msgbox SeteoIvs_No_Texto_1 MSGBOX_AUTOCLOSE
release
end

SeteoIvs_Texto_4:
	.string "Which POKÉMON do you want to improve?$"

SeteoIvs_No_Texto_1:
	.string "As you wish, CHIEF ADMIN.$"

SeteoIvs_Texto_3:
	.string "It will cost only ¥100,000.\n"
	.string "Are you interested, SIR?$"

SeteoIvs_Texto_1:
	.string "We've successfully engineered\n"
	.string "technology to fully exploit the genetic\l"
	.string "potential of a POKÉMON.$"

SeteoIvs_Texto_2:
	.string "As a result, any POKÉMON subjected to\n"
	.string "our treatment will have 31 IVs in all 6\l"
	.string "STATs.$"


