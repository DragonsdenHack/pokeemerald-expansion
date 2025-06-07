Lavender_Secta_Pasadizo_3_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Lavender_Secta_Pasadizo_3_OnResume
	.byte 0

Lavender_Secta_Pasadizo_3_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 22, Lavender_Secta_Pasadizo_3_Gray
	.2byte 0

Lavender_Secta_Pasadizo_3_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 23
end

Lavender_Secta_Pasadizo_Lider_Move_1:
walk_in_place_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_2:
face_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_3:
walk_up
walk_right
face_down
step_end

Lavender_Secta_Pasadizo_Lider_Move_4:
walk_right
walk_up
walk_right
walk_up
walk_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_5:
delay_16
face_left
delay_16
delay_8
face_up
delay_16
step_end

Lavender_Secta_Pasadizo_Lider_Move_6:
face_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_7:
face_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_8:
walk_in_place_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_9:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_Lider_Move_10:
walk_in_place_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_11:
walk_left
walk_down
walk_down
walk_left
walk_left
step_end

Lavender_Secta_Pasadizo_Lider_Move_12:
walk_right
walk_right
walk_right
walk_down
walk_down
walk_right
walk_down
walk_right
step_end

Lavender_Secta_Pasadizo_Lider_Move_12.1:
walk_down
walk_right
walk_right
walk_right
step_end

Lavender_Secta_Pasadizo_Lider::
lock
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_83
clearflag FLAG_HOENN_81
removeobject 4
addobject 2
call Script_SetGrayscaleTint
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_3
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_9 MSGBOX_AUTOCLOSE
delay 15
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_11 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_12 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_14 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_15 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Lider_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_8
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_19 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_20 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_9
waitmovement 0x0
waitse
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_21 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_23 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_24 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_25 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_5
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_26 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_10
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_27 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Lider_Move_11
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_81
removeobject 2
delay 35
msgbox Lavender_Secta_Pasadizo_Lider_Texto_29 MSGBOX_AUTOCLOSE
delay 35
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_12.1
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_12
applymovement OBJ_EVENT_ID_CAMERA, Lavender_Secta_Pasadizo_Lider_Move_12
waitmovement 0x0
special RemoveCameraObject
delay 50
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 50
clearflag FLAG_HOENN_83
addobject 4
call Script_SetGrayscaleTint
playse SE_BALL_THROW
waitse
delay 50
playse SE_BALL_TRADE
setflag FLAG_HOENN_83
removeobject 4
clearflag FLAG_HOENN_80
addobject 3
call Script_SetGrayscaleTint
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Lider_Move_9
waitmovement 0x0
delay 35
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
delay 25
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_30 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_31 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_32 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_33 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_35 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
delay 10
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
delay 30
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_36 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_38 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_8
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_39 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_40 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_41 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Lider_Texto_42 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Lider_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Lider_Texto_43 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_NINETALES, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
delay 10
playse SE_LEDGE
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13
waitmovement 0x0
waitse
applymovement 3, Lavender_Secta_Pasadizo_Lider_Move_13.1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Lavender_Secta_Pasadizo_Lider_Move_15
waitmovement 0x0
special RemoveCameraObject
delay 10
setflag FLAG_HOENN_82
setflag FLAG_HOENN_81
setflag FLAG_HOENN_80
clearflag FLAG_HOENN_163
playse SE_M_DETECT
dofieldeffectsparkle 9, 5, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_9
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_10
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setvar VAR_UNUSED_0x40F8, 24
warpsilent MAP_POKEMON_TOWER_S3, 11, 9
delay 150
release
end

Lavender_Secta_Pasadizo_Lider_Move_15:
walk_fast_left
walk_fast_left
walk_fast_up
walk_fast_up
step_end

Lavender_Secta_Pasadizo_Lider_Move_14:
delay_16
delay_16
face_up
delay_16
delay_16
face_right
delay_16
delay_16
step_end

Lavender_Secta_Pasadizo_Lider_Move_13:
jump_in_place_down
step_end

Lavender_Secta_Pasadizo_Lider_Move_13.1:
walk_in_place_down
step_end

Lavender_Secta_Pasadizo_Lider_Texto_1:
	.string "????: Darf ich?$"

