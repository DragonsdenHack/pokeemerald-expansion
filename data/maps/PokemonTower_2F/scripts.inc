PokemonTower_2F_MapScripts::
	.byte 0

PokemonTower2F_2::
lock     
faceplayer     
msgbox PokemonTower2F_Text_2, MSGBOX_DEFAULT
release     
end

PokemonTower2F_Text_2:
	.string "Selbst wir können die eigenwilligen\n"
	.string "GEISTER nicht identifizieren!\p"
	.string "Man benötigt das SILPH SCOPE, um\n"
	.string "sie zu erkennen!$"

PokemonTower2F_1::
lock     
faceplayer     
msgbox PokemonTower2F_Text_1, MSGBOX_DEFAULT
release     
end

PokemonTower2F_Text_1:
	.string "Kümmere dich um deinen eigenen Kram,\n"
	.string "{PLAYER}! Niemand darf den obersten\l"
	.string "Flur betreten!$"

PokemonTower2F_Azul::
lock
faceplayer
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1.1
applymovement 1, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_4
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
delay 15
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 3
delay 20
playse SE_PIN
applymovement 1, PokemonTower2F_Azul_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 3, PokemonTower2F_Azul_Move_5
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_6
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_6
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_2
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_7
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 3
delay 20
applymovement 1, PokemonTower2F_Azul_Move_8
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 46
release
end

PokemonTower2F_Azul_2::
lock
faceplayer
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1.2
applymovement 1, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_1 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_2 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_4.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_5 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_6 MSGBOX_AUTOCLOSE
applymovement 1, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower2F_Azul_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
clearflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
addobject 3
delay 20
playse SE_PIN
applymovement 1, PokemonTower2F_Azul_Move_1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_1
waitmovement 0x0
applymovement 1, PokemonTower2F_Azul_Move_5.1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_5.1
waitmovement 0x0
applymovement 3, PokemonTower2F_Azul_Move_6.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_8 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_2.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, PokemonTower2F_Azul_Move_7.1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_RUSTBORO_CITY_AQUA_GRUNT
removeobject 3
delay 20
applymovement 1, PokemonTower2F_Azul_Move_4.1
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower2F_Azul_Move_3.1
waitmovement 0x0
msgbox PokemonTower2F_Azul_Texto_11 MSGBOX_AUTOCLOSE
msgbox PokemonTower2F_Azul_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 46
release
end

PokemonTower2F_Azul_Texto_1:
.string "BLAU: Du bist also schon hier…$"

PokemonTower2F_Azul_Texto_2:
	.string "Die anderen ROCKETs sind schon oben,\n"
	.string "machen Krach und fangen TRAGOSSO.\p"
	.string "Wenn dieser FUJI diesen Ort hier\n"
	.string "wirklich so sehr liebt, sollte er\l"
	.string "schon bald hier auftauchen.$"

PokemonTower2F_Azul_Texto_3:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower2F_Azul_Texto_4:
	.string "Pass mal auf. Ich bin nicht Teil eurer\n"
	.string "Organisation. Ich bin nur jemand, der\n"
	.string "ab und zu ein paar spezielle Arbeiten\l"
	.string "verrichtet und Gefallen erwidert.\p"
	.string "Kapiert?$"

PokemonTower2F_Azul_Texto_5:
	.string "Ich will nur stärker werden und eines\n"
	.string "Tages der CHAMPION von KANTO sein.\p"
	.string "TEAM ROCKET kann mir dabei helfen, die\n"
	.string "vielen Geheimnisse, die die Region\l"
	.string "verbirgt, zu enthüllen und mir die\l"
	.string "nötigen Mittel verschaffen, die hier\l"
	.string "sonst keiner rausrückt.$"

PokemonTower2F_Azul_Texto_6:
	.string "Auf diese Weise werde ich ein für alle\n"
	.string "Mal beweisen, dass ich besser bin als\l"
	.string "ROT, sodass ROT {PAUSE 5}…{PAUSE 5}$"

PokemonTower2F_Azul_Texto_7:
	.string "Mein Großvater EICH hat ihn mir immer\n"
	.string "vorgezogen. Ich aber habe ein\l"
	.string "schlechtes Gefühl, was ihn angeht.$"
	
