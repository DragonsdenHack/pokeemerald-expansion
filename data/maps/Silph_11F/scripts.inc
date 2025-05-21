Silph_11F_MapScripts::
map_script MAP_SCRIPT_ON_LOAD, SilphCo_11F_OnLoad
map_script MAP_SCRIPT_ON_FRAME_TABLE, Silph_11F_OnFrame
	.byte 0

SilphCo_11F_OnLoad::
	call_if_unset FLAG_UNUSED_0x03B, EventScript_Close11FDoor
	end

Silph_11F_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 67, Silph_11F_Reunion_Presidente_Lance
	.2byte 0

Silph11F_1::
end



Silph11F_2::
lock     
faceplayer     
msgbox Silph11F_Text_2, MSGBOX_DEFAULT
release     
end

Silph11F_Text_2:
	.string "SEKRETÄRIN: Danke, dass du unseren\n"
	.string "PRÄSIDENTEN berichtet hast, was die\l"
	.string "Regierung alles in der Region\l"
	.string "angerichtet hat. Wir können dir zwar\l"
	.string "nicht öffentlich danken, aber\l"
	.string "vielleicht ändert sich das ja eines\l"
	.string "Tages {PAUSE 5}…{PAUSE 5}$"



Silph11F_4::
end



Silph11F_5::
end



Silph11F_6::
end


Silph11F_EventScript_Policia::
	trainerbattle_single TRAINER_KATELYN_5, Silph11F_Text_PoliciaIntro, Silph11F_Text_PoliciaDefeated
	msgbox Silph11F_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Silph11F_EventScript_Policia2::
	trainerbattle_single TRAINER_NICOLAS_1, Silph11F_Text_Policia2Intro, Silph11F_Text_Policia2Defeated
	msgbox Silph11F_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Silph11FDocumento_100::
msgbox Silph11FDocumento_Text_100, MSGBOX_SIGN   
end

Silph11FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "11F$"

Silph_11F_Bill_Presidente_Izq::
lockall
msgbox Silph_11F_Bill_Presidente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_1
waitmovement 0x0
goto Silph_11F_Bill_Presidente

Silph_11F_Bill_Presidente_Der::
lockall
msgbox Silph_11F_Bill_Presidente_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_1.1
waitmovement 0x0
goto Silph_11F_Bill_Presidente

Silph_11F_Bill_Presidente::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Bill_Presidente_Move_2
waitmovement 0x0
special RemoveCameraObject
msgbox Silph_11F_Bill_Presidente_Texto_2 MSGBOX_AUTOCLOSE
delay 40
msgbox Silph_11F_Bill_Presidente_Texto_2.1 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_2.2 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_2.3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_11F_Bill_Presidente_Move_16
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_2.4 MSGBOX_AUTOCLOSE
applymovement 1, Silph_11F_Bill_Presidente_Move_17
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_2.5 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Silph_11F_Reunión_Presidente_Lance_Move_2
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_2.6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_PRESIDENTE_SILPH, Silph_11F_Bill_Presidente_Texto_2.7
msgbox Silph_11F_Bill_Presidente_Texto_2.8 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_2.2 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_3 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Silph_11F_Bill_Presidente_Move_3
applymovement 2, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_4 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
addobject 3
addobject 8
applymovement 3, Silph_11F_Bill_Presidente_Move_4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_5
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_5 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_5.1 MSGBOX_AUTOCLOSE
fadescreen 1
playse SE_USE_ITEM
special HealPlayerParty
delay 20
fadescreen 0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_6
waitmovement 0x0
applymovement 3, Silph_11F_Bill_Presidente_Move_7
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Bill_Presidente_Move_8
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_9
waitmovement 0x0
playse SE_PIN
applymovement 8, Silph_11F_Bill_Presidente_Move_10
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Silph_11F_Bill_Presidente_Move_10.1
waitmovement 0x0
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_8 MSGBOX_AUTOCLOSE
applymovement 8, Silph_11F_Bill_Presidente_Move_11
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_9 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_9.2 MSGBOX_AUTOCLOSE
delay 30
playse SE_WARP_OUT
delay 30
playse SE_WARP_OUT
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_3
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
waitse
clearflag FLAG_HIDE_ROUTE_119_SCOTT
addobject 7
addobject 9
applymovement 7, Silph_11F_Bill_Presidente_Move_12
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_5
applymovement 8, Silph_11F_Bill_Presidente_Move_5
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_10 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_11 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_12
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_12 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_13
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_13 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 8, Silph_11F_Bill_Presidente_Move_14
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_14 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_15 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 9, Silph_11F_Bill_Presidente_Move_15.1
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_15.1 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_3
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_16 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_16
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_17 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_18 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 9, Silph_11F_Bill_Presidente_Move_15.1
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_18.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Silph_11F_Bill_Presidente_Move_14
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_19 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 8, Silph_11F_Bill_Presidente_Move_14
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_19.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_20 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_20.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, Silph_11F_Bill_Presidente_Move_16
applymovement 7, Silph_11F_Bill_Presidente_Move_17
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_21 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_22 MSGBOX_AUTOCLOSE
applymovement 7, Silph_11F_Bill_Presidente_Move_18
waitmovement 0x0
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_23 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_18
waitmovement 0x0
setflag FLAG_HIDE_ROUTE_119_SCOTT
setflag FLAG_HIDE_LILYCOVE_MOTEL_SCOTT
msgbox Silph_11F_Bill_Presidente_Texto_24 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_24.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_BILL_2, Silph_11F_Bill_Presidente_Texto_25
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_25.1 MSGBOX_AUTOCLOSE
delay 10
playmoncry SPECIES_URSARING, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
playse SE_M_CUT
waitse
playse SE_SUPER_EFFECTIVE
applymovement 7, Silph_11F_Bill_Presidente_Move_18.1
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_26 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Bill_Presidente_Texto_27 MSGBOX_AUTOCLOSE
applymovement 9, Silph_11F_Bill_Presidente_Move_16
applymovement 7, Silph_11F_Bill_Presidente_Move_17.1
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 9, Silph_11F_Bill_Presidente_Move_15
waitmovement 0x0
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_29 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_29.1 MSGBOX_AUTOCLOSE
delay 10
fadescreen 1
delay 20
removeobject 7
removeobject 9
fadescreen 0
applymovement 3, Silph_11F_Bill_Presidente_Move_19
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_20
applymovement 8, Silph_11F_Bill_Presidente_Move_20
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_30 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_30.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_30.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_32 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_32.1 MSGBOX_AUTOCLOSE
delay 10
showmoneybox 0, 0
msgbox Silph_11F_Bill_Presidente_Texto_33 MSGBOX_AUTOCLOSE
applymovement 3, Silph_11F_Bill_Presidente_Move_21
waitmovement 0x0
playse SE_SHOP
addmoney 400000 0
updatemoneybox
delay 80
playfanfare MUS_OBTAIN_ITEM
msgbox Silph_11F_Bill_Presidente_Texto_34 MSGBOX_DEFAULT
waitfanfare
delay 20
hidemoneybox
msgbox Silph_11F_Bill_Presidente_Texto_35 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox Silph_11F_Bill_Presidente_Texto_36 MSGBOX_DEFAULT
givemon SPECIES_PORYGON, 40, ITEM_UPGRADE
waitfanfare
delay 20
msgbox Silph_11F_Bill_Presidente_Texto_37 MSGBOX_AUTOCLOSE
delay 10
applymovement 3, Silph_11F_Bill_Presidente_Move_21.1
waitmovement 0x0
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_37.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Silph_11F_Bill_Presidente_Texto_37.1 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, Silph_11F_Bill_Presidente_Move_24
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_38 MSGBOX_AUTOCLOSE
applymovement 3, Silph_11F_Bill_Presidente_Move_25
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Silph_11F_Bill_Presidente_Move_16
applymovement 8, Silph_11F_Bill_Presidente_Move_17
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_39 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, Silph_11F_Bill_Presidente_Move_3
waitmovement 0x0
msgbox Silph_11F_Bill_Presidente_Texto_40 MSGBOX_AUTOCLOSE
applymovement 8, Silph_11F_Bill_Presidente_Move_26
waitmovement 0x0
clearflag FLAG_NUEVA_839
msgbox Silph_11F_Bill_Presidente_Texto_41 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_6
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HIDE_FANCLUB_BOY
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
setvar VAR_UNUSED_0x40F7, 75
warpsilent MAP_ROCKET_HIDEOUT_5F, 2, 2
release
end

