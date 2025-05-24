CeladonCity_House1_2F_MapScripts::
	.byte 0

CeladonMansion2F_1::
end



CeladonMansion2FDocumento_100::
msgbox CeladonMansion2FDocumento_Text_100, MSGBOX_SIGN   
end

CeladonMansion2FDocumento_Text_100:
.string "GAME FREAK Konferenzraum$"

CeladonCity_House1_2F_Secundaria_Magikarp::
lock
faceplayer
compare VAR_UNUSED_0x409D, 1
goto_if_gt CeladonCity_House1_2F_Secundaria_Magikarp_4
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409D, 1
goto_if_eq CeladonCity_House1_2F_Secundaria_Magikarp_2
release
end

CeladonCity_House1_2F_Secundaria_Magikarp_2::
delay 20
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CeladonCity_House1_2F_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CeladonCity_House1_2F_Secundaria_Magikarp_3
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_7 MSGBOX_AUTOCLOSE
release
end


CeladonCity_House1_2F_Secundaria_Magikarp_3::
playse 495
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_DOMADOR, CeladonCity_House1_2F_Secundaria_Magikarp_Texto_9
delay 15
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CeladonCity_House1_2F_Secundaria_Magikarp_Move_1
waitmovement 0x0
waitse
delay 10
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 2
release
end

CeladonCity_House1_2F_Secundaria_Magikarp_4::
msgbox CeladonCity_House1_2F_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
release
end

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_1:
	.string "Was willst denn du KLEINKRIMINELLER\n"
	.string "hier? Sehe dich gut um! Abschaum wie du\l"
	.string "wird niemals so eine Villa besitzen! Und\l"
	.string "jetzt verschwinde, bevor ich die Geduld\l"
	.string "verliere und dich und deine mickrigen\l"
	.string "POKéMON ins Krankenhaus befördere!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_2:
	.string "Du hast mein Wort. Dieser ANGLER und\n"
	.string "seine ANGEL gehören für mich von nun\l"
	.string "an der Vergangenheit an.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_4:
	.string "Hat dich der ANGLER von ORANIA CITY zu\n"
	.string "mir geschickt, um sich an meinen\l"
	.string "Aussagen bezüglich seiner ANGEL zu\l"
	.string "rächen?\p"
	.string "Ist das ein schlechter Scherz?!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_5:
	.string "Jemand wie du kann doch nichts gegen\n"
	.string "meine POKéMON, ausrichten, die für die\l"
	.string "große Bühne trainiert wurden.\p"
	.string "Du bist sogar in deiner schändlichen\n"
	.string "Organisation ein Niemand. Was willst du\l"
	.string "machen? Mit deinem erbärmlichen ZUBAT\l"
	.string "BISS einsetzen und dann hilflos\l"
	.string "zusehen, wie ich meinem SANDAMER\l"
	.string "befehle, mit seinem SCHLITZER deine\l"
	.string "POKéMON einen nach dem anderen auf\l"
	.string "die Bretter zu schicken?$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_6:
	.string "Es steht dir immer noch frei, es dir\n"
	.string "anders zu überlegen. Du hast Glück,\l"
	.string "dass ich heute gute Laune habe. Wenn du\l"
	.string "jetzt verschwindest, bin ich bereit,\l"
	.string "deine dreiste Aktion zu vergessen.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_7:
	.string "Scheint so, als gäbe es noch ROCKETs\n"
	.string "mit intakten Gehirnen. Und jetzt mach\l"
	.string "dich vom Acker, bevor ich es mir anders\l"
	.string "überlege!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_8:
	.string "Du hast meine Geduld überstrapaziert,\n"
	.string "Bursche! Ich werde dich dorthin\l"
	.string "zurückschicken, wo Gesindel wie du\l"
	.string "hingehören: in die Kanalisation von\l"
	.string "PRISMANIA CITY!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_9:
.string "SANDAMER! ARBOK!\n"
	.string "KÄMPFT WEITER!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_10:
	.string "Grrrrr{PAUSE 20}…{PAUSE 20}  Ich hätte nicht erwartet, dass\n"
	.string "ein RÜPEL von TEAM ROCKET so stark sein\l"
	.string "könnte. Dieser ANGLER kann sich\l"
	.string "glücklich schätzen, dass er dir\l"
	.string "begegnet ist.$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_11:
	.string "Wie ist das möglich?! Du musst eine\n"
	.string "bedeutende Rolle in deiner Organisation\l"
	.string "innehaben! Was? Wenn ich nicht aufhöre,\l"
	.string "den ANGLER öffentlich niederzumachen,\l"
	.string "wirst du all deine Macht und deinen\l"
	.string "Einfluss nutzen, um meine Geschäfte zu\l"
	.string "ruinieren?!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Texto_12:
	.string "In Ordnung! Du hast gewonnen! Ich\n"
	.string "werde nichts mehr über seine dumme\l"
	.string "ANGEL sagen, die nur KARPADOR an Land\l"
	.string "zieht! Ich gebe dir mein Wort!\p"
	.string "Aber halte dich gefälligst von\n"
	.string "meinen Geschäften fern!$"

CeladonCity_House1_2F_Secundaria_Magikarp_Move_1:
emote_exclamation_mark
step_end
