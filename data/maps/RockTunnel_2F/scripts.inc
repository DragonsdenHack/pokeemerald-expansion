RockTunnel_2F_MapScripts::
	.byte 0

RockTunnel2F_2::
end



RockTunnel2F_3::
end



RockTunnel2F_4::
end



RockTunnel2F_5::
end



RockTunnel2F_6::
end



RockTunnel2F_7::
end



RockTunnel2F_8::
end



RockTunnel2F_9::
end



RockTunnel2F_10::
end



RockTunnel2F_11::
end



RockTunnel2F_12::
end



RockTunnel2F_15::
end



RockTunnel2F_22::
lock     
faceplayer     
msgbox RockTunnel2F_Text_22, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_22:
	.string "Für DOMPTEURE wie mich sind ARBOK,\n"
	.string "SNOBILIKAT, TAUROS und SANDAMER\l"
	.string "großartige POKéMON. Aber ein KANGAMA?\p"
	.string "Das wäre der ultimative Fang! Kannst du\n"
	.string "dir vorstellen, wie viel erfolgreicher\l"
	.string "meine Aufführungen mit diesem POKéMON\l"
	.string "unter meiner Peitsche wären?$"



RockTunnel2F_28::
lock     
faceplayer     
msgbox RockTunnel2F_Text_28, MSGBOX_DEFAULT
release     
end

RockTunnel2F_Text_28:
	.string "Stell dir mal einen KÄFERSAMMLER mit\n"
	.string "einem KANGAMA VOR! All diese dummen\l"
	.string "Vorurteile, die uns als schwach\l"
	.string "abstempeln, wären sofort Geschichte!$"



RockTunnel2F_EventScript_Necio::
	trainerbattle_single TRAINER_RODNEY, RockTunnel2F_Text_NecioIntro, RockTunnel2F_Text_NecioDefeated
	msgbox RockTunnel2F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker::
	trainerbattle_single TRAINER_ATSUSHI, RockTunnel2F_Text_HikerIntro, RockTunnel2F_Text_HikerDefeated
	msgbox RockTunnel2F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica::
	trainerbattle_single TRAINER_SPENCER, RockTunnel2F_Text_ChicaIntro, RockTunnel2F_Text_ChicaDefeated
	msgbox RockTunnel2F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Chica2::
	trainerbattle_single TRAINER_ROLAND, RockTunnel2F_Text_Chica2Intro, RockTunnel2F_Text_Chica2Defeated
	msgbox RockTunnel2F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio2::
	trainerbattle_single TRAINER_RICHARD, RockTunnel2F_Text_Necio2Intro, RockTunnel2F_Text_Necio2Defeated
	msgbox RockTunnel2F_Text_Necio2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Necio3::
	trainerbattle_single TRAINER_HERMAN, RockTunnel2F_Text_Necio3Intro, RockTunnel2F_Text_Necio3Defeated
	msgbox RockTunnel2F_Text_Necio3PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker2::
	trainerbattle_single TRAINER_KIRK, RockTunnel2F_Text_Hiker2Intro, RockTunnel2F_Text_Hiker2Defeated
	msgbox RockTunnel2F_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel2F_EventScript_Hiker3::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_7, RockTunnel2F_Text_Hiker3Intro, RockTunnel2F_Text_Hiker3Defeated
	msgbox RockTunnel2F_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end

RockTunnel_2F_Combate_Miguel_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.1
waitmovement 0x0
goto RockTunnel_2F_Combate_Miguel

