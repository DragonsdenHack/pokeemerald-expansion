SaffronCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, SaffronCity_OnTransition
	.byte 0

SaffronCity_OnTransition::
setflag FLAG_VISITED_SAFFRON_CITY
end

SaffronCity1::
lock     
faceplayer     
msgbox SaffronCity_Text_1, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_1:
	.string "Oh! Seid ihr nicht schon\n"
	.string "längst verschwunden?$"


SaffronCity2::
lock     
faceplayer     
msgbox SaffronCity_Text_2, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_2:
.string "Wir sind startklar, SIR!$"


SaffronCity3::
lock     
faceplayer     
msgbox SaffronCity_Text_3, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_3:
.string "Ha!\n"
.string "Ihr habt versagt, ROCKETs!\l"
.string "Die Stadt ist wieder sicher!$"


SaffronCity4::
lock     
faceplayer     
msgbox SaffronCity_Text_4, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_4:
	.string "SAFFRONIA gehört jetzt TEAM ROCKET!\n"
	.string "Es ist alles unter Kontrolle, Sir!$"


SaffronCity5::
lock     
faceplayer     
msgbox SaffronCity_Text_5, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_5:
	.string "Keine Sorge, OFFIZIER {PLAYER}!\p"
	.string "Niemand kommt aus der ARENA, um SILPH\n"
	.string "zu helfen, solange ich hier bin!$"


SaffronCity6::
lock     
faceplayer     
msgbox SaffronCity_Text_6, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_6:
	.string "Mein TAUBOSS und ich haben genau\n"
	.string "gesehen, wie dein BOSS nach eurer\l"
	.string "Niederlage jämmerlich geflohen ist.\p"
	.string "Ihr seid geliefert!$"


SaffronCity7::
end


SaffronCity8::
lock     
faceplayer     
msgbox SaffronCity_Text_8, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_8:
	.string "Ihr habt versagt, ROCKETs! Ich kann es\n"
	.string "kaum erwarten zu sehen, wie SIEGFRIED\l"
	.string "euch den Rest gibt!$"


SaffronCity9::
lock     
faceplayer     
msgbox SaffronCity_Text_9, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_9:
	.string "Haben Sie wirklich BRUNO von den TOP\n"
	.string "VIER besiegt? Es ist mir eine Ehre,\l"
	.string "für Sie zu arbeiten, Sir!$"


SaffronCity10::
lock     
faceplayer     
msgbox SaffronCity_Text_10, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_10:
	.string "Zu Befehl, OFFIZIER {PLAYER}!\n"
	.string "Hier ist alles unter Kontrolle, Sir!$"


SaffronCity11::
lock     
faceplayer     
msgbox SaffronCity_Text_11, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_11:
	.string "Dein Boss ist wie ein jämmerlicher\n"
	.string "Feigling aus SILPH geflohen!\l"
	.string "Das war's für euch!$"


SaffronCity12::
lock     
faceplayer     
msgbox SaffronCity_Text_12, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_12:
	.string "Die TOP VIER werden euch alle\n"
	.string "den Arsch versohlen!$"


SaffronCity13::
lock     
faceplayer     
msgbox SaffronCity_Text_13, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_13:
	.string "Ich fühle mich so lebendig,\n"
	.string "wenn ich böse bin!$"


SaffronCity14::
lock     
faceplayer     
msgbox SaffronCity_Text_14, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_14:
	.string "Keine Sorge, Sir! Die Stadt gehört uns!\p"
	.string "Sie können sich ganz auf den Angriff\n"
	.string "auf SILPH konzentrieren!$"


SaffronCity16::
lock     
faceplayer     
msgbox SaffronCity_Text_16, MSGBOX_DEFAULT
release     
end

SaffronCity_Text_16:
	.string "Wir haben auf Sie gewartet, SIR! Mit\n"
	.string "Ihnen als Anführer kann nichts schief\n"
	.string "gehen! Ich habe direkte Befehle von\l"
	.string "GIOVANNI, den Eingang zu blockieren,\l"
	.string "damit ROT nicht reinkommt, indem ich so\l"
	.string "tue, als würde ich schlafen. Unserem\l"
	.string "BOSS zufolge interessiert es ROT nicht\l"
	.string "die Bohne, was wir hier treiben. Er geht\l"
	.string "nur rein, wenn er einen freien Weg zur\l"
	.string "Tür sieht und er wird ihn sehen … wenn\l"
	.string "wir es wollen!\p"
	.string "LANG LEBE TEAM ROCKET!\p"
	.string "HULDIGT OFFIZIER {PLAYER}!\p"
	.string "GOTT SCHÜTZE GIOVANNI!$"


