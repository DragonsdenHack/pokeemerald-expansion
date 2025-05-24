CeladonCity_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, CeladonCity_OnTransition
map_script MAP_SCRIPT_ON_FRAME_TABLE, CeladonCity_Frame
	.byte 0

CeladonCity_OnTransition::
setflag FLAG_VISITED_CELADON_CITY
end

CeladonCity_Frame:
map_script_2 VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT, 0,CeladonCity3
.2byte 0

CeladonCity1::
end


CeladonCity2::
end


CeladonCity3::
setvar VAR_HAS_TALKED_TO_SEAFLOOR_CAVERN_ENTRANCE_GRUNT,1 
special Special_DoPlayerNamingScreen
waitstate
special StartWallClock
waitstate
callnative ForcedSaveGame
waitstate  
end

CeladonCity3_1::
lock     
faceplayer
msgbox CeladonCity_Text3, MSGBOX_DEFAULT
release
end

CeladonCity_Text3:
	.string "QUAPPO ist mein bester Freund! Es\n"
	.string "entwickelte sich, als ich einem\l"
	.string "QUAPUTZI einen WASSERSTEIN gab.$"

CeladonCity4::
lock     
faceplayer     
msgbox CeladonCity_Text4, MSGBOX_DEFAULT
release 
end

CeladonCity_Text4:
	.string "Wir werden alle vernichten, die\n"
	.string "sich uns in den Weg stellen!$"


CeladonCity5::
lock     
faceplayer     
msgbox CeladonCity_Text5, MSGBOX_DEFAULT
release     
end

CeladonCity_Text5:
	.string "Ähm … Du bist doch derjenige, der\n"
	.string "eine Kopie der SILPH SCOPE von uns\l"
	.string "gestohlen hat, nicht wahr?$"


CeladonCity6::
end


CeladonCity7::
lock     
faceplayer     
msgbox CeladonCity_Text7, MSGBOX_DEFAULT
release     
end

CeladonCity_Text7:
.string "Was geht, Alter?\n"
.string "War bei den Missionen viel los?$"


CeladonCity8::
lock     
faceplayer     
msgbox CeladonCity_Text8, MSGBOX_DEFAULT
release     
end

CeladonCity_Text8:
.string "Mist!\n"
    .string "Ich habe alles verspielt!\p"
	.string "Hätte ich doch meine MÜNZEN\n"
	.string "rechtzeitig gegen einen Preis\l"
	.string "eingetauscht!$"


CeladonCity9::
end


CeladonCity10::
lock     
faceplayer     
msgbox CeladonCity_Text10, MSGBOX_DEFAULT
release     
end

CeladonCity_Text10:
	.string "Argh, oh … Ich habe meine Zunge\n"
	.string "verbrüht! Die nette, alter Dame in der\l"
	.string "VILLA gab mir TEE. Aber er war kochend\l"
	.string "heiß! Ich muss ihn erst abkühlen, ehe\l"
	.string "ich ihn trinke!$"


CeladonCity11::
end


CeladonCity12::
lock
msgbox CeladonCity12_Texto_1, MSGBOX_DEFAULT
release
end

CeladonCity12_Texto_1:
	.string "Hehe! Diese ARENA ist voller Frauen …$"


CeladonCity13::
lock     
faceplayer     
msgbox CeladonCity_Text13, MSGBOX_DEFAULT
release     
end

CeladonCity_Text13:
	.string "Ich habe SMOGON auf der ZINNOBERINSEL\n"
	.string "gefangen! Es ist nett, doch wenn man es\l"
	.string "ärgert, atmet es Gift aus!$"


CeladonCity14::
lock     
faceplayer     
msgbox CeladonCity_Text14, MSGBOX_DEFAULT
release     
end

CeladonCity_Text14:
	.string "Niemand will euch hier haben, TEAM\n"
	.string "ROCKET! Eure dumme SPIELHALLE richtet\l"
	.string "die Stadt zugrunde!$"



CeladonCityDocumento_100::
msgbox CeladonCityDocumento_Text_100, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_100:
 .string "PRISMANIA CITY POKéMON-ARENA\n"
    .string "ARENALEITERIN: ERIKA\l"
    .string "Die Naturliebende Prinzessin!$"



