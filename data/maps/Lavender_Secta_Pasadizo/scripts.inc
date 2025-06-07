Lavender_Secta_Pasadizo_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, Lavender_Secta_Pasadizo_OnResume
	.byte 0

Lavender_Secta_Pasadizo_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 20, Lavender_Secta_Pasadizo_Gray
	.2byte 0

Lavender_Secta_Pasadizo_Gray::
call Script_SetGrayscaleTint
setvar VAR_UNUSED_0x40F8, 21
end

Lavender_Secta_Pasadizo_Oak_Move_1:
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_2:
walk_right
walk_down
walk_right
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_3:
walk_up
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_4:
face_up
step_end

Lavender_Secta_Pasadizo_Oak_Move_5:
face_up
delay_8
lock_facing_direction
walk_down
unlock_facing_direction
step_end

Lavender_Secta_Pasadizo_Oak_Move_6:
walk_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_7:
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_8:
delay_16
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_9:
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_10:
emote_exclamation_mark
step_end

Lavender_Secta_Pasadizo_Oak_Move_11:
walk_in_place_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_12:
walk_slow_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_13:
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_14:
walk_fast_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_15:
face_down
step_end

Lavender_Secta_Pasadizo_Oak_Move_16:
walk_down
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_17:
face_up
delay_16
delay_8
face_right
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_18:
delay_8
face_right
delay_16
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_19:
delay_8
lock_facing_direction
walk_slow_left
unlock_facing_direction
step_end


Lavender_Secta_Pasadizo_Oak::
lock
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_1 MSGBOX_AUTOCLOSE
delay 30
playse SE_EXIT
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 1
waitse
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Oak_Move_1
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_2 MSGBOX_AUTOCLOSE
delay 15
call Script_SetGrayscaleTint
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_2
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_3
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Oak_Move_5
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_6 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_7 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_6
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_8
waitmovement 0x0
delay 20
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_10 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_9
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 25
msgbox Lavender_Secta_Pasadizo_Oak_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_16 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_12
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_18 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_13
waitmovement 0x0
delay 20
msgbox Lavender_Secta_Pasadizo_Oak_Texto_19 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_20 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_21 MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_15
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_22 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_25 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_16
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_26 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_17
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_27 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_28 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_18
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_29 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_30 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_31 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_32 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_33 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_34 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_35 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_36 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_10
waitmovement 0x0
waitse
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_13
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_37 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_38 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_19
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_39 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_40 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_14
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_41 MSGBOX_AUTOCLOSE
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_42 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_43 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_19
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_44 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_45 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_4
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_46 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Secta_Pasadizo_Oak_Texto_47 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_11
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_48 MSGBOX_AUTOCLOSE
delay 25
msgbox Lavender_Secta_Pasadizo_Oak_Texto_49 MSGBOX_AUTOCLOSE
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_20.1
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_20
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_50 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_51 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_21
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_52 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_22
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_53 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_24
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_23
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Oak_Texto_54 MSGBOX_AUTOCLOSE
applymovement 2, Lavender_Secta_Pasadizo_Oak_Move_25
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HOENN_81
removeobject 2
waitse
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_55 MSGBOX_AUTOCLOSE
delay 30
msgbox Lavender_Secta_Pasadizo_Oak_Texto_56 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_7
waitmovement 0x0
delay 10
msgbox Lavender_Secta_Pasadizo_Oak_Texto_57 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Lavender_Secta_Pasadizo_Oak_Move_26
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
removeobject 1
setflag FLAG_HOENN_80
setflag FLAG_HOENN_83
setvar VAR_UNUSED_0x40F8, 22
release
end

Lavender_Secta_Pasadizo_Oak_Move_20.1:
delay_16
walk_slow_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_26:
walk_left
walk_left
walk_down
walk_left
walk_left
walk_left
walk_up
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_25:
walk_right
walk_down
walk_right
walk_down
walk_down
face_right
step_end

Lavender_Secta_Pasadizo_Oak_Move_24:
lock_facing_direction
walk_left
walk_left
unlock_facing_direction
step_end

Lavender_Secta_Pasadizo_Oak_Move_23:
walk_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_22:
walk_down
face_left
step_end

Lavender_Secta_Pasadizo_Oak_Move_21:
delay_8
face_down
delay_16
step_end

Lavender_Secta_Pasadizo_Oak_Move_20:
walk_slow_up
step_end

Lavender_Secta_Pasadizo_Oak_Texto_1:
	.string "C. FRIDA: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Lavender_Secta_Pasadizo_Oak_Texto_2:
	.string "????: Das sehe ich anders. $"

Lavender_Secta_Pasadizo_Oak_Texto_3:
	.string "C. FRIDA: Was siehst du anders,\n"
	.string "junger Mann?$"

