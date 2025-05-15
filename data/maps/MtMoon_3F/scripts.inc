MtMoon_3F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, MtMoon_3F_OnResume
	.byte 0

MtMoon_3F_OnResume:
	call MtMoon_3F_SetupEscapeWarp
	end

MtMoon_3F_SetupEscapeWarp::
	setescapewarp MAP_ROUTE4, 19, 6
	return

MtMoon3F_2::
end



MtMoon3F_3::
end



MtMoon3F_4::
end



MtMoon3F_5::
lock     
faceplayer     
msgbox MtMoon3F_Text_5, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_5:
.string "Hier ist nichts, Alter!$"



MtMoon3F_6::
lock     
faceplayer     
msgbox MtMoon3F_Text_6, MSGBOX_DEFAULT
release     
end

MtMoon3F_Text_6:
	.string "ANDRA: Sieht so aus, als wäre da drüben\n"
	.string "nichts Wertvolles. Vielleicht ja in den\l"
	.string "Untergeschossen, die man über diese\l"
	.string "Leitern hier erreicht {PAUSE 5}…{PAUSE 5}$"



MtMoon3F_7::
end



MtMoon3F_9::
lock     
faceplayer    
compare VAR_UNUSED_0x40F7, 12
goto_if_gt MtMoon3F_9_2
msgbox MtMoon3F_Text_9, MSGBOX_AUTOCLOSE
end

MtMoon3F_9_2::
lock
faceplayer
msgbox MtMoon3F_Text_9_2, MSGBOX_AUTOCLOSE
release
end

MtMoon3F_Text_9:
	.string "Das ist er! Das ist der Arsch, der uns so\n"
	.string "viele Probleme macht! Ich habe\l"
	.string "versucht, ihn aufzuhalten, aber er hat\l"
	.string "mich komplett auseinandergenommen!\p"
	.string "Alles, was ich jetzt tun kann, ist hier\n"
	.string "dumm rumzustehen und zuzusehen {PAUSE 5}…{PAUSE 5}$"


MtMoon3F_Text_9_2:
	.string "Wow! Ich weiß nicht, was du ihm gesagt\n"
	.string "hast, aber er ist ohne das FOSSIL\l"
	.string "verschwunden! Jetzt wird uns LAMBDA\l"
	.string "noch mehr belohnen!$"

MtMoon3F_10::
end



MtMoon3F_11::
lock     
faceplayer  
compare VAR_UNUSED_0x40F7, 14
goto_if_gt MtMoon3F_11_3  
compare VAR_UNUSED_0x40F7, 13
goto_if_gt MtMoon3F_11_2
msgbox MtMoon3F_Text_11, MSGBOX_AUTOCLOSE
end

MtMoon3F_11_2::
lock
faceplayer
delay 15
playse SE_PIN
applymovement 11, MtMoon3F_9_2_move1
playfanfare MUS_OBTAIN_ITEM
msgbox MtMoon3F_Text_11_1, MSGBOX_DEFAULT
waitfanfare
msgbox MtMoon3F_Text_11_2, MSGBOX_NPC
playse SE_POKENAV_ON
waitse
delay 10
msgbox MtMoon3F_Text_11_3, MSGBOX_NPC
playse SE_PC_OFF
waitse
delay 20
msgbox MtMoon3F_Text_11_4, MSGBOX_NPC
setvar VAR_UNUSED_0x40F7, 15
release
end

MtMoon3F_11_3::
lock
faceplayer
msgbox MtMoon3F_Text_11_5, MSGBOX_NPC
release
end


MtMoon3F_Text_11:
	.string "Hör auf, Zeit zu verschwenden und such\n"
	.string "gefälligst weiter! Siehst du nicht, dass\l"
	.string "ich bereits hier suche?$"

MtMoon3F_Text_11_1:
	.string "{PLAYER} zeigt dem HOCHRANGINGEN\n"
	.string "RÜPEL FRANK das FOSSIL!$"

