PewterCity_Museum_1F_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, PewterCity_Museum_1F_OnFrame
	.byte 0

PewterCity_Museum_1F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 57, PewterCity_Museum_1F_Miguel
	.2byte 0

PewterMuseum1::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 57
goto_if_gt PewterMuseum1_2
msgbox PewterMuseum1_Texto_1 MSGBOX_NPC
release
end

PewterMuseum1_2::
msgbox PewterMuseum1_Texto_2 MSGBOX_NPC
release
end

PewterMuseum1_Texto_2:
	.string "Es ist klar, dass der Schein trügt. Im\n"
	.string "Namen des MARMORIA MUSEUMS DER\l"
	.string "WISSENSCHAFT danke ich dir für das, was\l"
	.string "du getan hast. Du kannst jederzeit\l"
	.string "kostenlos eintreten.$"

PewterMuseum1_Texto_1:
	.string "Warum hast du die Eintrittsgebühr nicht\n"
	.string "bezahlt? Wir wissen, dass du sie ohnehin\l"
	.string "nie bezahlst. Aber mach dir keine\l"
	.string "Sorgen. Eines Tages, wenn die Zeit\l"
	.string "gekommen ist, wirst du alle deine\l"
	.string "Schulden auf einmal begleichen.$"


PewterMuseum2::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_2:
	.string "Dies ist ein außergewöhnliches Fossil!$"



PewterMuseum3::
lock     
faceplayer     
msgbox PewterCity_Museum1F_Text_3, MSGBOX_DEFAULT
release     
end

PewterCity_Museum1F_Text_3:
	.string "Vielen Dank, dass du uns geholfen hast,\n"
	.string "diesen opportunistischen Dieb\l"
	.string "loszuwerden.$"



PewterMuseum5::
end



PewterMuseumDocumento_100::
msgbox PewterMuseumDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseumDocumento_Text_100:
.string "POKÉMON JOURNAL\p"
	.string "SONDERREPORTAGE: ARENALEITER ROCKO\n"
	.string "aus MARMORIA CITY! ROCKO lacht selten,\l"
	.string "aber er kann nicht aufhören, wenn er\l"
	.string "angefangen hat.$"



PewterMuseumDocumento_101::
showmonpic SPECIES_AERODACTYL_SKEL, 10, 3   
playmoncry SPECIES_AERODACTYL, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_101, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_101:
.string "AERODACTYL-Fossil\n"
    .string "Ein urzeitliches und seltenes POKéMON.$"



PewterMuseumDocumento_102::
showmonpic SPECIES_KABUTOPS_SKEL, 10, 3   
playmoncry SPECIES_KABUTOPS, CRY_MODE_ENCOUNTER
msgbox PewterMuseumDocumento_Text_102, MSGBOX_SIGN  
hidemonpic 
end

PewterMuseumDocumento_Text_102:
	.string "KABUTOPS-Fossil\n"
    .string "Ein urzeitliches und seltenes POKéMON.$"

