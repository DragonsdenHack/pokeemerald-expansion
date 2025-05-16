SsAnne_4F_MapScripts::
	.byte 0

SsAnne4F_1::
lock     
faceplayer     
msgbox SsAnne4F_Text_1, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_1:
.string "Die Party ist ein voller Erfolg!$"



SsAnne4F_2::
lock     
faceplayer     
msgbox SsAnne4F_Text_2, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_2:
.string "Die Party ist ein voller Erfolg!$"



SsAnne4F_3::
lock         
msgbox SsAnne4F_Text_3, MSGBOX_SIGN
release     
end

SsAnne4F_Text_3:
	.string "Wir machen das Beste aus unserer Zeit\n"
	.string "hier! Wie viel wir von ihr haben,\l"
	.string "spielt doch keine Rolle!$"

SsAnne4F_4::
lock         
msgbox SsAnne4F_Text_4, MSGBOX_SIGN
release     
end

SsAnne4F_Text_4:
	.string "Ein Toast auf alles, was wir in diesen 70\n"
	.string "langen Jahren erlebt haben und auf\l"
	.string "alles, was noch vor uns liegt! Wer hätte\l"
	.string "sich träumen lassen, dass wir nach\l"
	.string "allem, was wir durchgemacht haben, hier\l"
	.string "im Jahr 1996 sitzen würden - mit allem,\l"
	.string "was wir uns je erträumt haben!$"

SsAnne4F_5::
lock          
msgbox SsAnne4F_Text_5, MSGBOX_SIGN
release     
end

SsAnne4F_Text_5:
	.string "Erlebnisse sind unbezahlbar, mein\n"
	.string "Lieber. Es gibt keinen Preis der Welt,\l"
	.string "der dem Wert dieses Moments\l"
	.string "gleichkommen könnte. Also lasst\l"
	.string "uns das Beste daraus machen!$"



SsAnne4F_6::
lock          
msgbox SsAnne4F_Text_6, MSGBOX_SIGN
release     
end

SsAnne4F_Text_6:
	.string "Oh … Bist du dir sicher, dass wir\n"
	.string "uns dieses Menü leisten können?$"



SsAnne4F_7::
lock          
msgbox SsAnne4F_Text_7, MSGBOX_SIGN
release     
end

SsAnne4F_Text_7:
	.string "Sie mögen also Risiko, Mr. FUJITA. Ich\n"
	.string "werde Ihnen ein Angebot machen, das Sie\l"
	.string "nicht ablehnen können {PAUSE 5}…{PAUSE 5}$"



SsAnne4F_8::
lock          
msgbox SsAnne4F_Text_8, MSGBOX_SIGN
release     
end

SsAnne4F_Text_8:
	.string "Reden wir Klartext, Mr. NOMURA. Ich kann\n"
	.string "20 % Ihrer Anteile kaufen oder auch\l"
	.string "gleich alle. Ich kann ebenfalls in\l"
	.string "dieses Geschäft hier einsteigen und Sie\l"
	.string "ruinieren. Die Wahl liegt ganz bei Ihnen.$"




SsAnne4F_9::
lock     
faceplayer     
msgbox SsAnne4F_Text_9, MSGBOX_DEFAULT
release     
end

SsAnne4F_Text_9:
.string "Ist alles in Ordnung bei Ihnen, Sir?$"



SsAnne4F_10::
lock          
msgbox SsAnne4F_Text_10, MSGBOX_SIGN
release     
end

SsAnne4F_Text_10:
	.string "Das Beste an dieser Art von Partys ist\n"
	.string "das Essen. Ich kann jedem nur\l"
	.string "wärmstens den gesalzenen TOHAIDO\l"
	.string "empfehlen. Er ist exquisit und\l"
	.string "nirgendwo sonst in KANTO zu finden!$"



SsAnne4F_11::
lock          
msgbox SsAnne4F_Text_11, MSGBOX_SIGN
release     
end

SsAnne4F_Text_11:
	.string "Beeil dich oder die besten Gerichte\n"
	.string "werden weg sein! Wer zu spät kommt,\l"
	.string "den bestraft das Leben!$"



SsAnne4F_12::
end



SsAnne4F_13::
lock          
msgbox SsAnne4F_Text_13, MSGBOX_SIGN
release     
end

SsAnne4F_Text_13:
	.string "Also wenn man mich fragt, ist der\n"
	.string "TAUROS-Schwanzeintopf das beste\l"
	.string "Gericht überhaupt!$"



SsAnne4F_14::
lock          
msgbox SsAnne4F_Text_14, MSGBOX_SIGN
release     
end

SsAnne4F_Text_14:
	.string "Ach! Es ist immer dasselbe mit dir! Du\n"
	.string "bestellst jeden Tag dasselbe Gericht im\l"
	.string "Restaurant in PRISMANIA! Du solltest\l"
	.string "diese Gelegenheit nutzen, um mal etwas\l"
	.string "Neues auszuprobieren! Wie zum Beispiel\l"
	.string "das gegrillte AALABYSS, das ich\l"
	.string "bestellt habe. Es ist köstlich! Man sagt\l"
	.string "sich, dass die Meere von HOENN die\l"
	.string "vielfältigsten Arten beherbergen und\l"
	.string "eine unvergleichbare Flora und Fauna\l"
	.string "besitzen!$"

