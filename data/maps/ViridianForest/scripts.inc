ViridianForest_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, ViridianForest_OnResume
	.byte 0

ViridianForest_OnResume:
	call ViridianForest_SetupEscapeWarp
	end

ViridianForest_SetupEscapeWarp::
	setescapewarp MAP_ROUTE2, 5, 13
	return

ViridianForest1::
lock     
faceplayer     
msgbox ViridianForest_Text_1, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_1:
	.string "Meine Freunde und ich wollten hier\n"
	.string "KÄFER-POKéMON fangen … Unsere\l"
	.string "POKéMON wollen kämpfen!!!$"



ViridianForest2::
end



ViridianForest3::
end



ViridianForest4::
end



ViridianForest5::
end



ViridianForest6::
end



ViridianForest7::
end



ViridianForest8::
end



ViridianForest9::
lock     
faceplayer     
msgbox ViridianForest_Text_9, MSGBOX_DEFAULT
release     
end

ViridianForest_Text_9:
	.string "Es gibt hier wohl keine starken\n"
	.string "POKéMON…$"



ViridianForest10::
end



ViridianForest11::
end



ViridianForest12::
end



ViridianForest_EventScript_Cazabichos::
	trainerbattle_single TRAINER_PATRICIA, ViridianForest_Text_CazabichosIntro, ViridianForest_Text_CazabichosDefeated
	msgbox ViridianForest_CazabichosPostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos2::
	trainerbattle_single TRAINER_MAY_ROUTE_110_TREECKO, ViridianForest_Text_Cazabichos2Intro, ViridianForest_Text_Cazabichos2Defeated
	msgbox ViridianForest_Cazabichos2PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos3::
	trainerbattle_single TRAINER_MAY_ROUTE_103_TREECKO, ViridianForest_Text_Cazabichos3Intro, ViridianForest_Text_Cazabichos3Defeated
	msgbox ViridianForest_Cazabichos3PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos4::
	trainerbattle_single TRAINER_BROOKE_5, ViridianForest_Text_Cazabichos4Intro, ViridianForest_Text_Cazabichos4Defeated
	msgbox ViridianForest_Cazabichos4PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForest_EventScript_Cazabichos5::
	trainerbattle_single TRAINER_BROOKE_4, ViridianForest_Text_Cazabichos5Intro, ViridianForest_Text_Cazabichos5Defeated
	msgbox ViridianForest_Cazabichos5PostBattle, MSGBOX_AUTOCLOSE
	end



ViridianForestDocumento_100::
msgbox ViridianForestDocumento_Text_100, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_100:
	.string "AUF WIEDERSEHEN IM VERTANIA-WALD.\n"
	.string "DER NÄCHSTE ORT IST MARMORIA CITY.$"



ViridianForestDocumento_101::
msgbox ViridianForestDocumento_Text_101, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_101:
.string "TIPPS FÜR TRAINER\p"
	.string "Es ist verboten, anderen Trainern\n"
	.string "POKéMON zu stehlen! Fang nur wilde\l"
	.string "POKéMON!$"



ViridianForestDocumento_102::
msgbox ViridianForestDocumento_Text_102, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_102:
.string "TIPPS FÜR TRAINER\p"
	.string "Du kannst deinen POKéDEX jederzeit\n"
	.string "PROF. EICH via PC bewerten lassen!$"



ViridianForestDocumento_103::
msgbox ViridianForestDocumento_Text_103, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_103:
.string "TIPPS FÜR TRAINER\p"
	.string "Wenn du Kämpfe meiden möchtest,\n"
	.string "bleibe hohem Gras fern!$"



ViridianForestDocumento_104::
msgbox ViridianForestDocumento_Text_104, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_104:
.string "TIPPS FÜR TRAINER\p"
	.string "Geschwächte POKéMON sind leichter\n"
	.string "zu fangen! Sind sie bei Kräften,\l"
	.string "könnten sie fliehen!$"



ViridianForestDocumento_105::
msgbox ViridianForestDocumento_Text_105, MSGBOX_SIGN   
end

