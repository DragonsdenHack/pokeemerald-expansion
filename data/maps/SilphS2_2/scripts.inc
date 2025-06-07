SilphS2_2_MapScripts::
	.byte 0

SilphS2_2_Cientifico_1::
lock
faceplayer
msgbox SilphS2_2_Cientifico_1_Texto_1 MSGBOX_AUTOCLOSE
release
end

SilphS2_2_Cientifico_1_Texto_1:
	.string "Einem unproduktiven Ziel Zeit zu\n"
	.string "widmen, entfacht nicht selten einen\l"
	.string "Funken Kreativität.$"

SilphS2_2_Cientifico_2::
lock
faceplayer
msgbox SilphS2_2_Cientifico_2_Texto_1 MSGBOX_NPC
delay 10
msgbox SilphS2_2_Cientifico_2_Texto_2 MSGBOX_NPC
release
end

SilphS2_2_Cientifico_2_Texto_1:
	.string "Was wohl nun aus EICH und seiner Familie\n"
	.string "wird? Seine intensiven Kämpfe gegen\l"
	.string "deinen ANFÜHRER haben stets die ganze\l"
	.string "Region in ihren Grundfesten\l"
	.string "erschüttert.$"

SilphS2_2_Cientifico_2_Texto_2:
	.string "Ich denke, GIOVANNI wäre bereit, ihm um\n"
	.string "ihrer alten Rivalität willen zu\l"
	.string "vergeben. Doch EICHs Stolz könnte ihn\l"
	.string "daran hindern, diese Geste anzunehmen.$"

SilphS2_2_Lorelei_Move_1:
walk_down
walk_down
delay_16
face_left
step_end

SilphS2_2_Lorelei_Move_2:
delay_8
walk_in_place_right
step_end

SilphS2_2_Lorelei_Move_3:
emote_exclamation_mark
step_end

SilphS2_2_Lorelei_Move_4:
walk_down
walk_left
step_end

SilphS2_2_Lorelei_Move_5:
walk_right
walk_right
step_end

SilphS2_2_Lorelei_Move_6:
face_up
step_end

SilphS2_2_Lorelei_Move_7:
face_left
step_end

SilphS2_2_Lorelei_Move_8:
walk_in_place_left
step_end

SilphS2_2_Lorelei_Move_9:
face_down
step_end

SilphS2_2_Lorelei_Move_10:
delay_16
delay_16
delay_8
face_left
delay_16
delay_16
delay_8
face_down
delay_16
delay_16
step_end

SilphS2_2_Lorelei_Move_11:
delay_8
face_down
delay_16
face_right
delay_16
face_up
delay_16
step_end

SilphS2_2_Lorelei_Move_12:
walk_down
walk_left
walk_left
walk_up
walk_left
walk_left
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
step_end

SilphS2_2_Lorelei_Move_13:
delay_16
face_down
delay_16
delay_16
face_left
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
delay_16
face_down
step_end


SilphS2_2_Lorelei::
lock
clearflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
addobject 4
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_2
applymovement 4, SilphS2_2_Lorelei_Move_1
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 4, SilphS2_2_Lorelei_Move_3
waitmovement 0x0
delay 10
msgbox SilphS2_2_Lorelei_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_5
applymovement 4, SilphS2_2_Lorelei_Move_4
waitmovement 0x0
delay 10
msgbox SilphS2_2_Lorelei_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_6
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_5 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 4, SilphS2_2_Lorelei_Move_9
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_10
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox SilphS2_2_Lorelei_Texto_10 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_11 MSGBOX_AUTOCLOSE
applymovement 4, SilphS2_2_Lorelei_Move_9
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SilphS2_2_Lorelei_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_11
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_7
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_17 MSGBOX_AUTOCLOSE
delay 10
applymovement 4, SilphS2_2_Lorelei_Move_8
waitmovement 0x0
msgbox SilphS2_2_Lorelei_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, SilphS2_2_Lorelei_Move_13
applymovement 4, SilphS2_2_Lorelei_Move_12
waitmovement 0x0
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_MAGMA_NOTE
removeobject 4
setvar VAR_UNUSED_0x40F8, 11
release
end

