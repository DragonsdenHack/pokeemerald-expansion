PowerPlant_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, PowerPlant_OnResume
	.byte 0

PowerPlant_OnResume:
	call PowerPlant_SetupEscapeWarp
	end

PowerPlant_SetupEscapeWarp::
	setescapewarp MAP_ROUTE10, 7, 41
	return

PowerPlant1::
end



PowerPlant2::
end



PowerPlant3::
end



PowerPlant4::
end



PowerPlant5::
end



PowerPlant6::
end



PowerPlant7::
end



PowerPlant8::
end



PowerPlant9::
end



PowerPlant10::
end



PowerPlant11::
end



PowerPlant13::
lock
msgbox PowerPlant13_Texto_1 MSGBOX_SIGN
release
end

PowerPlant13_Texto_1:
	.string "Du bist erledigt, junge Dame! Wenn\n"
	.string "MAJOR BOB auftaucht, wird er nur ein\l"
	.string "einziges POKéMON brauchen, um dich\l"
	.string "fertig zu machen!$"



PowerPlant14::
lock
msgbox PowerPlant14_Texto_1 MSGBOX_SIGN
release
end

PowerPlant14_Texto_1:
.string "{PLAYER}?\p"
	.string "Da bist du ja endlich!\p"
	.string "Ich habe schon sieben BULLEN besiegt,\n"
	.string "die weggerannt sind, um MAJOR BOB zu\l"
	.string "rufen {PAUSE 15}…{PAUSE 15} Beeil dich {PAUSE 15}…{PAUSE 15} Mein Team hält\l"
	.string "nicht mehr lange durch {PAUSE 15}…{PAUSE 15}$"



PowerPlant15::
end



PowerPlant16::
lock
msgbox PowerPlant16_Texto_1 MSGBOX_SIGN
release
end

PowerPlant16_Texto_1:
	.string "traducir$"



PowerPlant17::
lock
msgbox PowerPlant17_Texto_1 MSGBOX_SIGN
release
end

PowerPlant17_Texto_1:
	.string "LORELEI: Du bist also GIOVANNIs rechte\n"
	.string "Hand. SIEGFRIED hat mir aufgetragen\l"
	.string "meine volle Stärke einzusetzen, um dich\l"
	.string "zu besiegen! Niemand von euch wird\l"
	.string "diesen Ort verlassen, solange ich\l"
	.string "hier bin {PAUSE 5}…{PAUSE 5}$"



PowerPlant18::
lock
msgbox PowerPlant18_Texto_1 MSGBOX_SIGN
release
end

PowerPlant18_Texto_1:
	.string "ATLAS: Ich bin nicht einer dieser\n"
	.string "mittelmäßigen TRAINER, die hier überall\l"
	.string "herumlaufen und auch kein ARENALEITER,\l"
	.string "LORELEI. Du wirst dir schon mehr Mühe\l"
	.string "geben müssen, wenn du mich besiegen\l"
	.string "willst {PAUSE 5}…{PAUSE 5}$"



PowerPlant19::
end



PowerPlant21::
end



PowerPlant_EventScript_Policia::
	trainerbattle_single TRAINER_DAISY, PowerPlant_Text_PoliciaIntro, PowerPlant_Text_PoliciaDefeated
	msgbox PowerPlant_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia2::
	trainerbattle_single TRAINER_ROSE_1, PowerPlant_Text_Policia2Intro, PowerPlant_Text_Policia2Defeated
	msgbox PowerPlant_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia3::
	trainerbattle_single TRAINER_VIOLET, PowerPlant_Text_Policia3Intro, PowerPlant_Text_Policia3Defeated
	msgbox PowerPlant_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia4::
	trainerbattle_single TRAINER_ROSE_2, PowerPlant_Text_Policia4Intro, PowerPlant_Text_Policia4Defeated
	msgbox PowerPlant_Policia4PostBattle, MSGBOX_AUTOCLOSE
	end



PowerPlant_EventScript_Policia5::
	trainerbattle_single TRAINER_ROSE_3, PowerPlant_Text_Policia5Intro, PowerPlant_Text_Policia5Defeated
	msgbox PowerPlant_Policia5PostBattle, MSGBOX_AUTOCLOSE
	end

