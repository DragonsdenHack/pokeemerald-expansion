Route10_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, Route10_OnTransition
	.byte 0
	
Route10_OnTransition::
setflag FLAG_VISITED_ROUTE_10_FLY
end

Route10_1::
end



Route10_2::
end


Route10_3::
end


Route10_4::
end


Route10_5::
lock         
msgbox Route5_Text_5, MSGBOX_SIGN
release     
end

Route5_Text_5:
	.string "Denkst du überhaupt nach, bevor du\n"
	.string "sprichst? Es gibt an diesem Ort keine\l"
	.string "KANGAMA! Weißt du, was das bedeuten\l"
	.string "würde? Die SAFARI-ZONE würde für immer\l"
	.string "dicht machen und nicht nur das! Leute\l"
	.string "würden anfangen, Nachforschungen\l"
	.string "anzustellen, woher sie stammen.\p"
	.string "So ein POKéMON taucht nicht einfach\n"
	.string "aus dem Nichts auf.$"



Route10_6::
lock          
msgbox Route5_Text_6, MSGBOX_SIGN
release     
end

Route5_Text_6:
	.string "Ich schwöre, ich habe hier ein\n"
	.string "KANGAMA gesehen!$"


Route10_7::
lock     
faceplayer     
msgbox Route5_Text_7, MSGBOX_DEFAULT
release     
end

Route5_Text_7:
	.string "Das KRAFTWERK gilt als Erbe unserer\n"
	.string "Region. Es wird gerade von der Polizei\l"
	.string "bewacht und ist für Erkundungen nicht\l"
	.string "zugänglich. Versuche besser keine\l"
	.string "Dummheiten, sonst wirst du\l"
	.string "strafrechtlich verfolgt.$"



Route10_8::
lock     
faceplayer     
msgbox Route5_Text_8, MSGBOX_DEFAULT
release     
end

Route5_Text_8:
	.string "Das KRAFTWERK gilt als Erbe unserer\n"
	.string "Region. Es wird gerade von der Polizei\l"
	.string "bewacht und ist für Erkundungen nicht\l"
	.string "zugänglich. Versuche besser keine\l"
	.string "Dummheiten, sonst wirst du\l"
	.string "strafrechtlich verfolgt.$"


Route10_9::
end


Route10_10::
end


Route10_11::
end


Route10_12::
end


Route10_13::
end



Route10_EventScript_Chica::
	trainerbattle_single TRAINER_MATTHEW, Route10_Text_ChicaIntro, Route10_Text_ChicaDefeated
	msgbox Route10_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker::
	trainerbattle_single TRAINER_BARRY, Route10_Text_HikerIntro, Route10_Text_HikerDefeated
	msgbox Route10_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Necio::
	trainerbattle_single TRAINER_DEAN, Route10_Text_NecioIntro, Route10_Text_NecioDefeated
	msgbox Route10_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker2::
	trainerbattle_single TRAINER_DAISUKE, Route10_Text_Hiker2Intro, Route10_Text_Hiker2Defeated
	msgbox Route10_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Hiker3::
	trainerbattle_single TRAINER_YUJI, Route10_Text_Hiker3Intro, Route10_Text_Hiker3Defeated
	msgbox Route10_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end



Route10_EventScript_Chica2::
	trainerbattle_single TRAINER_DAVID, Route10_Text_Chica2Intro, Route10_Text_Chica2Defeated
	msgbox Route10_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



Route10Documento_100::
msgbox Route10Documento_Text_100, MSGBOX_SIGN   
end

Route10Documento_Text_100:
.string "ROCK TUNNEL\n"
    .string "Detour to LAVENDER TOWN$"



Route10Documento_101::
msgbox Route10Documento_Text_101, MSGBOX_SIGN   
end

Route10Documento_Text_101:
.string "POWER PLANT$"



Route10Documento_102::
msgbox Route10Documento_Text_102, MSGBOX_SIGN   
end

Route10Documento_Text_102:
.string "ROCK TUNNEL$"

Route10_Combate_Andra::
lock
faceplayer
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_1
waitmovement 0x0
playse SE_PIN
applymovement 14, Route10_Combate_Andra_move_2
waitmovement 0x0
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
playse 559
msgbox Route10_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route10_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
delay 10
msgbox Route10_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route10_Combate_Andra_move_4
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route10_Combate_Andra_move_5
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox Route10_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Route10_Combate_Andra_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
msgbox Route10_Combate_Andra_Texto_4.2 MSGBOX_AUTOCLOSE
delay 10
msgbox Route10_Combate_Andra_Texto_4.3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 20
msgbox Route10_Combate_Andra_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route10_Combate_Andra_move_6
waitmovement 0x0
special RemoveCameraObject
msgbox Route10_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 14, Route10_Combate_Andra_move_2
waitmovement 0x0
applymovement 14, Route10_Combate_Andra_move_3
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_1
waitmovement 0
playse 559
msgbox Route10_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox Route10_Combate_Andra_Texto_8.1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ANDRA_3, Route10_Combate_Andra_Texto_9
msgbox Route10_Combate_Andra_Texto_10 MSGBOX_AUTOCLOSE
applymovement 14, Route10_Combate_Andra_move_3
waitmovement 0x0
msgbox Route10_Combate_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, Route10_Combate_Andra_move_3.1
waitmovement 0x0
waitse
delay 10
msgbox Route10_Combate_Andra_Texto_11.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 14, Route10_Combate_Andra_move_7
waitmovement 0x0
msgbox Route10_Combate_Andra_Texto_12 MSGBOX_AUTOCLOSE
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route10_Combate_Andra_move_7.2
applymovement 14, Route10_Combate_Andra_move_7.1
waitmovement 0x0
setflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_RIVAL_BEDROOM
removeobject 14
setvar VAR_UNUSED_0x40F7, 34
release
end

