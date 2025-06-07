CinnabarMansionS1_MapScripts::
	.byte 0

CinnabarMansionS1_EventScript_Cientifico::
	trainerbattle_single TRAINER_CINDY_1, CinnabarMansionS1_Text_CientificoIntro, CinnabarMansionS1_Text_CientificoDefeated
	msgbox CinnabarMansionS1_Text_CientificoPostBattle, MSGBOX_AUTOCLOSE
	end


CinnabarMansionS1_1::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_1:
	.string "Dieser Ort wurde nach MEWTUs Flucht\n"
	.string "zerstört. Vieles ging verloren, doch die\l"
	.string "Bedeutung dessen, was hier geschehen\l"
	.string "ist, hat sich unauslöschlich in unserem\l"
	.string "Gedächtnis eingebrannt.$"



CinnabarMansionS1_3::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_3, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_3:
	.string "Nichts hält dem Zahn der Zeit stand.\n"
	.string "Vielleicht wird es diesen Ort in drei\l"
	.string "Jahren nicht mehr geben. Es könnte\l"
	.string "sogar passieren, dass die gesamte\l"
	.string "ZINNOBERINSEL von ihrem Vulkan\l"
	.string "verschlungen werden. Wer weiß … Aber\l"
	.string "nichts davon kann das ungeschehen\l"
	.string "machen, was hier passiert ist.$"



CinnabarMansionS1_4::
lock     
faceplayer     
msgbox CinnabarMansionS1_Text_4, MSGBOX_DEFAULT
release     
end

CinnabarMansionS1_Text_4:
	.string "Wenn man dich nicht bezwingen kann,\n"
	.string "stehst du selbst nach den härtesten\l"
	.string "Schlägen noch stärker auf.\p"
	.string "Das wir diesen Ort am Leben gehalten\n"
	.string "und unser großes Projekt trotz allem\l"
	.string "abgeschlossen haben, ist der lebende\l"
	.string "Beweis dafür. Niemand, nicht einmal du,\l"
	.string "kann das ungeschehen machen.$"

CinnabarMansionS1_Dalia_Move_1:
walk_in_place_right
step_end

CinnabarMansionS1_Dalia_Move_2:
face_down
step_end

CinnabarMansionS1_Dalia_Move_3:
walk_down
walk_down
face_left
step_end

CinnabarMansionS1_Dalia_Move_4:
face_up
step_end

CinnabarMansionS1_Dalia_Move_5:
face_left
step_end

CinnabarMansionS1_Dalia_Move_6:
walk_in_place_left
step_end

CinnabarMansionS1_Dalia_Move_7:
walk_left
step_end

CinnabarMansionS1_Dalia_Move_8:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

CinnabarMansionS1_Dalia_Move_9:
walk_in_place_up
step_end

CinnabarMansionS1_Dalia_Move_10:
emote_exclamation_mark
step_end

CinnabarMansionS1_Dalia::
lock
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_1
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_2 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_3
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_5
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_6
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_7 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_7
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_705, CinnabarMansionS1_Dalia_Texto_9
msgbox CinnabarMansionS1_Dalia_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 5, CinnabarMansionS1_Dalia_Move_8
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_12 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_9
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_16 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_17 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_1
waitmovement 0x0
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_18 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 5, CinnabarMansionS1_Dalia_Move_10
waitmovement 0x0
delay 10
applymovement 5, CinnabarMansionS1_Dalia_Move_5
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_20 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_11
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_21 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_6
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_22 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_4
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, CinnabarMansionS1_Dalia_Move_13
applymovement 5, CinnabarMansionS1_Dalia_Move_12
waitmovement 0x0
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_25 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_26 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_27 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_14
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_28 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_29 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_2
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_30 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox CinnabarMansionS1_Dalia_Texto_31 MSGBOX_DEFAULT
waitfanfare
msgbox CinnabarMansionS1_Dalia_Texto_32 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, CinnabarMansionS1_Dalia_Move_15
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox CinnabarMansionS1_Dalia_Texto_34 MSGBOX_AUTOCLOSE
applymovement 5, CinnabarMansionS1_Dalia_Move_16
waitmovement 0x0
msgbox CinnabarMansionS1_Dalia_Texto_35 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F8, 28
release
end

CinnabarMansionS1_Dalia_Move_16:
walk_slow_right
walk_slow_up
step_end

CinnabarMansionS1_Dalia_Move_15:
walk_slow_right
step_end

CinnabarMansionS1_Dalia_Move_14:
walk_slow_left
step_end

