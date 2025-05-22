CinnabarIsland_Laboratory1_MapScripts::
	.byte 0

CinnabarIslandLaboratory1_1::
lock     
faceplayer     
msgbox CinnabarIsland_Laboratory1_Text_1, MSGBOX_DEFAULT
release     
end

CinnabarIsland_Laboratory1_Text_1:
	.string "Wir erforschen hier POKéMON.\p"
	.string "Wir erstellen oft Gutachten über\n"
	.string "seltene POKéMON.$"



CinnabarIslandLaboratory1_2::
end



CinnabarIslandLaboratory1Documento_100::
msgbox CinnabarIslandLaboratory1Documento_Text_100, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_100:
.string "A photo of the LAB's founder…\n"
    .string "DR. FUJI?!$"




CinnabarIslandLaboratory1Documento_101::
msgbox CinnabarIslandLaboratory1Documento_Text_101, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_101:
.string "POKÉMON LAB\n"
    .string "Meeting Room$"



CinnabarIslandLaboratory1Documento_102::
msgbox CinnabarIslandLaboratory1Documento_Text_102, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_102:
.string "POKÉMON LAB\n"
    .string "R & D Room$"



CinnabarIslandLaboratory1Documento_103::
msgbox CinnabarIslandLaboratory1Documento_Text_103, MSGBOX_SIGN   
end

CinnabarIslandLaboratory1Documento_Text_103:
.string "POKÉMON LAB\n"
    .string "Testing Room$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee::
compare VAR_ROUTE127_STATE, 2
goto_if_eq CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_3
compare VAR_ROUTE127_STATE, 1
goto_if_eq CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_2
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_2 MSGBOX_NPC
delay 20
playse SE_PIN
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1
waitmovement 0x0
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_3
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_3 MSGBOX_NPC
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_10 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_No
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_11 MSGBOX_NPC
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_2
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_12 MSGBOX_NPC
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_3
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_13 MSGBOX_NPC
clearflag FLAG_HIDE_UNION_ROOM_PLAYER_4
setvar VAR_ROUTE127_STATE, 1
release
end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_3::
lock
faceplayer
delay 20
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_2 MSGBOX_NPC
delay 20
playse SE_PIN
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1
waitmovement 0x0
playse MUS_RG_OBTAIN_KEY_ITEM
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_4 MSGBOX_DEFAULT
waitse
playse SE_PIN
applymovement 2, CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1
waitmovement 0x0
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_5 MSGBOX_NPC
delay 20
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_6 MSGBOX_NPC
delay 10
playfanfare MUS_OBTAIN_TMHM
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_7 MSGBOX_DEFAULT
givemon SPECIES_EEVEE, 25, ITEM_MOON_STONE
givemon SPECIES_EEVEE, 25, ITEM_THUNDER_STONE
givemon SPECIES_EEVEE, 25, ITEM_FIRE_STONE
givemon SPECIES_EEVEE, 25, ITEM_WATER_STONE
givemon SPECIES_EEVEE, 25, ITEM_SUN_STONE
waitfanfare
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_8 MSGBOX_NPC
setflag FLAG_HIDE_VERDANTURF_TOWN_WANDAS_HOUSE_WALLY
fadescreen 1
delay 20
removeobject 2
fadescreen 0
release
end


CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_2::
lock
faceplayer
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_9 MSGBOX_NPC
release
end


CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_No::
msgbox CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_14 MSGBOX_NPC
release
end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_1:
emote_exclamation_mark
step_end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_2:
walk_in_place_up
step_end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Move_3:
face_player
step_end

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_1:
	.string "Ich kann's nicht glauben … Wie konnte\n"
	.string "er mich nur so hintergehen {PAUSE 5}…{PAUSE 5}$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_2:
.string "{PAUSE 10}…{PAUSE 10}\n"
	.string "{PAUSE 10}…{PAUSE 10}$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_3:
	.string "Warte! Du bist doch {PLAYER}, einer\n"
	.string "von den ganz hohen Tiere bei TEAM\l"
	.string "ROCKET, der den Überfall auf SILPH\l"
	.string "überhaupt erst möglich gemacht hat!\p"
	.string "Oder irre ich mich?!$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_4:
	.string "-{PLAYER} gibt dem WISSENSCHAFTLER\n"
	.string "60 EVOLI zurück!-$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_5:
	.string "Unfassbar! Also hast du ihn auf\n"
	.string "frischer Tat ertappt und die EVOLI an\l"
	.string "dich genommen, bevor er sie alle\l"
	.string "verkaufen konnte! Und du hast\l"
	.string "tatsächlich 60 retten können?\p"
	.string "Nicht schlecht!\p"
	.string "Es hätte viel schlimmer ausgehen\n"
	.string "können!\p"
	.string "Wenn du nicht gewesen wärst - wer\n"
	.string "weiß, was dann passiert wäre …$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_6:
	.string "Hier für dich OFFIZIER, {PLAYER}! Von\n"
	.string "den 60 EVOLI überlasse ich dir fünf.\p"
	.string "Du hast sie dir redlich verdient und ich\n"
	.string "bin mir sicher, dass du mehr aus ihnen\l"
	.string "rausholen wirst, als die Dreckskerle,\l"
	.string "die die anderen zehn gekauft haben!$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_7:
	.string "-DU ERHÄLTST FÜNF LEVEL 25 EVOLI!!-$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_8:
	.string "Wie auch immer. Mit 55 EVOLI kann ich\n"
	.string "nahezu die gleichen Ergebnisse erzielen\l"
	.string "wie mit 70. Außerdem arbeite ich nicht\l"
	.string "mehr mit diesem Taugenichts zusammen,\l"
	.string "sodass ich viel schneller Fortschritte\l"
	.string "machen und den gesamten Ruhm\l"
	.string "einheimsen werde, wenn ich meine\l"
	.string "Ergebnisse bei SILPH präsentiere!\p"
	.string "Ich werde nicht vergessen, was du\n"
	.string "für mich getan hast, {PLAYER}!\p"
	.string "Du hast meine Karriere als\n"
	.string "WISSENSCHAFTLER gerettet!$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_9:
	.string "Vergiss nicht, {PLAYER}. Er hält sich\n"
	.string "mit Sicherheit in einem der TUNNELPFADE\l"
	.string "auf. Entweder in dem zwischen\l"
	.string "PRISMANIA und LAVANDIA, oder dem\l"
	.string "zwischen AZURIA und ORANIA. Es kann\l"
	.string "nur einer dieser beiden sein! Beeil dich!$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_10:
	.string "Mein Kollege, ja mein Partner in dieser\n"
	.string "Forschung hat mich bestohlen! Nur\l"
	.string "jemand von deinem Rang kann mir noch\l"
	.string "helfen! Wenn du mir hilfst, verspreche\l"
	.string "ich dir, dass es sich für dich lohnen\l"
	.string "wird!$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_11:
	.string "Immer zu allem bereit! Das ist die\n"
	.string "richtige Einstellung! Ich zähle auf\l"
	.string "dich, OFFIZIER {PLAYER}! Mein Kollege\l"
	.string "und ich haben von SILPH eine große\l"
	.string "Anzahl von EVOLI erhalten, eines der\l"
	.string "seltensten POKéMON in dieser Region.\p"
	.string "Ziel der Forschung war es, ihren\n"
	.string "komplexen Evolutionsprozess zu\l"
	.string "erforschen - herauszufinden, warum sie\l"
	.string "sich je nach Umgebung in\l"
	.string "unterschiedliche Typen entwickeln und\l"
	.string "möglicherweise neue Evolutionswege zu\l"
	.string "entdecken, die bislang unbekannt sind.\p"
	.string "Doch dann {PAUSE 5}…{PAUSE 5}$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_12:
	.string "Doch dann, als ich es am wenigsten\n"
	.string "erwartet habe, von einem Tag auf den\l"
	.string "anderen, war mein Partner plötzlich wie\l"
	.string "vom Erdboden verschluckt - mit allen\l"
	.string "EVOLI! Höchstwahrscheinlich wird er\l"
	.string "versuchen, sie auf dem Schwarzmarkt zu\l"
	.string "verkaufen, da sie dort heiß begehrt\l"
	.string "sind. Mit den 70 EVOLI, die SILPH uns\l"
	.string "zur Verfügung gestellt hat, könnte er\l"
	.string "leicht 70.000.000¥ verdienen - je eine\l"
	.string "Million pro EVOLI. Das ist genug Geld,\l"
	.string "um KANTO für immer zu verlassen und\l"
	.string "spurlos zu verschwinden.$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_13:
	.string "Er hat mich nicht nur auf die\n"
	.string "schlimmstmögliche Weise hintergangen,\l"
	.string "sondern ich bin jetzt auch noch der\l"
	.string "Hauptverantwortliche, der sich vor\l"
	.string "SILPH verantworten muss, wenn die\l"
	.string "Sache nicht schnell geklärt wird und die\l"
	.string "EVOLI nicht wieder auftauchen. Meine\l"
	.string "Karriere als WISSCHENSCHAFTLER wäre\l"
	.string "innerhalb weniger Tage ruiniert!\p"
	.string "Deswegen bitte ich dich, {PLAYER},\n"
	.string "diesen niederträchtigen Verräter zu\l"
	.string "finden und mir die EVOLI\l"
	.string "zurückzubringen, bevor es zu spät ist\l"
	.string "und er sie alle verkauft hat.\p"
	.string "Du solltest ihn in den TUNNELPFADEN\n"
	.string "finden. Entweder in dem zwischen\l"
	.string "PRISMANIA und LAVANDIA oder dem\l"
	.string "zwischen AZURIA und ORANIA. Beeil dich,\l"
	.string "{PLAYER}, bitte! Je länger du zögerst,\l"
	.string "desto mehr EVOLI verlieren wir!$"

CinnabarIsland_Laboratory_1_Secundaria_Cientifico_Eevee_Texto_14:
	.string "Ach, ich verstehe schon. Du bist\n"
	.string "bestimmt schon mit zahlreichen anderen\l"
	.string "wichtigen Missionen beschäftigt.\p"
	.string "Wenn ich an GIOVANNIs Stelle wäre, würde\n"
	.string "ich jemanden wie dich mit allen meinen\l"
	.string "wichtigen Projekten betrauen. Nur falls\l"
	.string "du irgendwann Zeit hast, denke bitte an\l"
	.string "mein Anliegen!\p"
	.string "Denn je länger wir zögern, desto\n"
	.string "geringer wird unsere Chance sein, sie\l"
	.string "noch rechtzeitig zurückzuholen!$"

