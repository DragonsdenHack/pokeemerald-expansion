MemorialPillar_MapScripts::
	.byte 0

MemorialPillar1::
end


MemorialPillar2::
end


MemorialPillar3::
end


MemorialPillar4::
end


MemorialPillar5::
end

MemorialPillar_EventScript_Marc::
	trainerbattle_single TRAINER_MARC, MemorialPillar_Text_MarcIntro, MemorialPillar_Text_MarcDefeated
	msgbox MemorialPillar_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Brenden::
	trainerbattle_single TRAINER_BRENDEN, MemorialPillar_Text_BrendenIntro, MemorialPillar_Text_BrendenDefeated
	msgbox MemorialPillar_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end



MemorialPillar_EventScript_Lilith::
	trainerbattle_single TRAINER_LILITH, MemorialPillar_Text_LilithIntro, MemorialPillar_Text_LilithDefeated
	msgbox MemorialPillar_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

MemorialPillar_EventScript_Onyx::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MemorialPillar_Move_1
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_2
waitmovement 0x0
special RemoveCameraObject
applymovement 1, MemorialPillar_Move_1
msgbox MemorialPillar_Text_Onyx, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_2, MSGBOX_AUTOCLOSE
delay 15
msgbox MemorialPillar_Text_Onyx_Texto_3, MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MemorialPillar_Move_3
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F8, 1
release
end

MemorialPillar_Text_Onyx:
	.string "Selbst wenn du 3000 Jahre leben\n"
	.string "würdest oder sogar zehnmal so viel,\l"
	.string "denke immer daran, dass nicht mehr\l"
	.string "Leben verloren geht als das, was gelebt\l"
	.string "wird und nur das verloren geht, was\l"
	.string "gelebt wird.$"

MemorialPillar_Text_Onyx_Texto_2:
	.string "Demnach werden das längste und\n"
	.string "kürzeste Leben auf das Gleiche\l"
	.string "reduziert: Der gegenwärtige Moment,\l"
	.string "der gelebt wird, ist für alle derselbe-\l"
	.string "ebenso der, der verloren geht.\p"
	.string "Und dieser verlorene Moment erscheint\n"
	.string "uns als unteilbar.$"

MemorialPillar_Text_Onyx_Texto_3:
	.string "Die Sache ist, dass weder die\n"
	.string "Vergangenheit noch die Zukunft\l"
	.string "verloren sind. Denn was wir nicht nicht\l"
	.string "besitzen, kann uns auch nicht genommen\l"
	.string "werden.$"


MemorialPillar_Move_1:
walk_in_place_up
step_end


MemorialPillar_Move_2:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

MemorialPillar_Move_3:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

MemorialPillar_ChicoOnix::
lock
faceplayer
compare VAR_ROUTE119_STATE, 1
goto_if_eq MemorialPillar_ChicoOnix_Pregunta
compare VAR_ROUTE119_STATE, 2
goto_if_eq MemorialPillar_ChicoOnix_Mision
compare VAR_ROUTE119_STATE, 3
goto_if_eq MemorialPillar_ChicoOnix_Post
compare VAR_ROUTE119_STATE, 4
goto_if_eq MemorialPillar_ChicoOnix_Final
msgbox MemorialPillar_ChicoOnix_Texto_1 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_1 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_2 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_1
waitmovement 0x0
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_3 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_4 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_5 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_2
waitmovement 0x0
delay 10
setvar VAR_ROUTE119_STATE, 1
msgbox MemorialPillar_ChicoOnix_Despues_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MemorialPillar_ChicoOnix_No
setvar VAR_ROUTE119_STATE, 2
msgbox MemorialPillar_ChicoOnix_Despues_Texto_7 MSGBOX_NPC
msgbox MemorialPillar_ChicoOnix_Despues_Texto_8 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Pregunta::
msgbox MemorialPillar_ChicoOnix_Despues_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MemorialPillar_ChicoOnix_No
setvar VAR_ROUTE119_STATE, 2
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
msgbox MemorialPillar_ChicoOnix_Despues_Texto_7 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_8 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Mision::
faceplayer
msgbox MemorialPillar_ChicoOnix_Despues_Texto_9 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_No::
lock
msgbox MemorialPillar_ChicoOnix_No_Texto_1 MSGBOX_AUTOCLOSE
release
end

MemorialPillar_ChicoOnix_No_Texto_1:
	.string "Hm, verstehe. Ehrlich gesagt, machst du\n"
	.string "auch nicht gerade einen freundlichen\l"
	.string "Eindruck.$"

MemorialPillar_ChicoOnix_Move_3:
emote_exclamation_mark
step_end

MemorialPillar_ChicoOnix_Move_2:
walk_in_place_up
delay_8
face_player
step_end

MemorialPillar_ChicoOnix_Move_1:
face_up
delay_16
delay_8
face_player
step_end

MemorialPillar_ChicoOnix_Texto_1:
	.string "Hier habe ich mein ONIX begraben. Ich\n"
	.string "hatte ihm den Spitznamen TECTONIX\l"
	.string "gegeben.$"