SilphS2_2_Lorelei_Texto_1:
	.string "LORELEI: Hey! {PLAYER}, nicht wahr?$"

SilphS2_2_Lorelei_Texto_2:
	.string "Ich hätte nicht gedacht, dass du dem\n"
	.string "PRÄSIDENTEN von SILPH so nahestehst.\p"
	.string "Aber ja, sonst wärst du wohl nicht hier.$"

SilphS2_2_Lorelei_Texto_3:
	.string "Er ist ein großartiger TRAINER.$"

SilphS2_2_Lorelei_Texto_4:
	.string "Ich bin hergekommen, um ihn meine\n"
	.string "Position als Mitglied der TOP VIER\l"
	.string "anzubieten.$"

SilphS2_2_Lorelei_Texto_5:
	.string "Doch {PAUSE 15}…{PAUSE 15} scheint er sehr mit der Leitung\n"
	.string "SILPHs beschäftigt zu sein. Also bleibt\l"
	.string "die Position vorerst unbesetzt.$"

SilphS2_2_Lorelei_Texto_6:
	.string "Ich ziehe nach EILAND VIER. Die Tage,\n"
	.string "an denen ich bei Kämpfen mit vollem\l"
	.string "Herzen dabei bin, sind mit der Zeit\l"
	.string "immer weniger geworden.$"

SilphS2_2_Lorelei_Texto_7:
	.string "Ich war mir so sicher, dass mich meine\n"
	.string "EIS-POKéMON an die Spitze führen\l"
	.string "würden. Doch die jüngsten Niederlagen\l"
	.string "haben mir schließlich die Augen\l"
	.string "geöffnet.$"

SilphS2_2_Lorelei_Texto_8:
	.string "Ich denke, dass EIS in seinem Wesen\n"
	.string "doch eher unflexibel und träge ist.\p"
	.string "Findest du nicht auch?$"

SilphS2_2_Lorelei_Texto_9:
	.string "Nun {PAUSE 15}…{PAUSE 15} wie sieht's bei dir aus? Erzähl\n"
	.string "schon!$"

SilphS2_2_Lorelei_Texto_10:
	.string "Du warst stark. Doch am Ende war es ROT,\n"
	.string "der CHAMP wurde.$"

SilphS2_2_Lorelei_Texto_11:
	.string "Offen gestanden hätte ich es\n"
	.string "bevorzugt, wenn die junge Dame den\l"
	.string "Titel errungen hätte.\p"
	.string "Ihr SNIEBEL hat großes Potenzial.$"

SilphS2_2_Lorelei_Texto_12:
	.string "Aber, so ist das nun mal. ROT hat BLAU\n"
	.string "besiegt und wurde somit CHAMP.$"

SilphS2_2_Lorelei_Texto_13:
	.string "Es ist so schade um ROT. Er hat sich wie\n"
	.string "ein Einsiedler auf dem SILBERBERG\l"
	.string "zurückgezogen, um in einer so {PAUSE 25}…{PAUSE 25}\l"
	.string "trostlosen Höhle zu trainieren.$"

SilphS2_2_Lorelei_Texto_14:
	.string "Früher war es ein ehrerbietiger Ort.\n"
	.string "Doch jetzt? Er wird dort einfach\l"
	.string "dahinsiechen.$"

SilphS2_2_Lorelei_Texto_15:
	.string "Du hingegen … Bei dir erkenne ich, dass\n"
	.string "du dich noch weiter steigern kannst …$"

SilphS2_2_Lorelei_Texto_16:
	.string "Nur wenigen ist das Privileg vergönnt,\n"
	.string "durch diese Hallen zu schreiten.\p"
	.string "Ich bin mir sicher, dass du aus einem\n"
	.string "bestimmten Grund hier bist.$"

SilphS2_2_Lorelei_Texto_17:
	.string "Aber das geht mich nichts mehr an. Ich\n"
	.string "will lediglich meine Ruhe haben und zu\l"
	.string "meinen Wurzeln zurückkehren.$"

SilphS2_2_Lorelei_Texto_18:
	.string "Sollte dich dein Weg mal nach EILAND\n"
	.string "VIER führen, dann besuche mich doch\l"
	.string "mal.$"