Lavender_Secta_Pasadizo_Oak_Texto_4:
	.string "EICH: Wahre Größe kann nicht einfach\n"
	.string "von überall herkommen. Weder bei\l"
	.string "TRAINERN noch bei POKéMON.$"

Lavender_Secta_Pasadizo_Oak_Texto_5:
	.string "C. FRIDA: Glaubst du das wirklich?$"

Lavender_Secta_Pasadizo_Oak_Texto_6:
	.string "EICH: Die Umgebung beeinflusst einen\n"
	.string "viel zu sehr. Ohne LAVANDIA wären Sie\l"
	.string "nie die GEIST-TYP Meisterin geworden,\l"
	.string "die Sie heute sind.$"

Lavender_Secta_Pasadizo_Oak_Texto_7:
	.string "C. FRIDA: Da hast du absolut recht.\p"
	.string "Die Dinge hätten sich ganz anders\n"
	.string "entwickelt.$"

Lavender_Secta_Pasadizo_Oak_Texto_8:
	.string "EICH: Noch schlimmer wäre es gewesen,\n"
	.string "wenn man Sie im FELSTUNNEL eingesperrt\l"
	.string "hätte. Dann hättest Sie nicht einmal\l"
	.string "ansatzweise Ihr Potenzial entfalten\l"
	.string "können.$"

Lavender_Secta_Pasadizo_Oak_Texto_9:
	.string "Wären Sie dort eingeschlossen gewesen,\n"
	.string "würde Ihr Niveau kaum das eines\l"
	.string "ARENA-Herausforderers übersteigen.$"

Lavender_Secta_Pasadizo_Oak_Texto_10:
	.string "C. FRIDA: Oh, ja!$"

Lavender_Secta_Pasadizo_Oak_Texto_11:
	.string "Eingeschlossen in diesem engen und\n"
	.string "dunklen Tunnel, der für niemand anderen\l"
	.string "zugänglich ist …$"

Lavender_Secta_Pasadizo_Oak_Texto_12:
	.string "EICH: Worauf wollen Sie hinaus?$"

Lavender_Secta_Pasadizo_Oak_Texto_13:
	.string "C. FRIDA: Selbst im dunkelsten und\n"
	.string "verlassensten Ort des Tunnels stünden\l"
	.string "mir noch unbegrenzt viele Möglichkeiten\l"
	.string "offen.$"

Lavender_Secta_Pasadizo_Oak_Texto_14:
	.string "Vielleicht doch nicht unbegrenzt viele,\n"
	.string "aber immer noch unzählige.$"

Lavender_Secta_Pasadizo_Oak_Texto_15:
	.string "EICH: Das ergibt keinen Sinn.\p"
	.string "Das ist unmöglich.$"

Lavender_Secta_Pasadizo_Oak_Texto_16:
	.string "C. FRIDA: Es geht nicht darum, ob es\n"
	.string "möglich oder unmöglich ist, sondern um\l"
	.string "Gewissheit.$"

Lavender_Secta_Pasadizo_Oak_Texto_17:
	.string "Die Wirklichkeit wird nicht durch\n"
	.string "Materie, sondern durch das Bewusstsein\l"
	.string "bestimmt.$"

Lavender_Secta_Pasadizo_Oak_Texto_18:
	.string "Dadurch besteht immer die Chance auf\n"
	.string "Veränderung. Und genau diese Chance\l"
	.string "bewirkt, dass sich noch mehr verändert.$"

Lavender_Secta_Pasadizo_Oak_Texto_19:
	.string "Außerdem{PAUSE 35}…{PAUSE 35}$"

Lavender_Secta_Pasadizo_Oak_Texto_20:
	.string "Manchmal ist das Leben wie ein dunkler\n"
	.string "Tunnel. Du kannst zwar nicht immer das\l"
	.string "Licht am Ende sehen, aber wenn du\l"
	.string "einfach immer weitergehst … gelangst\l"
	.string "du irgendwann an einen besseren Ort.\p"
	.string "Wenn du in den selbst dunkelsten Orten\n"
	.string "an der Hoffnung festhältst, dann\l"
	.string "besitzt du wahre Willenskraft.$"

Lavender_Secta_Pasadizo_Oak_Texto_21:
	.string "EICH: Das ist totaler Quatsch! Das\n"
	.string "sind nichts weiter als verzweifelte\l"
	.string "Wunschvorstellungen, wie die Welt Ihr\l"
	.string "Meinung nach funktionieren sollte!$"

Lavender_Secta_Pasadizo_Oak_Texto_22:
	.string "Und Sie haben es so weit geschafft,\n"
	.string "obwohl Sie an diesen ganzen\l"
	.string "esoterischen Schwachsinn glauben.$"