SaffronCity17::
end



SaffronCityDocumento_100::
msgbox SaffronCityDocumento_Text_100, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_100:
.string "Das neueste Produkt der SILPH CO.!\n"
    .string "Verkaufsstart: Demnächst!$"



SaffronCityDocumento_101::
msgbox SaffronCityDocumento_Text_101, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_101:
.string "TIPPS FÜR TRAINER\p"
	.string "Der SUPERBALL erhöht die Fangquote.\p"
	.string "Probiere ihn bei POKéMON aus, die\n"
	.string "schwer zu fangen sind!$"



SaffronCityDocumento_102::
msgbox SaffronCityDocumento_Text_102, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_102:
.string "SILPH CO. BÜROGEBÄUDE$"



SaffronCityDocumento_103::
msgbox SaffronCityDocumento_Text_103, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_103:
.string "SAFFRONIA CITY\n"
    .string "Die goldglänzende Handelsstadt!$"



SaffronCityDocumento_104::
msgbox SaffronCityDocumento_Text_104, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_104:
.string "PSYCHOLOGEN-HAUS$"



SaffronCityDocumento_105::
msgbox SaffronCityDocumento_Text_105, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_105:
.string "KAMPFARENA$"



SaffronCityDocumento_106::
msgbox SaffronCityDocumento_Text_106, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_106:
.string "SAFFRONIA CITY POKéMON-ARENA\n"
    .string "ARENALEITERIN: SABRINA\l"
    .string "Die Herrin der PSYCHO-POKéMON!$"



SaffronCityDocumento_107::
msgbox SaffronCityDocumento_Text_107, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_107:
.string "POKéMON TRAINER-FANCLUB\p"
	.string "Die Namen von TRAINERn sind\n"
	.string "auf dem Schild eingeritzt.$"




SaffronCityDocumento_108::
msgbox SaffronCityDocumento_Text_108, MSGBOX_SIGN   
end

SaffronCityDocumento_Text_108:
	.string "TIPPS, NOTWENDIGE FÄHIGKEITEN UND\n"
	.string "ANFORDERUNGEN, UM IN DER STADT ZU\n"
	.string "ÜBERLEBEN: - Mindestarbeitszeit pro\l"
	.string "Tag: 10 Stunden, 5 Tage die Woche. -\l"
	.string "Jeder Einwohner muss monatlich\l"
	.string "150.000¥ in die Forschung, Entwicklung\l"
	.string "und Innovationen investieren. - Sei ein\l"
	.string "herausragender Trainer - weit über dem\l"
	.string "Durchschnitt (in den Top 10 %). - Ein\l"
	.string "Bestreben, sich ständig\l"
	.string "weiterzuentwickeln, selbst zu\l"
	.string "verwirklichen, seine Effizienz zu\l"
	.string "steigern - und schließlich eine\l"
	.string "unerschütterliche Loyalität gegenüber\l"
	.string "der SILPH COMPANY.$"

SaffronCity_Combate_Andra_Izq_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.1
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Izq_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.2
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.3
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Centro::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.4
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra_Der_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, SaffronCity_Combate_Andra_Move_1.5
waitmovement 0x0
goto SaffronCity_Combate_Andra