RockTunnel_2F_Combate_Miguel::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.2
waitmovement 0x0
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
msgbox RockTunnel_2F_Combate_Miguel_Texto_1 MSGBOX_AUTOCLOSE
playse SE_BALL_THROW
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
addobject 12
delay 30
playmoncry SPECIES_KANGASKHAN, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
playse SE_BALL_OPEN
waitse
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
removeobject 13
delay 20
playse SE_BALL
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
removeobject 12
msgbox RockTunnel_2F_Combate_Miguel_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_1
waitmovement 0x0
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_3 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.2
waitmovement 0x0
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.1
waitmovement 0x0
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_3
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_8 MSGBOX_AUTOCLOSE
delay 5
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1.2
waitmovement 0X0
delay 15
playse MUS_RG_SILPH
msgbox RockTunnel_2F_Combate_Miguel_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_9.2 MSGBOX_AUTOCLOSE
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.3
waitmovement 0x0
clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
trainerbattle_no_intro TRAINER_CMIGUEL_1, RockTunnel_2F_Combate_Miguel_Texto_10
playse SE_BREAKABLE_DOOR
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.4
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_2
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_12 MSGBOX_AUTOCLOSE
playse MUS_RG_ROCKET_HIDEOUT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 29
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_1
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_7
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_6
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_13 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_8
waitmovement 0x0
playfanfare MUS_OBTAIN_BADGE
msgbox RockTunnel_2F_Combate_Miguel_Texto_14 MSGBOX_DEFAULT
waitfanfare
msgbox RockTunnel_2F_Combate_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_10
waitmovement 0x0
msgbox RockTunnel_2F_Combate_Miguel_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 29, RockTunnel_2F_Combate_Miguel_Move_11
waitmovement 0x0
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 29
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_4
waitmovement 0x0
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_12
waitmovement 0x0
playse MUS_RG_MT_MOON
fadedefaultbgm
msgbox RockTunnel_2F_Combate_Miguel_Texto_17 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_2.2
waitmovement 0x0
waitse
delay 10
msgbox RockTunnel_2F_Combate_Miguel_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
removeobject 13
playse SE_BREAKABLE_DOOR
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_2F_Combate_Miguel_Move_11.1
applymovement 14, RockTunnel_2F_Combate_Miguel_Move_11.3
waitmovement 0x0
waitse
setflag FLAG_HIDE_ROUTE_104_MR_BRINEY
removeobject 14
setvar VAR_UNUSED_0x40F7, 43
release
end

RockTunnel_2F_Combate_Miguel_Move_2.3:
walk_left
step_end

RockTunnel_2F_Combate_Miguel_Move_2.4:
lock_facing_direction
walk_right
unlock_facing_direction
step_end

RockTunnel_2F_Combate_Miguel_Move_11.1:
face_down
lock_facing_direction
walk_up
unlock_facing_direction
step_end

RockTunnel_2F_Combate_Miguel_Move_2.2:
walk_in_place_left
step_end

RockTunnel_2F_Combate_Miguel_Move_2.1:
delay_8
face_up
delay_16
delay_8
face_left
step_end

RockTunnel_2F_Combate_Miguel_Texto_1:
.string "????: ENDLICH!\p"
	.string "Die Gerüchte waren also wahr!\p"
	.string "Vor mir steht ein WEIBCHEN und ich bin\n"
	.string "nur noch einen Schritt davon entfernt,\l"
	.string "es zu fangen!$"

RockTunnel_2F_Combate_Miguel_Texto_2:
	.string "Perfekt! Mit diesem POKéMON ist meine\n"
	.string "Sammlung starker und seltener POKéMON\l"
	.string "fast fertig!$"

RockTunnel_2F_Combate_Miguel_Texto_3:
	.string "Hast du etwas verloren? So ein Pech,\n"
	.string "ROCKET! Ich habe das KANGAMA zuerst\l"
	.string "entdeckt und gefangen, also gehört es\l"
	.string "jetzt zu meinem POKéMON-TEAM. Wenn du\l"
	.string "mich jetzt entschuldigen würd{PAUSE 15}…{PAUSE 15}$"

RockTunnel_2F_Combate_Miguel_Texto_4:
.string "Sekunde!\p"
	.string "Du bist doch der ROCKET vom MONDBERG,\n"
	.string "mit dem ich um die FOSSILEN gewettet\l"
	.string "habe!$"