Lavender_Secta_Pasadizo_Lider_Texto_2:
	.string "C. FRIDA: Selbstverständlich.\p"
	.string "Du bist schließlich immer noch\n"
	.string "der LEITER dieser ARENA.$"

Lavender_Secta_Pasadizo_Lider_Texto_3:
	.string "????: Ja, was das betrifft {PAUSE 15}…{PAUSE 15}$"

Lavender_Secta_Pasadizo_Lider_Texto_4:
	.string "C. FRIDA: Ich habe es befürchtet.$"

Lavender_Secta_Pasadizo_Lider_Texto_5:
	.string "Wie viel Zeit bleibt der ARENA noch?$"

Lavender_Secta_Pasadizo_Lider_Texto_6:
	.string "????: Zehn, vielleicht zwölf Jahre.$"

Lavender_Secta_Pasadizo_Lider_Texto_7:
	.string "C. FRIDA: Gut. Zumindest wird der\n"
	.string "kleine MORPHEUS noch seinen Traum\l"
	.string "verwirklichen können.$"

Lavender_Secta_Pasadizo_Lider_Texto_8:
	.string "????: Ja, das wird er.$"

Lavender_Secta_Pasadizo_Lider_Texto_9:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Lavender_Secta_Pasadizo_Lider_Texto_10:
	.string "Wer hätte ahnen können, dass diese\n"
	.string "ARENA nicht für immer bestehen wird?$"

Lavender_Secta_Pasadizo_Lider_Texto_11:
	.string "C. FRIDA: Nichts hält für immer.$"

Lavender_Secta_Pasadizo_Lider_Texto_12:
	.string "Sag mir, wie es um die Zukunft dieser\n"
	.string "Stadt bestimmt ist?$"

Lavender_Secta_Pasadizo_Lider_Texto_13:
	.string "????: SAFFRONIA CITY wächst mit jedem\n"
	.string "Tag.$"

Lavender_Secta_Pasadizo_Lider_Texto_14:
	.string "Dieses neue Unternehmen, SILPH,\n"
	.string "errichtet dort seinen Hauptsitz.\p"
	.string "Angeblich wird das Gebäude, was Höhe\n"
	.string "angeht, sogar den POKéMON-TURM\l"
	.string "überragen.$"

Lavender_Secta_Pasadizo_Lider_Texto_15:
	.string "Zudem wird in der Stadt möglicherweise\n"
	.string "ein neue ARENA eröffnet - zusammen mit\l"
	.string "der feierlichen Eröffnung von SILPH.$"

Lavender_Secta_Pasadizo_Lider_Texto_16:
	.string "Das wird das soziale Wachstum der Stadt\n"
	.string "fördern und …$"

Lavender_Secta_Pasadizo_Lider_Texto_17:
	.string "C. FRIDA: Und auch das wirtschaftliche\n"
	.string "Wachstum. Ja, ich verstehe.$"

Lavender_Secta_Pasadizo_Lider_Texto_18:
	.string "Was ist mit LAVANDIA?$"

Lavender_Secta_Pasadizo_Lider_Texto_19:
	.string "????: Sobald der Bau der ARENA fertig\n"
	.string "ist, wird es in ganz KANTO keinen Platz\l"
	.string "mehr für die Stadt geben.$"

Lavender_Secta_Pasadizo_Lider_Texto_20:
	.string "Es wird ein Ort werden, an dem Trainern\n"
	.string "geholfen wird.$"

Lavender_Secta_Pasadizo_Lider_Texto_21:
	.string "C. FRIDA: Geholfen mit?$"

Lavender_Secta_Pasadizo_Lider_Texto_22:
	.string "????: Mit Spitznamen.$"

Lavender_Secta_Pasadizo_Lider_Texto_23:
	.string "C. FRIDA: Ha! Diese dämlichen Trends\n"
	.string "sind so vorhersehbar und dennoch\l"
	.string "überraschen sie mich immer wieder aufs\l"
	.string "Neue.$"

Lavender_Secta_Pasadizo_Lider_Texto_24:
	.string "Also, was wird aus diesem kleinen\n"
	.string "FRIEDHOF hier?$"