PowerPlant_Encuentro_Petrel::
lock
applymovement OBJ_EVENT_ID_PLAYER, PowerPlant_Encuentro_Petrel_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 19, PowerPlant_Encuentro_Petrel_Move_2
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 19, PowerPlant_Encuentro_Petrel_Move_2.1
waitmovement 0x0
delay 10
msgbox PowerPlant_Encuentro_Petrel_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 19, PowerPlant_Encuentro_Petrel_Move_3
waitmovement 0x0
msgbox PowerPlant_Encuentro_Petrel_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Encuentro_Petrel_Texto_2.1 MSGBOX_AUTOCLOSE
delay 20
msgbox PowerPlant_Encuentro_Petrel_Texto_3 MSGBOX_AUTOCLOSE
applymovement 19, PowerPlant_Encuentro_Petrel_Move_4
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
removeobject 19
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
clearflag FLAG_HOENN_90
clearflag FLAG_HOENN_91
clearflag FLAG_HOENN_92
clearflag FLAG_HOENN_93
clearflag FLAG_HOENN_94
clearflag FLAG_HOENN_95
clearflag FLAG_HOENN_96
clearflag FLAG_HOENN_97
clearflag FLAG_HOENN_98
clearflag FLAG_HOENN_99
setflag FLAG_HOENN_640
setflag FLAG_HOENN_641
setflag FLAG_HOENN_642
setflag FLAG_HOENN_643
setflag FLAG_HOENN_644
setflag FLAG_HOENN_645
setflag FLAG_HOENN_646
setflag FLAG_HOENN_647
setflag FLAG_HOENN_648
setflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 70
release
end

PowerPlant_Encuentro_Petrel_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

PowerPlant_Encuentro_Petrel_Texto_1:
	.string "{PLAYER}! ATLAS und ich mussten ohne\n"
	.string "dich reingehen {PAUSE 25}…{PAUSE 25} Wir haben gesehen, wie\l"
	.string "LORELEI von der TOP VIER hier\l"
	.string "eingetroffen ist, um ANDRA aufzuhalten\l"
	.string "und mussten sofort eingreifen {PAUSE 25}…{PAUSE 25}$"

PowerPlant_Encuentro_Petrel_Texto_1.1:
	.string "ATLAS kämpft gerade gegen sie. Er hat\n"
	.string "mich geschickt, um dich zu finden und\l"
	.string "dir den Plan zu erklären {PAUSE 25}…{PAUSE 5}$"

PowerPlant_Encuentro_Petrel_Texto_2:
	.string "Ich werde ANDRA mit den Polizisten\n"
	.string "helfen. Deine Aufgabe wird es sein, dir\l"
	.string "ZAPDOS vorzunehmen, um die Mission zu\l"
	.string "beenden.$"

PowerPlant_Encuentro_Petrel_Texto_2.1:
	.string "Sobald wir haben, wofür wir hier sind und\n"
	.string "uns um unsere Gegner gekümmert haben,\l"
	.string "hauen wir ab, bevor die Lage eskaliert.\p"
	.string "Verstanden?$"

PowerPlant_Encuentro_Petrel_Texto_3:
	.string "Perfekt! Wir haben keine\n"
	.string "Zeit zu verlieren!$"

PowerPlant_Encuentro_Petrel_Move_1:
walk_in_place_right
step_end

PowerPlant_Encuentro_Petrel_Move_2:
emote_exclamation_mark
walk_left
walk_left
step_end

PowerPlant_Encuentro_Petrel_Move_3:
walk_in_place_right
face_left
step_end

PowerPlant_Encuentro_Petrel_Move_4:
walk_right
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

PowerPlant_Combate_Zapdos_Surge::
lock
compare VAR_UNUSED_0x40F7, 70
goto_if_gt SeafoamIslands_5F_Combate_Articuno_Derrotado
playmoncry SPECIES_ZAPDOS, CRY_MODE_ENCOUNTER
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_1 MSGBOX_DEFAULT
waitmessage
waitmoncry
delay 10
playse MUS_RG_ENCOUNTER_GYM_LEADER
waitbuttonpress
trainerbattle_no_intro TRAINER_ZAPDOS, PowerPlant_Combate_Zapdos_Surge_Texto_2
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_3 MSGBOX_DEFAULT
waitse
clearflag FLAG_HIDE_FANCLUB_OLD_LADY
addobject 11
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_2
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_5.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_3
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1.1
waitmovement 0x0
waitse
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_6.3 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_FANCLUB_OLD_LADY
trainerbattle_no_intro TRAINER_SURGE_1, PowerPlant_Combate_Zapdos_Surge_Texto_7
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_6
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_5
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_11.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_1
waitmovement 0x0
delay 10
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_7
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_12 MSGBOX_AUTOCLOSE
applymovement 11, PowerPlant_Combate_Zapdos_Surge_Move_8
waitmovement 0x0
removeobject 11
playse SE_EXIT
delay 15
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_9
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_10
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14 MSGBOX_AUTOCLOSE
delay 10
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_11
waitmovement 0x0
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, PowerPlant_Combate_Zapdos_Surge_Move_4
waitmovement 0x0
delay 20
msgbox PowerPlant_Combate_Zapdos_Surge_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_MAUVILLE_CITY_WALLY
fadescreen 1 
delay 20
removeobject 17
removeobject 16
removeobject 21
removeobject 14
removeobject 13
removeobject 12
removeobject 10
removeobject 15
removeobject 7
removeobject 6
removeobject 2
fadescreen 0
clearflag FLAG_NUEVA_839
setvar VAR_UNUSED_0x40F7, 71
release
end