Route10_Combate_Andra_move_7.2:
delay_16
face_up
delay_16
delay_16
face_right
delay_16
delay_16
delay_16
face_up
step_end

Route10_Combate_Andra_move_7.1:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Route10_Combate_Andra_move_3.1:
walk_in_place_down
face_player
step_end

Route10_Combate_Andra_Texto_1:
	.string "ANDRA: Hey, {PLAYER}! Genießt du\n"
	.string "deine wohlverdiente Pause, nachdem\l"
	.string "wir ausgezeichnete Arbeit geleistet\l"
	.string "haben?$"

Route10_Combate_Andra_Texto_2:
	.string "Scheinbar befindet sich LAVANDIA\n"
	.string "südlich von dieser Route, hinter dem\l"
	.string "FELSTUNNEL. Die Stadt ist berühmt für\l"
	.string "ihren riesigen Friedhof und angeblich\l"
	.string "bösen Geistern.\p"
	.string "Könnte die Legende wahr sein?$"

Route10_Combate_Andra_Texto_3:
	.string "Jedenfalls ist KANTO interessanter, als\n"
	.string "ich dachte. Schau dir allein diesen Ort\l"
	.string "an.$"

Route10_Combate_Andra_Texto_4:
.string "Dieser Ort wird KRAFTWERK genannt.$"

Route10_Combate_Andra_Texto_4.1:
	.string "Es ist voller ELEKTRO-POKéMON. Ich\n"
	.string "habe hier bis vor Kurzem intensiv\l"
	.string "trainiert. Es ist ein vollkommen\l"
	.string "verlassener Ort, mit VOLTOBAL, die\l"
	.string "einfach explodieren und mit\l"
	.string "Stahlbehältern, die radioaktiv zu sein\l"
	.string "scheinen. Auch MAGNETILO und MAGNETON\l"
	.string "schweben dort herum {PAUSE 25}…{PAUSE 25}$"

Route10_Combate_Andra_Texto_4.2:
	.string "Offenbar wurden dort in der\n"
	.string "Vergangenheit einige fragwürdige\l"
	.string "Experimente durchgeführt. Warum genau,\l"
	.string "weiß niemand. Jedenfalls konnte ich\l"
	.string "nicht weiter vordringen. Die Polizei ist\l"
	.string "vor Kurzem mit einem offiziellen\l"
	.string "Beschluss aufgetaucht, unterzeichnet\l"
	.string "von der LIGA-LEITUNG\l"
	.string "höchstpersönlich, um das KRAFTWERK\l"
	.string "abzusichern.$"
	
Route10_Combate_Andra_Texto_4.3:
	.string "Der offizielle Grund ist, dass sie die\n"
	.string "wichtigsten Orte und die Artenvielfalt\l"
	.string "der Region schützen wollen. Das Witzige\l"
	.string "ist, dass sie wahrscheinlich jedem\l"
	.string "x-beliebigen 10-jährigen Wicht\l"
	.string "erlauben, sich dort rumzutreiben.$"

Route10_Combate_Andra_Texto_5:
.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

Route10_Combate_Andra_Texto_6:
	.string "ANDRA: Fakt ist, dass dieser Ort etwas\n"
	.string "verbirgt. Ich habe dort drinnen eine\l"
	.string "sehr mächtige Präsenz verspürt - ein\l"
	.string "Wesen, dass scheinbar nahezu unendlich\l"
	.string "viel Energie erzeugen kann.\p"
	.string "Könnte es ein ELEKTRO-POKéMON mit\n"
	.string "solchen Eigenschaften geben? Wäre ich\l"
	.string "nur ein kleines Stück weitergegangen {PAUSE 5}…{PAUSE 5}$"

Route10_Combate_Andra_Texto_7:
	.string "Wir könnten Giovanni, zu gegebener Zeit\n"
	.string "versteht sich, einen Überfall auf das\l"
	.string "KRAFTWERK vorschlagen. Natürlich\l"
	.string "müssen wir ihn zuvor von unseren\l"
	.string "Fähigkeiten überzeugen. Aber ein\l"
	.string "POKéMON mit so einer bedrohlichen Aura\l"
	.string "muss unglaublich stark sein. Vielleicht\l"
	.string "wissen unsere Vorgesetzten in KANTO\l"
	.string "mehr.$"