CinnabarMansionS1_Dalia_Move_13:
delay_16
face_up
step_end

CinnabarMansionS1_Dalia_Move_12:
walk_slow_up
step_end

CinnabarMansionS1_Dalia_Move_11:
walk_left
step_end

CinnabarMansionS1_Dalia_Texto_1:
	.string "Du warst es also.$"

CinnabarMansionS1_Dalia_Texto_2:
	.string "Wenn du nicht gewesen wärst, wäre jetzt\n"
	.string "alles ganz anders! Der Plan zum\l"
	.string "Wiederaufbau KANTOs war perfekt!$"

CinnabarMansionS1_Dalia_Texto_3:
	.string "Aber im denkbar ungünstigsten Moment\n"
	.string "hast du etwas getan, womit wir nicht\l"
	.string "gerechnet haben!$"

CinnabarMansionS1_Dalia_Texto_4:
	.string "Und hier sind wir nun - auf der Flucht\n"
	.string "vor genau der Region, die wir retten\l"
	.string "wollten!$"

CinnabarMansionS1_Dalia_Texto_5:
	.string "Wenn man mal genau darüber nachdenkt,\n"
	.string "wollten wir beide dasselbe erreichen.\p"
	.string "Doch am Ende kann es nur einen Gewinner\n"
	.string "geben, oder?$"

CinnabarMansionS1_Dalia_Texto_6:
	.string "Und wenn es sein muss, werden wir dafür\n"
	.string "kämpfen, dass wir es am Ende sind!$"

CinnabarMansionS1_Dalia_Texto_7:
	.string "In den letzten Monaten hat GROßVATER\n"
	.string "endlich die Früchte seiner langjährigen\l"
	.string "Arbeit geerntet und mit ihnen ist eine\l"
	.string "neue Ära angebrochen!$"

CinnabarMansionS1_Dalia_Texto_8:
	.string "Sieh selbst!!$"

CinnabarMansionS1_Dalia_Texto_9:
	.string "Was?! TAUROS-X … wurde … besiegt?!$"

CinnabarMansionS1_Dalia_Texto_10:
	.string "Mmm … Du bist schließlich nicht ohne\n"
	.string "Grund hier Ich hätte wissen müssen,\l"
	.string "dass ein verbesserter Klon allein nicht\l"
	.string "ausreicht, um dich zu besiegen.$"

CinnabarMansionS1_Dalia_Texto_11:
	.string "Du hast etwas an dir, das mir gefällt.\n"
	.string "Irgendwie verkörperst du in dir den\l"
	.string "Geist der Vergangenheit.$"

CinnabarMansionS1_Dalia_Texto_12:
	.string "{PAUSE 10}…{PAUSE 10} {PAUSE 10}…{PAUSE 10}$"

CinnabarMansionS1_Dalia_Texto_13:
	.string "Mein Bruder war noch zu jung, aber ich\n"
	.string "erinnere mich noch gut an die Kämpfe\l"
	.string "zwischen GROßVATER und deinem BOSS …\l"
	.string "bevor alles eskalierte.$"

CinnabarMansionS1_Dalia_Texto_14:
	.string "Sie waren ihrer Zeit weit voraus, weißt\n"
	.string "du. Sie holten das Meiste aus den\l"
	.string "ursprünglichen 150 POKéMON heraus.$"

CinnabarMansionS1_Dalia_Texto_15:
	.string "{PAUSE 10}…{PAUSE 10} {PAUSE 10}…{PAUSE 10}$"

CinnabarMansionS1_Dalia_Texto_16:
	.string "Letztendlich haben beide auf ihre Weise\n"
	.string "versucht, die Region zu retten.$"

CinnabarMansionS1_Dalia_Texto_17:
	.string "GROßVATER von innen heraus und\n"
	.string "GIOVANNI von außen.$"

CinnabarMansionS1_Dalia_Texto_18:
	.string "{PAUSE 10}…{PAUSE 10} {PAUSE 10}…{PAUSE 10}$"

CinnabarMansionS1_Dalia_Texto_19:
	.string "Du spielst auf den Verrat an?$"

CinnabarMansionS1_Dalia_Texto_20:
	.string "Du kapierst es nicht, oder {PLAYER}?$"

CinnabarMansionS1_Dalia_Texto_21:
	.string "GIOVANNI alles in die Schuhe zu\n"
	.string "schieben, war der einzige Ausweg!\p"
	.string "Verstehst du das nicht?!$"

