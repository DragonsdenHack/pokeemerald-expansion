Route15_MapScripts::
	.byte 0

Route15_1::
end

Route15_2::
end

Route15_3::
end

Route15_4::
end


Route15_5::
end

Route15_6::
end

Route15_7::
end

Route15_8::
end

Route15_9::
end

Route15_10::
end

Route15_11::
end

Route15_12::
end

Route15_13::
end



Route15_EventScript_Motorista::
	trainerbattle_single TRAINER_DALTON_3, Route15_Text_MotoristaIntro, Route15_Text_MotoristaDefeated
	msgbox Route15_MotoristaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Motorista2::
	trainerbattle_single TRAINER_DALTON_4, Route15_Text_Motorista2Intro, Route15_Text_Motorista2Defeated
	msgbox Route15_Motorista2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella::
	trainerbattle_single TRAINER_TED, Route15_Text_BellaIntro, Route15_Text_BellaDefeated
	msgbox Route15_BellaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Bella2::
	trainerbattle_single TRAINER_PAUL, Route15_Text_Bella2Intro, Route15_Text_Bella2Defeated
	msgbox Route15_Bella2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica::
	trainerbattle_single TRAINER_DIANA_5, Route15_Text_ChicaIntro, Route15_Text_ChicaDefeated
	msgbox Route15_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo::
	trainerbattle_single TRAINER_TIMOTHY_1, Route15_Text_OrnitologoIntro, Route15_Text_OrnitologoDefeated
	msgbox Route15_OrnitologoPostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Ornitologo2::
	trainerbattle_single TRAINER_ISABEL_5, Route15_Text_Ornitologo2Intro, Route15_Text_Ornitologo2Defeated
	msgbox Route15_Ornitologo2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica2::
	trainerbattle_single TRAINER_DIANA_4, Route15_Text_Chica2Intro, Route15_Text_Chica2Defeated
	msgbox Route15_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica3::
	trainerbattle_single TRAINER_AMY_AND_LIV_2, Route15_Text_Chica3Intro, Route15_Text_Chica3Defeated
	msgbox Route15_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Chica4::
	trainerbattle_single TRAINER_AMY_AND_LIV_1, Route15_Text_Chica4Intro, Route15_Text_Chica4Defeated
	msgbox Route15_Chica4PostBattle, MSGBOX_AUTOCLOSE
	end



Route15Documento_100::
msgbox Route15Documento_Text_100, MSGBOX_SIGN   
end

Route15Documento_Text_100:
.string "ROUTE 15\n"
    .string "WESTEN: FUCHSANIA CITY$"



Route15_EventScript_Pareja1::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja1Intro, Route15_Text_Pareja1Defeated
	msgbox Route15_Text_Pareja1PostBattle, MSGBOX_AUTOCLOSE
	end



Route15_EventScript_Pareja2::
	trainerbattle_single TRAINER_AMY_AND_LIV_6, Route15_Text_Pareja2Intro, Route15_Text_Pareja2Defeated
	msgbox Route15_Text_Pareja2PostBattle, MSGBOX_AUTOCLOSE
	end

Route15_Koga_Bruno_medio::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1
waitmovement 0x0
goto Route15_Koga_Bruno

Route15_Koga_Bruno_arriba::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1.1
waitmovement 0x0
goto Route15_Koga_Bruno

Route15_Koga_Bruno_abajo::
applymovement OBJ_EVENT_ID_PLAYER, Route15_Koga_Bruno_Move_1.2
waitmovement 0x0
goto Route15_Koga_Bruno