MemorialPillar_ChicoOnix_Post::
lock
faceplayer
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
playfanfare MUS_OBTAIN_BADGE
msgbox MemorialPillar_ChicoOnix_Despues_Texto_10 MSGBOX_DEFAULT
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_11 MSGBOX_NPC
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_12 MSGBOX_NPC
delay 10
playse SE_PIN
applymovement 1, MemorialPillar_ChicoOnix_Move_3
waitmovement 0x0
waitse
msgbox MemorialPillar_ChicoOnix_Despues_Texto_13 MSGBOX_NPC
delay 10
applymovement 1, MemorialPillar_ChicoOnix_Move_1
waitmovement 0x0
delay 10
msgbox MemorialPillar_ChicoOnix_Despues_Texto_14 MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
msgbox MemorialPillar_ChicoOnix_Despues_Texto_15 MSGBOX_DEFAULT
givemon SPECIES_PHANPY, 8, ITEM_METEORITE
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_16 MSGBOX_NPC
msgbox MemorialPillar_ChicoOnix_Despues_Texto_17 MSGBOX_NPC
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_LEMONADE, 6
waitfanfare
msgbox MemorialPillar_ChicoOnix_Despues_Texto_19 MSGBOX_NPC
setvar VAR_ROUTE119_STATE, 4
release
end

MemorialPillar_ChicoOnix_Final::
msgbox MemorialPillar_ChicoOnix_Despues_Texto_20 MSGBOX_NPC
release
end

MemorialPillar_ChicoOnix_Despues_Texto_1:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

MemorialPillar_ChicoOnix_Despues_Texto_2:
	.string "TECTONIX liebte Limonade über alles.\p"
	.string "Ich wünschte, ich könnte hier einige\n"
	.string "als Andenken hinstellen.$"

MemorialPillar_ChicoOnix_Despues_Texto_3:
	.string "Aber sie werden nicht länger auf den\n"
	.string "SEVII EILANDEN verkauft.$"

MemorialPillar_ChicoOnix_Despues_Texto_4:
	.string "Außer … Ja! Es gibt da diesen Chefkoch.\p"
	.string "Er hält sich ab und zu im hiesigen\n"
	.string "POKéMON-CENTER auf.$"

MemorialPillar_ChicoOnix_Despues_Texto_5:
	.string "Er hat Limonaden. Aber er verkauft sie\n"
	.string "nur an seine reichen Stammkunden, die\l"
	.string "sie zusammen mit seinen mega teuren\l"
	.string "Menüs kaufen.$"

MemorialPillar_ChicoOnix_Despues_Texto_6:
	.string "Sag mal, könntest du ihn vielleicht\n"
	.string "dazu bringen, mir ein paar von ihnen\l"
	.string "zu verkaufen?$"

MemorialPillar_ChicoOnix_Despues_Texto_7:
	.string "Wirklich?! Das wäre toll!$"

MemorialPillar_ChicoOnix_Despues_Texto_8:
	.string "Wenn es dir gelingt, werde ich dir auf\n"
	.string "ewig dankbar sein und etwas ganz\l"
	.string "Besonderes geben.$"

MemorialPillar_ChicoOnix_Despues_Texto_9:
	.string "Und? Konntest du ihn überzeugen?\p"
	.string "Er hält sich ab und zu im PKMN-CENTER\n"
	.string "auf, um sich von den Strapazen zu\l"
	.string "erholen.$"

MemorialPillar_ChicoOnix_Despues_Texto_10:
	.string "{PLAYER} übergibt den Kasten voller\n"
	.string "Limonaden an den TRAINER!!$"

MemorialPillar_ChicoOnix_Despues_Texto_11:
	.string "Wow! Du hast ihn also wirklich\n"
	.string "überzeugen können? Das muss dich\l"
	.string "ein Vermögen gekostet haben!$"

MemorialPillar_ChicoOnix_Despues_Texto_12:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

MemorialPillar_ChicoOnix_Despues_Texto_13:
	.string "Oh! Ein Geschenk? Ich hatte keine\n"
	.string "Ahnung, dass er so großzügig ist. Sieht\l"
	.string "so aus, also sollte man ein Buch wirklich\l"
	.string "nicht nach seinem Einband beurteilen.$"

MemorialPillar_ChicoOnix_Despues_Texto_14:
	.string "Ich werde nicht weniger großzügig sein.\p"
	.string "Jetzt, wo ich ein schönes Andenken für\n"
	.string "mein ONIX habe, sollst du dieses\l"
	.string "POKéMON haben.$"

MemorialPillar_ChicoOnix_Despues_Texto_15:
	.string "-DU ERHÄLTST EIN LEVEL 8 PHANPY!!-$"

MemorialPillar_ChicoOnix_Despues_Texto_16:
	.string "Es trägt ein seltenes Item, dass ich\n"
	.string "gefunden habe, als ich in der\l"
	.string "WANDELHÖHLE war.$"

MemorialPillar_ChicoOnix_Despues_Texto_17:
	.string "Hier! Nimm noch die hier.$"

MemorialPillar_ChicoOnix_Despues_Texto_18:
	.string "-{PLAYER} erhält sechs Limonaden!!-$"

MemorialPillar_ChicoOnix_Despues_Texto_19:
	.string "Keine Sorge. Ich habe noch mehr als\n"
	.string "genug in dem Kasten. Ich hoffe, ich\l"
	.string "erwische den Chefkoch noch, damit ich\l"
	.string "ihm danken kann!$"

MemorialPillar_ChicoOnix_Despues_Texto_20:
	.string "Wenn ich eins von TECTONIX gelernt\n"
	.string "habe, dann ist es, dass eine Krankheit\l"
	.string "zwar den Körper schwächen kann, aber\l"
	.string "nicht den Geist.\p"
	.string "Es sei denn, man lässt es zu.$"