MtMoon3F_Text_11_2:
	.string "Mmm{PAUSE 25}…{PAUSE 25} Vielleicht bist du ja doch nicht so\n"
	.string "nutzlos, wie ich dachte. Mit diesem\l"
	.string "haben wir jetzt drei FOSSILIEN. Das ist\l"
	.string "genug, um die Mission abzuschließen.$"

MtMoon3F_Text_11_3:
	.string "An alle RÜPEL der MONDBERG Mission! Die\n"
	.string "Mission ist vorbei! Kehrt zum\l"
	.string "Treffpunkt zurück!$"

MtMoon3F_Text_11_4:
	.string "Perfekt! Ich hetze die Anderen, damit\n"
	.string "ich noch ein weiteres FOSSIL finden\l"
	.string "kann. Beweg dich, RÜPEL! Und pass auf,\l"
	.string "dass du nichts verlierst!$"

MtMoon3F_Text_11_5:
	.string "Geh zurück zum Treffpunkt, RÜPEL! Ich\n"
	.string "will mich nicht wiederholen müssen!$"


MtMoon3F_9_2_move1:
emote_exclamation_mark
step_end



MtMoon_3F_Azul::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
playse 527
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
playse 528
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_2::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_3::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move1.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_1, MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move2.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_2, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move3.1
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_3, MSGBOX_AUTOCLOSE
applymovement 8, MtMoon_3F_Azul_move4.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 8, MtMoon_3F_Azul_move5
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Azul_move6
waitmovement 0x0
msgbox MtMoon_3F_Azul_Text_4, MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Azul_Text_5, MSGBOX_AUTOCLOSE
delay 20
applymovement 8, MtMoon_3F_Azul_move7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_2
removeobject 8
fadeoutbgm 0
playse 500
setvar VAR_UNUSED_0x40F7, 13
release
end

MtMoon_3F_Azul_Text_1:
	.string "????: Tja. Schon wieder kein\n"
	.string "ALTBERNSTEIN. Ich muss mich wohl mit\l"
	.string "diesen HELIX- und DOMFOSSILIEN\l"
	.string "zufriedengeben. Schade.\p"
	.string "Ein AERODACTYL wäre eine super\n"
	.string "Ergänzung für mein Team gewesen.$"

MtMoon_3F_Azul_Text_2:
	.string "Noch ein ROCKET? Ihr seid ja überall!\p"
	.string "Aber ich will nicht noch mehr Zeit damit\n"
	.string "verschwenden, dich auch noch zu\l"
	.string "besiegen. Nimm das nicht persönlich,\l"
	.string "aber bei deinem Können geht das nicht\l"
	.string "mal als Aufwärmtraining durch.$"

MtMoon_3F_Azul_Text_3:
	.string "Zu deinem Glück habe ich schon ein\n"
	.string "DOMFOSSIL. Also brauche ich dieses hier\l"
	.string "nicht. Du kannst es haben. Aber wer will\l"
	.string "schon ein AMOROSO oder KABUTOPS haben,\l"
	.string "wenn es TURTOK gibt?$"

MtMoon_3F_Azul_Text_4:
	.string "Was? Du willst mir erzählen, dass ich\n"
	.string "überheblich bin, nur weil ich die\l"
	.string "Konkurrenz ungeschoren davonkommen\l"
	.string "lasse?$"

MtMoon_3F_Azul_Text_5:
	.string "Mir ist es egal, wie viel Geld ihr mit\n"
	.string "diesen FOSSILIEN macht, ROCKET! Alles,\l"
	.string "was mich interessiert, ist ein mächtiges\l"
	.string "und ausgeglichenes Team aufzubauen!\p"
	.string "Das ist mir mehr wert als alles Geld der\n"
	.string "Welt!$"

MtMoon_3F_Azul_move1:
walk_in_place_right
step_end

MtMoon_3F_Azul_move1.1:
walk_in_place_up
step_end