Route15_Koga_Bruno::
msgbox Route15_Koga_Bruno_Texto_1 MSGBOX_AUTOCLOSE
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route15_Koga_Bruno_Move_20
waitmovement 0x0
special RemoveCameraObject
msgbox Route15_Koga_Bruno_Texto_1.01 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 15, Route15_Koga_Bruno_Move_4
waitmovement 0x0
waitse
delay 10
msgbox Route15_Koga_Bruno_Texto_1.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_1.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_4.1
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_2.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, Route15_Koga_Bruno_Move_1
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, Route15_Koga_Bruno_Move_4.2
waitmovement 0x0
delay 10
msgbox Route15_Koga_Bruno_Texto_3.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_4.3
waitmovement 0x0
waitse
applymovement 14, Route15_Koga_Bruno_Move_3
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 15, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_5 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_6 MSGBOX_AUTOCLOSE
msgbox Route15_Koga_Bruno_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_8 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_5
waitmovement 0x0
waitse
delay 10
msgbox Route15_Koga_Bruno_Texto_8.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_DEFAULT
delay 20
msgbox Route15_Koga_Bruno_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 15, Route15_Koga_Bruno_Move_6.1
waitmovement 0x0
delay 10
msgbox Route15_Koga_Bruno_Texto_11 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement 14, Route15_Koga_Bruno_Move_6.1
applymovement 15, Route15_Koga_Bruno_Move_6
applymovement OBJ_EVENT_ID_CAMERA, Route15_Koga_Bruno_Move_20.1
waitmovement 0x0
special RemoveCameraObject
removeobject 15
delay 10
msgbox Route15_Koga_Bruno_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_6.2
waitmovement 0x0
delay 10
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_7
waitmovement 0x0
delay 20
msgbox Route15_Koga_Bruno_Texto_13 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_13.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_8
waitmovement 0x0
playfanfare MUS_OBTAIN_TMHM
giveitem ITEM_BLACK_GLASSES
waitfanfare
delay 20
msgbox Route15_Koga_Bruno_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox Route15_Koga_Bruno_Texto_9 MSGBOX_DEFAULT
delay 20
applymovement 14, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox Route15_Koga_Bruno_Texto_15.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route15_Koga_Bruno_Move_9
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_16 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_16.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route15_Koga_Bruno_Move_5
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_17 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_17.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route15_Koga_Bruno_Texto_18 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_4
waitmovement 0x0
msgbox Route15_Koga_Bruno_Texto_19 MSGBOX_AUTOCLOSE
applymovement 14, Route15_Koga_Bruno_Move_10
waitmovement 0x0
removeobject 14
setflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
setvar VAR_UNUSED_0x40F7, 65
release
end

Route15_Koga_Bruno_Move_20:
walk_left
walk_left
walk_left
step_end

Route15_Koga_Bruno_Move_20.1:
walk_right
walk_right
walk_right
step_end

Route15_Koga_Bruno_Move_6.2:
delay_8
face_up
delay_16
delay_8
face_right
delay_8
step_end

Route15_Koga_Bruno_Move_6.1:
delay_16
delay_8
face_left
step_end

Route15_Koga_Bruno_Move_4.3:
emote_exclamation_mark
step_end

Route15_Koga_Bruno_Move_4.2:
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Route15_Koga_Bruno_Move_4.1:
delay_8
face_left
delay_16
delay_8
face_up
delay_8
step_end

Route15_Koga_Bruno_Texto_1:
	.string "????: Du bist eine Schande für\n"
	.string "sämtliche ARENALEITER, KOGA!$"

Route15_Koga_Bruno_Texto_1.01:
	.string "Und du solltest froh sein, dass ich das\n"
	.string "nicht SIEGFRIED melde! Nicht nur\l"
	.string "weigerst du dich, uns bei der\l"
	.string "Beseitigung der radikalsten BIKER\l"
	.string "auf dem RADWEG zu helfen …$"

Route15_Koga_Bruno_Texto_1.1:
	.string "… sondern gibst auch noch zu, dass\n"
	.string "du Verständnis für sie hast!$"

Route15_Koga_Bruno_Texto_1.2:
	.string "Und hattest du nicht auch noch Kontakt\n"
	.string "zu dieser kriminellen Bande TEAM ROCKET\l"
	.string "gehabt? Du weißt, dass das deinen\l"
	.string "sofortigen Rücktritt als ARENALEITER\l"
	.string "zur Folge hätte, oder?$"

Route15_Koga_Bruno_Texto_2:
	.string "KOGA: Du tust mir Unrecht, BRUNO! Du\n"
	.string "weißt genau so gut wie ich, dass das\l"
	.string "Wohlergehen dieser Region immer meine\l"
	.string "oberste Priorität war!$"

Route15_Koga_Bruno_Texto_2.1:
	.string "Mir ist klar, dass deine Position als\n"
	.string "Mitglied der TOP VIER mit gewissen\l"
	.string "Pflichten einherkommt, aber es ist\l"
	.string "nicht meine Aufgabe, eine Handvoll\l"
	.string "Biker dazu zu zwingen, ihren Kontakt\l"
	.string "mit TEAM ROCKET abzubrechen!$"