Silph_11F_Bill_Presidente_Move_21.1:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

Silph_11F_Bill_Presidente_Move_18.1:
lock_facing_direction
walk_fast_left
walk_fast_left
unlock_facing_direction
step_end

Silph_11F_Bill_Presidente_Move_15.1:
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_10.1:
face_left
delay_16
delay_8
face_up
delay_16
delay_8
face_right
delay_16
face_player
delay_8
step_end

Silph_11F_Bill_Presidente_Texto_1:
.string "????: Wer ist da?$"

Silph_11F_Bill_Presidente_Texto_2:
	.string "PRÄSIDENT: Wie ist das möglich? Ein\n"
	.string "einzelnes Mitglied von TEAM ROCKET\l"
	.string "hat mein gesamtes Sicherheitsteam\l"
	.string "besiegt? Wie ist dein Name?$"

Silph_11F_Bill_Presidente_Texto_2.1:
	.string "{PLAYER}? Du musst von außerhalb\n"
	.string "sein. Ein Bürger von KANTO würde niemals\l"
	.string "in das HAUPTQUARTIER der Hauptstadt\l"
	.string "eindringen.$"

Silph_11F_Bill_Presidente_Texto_2.2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Silph_11F_Bill_Presidente_Texto_2.3:
	.string "Von den SEVII EILANDEN also {PAUSE 15}…{PAUSE 15} Ich\n"
	.string "verstehe. Lass mich dir etwas sagen:\p"
	.string "Du hast noch nichts von dieser Region\n"
	.string "gesehen. Die POKéMON aus KANTO, die\l"
	.string "Wahrhaftigen, haben nichts mit den\l"
	.string "schwachen WIESOR oder WEBARAK gemein,\l"
	.string "mit denen du aufgewachsen bist.$"

Silph_11F_Bill_Presidente_Texto_2.4:
	.string "Es ist eine Beleidigung, dass jemand wie\n"
	.string "du, der, was POKéMON-KÄMPFE betrifft,\l"
	.string "solch armseligen Ursprunges ist, es so\l"
	.string "weit geschafft hat. Das ist nur ein\l"
	.string "weiterer Beweis für den Verfall dieser\l"
	.string "Region! Die Tugenden und die Disziplin,\l"
	.string "die uns einst groß gemacht haben,\l"
	.string "gehören der Vergangenheit an!\p"
	.string "Sie sind für immer verloren!$"