PewterCity_Museum_1F_Miguel::
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_1
waitmovement 0x0
delay 10
playse MUS_RG_POKE_MANSION
msgbox PewterCity_Museum_1F_Miguel_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_2
waitmovement 0x0
playse SE_PIN
applymovement 7, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
waitse
msgbox PewterCity_Museum_1F_Miguel_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_7 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_8 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.1
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.2
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_8.4 MSGBOX_AUTOCLOSE
applymovement 7, PewterCity_Museum_1F_Miguel_Move_7
waitmovement 0x0
delay 10
applymovement 6, PewterCity_Museum_1F_Miguel_Move_6.3
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_9 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_10 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6.2
waitmovement 0x0
waitse
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 7, PewterCity_Museum_1F_Miguel_Move_6
waitmovement 0x0
trainerbattle_no_intro TRAINER_CMIGUEL_2, PewterCity_Museum_1F_Miguel_Texto_11
msgbox PewterCity_Museum_1F_Miguel_Texto_12 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_13 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_WARP_OUT
msgbox PewterCity_Museum_1F_Miguel_Texto_14 MSGBOX_AUTOCLOSE
delay 20
removeobject 7
fadescreen 0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_15 MSGBOX_AUTOCLOSE
applymovement 3, PewterCity_Museum_1F_Miguel_Move_8
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_16 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox PewterCity_Museum_1F_Miguel_Texto_17 MSGBOX_DEFAULT
givemon SPECIES_OMANYTE, 30, ITEM_MYSTIC_WATER
waitfanfare
applymovement 3, PewterCity_Museum_1F_Miguel_Move_9
waitmovement 0x0
applymovement 6, PewterCity_Museum_1F_Miguel_Move_4
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.1
waitmovement 0x0
msgbox PewterCity_Museum_1F_Miguel_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, PewterCity_Museum_1F_Miguel_Move_10
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.2
applymovement 6, PewterCity_Museum_1F_Miguel_Move_5
waitmovement 0x0
delay 10
msgbox PewterCity_Museum_1F_Miguel_Texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 6, PewterCity_Museum_1F_Miguel_Move_3
waitmovement 0x0
waitse
msgbox PewterCity_Museum_1F_Miguel_Texto_20 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_11
waitmovement 0x0
delay 40
removeobject 4
delay 40
msgbox PewterCity_Museum_1F_Miguel_Texto_21 MSGBOX_AUTOCLOSE
applymovement 6, PewterCity_Museum_1F_Miguel_Move_12
waitmovement 0x0
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_POISON_BARB
waitfanfare
msgbox PewterCity_Museum_1F_Miguel_Texto_22 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Miguel_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PewterCity_Museum_1F_Miguel_Move_4.3
applymovement 6, PewterCity_Museum_1F_Miguel_Move_13
waitmovement 0x0
clearflag FLAG_NUEVA_839
setflag FLAG_HIDE_FANCLUB_LITTLE_BOY
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 58
release
end

PewterCity_Museum_1F_Miguel_Move_4.3:
delay_16
face_left
delay_16
delay_8
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_4.2:
delay_8
face_up
delay_8
step_end

PewterCity_Museum_1F_Miguel_Move_4.1:
delay_8
face_left
delay_8
step_end

PewterCity_Museum_1F_Miguel_Move_6.1:
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_6.2:
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_6.3:
walk_in_place_up
step_end

PewterCity_Museum_1F_Miguel_Texto_1:
	.string "????: Die Gerüchte sind also wahr? Hier\n"
	.string "gibt es wirklich einen ALTBERNSTEIN.$"

PewterCity_Museum_1F_Miguel_Texto_2:
.string "WISSENSCHAFTLER MIGUEL: DU!$"

PewterCity_Museum_1F_Miguel_Texto_3:
	.string "LAMBDA: Das ist also der\n"
	.string "Wissenschaftler, der uns am MONDBERG\l"
	.string "einen Strich durch die Rechnung\l"
	.string "gemacht hat. Ich dachte, du hattest ihm\l"
	.string "im FELSTUNNEL eine Lektion erteilt.$"

PewterCity_Museum_1F_Miguel_Texto_4:
	.string "WISSENSCHAFTLER MIGUEL: So war es\n"
	.string "auch. Ihr habt euer Bestes getan, dass\l"
	.string "ich euch nie wieder in die Quere komme,\l"
	.string "indem ihr mir meine POKéMON\l"
	.string "weggenommen habt.$"
	
PewterCity_Museum_1F_Miguel_Texto_4.1:
	.string "Aber zu eurem Pech war einer der\n"
	.string "einflussreichsten Persönlichkeiten\l"
	.string "dieser Region sehr an meiner Geschichte\l"
	.string "interessiert.\p"
	.string "Er hat mich zu seinem Helfer gemacht.$"

PewterCity_Museum_1F_Miguel_Texto_4.2:
	.string "Jetzt besitze ich sogar noch bessere\n"
	.string "POKéMON als bei unserem letzten Kampf.\p"
	.string "Niemand wird dir diesmal aus der\n"
	.string "Patsche helfen, {PLAYER}!$"

