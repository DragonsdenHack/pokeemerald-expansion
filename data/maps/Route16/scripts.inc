Route16_MapScripts::
	.byte 0

Route16_1::
end


Route16_2::
end


Route16_3::
end


Route16_4::
end


Route16_5::
end


Route16_6::
end


Route16_7::
end


Route16_8::
end


Route16_9::
end


Route16_10::
end


Route16_11::
lock        
msgbox Route16_Text_11, MSGBOX_DEFAULT
release     
end

Route16_Text_11:
	.string "Scheiße! Sein KICKLEE hat so heftig\n"
	.string "zugetreten {PAUSE 5}…{PAUSE 5}$"


Route16_12::
lock         
msgbox Route16_Text_12, MSGBOX_SIGN
release     
end

Route16_Text_12:
	.string "Er hat vier von uns mit nur zwei POKéMON\n"
	.string "plattgemacht {PAUSE 5}…{PAUSE 5}$"



Route16_13::
lock        
msgbox Route16_Text_13, MSGBOX_SIGN
release     
end

Route16_Text_13:
	.string "Schwächlinge … Niemand legt sich mit\n"
	.string "einem Mitglied der TOP VIER an und\l"
	.string "kommt ungeschoren davon.$"


Route16_14::
lock         
msgbox Route16_Text_14, MSGBOX_SIGN
release     
end

Route16_Text_14:
	.string "Das ist also die wahre Macht der TOP\n"
	.string "VIER {PAUSE 5}…{PAUSE 5}$"

Route16_15::
lock        
msgbox Route16_Text_15, MSGBOX_SIGN
release     
end

Route16_Text_15:
	.string "Ihr könnt entweder gestehen … oder ins\n"
	.string "Gefängnis gehen.$"


Route16_16::
lock         
msgbox Route16_Text_16, MSGBOX_SIGN
release     
end

Route16_Text_16:
	.string "Wir haben sie da, wo wir sie haben\n"
	.string "wollten {PAUSE 5}…{PAUSE 5}$"


Route16_17::
lock         
msgbox Route16_Text_17, MSGBOX_SIGN
release     
end

Route16_Text_17:
	.string "Kacke … Mein SMOGMOG hat's nicht mal\n"
	.string "geschafft, dieser riesigen\l"
	.string "Stahlschlange einen Kratzer\l"
	.string "zuzufügen {PAUSE 5}…{PAUSE 5}$"



Route16_EventScript_Motorista::
	trainerbattle_single TRAINER_JACKI_4, Route16_Text_MotoristaIntro, Route16_Text_MotoristaDefeated
	msgbox Route16_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista2::
	trainerbattle_single TRAINER_AXLE, Route16_Text_Motorista2Intro, Route16_Text_Motorista2Defeated
	msgbox Route16_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista3::
	trainerbattle_single TRAINER_JEFF, Route16_Text_Motorista3Intro, Route16_Text_Motorista3Defeated
	msgbox Route16_Motorista3PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista4::
	trainerbattle_single TRAINER_JACKI_3, Route16_Text_Motorista4Intro, Route16_Text_Motorista4Defeated
	msgbox Route16_Motorista4PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista5::
	trainerbattle_single TRAINER_JACKI_2, Route16_Text_Motorista5Intro, Route16_Text_Motorista5Defeated
	msgbox Route16_Motorista5PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Motorista6::
	trainerbattle_single TRAINER_DALTON_5, Route16_Text_Motorista6Intro, Route16_Text_Motorista6Defeated
	msgbox Route16_Motorista6PostBattle, MSGBOX_AUTOCLOSE
	end



Route16Documento_100::
msgbox Route16Documento_Text_100, MSGBOX_SIGN   
end

Route16Documento_Text_100:
.string "ROUTE 16\n"
    .string "PRISMANIA CITY - FUCHSANIA CITY$"



Route16Documento_101::
msgbox Route16Documento_Text_101, MSGBOX_SIGN   
end

Route16Documento_Text_101:
	.string "RADWEG\n"
    .string "Gute Abfahrt!$"



