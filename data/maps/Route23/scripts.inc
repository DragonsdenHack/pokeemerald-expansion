Route23_MapScripts::
	.byte 0

Route23_1::
end

Route23_2::
end

Route23_3::
end

Route23_4::
end


Route23_5::
end

Route23_6::
end

Route23_7::
end



Route23_EventScript_Policia::
	trainerbattle_single TRAINER_ELLIOT_5, Route23_Text_PoliciaIntro, Route23_Text_PoliciaDefeated
	msgbox Route23_Text_PoliciaPostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia2::
	trainerbattle_single TRAINER_RONALD, Route23_Text_Policia2Intro, Route23_Text_Policia2Defeated
	msgbox Route23_Text_Policia2PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia3::
	trainerbattle_single TRAINER_MARIA_1, Route23_Text_Policia3Intro, Route23_Text_Policia3Defeated
	msgbox Route23_Text_Policia3PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia4::
	trainerbattle_single TRAINER_MARIA_2, Route23_Text_Policia4Intro, Route23_Text_Policia4Defeated
	msgbox Route23_Text_Policia4PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia5::
	trainerbattle_single TRAINER_MARIA_3, Route23_Text_Policia5Intro, Route23_Text_Policia5Defeated
	msgbox Route23_Text_Policia5PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia6::
	trainerbattle_single TRAINER_MARIA_4, Route23_Text_Policia6Intro, Route23_Text_Policia6Defeated
	msgbox Route23_Text_Policia6PostBattle, MSGBOX_AUTOCLOSE
	end



Route23_EventScript_Policia7::
	trainerbattle_single TRAINER_MARIA_5, Route23_Text_Policia7Intro, Route23_Text_Policia7Defeated
	msgbox Route23_Text_Policia7PostBattle, MSGBOX_AUTOCLOSE
	end



Route23Documento_100::
msgbox Route23Documento_Text_100, MSGBOX_SIGN   
end

Route23Documento_Text_100:
.string "VICTORY ROAD GATE -\n"
    .string "POKÉMON LEAGUE$"

Ruta23_No_Puedes_Pasar::
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruta23_No_Puedes_Pasar_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruta23_No_Puedes_Pasar_Texto_1:
	.string "-I should see what GIOVANNI wants\n"
	.string "from me before facing such important\l"
	.string "challenge.-$"

Route23_Llamada_Giovanni::
playse SE_POKENAV_CALL
applymovement OBJ_EVENT_ID_PLAYER, Route23_Llamada_Giovanni_Move_1
waitmovement 0x0
waitse
delay 10
playse SE_POKENAV_HANG_UP
waitse
delay 10
msgbox Route23_Llamada_Giovanni_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route23_Llamada_Giovanni_Texto_2 MSGBOX_AUTOCLOSE
delay 10
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
playse SE_PC_OFF
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 92
release
end

Route23_Llamada_Giovanni_Texto_1:
	.string "GIOVANNI: {PLAYER}? Du hast also alle\n"
	.string "acht ORDEN. ATLAS hat mir bereits von\l"
	.string "deinen Kämpfen in der VERTANIA-BASIS\l"
	.string "berichtet. Du bist bereit, die POKéMON\l"
	.string "LIGA herauszufordern.$"

Route23_Llamada_Giovanni_Texto_2:
	.string "Allerdings gibt es noch etwas, das du\n"
	.string "sehen solltest, bevor du weitergehst.\p"
	.string "Ich werde auf dich in unserem\n"
	.string "SPEZIAL-TRAININGSRAUM warten. Es\l"
	.string "liegt gleich links von meinem Büro.\p"
	.string "Lass dir nicht zu viel Zeit.$"


Route23_Llamada_Giovanni_Move_1:
emote_exclamation_mark
walk_in_place_down
step_end

Route23_Combate_Andra_Centro::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
waitse
delay 15
applymovement 8, Route23_Combate_Andra_Move_5
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra_Izq::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
delay 15
waitse
applymovement 8, Route23_Combate_Andra_Move_5.2
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra_Der::
playse SE_EXIT
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_1
waitmovement 0x0
delay 15
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
addobject 8
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route23_Combate_Andra_Move_2
applymovement 8, Route23_Combate_Andra_Move_2
waitmovement 0x0 
delay 15
applymovement 8, Route23_Combate_Andra_Move_5.1
waitmovement 0x0 
goto Route23_Combate_Andra

Route23_Combate_Andra::
msgbox Route23_Combate_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_3
waitmovement 0x0 
msgbox Route23_Combate_Andra_Texto_2 MSGBOX_AUTOCLOSE
msgbox Route23_Combate_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0 
msgbox Route23_Combate_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox Route23_Combate_Andra_Texto_4.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0
playse 559
msgbox Route23_Combate_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 10
msgbox Route23_Combate_Andra_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_ANDRA_6, Route23_Combate_Andra_Texto_6
msgbox Route23_Combate_Andra_Texto_7 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.1
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.2
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.2 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4.3
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_7.3 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_4
waitmovement 0x0
delay 10
msgbox Route23_Combate_Andra_Texto_8 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_7
waitmovement 0x0
delay 20
msgbox Route23_Combate_Andra_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 8, Route23_Combate_Andra_Move_7.1
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_4
removeobject 8
waitse
delay 10
setvar VAR_UNUSED_0x40F7, 91
release
end

Route23_Combate_Andra_Move_7.1:
walk_up
step_end

Route23_Combate_Andra_Move_4.3:
delay_8
face_up
delay_16
delay_8
face_down
delay_8
step_end

Route23_Combate_Andra_Move_4.1:
face_left
step_end

Route23_Combate_Andra_Move_4.2:
face_down
step_end