Lavender_Secta_Pasadizo_Lider_Texto_25:
	.string "????: Der NAMEN-BEWERTER wird sich um\n"
	.string "ihn kümmern. Aber diese Gräber sind\l"
	.string "schon ziemlich alt.\p"
	.string "Früher oder später wird dieser Ort\n"
	.string "in Vergessenheit geraten.$"

Lavender_Secta_Pasadizo_Lider_Texto_26:
	.string "C. FRIDA: Verstehe. Nun, zumindest wird\n"
	.string "ein Teil dieser ARENA in den neuen\l"
	.string "Generationen weiterleben.$"

Lavender_Secta_Pasadizo_Lider_Texto_27:
	.string "Danke.$"

Lavender_Secta_Pasadizo_Lider_Texto_28:
	.string "????: Nicht dafür. Dann lasse ich dich\n"
	.string "jetzt in Ruhe. Es war ein langer Tag.$"

Lavender_Secta_Pasadizo_Lider_Texto_29:
	.string "C. FRIDA: {PAUSE 35}…{PAUSE 35} …{PAUSE 35}$"

Lavender_Secta_Pasadizo_Lider_Texto_30:
	.string "Es fühlt sich so an, als wäre es erst\n"
	.string "gestern gewesen, oder VULNONA?$"

Lavender_Secta_Pasadizo_Lider_Texto_31:
	.string "EDu lagst hier, zusammengekauert,\n"
	.string "während du die kalte Umarmung des\l"
	.string "Todes erwartetest.$"

Lavender_Secta_Pasadizo_Lider_Texto_32:
	.string "Aber ich habe dich gerettet.$"

Lavender_Secta_Pasadizo_Lider_Texto_33:
	.string "Und dann habe ich mir die Frage\n"
	.string "gestellt, wie ein VULPIX hierher\l"
	.string "gelangen konnte.$"

Lavender_Secta_Pasadizo_Lider_Texto_34:
	.string "In diesem Moment wurde mir klar, dass\n"
	.string "dieser alte und vergessene Grabstein\l"
	.string "etwas verbarg.$"

Lavender_Secta_Pasadizo_Lider_Texto_35:
	.string "Diese Treppen, die so alt wie die Stadt\n"
	.string "selbst waren, führen an einen noch\l"
	.string "geheimnisvolleren Ort.$"

Lavender_Secta_Pasadizo_Lider_Texto_36:
	.string "Aber jedes Mal, wenn wir uns ihnen\n"
	.string "genähert haben, hast du so vehement\l"
	.string "darauf bestanden, dass wir umkehren,\l"
	.string "sodass wir sie nie runtergegangen sind.$"

Lavender_Secta_Pasadizo_Lider_Texto_37:
	.string "Du bist das stärkste und edelste\n"
	.string "POKéMON, das mir je begegnet ist.\p"
	.string "Doch aus irgendeinem Grund\n"
	.string "fürchtest du dich davor, an\l"
	.string "diesen Ort zurückzukehren.$"

Lavender_Secta_Pasadizo_Lider_Texto_38:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Lavender_Secta_Pasadizo_Lider_Texto_39:
	.string "Ehrlich gesagt, bin ich sehr neugierig,\n"
	.string "aber mein Respekt vor unserer\l"
	.string "Freundschaft ist noch größer.$"

Lavender_Secta_Pasadizo_Lider_Texto_40:
	.string "Wenn es dein Wunsch ist, werde ich diese\n"
	.string "Welt verlassen, ohne zu wissen, wohin\l"
	.string "diese Treppen hinführen.$"

Lavender_Secta_Pasadizo_Lider_Texto_41:
	.string "Schließlich wird der Lauf der Zeit\n"
	.string "diesen Ort begraben.\p"
	.string "Er ist bereits dem Untergang geweiht.$"

Lavender_Secta_Pasadizo_Lider_Texto_42:
	.string "Sobald sich der NAMEN-BEWERTER hier\n"
	.string "niedergelassen hat, wird niemand jemals\l"
	.string "mehr diese Treppen hinuntersteigen.$"

Lavender_Secta_Pasadizo_Lider_Texto_43:
	.string "Dieses Geheimnis wird bis zum\n"
	.string "allerletzten Tag eines bleiben.$"