CinnabarMansionS1_Dalia_Texto_22:
	.string "Nur dann würde SIEGFRIED einem von\n"
	.string "ihnen komplett vertrauen: Nämlich dem\l"
	.string "Einzigen, der KANTO wirklich wieder zu\l"
	.string "alter Größe führen kann.$"

CinnabarMansionS1_Dalia_Texto_23:
	.string "Und noch was.$"

CinnabarMansionS1_Dalia_Texto_24:
	.string "GROßVATER kannte GIOVANNI besser als\n"
	.string "jeder andere. Er wusste, dass er die\l"
	.string "Stärke besäße, weiterzumachen - komme,\l"
	.string "was wolle - mit einem eigenen Plan, der\l"
	.string "unabhängig von seinem eigenen war.$"

CinnabarMansionS1_Dalia_Texto_25:
	.string "Er tat, was getan werden musste, um die\n"
	.string "Flammen der Hoffnung KANTOs am\l"
	.string "Brennen zu halten! Nicht mehr und nicht\l"
	.string "weniger …$"

CinnabarMansionS1_Dalia_Texto_26:
	.string "Und tief in deinem Inneren weißt du,\n"
	.string "dass dein ANFÜHRER es weiß! Er kennt\l"
	.string "die wahren Beweggründe von GROßVATER!$"

CinnabarMansionS1_Dalia_Texto_27:
	.string "In Wahrheit hat ihre Rivalität nie ein\n"
	.string "Ende gefunden. GROßVATER hielt sie am\l"
	.string "Leben, aber …$"

CinnabarMansionS1_Dalia_Texto_28:
	.string "… Nein … Hier geht es weder um ein\n"
	.string "Turnier noch um einen Titel. Was auf dem\l"
	.string "Spiel steht, ist nichts Geringeres als\l"
	.string "die Zukunft dieser Region!$"

CinnabarMansionS1_Dalia_Texto_29:
	.string "Und nun, wo sie es vollbracht haben …\n"
	.string "spielt nichts anderes mehr eine Rolle.$"

CinnabarMansionS1_Dalia_Texto_30:
	.string "Am Ende läuft alles wieder darauf\n"
	.string "hinaus, wer der bessere TRAINER ist.\p"
	.string "Glaubst du wirklich, dass du es bist?$"

CinnabarMansionS1_Dalia_Texto_31:
	.string "DU ERHÄLTST DEN U1-SCHLÜSSEL!$"

CinnabarMansionS1_Dalia_Texto_32:
	.string "Also gut. Dann geh weiter.$"

CinnabarMansionS1_Dalia_Texto_33:
	.string "Mit seinem jetzigen Team könnte es kein\n"
	.string "CHAMP in der Geschichte KANTOs und\l"
	.string "JOHTOs mit GROßVATER aufnehmen.$"

CinnabarMansionS1_Dalia_Texto_34:
	.string "Das war schon als Kind sein großer\n"
	.string "Traum gewesen. Und jetzt, wo er ihn\l"
	.string "verwirklicht hat, brennt er darauf,\l"
	.string "gegen den aktuellen CHAMP anzutreten.$"

CinnabarMansionS1_Dalia_Texto_35:
	.string "Sobald er alle besiegt hat, wird endlich\n"
	.string "wieder Normalität einkehren.$"

CinnabarMansionS1_Dalia_Derrotada::
lock
faceplayer
msgbox CinnabarMansionS1_Dalia_Texto_33 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox CinnabarMansionS1_Dalia_Texto_35 MSGBOX_AUTOCLOSE
release
end

Cinnabar_S1_Llave::
compare VAR_UNUSED_0x40F8, 27
goto_if_gt Cinnabar_S1_Llave_Despues
delay 10
msgbox Cinnabar_S1_Llave_Texto_1 MSGBOX_AUTOCLOSE
lock
release
end

Cinnabar_S1_Llave_Despues::
delay 10
msgbox Cinnabar_S1_Llave_Texto_2, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 6, 12, 0x284, FALSE
setmetatile 6, 13, 0x284, FALSE
setmetatile 7, 13, 0x284, FALSE
setmetatile 7, 12, 0x2C8, FALSE
special DrawWholeMapView
delay 20
release
end

Cinnabar_S1_Llave_Texto_2:
	.string "Möchtest du den U1-SCHLÜSSEL\n"
	.string "verwenden?$"

Cinnabar_S1_Llave_Texto_1:
	.string "Du benötigst einen speziellen\n"
	.string "Schlüssel.$"