Route15_Koga_Bruno_Texto_3:
	.string "BRUNO: Ich glaube, du hast mich nicht\n"
	.string "verstanden, KOGA. Es geht nicht darum,\l"
	.string "ob sie mit TEAM ROCKET assoziiert\l"
	.string "werden wollen oder nicht. Jeder, der\l"
	.string "auch nur das geringste Anzeichen von\l"
	.string "Kooperation mit diesen Kriminellen\l"
	.string "zeigt, muss mit der vollen Härte des\l"
	.string "Gesetzes rechnen!$"

Route15_Koga_Bruno_Texto_3.1:
	.string "Zufällig ist FUCHSANIA der\n"
	.string "Hauptstützpunkt dieser Rebellen und\l"
	.string "indem du nichts dagegen unternimmst,\l"
	.string "machst du dich mitschuldig, KOGA!$"

Route15_Koga_Bruno_Texto_4:
	.string "KOGA: Tu mir das nicht an, BRUNO! Du\n"
	.string "weißt ganz genau, dass du in der TOP\l"
	.string "VIER einen Rang aufsteigen wirst, wenn\l"
	.string "AGATHE zurücktritt! Und dass der freie\l"
	.string "Platz an mich gehen wird!$"

Route15_Koga_Bruno_Texto_5:
	.string "BRUNO: Genau das macht mir ja Sorgen.\n"
	.string "Jemand der so unfähig ist in FUCHSANIA\l"
	.string "für Ordnung und Disziplin zu sorgen,\l"
	.string "sollte kein Teil von KANTOs ELITE\l"
	.string "werden!$"

Route15_Koga_Bruno_Texto_6:
	.string "KOGA: Es ist kein Verbrechen, wenn\n"
	.string "Leute ihre Meinungen äußern, BRUNO.$"

Route15_Koga_Bruno_Texto_7:
	.string "BRUNO: Noch nicht {PAUSE 15}…{PAUSE 15} Zu deinem Glück\n"
	.string "kannst du dich aus der ganzen Sache\l"
	.string "noch herauswinden, denn ein\l"
	.string "ELITE-TRAINER wie ich kommt nicht ohne\l"
	.string "Grund an so einen Ort {PAUSE 5}…{PAUSE 5}$"

Route15_Koga_Bruno_Texto_7.1:
.string "KOGA: W-{PAUSE 25}What{PAUSE 25}…{PAUSE 25} are you going to do?$"

Route15_Koga_Bruno_Texto_8:
	.string "BRUNO: Ich bin auf SIEGFRIEDS\n"
	.string "Anweisung hier, um den RADWEG von allen\l"
	.string "zu befreien, die gegen unsere Regierung\l"
	.string "sind.$"

Route15_Koga_Bruno_Texto_8.1:
	.string "Sie werden festgenommen und ohne\n"
	.string "Umwege ins Gefängnis befördert!$"

Route15_Koga_Bruno_Texto_9:
.string "KOGA: {PAUSE 15}…{PAUSE 15}$"

Route15_Koga_Bruno_Texto_10:
	.string "BRUNO: Du musst dir keine Sorgen um den\n"
	.string "RADWEG machen. Es wird dort weiterhin\l"
	.string "BIKER geben, aber nur welche, die uns\l"
	.string "gegenüber loyal sind. Keine Sorge. Du\l"
	.string "wirst dich vor niemandem verantworten\l"
	.string "müssen.$"

Route15_Koga_Bruno_Texto_11:
	.string "Mehr gibt es nicht zu sagen, KOGA. Wenn\n"
	.string "du schon nicht helfen willst, dann halt\l"
	.string "dich wenigstens aus der Sache raus!\l"
	.string "Einen schönen Tag noch.$"

Route15_Koga_Bruno_Texto_12:
	.string "KOGA: BRUNO {PAUSE 15}…{PAUSE 15} Seit er der TOP VIER\n"
	.string "beigetreten ist, ist ihm der Erfolg zu\l"
	.string "Kopf gestiegen. In ihm steckt nichts\l"
	.string "mehr von dem edlen Mann, der einst das\l"
	.string "KAMPFARENA in SAFFRONIA geleitet hat\l"
	.string "{PAUSE 5}…{PAUSE 5}$"