Silph_11F_Bill_Presidente_Texto_2.5:
	.string "Zu deinem Pech gibt es immer noch\n"
	.string "Trainer, die nicht der Seuche der\l"
	.string "Mittelmäßigkeit und Gemütlichkeit\l"
	.string "zum Opfer gefallen sind!$"

Silph_11F_Bill_Presidente_Texto_2.6:
	.string "Du wirst zum ersten Mal erleben, wie es\n"
	.string "ist, gegen ein Team der alten Schule\l"
	.string "KANTOs zu kämpfen!$"

Silph_11F_Bill_Presidente_Texto_2.7:
	.string "Die unglaubliche Stärke dieser POKéMON\n"
	.string "{PAUSE 15}…{PAUSE 15} Woher rührt sie her?$"

Silph_11F_Bill_Presidente_Texto_2.8:
	.string "Es ist Jahrzehnte her, dass ich einen\n"
	.string "TRAINER mit deinen Ressourcen gesehen\l"
	.string "habe, der auf so einem hohen Level ist!\p"
	.string "Du erinnerst mich an die alten Zeiten,\n"
	.string "wo alles möglich war!\p"
	.string "Deine Fähigkeiten und Ambitionen\n"
	.string "stammen aus einer früheren Ära!$"

Silph_11F_Bill_Presidente_Texto_3:
	.string "So, {PLAYER}. Hör mir zu. Ich könnte\n"
	.string "über all das hier hinwegsehen und dir\l"
	.string "eine lukrative Position bei SILPH\l"
	.string "anbieten. Ein TRAINER von deinem\l"
	.string "Kaliber hat nichts bei TEAM ROCKET\l"
	.string "verloren. Wenn du nur {PAUSE 15}…{PAUSE 15}$"

Silph_11F_Bill_Presidente_Texto_4:
	.string "????: Verschonen Sie {PLAYER} mit\n"
	.string "Ihren Überredungskünsten. Ich bin\l"
	.string "derjenige, mit dem Sie reden müssen.$"

Silph_11F_Bill_Presidente_Texto_5:
	.string "GIOVANNI: Großartige Arbeit,\n"
	.string "{PLAYER}! Alles läuft genau nach Plan.\p"
	.string "Jetzt brauche ich nur noch etwas Zeit,\n"
	.string "um mit dem PRÄSIDENTEN zu verhandeln.\l"
	.string "ANDRA ist ganz in der Nähe. Sie hat mich\l"
	.string "persönlich hierher eskortiert.\p"
	.string "Ihr beide werdet vor der Tür Wache\n"
	.string "halten, bis dieses kleine\l"
	.string "Geschäftstreffen vorbei ist.$"

Silph_11F_Bill_Presidente_Texto_5.1:
	.string "Dafür brauche ich dich in Bestform.\p"
	.string "Lass mich dein Team heilen.$"

Silph_11F_Bill_Presidente_Texto_6:
	.string "Und nun Herr PRÄSIDENT, beantworten\n"
	.string "Sie mir folgende Fragen. Was halten Sie\l"
	.string "von der Art und Weise, wie diese Region\l"
	.string "in den letzten Jahren regiert wurde?\p"
	.string "Und wie würden Sie es finden, wenn ich\n"
	.string "Ihnen sagen würde, dass es eine\l"
	.string "Alternative gibt? Eine, die von der wir\l"
	.string "alle profitieren würden. Seien es Sie\l"
	.string "und Ihr Unternehmen, die gesamte\l"
	.string "Bevölkerung und auch wir. Sehen Sie {PAUSE 15}…{PAUSE 15}$"

Silph_11F_Bill_Presidente_Texto_7:
	.string "ANDRA: Hey {PLAYER}! Dieses Mal warst\n"
	.string "du schneller. Die Wachen von SILPH sind\l"
	.string "fast so stark wie unsere HOCHRANGIGEN\l"
	.string "RÜPEL! Es war nicht leicht, einen\l"
	.string "Angestellten mit einem TÜRÖFFNER zu\l"
	.string "finden. Mit deinem haben wir drei.\p"
	.string "Das ist mehr als genug, um ROT\n"
	.string "auszutricksen {PAUSE 15}…{PAUSE 15}$"

Silph_11F_Bill_Presidente_Texto_8:
	.string "Wer hätte gedacht, dass wir es so weit\n"
	.string "bringen? Von FOSSILIENSAMMLERN am\l"
	.string "MONDBERG zu ROCKET OFFIZIEREN, die\l"
	.string "GIOVANNIs volles Vertrauen genießen!\p"
	.string "Und jetzt sorgen wir dafür, dass das\n"
	.string "wichtigste Treffen in der Geschichte\l"
	.string "von TEAM ROCKET reibungslos verläuft!$"

Silph_11F_Bill_Presidente_Texto_9:
	.string "Weißt du was? Ich glaube, ich werde\n"
	.string "nach dieser Mission zur ZINNOBERINSEL\l"
	.string "gehen. Es ist, abgesehen von der\l"
	.string "POKéMON LIGA, der einzige Ort in KANTO,\l"
	.string "den ich noch nicht erkundet habe.$"

Silph_11F_Bill_Presidente_Texto_9.1:
	.string "Dort steht das POKéMON-HAUS, in dem\n"
	.string "MEWTU erschaffen wurde, das vielleicht\l"
	.string "stärkste POKéMON aller Zeiten.$"

Silph_11F_Bill_Presidente_Texto_9.2:
	.string "Glaubst du, GIOVANNI hat eine Ahnung,\n"
	.string "wo es sich mittlerweile aufhält?$"