Route16_EventScript_Pareja1::
	trainerbattle_single TRAINER_HUEY, Route16_Text_Pareja1Intro, Route16_Text_Pareja1Defeated
	msgbox Route16_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route16_EventScript_Pareja2::
	trainerbattle_single TRAINER_HUEY, Route16_Text_Pareja2Intro, Route16_Text_Pareja2Defeated
	msgbox Route16_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route16_Combate_Bruno::
playse MUS_RG_ROCKET_HIDEOUT
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_1
waitmovement 0x0
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_2.1
waitmovement 0x0
delay 10
msgbox Route16_Combate_Bruno_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 13, Route16_Combate_Bruno_Move_5
applymovement 17, Route16_Combate_Bruno_Move_5
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
waitse
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox Route16_Combate_Bruno_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_BRUNO_1, Route16_Combate_Bruno_Texto_10
playse MUS_RG_ROCKET_HIDEOUT
msgbox Route16_Combate_Bruno_Texto_11 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_HO_OH
fadescreen 1
delay 20
removeobject 13
removeobject 14
removeobject 16
fadescreen 0
playse MUS_RG_ROUTE3
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_7
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_14 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM04_STRENGTH
waitfanfare
delay 20
msgbox Route16_Combate_Bruno_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
fadescreen 1
delay 20
removeobject 17
removeobject 11
removeobject 12
removeobject 15
fadescreen 0
setvar VAR_UNUSED_0x40F7, 66
release
end

Route16_Combate_Bruno_arriba::
playse MUS_RG_ROCKET_HIDEOUT
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_1.1
waitmovement 0x0
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_2.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, Route16_Combate_Bruno_Move_2.1
waitmovement 0x0
delay 10
msgbox Route16_Combate_Bruno_Texto_6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_4.1
waitmovement 0x0
playse SE_PIN
applymovement 13, Route16_Combate_Bruno_Move_5
applymovement 17, Route16_Combate_Bruno_Move_5
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox Route16_Combate_Bruno_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
waitse
playse MUS_RG_ENCOUNTER_GYM_LEADER
delay 10
msgbox Route16_Combate_Bruno_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_BRUNO_1, Route16_Combate_Bruno_Texto_10
playse MUS_RG_ROCKET_HIDEOUT
msgbox Route16_Combate_Bruno_Texto_11 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_3
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route16_Combate_Bruno_Move_2
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_HO_OH
fadescreen 1
delay 20
removeobject 13
removeobject 14
removeobject 16
fadescreen 0
playse MUS_RG_ROUTE3
applymovement OBJ_EVENT_ID_PLAYER, Route16_Combate_Bruno_Move_7
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_14 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_15 MSGBOX_AUTOCLOSE
applymovement 17, Route16_Combate_Bruno_Move_8
waitmovement 0x0
msgbox Route16_Combate_Bruno_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_HM04_STRENGTH
waitfanfare
delay 20
msgbox Route16_Combate_Bruno_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
fadescreen 1
delay 20
removeobject 17
removeobject 11
removeobject 12
removeobject 15
fadescreen 0
clearflag FLAG_HOENN_74
clearflag FLAG_HOENN_75
clearflag FLAG_HOENN_76
clearflag FLAG_HOENN_77
clearflag FLAG_HOENN_78
clearflag FLAG_HOENN_79
setflag FLAG_HOENN_90
setflag FLAG_HOENN_91
setflag FLAG_HOENN_92
setflag FLAG_HOENN_93
setflag FLAG_HOENN_94
setflag FLAG_HOENN_95
setflag FLAG_HOENN_96
setflag FLAG_HOENN_97
setflag FLAG_HOENN_98
setflag FLAG_HOENN_99
clearflag FLAG_HOENN_640
clearflag FLAG_HOENN_641
clearflag FLAG_HOENN_642
clearflag FLAG_HOENN_643
clearflag FLAG_HOENN_644
clearflag FLAG_HOENN_645
clearflag FLAG_HOENN_646
clearflag FLAG_HOENN_647
clearflag FLAG_HOENN_648
clearflag FLAG_HOENN_649
setvar VAR_UNUSED_0x40F7, 66
release
end