SaffronCity_Combate_Andra::
playse SE_PIN
applymovement 15, SaffronCity_Combate_Andra_Move_2
applymovement 18, SaffronCity_Combate_Andra_Move_2
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_3
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, SaffronCity_Combate_Andra_Move_4
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox SaffronCity_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 18, SaffronCity_Combate_Andra_Move_5.1
waitmovement 0x0
delay 10
msgbox SaffronCity_Combate_Andra_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_5
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 18, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
playse SE_SLIDING_DOOR
opendoor 33, 30
waitdooranim
applymovement 18, VerdanturfTown_Move_22
waitmovement 0x0
removeobject 18
closedoor 33, 30
waitdooranim
applymovement 15, SaffronCity_Combate_Andra_Move_7
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
waitse
delay 10
msgbox SaffronCity_Combate_Andra_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, SaffronCity_Combate_Andra_Move_4.1
waitmovement 0x0
delay 10
msgbox SaffronCity_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_8
waitmovement 0x0
playse 559
msgbox SaffronCity_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Combate_Andra_Texto_13 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
msgbox SaffronCity_Combate_Andra_Texto_14 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, SaffronCity_Combate_Andra_Move_9
waitmovement 0x0
waitse
delay 10
msgbox SaffronCity_Combate_Andra_Texto_14.1 MSGBOX_AUTOCLOSE
delay 10
clearflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
trainerbattle_no_intro TRAINER_ANDRA_5, SaffronCity_Combate_Andra_Texto_15
msgbox SaffronCity_Combate_Andra_Texto_16 MSGBOX_AUTOCLOSE
applymovement 15, SaffronCity_Combate_Andra_Move_6
waitmovement 0x0
setflag FLAG_HIDE_MAUVILLE_CITY_WALLYS_UNCLE
playse SE_SLIDING_DOOR
opendoor 33, 30
waitdooranim
applymovement 15, VerdanturfTown_Move_22
waitmovement 0x0
removeobject 15
closedoor 33, 30
waitdooranim
setvar VAR_UNUSED_0x40F7, 73
release
end

SaffronCity_Combate_Andra_Move_5.1:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

SaffronCity_Combate_Andra_Texto_1:
	.string "LAMBDA: Okay. Wir sind startklar.\n"
	.string "Der Sturm auf SILPH kann beginnen!$"

SaffronCity_Combate_Andra_Texto_2:
	.string "Unseren Informationen zufolge\n"
	.string "befindet sich der PRÄSIDENT in seinem\l"
	.string "Büro in der 11. Etage und wird von\l"
	.string "seiner persönlichen Leibgarde bewacht.\p"
	.string "Der Aufzug ist keine Option. Wir müssen\n"
	.string "stattdessen die Teleporter benutzen.$"

SaffronCity_Combate_Andra_Texto_2.1:
	.string "Und dazu kommt noch, dass wir für die\n"
	.string "Tür zu seinem Büro einen TÜRÖFFNER\l"
	.string "brauchen.$"

SaffronCity_Combate_Andra_Texto_3:
	.string "ANDRA: Als Erstes brauchen wir also\n"
	.string "diesen TÜRÖFFNER. Hat irgendjemand\l"
	.string "hier eine Idee, wo er sein könnte?$"

SaffronCity_Combate_Andra_Texto_4:
	.string "LAMBDA: So ein Gegenstand sollte nur\n"
	.string "den hochrangigen Angestellten der\l"
	.string "Firma zugänglich sein. Wir müssen sie\l"
	.string "uns also alle nacheinander vornehmen.$"

SaffronCity_Combate_Andra_Texto_5:
	.string "Die SILPH COMPANY und SIEGFRIEDs\n"
	.string "Regierung haben nicht gerade das beste\l"
	.string "Verhältnis zueinander. Also stehen die\l"
	.string "Chancen gut, dass sich die TOP VIER\l"
	.string "diesmal nicht einmischen wird, wie sie es\l"
	.string "im KRAFTWERK getan haben.$"
	
SaffronCity_Combate_Andra_Texto_5.1:
	.string "Trotzdem müssen wir auf alles gefasst\n"
	.string "sein. Sobald wir diesen TÜRÖFFNER\l"
	.string "haben, geben wir sofort GIOVANNI\l"
	.string "Bescheid. Euer Job wird dann sein,\l"
	.string "vor dem Büro Wache zu halten, damit\l"
	.string "GIOVANNI in Ruhe mit dem PRÄSIDENTEN\l"
	.string "verhandeln kann. Verstanden?$"

SaffronCity_Combate_Andra_Texto_6:
	.string "ANDRA: Ich halt's nicht mehr aus!\n"
	.string "Legen wir los!$"

SaffronCity_Combate_Andra_Texto_7:
	.string "LAMBDA: Das ist die richtige\n"
	.string "Einstellung! Los geht's! SILPH wird\l"
	.string "schon bald unser Verbündeter sein!$"