MtMoon_3F_Azul_move2:
face_left
emote_exclamation_mark
step_end

MtMoon_3F_Azul_move2.1:
face_down
emote_exclamation_mark
step_end

MtMoon_3F_Azul_move3:
walk_in_place_right
walk_in_place_left
step_end

MtMoon_3F_Azul_move3.1:
walk_in_place_right
walk_in_place_down
step_end

MtMoon_3F_Azul_move4:
walk_left
walk_down
walk_down
walk_down
step_end

MtMoon_3F_Azul_move4.1:
walk_down
walk_down
walk_down
step_end

MtMoon_3F_Azul_move5:
emote_exclamation_mark
walk_in_place_down
face_up
step_end

MtMoon_3F_Azul_move6:
face_down
step_end

MtMoon_3F_Azul_move7:
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MtMoon_3F_Fosil::
removeobject 10
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
playfanfare MUS_OBTAIN_ITEM
msgbox MtMoon_3F_Fosil_text_1 MSGBOX_DEFAULT
waitfanfare
msgbox MtMoon_3F_Fosil_text_2 MSGBOX_DEFAULT
setvar VAR_UNUSED_0x40F7, 14
release
end

MtMoon_3F_Fosil_text_1:
.string "DU ERHÄLTST EIN DOMFOSSIL!!$"

MtMoon_3F_Fosil_text_2:
	.string "-Ich habe jetzt ein DOMFOSSIL. Ich\n"
	.string "sollte meinen Vorgesetzten darüber\l"
	.string "informieren.-$"



MtMoon_3F_Miguel_Rojo::
lockall
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move1
waitmovement 0
addobject 13
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_2
applymovement 13, MtMoon_3F_Miguel_Rojo_move2
waitmovement 0
delay 10
msgbox MtMoon_3F_Miguel_Rojo_text_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move4
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move5
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_4 MSGBOX_AUTOCLOSE
applymovement 13, MtMoon_3F_Miguel_Rojo_move6
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 12
delay 10
applymovement 13, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_5 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3

MtMoon_3F_Miguel_Rojo_3::
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
msgbox MtMoon_3F_Miguel_Rojo_text_7 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move8
waitmovement 0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move8.9
waitmovement 0
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_1
addobject 1
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move9
applymovement 13, MtMoon_3F_Miguel_Rojo_move10
waitmovement 0
playse 495
msgbox MtMoon_3F_Miguel_Rojo_text_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_2
trainerbattle_no_intro TRAINER_KEVIN, MtMoon_3F_Miguel_Rojo_text_9
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move11
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_10 MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move7
waitmovement 0
playse SE_PIN
applymovement 13, MtMoon_3F_Miguel_Rojo_move3
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_11 MSGBOX_AUTOCLOSE
playse SE_PC_OFF
waitse
delay 20
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move12
waitmovement 0
delay 40
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_3
addobject 20
applymovement 20, MtMoon_3F_Miguel_Rojo_move13
waitmovement 0
msgbox MtMoon_3F_Miguel_Rojo_text_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 16
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
setflag FLAG_HIDE_UNION_ROOM_PLAYER_1
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
trainerbattle_no_intro TRAINER_ROJO_1, MtMoon_3F_Miguel_Rojo_text_13
goto MtMoon_3F_Miguel_Rojo_3
end

MtMoon_3F_Miguel_Rojo_move8.9:
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_2::
msgbox MtMoon_3F_Miguel_Rojo_text_14 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Miguel_Rojo_text_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq MtMoon_3F_Miguel_Rojo_2
goto MtMoon_3F_Miguel_Rojo_3
release
end

MtMoon_3F_Miguel_Rojo_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Miguel_Rojo_move1.1
waitmovement 0
goto MtMoon_3F_Miguel_Rojo
release
end