PowerPlant_Combate_Zapdos_Surge_Move_1.1:
walk_in_place_down
step_end

PowerPlant_Combate_Zapdos_Surge_Texto_1:
.string "Zap!$"

PowerPlant_Combate_Zapdos_Surge_Texto_2:
.string "Zap…$"

PowerPlant_Combate_Zapdos_Surge_Texto_3:
	.string "Du hast dem LEGENDÄREN-POKéMON\n"
	.string "ZAPDOS eine Feder gezupft!$"

PowerPlant_Combate_Zapdos_Surge_Texto_4:
.string "????: DUUU!!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5:
	.string "MAJOR BOB: Wie kannst du es wagen,\n"
	.string "etwas so Reines und Heiliges Leid\l"
	.string "zuzufügen!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.1:
	.string "Ich höchstpersönlich habe mich um\n"
	.string "dieses ZAPDOS gekümmert und ihm in\l"
	.string "diesem stillgelegten KRAFTWERK ein\l"
	.string "Zuhause gegeben! Und jetzt taucht so\l"
	.string "ein skrupelloser Knecht auf, um meine\l"
	.string "harte Arbeit zunichtezumachen!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.2:
		.string "Das ist unverzeihlich!$"

PowerPlant_Combate_Zapdos_Surge_Texto_5.3:
	.string "Du und deine Freunde werden für diesen\n"
	.string "Angriff auf unser kulturelles Erbe auf\l"
	.string "die schlimmstmögliche Weise zur\l"
	.string "Rechenschaft gezogen werden!$"

PowerPlant_Combate_Zapdos_Surge_Texto_6:
	.string "Ich hätte dich schon an dem Tag\n"
	.string "erledigen sollen, als du durch\l"
	.string "ORANIA CITY geschlendert bist!$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.1:
	.string "Schon damals hast du gezeigt, dass du\n"
	.string "kriminelle Tendenzen hast! Aber egal.$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.2:
	.string "Weißt du, warum SIEGFRIED mich\n"
	.string "geschickt hat und keinen\l"
	.string "anderen ARENALEITER?$"

PowerPlant_Combate_Zapdos_Surge_Texto_6.3:
	.string "Weil ich weiß wie man einen\n"
	.string "Krieg gewinnt!$"

PowerPlant_Combate_Zapdos_Surge_Texto_7:
	.string "Du bist kein gewöhnlicher ROCKET!$"

PowerPlant_Combate_Zapdos_Surge_Texto_8:
	.string "Du unverschämter Rotzlöffel! Warte\n"
	.string "nur, bis SIEGFRIED hiervon erfährt!\p"
	.string "Weder du noch deine Organisation haben\n"
	.string "auch nur die geringste Ahnung, wie\l"
	.string "mächtig er wirklich ist!$"

PowerPlant_Combate_Zapdos_Surge_Texto_8.1:
	.string "Wenn ihr so weitermacht, wird er\n"
	.string "euch alle in die Knie zwingen!$"

PowerPlant_Combate_Zapdos_Surge_Texto_9:
.string "????: Ich habe genug gehört, MAJOR.$"

PowerPlant_Combate_Zapdos_Surge_Texto_9.1:
	.string "Verschwinden Sie von hier, bevor\n"
	.string "ich es mir anders überlege!$"

PowerPlant_Combate_Zapdos_Surge_Texto_10:
	.string "ATLAS: Du solltest dich schämen, dass\n"
	.string "du nicht mal mit einem von uns fertig\l"
	.string "wirst, der gerade erst gegen ein\l"
	.string "LEGENDÄRES POKéMON gekämpft hat.$"

