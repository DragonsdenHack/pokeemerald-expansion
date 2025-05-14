VermilionCity_House1_MapScripts::
	.byte 0

VermilionCityHouse1_1::
end

VermilionCity_House1_Secundaria_Magikarp::
lock
faceplayer
compare VAR_UNUSED_0x409D, 3
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_4
compare VAR_UNUSED_0x409D, 2
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_3
compare VAR_UNUSED_0x409D, 1
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_2
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_1
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_3 MSGBOX_AUTOCLOSE
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq VermilionCity_House1_Secundaria_Magikarp_NO
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_2
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_3
waitmovement 0x0
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_12 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 1
release
end

VermilionCity_House1_Secundaria_Magikarp_NO::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_13 MSGBOX_AUTOCLOSE
release
end

VermilionCity_House1_Secundaria_Magikarp_2::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_8 MSGBOX_AUTOCLOSE
release
end

VermilionCity_House1_Secundaria_Magikarp_3::
delay 20
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, VermilionCity_House1_Secundaria_Magikarp_Move_1
waitmovement 0x0
waitse
delay 10
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playfanfare MUS_OBTAIN_TMHM
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_6 MSGBOX_DEFAULT
givemon SPECIES_MAGIKARP, 5, ITEM_RARE_CANDY
waitfanfare
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_7 MSGBOX_AUTOCLOSE
delay 10
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_7.1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409D, 3
release
end

VermilionCity_House1_Secundaria_Magikarp_4::
msgbox VermilionCity_House1_Secundaria_Magikarp_Texto_4 MSGBOX_AUTOCLOSE
release
end


VermilionCity_House1_Secundaria_Magikarp_Texto_1:
	.string "Dieser verdammte DOMPTEUR … Wegen ihm\n"
	.string "macht sich jeder über meine ANGEL\l"
	.string "lustig. Ich kann das nicht so stehen\l"
	.string "lassen, sonst heimsen meine Brüder noch\l"
	.string "den ganzen Erfolg ein {PAUSE 5}…{PAUSE 5}$"

VermilionCity_House1_Secundaria_Magikarp_Texto_2:
.string "…\n"
	.string "…$"

VermilionCity_House1_Secundaria_Magikarp_Texto_3:
	.string "Du bist von TEAM ROCKET! Für jemanden\n"
	.string "wie dich sollte es doch ein Kinderspiel\l"
	.string "sein, diesem Arsch eine Lektion zu\l"
	.string "erteilen, nachdem er meinen Ruf ruiniert\l"
	.string "hat. Ist doch so, oder?$"

VermilionCity_House1_Secundaria_Magikarp_Texto_4:
	.string "Pass gut auf dieses KARPADOR auf und\n"
	.string "schon bald wird deine ganze\l"
	.string "Organisation vor Neid erblassen. Sie\l"
	.string "werden dich respektieren! Du wirst\l"
	.string "einige große Siege erringen und wer\l"
	.string "weiß? Vielleicht wirst du ja befördert!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_5:
	.string "Wirklich?! Du hast ihm den Arsch\n"
	.string "versohlt und so sehr eingeschüchtert,\l"
	.string "dass er nie wieder über meine ANGEL\l"
	.string "spotten wird? Du musst ein hohes Tier\l"
	.string "bei TEAM ROCKET sein, wenn du es mit\l"
	.string "seinen POKéMON aufnehmen konntest.\l"
	.string "Dieser Oschi wird dir eine große Hilfe\l"
	.string "sein.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_6:
.string "DU ERHÄLTST EIN LEVEL 5 KARPADOR!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_7:
	.string "Was? Hast du was besseres erwartet?\p"
	.string "Lass mich dir mal was sagen, Mann. Das\n"
	.string "ist einer der besten Fänge in ganz\l"
	.string "KANTO! Ein echter Drache, den\l"
	.string "SIEGFRIED selbst in seinem Team hat!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_7.1:
	.string "Und obendrauf trägt dieses KARPADOR\n"
	.string "ein SONDERBONBON für schnelleres\l"
	.string "Training. Nur wenige Leute sind so nett,\l"
	.string "was? Benutze es. Wenn es LEVEL 19\l"
	.string "erreicht, wirst du die heftigste\l"
	.string "Evolution deines Lebens erleben!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_8:
.string "Hast du den DOMPTEUR gefunden?\n"
	.string "Zur Erinnerung: Er ist in PRISMANIA CITY!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_9:
	.string "Würdest du eine kleine Abrechnung für\n"
	.string "einen armen PROFIANGLER übernehmen?\l"
	.string "Wenn du ja sagst, werde ich dir eine\l"
	.string "Belohnung geben, die du sonst\l"
	.string "nirgendwo finden wirst!$"

VermilionCity_House1_Secundaria_Magikarp_Texto_10:
	.string "Alles klar! Hör zu, ROCKET. Vor ein paar\n"
	.string "Tagen kam ein DOMPTEUR hier vorbei und\l"
	.string "hat eine ANGEL gekauft. Er wollte ein\l"
	.string "KINGLER fangen, um damit anzugeben.\l"
	.string "Aber als er nur ein Haufen KARPADOR an\l"
	.string "Land zog, fing er an, mich zu beleidigen\l"
	.string "und zu behaupten, dass meine ANGEL\l"
	.string "Abzocke wäre.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_11:
	.string "Ich bin ehrlich. Man kann damit nur\n"
	.string "KARPADOR fangen, aber genau darum geht\l"
	.string "es auch. Es lässt dich dieses\l"
	.string "gewöhnliche POKéMON an Land ziehen,\l"
	.string "das immenses Potential hat. Aber dieser\l"
	.string "DOMPTEUR hat den Zweck meiner ANGEL\l"
	.string "falsch dargestellt und die Leute\l"
	.string "glauben lassen, dass ich verglichen mit\l"
	.string "meinen Brüdern nur ein Witz sei.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_12:
	.string "Ich will, dass du nach PRISMANIA CITY\n"
	.string "gehst. Da lebt der Typ. Erteile ihm\l"
	.string "einfach eine Lektion und sag, dass du\l"
	.string "vom PROFIANGLER aus ORANIA CITY\l"
	.string "geschickt wurdest. Das sollte ihn dazu\l"
	.string "bringen, nicht länger Scheiße über\l"
	.string "meine ANGEL zu labern. Mach ihm klar,\l"
	.string "dass TEAM ROCKET nie dieselbe Warnung\l"
	.string "zweimal ausspricht. Vielleicht droh ihm\l"
	.string "auch damit, dass er untertauchen muss,\l"
	.string "wenn er weiter am Leben bleiben will\l"
	.string "oder so. Wenn du das erledigt hast, komm\l"
	.string "zurück, und ich gebe dir ein\l"
	.string "fantastisches POKéMON.$"

VermilionCity_House1_Secundaria_Magikarp_Texto_13:
	.string "Nein?\n"
	.string "Ich dachte, das wäre euer Ding.$"

VermilionCity_House1_Secundaria_Magikarp_Move_1:
emote_exclamation_mark
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_2:
walk_in_place_right
step_end

VermilionCity_House1_Secundaria_Magikarp_Move_3:
face_player
step_end