PewterCity_Museum_1F_Miguel_Texto_5:
	.string "Das berüchtigte AERODACTYL, das\n"
	.string "wildeste Raubtier der Urgeschichte {PAUSE 5}…{PAUSE 5}\n"
	.string "Man sagt, dass seine wilde Urform sogar\l"
	.string "noch mächtiger war als diejenige, die\l"
	.string "man durch heutige\l"
	.string "Rekonstruktionsmethoden erhält.$"

PewterCity_Museum_1F_Miguel_Texto_5.1:
	.string "Selbst SIEGFRIED nutzt eins {PAUSE 5}…{PAUSE 5}$"

PewterCity_Museum_1F_Miguel_Texto_6:
	.string "Mit so einem POKéMON, dem König der\n"
	.string "FOSSILIEN, würde mein Team automatisch\l"
	.string "auf das nächste Level katapultiert\l"
	.string "werden. Ich würde zu einer\l"
	.string "Autoritätsperson aufsteigen und alle\l"
	.string "POKÉMANIACs würden mich beneiden!$"

PewterCity_Museum_1F_Miguel_Texto_7:
	.string "Du bist eine Schande für die\n"
	.string "wissenschaftliche Gemeinschaft!$"

PewterCity_Museum_1F_Miguel_Texto_8:
	.string "WISSENSCHAFTLER MIGUEL: Was soll ich\n"
	.string "denn deiner Meinung nach machen?\p"
	.string "Einfach tatenlos dabei zusehen, wie die\n"
	.string "Region in Mittelmäßigkeit versinkt?$"

PewterCity_Museum_1F_Miguel_Texto_8.1:
	.string "Ich bin es Leid, dieselben TRAGOSSO,\n"
	.string "FLEGMON, RIHORN oder bestenfalls\l"
	.string "SCHLURP zu sehen. Hier gelten schon\l"
	.string "TRAINER mit einem mickrigen TAUBOGA\l"
	.string "oder einem NIDORINO als\l"
	.string "überdurchschnittlich.$"

PewterCity_Museum_1F_Miguel_Texto_8.2:
	.string "Im jetzigen KANTO gibt es nur zwei\n"
	.string "Möglichkeiten starke POKéMON zu\l"
	.string "bekommen: Entweder verkaufst du deine\l"
	.string "Seele an die Eliten der Region oder\l"
	.string "du betrügst andere.$"

PewterCity_Museum_1F_Miguel_Texto_8.3:
	.string "Aber Leute wie ihr wisst das ganz genau.\p"
	.string "Nicht wahr, {PLAYER}? Sei ehrlich!$"

PewterCity_Museum_1F_Miguel_Texto_8.4:
	.string "Am Ende zählt nur das Resultat - das\n"
	.string "nur BILL, SIEGFRIED und ich ein\l"
	.string "AERODACTYL haben werden!$"

PewterCity_Museum_1F_Miguel_Texto_9:
	.string "LAMBDA: Du bist wirklich selten dämlich.\p"
	.string "Dir stehen ein ROCKET ADMINISTRATOR\n"
	.string "und einer der fähigsten HOCHRANGIGEN\l"
	.string "Mitglieder unserer Organisation\l"
	.string "gegenüber. Du gehst nirgendwo mit\l"
	.string "diesem FOSSIL hin!$"

PewterCity_Museum_1F_Miguel_Texto_10:
	.string "WISSENSCHAFTLER MIGUEL: Du\n"
	.string "interessierst mich nicht, LAMBDA.\p"
	.string "Ich habe eine Rechnung mit {PLAYER} zu\n"
	.string "begleichen. Ich habe ihm versprochen,\l"
	.string "dass er für die Sache im FELSTUNNEL\l"
	.string "bezahlen wird.$"

PewterCity_Museum_1F_Miguel_Texto_10.1:
	.string "Und dieser Zeitpunkt ist jetzt\n"
	.string "gekommen, {PLAYER}!$"