ViridianForestDocumento_Text_105:
	.string "Bei Vergiftungen hat sich das\n"
	.string "GEGENGIFT aus dem POKéMON-SUPERMARKT\l"
	.string "bewährt.$"

ViridianForest_Combate_Guays_Arriba::
applymovement OBJ_EVENT_ID_PLAYER, ViridianForest_Combate_Guays_Arriba_Move_1
waitmovement 0x0
goto ViridianForest_Combate_Guays

ViridianForest_Combate_Guays_Arriba_Move_1:
walk_down
face_left
step_end

ViridianForest_Combate_Guays_Abajo::
applymovement OBJ_EVENT_ID_PLAYER, ViridianForest_Combate_Guays_Abajo_Move_1
waitmovement 0x0
goto ViridianForest_Combate_Guays

ViridianForest_Combate_Guays_Abajo_Move_1:
walk_up
face_left
step_end

ViridianForest_Combate_Guays::
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_1 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 12, ViridianForest_Combate_Guays_Move_3
waitmovement 0x0
applymovement 12, ViridianForest_Combate_Guays_Move_4
waitmovement 0x0
applymovement 13, ViridianForest_Combate_Guays_Move_4
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_4 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_5 MSGBOX_AUTOCLOSE
applymovement 13, ViridianForest_Combate_Guays_Move_5
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_6 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_5
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VERO_2, ViridianForest_Combate_Guays_Texto_8
msgbox ViridianForest_Combate_Guays_Texto_9 MSGBOX_AUTOCLOSE
msgbox ViridianForest_Combate_Guays_Texto_10 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_7
applymovement 13, ViridianForest_Combate_Guays_Move_8
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_11 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox ViridianForest_Combate_Guays_Texto_12 MSGBOX_DEFAULT
givemon SPECIES_PINSIR, 15, ITEM_SILVER_POWDER
waitfanfare
msgbox ViridianForest_Combate_Guays_Texto_13 MSGBOX_AUTOCLOSE
applymovement 12, ViridianForest_Combate_Guays_Move_1
applymovement 13, ViridianForest_Combate_Guays_Move_2
waitmovement 0x0
msgbox ViridianForest_Combate_Guays_Texto_14 MSGBOX_AUTOCLOSE
msgbox ViridianForest_Combate_Guays_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_FANCLUB_LADY
fadescreen 1
delay 20
removeobject 12
removeobject 13
fadescreen 0
setvar VAR_UNUSED_0x408B, 1
release
end

ViridianForest_Combate_Guays_Texto_1:
	.string "VERO: Habe ich's dir doch gesagt! PINSIR\n"
	.string "ist kein ausgestorbenes POKéMON in\l"
	.string "diesem Wald! Und wir hatten richtig\l"
	.string "Glück, gleich ein Paar von ihnen zu\l"
	.string "entdecken!$"

ViridianForest_Combate_Guays_Texto_2:
	.string "JUAN: Mit dieser neuesten Ergänzung in\n"
	.string "unserem Team werden uns alle\l"
	.string "Ass-Trainer beneiden. Niemand hat ein\l"
	.string "Team wie wir. Das SICHLOR, das wir in\l"
	.string "der SAFARI-ZONE gefangen haben, ist\l"
	.string "ebenfalls eine Bereicherung. Zwei\l"
	.string "KÄFER-TYPEN, von denen die meisten\l"
	.string "mittelmäßigen Käfersammler hier nicht\l"
	.string "einmal träumen können.$"

ViridianForest_Combate_Guays_Texto_3:
	.string "VERO: Ich erinnere mich an dich. Du\n"
	.string "warst im FELSTUNNEL, als das Gerücht\l"
	.string "mit dem KANGAMA rumging. Scheint so, als\l"
	.string "wäre es nur eine Lüge gewesen,\l"
	.string "verglichen mit dem hier … Niemand hätte\l"
	.string "geglaubt, dass hier noch ein PINSIR\l"
	.string "sein würde und doch ist hier eins.$"

ViridianForest_Combate_Guays_Texto_4:
	.string "JUAN: Ist das der Typ von TEAM ROCKET,\n"
	.string "der dich besiegt hat?$"