Lavender_Secta_Pasadizo_Oak_Texto_23:
	.string "Aber wir wissen beide, dass es Ihr\n"
	.string "Talent - gepaart mit einer Portion\l"
	.string "Glück war, die Sie ans Ziel geführt\l"
	.string "haben.$"

Lavender_Secta_Pasadizo_Oak_Texto_24:
	.string "Ohne das Endergebnis, würde niemand\n"
	.string "Ihrer kleinen Rede Glauben schenken.$"

Lavender_Secta_Pasadizo_Oak_Texto_25:
	.string "C. FRIDA: Es ist bedauerlich.$"

Lavender_Secta_Pasadizo_Oak_Texto_26:
	.string "Du bist klug, doch dein Festhalten an\n"
	.string "der Logik der Welt - einer Welt, die du\l"
	.string "lediglich mit deinen Augen wahrnimmst,\l"
	.string "machen dich blind.$"

Lavender_Secta_Pasadizo_Oak_Texto_27:
	.string "EICH: Wenn ich es nicht sehen kann,\n"
	.string "dann zeigen Sie es mir!$"

Lavender_Secta_Pasadizo_Oak_Texto_28:
	.string "Zeigt mir dieses POKéMON! Zeigt mir\n"
	.string "einen Beweis! Zeigt mir, dass all das,\l"
	.string "was Sie erzählt haben, wahr ist!$"

Lavender_Secta_Pasadizo_Oak_Texto_29:
	.string "C. FRIDA: Nein.$"

Lavender_Secta_Pasadizo_Oak_Texto_30:
	.string "EICH: Aber{PAUSE 25}…{PAUSE 25} warum?$"

Lavender_Secta_Pasadizo_Oak_Texto_31:
	.string "C. FRIDA: Mein POKéMON ist kein Exponat\n"
	.string "in einem Museum.$"

Lavender_Secta_Pasadizo_Oak_Texto_32:
	.string "Wenn du deinen Beweis willst, dann\n"
	.string "musst du dich schon selbst auf die\l"
	.string "Suche machen. Du kannst kein Haus\l"
	.string "bauen, wenn du beim Dach anfängst.$"

Lavender_Secta_Pasadizo_Oak_Texto_33:
	.string "EICH: Dann werde ich Sie eines Tages\n"
	.string "dazu bringen, es zu tun.$"

Lavender_Secta_Pasadizo_Oak_Texto_34:
	.string "Wenn ich Sie um den CHAMP-Titel\n"
	.string "herausfordern werde, dann werden Sie\l"
	.string "keine Chance gegen mich haben.$"

Lavender_Secta_Pasadizo_Oak_Texto_35:
	.string "C. FRIDA: {PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Lavender_Secta_Pasadizo_Oak_Texto_36:
	.string "Es tut mir Leid, dir dies mitteilen zu\n"
	.string "müssen, aber das wird nicht geschehen.\p"
	.string "Mein POKéMON und ich werden eine Reise\n"
	.string "antreten, die uns weit weg von KANTO\l"
	.string "und JOHTO führen wird.$"

Lavender_Secta_Pasadizo_Oak_Texto_37:
	.string "EICH: Dann weigern Sie sich also,\n"
	.string "Ihren Titel zu verteidigen?!$"

Lavender_Secta_Pasadizo_Oak_Texto_38:
	.string "C. FRIDA: Alles, was es zu beweisen gab,\n"
	.string "habe ich bereits bewiesen.$"

Lavender_Secta_Pasadizo_Oak_Texto_39:
	.string "EICH: Nein{PAUSE 15}…{PAUSE 15} Das ist unmöglich{PAUSE 15}…{PAUSE 15}\p"
	.string "Ein wahrer CHAMP würde niemals so\n"
	.string "handeln{PAUSE 15}…{PAUSE 15}$"

Lavender_Secta_Pasadizo_Oak_Texto_40:
	.string "Das ist doch alles erstunken und\n"
	.string "gelogen!$"

Lavender_Secta_Pasadizo_Oak_Texto_41:
	.string "Dieses VULNONA existiert in Wahrheit\n"
	.string "gar nicht, oder?\p"
	.string "Das war alles nur ein billiger Trick!\p"
	.string "Ein Köder, den alle geschluckt haben!$"

Lavender_Secta_Pasadizo_Oak_Texto_42:
	.string "Ja {PAUSE 15}…{PAUSE 15} Das ist der wahre Grund, warum Sie\n"
	.string "gehen {PAUSE 15}…{PAUSE 15} Sie wollen die Legende am Leben\l"
	.string "erhalten!$"

Lavender_Secta_Pasadizo_Oak_Texto_43:
	.string "C. FRIDA: Glaubst du das wirklich?$"