MtMoon_3F_Miguel_Rojo_text_1:
.string "Hast du etwas verloren, ROCKET?\n"
	.string "{PAUSE 10}…{PAUSE 10}\l"
	.string "{PAUSE 10}…{PAUSE 10}$"

MtMoon_3F_Miguel_Rojo_text_2:
	.string "Wirklich? Du sammelst FOSSILIEN und\n"
	.string "trägst eins mit dir?$"

MtMoon_3F_Miguel_Rojo_text_3:
	.string "-Ha! Diese ROCKETs sind echt dämlich,\n"
	.string "was? Wenn ich meine Karten richtig\l"
	.string "spiele, werde ich hier mit zwei\l"
	.string "FOSSILIEN hinausspazieren.-$"

MtMoon_3F_Miguel_Rojo_text_4:
	.string "Hey, ROCKET! Ich mache dir ein Angebot.$"

MtMoon_3F_Miguel_Rojo_text_5:
	.string "Das da drüben ist ein HELIXFOSSIL. Es\n"
	.string "sind die Überreste eines AMONITAS - ein\l"
	.string "urzeitliches POKéMON, das vor 300\l"
	.string "Millionen Jahren gelebt hat. Du willst\l"
	.string "schnelles Geld machen? Gut, dann lass\l"
	.string "uns unsere FOSSILIEN gegeneinander\l"
	.string "wetten. Der Gewinner kriegt beide.$"

MtMoon_3F_Miguel_Rojo_text_6:
.string "Was sagst du? Haben wir eine Abmachung?$"

MtMoon_3F_Miguel_Rojo_text_7:
	.string "Ich habe nichts anderes von einem\n"
	.string "ROCKET erwartet. Alea jacta est - die\l"
	.string "Würfel sind gefallen. Der Gewinner\l"
	.string "bekommt beide FOSSILIEN. Jetzt leg\l"
	.string "deins neben meins, um das Geschäft zu\l"
	.string "besiegeln.$"

MtMoon_3F_Miguel_Rojo_text_8:
	.string "Ha! Und damit hast du dir dein eigenes\n"
	.string "Grab geschaufelt! Meine POKéMON werden\l"
	.string "niemals gegen einen durchschnittlichen\l"
	.string "RÜPEL verlieren! Danke, dass du mir das\l"
	.string "DOMFOSSIL auf dem Silbertablett\l"
	.string "serviert hast! Fantastisch! Dank dir\l"
	.string "werde ich heute mit einem DOM- und\l"
	.string "HELIXFOSSIL nach Hause gehen!$"

MtMoon_3F_Miguel_Rojo_text_9:
	.string "Das hätte eine einfache Angelegenheit\n"
	.string "sein sollen!$"

MtMoon_3F_Miguel_Rojo_text_10:
	.string "Grr… Du bist kein gewöhnlicher ROCKET!\n"
	.string "Ich hasse es, wenn irgendein\l"
	.string "dahergelaufener Möchtegern sämtlichen\l"
	.string "Statistiken trotzt.\p"
	.string "Was die FOSSILIEN angeht{PAUSE 5}…{PAUSE 5}$"

MtMoon_3F_Miguel_Rojo_text_11:
	.string "Achtung, {PLAYER}!! Ein gefährlicher\n"
	.string "TRAINER ist gerade aufgetaucht! Er hat\l"
	.string "uns alle mühelos besiegt und ist auf\l"
	.string "dem Weg zu dir! Beschütze das FOSSIL\l"
	.string "mit deinem Leben! Ich wiederhole:\p"
	.string "Beschütze das FOSSIL mit deinem Leben!\n"
	.string "Das ist ein Befehl!$"

MtMoon_3F_Miguel_Rojo_text_12:
.string "????: {PAUSE 45}…{PAUSE 45}$"

MtMoon_3F_Miguel_Rojo_text_13:
.string "{PAUSE 45}…{PAUSE 45}$"

