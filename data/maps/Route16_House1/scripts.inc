Route16_House1_MapScripts::
	.byte 0

Route16House1_1::
end



Route16House1_2::
end

Route16_House1_Combate_Vuelo::
lock
faceplayer
compare VAR_UNUSED_0x40A1, 0
goto_if_gt Route16_House1_Combate_Vuelo_2
delay 10
playse SE_PIN
applymovement 1, Route16_House1_Combate_Vuelo_Move_1
waitmovement 0x0
msgbox Route16_House1_Combate_Vuelo_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_House1_Combate_Vuelo_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route16_House1_Combate_Vuelo_Texto_3 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route16_House1_Combate_Vuelo_3
msgbox Route16_House1_Combate_Vuelo_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_VUELO, Route16_House1_Combate_Vuelo_Texto_6
msgbox Route16_House1_Combate_Vuelo_Texto_7 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
additem ITEM_HM02_FLY
msgbox Route16_House1_Combate_Vuelo_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox Route16_House1_Combate_Vuelo_Texto_8 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40A1, 1
release
end

Route16_House1_Combate_Vuelo_Texto_1.1:
	.string "Du erhältst VM02 FLIEGEN vom\n"
	.string "VOGEL-PROFI!!$"

Route16_House1_Combate_Vuelo_2::
lock
faceplayer
msgbox Route16_House1_Combate_Vuelo_Texto_4 MSGBOX_AUTOCLOSE
release
end

Route16_House1_Combate_Vuelo_3::
lock
faceplayer
msgbox Route16_House1_Combate_Vuelo_Texto_9 MSGBOX_AUTOCLOSE
release
end

Route16_House1_Combate_Vuelo_Move_1:
emote_exclamation_mark
step_end

Route16_House1_Combate_Vuelo_Texto_1:
	.string "Oh, nein! Du hast mein Versteck\n"
	.string "gefunden! Hier trainiere ich heimlich\l"
	.string "meine geliebten FLUG-POKéMON. Mich hat\l"
	.string "schon immer fasziniert, wie viele\l"
	.string "verschiedene Arten es von ihnen gibt\l"
	.string "und wie sie sich entwickeln.$"

Route16_House1_Combate_Vuelo_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Route16_House1_Combate_Vuelo_Texto_3:
	.string "Schau mal. Wenn du niemanden etwas von\n"
	.string "diesem Versteck erzählst, könnte ich\l"
	.string "dich, falls du interessiert bist, in die\l"
	.string "Geheimnisse der stärksten Vögel der\l"
	.string "Region einweihen. Okay?$"

Route16_House1_Combate_Vuelo_Texto_4:
	.string "Ich denke, ich sollte mal meine\n"
	.string "Vorgehensweise ändern. Bis jetzt habe\l"
	.string "ich jedem, der diesen Ort gefunden hat,\l"
	.string "einfach eine VM02 als Geschenk\l"
	.string "gegeben. Einfach, weil ich den Wert\l"
	.string "meiner POKéMON kenne.\p"
	.string "Ab jetzt verfolge ich ein neues großes\n"
	.string "Ziel: Mein TAUBOGA zu einem TAUBOSS\l"
	.string "zu entwickeln, dem stärksten\l"
	.string "nicht-legendären Flug-POKéMON\l"
	.string "in ganz Kanto.$"

Route16_House1_Combate_Vuelo_Texto_5:
	.string "Cool! Es ist schon lange her, dass ich\n"
	.string "gegen einen anderen TRAINER gekämpft\l"
	.string "habe! Mach dich bereit! Mit diesem Team\l"
	.string "habe ich den FARBORDEN erhalten!$"

Route16_House1_Combate_Vuelo_Texto_6:
	.string "Oje! Nach diesem Kampf brauchen meine\n"
	.string "armen POKéMON dringend eine lange\l"
	.string "Pause.$"

Route16_House1_Combate_Vuelo_Texto_7:
	.string "Ich habe nicht damit gerechnet, zu\n"
	.string "verlieren. Entweder hat sich die Welt\l"
	.string "stark verändert seit ich mich\l"
	.string "zurückgezogen habe, oder du bist\l"
	.string "einfach ein sehr guter TRAINER … Mit\l"
	.string "deinen Fähigkeiten könntest du alle\l"
	.string "ORDEN sammeln. Jemand wie du muss das\l"
	.string "hier haben.$"

Route16_House1_Combate_Vuelo_Texto_8:
	.string "Die VM02 wird es dir erlauben, FLIEGEN\n"
	.string "sowohl innerhalb als auch außerhalb\l"
	.string "eines Kampfes einzusetzen. Glaub mir,\l"
	.string "du wirst es sehr zu schätzen lernen,\l"
	.string "wenn du von einer Stadt zur anderen\l"
	.string "musst.$"

Route16_House1_Combate_Vuelo_Texto_9:
	.string "Oh? Wirklich? Aber erzähle wenigstens\n"
	.string "niemanden von diesem Ort! Okay?$"
