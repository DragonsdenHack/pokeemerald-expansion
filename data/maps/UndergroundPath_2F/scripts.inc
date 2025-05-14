UndergroundPath_2F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, UndergroundPath_2F_OnResume
	.byte 0

UndergroundPath_2F_OnResume:
	call UndergroundPath_2F_SetupEscapeWarp
	end

UndergroundPath_2F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE6, 19, 14
	return

UndergroundPath2F_2::
end



UndergroundPath2F_3::
lock
msgbox UndergroundPath2F_3_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_3_Texto_1:
	.string "Hoho … Du wirst schon sehen, wenn jeder\n"
	.string "'n Blick auf mein großartiges FLAMARA\l"
	.string "wirft.$"



UndergroundPath2F_4::
lock
msgbox UndergroundPath2F_4_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_4_Texto_1:
	.string "Der Spekulationsmarkt von EVOLI\n"
	.string "gedeiht. Wenn ich fünf kaufe und sie\l"
	.string "für Jahre behalte, wird sich der Wert\l"
	.string "meiner Investition verdoppeln!$"



UndergroundPath2F_5::
lock
msgbox UndergroundPath2F_5_Texto_1 MSGBOX_DEFAULT
release
end

UndergroundPath2F_5_Texto_1:
	.string "Das Letzte, was ich für meine Show\n"
	.string "brauche, ist ein AQUANA. Wenn es\l"
	.string "SÄUREPANZER im Wasser einsetzt,\l"
	.string "werden alle baff sein.$"

UndergroundPath2F_Andra::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2
waitmovement 0x0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end

UndergroundPath2F_Andra_Text_1:
	.string "ANDRA: {PLAYER}! Verzeih mir, dass ich\n"
	.string "vorausgegangen bin. Aber ich wollte,\l"
	.string "dass das Ei, das mir ATLAS nach der\l"
	.string "Mission auf EILAND FÜNF gegeben hat,\l"
	.string "so schnell wie möglich schlüpft.\p"
	.string "So kann ich schnellstmöglich damit\n"
	.string "beginnen, es zu trainieren.$"

UndergroundPath2F_Andra_Text_2:
	.string "In meiner Eile habe ich vergessen, dich\n"
	.string "über die Basis zu informieren, zu der wir\l"
	.string "für die kommenden Missionen zugeteilt\l"
	.string "sind. Es gibt offenbar mehrere\l"
	.string "Angelegenheiten, die unser Eingreifen\l"
	.string "erfordern.$"

UndergroundPath2F_Andra_Text_3:
	.string "Übrigens. Was hältst du von den Leuten\n"
	.string "hier in KANTO? Sie scheinen uns nicht\l"
	.string "besonders zu mögen, was? Sieht so aus,\l"
	.string "als hätte die TOP VIER kurz nach dem\l"
	.string "Ende des Krieges eine Kampagne\l"
	.string "gestartet, um unsere Organisation in\l"
	.string "Verruf zu bringen.$"

UndergroundPath2F_Andra_Text_4:
	.string "Ich hatte seit meiner Niederlage gegen\n"
	.string "die KONSULIN Zeit, meine POKéMON zu\l"
	.string "trainieren. Ich bezweifle sehr, dass sie\l"
	.string "jetzt noch eine Chance gegen mich\l"
	.string "hätte. Aber ich möchte herausfinden, ob\l"
	.string "das Resultat unseres ersten Kampfes in\l"
	.string "ATLAS' Büro nur bloßer Zufall war. Mach\l"
	.string "dich bereit. Ich werde alles geben!$"

UndergroundPath2F_Andra_Text_5:
	.string "Es war also kein Zufall. Du bist\n"
	.string "wahrhaftig ein außergewöhnlicher\l"
	.string "TRAINER.$"