Route16_Combate_Bruno_Move_2.1:
delay_8
face_left
delay_16
delay_8
face_right
delay_8
step_end

Route16_Combate_Bruno_Texto_1:
	.string "BRUNO: Das war's Biker. Es war dumm von\n"
	.string "euch anzunehmen, dass eure armseligen\l"
	.string "GIFT-POKéMON meinem mächtigen\l"
	.string "Stahl-POKéMON überhaupt ein Haar\l"
	.string "krümmen könnte. Noch dümmer war es zu\l"
	.string "denken, dass eure Schwächlinge von\l"
	.string "KAMPF-POKéMON meinem das Wasser\l"
	.string "reichen könnten.$"

Route16_Combate_Bruno_Texto_1.1:
	.string "Nun, wo ihr euch beruhigt habt und all\n"
	.string "eure POKéMON kampfunfähig seid, werde\l"
	.string "ich euch erzählen, was wir jetzt tun\l"
	.string "werden {PAUSE 15}…{PAUSE 15}$"

Route16_Combate_Bruno_Texto_2:
	.string "Ihr werdet mit euren Kumpeln reden und\n"
	.string "sie davon überzeugen, dass die\l"
	.string "Regierung von SIEGFRIED die Zukunft\l"
	.string "KANTOs ist und das TEAM ROCKET schon\l"
	.string "bald dem Erdboden gleichgemacht werden\l"
	.string "wird.$"

Route16_Combate_Bruno_Texto_2.1:
	.string "Ihr werdet SIEGFRIED eure\n"
	.string "uneingeschränkte Loyalität schwören.\p"
	.string "Auch werdet ihr uns alle Informationen\n"
	.string "geben, die ihr über TEAM ROCKET habt.$"

Route16_Combate_Bruno_Texto_2.2:
	.string "Wenn ihr das alles macht, werden euch\n"
	.string "eure Verbrechen vergeben und ihr könnt\l"
	.string "weiter hier abhängen.$"

Route16_Combate_Bruno_Texto_2.3:
	.string "Weigert ihr euch hingegen {PAUSE 15}…{PAUSE 15}$"

Route16_Combate_Bruno_Texto_3:
	.string "… dann verspreche ich euch, dass ich\n"
	.string "jeden eurer Biker-Kumpel finden und in\l"
	.string "den Kerker werfen werde, bis keiner von\l"
	.string "euch mehr in KANTO übrig ist.\p"
	.string "Danach nehme ich mir diesen Ort vor\n"
	.string "und reiße ihn eigenhändig aus.$"

Route16_Combate_Bruno_Texto_4:
	.string "Ihr alle werdet im Gefängnis schmoren\n"
	.string "und ich sorge persönlich dafür, dass\l"
	.string "euer Ruf so schlecht wie der von TEAM\l"
	.string "ROCKET wird. Eure Entscheidung.$"

Route16_Combate_Bruno_Texto_5:
	.string "Wir werden niemals jemandem\n"
	.string "wie SIEGFRIED folgen!$"

Route16_Combate_Bruno_Texto_6:
	.string "BRUNO: Das werte ich mal als ein Nein.\p"
	.string "Ihr habt euch entschieden. WACHEN!\n"
	.string "Nimmt sie …!$"

Route16_Combate_Bruno_Texto_7:
	.string "Soso {PAUSE 25}…{PAUSE 25} Sieht so aus, als würdet ihr\n"
	.string "Gesellschaft auf den Weg ins Gefängnis\n"
	.string "bekommen. Und dazu noch einen\l"
	.string "HOCHRANGIGEN RÜPEL, wenn ich mich\l"
	.string "nicht irre. Ich bin mir sicher, dass wir\l"
	.string "einige nützliche Informationen von dir\l"
	.string "erhalten werden.$"

Route16_Combate_Bruno_Texto_8:
	.string "Ihr Verbrecher seid alle gleich! Ihr\n"
	.string "denkt, dass ihr alleine mit euren\l"
	.string "erbärmlichen Instinkten und Ambitionen\l"
	.string "alles erreichen könnt!$"