MtMoon_3F_Miguel_Rojo_text_14:
	.string "Und ich dachte, ihr ROCKETs würdet\n"
	.string "weder Risiko noch Wetten scheuen.\p"
	.string "Willst du etwa deinem\n"
	.string "Verbrecher-Dasein untreu werden? Komm\l"
	.string "schon, denk nochmal drüber nach!$"

MtMoon_3F_Miguel_Rojo_move1:
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move1.1:
walk_left
face_up
step_end

MtMoon_3F_Miguel_Rojo_move2:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_in_place_down
delay_4
step_end

MtMoon_3F_Miguel_Rojo_move3:
emote_exclamation_mark
step_end

MtMoon_3F_Miguel_Rojo_move4:
face_up
step_end

MtMoon_3F_Miguel_Rojo_move5:
face_down
walk_in_place_down
step_end

MtMoon_3F_Miguel_Rojo_move6:
walk_right
walk_up
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move7:
walk_down
step_end

MtMoon_3F_Miguel_Rojo_move8:
walk_up
walk_up
walk_up
walk_up
walk_in_place_up
step_end

MtMoon_3F_Miguel_Rojo_move9:
walk_down
walk_in_place_right
step_end

MtMoon_3F_Miguel_Rojo_move10:
face_left
step_end

MtMoon_3F_Miguel_Rojo_move11:
face_right
step_end

MtMoon_3F_Miguel_Rojo_move12:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_left
walk_left
walk_in_place_down
step_end

MtMoon_3F_Miguel_Rojo_move13:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

MtMoon_3F_Pelea_Frank::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_2::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.1
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_3::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.2
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2.1
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5

MtMoon_3F_Pelea_Frank_4::
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move1.3
waitmovement 0
delay 10
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move2.1
waitmovement 0
playse MUS_RG_ROCKET_HIDEOUT
waitfanfare
goto MtMoon_3F_Pelea_Frank_5



MtMoon_3F_Pelea_Frank_5::
msgbox MtMoon_3F_Pelea_Frank_texto1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move3
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move4
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto3 MSGBOX_AUTOCLOSE
applymovement 17, MtMoon_3F_Pelea_Frank_move5
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move6
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto4 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto5 MSGBOX_AUTOCLOSE
delay 15
applymovement 14, MtMoon_3F_Pelea_Frank_move7
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto6 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MtMoon_3F_Pelea_Frank_move3
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move4
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto7 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 14, MtMoon_3F_Pelea_Frank_move8
waitmovement 0
playse 495
msgbox MtMoon_3F_Pelea_Frank_texto8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ALTORANGO, MtMoon_3F_Pelea_Frank_texto9
msgbox MtMoon_3F_Pelea_Frank_texto10 MSGBOX_AUTOCLOSE
applymovement 14, MtMoon_3F_Pelea_Frank_move9
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto11 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
fadescreen 1
delay 20
removeobject 16
removeobject 15
removeobject 14
removeobject 19
removeobject 18
fadescreen 0
delay 20
applymovement 17, MtMoon_3F_Pelea_Frank_move10
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto12 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto13 MSGBOX_AUTOCLOSE
playse SE_POKENAV_ON
applymovement 17, MtMoon_3F_Pelea_Frank_move11
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto14 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto15 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto16 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto17 MSGBOX_AUTOCLOSE
msgbox MtMoon_3F_Pelea_Frank_texto18 MSGBOX_AUTOCLOSE
playse SE_PC_OFF
waitse
delay 20
applymovement 17, MtMoon_3F_Pelea_Frank_move12
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto19 MSGBOX_AUTOCLOSE
delay 15
msgbox MtMoon_3F_Pelea_Frank_texto19.1 MSGBOX_AUTOCLOSE
delay 15
msgbox MtMoon_3F_Pelea_Frank_texto19.2 MSGBOX_AUTOCLOSE
applymovement 17, MtMoon_3F_Pelea_Frank_move13
waitmovement 0
msgbox MtMoon_3F_Pelea_Frank_texto20 MSGBOX_AUTOCLOSE
fadescreen 1
delay 20
removeobject 17
fadescreen 0
setvar VAR_UNUSED_0x40F7, 18
setvar VAR_UNUSED_0x40FC, 1
release
end