UndergroundPath2F_Andra_Text_6:
	.string "Du nimmst das Ganze also wirklich ernst.\n"
	.string "Eigentlich sollte ich froh sein. Ich\l"
	.string "ziehe es vor, wenn mir jemand auf meinem\l"
	.string "Level den Rücken deckt, als wenn es ein\l"
	.string "Durchschnittstyp tut. Aber ruhe dich\l"
	.string "nicht zu sehr auf deinen Siegen aus.\p"
	.string "Ich werde dich schon sehr bald\n"
	.string "übertreffen. Ich werde der stärkste\l"
	.string "und effizienteste RÜPEL der ganzen\l"
	.string "Organisation werden.$"

UndergroundPath2F_Andra_Text_7:
	.string "Ein Bote hat mir erzählt, dass der\n"
	.string "ROCKET-ADMINISTRATOR LAMBDA uns in\l"
	.string "den POKéMON-HORT bestellt hat. Der\l"
	.string "liegt jenseits dieses Weges. Wir sollen\l"
	.string "darauf achten, ihn unauffällig zu\l"
	.string "betreten - ohne Zeugen. Das war's. Also\l"
	.string "bis später. Hey, komm nicht zu spät!$"

UndergroundPath2F_Andra_move_1:
walk_in_place_up
step_end

UndergroundPath2F_Andra_move_2:
emote_exclamation_mark
walk_slow_left
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.1:
emote_exclamation_mark
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.2:
emote_exclamation_mark
walk_slow_right
walk_down
walk_down
step_end

UndergroundPath2F_Andra_move_2.3:
emote_exclamation_mark
walk_slow_right
walk_down
walk_slow_right
walk_down
step_end

UndergroundPath2F_Andra_move_3:
walk_in_place_right
walk_in_place_down
step_end

UndergroundPath2F_Andra_move_4:
face_up
step_end

UndergroundPath2F_Andra_move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

UndergroundPath2F_Andra2::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.1
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra3::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.2
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end


UndergroundPath2F_Andra4::
applymovement OBJ_EVENT_ID_PLAYER, UndergroundPath2F_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 1, UndergroundPath2F_Andra_move_2.3
waitmovement 0x0
fadeoutbgm 0
playse 559
msgbox UndergroundPath2F_Andra_Text_1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_4, MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_2, UndergroundPath2F_Andra_Text_5
msgbox UndergroundPath2F_Andra_Text_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, UndergroundPath2F_Andra_move_3
waitmovement 0x0
msgbox UndergroundPath2F_Andra_Text_7, MSGBOX_AUTOCLOSE
applymovement 1, UndergroundPath2F_Andra_move_5
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
removeobject 1
setvar VAR_UNUSED_0x40F7, 8
release
end

UndergroundPath2F_Secundaria_Eevees::
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_1 MSGBOX_DEFAULT
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_DEFAULT
delay 20
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_4 MSGBOX_NPC
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_NPC
delay 20
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_5 MSGBOX_NPC
playse MUS_RG_ENCOUNTER_ROCKET
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_6 MSGBOX_NPC
trainerbattle_no_intro TRAINER_PETE, UndergroundPath2F_Secundaria_Eevees_Texto_7
delay 15
playse SE_PIN
applymovement 3, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
applymovement 3, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_8 MSGBOX_NPC
setflag FLAG_HIDE_UNION_ROOM_PLAYER_4
fadescreen 1
delay 20
removeobject 3
removeobject 4
removeobject 5
fadescreen 0
delay 20
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
delay 15
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_9 MSGBOX_NPC
delay 20
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_3 MSGBOX_NPC
delay 20
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_10 MSGBOX_DEFAULT
waitse
playse SE_PIN
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_2
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_11 MSGBOX_NPC
delay 15
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_1
waitmovement 0x0
applymovement 2, UndergroundPath2F_Secundaria_Eevees_Move_3
waitmovement 0x0
msgbox UndergroundPath2F_Secundaria_Eevees_Texto_12 MSGBOX_NPC
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_ROUTE127_STATE, 2
release
end

UndergroundPath2F_Secundaria_Eevees_Move_1:
walk_in_place_up
step_end

UndergroundPath2F_Secundaria_Eevees_Move_2:
emote_exclamation_mark
step_end

UndergroundPath2F_Secundaria_Eevees_Move_3:
face_player
step_end