Route16_Combate_Bruno_Texto_9:
	.string "Ich werde dir die überwältigende Stärke\n"
	.string "meiner POKéMON zeigen, die durch Blut,\l"
	.string "Schweiß und Tränen gestählt wurden -\l"
	.string "etwas, von dem keiner von euch auch nur\l"
	.string "den blassesten Schimmer hat.$"

Route16_Combate_Bruno_Texto_9.1:
	.string "Ich werde nicht mehr als drei POKéMON\n"
	.string "brauchen, um dein gesamtes Team zur\l"
	.string "Hölle zu schicken.$"

Route16_Combate_Bruno_Texto_10:
	.string "Das kann nicht sein!\n"
	.string "Woher kommt diese Stärke her!?$"

Route16_Combate_Bruno_Texto_11:
	.string "BRUNO: Grrr! Ich hätte doch mein treues\n"
	.string "MACHOMAI mitbringen sollen! Was für\l"
	.string "eine Schande, gegen einen RÜPEL VON\l"
	.string "TEAM ROCKET zu verlieren! Glaub mir,\l"
	.string "du wirst dafür bezahlen! Du hattest\l"
	.string "einfach Glück, dass du etwas Besser als\l"
	.string "der Abschaum bist, den ich hier\l"
	.string "erwartet habe!$"

Route16_Combate_Bruno_Texto_12:
	.string "Kein Wort darüber zu SIEGFRIED!\p"
	.string "Wir mussten die Mission aufgrund\n"
	.string "technischer Probleme im letzten Moment\l"
	.string "abbrechen. Habt ihr das verstanden?$"

Route16_Combate_Bruno_Texto_13:
	.string "Und was dich angeht, ROCKET … Wir sind\n"
	.string "noch nicht fertig miteinander {PAUSE 5}…{PAUSE 5}$"

Route16_Combate_Bruno_Texto_14:
	.string "Ich kann's nicht glauben, was gerade\n"
	.string "passiert ist! Das war der krasseste\n"
	.string "Kampf, den ich jemals gesehen habe!\p"
	.string "Du hast diesem TOP VIER Typen eine\n"
	.string "Abreibung verpasst!$"

Route16_Combate_Bruno_Texto_15:
	.string "Und das ist nicht alles. Du hast diesen\n"
	.string "Ort vor dieser verdammten, heimlichen\l"
	.string "Diktatur gerettet … Unsere\l"
	.string "Verbundenheit mit TEAM ROCKET ist\l"
	.string "durch all das nur noch stärker\l"
	.string "geworden.$"

Route16_Combate_Bruno_Texto_16:
	.string "Ich weiß, dass das nicht viel für das\n"
	.string "ist, was du gerade für uns getan hast,\l"
	.string "aber wir wollen, dass du das hier nimmst.\p"
	.string "Das ist einer der besten Objekte, die\n"
	.string "wir haben! Wir haben das von dem\l"
	.string "komischen Safari-Wärter geklaut, der\l"
	.string "nicht normal reden kann.$"

Route16_Combate_Bruno_Texto_17:
	.string "Wir verschwinden jetzt … Wir kämpfen\n"
	.string "weiter, damit die Region irgendwann\l"
	.string "endlich wieder in guten Händen ist!$"

Route16_Combate_Bruno_Move_1:
walk_in_place_up
step_end

Route16_Combate_Bruno_Move_1.1:
walk_in_place_down
step_end

Route16_Combate_Bruno_Move_2:
walk_in_place_right
step_end

Route16_Combate_Bruno_Move_3:
walk_in_place_left
step_end

Route16_Combate_Bruno_Move_4:
walk_up
face_left
step_end

Route16_Combate_Bruno_Move_4.1:
walk_down
face_left
step_end

Route16_Combate_Bruno_Move_5:
emote_exclamation_mark
step_end

Route16_Combate_Bruno_Move_6:
face_left
step_end

Route16_Combate_Bruno_Move_7:
face_right
step_end

Route16_Combate_Bruno_Move_8:
walk_in_place_right
walk_in_place_left
step_end