PokemonTower2F_Azul_Texto_7.1:
	.string "Niemand kann so perfekt sein! Er\n"
	.string "scheint immer alles im Griff zu haben,\l"
	.string "alle möglichen Optionen im Kampf zu\l"
	.string "berücksichtigen, und dieses Schweigen\l"
	.string "{PAUSE 15}…{PAUSE 15} Das ist das Nervigste. Er bemüht sich\l"
	.string "nicht mal, ein Gespräch mit dir\l"
	.string "anzufangen. Er kommt, besiegt dich und\l"
	.string "lässt dich dann einfach stehen, als\l"
	.string "wärst du für ihn nur eine lästige\l"
	.string "Formalität, bevor er zum nächsten Ziel\l"
	.string "weiterzieht.$"
	
PokemonTower2F_Azul_Texto_7.2:
	.string "Es scheint {PAUSE 15}…{PAUSE 15} als würde er einfach davon\n"
	.string "ausgehen, dass er jeden besiegen wird\l"
	.string "und sich die Sache damit erledigt\l"
	.string "hätte! Doch {PAUSE 15}…{PAUSE 15} ich weigere mich, bloß ein\l"
	.string "weiteres Glied in der Kette zu sein!\p"
	.string "Kein TRAINER ist unbesiegbar, nicht\n"
	.string "einmal er! Und ich werde es beweisen!$"

PokemonTower2F_Azul_Texto_8:
	.string "MR. FUJI: Die Exorzistinnen haben mir\n"
	.string "berichtet, dass TEAM ROCKET die\l"
	.string "Schädel von TRAGOSSO sammelt. Weißt\l"
	.string "du etwas darüber, junger Mann?$"

PokemonTower2F_Azul_Texto_9:
	.string "BLAU: Ich habe mitbekommen, dass sie\n"
	.string "oben im vierten Stock sind, Opa.$"

PokemonTower2F_Azul_Texto_10:
	.string "MR. FUJI: Ich hoffe, du machst nicht\n"
	.string "den Fehler, deinen Freunden zu helfen,\l"
	.string "Kleiner. Ich habe nichts gegen euch\l"
	.string "alle, aber ich werde euch nicht\l"
	.string "erlauben, die Ruhe dieses Ortes\l"
	.string "zu stören.$"

PokemonTower2F_Azul_Texto_11:
	.string "BLAU: Cool, der erste Teil der Mission\n"
	.string "ist erledigt, {PLAYER}. FUJI hat den\l"
	.string "Köder geschluckt. Jetzt musst du nur\l"
	.string "noch dafür sorgen, dass er hier bleibt,\l"
	.string "bis LANCE auftaucht.$"

PokemonTower2F_Azul_Texto_12:
	.string "Was mich betrifft. Ich bleibe hier, wie\n"
	.string "GIOVANNI es gesagt hat. Ich werde dich\l"
	.string "warnen, wenn ROT hierher kommt.\p"
	.string "Keine Sorge, ich werde ihn für eine\n"
	.string "Weile beschäftigen.$"

PokemonTower2F_Azul_Move_1:
emote_exclamation_mark
step_end

PokemonTower2F_Azul_Move_1.1:
walk_in_place_up
step_end

PokemonTower2F_Azul_Move_1.2:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_2:
walk_in_place_down
step_end

PokemonTower2F_Azul_Move_2.1:
face_right
step_end

PokemonTower2F_Azul_Move_3:
face_up
step_end

PokemonTower2F_Azul_Move_3.1:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_4:
walk_in_place_left
step_end

PokemonTower2F_Azul_Move_4.1:
walk_in_place_right
step_end


PokemonTower2F_Azul_Move_5:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_left
step_end

PokemonTower2F_Azul_Move_5.1:
face_down
step_end

PokemonTower2F_Azul_Move_6:
face_right
step_end

PokemonTower2F_Azul_Move_6.1:
walk_slow_up
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_up
walk_slow_up
step_end

PokemonTower2F_Azul_Move_7:
walk_slow_up
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end

PokemonTower2F_Azul_Move_7.1:
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
walk_slow_left
step_end


PokemonTower2F_Azul_Move_8:
face_down
step_end