UndergroundPath2F_Secundaria_Eevees_Texto_1:
	.string "So ist es richtig … Alle schön in einer\n"
	.string "Reihe … Keine Sorge … Es wird genug für\l"
	.string "alle da sein {PAUSE 5}…{PAUSE 5}$"

UndergroundPath2F_Secundaria_Eevees_Texto_2:
	.string "Merk dir das, ROCKET. Ihr habt die\n"
	.string "Schließung der TUNNELPFADE nur\l"
	.string "hinauszuzögert. In drei Jahren wird es\l"
	.string "keine Spur mehr von ihnen geben.$"

UndergroundPath2F_Secundaria_Eevees_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

UndergroundPath2F_Secundaria_Eevees_Texto_4:
	.string "Was ist dein Problem, ROCKET? Wenn du\n"
	.string "ein EVOLI willst, stell dich an, so wie\l"
	.string "alle anderen hier. Ich hoffe, du hast\l"
	.string "die ¥1,000,000 dabei.\p"
	.string "Wenn nicht, hör auf meine Zeit zu\n"
	.string "verschwenden und gehe dahin zurück,\l"
	.string "woher {PAUSE 5}…{PAUSE 5}$"

UndergroundPath2F_Secundaria_Eevees_Texto_5:
	.string "Dieser naive WISSENSCHAFTLER hat dich\n"
	.string "geschickt, um diese EVOLI\l"
	.string "zurückzuholen? Ich habe keine Ahnung,\l"
	.string "wovon du da redest, ROCKET. Hier\l"
	.string "interessiert es niemanden, woher die\l"
	.string "herkommen! Das Einzige, was zählt, ist,\l"
	.string "dass sie hier sind und ein Vermögen wert\l"
	.string "sind!$"

UndergroundPath2F_Secundaria_Eevees_Texto_6:
	.string "Genug! Ich habe die Schnauze voll. Wie\n"
	.string "schade, dass dieser arme Idiot nur\l"
	.string "einen mittelmäßigen RÜPEL von TEAM\l"
	.string "ROCKET anheuern konnte, der nichts\l"
	.string "gegen die Qualität der\l"
	.string "EVOLI-Entwicklungen ausrichten kann!$"

UndergroundPath2F_Secundaria_Eevees_Texto_7:
	.string "Aber wer zum Teufel bist du überhaupt?\n"
	.string "Moment mal! Bist du nicht derjenige, der\l"
	.string "das komplette SILPH Sicherheitsteam im\l"
	.string "Alleingang ausgeschaltet hat?!$"

UndergroundPath2F_Secundaria_Eevees_Texto_8:
.string "Es ist {PLAYER}!\p"
	.string "Einer der stärksten OFFIZIERE von\n"
	.string "TEAM ROCKET! Lasst uns abhauen!$"

UndergroundPath2F_Secundaria_Eevees_Texto_9:
	.string "Weißt du überhaupt, was du\n"
	.string "gerade getan hast?$"

UndergroundPath2F_Secundaria_Eevees_Texto_10:
.string "-{PLAYER} hat 60 der 70\n"
	.string "gestohlenen EVOLI wiedererlangt!-$"

UndergroundPath2F_Secundaria_Eevees_Texto_11:
	.string "Verdammt, ROCKET! Ich dachte, ihr von\n"
	.string "TEAM ROCKET seid auch im Schwarzmarkt\l"
	.string "Geschäft mit drin! {PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15} Arbeitet ihr\l"
	.string "jetzt mit SILPH zusammen, oder was?\l"
	.string "Was ist der Unterschied?! Egal. Ich\l"
	.string "habe schon sieben EVOLI verkauft und\l"
	.string "mit den sieben Millionen, die ich gerade\l"
	.string "gemacht habe, kann ich endlich von\l"
	.string "dieser elenden Region abhauen.$"

UndergroundPath2F_Secundaria_Eevees_Texto_12:
	.string "Viel Glück euch allen in KANTO.\p"
	.string "Ihr werdet es brauchen!$"