PewterCity_Museum_1F_Miguel_Texto_11:
	.string "Mit dem Unterschied, dass meine\n"
	.string "POKéMON jetzt noch stärker sind!$"

PewterCity_Museum_1F_Miguel_Texto_12:
	.string "WISSENSCHAFTLER MIGUEL: Grrrr… Es ist\n"
	.string "also immer noch nicht genug. Ihr werdet\l"
	.string "mich nicht noch einmal in die Finger\l"
	.string "kriegen!$"

PewterCity_Museum_1F_Miguel_Texto_13:
	.string "LAMBDA: Nimm ihm seine POKéMON weg!$"

PewterCity_Museum_1F_Miguel_Texto_14:
	.string "WISSENSCHAFTLER MIGUEL HAT\n"
	.string "FLUCHTSEIL EINGESETZT!$"

PewterCity_Museum_1F_Miguel_Texto_15:
	.string "LAMBDA: Verdammter Wissenschaftler!\n"
	.string "Das nächste Mal werden wir ihm nicht nur\l"
	.string "seine POKéMON wegnehmen! Wir werfen\l"
	.string "ihn direkt in eine Zelle und lassen ihn\l"
	.string "dort verrotten, damit er uns nie wieder\l"
	.string "ein Dorn im Auge ist!$"

PewterCity_Museum_1F_Miguel_Texto_16:
	.string "MUSEUMs WISSENSCHAFTLER: Er war drauf\n"
	.string "und dran mit dem ALTBERNSTEIN\l"
	.string "abzuhauen. Wärst du nicht gewesen,\l"
	.string "hätte er Erfolg gehabt. Nimm das als\l"
	.string "Belohnung, junger ROCKET.$"

PewterCity_Museum_1F_Miguel_Texto_17:
	.string "DU ERHÄLTST EIN LEVEL 30 AMONITAS!$"

PewterCity_Museum_1F_Miguel_Texto_18:
	.string "LAMBDA: Ohne Scheiß. Du wirst wirklich\n"
	.string "sehr viel stärker geworden, seit du\l"
	.string "direkt unter GIOVANNI arbeitest.\p"
	.string "Selbst ein ADMINISTRATOR wie ich\n"
	.string "hätte sich mit dem Team dieses\l"
	.string "Wissenschaftlers schwergetan.$"

PewterCity_Museum_1F_Miguel_Texto_19:
	.string "MUSEUMs WISSENSCHAFTLER: Nach all dem\n"
	.string "hier stehen wir in eurer Schuld. Wenn\l"
	.string "ihr für eine Weile Tests an dem FOSSIL\l"
	.string "durchführen wollt, geht das für uns in\l"
	.string "Ordnung.$"

PewterCity_Museum_1F_Miguel_Texto_20:
	.string "LAMBDA: Perfekt. Ihr werdet es nicht\n"
	.string "bereuen! Wir werden euch als Zeichen\l"
	.string "unserer Dankbarkeit prozentual an\l"
	.string "unseren Gewinnen beteiligen! TEAM\l"
	.string "ROCKET weiß solche Gefallen zu\l"
	.string "schätzen und das auf großzügige Weise.$"

PewterCity_Museum_1F_Miguel_Texto_21:
	.string "Das war nur wegen dir möglich,\n"
	.string "{PLAYER}!\p"
	.string "Hier, ein persönliches Geschenk!$"

PewterCity_Museum_1F_Miguel_Texto_22:
	.string "Der GIFTSTICH erhöht GIFT-TYP\n"
	.string "Attacken um 20 %. Gib es deinem GOLBAT\l"
	.string "und sein GIFTFANG wird noch tödlicher!$"

PewterCity_Museum_1F_Miguel_Texto_23:
	.string "Bis später, {PLAYER} und\n"
	.string "Wissenschaftler {PAUSE 5}…{PAUSE 5}$"

PewterCity_Museum_1F_Miguel_Move_1:
walk_up
walk_in_place_up
step_end