CeladonCityDocumento_101::
msgbox CeladonCityDocumento_Text_101, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_101:
	.string "Im PRISMANIA CITY EINKAUFSZENTRUM\n"
	.string "findest du alles, was du brauchst!$"



CeladonCityDocumento_102::
msgbox CeladonCityDocumento_Text_102, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_102:
	.string "PRISMANIA CITY\n"
    .string "Die Stadt der Regenbogen-Träume!$"



CeladonCityDocumento_103::
msgbox CeladonCityDocumento_Text_103, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_103:
.string "PRISMANIA-VILLA$"



CeladonCityDocumento_104::
msgbox CeladonCityDocumento_Text_104, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_104:
.string "TIPPS FÜR TRAINER\p"
	.string "X-TREFFER erhöht die Genauigkeit von\n"
	.string "Attacken! ANGRIFFPLUS erhöht die\l"
	.string "Wahrscheinlichkeit, einen Volltreffer\l"
	.string "zu landen! Diese Items kannst du im\l"
	.string "EINKAUFSZENTRUM von PRISMANIA CITY\l"
	.string "kaufen!$"



CeladonCityDocumento_105::
msgbox CeladonCityDocumento_Text_105, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_105:
.string "ROCKET SPIELHALLE\n"
    .string "Ein Spielplatz für Erwachsene!$"



CeladonCityDocumento_106::
msgbox CeladonCityDocumento_Text_106, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_106:
.string "WECHSELSTUBE\n"
    .string "Tausche Münzen gegen Preise!$"



CeladonCityDocumento_107::
msgbox CeladonCityDocumento_Text_107, MSGBOX_SIGN   
end

CeladonCityDocumento_Text_107:
.string "TIPPS FÜR TRAINER\p"
	.string "MEGABLOCK schützt POKéMON vor\n"
	.string "Statusverschlechterungen im Kampf.\p"
	.string "Dieses Item kannst du im\n"
	.string "EINKAUFSZENTRUM von PRISMANIA\l"
	.string "CITY erstehen!$"

Barrera_Tiendas::
compare VAR_UNUSED_0x40F7, 30
goto_if_lt Barrera_Tiendas_2
compare VAR_UNUSED_0x40F7, 94
goto_if_gt Barrera_Tiendas_2
applymovement OBJ_EVENT_ID_PLAYER, Barrera_Tiendas_Move_1
waitmovement 0x0
msgbox Barrera_Tiendas_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Barrera_Tiendas_Move_2
waitmovement 0x0
release
end

Barrera_Tiendas_Texto_1:
.string "-ROCKETS are forbidden to buy articles\n"
	.string "on KANTO public markets.\l"
	.string "It's better not to tempt luck.-$"

Barrera_Tiendas_2::
release
end

Barrera_Tiendas_Move_1:
walk_in_place_up
step_end

Barrera_Tiendas_Move_2:
walk_slow_down
step_end

CeladonCity_Entrenador_Especial::
lock
faceplayer
compare VAR_ROUTE124_STATE, 0
goto_if_gt CeladonCity_Entrenador_Especial_3
msgbox CeladonCity_Entrenador_Especial_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox CeladonCity_Entrenador_Especial_Texto_2 MSGBOX_AUTOCLOSE
delay 20
compare VAR_UNUSED_0x40F7, 87
goto_if_gt CeladonCity_Entrenador_Especial_2
msgbox CeladonCity_Entrenador_Especial_Texto_3 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Entrenador_Especial_2::
msgbox CeladonCity_Entrenador_Especial_Texto_5 MSGBOX_AUTOCLOSE
msgbox CeladonCity_Entrenador_Especial_Texto_6 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CeladonCity_Entrenador_Especial_2_No
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox CeladonCity_Entrenador_Especial_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_LLAMASFERA, CeladonCity_Entrenador_Especial_Texto_8
msgbox CeladonCity_Entrenador_Especial_Texto_9 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_FLAME_ORB
msgbox CeladonCity_Entrenador_Especial_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
msgbox CeladonCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE124_STATE, 1
release
end


CeladonCity_Entrenador_Especial_2_No::
msgbox CeladonCity_Entrenador_Especial_Texto_10 MSGBOX_AUTOCLOSE
release
end