MtMoon_3F_Pelea_Frank_texto1:
	.string "HOCHRANGIGER RÜPEL FRANK: Du hast\n"
	.string "echt Nerven, hier wieder aufzutauchen!\p"
	.string "Du hattest einen Befehl, {PLAYER}:\n"
	.string "Das FOSSIL mit deinem Leben zu\l"
	.string "beschützen, und du hast auf ganzer\l"
	.string "Linie versagt! Hast du irgendetwas zu\l"
	.string "deiner Verteidigung zu sagen?$"

MtMoon_3F_Pelea_Frank_texto2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}\l"
	.string "{PAUSE 15}…{PAUSE 15}$"

MtMoon_3F_Pelea_Frank_texto3:
	.string "DU HATTEST ZWEI FOSSILIEN IN DEINEM\n"
	.string "BESITZ!! Und dann hast du dich von\l"
	.string "irgendeinem Streber übers Ohr hauen\l"
	.string "lassen, nur um direkt danach gegen den\l"
	.string "mysteriösen TRAINER zu verlieren!!\p"
	.string "Deine Inkompetenz macht mich krank!\p"
	.string "Ich werde LAMBDA raten, dich sofort aus\n"
	.string "TEAM ROCKET rauszuwerfen! Ein\l"
	.string "unfähiges Stück Scheiße wie du hat in\l"
	.string "dieser Organisation nichts verloren!$"

MtMoon_3F_Pelea_Frank_texto4:
	.string "ANDRA: Entschuldigung, dass ich Sie\n"
	.string "unterbreche, Sir. Aber ich habe\l"
	.string "{PLAYER} kämpfen sehen und er ist\l"
	.string "nicht so schwach, wie Sie denken.\p"
	.string "Jeder, der gegen diesen mysteriösen\n"
	.string "TRAINER angetreten ist, wurde beinahe\l"
	.string "augenblicklich besiegt - ohne\l"
	.string "Ausnahme. Es wäre also sehr unfair, nur\l"
	.string "ihn dafür zu bestrafen. Außerdem haben\l"
	.string "wir immer noch zwei FOSSILIEN. Also ist\l"
	.string "es nicht ganz so schlimm.$"

MtMoon_3F_Pelea_Frank_texto5:
	.string "HOCHRANGIGER RÜPEL FRANK: Wir urteilen\n"
	.string "hier nicht über seine Stärke als\l"
	.string "TRAINER, ANDRA, sondern über seinen\l"
	.string "Mangel an Raffinesse und Intelligenz,\l"
	.string "diese Situation zu meistern.$"

MtMoon_3F_Pelea_Frank_texto6:
	.string "traducir$"

MtMoon_3F_Pelea_Frank_texto7:
	.string "traducir$"

MtMoon_3F_Pelea_Frank_texto8:
	.string "traducir$"

MtMoon_3F_Pelea_Frank_texto9:
	.string "Ich, ein hochrangiges Mitglied dieser\n"
	.string "Organisation, besiegt von einem\l"
	.string "gewöhnlichen RÜPEL?!$"

MtMoon_3F_Pelea_Frank_texto10:
.string "Das ist inakzeptabel…{PAUSE 5}$"

MtMoon_3F_Pelea_Frank_texto11:
	.string "traducir$"

MtMoon_3F_Pelea_Frank_texto12:
	.string "ANDRA: Krass! Siehst du das? Alle sind\n"
	.string "völlig baff! FRANK ist bekannt dafür,\l"
	.string "Neulinge ohne Gnade zu testen, aber du\l"
	.string "hast dich nicht unterkriegen lassen\l"
	.string "und ihm ordentlich die Stirn geboten!$"