Route23_Combate_Andra_Texto_1:
	.string "ANDRA: Da bist du ja, {PLAYER}. War\n"
	.string "nicht gerade einfach, oder? Ich verrate\l"
	.string "dir ein Geheimnis: Ich habe mehrere\l"
	.string "Versuche gebraucht, um ATLAS zu\l"
	.string "besiegen und den ERDORDEN zu bekommen.\p"
	.string "Er war viel stärker als ich dachte.$"

Route23_Combate_Andra_Texto_2:
	.string "Aber wir können uns glücklich schätzen,\n"
	.string "dass jemand wie er in unserer\l"
	.string "Organisation eine Führungsposition\l"
	.string "innehat. BLAU und ROT hatten nie die\l"
	.string "Chance, gegen jemanden von seinem\l"
	.string "Kaliber zu kämpfen, bevor sie der TOP\l"
	.string "VIER gegenübertreten.\p"
	.string "Weißt du noch, wie er LORELEI\n"
	.string "im KRAFTWERK besiegt hat?$"

Route23_Combate_Andra_Texto_3:
	.string "Ich möchte gar nicht erst wissen, wie\n"
	.string "stark GIOVANNI mittlerweile ist. Er war\l"
	.string "in der Vergangenheit schon mehrmals\l"
	.string "CHAMP, und all das, was danach passiert\l"
	.string "ist, wird ihn nur noch stärker gemacht\l"
	.string "haben. Er ist beeindruckend.$"

Route23_Combate_Andra_Texto_4:
	.string "Wenn du dir etwas von der SIEGESSTRAßE\n"
	.string "versprochen hast, dann muss ich dich\l"
	.string "leider enttäuschen, {PLAYER}. Die\l"
	.string "Trainer dort sind gerade stark genug,\l"
	.string "um als leichtes Training durchzugehen.\p"
	.string "Ich fange langsam an zu glauben, dass\n"
	.string "viele von ihnen einfach ihre ORDEN auf\l"
	.string "dem Schwarzmarkt gekauft haben.$"

Route23_Combate_Andra_Texto_4.1:
	.string "traducir$"

Route23_Combate_Andra_Texto_5:
	.string "Aber ich kann noch ein bisschen\n"
	.string "trainieren, bevor ich die TOP VIER\l"
	.string "herausfordere. Es war ein langer und\l"
	.string "harter Weg, aber mein Team ist endlich\l"
	.string "vollständig. Sie müssen nur noch ein\l"
	.string "paar Level aufsteigen, und dann wird\l"
	.string "die TOP VIER keine Chance mehr gegen\l"
	.string "mich haben.$"

Route23_Combate_Andra_Texto_5.1:
	.string "traducir$"

Route23_Combate_Andra_Texto_6:
	.string "Dann bin ich also immer noch\n"
	.string "nicht bereit.$"

Route23_Combate_Andra_Texto_7:
	.string "Wow! Ich dachte, nachdem ich ein\n"
	.string "Unentschieden im Kampf gegen BLAU\l"
	.string "hatte, hätte ich eine Chance gegen\l"
	.string "dich.$"
	
Route23_Combate_Andra_Texto_7.1:
	.string "Wenn ich das nächste Mal gegen ihn\n"
	.string "kämpfe, um CHAMP zu werden, wird mein\l"
	.string "IKSBAT genug KP haben, um den Rückstoß\l"
	.string "von Sturzflug zu überleben, nachdem sie\l"
	.string "sein TURTOK besiegt hat.$"

Route23_Combate_Andra_Texto_7.2:
	.string "Was dich betrifft {PAUSE 25}…{PAUSE 25} hoffe ich, dich in\n"
	.string "meiner Nähe zu haben, wenn wir in die\l"
	.string "letzten Runden kommen. Du hast\l"
	.string "GIOVANNI gehört.$"

Route23_Combate_Andra_Texto_7.3:
	.string "SIEGFRIED ist unglaublich mächtig und\n"
	.string "ROT ist uns nach wie vor ein Mysterium.\p"
	.string "Es ist zwar lange her, seitdem wir ihm am\n"
	.string "MONDBERG begegnet sind, aber bis heute\l"
	.string "ist er der Einzige, der dich besiegen\l"
	.string "konnte {PAUSE 5}…{PAUSE 5}$"

Route23_Combate_Andra_Texto_8:
	.string "Wie auch immer, {PLAYER}. Ich wünsche\n"
	.string "dir viel Erfolg. Jetzt ist die Zeit\l"
	.string "gekommen, unsere POKéMON gegen die\l"
	.string "besten TRAINER auf die Probe zu\l"
	.string "stellen. Ich bin mir sicher, dass sie\l"
	.string "der Herausforderung gewachsen sind.$"

Route23_Combate_Andra_Texto_9:
	.string "Versuche das Meiste aus der\n"
	.string "SIEGESSTRAßE rauszuholen.\p"
	.string "Das nächste Mal werden wir uns auf\n"
	.string "dem Schlachtfeld sehen.$"

Route23_Combate_Andra_Move_1:
walk_in_place_up
step_end

Route23_Combate_Andra_Move_2:
emote_exclamation_mark
step_end

Route23_Combate_Andra_Move_3:
walk_in_place_left
step_end

Route23_Combate_Andra_Move_4:
walk_in_place_down
step_end

Route23_Combate_Andra_Move_5:
walk_down
step_end

Route23_Combate_Andra_Move_5.1:
walk_left
walk_down
step_end

Route23_Combate_Andra_Move_5.2:
walk_right
walk_down
step_end

Route23_Combate_Andra_Move_6:
face_up
step_end

Route23_Combate_Andra_Move_7:
walk_up
step_end