CeladonCity_Entrenador_Especial_3::
msgbox CeladonCity_Entrenador_Especial_Texto_4 MSGBOX_AUTOCLOSE
release
end

CeladonCity_Entrenador_Especial_Texto_1.1:
.string "Du erhältst HEIß-ORB vom ALTEN HERRN.$"

CeladonCity_Entrenador_Especial_Texto_1:
	.string "PRISMANIA wird immer schlimmer! Die\n"
	.string "Unterwelt hat irgendetwas damit zu\l"
	.string "tun! Wenn doch nur mein Enkelsohn\l"
	.string "hierher zurückkehren und sehen würde,\l"
	.string "was hier vor sich geht … Ach, ich\l"
	.string "vermisse die guten alten Zeiten, wo\l"
	.string "noch richtig gekämpft wurde.$"

CeladonCity_Entrenador_Especial_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

CeladonCity_Entrenador_Especial_Texto_3:
	.string "Nein. Ich glaube nicht, dass meine\n"
	.string "POKéMON gegen deine überhaupt ins\l"
	.string "Schwitzen kommen würden.$"

CeladonCity_Entrenador_Especial_Texto_4:
	.string "Der HEIß ORB verbrennt automatisch\n"
	.string "seinen TRÄGER. Ausnahmen sind POKéMON,\l"
	.string "die selber vom Typ FEUER sind oder die\l"
	.string "Fähigkeit AQUAHÜLLE besitzen. Es mag\l"
	.string "nutzlos erscheinen, doch POKéMON,\l"
	.string "welche die Fähigkeit ADRENALIN\l"
	.string "besitzen, werden damit zu einer\l"
	.string "waschechten Bedrohung. Kombinierst du\l"
	.string "es darüber hinaus noch mit der Attacke\l"
	.string "FASSADE, erschaffst du damit eine\l"
	.string "einzigartige offensive Kombination.$"

CeladonCity_Entrenador_Especial_Texto_5:
	.string "Nicht schlecht! Trainer, die alle Orden\n"
	.string "besitzen, sieht man nicht alle Tage!\p"
	.string "Du musst ein außergewöhnlich starkes\n"
	.string "Team haben. Wenn du mir die Ehre eines\l"
	.string "Kampfes erweist und mich besiegst,\l"
	.string "werde ich dir etwas Nützliches mit\l"
	.string "auf den Weg geben.$"

CeladonCity_Entrenador_Especial_Texto_6:
.string "Also, nimmst du die Herausforderung an?$"

CeladonCity_Entrenador_Especial_Texto_7:
	.string "Wollen wir mal sehen, ob die jungen\n"
	.string "Trainer von KANTO noch genauso gut\l"
	.string "sind wie sie es früher einmal waren!$"

CeladonCity_Entrenador_Especial_Texto_8:
	.string "Ja … ja. Du bist etwas Besonderes, mein\n"
	.string "Junge. Ich wünsche dir alles Gute.$"

CeladonCity_Entrenador_Especial_Texto_9:
	.string "Es wäre schön, wenn mein Enkelsohn\n"
	.string "irgendwann so stark werden würde wie\l"
	.string "du. Nimm das. Ich bin mir sicher, dass du\l"
	.string "seinen Wert zu schätzen wissen wirst.$"

CeladonCity_Entrenador_Especial_Texto_10:
	.string "Einem alten Mann den Kampf zu\n"
	.string "verweigern {PAUSE 10}…{PAUSE 10} Wer hätte das kommen\l"
	.string "sehen können {PAUSE 10}…{PAUSE 10}$"


CeladonCity_Bloqueo_Paleta::
lock
applymovement OBJ_EVENT_ID_PLAYER, CeladonCity_Bloqueo_Paleta_Move_1
waitmovement 0x0
msgbox CeladonCity_Bloqueo_Paleta_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, CeladonCity_Bloqueo_Paleta_Move_2
waitmovement 0x0
release
end

CeladonCity_Bloqueo_Paleta_Move_1:
walk_in_place_left
step_end

CeladonCity_Bloqueo_Paleta_Move_2:
walk_right
step_end

CeladonCity_Bloqueo_Paleta_Texto_1:
	.string "-I must investigate PALETT TOWN before\n"
	.string "returning to the HQ.-$"