RockTunnel_2F_Combate_Miguel_Texto_5:
	.string "Okay. Ich gebe zu, dass dein Pech\n"
	.string "einfach groß und mein Glück riesig war {PAUSE 5}…{PAUSE 5}$"

RockTunnel_2F_Combate_Miguel_Texto_6:
	.string "Dieser Dussel mag so stark sein, wie er\n"
	.string "will, aber er verfügt über keinerlei\l"
	.string "soziale Kompetenzen. Er nimmt jeden\l"
	.string "Deal an, den du ihm anbietest, obwohl\l"
	.string "er mit seinen POKéMON einfach jeden\l"
	.string "Handel erzwingen könnte.$"
	
RockTunnel_2F_Combate_Miguel_Texto_6.1:
	.string "Zum Glück waren ein paar Worte, in denen\n"
	.string "ich meinen Besitz an den beiden\l"
	.string "FOSSILIEN zum Ausdruck gebracht habe\l"
	.string "- zusammen mit ein paar hilfreichen\l"
	.string "Tipps, wo man die FOSSILIEN\l"
	.string "wiederbeleben kann, mehr als genug, um\l"
	.string "ihn davon zu überzeugen, sie mit mir zu\l"
	.string "teilen, obwohl er sie genauso gut hätte\l"
	.string "für sich behalten können. Ha!$"

RockTunnel_2F_Combate_Miguel_Texto_7:
	.string "Du bist wirklich ein Pechvogel, ROCKET.\p"
	.string "Zuerst hast du deine Chance auf dem\n"
	.string "MONDBERG im allerletzten Moment\l"
	.string "vermasselt und jetzt musstest du dabei\l"
	.string "zusehen, wie ich dieses wertvolle\l"
	.string "KANGAMA vor deinen Augen fange.$"

RockTunnel_2F_Combate_Miguel_Texto_8:
	.string "Was? Niemand geht hier irgendwo hin\n"
	.string "und das KANGAMA gehört jetzt dir?$"

RockTunnel_2F_Combate_Miguel_Texto_9:
	.string "Du armer kleiner hoffnungsloser\n"
	.string "Träumer! Denkst du wirklich, dass ich\l"
	.string "noch derselbe bin wie letztes Mal? Zu\l"
	.string "deiner Info. Ich habe in den geheimen\l"
	.string "Etagen der allmächtigen SILPH COMPANY\l"
	.string "trainiert, wo sie das Potenzial meiner\l"
	.string "POKéMON optimiert haben!$"
	
RockTunnel_2F_Combate_Miguel_Texto_9.1:
	.string "Im Vergleich zu mir sind alle anderen\n"
	.string "TRAINER hier Insekten!\p"
	.string "Wie schade für dich ROCKET!$"

RockTunnel_2F_Combate_Miguel_Texto_9.2:
	.string "Du hattest nie den Hauch einer Chance!\p"
	.string "Du hast nie den richtigen Zeitpunkt,\n"
	.string "den richtigen Ort oder günstige\l"
	.string "Umstände erwischt!$"

RockTunnel_2F_Combate_Miguel_Texto_10:
	.string "Wie kann das sein?!$"

RockTunnel_2F_Combate_Miguel_Texto_11:
	.string "Bei SILPH haben sie mir versichert, dass\n"
	.string "ich mit diesem Update sogar einen\l"
	.string "ARENALEITER besiegen könnte.\p"
	.string "Sie haben mich verarscht!$"

RockTunnel_2F_Combate_Miguel_Texto_12:
	.string "????: Und das sagt ausgerechnet\n"
	.string "jemand, der sein jetziges Team durch\l"
	.string "das Täuschen anderer Leute aufgebaut\l"
	.string "hat.$"

