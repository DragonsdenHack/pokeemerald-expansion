CeruleanCity_BikeShop_MapScripts::
	.byte 0

CeruleanCityBikeShop1::
end



CeruleanCityBikeShop2::
lock     
faceplayer     
msgbox CeruleanCity_BikeShop_Text_2, MSGBOX_DEFAULT
release     
end

CeruleanCity_BikeShop_Text_2:
.string "EIN … R-ROCKET!\n"
.string "Bitte tu mir nicht weh!$"



CeruleanCityBikeShop3::
lock     
faceplayer     
msgbox CeruleanCity_BikeShop_Text_3, MSGBOX_DEFAULT
release     
end

CeruleanCity_BikeShop_Text_3:
	.string "Niemand hier wird dir ein FAHRRAD\n"
	.string "verkaufen! Dein schmutziges Blutgeld\l"
	.string "will niemand haben! Und jetzt mach dich\l"
	.string "vom Acker, bevor ich die POLIZEI\l"
	.string "verständige!$"



CeruleanCityBikeShopDocumento_100::
msgbox CeruleanCityDocumento_Text_100, MSGBOX_SIGN   
end

CeruleanCityBikeShopDocumento_Text_100:
.string "Ein brandneues Fahrrad!$"


CeruleanCity_BikeShop_Secundaria_Bicicleta::
compare VAR_UNUSED_0x409B, 3
goto_if_gt CeruleanCity_BikeShop_Secundaria_Bicicleta_3
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_1 MSGBOX_AUTOCLOSE
compare VAR_UNUSED_0x409B, 2
goto_if_gt CeruleanCity_BikeShop_Secundaria_Bicicleta_2
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_2::
delay 20
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1
waitmovement 0x0
waitse
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_4 MSGBOX_AUTOCLOSE
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.1
waitmovement 0x0
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.2
waitmovement 0x0
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.2 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2
waitmovement 0x0
waitse
playse 495
delay 10
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_6 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_BONOBICI, CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_7
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2
waitmovement 0x0
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
giveitem ITEM_MACH_BIKE
waitfanfare
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_10 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x409B, 4
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.1:
face_up
step_end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1.2:
face_left
step_end

CeruleanCity_BikeShop_Secundaria_Bicicleta_3::
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2 MSGBOX_AUTOCLOSE
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.1 MSGBOX_AUTOCLOSE
msgbox CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.2 MSGBOX_AUTOCLOSE
release
end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_1:
	.string "Das ist kein Ort für Bettler wie dich,\n"
	.string "die sich kaum ihr eigenes Leben\l"
	.string "finanzieren können! Wenn du nicht\l"
	.string "zufällig 1,000,000¥ mit dir\l"
	.string "rumträgst, das so ein FAHRRAD hier\l"
	.string "kostet, dann hast du hier nichts zu\l"
	.string "suchen!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2:
	.string "Ich werde nachher mal ein ernstes\n"
	.string "Wörtchen mit dem VORSITZENDEN des\l"
	.string "FANCLUBS reden! Du bist schon der\l"
	.string "Dritte, der hier mit einem RAD-COUPON\l"
	.string "reinspaziert, um sich ein kostenloses\l"
	.string "FAHRRAD abzuholen! Ist mir scheiß egal,\l"
	.string "ob er die Kosten trägt!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.1:
	.string "Weißt du, wie es dem Geschäft schadet,\n"
	.string "wenn es die Runde macht, dass zwei\l"
	.string "Rotzlöffel und einer von TEAM ROCKET\l"
	.string "mit meinen edlen FAHRRÄDERN hier raus\l"
	.string "spazieren?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_2.2:
	.string "Das beeinflusst die Kaufentscheidung\n"
	.string "meiner Kunden! Sie kaufen meine\l"
	.string "FAHRRÄDER nur, wenn sie als\l"
	.string "Prestigeobjekte gelten und\l"
	.string "Raritäten sind!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_3:
.string "{PAUSE 5}…{PAUSE 5}\n"
	.string "{PAUSE 5}…{PAUSE 5}$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_4:
.string "Unmöglich! Ein RAD COUPON!\p"
	.string "Wo hast du den her?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5:
	.string "Vom VORSITZENDEN des\n"
	.string "POKéMON-FANCLUBS in ORANIA CITY? Für\l"
	.string "wen hält er sich, dass er denkt, dass\l"
	.string "das Ding in meinem Laden gültig ist? Ich\l"
	.string "leite ein seriöses Geschäft und keine\l"
	.string "Wohltätigkeitsorganisation! Kapiert?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.1:
	.string "Ich kann doch nicht einfach zulassen,\n"
	.string "dass Leute hier ständig mit einem\n"
	.string "RAD-COUPON reinstolzieren! Das sind\l"
	.string "jedes Mal 1,000,000¥, die flöten\l"
	.string "gehen!\p"
	.string "Mehr Geld, als du Abschaum je in\n"
	.string "deinem Leben verdienen wirst!$"
	
CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_5.2:
	.string "Der Grund, warum dieser Laden so gut\n"
	.string "läuft, sind reiche Idioten, die ohne\l"
	.string "groß nachzudenken bereit sind, jeden\l"
	.string "Preis zu zahlen - und nicht wegen\l"
	.string "Ganoven wie dir!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_6:
	.string "Jetzt hast du's geschafft, mich richtig\n"
	.string "wütend zu machen! Ich werde dir zeigen,\l"
	.string "was mit Dieben wie dir geschieht, die\l"
	.string "einen auf Saubermann machen!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_7:
	.string "Nein! Die POKéMON, die ich so\n"
	.string "hart trainiert habe!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_8:
	.string "Meine tapferen POKéMON! Das lief\n"
	.string "überhaupt nicht nach Plan! Wie konnte\l"
	.string "einer von TEAM ROCKET meine POKéMON\l"
	.string "so leicht besiegen?!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_9:
	.string "Hey, hör zu Mann. Ich akzeptiere diesen\n"
	.string "verfluchten COUPON für das FAHRRAD!\l"
	.string "Damit ist alles gut zwischen uns, okay?$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Texto_10:
	.string "{PLAYER} tauscht den RAD-COUPON\n"
	.string "gegen ein FAHRRAD ein!$"

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_1:
emote_exclamation_mark
step_end

CeruleanCity_BikeShop_Secundaria_Bicicleta_Move_2:
walk_in_place_left
step_end