Route15_Koga_Bruno_Texto_13:
	.string "{PLAYER}, nicht wahr? Du bist doch\n"
	.string "derjenige, der das umherirrende\l"
	.string "KANGAMA gefangen und damit die\l"
	.string "SAFARI-ZONE gerettet hat, oder?$"

Route15_Koga_Bruno_Texto_13.1:
	.string "GIOVANNI hatte Recht, als er mir sagte,\n"
	.string "ich solle dir vertrauen. Hier ist ein\l"
	.string "kleines Dankeschön von mir.$"

Route15_Koga_Bruno_Texto_14:
	.string "Wenn ein POKéMON SCHATTENGLAS trägt,\n"
	.string "werden seine UNLICHT-Attacken um 20 %\l"
	.string "verstärkt. Falls du POKéMON wie\l"
	.string "HUNDEMON oder KRAMURX besitzt, werden\l"
	.string "ihre FINSTERAURAs oder NACHTHIEBE\l"
	.string "deutlich stärker.$"

Route15_Koga_Bruno_Texto_15:
	.string "Ich habe BRUNO nicht angelogen, als ich\n"
	.string "ihm sagte, dass mir das Wohl der Region\l"
	.string "am wichtigsten ist. Das Problem liegt\l"
	.string "darin, dass sich mein Verständnis vom\l"
	.string "Wohle der Region völlig von seinem\l"
	.string "unterscheidet.$"

Route15_Koga_Bruno_Texto_15.1:
	.string "Eine Diktatur, die auf Gewalt fußt und\n"
	.string "noch dazu unter der Führung eines\l"
	.string "Außenstehenden ist, wird niemals meine\l"
	.string "Unterstützung erhalten.$"

Route15_Koga_Bruno_Texto_15.2:
	.string "traducir$"

Route15_Koga_Bruno_Texto_15.3:
	.string "traducir$"

Route15_Koga_Bruno_Texto_16:
	.string "Wenn ihm das nicht gelingt, wird er sie\n"
	.string "mit Gewalt verhaften und einsperren\l"
	.string "lassen! Wenn das passiert, sind sie\l"
	.string "am Ende!$"

Route15_Koga_Bruno_Texto_16.1:
	.string "Wenn ihm das nicht gelingt, wird er sie\n"
	.string "mit Gewalt verhaften und einsperren\l"
	.string "lassen! Wenn das passiert, sind sie am\l"
	.string "Ende!$"

Route15_Koga_Bruno_Texto_17:
	.string "Ich kann aus offensichtlichen\n"
	.string "Gründen nicht eingreifen.$"

Route15_Koga_Bruno_Texto_17.1:
	.string "Aber du {PLAYER}, du kannst es!\p"
	.string "GIOVANNI hat mir erzählt, du seist einer\n"
	.string "der vielversprechendsten ROCKETs. Ja,\l"
	.string "BRUNO ist Teil der TOP VIER. Aber ich\l"
	.string "bezweifle, dass er für die Sache hier\l"
	.string "seine besten POKéMON mitgebracht hat.\p"
	.string "Wenn ihn also einer aufhalten kann,\n"
	.string "dann du!$"

Route15_Koga_Bruno_Texto_18:
	.string "Ich werde in meiner ARENA sein. Leider\n"
	.string "kann ich dich im Moment nicht\l"
	.string "reinlassen. Aber ich werde die\l"
	.string "Geschehnisse auf dem RADWEG\l"
	.string "genauestens verfolgen!\p"
	.string "Darauf kannst du Gift nehmen!$"

Route15_Koga_Bruno_Texto_19:
.string "KOGA: Ich zähle auf dich, {PLAYER}!$"

Route15_Koga_Bruno_Move_1:
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_1.1:
walk_down
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_1.2:
walk_up
walk_in_place_left
step_end

Route15_Koga_Bruno_Move_2:
face_left
step_end

Route15_Koga_Bruno_Move_3:
walk_in_place_up
step_end

Route15_Koga_Bruno_Move_4:
walk_in_place_down
step_end

Route15_Koga_Bruno_Move_5:
emote_exclamation_mark
step_end

Route15_Koga_Bruno_Move_6:
walk_left
walk_left
walk_left
step_end

Route15_Koga_Bruno_Move_7:
emote_exclamation_mark
face_right
step_end

Route15_Koga_Bruno_Move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Route15_Koga_Bruno_Move_9:
face_right
step_end

Route15_Koga_Bruno_Move_10:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end