MtMoon_3F_Pelea_Frank_texto13:
	.string "Ich bin dem mysteriösen TRAINER leider\n"
	.string "nicht begegnet. Er hatte ein GLUTEXO?\p"
	.string "Sieht so aus, als hätten wir es hier mit\n"
	.string "einem harten Gegner zu tun. Wir sollten\l"
	.string "besser noch mehr trainieren, damit uns\l"
	.string "dieser Knirps nicht nochmal so\l"
	.string "bloßstellt wie heute. Aber was wird wohl\l"
	.string "LAMBDA sagen? FRANK hat dich in seinem\l"
	.string "Bericht bestimmt so schlecht wie\l"
	.string "möglich dargestellt, also schau, dass du\l"
	.string "so schnell wie möglich in die Basis\l"
	.string "kommst und deine Seite der Dinge\l"
	.string "erklärst!$"

MtMoon_3F_Pelea_Frank_texto14:
	.string "LAMBDA: RÜPEL ANDRA!$"

MtMoon_3F_Pelea_Frank_texto15:
	.string "ANDRA: Ja, Sir! Was gibt es?$"

MtMoon_3F_Pelea_Frank_texto16:
	.string "LAMBDA: Du wurdest mit sechs weiteren\n"
	.string "RÜPELN für eine Mission eingeteilt.\p"
	.string "Brich sofort nach ORANIA CITY auf.\n"
	.string "Die Details erfährst du unterwegs.\l"
	.string "Ist RÜPEL {PLAYER} anwesend?$"

MtMoon_3F_Pelea_Frank_texto17:
	.string "ANDRA: Verstanden! Ja, RÜPEL\n"
	.string "{PLAYER} ist hier, SIR.$"

MtMoon_3F_Pelea_Frank_texto18:
	.string "LAMBDA: Sag ihm, dass ich ihn sofort in\n"
	.string "meinem Büro sprechen will! Abmarsch!$"

MtMoon_3F_Pelea_Frank_texto19:
	.string "ANDRA: Du hast ihn gehört. Es scheint,\n"
	.string "als hätten wir dieses Mal\l"
	.string "unterschiedliche Missionen zu\l"
	.string "erledigen.$"

MtMoon_3F_Pelea_Frank_texto19.1:
	.string "… …$"

MtMoon_3F_Pelea_Frank_texto19.2:
	.string "traducir$"

MtMoon_3F_Pelea_Frank_texto20:
	.string "Das nächste Mal, wenn wir uns treffen,\n"
	.string "hoffe ich, dass dein Team nicht\l"
	.string "wiederzuerkennen ist, denn meins wird\l"
	.string "viel stärker sein. Man sieht sich,\l"
	.string "EILAND FÜNF Kamerad!$"

MtMoon_3F_Pelea_Frank_move1:
walk_down
walk_down
walk_right
walk_down
walk_down
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.1:
walk_down
walk_down
walk_down
walk_down
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.2:
walk_up
walk_right
walk_up
walk_up
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move1.3:
walk_up
walk_up
walk_up
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move2:
walk_in_place_up
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move2.1:
walk_in_place_down
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move3:
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move4:
emote_exclamation_mark
step_end

MtMoon_3F_Pelea_Frank_move5:
walk_right
step_end

MtMoon_3F_Pelea_Frank_move6:
emote_exclamation_mark
walk_in_place_left
step_end

MtMoon_3F_Pelea_Frank_move7:
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move8:
emote_exclamation_mark
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move9:
walk_in_place_up
walk_in_place_down
walk_in_place_left
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move10:
walk_right
walk_right
step_end

MtMoon_3F_Pelea_Frank_move11:
emote_exclamation_mark
walk_fast_down
step_end

MtMoon_3F_Pelea_Frank_move12:
walk_slow_up
walk_in_place_right
step_end

MtMoon_3F_Pelea_Frank_move13:
walk_in_place_left
walk_in_place_right
step_end
