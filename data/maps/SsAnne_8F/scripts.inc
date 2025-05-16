SsAnne_8F_MapScripts::
	.byte 0

SsAnne8F_2::
lock     
faceplayer     
msgbox SsAnne8F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne8F_Text_2:
	.string "ANDRA: {PLAYER}. Stelle sicher, dass\n"
	.string "der Kapitän nicht entkommen kann. Es\l"
	.string "ist Zeit für ein kleines Gespräch unter\l"
	.string "sechs Augen.$"



SsAnne8F_7::
end



SsAnne8F_8::
end



SsAnne8F_9::
end



SsAnne8FDocumento_100::
msgbox SsAnne8FDocumento_Text_100, MSGBOX_SIGN   
end

SsAnne8FDocumento_Text_100:
.string "Igitt!\n"
	.string "Ich hätte nicht hingucken sollen!$"



SsAnne8FDocumento_101::
msgbox SsAnne8FDocumento_Text_101, MSGBOX_SIGN   
end

SsAnne8FDocumento_Text_101:
	.string "Wie man seine Seekrankheit in drei\n"
	.string "einfachen Schritten heilt …\p"
	.string "Der Kapitän scheint es zu lesen!$"

SsAnne_8F_Capitan_move_6.1:
delay_8
face_right
delay_16
delay_8
face_up
step_end

SsAnne_8F_Capitan::
applymovement 2, SsAnne_8F_Capitan_move_1
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_2
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_1 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_3
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_2 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_4
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_3 MSGBOX_AUTOCLOSE
msgbox SsAnne_8F_Capitan_Text_4 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_5
waitmovement 0x0
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
addobject 6
delay 20
playse SE_PIN
applymovement 2, SsAnne_8F_Capitan_move_6
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_5 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_6 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, SsAnne_8F_Capitan_move_6.1
waitmovement 0x0
delay 10
msgbox SsAnne_8F_Capitan_Text_7 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, SsAnne_8F_Capitan_move_7
waitmovement 0x0
delay 10
msgbox SsAnne_8F_Capitan_Text_9 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
delay 10
msgbox SsAnne_8F_Capitan_Text_10 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_9
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 2, SsAnne_8F_Capitan_move_9.1
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_9.1
waitmovement 0x0
waitse
delay 15
msgbox SsAnne_8F_Capitan_Text_11.1 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_12 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_11
applymovement 2, SsAnne_8F_Capitan_move_11
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 3
applymovement 3, SsAnne_8F_Capitan_move_12
waitmovement 0x0
delay 15
playse SE_EXIT
addobject 1
applymovement 1, SsAnne_8F_Capitan_move_13
waitmovement 0x0
playse SE_EXIT
delay 15
addobject 4
applymovement 4, SsAnne_8F_Capitan_move_14
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_1
applymovement 2, SsAnne_8F_Capitan_move_1
applymovement 5, SsAnne_8F_Capitan_move_5
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
removeobject 6
msgbox SsAnne_8F_Capitan_Text_14 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_14.1 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, SsAnne_8F_Capitan_move_15
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_15 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_16 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_16.1 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_17 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, SsAnne_8F_Capitan_move_11
waitmovement 0x0
waitse
msgbox SsAnne_8F_Capitan_Text_18 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_19 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_10
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_20 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_20.1 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_21 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_22 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_23 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_16
waitmovement 0x0
applymovement 5, SsAnne_8F_Capitan_move_17
waitmovement 0x0
playse 450
msgbox SsAnne_8F_Capitan_Text_24 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_24.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CAPITAN_1, SsAnne_8F_Capitan_Text_25
msgbox SsAnne_8F_Capitan_Text_26 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_18
delay 15
playmoncry SPECIES_GOLBAT, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
playse SE_M_WING_ATTACK
delay 30
playse SE_SUPER_EFFECTIVE
delay 30
playse SE_FAINT
delay 15
applymovement 2, SsAnne_8F_Capitan_move_19
waitmovement 0x0
delay 15
playse SE_BALL_TRADE
waitse
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SsAnne_8F_Capitan_Text_27 MSGBOX_DEFAULT
waitfanfare
msgbox SsAnne_8F_Capitan_Text_28 MSGBOX_AUTOCLOSE
delay 15
msgbox SsAnne_8F_Capitan_Text_29 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_8.1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_30 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_30.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 5, SsAnne_8F_Capitan_move_20
waitmovement 0x0
waitse
msgbox SsAnne_8F_Capitan_Text_30.2 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_30.3 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 5, SsAnne_8F_Capitan_move_8
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_31 MSGBOX_AUTOCLOSE
delay 10
msgbox SsAnne_8F_Capitan_Text_32 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_TENTACOOL, CRY_MODE_ENCOUNTER
waitmoncry
msgbox SsAnne_8F_Capitan_Text_33 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_SCRATCH
delay 30
playse SE_M_TOXIC
delay 30
msgbox SsAnne_8F_Capitan_Text_34 MSGBOX_AUTOCLOSE
applymovement 5, SsAnne_8F_Capitan_move_5
applymovement 2, SsAnne_8F_Capitan_move_21
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_35 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, SsAnne_8F_Capitan_move_6
delay 5
applymovement 3, SsAnne_8F_Capitan_move_6
delay 5
applymovement 4, SsAnne_8F_Capitan_move_6
waitmovement 0x0
waitse
delay 10
msgbox SsAnne_8F_Capitan_Text_36 MSGBOX_AUTOCLOSE
delay 5
applymovement 1, SsAnne_8F_Capitan_move_22
applymovement 3, SsAnne_8F_Capitan_move_22
applymovement 4, SsAnne_8F_Capitan_move_22
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_8F_Capitan_move_10
applymovement 2, SsAnne_8F_Capitan_move_1
waitmovement 0x0
msgbox SsAnne_8F_Capitan_Text_37 MSGBOX_AUTOCLOSE
applymovement 2, SsAnne_8F_Capitan_move_23
waitmovement 0x0
setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_MOM
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_1
removeobject 2
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 27
release
end