SaffronCity_Combate_Andra_Texto_8:
	.string "ANDRA: Eine Sache noch, {PLAYER}. Ich\n"
	.string "habe mich noch nicht bei dir für deine\l"
	.string "Hilfe beim KRAFTWERK bedankt. Das ist\l"
	.string "schon das zweite Mal, dass du mir zur\l"
	.string "Hilfe eilen musstest, weil ich zu\l"
	.string "unfähig war, eine Mission alleine\l"
	.string "abzuschließen.$"
	
SaffronCity_Combate_Andra_Texto_8.1:
	.string "traducir$"

SaffronCity_Combate_Andra_Texto_9:
	.string "Diese Region ist perfekt, um sich als\n"
	.string "Trainer weiterzuentwickeln. Es ist\l"
	.string "faszinierend, wie verschieden Orte wie\l"
	.string "dieser und LAVANDIA sind. Aber jeder\l"
	.string "dieser Orte hat seine eigene\l"
	.string "Atmosphäre, die ihn einzigartig macht.$"

SaffronCity_Combate_Andra_Texto_10:
	.string "Jetzt gerade ist mein Team in Topform.\p"
	.string "Erinnerst du dich noch an ATLAS' Rede\n"
	.string "an unserem ersten Tag? Ehrlich gesagt\l"
	.string "bin ich weiter gekommen, als ich es je\l"
	.string "für möglich gehalten hätte.\p"
	.string "Und trotzdem glaube ich, dass ich noch\n"
	.string "viel stärker werden kann!$"

SaffronCity_Combate_Andra_Texto_11:
	.string "Ich hoffe, dass dieser Ort mit all\n"
	.string "seiner fortschrittlichen Technologie\l"
	.string "meinen Erwartungen gerecht wird, aber {PAUSE 15}…{PAUSE 15}$"

SaffronCity_Combate_Andra_Texto_12:
	.string "So wie die Dinge jetzt stehen, gibt es\n"
	.string "für mich glaube ich keine größere\l"
	.string "Herausforderung, als du {PLAYER}. Nur\l"
	.string "in einem Kampf gegen dich kann ich die\l"
	.string "Gewissheit erlangen, ob mein Team\l"
	.string "wirklich stark ist. Du bist der Einzige,\l"
	.string "den ich noch nicht unter fairen\l"
	.string "Bedingungen besiegt habe!$"

SaffronCity_Combate_Andra_Texto_13:
	.string "Seit unserem Kampf in der ROCKET-BASIS\n"
	.string "habe ich wie verrückt trainiert. Ich\l"
	.string "habe die besten POKéMON dieser Region\l"
	.string "studiert und pausenlos überlegt, wie\l"
	.string "ich meine eigenen verbessern kann.$"

SaffronCity_Combate_Andra_Texto_14:
	.string "Von ROCKET OFFIZIER zu ROCKET\n"
	.string "OFFIZIER {PAUSE 15}…{PAUSE 15}$"

SaffronCity_Combate_Andra_Texto_14.1:
	.string "Erlebe die unaufhaltsame\n"
	.string "Kraft meines Teams!$"

SaffronCity_Combate_Andra_Texto_15:
	.string "Ich fasse es nicht! Was kann ich\n"
	.string "denn noch tun?$"

SaffronCity_Combate_Andra_Texto_16:
	.string "Diesmal war ich mir sicher, dass ich\n"
	.string "gewinnen würde! Es war dumm von mir, so\l"
	.string "zu denken. Du hast BRUNO und ZWEI\l"
	.string "LEGENDÄRE POKéMON besiegt. Vielleicht\l"
	.string "ist es noch zu früh, aber vergiss nicht,\l"
	.string "{PLAYER}: Ich habe mein Potenzial\l"
	.string "noch lange nicht ausgeschöpft!$"

SaffronCity_Combate_Andra_Move_1:
walk_right
walk_right
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.1:
walk_right
walk_right
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.2:
walk_right
walk_right
walk_up
walk_up
walk_right
face_up
step_end

SaffronCity_Combate_Andra_Move_1.3:
walk_left
walk_left
walk_left
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.4:
walk_left
walk_left
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_1.5:
walk_left
walk_left
walk_up
walk_left
walk_up
walk_left
face_up
step_end