RockTunnel_2F_Combate_Miguel_Texto_13:
	.string "LANCE: Gute Arbeit, {PLAYER}! Du hast\n"
	.string "soeben einen gefährlichen Trainer\l"
	.string "mitsamt seines KANGAMA besiegt. Ich\l"
	.string "werde persönlich dafür sorgen, dass er\l"
	.string "lernt, wo er hingehört, bevor er ein\l"
	.string "FLUCHTSEIL zur Flucht verwenden kann.\p"
	.string "Dieser Schuft ist mit allen Wassern\n"
	.string "gewaschen!$"

RockTunnel_2F_Combate_Miguel_Texto_14:
	.string "-LANCE HAT SÄMTLICHE POKéMON DES\n"
	.string "STREBERS MIGUEL AN SICH GENOMMEN.-$"

RockTunnel_2F_Combate_Miguel_Texto_15:
 .string "STREBER MIGUEL: NO!$"

RockTunnel_2F_Combate_Miguel_Texto_16:
	.string "LANCE: Die Gerüchte waren also wahr.\p"
	.string "Wer hätte gedacht, dass ein KANGAMA\n"
	.string "in dieser Höhle lebt …$"

RockTunnel_2F_Combate_Miguel_Texto_16.1:
	.string "Okay. Ich werde sofort zur Basis\n"
	.string "zurückkehren, {PLAYER}. Das, was ich\l"
	.string "bei mir trage, ist von entscheidender\l"
	.string "Bedeutung. Du solltest ebenfalls\l"
	.string "schnellstmöglich zurückkehren.\p"
	.string "GIOVANNI wird zufrieden mit dir sein,\n"
	.string "dich für deine Leistungen belohnen und\l"
	.string "nach den Einzelheiten der Mission\l"
	.string "fragen. Lang lebe GIOVANNI!$"

RockTunnel_2F_Combate_Miguel_Texto_17:
	.string "STREBER MIGUEL: Ich werde dir niemals\n"
	.string "verzeihen! Wegen dir habe ich das Team,\l"
	.string "an dem ich jahrelang gearbeitet habe,\l"
	.string "innerhalb weniger Sekunden verloren.$"

RockTunnel_2F_Combate_Miguel_Texto_17.1:
	.string "Merk dir meine Worte, {PLAYER}!\p"
	.string "Ich werde nicht ruhen, bis ich\n"
	.string "mich an dir gerächt habe!$"

RockTunnel_2F_Combate_Miguel_Move_1:
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_1.1:
walk_down
walk_in_place_right
step_end

RockTunnel_2F_Combate_Miguel_Move_1.2:
walk_in_place_right
step_end

RockTunnel_2F_Combate_Miguel_Move_2:
emote_exclamation_mark
step_end

RockTunnel_2F_Combate_Miguel_Move_3:
walk_in_place_up
face_left
step_end

RockTunnel_2F_Combate_Miguel_Move_4:
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
step_end

RockTunnel_2F_Combate_Miguel_Move_6:
walk_in_place_down
step_end

RockTunnel_2F_Combate_Miguel_Move_7:
walk_in_place_up
step_end

RockTunnel_2F_Combate_Miguel_Move_8:
walk_right
walk_right
walk_down
face_right
step_end

RockTunnel_2F_Combate_Miguel_Move_9:
walk_left
walk_up
walk_left
face_down
step_end

RockTunnel_2F_Combate_Miguel_Move_10:
face_up
step_end

RockTunnel_2F_Combate_Miguel_Move_11:
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

RockTunnel_2F_Combate_Miguel_Move_11.3:
walk_left
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

RockTunnel_2F_Combate_Miguel_Move_12:
walk_left
walk_left
step_end

RockTunnel_2F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE123_STATE, 0
goto_if_gt RockTunnel_2F_Entrenador_Especial_3
msgbox RockTunnel_2F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox RockTunnel_2F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt RockTunnel_2F_Entrenador_Especial_2
msgbox RockTunnel_2F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

RockTunnel_2F_Entrenador_Especial_2::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox RockTunnel_2F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RockTunnel_2F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox RockTunnel_2F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ROCAAFILADA, RockTunnel_2F_Entrenador_Especial_Texto_8
msgbox RockTunnel_2F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM56
msgbox RockTunnel_2F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox RockTunnel_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE123_STATE, 1
release
end