Silph_11F_Bill_Presidente_Texto_10:
	.string "MIGUEL: Sieh an, sieh an {PAUSE 15}…{PAUSE 15} Du bist also\n"
	.string "inzwischen ein ROCKET-OFFIZIER, was\l"
	.string "{PLAYER}? Hast dich ganz schön\l"
	.string "hochgearbeitet. Aber wie du sehen\l"
	.string "kannst, habe ich das auch!$"

Silph_11F_Bill_Presidente_Texto_11:
	.string "????: Gute Arbeit. Du wirst wie\n"
	.string "abgemacht deinen ALTBERNSTEIN\l"
	.string "bekommen.$"

Silph_11F_Bill_Presidente_Texto_12:
	.string "BILL: Du schon wieder! Ich gebe zu,\n"
	.string "dass ich dich damals in meinem Haus auf\l"
	.string "ROUTE 25 unterschätzt habe,\l"
	.string "{PLAYER}. Ich dachte, du wärst nur ein\l"
	.string "weiterer gewöhnlicher RÜPEL {PAUSE 5}…{PAUSE 5}$"

Silph_11F_Bill_Presidente_Texto_13:
	.string "Wie dem auch sei. Ich bemitleide dich\n"
	.string "sogar, denn kein ROCKET, egal welcher,\l"
	.string "hat eine Chance gegen BILL, den\l"
	.string "größten Sammler der Welt.$"

Silph_11F_Bill_Presidente_Texto_14:
	.string "ANDRA: Du bist nichts weiter als ein\n"
	.string "verwöhnter Schnösel, dem alles in den\l"
	.string "Arsch geschoben wurde! Du kannst dir\l"
	.string "zwar jede Technologie kaufen, aber\l"
	.string "nicht das Herz und den Verstand eines\l"
	.string "wahren TRAINERs! Ohne diese beiden\l"
	.string "Komponenten wirst du niemals jemanden\l"
	.string "wie {PLAYER} besiegen!$"

Silph_11F_Bill_Presidente_Texto_15:
	.string "BILL: Du dumme, kleine Drecksgöre! Ich\n"
	.string "bin nicht hergekommen, um mit einem\l"
	.string "weiteren gewöhnlichen ROCKET und ihren\l"
	.string "unterirdischen POKéMON zu plaudern!$"

Silph_11F_Bill_Presidente_Texto_15.1:
	.string "Ich bin hier, um den MEISTERBALL vom\n"
	.string "PRÄSIDENTEN zu fordern, noch bevor\l"
	.string "er auf den Markt kommt!$"

Silph_11F_Bill_Presidente_Texto_16:
	.string "Als einer der Hauptinvestoren von\n"
	.string "SILPH befehle ich euch, zur Seite zu\l"
	.string "treten! Wenn ihr keinen Ärger macht,\l"
	.string "lass ich euch vielleicht laufen, damit\l"
	.string "ihr euer armseliges Leben noch etwas\l"
	.string "länger weiterführen könnt!$"

Silph_11F_Bill_Presidente_Texto_17:
	.string "Mit diesem BALL werde ich alles\n"
	.string "besitzen, was ich mir je erträumt habe!\p"
	.string "Die LEGENDÄREN VÖGEL und sogar das\n"
	.string "sagenumwobene MEW könnten gefangen\l"
	.string "und in meiner gewaltigen Sammlung\l"
	.string "bestaunt werden! Sie sind die einzigen\l"
	.string "POKéMON, die mir noch fehlen, um meine\l"
	.string "Sammlung zu vervollständigen!$"

Silph_11F_Bill_Presidente_Texto_18:
	.string "Ihr könnt mich nicht daran hindern,\n"
	.string "zu ihm zu gelangen!$"

Silph_11F_Bill_Presidente_Texto_18.1:
	.string "Tretet zu Seite!\n"
	.string "Das ist eure letzte Warnung!$"

Silph_11F_Bill_Presidente_Texto_19:
	.string "ANDRA: Weder du noch deine gekauften\n"
	.string "POKéMON jagen uns Angst ein! TEAM\l"
	.string "ROCKET hat hier Wichtigeres zu tun, als\l"
	.string "sich mit den Launen eines verzogenen\l"
	.string "Wichtigtuers zu befassen.$"

Silph_11F_Bill_Presidente_Texto_19.1:
	.string "Du wirst das Büro nicht betreten! Ist\n"
	.string "mir egal, ob es dir passt oder nicht!$"

Silph_11F_Bill_Presidente_Texto_20:
	.string "BILL: Na schön, so ist es also {PAUSE 15}…{PAUSE 15} Ich\n"
	.string "habe bereits euren ADMINISTRATOR\l"
	.string "LAMBDA problemlos besiegt und ich\l"
	.string "werde auf dieselbe Weise mit euch\l"
	.string "verfahren.$"

Silph_11F_Bill_Presidente_Texto_20.1:
    .string "ANDRA: {PAUSE 15}…{PAUSE 15} PETREL{PAUSE 15}…{PAUSE 15}$"

Silph_11F_Bill_Presidente_Texto_21:
	.string "Kümmere dich um die vorlaute Göre!\p"
	.string "{PLAYER} gehört mir! Es wird Zeit,\n"
	.string "dass er für das bezahlt, was er in\l"
	.string "meinem Haus angerichtet hat!$"