PowerPlant_Combate_Zapdos_Surge_Texto_10.1:
	.string "Ihr ARENALEITER scheint auf dem\n"
	.string "absteigenden Ast zu sein. Es sich unter\l"
	.string "SIEGFRIEDS Regierung gemütlich zu\l"
	.string "machen, ist wohl deinen POKéMON nicht\l"
	.string "so gut bekommen.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11:
	.string "MAJOR BOB: Du musst ATLAS sein. Ja {PAUSE 15}…{PAUSE 15}\n"
	.string "SIEGFRIED hat mich bereits davor\n"
	.string "gewarnt, dass du hier auftauchen\l"
	.string "könntest.$"

PowerPlant_Combate_Zapdos_Surge_Texto_11.1:
	.string "Du solltest dich schämen, dass du nicht\n"
	.string "hinter jemanden aus deiner eigenen\l"
	.string "Heimatregion stehst!$"

PowerPlant_Combate_Zapdos_Surge_Texto_11.2:
	.string "traducir$"

PowerPlant_Combate_Zapdos_Surge_Texto_12:
	.string "MAJOR BOB: Ich sehe keinen\n"
	.string "Unterschied! Genieß deine letzten\l"
	.string "Atemzüge in Freiheit, bevor sie euch\l"
	.string "alle schnappen!\p"
	.string "Ihr könnt nicht ewig davonlaufen!$"

PowerPlant_Combate_Zapdos_Surge_Texto_13:
	.string "ATLAS: So so. Zuerst ZAPDOS und direkt\n"
	.string "danach einen ARENALEITER, was\l"
	.string "{PLAYER}? Es sieht so aus, als\l"
	.string "hättest du damals bei meiner\l"
	.string "Begrüßungsrede aufmerksam zugehört.$"

PowerPlant_Combate_Zapdos_Surge_Texto_13.1:
	.string "Ich kann dir garantieren, dass du meine\n"
	.string "Erwartungen bei weitem übertroffen\l"
	.string "hast. Heute hast du bewiesen, dass du\l"
	.string "TEAM ROCKET in jeder Hinsicht loyal\l"
	.string "bist!$"

PowerPlant_Combate_Zapdos_Surge_Texto_14:
	.string "ANDRA ist bereits zur ROCKET-Basis in\n"
	.string "PRISMANIA CITY und LAMBDA zur Basis\l"
	.string "auf ROUTE 5 zurückgekehrt. Nach allem,\l"
	.string "was hier passiert ist, wird GIOVANNI\l"
	.string "sicherlich alles sofort wissen wollen.$"

PowerPlant_Combate_Zapdos_Surge_Texto_14.1:
	.string "Du solltest dich so schnell wie möglich\n"
	.string "in sein Büro einfinden. Nachdem du zwei\l"
	.string "LEGENDÄRE VÖGEL und nicht nur deine,\l"
	.string "sondern auch diese Mission erfolgreich\l"
	.string "abgeschlossen hast, kann ich mir kaum\l"
	.string "vorstellen, wie begeistert dich unser\l"
	.string "ANFÜHRER empfangen wird {PAUSE 5}…{PAUSE 5}$"

PowerPlant_Combate_Zapdos_Surge_Texto_15:
	.string "Schon bald wird es hier nur\n"
	.string "so von Bullen wimmeln.$"

PowerPlant_Combate_Zapdos_Surge_Texto_16:
	.string "traducir$"

PowerPlant_Combate_Zapdos_Surge_Texto_17:
	.string "-Es scheint zu schwach zum\n"
	.string "Kämpfen zu sein.-$"

PowerPlant_Combate_Zapdos_Surge_Move_1:
emote_exclamation_mark
walk_in_place_up
step_end

PowerPlant_Combate_Zapdos_Surge_Move_2:
walk_down
walk_down
walk_down
walk_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_3:
walk_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_4:
face_up
step_end

PowerPlant_Combate_Zapdos_Surge_Move_5:
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_6:
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_7:
walk_in_place_down
delay_16
walk_in_place_right
step_end

PowerPlant_Combate_Zapdos_Surge_Move_8:
walk_left
walk_down
walk_left
walk_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_9:
face_down
step_end

PowerPlant_Combate_Zapdos_Surge_Move_10:
face_left
step_end

PowerPlant_Combate_Zapdos_Surge_Move_11:
face_down
step_end