SsAnne_8F_Capitan_move_8.1:
delay_8
face_down
delay_16
delay_8
face_up
delay_8
step_end

SsAnne_8F_Capitan_move_9.1:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_Text_1:
	.string "Gibt es etwas, womit ich\n"
	.string "euch helfen kann?$"

SsAnne_8F_Capitan_Text_2:
	.string "ANDRA: Tatsächlich gibt es da etwas.\n"
	.string "Sehen Sie, KAPITÄN. Sie sind eine\l"
	.string "lebende Legende unter den Seefahrern.\p"
	.string "Sie haben die sieben Weltmeere bereist\n"
	.string "und sind vielen seltenen POKéMON\l"
	.string "begegnet. Ist dem nicht so?$"

SsAnne_8F_Capitan_Text_3:
	.string "Wir haben uns gefragt, ob Sie uns einen\n"
	.string "kleinen Einblick in all diese Reisen\l"
	.string "geben könnten, indem Sie uns ihre\l"
	.string "berühmte Phiole zeigen? Die Phiole, von\l"
	.string "der es heißt, dass sie eines der größten\l"
	.string "Geheimnisse der Welt in sich birgt …$"

SsAnne_8F_Capitan_Text_4:
	.string "KAPITÄN: Meinst du diese Phiole?$"

SsAnne_8F_Capitan_Text_5:
	.string "ANDRA: Wow! Ihr Inhalt ist so {PAUSE 25}…{PAUSE 25}\n"
	.string "mysteriös.$"

SsAnne_8F_Capitan_Text_6:
	.string "KAPITÄN: Das stimmt, Kleine. Das\n"
	.string "POKéMON, zu dem dieses Fragment\l"
	.string "gehört, ist ganz anders als alles, was\l"
	.string "du je gesehen hast. Hast du schon\l"
	.string "einmal von den Pseudo-Legendären\l"
	.string "POKéMON gehört?$"

SsAnne_8F_Capitan_Text_7:
	.string "ANDRA: Pseudo-Legendäre POKéMON?$"

SsAnne_8F_Capitan_Text_8:
	.string "KAPITÄN: In dieser Region wäre\n"
	.string "SIEGFRIEDs DRAGORAN ein Beispiel\l"
	.string "für eins.$"

SsAnne_8F_Capitan_Text_9:
	.string "Es sind POKéMON, die zwar nicht mit den\n"
	.string "natürlichen Eigenschaften von den\l"
	.string "Legendären geboren werden, sich jedoch\l"
	.string "im Laufe ihrer Entwicklung so weit\l"
	.string "steigern können, dass sie, nach einem\l"
	.string "langen Prozess, genauso stark oder\l"
	.string "sogar mächtiger werden als ein\l"
	.string "typisches legendäres POKéMON.$"