Lavender_Secta_Pasadizo_Oak_Texto_44:
	.string "EICH: Aber sie wird nicht lange\n"
	.string "anhalten {PAUSE 15}…{PAUSE 15} Sie werden schon bald in\l"
	.string "Vergessenheit geraten! Sie haben den\l"
	.string "Titel nämlich nur einmal errungen!$"

Lavender_Secta_Pasadizo_Oak_Texto_45:
	.string "Mit den Jahren werden sich nur noch\n"
	.string "wenige Menschen vage an Sie erinnern!\p"
	.string "Ihre Geschichte wird lediglich eine\n"
	.string "Gutenachtgeschichte für Kinder sein!$"

Lavender_Secta_Pasadizo_Oak_Texto_46:
	.string "Ich andererseits werde den Titel nicht\n"
	.string "nur einmal oder zweimal erringen! Nein …\p"
	.string "Ich werde ihn verteidigen - immer und\n"
	.string "immer wieder und damit zum größten und\l"
	.string "am längsten amtierenden CHAMP werden,\l"
	.string "den es je gab!$"

Lavender_Secta_Pasadizo_Oak_Texto_47:
	.string "Ich werde jedem meine POKéMON zeigen,\n"
	.string "der nach ihnen fragt! Sie werden keine\l"
	.string "Illusionen oder Phantome sein! All meine\l"
	.string "Errungenschaften werden in jedermanns\l"
	.string "Gedächtnis bleiben … sichtbar für\l"
	.string "jedermann!$"

Lavender_Secta_Pasadizo_Oak_Texto_48:
	.string "Und wenn ich erstmal derjenige mit den\n"
	.string "meisten Trophäen bin, werde ich\l"
	.string "bewiesen haben, dass ich der größte\l"
	.string "TRAINER aller Zeiten bin!\p"
	.string "Sie können schwafeln, so viel Sie\n"
	.string "wollen, aber Zahlen lügen niemals!$"

Lavender_Secta_Pasadizo_Oak_Texto_49:
	.string "C. FRIDA: Ich verstehe.$"

Lavender_Secta_Pasadizo_Oak_Texto_50:
	.string "In JOHTO gibt es ein Sprichwort.\n"
	.string "Es lautet wie folgt: {PAUSE 20} -Dasselbe Ideal\l"
	.string "zweimal zu finden ist unmöglich. Nur\l"
	.string "wenige finden es überhaupt einmal.-$"

Lavender_Secta_Pasadizo_Oak_Texto_51:
	.string "Und ich habe es gemeinsam mit meinem\n"
	.string "VULNONA gefunden.$"

Lavender_Secta_Pasadizo_Oak_Texto_52:
	.string "Du {PAUSE 20}…{PAUSE 20} Du besitzt, alles was du brauchst,\n"
	.string "um es zu finden.$"

Lavender_Secta_Pasadizo_Oak_Texto_53:
	.string "Wenn jedoch deine einzige Ambition\n"
	.string "darin besteht, deinen Blick zu\l"
	.string "erweitern - dich aber dafür deinen\l"
	.string "Sinnen gegenüber zu verschließen …\l"
	.string "dann wirst du es niemals finden.$"

Lavender_Secta_Pasadizo_Oak_Texto_54:
	.string "Du wirst dein Leben leben, aber du wirst\n"
	.string "niemals erfahren, was noch so alles in\l"
	.string "der Welt lauert. Die Zeit macht vor\l"
	.string "niemandem halt, verstehst du?$"

Lavender_Secta_Pasadizo_Oak_Texto_55:
	.string "EICH: {PAUSE 25}…{PAUSE 25} …{PAUSE 25}$"

Lavender_Secta_Pasadizo_Oak_Texto_56:
	.string "EICH: Unsinn! So etwas wie ein -Ideal-\n"
	.string "gibt es nicht! Das Einzige, was wirklich\l"
	.string "existiert, sind Dinge, die messbar,\l"
	.string "verbesserbar und dokumentierter sind!$"

Lavender_Secta_Pasadizo_Oak_Texto_57:
	.string "Die Welt wird die Ergebnisse meiner\n"
	.string "Suche zu sehen bekommen.$"

Lavender_Secta_Pasadizo_Bloqueo::
lock
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Bloqueo_Move_1
waitmovement 0x0
msgbox Lavender_Secta_Pasadizo_Bloqueo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Lavender_Secta_Pasadizo_Bloqueo_Move_2
waitmovement 0x0
release
end

Lavender_Secta_Pasadizo_Bloqueo_Move_1:
walk_in_place_left
step_end

Lavender_Secta_Pasadizo_Bloqueo_Move_2:
walk_slow_right
step_end

Lavender_Secta_Pasadizo_Bloqueo_Texto_1:
	.string "-Eine geheimnisvolle Energie hindert\n"
	.string "dich daran, zurückzukehren.-$"
