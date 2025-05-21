FuchsiaCity_House4_MapScripts::
	.byte 0

FuchsiaCityHouse4_1::
end

FuchsiaCity_House4_Secundaria_Squirtle::
lock
faceplayer
compare VAR_UNUSED_0x4083, 1
goto_if_gt FuchsiaCity_House4_Secundaria_Squirtle_3
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x4083, 1
goto_if_eq FuchsiaCity_House4_Secundaria_Squirtle_2
release
end

FuchsiaCity_House4_Secundaria_Squirtle_2::
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq FuchsiaCity_House4_Secundaria_Squirtle_No
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
release
end


FuchsiaCity_House4_Secundaria_Squirtle_No::
playse MUS_RG_ENCOUNTER_BOY
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_GURU, FuchsiaCity_House4_Secundaria_Squirtle_Texto_9
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_11 MSGBOX_AUTOCLOSE
delay 20
playse SE_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_6
addobject 2
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_4
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_12 MSGBOX_AUTOCLOSE
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_12.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_5
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_4
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_13 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
trainerbattle_no_intro TRAINER_GUARDA, FuchsiaCity_House4_Secundaria_Squirtle_Texto_14
playse SE_PIN
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
delay 20
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_3.1
waitmovement 0x0
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_15.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_DOOR
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_5
addobject 3
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
waitmovement 0x0
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, FuchsiaCity_House4_Secundaria_Squirtle_Move_3.2
waitmovement 0x0
delay 10
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, FuchsiaCity_House4_Secundaria_Squirtle_Move_6
waitmovement 0x0
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
removeobject 3
playse SE_EXIT
delay 20
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 2, FuchsiaCity_House4_Secundaria_Squirtle_Move_7
waitmovement 0x0
removeobject 2
playse SE_EXIT
delay 15
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3
waitmovement 0x0
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_17 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_3.3
waitmovement 0x0
waitse
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, FuchsiaCity_House4_Secundaria_Squirtle_Move_2
waitmovement 0x0
setvar VAR_UNUSED_0x4083, 2
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3.3:
walk_in_place_left
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3.2:
walk_in_place_up
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3.1:
delay_8
face_up
delay_16
delay_8
face_player
delay_8
step_end

FuchsiaCity_House4_Secundaria_Squirtle_3::
msgbox FuchsiaCity_House4_Secundaria_Squirtle_Texto_2 MSGBOX_AUTOCLOSE
release
end

FuchsiaCity_House4_Secundaria_Squirtle_Texto_1:
	.string "Menschen wie du werden nie die hohe\n"
	.string "Kunst des Angelns verstehen! Oder die\l"
	.string "einzigartigen POKéMON, die den Tiefen\l"
	.string "des Meeres entspringen, und das ist\l"
	.string "auch gut so! Das Letzte, was ich will,\l"
	.string "ist, dass deinesgleichen die Reinheit\l"
	.string "des Meeres beschmutzen!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_2:
	.string "Eines Tages werde ich mich an dir\n"
	.string "rächen, ROCKET. Dann wird meine\l"
	.string "Niederlage nichts weiter als eine\l"
	.string "Fußnote in der Geschichte sein.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_4:
	.string "Was? Mein Bruder hat dich geschickt, um\n"
	.string "mich zu besiegen und zu beweisen, dass\l"
	.string "ich kein so guter ANGLER bin, wie alle\l"
	.string "glauben?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_5:
	.string "Du weißt nicht, mit dem du dich anlegst,\n"
	.string "ROCKET. Deine POKéMON können es nicht\l"
	.string "mit den See-Kreaturen aus KANTO\l"
	.string "aufnehmen! Egal ob du ein HOCHRANGIGER\l"
	.string "RÜPEL oder was auch immer bist!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_6:
	.string "Ich habe Wichtigeres zu tun, als gegen\n"
	.string "einen ROCKET zu kämpfen! Wenn du dich\l"
	.string "jetzt einfach aus meinem Haus verpisst,\l"
	.string "dann vergesse ich das Ganze, okay?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_7:
	.string "Gut! Und jetzt verpiss dich aus\n"
	.string "meinem Haus!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_8:
	.string "Du stehst auf Risiko, was ROCKET?\p"
	.string "Neugier ist eine gefährliche Sache.\p"
	.string "Jetzt wirst du sehen, wie der beste\n"
	.string "PROFIANGLER der ganzen Region kämpft!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_9:
.string "Das kann nicht sein!\n"
	.string "Mein mächtiges GARADOS!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_10:
	.string "Das macht keinen Sinn! Du musst ein\n"
	.string "hohes Tier bei TEAM ROCKET sein! Ein\l"
	.string "OFFIZIER oder vielleicht sogar ein\l"
	.string "ADMINISTRATOR! Habe ich recht?!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_11:
	.string "Aber {PAUSE 15}…{PAUSE 15} Zu deinem Pech verliere ich nie.\p"
	.string "Niemals! Wie sonst, glaubst du, habe ich\n"
	.string "meinen tadellosen Ruf so lange\l"
	.string "bewahren können?\p"
	.string "Ich überlasse nie etwas dem Zufall!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_12:
	.string "Du hast zu viel Krach gemacht, ROCKET.\p"
	.string "Wir können dich nicht einfach laufen\n"
	.string "lassen.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_12.1:
	.string "Ich habe euren Kampf von meinem Haus\n"
	.string "aus gehört. Ich wohne direkt nebenan.\p"
	.string "Als WÄRTER der SAFARI-ZONE kann ich\n"
	.string "nicht zulassen, dass jemand die Ordnung\l"
	.string "dieser Stadt stört. Das verstehst du\l"
	.string "sicherlich. Niemand wird je erfahren,\l"
	.string "dass der beste PROFIANGLER dieser\l"
	.string "Region, der FUCHSANIA so viel Ruhm\l"
	.string "einbringt, von einem ROCKET besiegt\l"
	.string "wurde.$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_13:
	.string "Jetzt, wo deine POKéMON geschwächt\n"
	.string "sind, werde ich dir den Todesstoß\l"
	.string "versetzen!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_14:
.string "Unmöglich! Mein LASCHOKING!\n"
	.string "Wer zum Teufel bist du?$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_15:
	.string "Das war so nicht geplant! Nicht einmal\n"
	.string "KOGA kann es mit uns beiden zusammen\l"
	.string "aufnehmen!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_15.1:
	.string "Aber was soll's. Dir wird sowieso keiner\n"
	.string "glauben! Niemand hat diese beiden\l"
	.string "Kämpfe gese{PAUSE 5}…{PAUSE 5}$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16:
	.string "Wow! Krass! Ein ROCKET hat dem\n"
	.string "PROFIANGLER von FUCHSANIA den\l"
	.string "Arsch versohlt!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.1:
	.string "Und nicht nur das! Er hat auch noch\n"
	.string "FLEGMON, den WÄRTER der SAFARI-ZONE,\l"
	.string "besiegt!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_16.2:
	.string "Ich kann's kaum erwarten, die Gesichter\n"
	.string "meiner Kumpel zu sehen, wenn ich ihnen\l"
	.string "das sage!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_17:
	.string "Hast du auch nur die leiseste Ahnung,\n"
	.string "was du gerade angerichtet hast,\l"
	.string "ROCKET?!$"

FuchsiaCity_House4_Secundaria_Squirtle_Texto_17.1:
	.string "Ich hoffe für dich, dass das, was mein\n"
	.string "Bruder dir als Gegenleistung\l"
	.string "versprochen hat, es wert ist! Denn\l"
	.string "du hast soeben einen Krieg begonnen!$"

FuchsiaCity_House4_Secundaria_Squirtle_Move_1:
emote_exclamation_mark
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_2:
walk_in_place_right
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_3:
face_player
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_4:
face_left
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_5:
walk_up
walk_up
walk_up
walk_in_place_right
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_6:
face_down
step_end

FuchsiaCity_House4_Secundaria_Squirtle_Move_7:
walk_down
walk_down
walk_down
step_end