Silph_11F_Bill_Presidente_Texto_22:
	.string "WISSENSCHAFTLER MIGUEL: Wie Sie\n"
	.string "befehlen, Sir BILL.$"

Silph_11F_Bill_Presidente_Texto_23:
	.string "BILL: Weißt du was, {PLAYER}? Es gibt\n"
	.string "viele Arten von seltenen POKéMON.\p"
	.string "FLEGMON und TRAGOSSO sind die Art, die\n"
	.string "POKéMANIACs begeistern. Sie versuchen\l"
	.string "so zu sein wie ich. Sie glauben, dass sie\l"
	.string "sich damit als Sammler bezeichnen\l"
	.string "können und mit mir in einer Liga spielen.$"

Silph_11F_Bill_Presidente_Texto_24:
	.string "Arme, naive Trottel! Ich sage dir etwas\n"
	.string "über seltene POKéMON - die wirklich\l"
	.string "seltenen: Die Seltensten sind\l"
	.string "gleichzeitig auch die stärksten.$"
	
Silph_11F_Bill_Presidente_Texto_24.1:
	.string "Denkst du nicht auch? Ich werde dir die\n"
	.string "Crème de la Crème meiner Sammlung\l"
	.string "zeigen!$"

Silph_11F_Bill_Presidente_Texto_25:
	.string "W-wie kann das sein?! Aber ich hatte\n"
	.string "doch die Seltensten bei mir!$"

Silph_11F_Bill_Presidente_Texto_25.1:
	.string "ANDRA: URSARING, beende es mit\n"
	.string "SCHLITZER!$"

Silph_11F_Bill_Presidente_Texto_26:
	.string "Ha! Diese FOSSILIEN können es nicht mit\n"
	.string "meinem TEAM aufnehmen,\l"
	.string "Wissenschaftler! Das schließt die ein,\l"
	.string "die dir BILL gegeben hat!$"

Silph_11F_Bill_Presidente_Texto_27:
	.string "BILL: Das kann nicht sein … Ich habe\n"
	.string "PORYGON2, die neueste Technologie, die\l"
	.string "eigens von SILPH selbst entwickelt\l"
	.string "wurde - zusammen mit einem Team aus den\l"
	.string "seltensten und damit auch stärksten\l"
	.string "POKéMON der Region!$"

Silph_11F_Bill_Presidente_Texto_28:
	.string "WISSENSCHAFTLER MIGUEL: BILL, Sir! Wir\n"
	.string "sollten besser verschwinden, bevor der\l"
	.string "Rest der ROCKETs unsere Niederlage\l"
	.string "mitbekommt. Es wäre zu riskant, hier zu\l"
	.string "bleiben. Sie wissen doch, wie sehr einige\l"
	.string "ROCKETs Sie hassen.$"

Silph_11F_Bill_Presidente_Texto_29:
	.string "BILL: Ihr denkt also, ihr habt\n"
	.string "gewonnen, was? Noch niemand hat mir\l"
	.string "jemals etwas verweigert, {PLAYER}!\p"
	.string "Wenn ich den MEISTERBALL haben will,\n"
	.string "werde ich ihn auf die eine oder andere\l"
	.string "Weise bekommen! Das Einzige, was du\l"
	.string "heute erreicht hast, ist dein eigenes\l"
	.string "Grab zu schaufeln!$"

Silph_11F_Bill_Presidente_Texto_29.1:
	.string "Niemand legt sich mit BILL an, dem\n"
	.string "größten Sammler der Welt! Beim nächsten\l"
	.string "Mal werde ich dich mit einer Macht\l"
	.string "zerschmettern, die du dir nicht einmal\l"
	.string "in deinen schlimmsten Alpträumen\l"
	.string "vorstellen kannst!$"

Silph_11F_Bill_Presidente_Texto_30:
	.string "GIOVANNI: ANDRA! {PLAYER}! Die\n"
	.string "Verhandlungen sind beendet und waren\l"
	.string "ein voller Erfolg! Mir ist es nicht nur\l"
	.string "gelungen, SILPH davon zu überzeugen,\l"
	.string "uns den MEISTERBALL zu geben, sondern\l"
	.string "auch dessen Verkauf auf dem Markt im\l"
	.string "Keim zu ersticken, damit ihn niemand\l"
	.string "sonst erwerben kann.$"

Silph_11F_Bill_Presidente_Texto_30.1:
	.string "Ab heute haben wir einen mächtigen\n"
	.string "Verbündeten, den die Medien als Opfer\l"
	.string "unserer zügellosen Gier darstellen\l"
	.string "werden.$"

Silph_11F_Bill_Presidente_Texto_30.2:
	.string "Jetzt bleibt nur noch der einfachste\n"
	.string "Teil: ROT in die Irre zu führen - ihn\l"
	.string "glauben zu lassen, er wüsste was hier\l"
	.string "vor sich geht und dass nur er in der\l"
	.string "Lage sei, POKéMON auf effektive Weise\l"
	.string "zu trainieren.$"

Silph_11F_Bill_Presidente_Texto_32:
	.string "GIOVANNI: Für euch ist diese Mission\n"
	.string "hiermit beendet. Ich habt meine\l"
	.string "Erwartungen bei weitem übertroffen und\l"
	.string "ich möchte nicht, dass ROT zufällig auf\l"
	.string "zwei OFFIZIERE eures Kalibiers trifft.$"

Silph_11F_Bill_Presidente_Texto_32.1:
	.string "Ihr habt euch eine Auszeit mehr als\n"
	.string "verdient. Tut, was immer euch beliebt\l"
	.string "und besucht die Orte der Region, bei\l"
	.string "denen ihr noch nicht wart.$"