SsAnne_8F_Capitan_Text_9.1:
	.string "Diese POKéMON repräsentieren\n"
	.string "üblicherweise die Natur ihrer\l"
	.string "Heimatregion. Schon von ihrer Geburt an\l"
	.string "tragen sie den Geist ihrer Region in\l"
	.string "sich, was es ihnen später ermöglicht,\l"
	.string "ihr volles Potenzial zu entfalten.$"

SsAnne_8F_Capitan_Text_10:
	.string "KAPITÄN: POKéMON, die unter den\n"
	.string "Sterblichen auserwählt wurden und die\l"
	.string "Chance erhalten haben, göttliches\l"
	.string "Territorium zu betreten. Das sind\l"
	.string "Pseudo-Legendäre POKéMON.$"

SsAnne_8F_Capitan_Text_11:
	.string "KAPITÄN: Das POKéMON, zu dem dieses\n"
	.string "Fragment gehört, weist viele Merkmale\l"
	.string "auf, die typischerweise mit den\l"
	.string "Pseudo-Legendären assoziiert werden.\p"
	.string "Gleichzeitig {PAUSE 15}...{PAUSE 15} teilt es aber auch\n"
	.string "Eigenschaften mit wahren Legendären\l"
	.string "POKéMON.$"
	
SsAnne_8F_Capitan_Text_11.1:
	.string "Es ist wirklich einzigartig.$"

SsAnne_8F_Capitan_Text_12:
	.string "ANDRA: Beeindruckend! Sie sind wirklich\n"
	.string "ein weiser Mann, KAPITÄN! Ein Mann mit\l"
	.string "tausend Geschichten!$"

SsAnne_8F_Capitan_Text_13:
	.string "KAPITÄN: Ihr seid wohl zwei ganz\n"
	.string "wissbegierige Jungspunde, was. Ich\l"
	.string "würde euch gerne mehr erzählen, wenn da\l"
	.string "nicht die Tatsache wäre, dass {PAUSE 25}…{PAUSE 25}$"

SsAnne_8F_Capitan_Text_14:
	.string "Ich weiß, wer ihr seid und warum ihr hier\n"
	.string "seid. Ein Besatzungsmitglied hat uns\l"
	.string "bereits über eine gewisse\l"
	.string "Verbrecherorganisation namens TEAM\l"
	.string "ROCKET unterrichtet und eure Uniformen\l"
	.string "passen genau auf ihre Beschreibung.$"

SsAnne_8F_Capitan_Text_14.1:
.string "ANDRA: {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

SsAnne_8F_Capitan_Text_15:
	.string "Wisst ihr {PAUSE 15}...{PAUSE 15} ich habe viele Meere\n"
	.string "befahren, aber keines von ihnen kommt\l"
	.string "an die von HOENN heran. Sie sind\l"
	.string "weitläufig, ungezähmt und voller Leben!\l"
	.string "Nur dort fühlt man sich wirklich frei!\l"
	.string "Sie sind ein Paradies, über\l"
	.string "Jahrtausende von der Natur geformt,\l"
	.string "die so viele Geheimnisse in sich bergen,\l"
	.string "die nur darauf warten, gelüftet zu\l"
	.string "werden.$"

SsAnne_8F_Capitan_Text_16:
	.string "Und jetzt wollt ihr mir erzählen, dass\n"
	.string "zwei Kleinkriminelle aus einer Region,\l"
	.string "deren Gewässer durch das Kraftwerk und\l"
	.string "den Radweg längst verschmutzt wurden,\l"
	.string "einfach hier einspazieren und etwas\l"
	.string "von mir stehlen wollen!\p"
	.string "Mein einzigartiges Fragment, das\n"
	.string "mein 30-jähriges Dasein als Seemann\l"
	.string "repräsentiert?!$"

SsAnne_8F_Capitan_Text_16.1:
	.string "Oh nein! Dazu fehlen euch sowohl die\n"
	.string "Fähigkeiten als auch die Erfahrung!$"

SsAnne_8F_Capitan_Text_17:
	.string "ANDRA: Verzeihen Sie KAPITÄN, aber da\n"
	.string "muss ich Ihnen widersprechen. Kein Meer\l"
	.string "der Welt kann sich mit denen der\l"
	.string "SEVII-EILANDE messen und nirgendwo\l"
	.string "auf der Welt gibt es mehr Geheimnisse\l"
	.string "als an ihren Küsten.$"