RockTunnel_2F_Entrenador_Especial_2_No::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end




RockTunnel_2F_Entrenador_Especial_3::
msgbox RockTunnel_2F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

RockTunnel_2F_Entrenador_Especial_Texto_1.1:
	.string "Du erhältst TM71 STEINKANTE\n"
	.string "vom TRAINER!$"

RockTunnel_2F_Entrenador_Especial_Texto_1:
	.string "STEINHAGEL ist eine krasse Attacke,\n"
	.string "aber manchmal ist die Power nicht genug\l"
	.string "und der Zurückschreck-Bonus ist für\l"
	.string "viele GESTEINS-POKéMON nichts wert,\l"
	.string "wie GEOWAZ und RIZEROS, weil sie\l"
	.string "langsam sind. Ich suche schon lange\l"
	.string "nach ‘nem Trainer, der es mit mir\l"
	.string "aufnehmen kann. Du hast ja keine\l"
	.string "Ahnung, wie lange ich schon in dieser\l"
	.string "Höhle trainiere. Diese WANDERER und\l"
	.string "POKÉMANIACs sind keine\l"
	.string "Herausforderung - viel zu schwach.\p"
	.string "Ich werde nur gegen jemanden kämpfen,\n"
	.string "der alle ACHT ORDEN hat. Wenn du die\l"
	.string "hast und mich besiegst, gib ich dir\l"
	.string "noch was viel besseres als STEINHAGEL.$"

RockTunnel_2F_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

RockTunnel_2F_Entrenador_Especial_Texto_3:
	.string "Ne. Du bist noch nicht gut genug.\n"
	.string "Ich trainiere hier weiter, bis ein\n"
	.string "guter Gegner kommt.$"

RockTunnel_2F_Entrenador_Especial_Texto_4:
	.string "STEINKANTE hat 100 POWER und trifft\n"
	.string "mit ‘ner WAHRSCHEINLICHKEIT von 80.\p"
	.string "Die Trefferwahrscheinlichkeit könnte\n"
	.string "zwar besser sein, hat aber eine hohe\l"
	.string "Volltrefferquote und ist ‘ne perfekte\l"
	.string "Ergänzung zu ERDBEBEN. POKéMON wie\l"
	.string "RIZEROS, GEOWAZ und AERODACTYL oder\l"
	.string "auch MACHOMAI werden mit dieser\l"
	.string "Attacke Kämpfe dominieren.$"

RockTunnel_2F_Entrenador_Especial_Texto_5:
	.string "Ist es das, was ich denke? Du musst\n"
	.string "krass sein, wenn du alle ARENALEITER\l"
	.string "besiegt hast! Mein Team brennt darauf,\l"
	.string "sich mal richtig auszutoben!$"

RockTunnel_2F_Entrenador_Especial_Texto_6:
.string "Also, willst du kämpfen?$"

RockTunnel_2F_Entrenador_Especial_Texto_7:
	.string "Mal sehen, ob ich endlich mal ‘nen\l"
	.string "spannenden Kampf erlebe.$"

RockTunnel_2F_Entrenador_Especial_Texto_8:
	.string "Das war der geilste Kampf, den\n"
	.string "ich hier bisher hatte!$"

RockTunnel_2F_Entrenador_Especial_Texto_9:
	.string "Verdammt. Du bist echt auf ‘nem Level\n"
	.string "mit den besten TRAINERN der Region!\p"
	.string "Wie versprochen, hier nimm.$"

RockTunnel_2F_Entrenador_Especial_Texto_10:
	.string "Leider muss ich ab jetzt wohl weiter\n"
	.string "gegen dieselben schwachen WANDERERN\l"
	.string "und POKÉMANIACs kämpfen {PAUSE 5}…{PAUSE 5}$"