Silph_11F_Bill_Presidente_Texto_33:
	.string "Hier sind eure Belohnungen, auch wenn\n"
	.string "sich die Loyalität eines Unternehmens\l"
	.string "wie SILPH nicht kaufen lässt.$"

Silph_11F_Bill_Presidente_Texto_34:
	.string "Du erhältst 400.000¥!!$"

Silph_11F_Bill_Presidente_Texto_35:
	.string "Und das ist vom PRÄSIDENTEN als\n"
	.string "Zeichen seiner Dankbarkeit dafür, dass\l"
	.string "ihr die Vertraulichkeit unseres\l"
	.string "Gespräches gewährleistet habt.$"

Silph_11F_Bill_Presidente_Texto_36:
	.string "DU ERHÄLTST EIN LEVEL 40 PORYGON!$"

Silph_11F_Bill_Presidente_Texto_37:
	.string "Es ist ein PORYGON, das erste von\n"
	.string "Menschenhand geschaffene POKéMON. Es\l"
	.string "wird in unserer SPIELHALLE für ein\l"
	.string "Vermögen verkauft. Der PRÄSIDENT war\l"
	.string "so gütig, sie jeweils mit einem UPGRADE\l"
	.string "auszustatten - einer Verbesserung, die\l"
	.string "sie über Jahre hinweg entwickelt haben.\p"
	.string "Ihr müsst dieses Item lediglich auf\n"
	.string "PORYGON anwenden - wie ihr es mit\l"
	.string "Entwicklungssteinen tut - und es wird\l"
	.string "sich zu PORYGON2 entwickeln.$"

Silph_11F_Bill_Presidente_Texto_37.2:
	.string "Laut dem PRÄSIDENTEN gab es bisher nur\n"
	.string "einen Einzigen, dem die Ehre zuteil\l"
	.string "wurde, dieses POKéMON vor euch zu\l"
	.string "besitzen.$"

Silph_11F_Bill_Presidente_Texto_37.1:
.string "ANDRA: {PAUSE 15}…{PAUSE 15}$"

Silph_11F_Bill_Presidente_Texto_38:
	.string "Gut. Ihr könnt jetzt gehen. Ich werde\n"
	.string "euch informieren, sobald wir unseren\l"
	.string "nächsten großen Coup in die Tat\l"
	.string "umsetzen. Genießt eure kleine Auszeit\l"
	.string "{PAUSE 15}…{PAUSE 15} und werdet noch stärker.$"

Silph_11F_Bill_Presidente_Texto_39:
	.string "PORYGON2 also … Wäre da nicht die\n"
	.string "Tatsache, dass BILL es gegen dich\l"
	.string "eingesetzt hat, würde ich es in mein\l"
	.string "Team aufnehmen. Ich werde niemals die\l"
	.string "gleichen POKéMON, wie dieser arrogante\l"
	.string "Schnösel benutzen!\p"
	.string "Ich werde sorgfältig darüber\n"
	.string "nachdenken, welches POKéMON mein Team\l"
	.string "vervollständigen wird {PAUSE 5}…{PAUSE 5}$"

Silph_11F_Bill_Presidente_Texto_40:
	.string "ANDRA: Ach ja! Der TÜRÖFFNER! Wir\n"
	.string "müssen ihn irgendwo platzieren, wo ROT\l"
	.string "ihn leicht finden kann! Keine Sorge,\l"
	.string "{PLAYER}. Ich kümmere mich darum.\p"
	.string "Ich habe auch schon den perfekten\n"
	.string "Ort, wo ich ihn -verstecken- kann.$"

Silph_11F_Bill_Presidente_Texto_41:
	.string "Ich werde BLAU sagen, dass er sich\n"
	.string "bereithalten soll, GIOVANNI sofort\l"
	.string "Bescheid zu geben, sobald ROT bei ihm\l"
	.string "auftaucht. Keine Angst, {PLAYER}.\p"
	.string "Wir haben alles unter Kontrolle {PAUSE 5}…{PAUSE 5}$"

Silph_11F_Bill_Presidente_Move_1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_1.1:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_2:
walk_right
step_end

Silph_11F_Bill_Presidente_Move_3:
emote_exclamation_mark
step_end

Silph_11F_Bill_Presidente_Move_4:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_5:
face_left
step_end

Silph_11F_Bill_Presidente_Move_6:
walk_left
walk_left
walk_left
walk_down
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_7:
walk_right
walk_right
walk_right
walk_right
walk_in_place_up
step_end

Silph_11F_Bill_Presidente_Move_8:
walk_left
step_end

Silph_11F_Bill_Presidente_Move_9:
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
face_up
step_end

Silph_11F_Bill_Presidente_Move_10:
emote_exclamation_mark
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_11:
face_left
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_12:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
step_end

Silph_11F_Bill_Presidente_Move_13:
face_left
step_end

Silph_11F_Bill_Presidente_Move_14:
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_15:
face_right
step_end

Silph_11F_Bill_Presidente_Move_16:
delay_16
face_up
step_end

Silph_11F_Bill_Presidente_Move_17:
face_down
step_end

Silph_11F_Bill_Presidente_Move_17.1:
walk_right
walk_right
face_down
step_end

Silph_11F_Bill_Presidente_Move_18:
walk_right
step_end

Silph_11F_Bill_Presidente_Move_19:
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
walk_left
step_end