Route10_Combate_Andra_Texto_8:
	.string "Jetzt, wo ich darüber nachdenke, fällt\n"
	.string "mir auf, dass es eine Weile her ist, seit\l"
	.string "wir das letzte Mal gegeneinander\l"
	.string "gekämpft haben. Es steht außer Frage,\l"
	.string "dass du alle Erwartungen übertroffen\l"
	.string "hast, als du unseren Vorgesetzten auf\l"
	.string "dem MONDBERG besiegt hast. Darüber\l"
	.string "hinaus auch BILL und dann auch den so\l"
	.string "fähigen KAPITÄN der M.S. ANNE.$"

Route10_Combate_Andra_Texto_8.1:
	.string "Aber {PAUSE 25}...{PAUSE 25} weißt du was? Ich bin nicht auf\n"
	.string "der Strecke geblieben, {PLAYER}! Ich\l"
	.string "habe es dir gesagt! Ich habe dir gesagt,\l"
	.string "dass ich der stärkste RÜPEL der ganzen\l"
	.string "Organisation werden würde und ich halte\l"
	.string "immer meine Versprechen! Jetzt sind wir\l"
	.string "HOCHRANGIGE Rüpel! Die Frage ist {PAUSE 15}…{PAUSE 15} wer\l"
	.string "ist der beste HOCHRANGIGE RÜPEL!$"

Route10_Combate_Andra_Texto_9:
	.string "Ich bin also immer noch nicht stark\n"
	.string "genug, haha. Danke, dass du die\l"
	.string "Messlatte höher legst.$"

Route10_Combate_Andra_Texto_10:
	.string "Dich will ich nicht zum Feind haben,\n"
	.string "{PLAYER}. Ich kann es immer noch\l"
	.string "nicht fassen, dass dich dieser\l"
	.string "mysteriöse - in rot gekleidete -\l"
	.string "TRAINER besiegt hat. Er muss\l"
	.string "außergewöhnliches Talent haben.$"

Route10_Combate_Andra_Texto_11:
	.string "Naja, ist auch egal. Dieser Bube hat\n"
	.string "keine Ahnung, mit wem er sich anlegt.\p"
	.string "Wir werden nun nach PRISMANIA CITY\n"
	.string "versetzt, wo sich die Hauptbasis von\l"
	.string "TEAM ROCKET befindet.\p"
	.string "Wir werden endlich Teil der Elite\n"
	.string "von TEAM ROCKET sein.$"

Route10_Combate_Andra_Texto_11.1:
	.string "Diesem Knirps wird es noch leidtun, dass\n"
	.string "sich unsere Wege auf dem MONDBERG\l"
	.string "gekreuzt haben.$"

Route10_Combate_Andra_Texto_12:
	.string "ANDRA: Naja, ich gehe zurück ins\n"
	.string "Hauptquartier, {PLAYER}. Die\l"
	.string "Teleportationsmaschine sollte fast\l"
	.string "bereit sein. Mach dich bereit und komm\l"
	.string "nicht zu spät: PRISMANIA-CITY WARTET\l"
	.string "SCHON AUF UNS!$"

Route10_Combate_Andra_move_1:
walk_in_place_left
step_end

Route10_Combate_Andra_move_2:
emote_exclamation_mark
step_end

Route10_Combate_Andra_move_3:
walk_in_place_right
step_end

Route10_Combate_Andra_move_4:
walk_in_place_down
step_end

Route10_Combate_Andra_move_5:
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
walk_left
step_end

Route10_Combate_Andra_move_6:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_right
step_end

Route10_Combate_Andra_move_7:
walk_in_place_up
walk_in_place_right
face_player
step_end

Route10_Combate_Andra_move_8:
walk_up
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

Route10Documento_Andra_Parada::
msgbox Route10Documento_Andra_Parada_text_1, MSGBOX_SIGN   
end

Route10Documento_Andra_Parada_text_1:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

Route10_Entrenadores_Guays::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Route10_Entrenadores_Guays_Move_1
waitmovement 0x0
msgbox Route10_Entrenadores_Guays_Texto_1 MSGBOX_AUTOCLOSE
applymovement 15, Route10_Entrenadores_Guays_Move_2
applymovement 16, Route10_Entrenadores_Guays_Move_2
waitmovement 0x0
removeobject 15
removeobject 16
setflag FLAG_HIDE_ROUTE_101_ZIGZAGOON
setvar VAR_UNUSED_0x40F7, 40
release
end

Route10_Entrenadores_Guays_Texto_1:
	.string "Offenbar sind hier bereits Leute, die\n"
	.string "die Höhle erkunden, um das KANGAMA zu\l"
	.string "finden. Das Gerücht hat sich verdammt\l"
	.string "schnell rumgesprochen. Beeilen wir uns,\l"
	.string "bevor uns noch jemand zuvorkommt!$"

Route10_Entrenadores_Guays_Move_1:
walk_in_place_up
step_end

Route10_Entrenadores_Guays_Move_2:
walk_up
walk_up
walk_up
step_end