SsAnne_8F_Capitan_Text_18:
	.string "KAPITÄN: Nun. Du hast einen guten\n"
	.string "Geschmack, Kleine. Ich nehme an, ihr\l"
	.string "beide stammt von dort.$"

SsAnne_8F_Capitan_Text_19:
	.string "Vielleicht hast du recht. Die\n"
	.string "SEVII-EILANDE habe ich noch nicht\l"
	.string "bereist und ich freue mich bereits auf\l"
	.string "den Tag, an dem ich es tue. Mir ist zu\l"
	.string "Ohren gekommen, dass es zwischen den\l"
	.string "sieben Hauptinseln noch einige kleine,\l"
	.string "unerforschte Eilande gibt.$"

SsAnne_8F_Capitan_Text_20:
	.string "Topografische Karten zeigen acht, neun\n"
	.string "und manchmal sogar bis zu zehn Inseln\l"
	.string "in der Region. Der Name SEVII ist in\l"
	.string "Wahrheit eher eine Formalität, da nur\l"
	.string "sieben dieser Inseln tatsächlich\l"
	.string "besiedelt sind.$"

SsAnne_8F_Capitan_Text_20.1:
	.string "ANDRA: Interessant {PAUSE 15}…{PAUSE 15}$"

SsAnne_8F_Capitan_Text_21:
	.string "KAPITÄN: Ich würde liebend gern weiter\n"
	.string "mit euch über diese Themen plaudern,\l"
	.string "doch das geht in Anbetracht der\l"
	.string "Situation nicht. Ihr seid hier, um etwas\l"
	.string "Wertvolles von mir zu stehlen und das\l"
	.string "kann und werde ich nicht zulassen!$"

SsAnne_8F_Capitan_Text_22:
.string "KAPITÄN: MATROSEN!\p"
	.string "Kümmert euch um das Weib!$"

SsAnne_8F_Capitan_Text_23:
.string "ANDRA: Falsch!\p"
	.string "ICH werde mich um EUCH kümmern!$"

SsAnne_8F_Capitan_Text_24:
	.string "KAPITÄN: Was dich angeht. Dich knöpfe\n"
	.string "ich mir persönlich vor. Du hast keinen\l"
	.string "blassen Schimmer, was dich erwartet, du\l"
	.string "Möchtegern-Krimineller! Deine POKéMON\l"
	.string "haben keine Chance gegen meine Crew,\l"
	.string "die durch jahrelange Erfahrung auf den\l"
	.string "Meeren gestählt wurde!$"

SsAnne_8F_Capitan_Text_24.1:
	.string "Ich werde dich in zwei schneiden und\n"
	.string "den Rest von dir bei der Party oben\l"
	.string "auf dem Deck servieren!$"

SsAnne_8F_Capitan_Text_25:
.string "Wer zur Hölle seid ihr?!$"

SsAnne_8F_Capitan_Text_26:
.string "ANDRA: GOLBAT!\p"
	.string "Beende es mit FLÜGELSCHLAG!$"

SsAnne_8F_Capitan_Text_27:
.string "-ANDRA stiehlt die Phiole\n"
	.string "vom KAPITÄN.-$"

SsAnne_8F_Capitan_Text_28:
	.string "KAPITÄN: Das kann doch nicht wahr sein!\p"
	.string "Meine hart erprobte Crew, besiegt\n"
	.string "und erniedrigt von ein paar\l"
	.string "Nachwuchs-Verbrechern einer lokalen\l"
	.string "Verbrecherbande! Was für eine Schande!$"

SsAnne_8F_Capitan_Text_29:
	.string "ANDRA: Von HOCHRANGIGEN RÜPELN,\n"
	.string "KAPITÄN. Ich habe Ihrem Status\l"
	.string "Respekt erwiesen, also sollten Sie\l"
	.string "es uns gleichtun.$"

SsAnne_8F_Capitan_Text_30:
	.string "ANDRA: Außerdem, betrachten Sie es mal\n"
	.string "von dieser Seite. Wir werden die Phiole\l"
	.string "wirklich aufs Genaueste untersuchen.$"
	
SsAnne_8F_Capitan_Text_30.1:
	.string "Und wir werden herausfinden, zu welchem\n"
	.string "POKéMON es gehört, anstatt es Staub\l"
	.string "ansammeln zu lassen und jedem die\l"
	.string "Ruhmestage eines alten, vergessenen\l"
	.string "Seemannes in Erinnerung zu rufen.$"