Silph_11F_Bill_Presidente_Move_20:
emote_exclamation_mark
walk_in_place_right
step_end

Silph_11F_Bill_Presidente_Move_21:
walk_down
delay_16
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_22:
walk_up
delay_16
walk_in_place_left
step_end

Silph_11F_Bill_Presidente_Move_23:
walk_up
delay_16
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_24:
walk_in_place_down
step_end

Silph_11F_Bill_Presidente_Move_25:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Silph_11F_Bill_Presidente_Move_26:
walk_in_place_left
delay_16
walk_in_place_down
step_end

Silph_11F_Reunion_Presidente_Lance::
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_7
addobject 10
addobject 11
addobject 12
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Reunión_Presidente_Lance_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Silph_11F_Reunión_Presidente_Lance_Move_2
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_2 MSGBOX_AUTOCLOSE
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_3
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_4 MSGBOX_AUTOCLOSE
delay 20
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_4
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_5 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
delay 20
playse SE_PIN
applymovement 1, IndigoPlateau_Lance_Discurso_move_6
applymovement 2, IndigoPlateau_Lance_Discurso_move_6
waitmovement 0x0
waitse
delay 10
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Silph_11F_Reunión_Presidente_Lance_Move_5
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_7 MSGBOX_AUTOCLOSE
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_6
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_9 MSGBOX_AUTOCLOSE
delay 20
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_7
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_10 MSGBOX_AUTOCLOSE
applymovement 10, Silph_11F_Reunión_Presidente_Lance_Move_8
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_11 MSGBOX_AUTOCLOSE
clearflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
addobject 13
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_11F_Reunión_Presidente_Lance_Move_9
waitmovement 0x0
special RemoveCameraObject
delay 20
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement 13, Silph_11F_Reunión_Presidente_Lance_Move_10
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_13 MSGBOX_AUTOCLOSE
applymovement 13, Silph_11F_Reunión_Presidente_Lance_Move_11
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_14 MSGBOX_AUTOCLOSE
applymovement 13, Silph_11F_Reunión_Presidente_Lance_Move_12
waitmovement 0x0
msgbox Silph_11F_Reunión_Presidente_Lance_Texto_15 MSGBOX_AUTOCLOSE
delay 20
setflag FLAG_HIDE_MOSSDEEP_CITY_SCOTT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_7
delay 20
removeobject 10
removeobject 11
removeobject 12
delay 30
setvar VAR_UNUSED_0x40F7, 68
fadescreen 1
playse SE_WARP_IN
delay 60
removeobject 13
fadescreen 0
delay 60
warpsilent MAP_SEAFOAM_ISLANDS_1F, 6, 19
release
end

Silph_11F_Reunión_Presidente_Lance_Texto_1:
	.string "SIEGFRIED: Was bedrückt Sie, HERR\n"
	.string "PRÄSIDENT? Es sollte Ihnen eine Ehre\l"
	.string "sein, dass meine Wenigkeit und die\l"
	.string "REGIERUNG Ihrem Unternehmen ihr volles\l"
	.string "Vertrauen schenken, und zwar\l"
	.string "ausschließlich Ihrem.$"

Silph_11F_Reunión_Presidente_Lance_Texto_2:
	.string "PRÄSIDENT: Oh, verstehen Sie mich nicht\n"
	.string "falsch, CHAMP SIEGFRIED. Wir fühlen uns\l"
	.string "geehrt, unserer geliebten Region zu\l"
	.string "dienen. Es ist nur so, dass {PAUSE 5}…{PAUSE 5}$"

Silph_11F_Reunión_Presidente_Lance_Texto_3:
	.string "SIEGFRIED: Ich verstehe schon. Sie\n"
	.string "sind ein großer Verfechter der\l"
	.string "originalen 150 und ein Spezialist, was\l"
	.string "KANTO POKéMON betrifft. Und Ihnen\l"
	.string "gefällt der Gedanke nicht, dass jemand\l"
	.string "von außerhalb das Ruder übernimmt?\p"
	.string "Ist dem nicht so, HERR PRÄSIDENT?$"

Silph_11F_Reunión_Presidente_Lance_Texto_4:
.string "PRÄSIDENT: Es war nicht meine Absicht {PAUSE 5}…{PAUSE 5} $"

Silph_11F_Reunión_Presidente_Lance_Texto_5:
	.string "Darf ich Sie daran erinnern, wer im\n"
	.string "Besitz des Aushängeschilds dieser\l"
	.string "Region ist?$"

Silph_11F_Reunión_Presidente_Lance_Texto_6:
.string "Vertrauen Sie mir jetzt, HERR PRÄSIDENT?$"

Silph_11F_Reunión_Presidente_Lance_Texto_7:
	.string "PRÄSIDENT: Da scheint ein\n"
	.string "Missverständnis vorzuliegen.\p"
	.string "Eigentlich sprach ich {PAUSE 25}…{PAUSE 25} vom Rest der\n"
	.string "Bevölkerung. Mein Unternehmen hat\l"
	.string "keine Probleme damit, aber {PAUSE 25}…{PAUSE 25} wenn Sie\l"
	.string "und ich uns den ganzen Kuchen nehmen {PAUSE 25}…{PAUSE 25}\l"
	.string "was bleibt dann für die anderen?$"