PewterCity_Museum_1F_Miguel_Move_2:
walk_right
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_3:
emote_exclamation_mark
step_end

PewterCity_Museum_1F_Miguel_Move_4:
face_right
step_end

PewterCity_Museum_1F_Miguel_Move_5:
face_up
step_end

PewterCity_Museum_1F_Miguel_Move_6:
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_7:
face_down
step_end

PewterCity_Museum_1F_Miguel_Move_8:
walk_down
walk_right
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_9:
walk_up
walk_up
walk_left
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_10:
walk_in_place_down
step_end

PewterCity_Museum_1F_Miguel_Move_11:
walk_up
walk_right
walk_up
walk_up
step_end

PewterCity_Museum_1F_Miguel_Move_12:
walk_down
walk_down
step_end

PewterCity_Museum_1F_Miguel_Move_13:
walk_left
walk_down
walk_down
walk_down
step_end

PewterCity_Museum_1F_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE125_STATE, 0
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_3
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt PewterCity_Museum_1F_Entrenador_Especial_2
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_2::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_Museum_1F_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CINTAELEGIDA, PewterCity_Museum_1F_Entrenador_Especial_Texto_8
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_CHOICE_BAND
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE125_STATE, 1
release
end

PewterCity_Museum_1F_Entrenador_Especial_2_No::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_3::
msgbox PewterCity_Museum_1F_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

PewterCity_Museum_1F_Entrenador_Especial_Texto_1.1:
	.string "Du erhältst ein WAHLBAND vom\n"
	.string "WISSENSCHAFTLER!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_1:
	.string "Ich will ehrlich sein. GEOWURF ist eine\n"
	.string "lausige Attacke. Sie wäre nur für ein\l"
	.string "POKéMON wie CHANEIRA nützlich, das\l"
	.string "keinen physischen Schaden verursachen\l"
	.string "kann. Jeder, der sie einem GLURAK\l"
	.string "beibringt, ist ein hoffnungsloser Fall.\p"
	.string "Ich bin bereit, etwas zu vergeben, das\n"
	.string "wirklich Schaden anrichtet: Aber nur an\l"
	.string "einen Trainer, der alle acht ORDEN\l"
	.string "gesammelt hat.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_3:
	.string "Was für eine Schande. Es tut mir Leid,\n"
	.string "deine Zeit verschwendet zu haben.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_4:
	.string "Das WAHLBAND erhöht den physischen\n"
	.string "Angriff eines POKéMON um 50 %,\l"
	.string "beschränkt es jedoch auf eine Attacke.\p"
	.string "Aber seien wir mal ehrlich: Wen stört\n"
	.string "diese Einschränkung, wenn man alles mit\l"
	.string "einem Schlag plattmachen kann?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_5:
	.string "Wow! Man sieht nicht jeden Tag einen\n"
	.string "Trainer mit allen ORDEN! Ich bin es Leid,\l"
	.string "den Bildungsprozess von Perlen in der\l"
	.string "Schale von AUSTOS zu untersuchen! Wenn\l"
	.string "du mich im Kampf besiegen kannst,\l"
	.string "erhältst du zur Belohnung ein\l"
	.string "unglaubliches Item.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_6:
.string "Also, nimmst du die Herausforderung an?$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_7:
.string "Gut!\n"
	.string "Endlich ein würdiger Gegner!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_8:
.string "Das war ein großartiger Kampf!$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_9:
	.string "Ich bin in all meinen Jahren als\n"
	.string "Forscher keinem TRAINER wie dir\l"
	.string "begegnet. Wenn du die POKéMON LIGA\l"
	.string "herausfordern willst, solltest du\l"
	.string "das hier nehmen. Es wird deine\l"
	.string "Erfolgschancen erhöhen.$"

PewterCity_Museum_1F_Entrenador_Especial_Texto_10:
	.string "Baaaaah! Ich werde weiterhin meine\n"
	.string "wissenschaftlichen Kollegen besiegen,\l"
	.string "die kein Talent für Kämpfe haben!$"