SsAnne_8F_Capitan_Text_30.2:
	.string "Nehmen Sie es nicht persönlich. Als Dank\n"
	.string "für Ihre Kooperation werden wir Ihnen\l"
	.string "einen Brief mit den Ergebnissen unserer\l"
	.string "Forschung schicken.$"

SsAnne_8F_Capitan_Text_30.3:
	.string "Wie klingt das? Wissen Sie, diese\n"
	.string "Information könnte Millionen wert sein!$"

SsAnne_8F_Capitan_Text_31:
.string "KAPITÄN: Du kleine, freche Rotzgöre!\p"
.string "Keiner von euch wird meine\n"
	.string "Kammer verlassen!$"

SsAnne_8F_Capitan_Text_32:
.string "ANDRA: TENTACHA!\p"
	.string "Setz GIFTSTACHEL {PAUSE 25}…{PAUSE 25} gegen den KAPITÄN ein!!$"

SsAnne_8F_Capitan_Text_33:
.string "Sehr gut!$"

SsAnne_8F_Capitan_Text_34:
.string "KAPITÄN: Hnrgh! $"

SsAnne_8F_Capitan_Text_35:
.string "KAPITÄN: Mein Kopf!\p"
	.string "Diese Kleinkriminelle hat mich vergiftet!$"

SsAnne_8F_Capitan_Text_36:
	.string "MATROSEN: KAPITÄN!$"

SsAnne_8F_Capitan_Text_37:
	.string "ANDRA: {PLAYER}! Jetzt! Wir müssen\n"
	.string "hier schnellstens verschwinden!$"

SsAnne_8F_Capitan_move_1:
face_up
step_end

SsAnne_8F_Capitan_move_2:
walk_in_place_left
step_end

SsAnne_8F_Capitan_move_3:
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_4:
walk_in_place_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_5:
walk_right
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_6:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_move_7:
walk_left
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_8:
walk_in_place_down
step_end

SsAnne_8F_Capitan_move_9:
face_right
step_end

SsAnne_8F_Capitan_move_10:
face_down
step_end

SsAnne_8F_Capitan_move_11:
emote_exclamation_mark
face_down
step_end

SsAnne_8F_Capitan_move_12:
walk_right
walk_right
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_13:
walk_right
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_14:
walk_right
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_15:
walk_right
walk_right
face_up
step_end

SsAnne_8F_Capitan_move_16:
walk_right
walk_right
walk_right
walk_down
step_end


SsAnne_8F_Capitan_move_17:
walk_left
walk_in_place_down
step_end


SsAnne_8F_Capitan_move_18:
walk_down
walk_down
walk_left
walk_in_place_up
step_end

SsAnne_8F_Capitan_move_19:
walk_left
walk_up
walk_up
walk_up
step_end

SsAnne_8F_Capitan_move_20:
emote_exclamation_mark
step_end

SsAnne_8F_Capitan_move_21:
walk_down
walk_down
walk_down
walk_left
walk_in_place_right
step_end

SsAnne_8F_Capitan_move_22:
walk_up
walk_up
walk_up
step_end

SsAnne_8F_Capitan_move_23:
walk_fast_down
face_left
delay_8
step_end

SsAnne_8F_Capitan_Papelera::
compare VAR_UNUSED_0x40F7, 26
goto_if_gt SsAnne_8F_Capitan_Papelera_2
msgbox SsAnne_8F_Capitan_Papelera_Texto_1 MSGBOX_AUTOCLOSE
release
end

SsAnne_8F_Capitan_Papelera_2::
msgbox SsAnne_8F_Capitan_Papelera_Texto_2 MSGBOX_AUTOCLOSE
release
end

SsAnne_8F_Capitan_Papelera_Texto_1:
.string "This trash can is\n"
	.string "shiny and clean.$"

SsAnne_8F_Capitan_Papelera_Texto_2:
	.string "Gross! Shouldn't have looked!$"

SsAnne_8F_Capitan_Marineros::
msgbox SsAnne_8F_Capitan_Marineros_Text_1 MSGBOX_SIGN
release
end


SsAnne_8F_Capitan_Marineros_Text_1:
.string "CAPTAIN! Are you hurt?\n"
	.string "We'll bring you an ANTIDOTE!$"