Silph_11F_Reunión_Presidente_Lance_Texto_8:
	.string "SIEGFRIED: Ich fürchte, dass das nicht\n"
	.string "Ihr Problem ist, HERR PRÄSIDENT. Lassen\l"
	.string "Sie mich eines klarstellen: Sie und ich\l"
	.string "sind keine Partner - außer in dieser\l"
	.string "einen Angelegenheit. KANTOS Zukunft\l"
	.string "ist allein meine Angelegenheit.\p"
	.string "Ist das klar?$"

Silph_11F_Reunión_Presidente_Lance_Texto_9:
.string "PRÄSIDENT: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Silph_11F_Reunión_Presidente_Lance_Texto_10:
	.string "SIEGFRIED: Wenn Sie mich\n"
	.string "entschuldigen. Ich habe eine\l"
	.string "Besprechung mit den Mitgliedern der TOP\l"
	.string "VIER. Wenn Sie meinen Erwartungen\l"
	.string "gerecht werden, könnte ich Sie\l"
	.string "vielleicht sogar dort aufnehmen.\p"
	.string "Ich habe gehört, Sie seien ein\n"
	.string "hervorragender TRAINER und AGATHE\l"
	.string "wird bald in den Ruhestand gehen.$"

Silph_11F_Reunión_Presidente_Lance_Texto_11:
	.string "Bis bald, HERR PRÄSIDENT.\n"
	.string "Und vergessen Sie meine Worte nicht.$"

Silph_11F_Reunión_Presidente_Lance_Texto_12:
.string "ATLAS: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Silph_11F_Reunión_Presidente_Lance_Texto_13:
	.string "DRAGORAN ist nicht das Aushängeschild\n"
	.string "KANTOs.$"

Silph_11F_Reunión_Presidente_Lance_Texto_14:
	.string "Das wahre Symbol KANTOs war und ist\n"
	.string "RIZEROS. Deshalb findet man Statuen\l"
	.string "von ihm überall in der Region.$"

Silph_11F_Reunión_Presidente_Lance_Texto_15:
	.string "Und deshalb hat es GIOVANNI\n"
	.string "in seinem Team.$"

Silph_11F_Reunión_Presidente_Lance_Move_1:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_2:
walk_in_place_down
step_end

Silph_11F_Reunión_Presidente_Lance_Move_3:
walk_left
step_end

Silph_11F_Reunión_Presidente_Lance_Move_4:
face_up
step_end

Silph_11F_Reunión_Presidente_Lance_Move_5:
walk_down
step_end

Silph_11F_Reunión_Presidente_Lance_Move_6:
walk_slow_right
walk_slow_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_7:
walk_slow_left
walk_in_place_up
step_end

Silph_11F_Reunión_Presidente_Lance_Move_8:
walk_slow_left
walk_slow_down
step_end

Silph_11F_Reunión_Presidente_Lance_Move_9:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

Silph_11F_Reunión_Presidente_Lance_Move_10:
face_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_11:
walk_slow_right
step_end

Silph_11F_Reunión_Presidente_Lance_Move_12:
walk_slow_up
walk_slow_right
step_end

Silph_11F_Presidente_Charlas::
lock
faceplayer
compare VAR_ROUTE129_STATE, 0
goto_if_gt Silph_11F_Presidente_Charlas_2
msgbox Silph_11F_Presidente_Charlas_Texto_1 MSGBOX_AUTOCLOSE
msgbox Silph_11F_Presidente_Charlas_Texto_2 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_ITEM
giveitem ITEM_MASTER_BALL, 5
waitfanfare
delay 10
msgbox Silph_11F_Presidente_Charlas_Texto_3 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE129_STATE, 1
release
end

Silph_11F_Presidente_Charlas_2::
msgbox Silph_11F_Presidente_Charlas_Texto_4 MSGBOX_AUTOCLOSE
release
end

Silph_11F_Presidente_Charlas_Texto_1:
	.string "PRÄSIDENT: Nun nun!\p"
	.string "Du solltest hier nicht so fröhlich\n"
	.string "herumspazieren, junger Mann!$"

Silph_11F_Presidente_Charlas_Texto_2:
	.string "GIOVANNI was right, kid, people don't\n"
	.string "notice, but the LANCE's government,\l"
	.string "he's only interested in securing his\l"
	.string "power, regardless of the consequences,\l"
	.string "let me explain it: they compel us to sell\l"
	.string "items like PROTEIN, IRON, or CARBOS at\l"
	.string "so expensive prices, keeping the lion's\l"
	.string "share of the profit for themselves,\l"
	.string "their objective is to deprive TRAINERS\l"
	.string "in this region of resources to enhance\l"
	.string "their POKÉMON's capabilities, thank to\l"
	.string "your intervention, GIOVANNI helped me\l"
	.string "realize the potential outcome if my\l"
	.string "company didn't take action, here, take\l"
	.string "this, you'll undoubtedly put our\l"
	.string "flagship product to good use.$"

Silph_11F_Presidente_Charlas_Texto_3:
	.string "PRESIDENT: Yes, 5 MASTER BALL, use\n"
	.string "them only with those POKÉMON that are\l"
	.string "really hard to catch with the rest of\l"
	.string "the BALLS. We gave one MASTER BALL to\l"
	.string "RED after believing he had won for the\l"
	.string "sake of justice, just to convince him\l"
	.string "that his intervention had truly saved\l"
	.string "my company and me.$"

Silph_11F_Presidente_Charlas_Texto_4:
	.string "PRESIDENT: Are you still here, boy?\n"
	.string "Remember that a ROCKET shouldn't be\l"
	.string "seen around here! Because the people\l"
	.string "would start to ask some questions!$"