SaffronCity_Combate_Andra_Move_2:
emote_exclamation_mark
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_3:
face_right
step_end

SaffronCity_Combate_Andra_Move_4:
face_left
step_end

SaffronCity_Combate_Andra_Move_4.1:
delay_16
face_left
delay_16
face_up
delay_16
face_right
delay_16
face_down
delay_16
walk_in_place_down
delay_8
step_end

SaffronCity_Combate_Andra_Move_5:
walk_in_place_right
step_end

SaffronCity_Combate_Andra_Move_6:
face_up
step_end

SaffronCity_Combate_Andra_Move_7:
walk_right
delay_16
face_up
delay_16
walk_in_place_down
step_end

SaffronCity_Combate_Andra_Move_8:
face_down
step_end

SaffronCity_Combate_Andra_Move_9:
walk_in_place_down
step_end

SaffronCity_Secundaria_Motorista::
compare VAR_ROUTE133_STATE, 2
goto_if_eq SaffronCity_Secundaria_Motorista_3
compare VAR_ROUTE133_STATE, 1
goto_if_eq SaffronCity_Secundaria_Motorista_2
msgbox SaffronCity_Secundaria_Motorista_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_3 MSGBOX_AUTOCLOSE
msgbox SaffronCity_Secundaria_Motorista_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq SaffronCity_Secundaria_Motorista_No
msgbox SaffronCity_Secundaria_Motorista_Texto_10 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_2
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_11 MSGBOX_AUTOCLOSE
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE133_STATE, 1
release
end

SaffronCity_Secundaria_Motorista_2::
lock
faceplayer
msgbox SaffronCity_Secundaria_Motorista_Texto_8 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_3::
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, SaffronCity_Secundaria_Motorista_Move_1
waitmovement 0x0
applymovement 17, SaffronCity_Secundaria_Motorista_Move_3
waitmovement 0x0
msgbox SaffronCity_Secundaria_Motorista_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox SaffronCity_Secundaria_Motorista_Texto_5 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox SaffronCity_Secundaria_Motorista_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_HITMONCHAN, 37, ITEM_MUSCLE_BAND
waitfanfare
msgbox SaffronCity_Secundaria_Motorista_Texto_7 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LITTLEROOT_TOWN_PLAYERS_BEDROOM_MOM
fadescreen 1
delay 20
removeobject 17
fadescreen 0
release
end


SaffronCity_Secundaria_Motorista_No::
msgbox SaffronCity_Secundaria_Motorista_Texto_13 MSGBOX_AUTOCLOSE
release
end

SaffronCity_Secundaria_Motorista_Move_1:
emote_exclamation_mark
step_end

SaffronCity_Secundaria_Motorista_Move_2:
walk_in_place_right
step_end

SaffronCity_Secundaria_Motorista_Move_3:
face_player
step_end

SaffronCity_Secundaria_Motorista_Texto_1:
	.string "Dieses alte Stück Scheiße … Wegen ihm\n"
	.string "wird ganz KANTO uns BIKER hassen!$"

SaffronCity_Secundaria_Motorista_Texto_2:
.string "…\n"
	.string "…$"

SaffronCity_Secundaria_Motorista_Texto_3:
	.string "ROCKET OFFIZIER {PLAYER}! Hast du's\n"
	.string "schon gehört? Die wollen die\l"
	.string "TUNNELPFADE zwischen AZURIA und\l"
	.string "ORANIA sowie zwischen PRISMANIA und\l"
	.string "LAVANDIA schließen! Und das Schlimmste\l"
	.string "ist, sie schieben uns BIKERN die Schuld\l"
	.string "in die Schuhe, weil wir angeblich dort\l"
	.string "für “Unruhe” gesorgt haben! Alles nur,\l"
	.string "damit die Leute gezwungen sind, durch\l"
	.string "SAFFRONIA zu latschen, wo sie ganz\l"
	.string "zufällig 'ne neue Firma eröffnen werden.\p"
	.string "Auf Kosten unseres Rufs!$"

SaffronCity_Secundaria_Motorista_Texto_4:
	.string "Wow! Du bist der Hammer, {PLAYER}!\p"
	.string "Der Typ hat seine Schnapsidee, die\n"
	.string "TUNNELPFADE zu schließen fürs Erste\l"
	.string "aufgegeben! Ich kann's kaum erwarten,\l"
	.string "den Jungs Bescheid zu sagen!$"