SsAnne_4F_Combate_Azul::
msgbox SsAnne_4F_Combate_Azul_text_1 MSGBOX_DEFAULT
delay 10
msgbox SsAnne_4F_Combate_Azul_text_1.1 MSGBOX_DEFAULT
delay 15
playse SE_PIN
applymovement 12, SsAnne_4F_Combate_Azul_move1
waitmovement 0x0
waitse
msgbox SsAnne_4F_Combate_Azul_text_2 MSGBOX_DEFAULT
delay 10
msgbox SsAnne_4F_Combate_Azul_text_2.1 MSGBOX_DEFAULT
delay 10
applymovement 12, SsAnne_4F_Combate_Azul_move2
waitmovement 0x0
playse 527
msgbox SsAnne_4F_Combate_Azul_text_3 MSGBOX_DEFAULT
delay 10
applymovement 12, SsAnne_4F_Combate_Azul_move1.1
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_3.1 MSGBOX_DEFAULT
delay 10
trainerbattle_no_intro TRAINER_AZUL_1, SsAnne_4F_Combate_Azul_text_4
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_4F_Combate_Azul_move3
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_5 MSGBOX_AUTOCLOSE
applymovement 12, SsAnne_4F_Combate_Azul_move3
waitmovement 0x0
msgbox SsAnne_4F_Combate_Azul_text_6 MSGBOX_AUTOCLOSE
playbgm 528, FALSE
applymovement OBJ_EVENT_ID_PLAYER, SsAnne_4F_Combate_Azul_move4
waitmovement 0x0
applymovement 12, SsAnne_4F_Combate_Azul_move5
waitmovement 0x0
playse SE_EXIT
waitse
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_5
setflag FLAG_HIDE_PETALBURG_WOODS_DEVON_EMPLOYEE
removeobject 12
fadedefaultbgm
release
end

SsAnne_4F_Combate_Azul_text_1:
	.string "????: Diese Parties erweisen sich immer\n"
	.string "als reinste Zeitverschwendung. Ich bin\l"
	.string "hierhergekommen, um gegen Trainer aus\l"
	.string "aller Welt zu kämpfen! Aber alles, was\l"
	.string "ich hier gefunden habe, sind die\l"
	.string "üblichen Verdächtigen:\p"
	.string "TAUBSI, RATTFRATZ und NIDORAN!$"

SsAnne_4F_Combate_Azul_text_1.1:
	.string "Sogar die Matrosen der M.S. ANNE haben\n"
	.string "nur TENTACHA!\p"
	.string "Das ist doch Verarsche!$"

SsAnne_4F_Combate_Azul_text_2:
	.string "Bist du nicht der ROCKET, dem ich beim\n"
	.string "MONDBERG das FOSSIL geschenkt habe?$"

SsAnne_4F_Combate_Azul_text_2.1:
	.string "Ich spare mir die Frage, wie jemand wie\n"
	.string "du es an Bord dieses Schiffs geschafft\l"
	.string "hat. Ich bin mir sicher, dass du dich\l"
	.string "hier irgendwie eingeschlichen hast.\p"
	.string "Ganz ehrlich? Könnte mir nicht egaler\n"
	.string "sein.$"

SsAnne_4F_Combate_Azul_text_3:
	.string "Auf dem MONDBERG habe ich ein Auge\n"
	.string "zugedrückt, als es um die\l"
	.string "Mittelmäßigkeit von deinesgleichen\l"
	.string "ging und trotzdem hattest du die\l"
	.string "Nerven, mir eine Moralpredigt zu halten!\p"
	.string "Du weißt, was das zur Folge hat, oder?$"

SsAnne_4F_Combate_Azul_text_3.1:
	.string "Mal sehen, ob du nur ein weiterer\n"
	.string "nichtsnutziger Rüpel bist oder ob du\l"
	.string "tatsächlich was drauf hast!\p"
	.string "Mach dich bereit, ROCKET!$"

SsAnne_4F_Combate_Azul_text_4:
	.string "Habe ich gerade ernsthaft gegen\n"
	.string "einen ROCKET verloren?$"

SsAnne_4F_Combate_Azul_text_5:
.string "{PAUSE 20}…{PAUSE 20}\n"
	.string "{PAUSE 20}…{PAUSE 20}\p"
	.string "Du bist also kein gewöhnlicher ROCKET {PAUSE 15}…{PAUSE 15}\n"
	.string "Einer von den HOCHRANGIGEN, was? Ganz\l"
	.string "ehrlich. Ihr seht für mich alle gleich\l"
	.string "aus. Aber ich gebe es zu. Du bist der\l"
	.string "Einzige, der mich bisher besiegen\l"
	.string "konnte, abgesehen von diesem\l"
	.string "Hinterwäldler ROT. Ich schätze, ich\l"
	.string "werde dich ab jetzt im Auge behalten.$"

SsAnne_4F_Combate_Azul_text_6:
	.string "????: Bah. Ich glaube, ich werde noch\n"
	.string "durch die Kabinen schlendern und sehen,\l"
	.string "ob mir hier irgendjemand einen auch nur\l"
	.string "ansatzweise interessanten Kampf\l"
	.string "liefern kann. Ich bezweifle es.$"

SsAnne_4F_Combate_Azul_move1:
emote_exclamation_mark
face_down
step_end

SsAnne_4F_Combate_Azul_move1.1:
walk_in_place_down
step_end

SsAnne_4F_Combate_Azul_move2:
walk_in_place_right
walk_in_place_down
step_end

SsAnne_4F_Combate_Azul_move3:
face_up
step_end

SsAnne_4F_Combate_Azul_move4:
walk_left
walk_in_place_right
step_end

SsAnne_4F_Combate_Azul_move5:
walk_down
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
step_end
