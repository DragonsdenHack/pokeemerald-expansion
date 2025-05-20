PewterCity_Musem_2F_MapScripts::
	.byte 0

PewterMuseum2F_1::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_1, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_1:
.string "Ich hätte gerne ein PIKACHU!\n"
    .string "Es ist so furchtbar süß!\p"
    .string "Mein Papa soll mir eines fangen!$"



PewterMuseum2F_2::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_2, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_2:
	.string "Ja, ein PIKACHU! Ich verspreche,\n"
	.string "ich fange eins!$"



PewterMuseum2F_3::
end



PewterMuseum2F_4::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_4, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_4:
	.string "MONDSTEIN, was? Was ist daran so\n"
	.string "besonders? Sieht für mich wie ein\l"
	.string "normaler Stein aus.$"



PewterMuseum2F_5::
lock     
faceplayer     
msgbox PewterCity_Museum_Text_5, MSGBOX_DEFAULT
release     
end

PewterCity_Museum_Text_5:
	.string "Diesen Monat läuft unsere\n"
	.string "Weltraumausstellung, zu der du\l"
	.string "selbstverständlich eingeladen bist.\l"
	.string "NICHT!$"


PewterMuseum2FDocumento_100::
msgbox PewterMuseum2FDocumento_Text_100, MSGBOX_SIGN   
end

PewterMuseum2FDocumento_Text_100:
.string "Space Shuttle$"



PewterMuseum2FDocumento_101::
msgbox PewterMuseum2FDocumento_Text_101, MSGBOX_SIGN   
end

PewterMuseum2FDocumento_Text_101:
.string "A meteorite that fell on MT. MOON.\n"
    .string "It is thought to be a MOON STONE.$"

PewterCity_Musem_2F_Secundaria_Azafran::
lock
faceplayer
compare VAR_ROUTE133_STATE, 2
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_3
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_ROUTE133_STATE, 1
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_2
release
end

PewterCity_Musem_2F_Secundaria_Azafran_2::
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, PewterCity_Musem_2F_Secundaria_Azafran_move_1
waitmovement 0x0
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_4 MSGBOX_AUTOCLOSE
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_5 MSGBOX_AUTOCLOSE
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq PewterCity_Musem_2F_Secundaria_Azafran_No
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_7 MSGBOX_AUTOCLOSE
release
end


PewterCity_Musem_2F_Secundaria_Azafran_No::
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_8 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_ISABELLE, PewterCity_Musem_2F_Secundaria_Azafran_Texto_9
delay 15
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 3, PewterCity_Musem_2F_Secundaria_Azafran_move_1
waitmovement 0x0
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_11 MSGBOX_AUTOCLOSE
delay 20
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE133_STATE, 2
release
end




PewterCity_Musem_2F_Secundaria_Azafran_3::
msgbox PewterCity_Musem_2F_Secundaria_Azafran_Texto_2 MSGBOX_AUTOCLOSE
release
end















PewterCity_Musem_2F_Secundaria_Azafran_move_1:
emote_exclamation_mark
step_end

PewterCity_Musem_2F_Secundaria_Azafran_Texto_1:
	.string "Der 20. Juli 1969! Die erste\n"
	.string "Mondlandung! Für die\l"
	.string "Fernsehübertragung hatte ich extra\l"
	.string "einen Farbfernseher gekauft!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_2:
	.string "Merkt euch das, TEAM ROCKET! Ihr habt\n"
	.string "es nur geschafft, die Schließung der\l"
	.string "Tunnelpfade hinauszuzögern. In drei\l"
	.string "Jahren wird es keine Spur mehr von\l"
	.string "ihnen geben!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_4:
	.string "Bist du im Namen der BIKER gekommen, um\n"
	.string "mir zu sagen, dass ich die TUNNELPFADE\l"
	.string "nicht anrühren soll?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_5:
	.string "Ich sage es ganz deutlich, Kleiner!\p"
	.string "Ich bin den ganzen Weg von JOHTO\n"
	.string "hergekommen! Eure internen Konflikte\l"
	.string "sind mir scheißegal! Ob du zu TEAM\l"
	.string "ROCKET oder den BIKERN gehörst, ist mir\l"
	.string "scheißegal! Ist doch beides sowieso\l"
	.string "dasselbe! Es ist nichts Persönliches!\p"
	.string "Es geht nur ums Geschäft! Das Einzige,\n"
	.string "wovor diese BIKER Angst haben, ist,\l"
	.string "dass ihr kleiner Schwarzmarkt, den\l"
	.string "sie da unten aufgebaut haben,\l"
	.string "zusammenbricht! Aber das interessiert\l"
	.string "mich nicht die Bohne!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_6:
	.string "Du siehst wie jemand aus, der Verstand\n"
	.string "hat und etwas bei TEAM ROCKET zu sagen\l"
	.string "hat. Du musst diesen BIKERN nicht\l"
	.string "helfen. Deine Interessen müssen nicht\l"
	.string "meinen im Weg stehen. Was denkst du?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_7:
	.string "Genau das meine ich! Vielleicht kommen\n"
	.string "wir ja doch noch ins Geschäft, Kleiner!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_8:
	.string "Wie schade, dass es so enden muss. Naja,\n"
	.string "egal. Meine POKéMON und ich werden eine\l"
	.string "Lektion erteilen, die du nicht so\l"
	.string "schnell vergessen wirst!$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_9:
	.string "Ist das Licht meines AMPHAROS\n"
	.string "erloschen?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_10:
	.string "Ich hätte nicht gedacht, dass es,\n"
	.string "abgesehen von den ARENALEITERN, so\l"
	.string "starke Trainer in KANTO gibt. Diese\l"
	.string "Region hat mehr zu bieten, als ich\l"
	.string "dachte {PAUSE 5}…{PAUSE 5}$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_11:
	.string "Was!? Du arbeitest direkt unter\n"
	.string "GIOVANNI und hast eine der wichtigsten\l"
	.string "Positionen bei TEAM ROCKET inne?\p"
	.string "Und wenn ich meine Pläne, diese\n"
	.string "unterirdischen Wege zu entfernen,\l"
	.string "nicht aufgebe, wirst du GIOVANNI\l"
	.string "davon berichten?$"

PewterCity_Musem_2F_Secundaria_Azafran_Texto_12:
	.string "Okay, okay. Entspann dich, Mann!\p"
	.string "Ich denke, das ist alles ein großes\n"
	.string "Missverständnis! Der Bau der Schienen\l"
	.string "für den Magnetzug wird noch ein paar\l"
	.string "Jahre dauern. Die Tunnelpfade sind mir\l"
	.string "im Moment egal. Darüber kann man sich\l"
	.string "auch später noch Gedanken machen.\p"
	.string "Findest du nicht auch?$"