SaffronCity_Secundaria_Motorista_Texto_5:
	.string "Jetzt versteh ich, warum du so 'nen Ruf\n"
	.string "als überragenden TRAINER hast!\p"
	.string "Hier ist das POKéMON, von dem ich\n"
	.string "gesprochen habe!$"

SaffronCity_Secundaria_Motorista_Texto_6:
	.string "-DU ERHÄLTST EIN LEVEL 37 NOCKCHAN!!-$"

SaffronCity_Secundaria_Motorista_Texto_7:
	.string "Eigentlich war das ein Geschenk von\n"
	.string "'nem Kumpel, dem KARATE-MEISTER, aber\l"
	.string "ein BIKER wie ich kann mit einem\l"
	.string "NOCKCHAN nichts anfangen.\p"
	.string "Ich geh jetzt, {PLAYER}. Du weißt,\n"
	.string "wir werden TEAM ROCKET immer helfen!$"

SaffronCity_Secundaria_Motorista_Texto_8:
	.string "Wie läuft's mit der Mission? Denk dran.\p"
	.string "Der Typ, den du aufmischen sollst,\n"
	.string "hängt normalerweise stundenlang in\l"
	.string "MARMORIAs MUSEUM DER WISSENSCHAFT\l"
	.string "rum. Ich schätz' mal, da wirst du ihn\l"
	.string "finden.$"

SaffronCity_Secundaria_Motorista_Texto_9:
	.string "Nur jemand mit deiner Kraft und deinem\n"
	.string "Einfluss kann diesen Schlipsträger\l"
	.string "stoppen! Wenn du uns bei unserem\l"
	.string "Problem hilfst, gebe ich dir dafür ein\l"
	.string "krass-seltenes POKéMON!\p"
	.string "Was sagst du?$"

SaffronCity_Secundaria_Motorista_Texto_10:
	.string "Ich wusste, dass uns nicht hängen\n"
	.string "lässt!! Das ist wahre Kameradschaft!\p"
	.string "Hör mal, {PLAYER}! Der Typ, der hinter\n"
	.string "allem steckt, ist ein totaler\l"
	.string "Fossilienfreak und hockt ständig in\l"
	.string "MARMORIAs MUSEUM DER WISSENSCHAFT\l"
	.string "rum.$"

SaffronCity_Secundaria_Motorista_Texto_11:
	.string "Er ist der Boss einer\n"
	.string "Eisenbahngesellschaft, die JOHTO mit\l"
	.string "KANTO verbinden will. Aber er glaubt,\l"
	.string "dass die TUNNELPFADE seinem Geschäft\l"
	.string "schaden. Deshalb will er sie um jeden\l"
	.string "Preis loswerden!$"

SaffronCity_Secundaria_Motorista_Texto_12:
	.string "Wenn jemand wie du ihm zeigt, wie der\n"
	.string "Hase hier läuft, dann bleibt alles beim\l"
	.string "Alten: Die TUNNELPFADE und unser Ruf\l"
	.string "bleiben intakt.\p"
	.string "Wir zählen auf dich, {PLAYER}!$"

SaffronCity_Secundaria_Motorista_Texto_13:
	.string "Ich versteh schon, Kumpel. Mit all den\n"
	.string "Aufträgen von GIOVANNI hast du sicher\l"
	.string "schon genug um die Ohren.$"


Silph_Barrera::
compare VAR_UNUSED_0x40F7, 80
goto_if_gt Silph_Barrera_3
compare VAR_UNUSED_0x40F7, 74
goto_if_gt Silph_Barrera_2
release
end

Silph_Barrera_2::
lock
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_1
waitmovement 0x0
msgbox Silph_Barrera_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_Barrera_Move_2
waitmovement 0x0
release
end

Silph_Barrera_3::
release
end

Silph_Barrera_Texto_1:
	.string "-Wenn ich jetzt hier reingehe, könnte\n"
	.string "ich die ganze Mission vermasseln.-$"

Silph_Barrera_Move_1:
walk_in_place_down
step_end

Silph_Barrera_Move_2:
walk_slow_down
step_end