ViridianForest_Combate_Guays_Texto_5:
	.string "VERO: Ja. Er muss ein Kommandant sein\n"
	.string "oder so. Gewöhnliche ROCKETs sind bei\l"
	.string "weitem nicht so stark wie er.$"

ViridianForest_Combate_Guays_Texto_6:
	.string "JUAN: Einer von TEAM ROCKET mit guten\n"
	.string "POKéMON! Davon will ich mich selbst\l"
	.string "überzeugen. So jemand ist schwerer zu\l"
	.string "finden, als ein PINSIR in diesem Wald!$"

ViridianForest_Combate_Guays_Texto_7:
	.string "VERO: Wir haben das ultimative Team,\n"
	.string "das wir wollten, vervollständigt!\p"
	.string "Keine Chance, dass du uns besiegst!$"

ViridianForest_Combate_Guays_Texto_8:
	.string "Es musste ausgerechnet einer von TEAM\n"
	.string "ROCKET sein, der uns Staub fressen\l"
	.string "lässt!$"

ViridianForest_Combate_Guays_Texto_9:
	.string "JUAN: Ich hätte wirklich nicht\n"
	.string "erwartet, dass ein ROCKET die Asse\l"
	.string "unter den ASS-TRAINERN besiegt.$"

ViridianForest_Combate_Guays_Texto_10:
	.string "VERO: Du bist wohl wirklich gut. Obwohl\n"
	.string "wir manchmal etwas arrogant sind,\l"
	.string "merken wir, wenn jemand besser ist\l"
	.string "als wir.$"

ViridianForest_Combate_Guays_Texto_11:
	.string "JUAN: Ich will, dass du das andere\n"
	.string "PINSIR bekommst, das wir gefunden\l"
	.string "haben. Ein TRAINER wie du wird es besser\l"
	.string "benutzen können, als jeder andere, dem\l"
	.string "wir es geben könnten. Wir sind nicht wie\l"
	.string "deine Organisation, die es auf dem\l"
	.string "Schwarzmarkt verkaufen würde.\p"
	.string "Verstehst du?$"

ViridianForest_Combate_Guays_Texto_12:
.string "DU ERHÄLTST EIN LEVEL 15 PINSIR!$"

ViridianForest_Combate_Guays_Texto_13:
	.string "VERO: Tu uns nicht weh! Wir werden dir\n"
	.string "nicht auch noch das andere PINSIR\l"
	.string "geben! Wir haben all unsere\l"
	.string "Sonderbonbons benutzt, um den Rest\l"
	.string "unserer POKéMON hochzuleveln.$"

ViridianForest_Combate_Guays_Texto_14:
	.string "JUAN: Okay. Lass uns gehen, VERO. Ich\n"
	.string "habe gehört, dass es in JOHTO sogar\l"
	.string "noch bessere Käfer-POKéMON gibt als\l"
	.string "hier. Und ein alter Mann soll einem ein\l"
	.string "DRATINI geben, wenn man seine Aufgabe\l"
	.string "erfolgreich abschließt.$"

ViridianForest_Combate_Guays_Texto_15:
.string "VERO: Verschwenden wir keine Zeit.\p"
	.string "Auf zum nächsten Ziel!$"

ViridianForest_Combate_Guays_Move_1:
walk_in_place_down
step_end

ViridianForest_Combate_Guays_Move_1.1:
walk_in_place_left
step_end

ViridianForest_Combate_Guays_Move_2:
walk_in_place_up
step_end

ViridianForest_Combate_Guays_Move_3:
emote_exclamation_mark
step_end

ViridianForest_Combate_Guays_Move_4:
face_right
step_end

ViridianForest_Combate_Guays_Move_5:
walk_down
walk_right
walk_right
step_end

ViridianForest_Combate_Guays_Move_6:
walk_in_place_left
step_end

ViridianForest_Combate_Guays_Move_7:
walk_in_place_down
walk_in_place_right
step_end

ViridianForest_Combate_Guays_Move_8:
walk_in_place_up
walk_in_place_right
step_end
