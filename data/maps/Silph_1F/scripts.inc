Silph_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Silph_1F_OnResume
map_script MAP_SCRIPT_ON_TRANSITION, Silph_1F_OnTransition
	.byte 0

Silph_1F_OnResume:
	call Silph_1F_SetupEscapeWarp
	end

Silph_1F_SetupEscapeWarp::
	setescapewarp MAP_SILPH_1F, 8, 20
	return
	
Silph_1F_OnTransition::
goto_if_ge VAR_UNUSED_0x40F7, 203, Silph_1F_WarpDinamica
setdynamicwarp MAP_SAFFRON_CITY, 33, 30
end

Silph_1F_WarpDinamica::
setdynamicwarp MAP_NEO_SAFFRON_CITY, 33, 30
end

Silph1F_1::
end



Silph1F_2::
lock     
faceplayer     
msgbox Silph1F_Text_2, MSGBOX_DEFAULT
release     
end

Silph1F_Text_2:
	.string "LAMBDA: Ich vertraue dir, {PLAYER}.\p"
	.string "Ich werde hier bleiben und dafür\n"
	.string "sorgen, dass nichts schiefgeht.\p"
	.string "Beeil dich!$"



Silph1F_3::
lock     
faceplayer     
msgbox Silph1F_Text_3, MSGBOX_DEFAULT
release     
end

Silph1F_Text_3:
	.string "Zu Ihrem Befehl, OFFIZIER {PLAYER}!$"



Silph1F_4::
lock     
faceplayer     
msgbox Silph1F_Text_4, MSGBOX_DEFAULT
release     
end

Silph1F_Text_4:
	.string "Dieser Tag wird als der Tag in die\n"
	.string "Geschichtsbücher eingehen, an dem TEAM\l"
	.string "ROCKET endgültig die Macht ergriff!$"



Silph1F_5::
lock     
faceplayer     
msgbox Silph1F_Text_5, MSGBOX_DEFAULT
release     
end

Silph1F_Text_5:
.string "Kommt her, SILPH-Wachen!$"



Silph1F_6::
lock     
faceplayer     
msgbox Silph1F_Text_6, MSGBOX_DEFAULT
release     
end

Silph1F_Text_6:
	.string "Dieses Gefühl von Unsicherheit vor dem\n"
	.string "großen Moment … Genau deswegen bin ich\l"
	.string "TEAM ROCKET beigetreten! Du wirst dich\l"
	.string "niemals so lebendig fühlen wie jetzt!$"



Silph1F_7::
lock     
faceplayer     
msgbox Silph1F_Text_7, MSGBOX_DEFAULT
release     
end

Silph1F_Text_7:
	.string "Dieser Brunnen ist peinlich, wenn\n"
	.string "man ihn mit unserem vergleicht!$"



Silph1F_8::
lock     
faceplayer     
msgbox Silph1F_Text_8, MSGBOX_DEFAULT
release     
end

Silph1F_Text_8:
	.string "Zeigen wir SILPH, wer hier der Boss ist!$"



Silph1F_9::
lock     
faceplayer     
msgbox Silph1F_Text_9, MSGBOX_DEFAULT
release     
end

Silph1F_Text_9:
	.string "Ganz ehrlich. Von außen macht SILPH\n"
	.string "echt was her. Kein anderes Gebäude in\l"
	.string "dieser Region ist so hoch.$"



Silph1F_10::
lock     
faceplayer     
msgbox Silph1F_Text_10, MSGBOX_DEFAULT
release     
end

Silph1F_Text_10:
	.string "Die ELITE von TEAM ROCKET kann man\n"
	.string "nicht mit gewöhnlichen RÜPELN\n"
	.string "vergleichen. Jetzt gerade sind all\l"
	.string "unsere POKéMON zwischen Level 35-40.\p"
	.string "Aber natürlich haben wir den Befehl von\n"
	.string "GIOVANNI, uns sofort zurückzuziehen,\l"
	.string "sobald er dem PRÄSIDENTEN gesagt hat,\l"
	.string "was er zu sagen hat. Auch wurde uns\l"
	.string "strengstens verboten, gegen diesen\l"
	.string "ROT zu kämpfen. GIOVANNI will nicht,\l"
	.string "dass er merkt, wozu TEAM ROCKET\l"
	.string "wirklich fähig ist.$"



Silph1F_11::
lock     
faceplayer     
msgbox Silph1F_Text_11, MSGBOX_DEFAULT
release     
end

Silph1F_Text_11:
	.string "Ich mag die Atmosphäre hier.\p"
	.string "Hat Ähnlichkeiten mit unserer\n"
	.string "UNTERIRDISCHEN BASIS.$"



Silph1F_12::
lock     
faceplayer     
msgbox Silph1F_Text_12, MSGBOX_DEFAULT
release     
end

Silph1F_Text_12:
	.string "Die Ziele von SILPH und TEAM ROCKET\n"
	.string "sind sich ähnlicher, als du denkst.\p"
	.string "Und genau das werden wir nutzen, um\n"
	.string "den PRÄSIDENTEN zu überzeugen!$"



Silph1F_13::
lock     
faceplayer     
msgbox Silph1F_Text_13, MSGBOX_DEFAULT
release     
end

Silph1F_Text_13:
	.string "SILPH und TEAM ROCKET werden\n"
	.string "sich bestimmt einig!$"



Silph1F_14::
lock     
faceplayer     
msgbox Silph1F_Text_14, MSGBOX_DEFAULT
release     
end

Silph1F_Text_14:
	.string "Sollte unser BOSS GIOVANNI\n"
	.string "beschließen, mit seiner vollen Stärke zu\l"
	.string "kämpfen, gibt's glaube ich keinen\l"
	.string "Trainer in der ganzen Region, der es mit\l"
	.string "ihm aufnehmen könnte. Er ist\l"
	.string "außergewöhnlich stark geworden.\p"
	.string "All diese Jahre, in der er die\n"
	.string "Schmutzkampagne durchstehen musste,\l"
	.string "haben ihn noch härter gemacht, als er\l"
	.string "es bereits war, als er den CHAMP-TITEL\l"
	.string "gewann.$"



Silph1F_15::
lock     
faceplayer     
msgbox Silph1F_Text_15, MSGBOX_DEFAULT
release     
end

Silph1F_Text_15:
	.string "Wenn alles nach Plan läuft, ziehen wir\n"
	.string "uns eine Zeit lang zurück. Aber unsere\l"
	.string "Stärke wird immer weiter zunehmen.$"



Silph1F_16::
lock     
faceplayer     
msgbox Silph1F_Text_16, MSGBOX_DEFAULT
release     
end

Silph1F_Text_16:
	.string "Heute wird hier\n"
	.string "Geschichte geschrieben!$"



Silph1F_17::
lock     
faceplayer     
msgbox Silph1F_Text_17, MSGBOX_DEFAULT
release     
end

Silph1F_Text_17:
	.string "SILPHs Einfluss erstreckt sich bis zu\n"
	.string "den SEVII EILANDEN. Der von TEAM\l"
	.string "ROCKET wird auf globaler Ebene sein!$"




Silph1F_18::
lock     
faceplayer     
msgbox Silph1F_Text_18, MSGBOX_DEFAULT
release     
end

Silph1F_Text_18:
	.string "In TEAM ROCKET handeln wir als eine\n"
	.string "Einheit, was uns stark macht.$"



Silph1F_19::
lock     
faceplayer     
msgbox Silph1F_Text_19, MSGBOX_DEFAULT
release     
end

Silph1F_Text_19:
	.string "Die Angestellten hier sind nicht daran\n"
	.string "gewöhnt, uns zu sehen. Sie leben in\l"
	.string "einer Stadt, die völlig losgelöst von\l"
	.string "der Realität existiert. Es würde mich\l"
	.string "nicht überraschen, wenn viele von ihnen\l"
	.string "Angst bekommen. Auch wenn wir ihnen\l"
	.string "natürlich nichts antun werden.$"



Silph1FDocumento_100::
msgbox Silph1FDocumento_Text_100, MSGBOX_SIGN   
end

Silph1FDocumento_Text_100:
.string "SILPH CO. HEAD OFFICE\n"
    .string "1F$"



Silph_1F_Recepcionista_Pisos_Inferiores::
compare VAR_UNUSED_0x40F7, 102
goto_if_gt Silph_1F_Recepcionista_Pisos_Inferiores_3
compare VAR_UNUSED_0x40F7, 101
goto_if_gt Silph_1F_Recepcionista_Pisos_Inferiores_2
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph_1F_Recepcionista_Pisos_Inferiores_3::
lock
faceplayer
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_6 MSGBOX_AUTOCLOSE
release
end

Silph_1F_Recepcionista_Pisos_Inferiores_2::
delay 20
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_2 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_1
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_2
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_4 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_1F_Recepcionista_Pisos_Inferiores_Move_3
waitmovement 0x0
special RemoveCameraObject
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 10, 3, 0x346, TRUE
setmetatile 10, 2, 0x33E, TRUE
setmetatile 10, 1, 0x290, TRUE
setmetatile 10, 0, 0x288, TRUE
setmetatile 11, 3, 0x276, FALSE
setmetatile 11, 2, 0x26F, FALSE
setmetatile 11, 1, 0x271, TRUE
setmetatile 11, 0, 0x269, TRUE
setmetatile 12, 3, 0x266, TRUE
setmetatile 12, 2, 0x25E, TRUE
setmetatile 12, 1, 0x274, TRUE
setmetatile 12, 0, 0x330, TRUE
setmetatile 13, 3, 0x267, TRUE
setmetatile 13, 2, 0x25F, TRUE
setmetatile 13, 1, 0x275, TRUE
setmetatile 13, 0, 0x330, TRUE
setmetatile 14, 3, 0x347, TRUE
setmetatile 14, 2, 0x33F, TRUE
setmetatile 14, 1, 0x294, TRUE
setmetatile 14, 0, 0x28C, TRUE
special DrawWholeMapView
delay 60
playse SE_PIN
applymovement OBJ_EVENT_ID_CAMERA, Silph_1F_Recepcionista_Pisos_Inferiores_Move_1
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Silph_1F_Recepcionista_Pisos_Inferiores_Move_4
waitmovement 0x0
special RemoveCameraObject
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_5
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, Silph_1F_Recepcionista_Pisos_Inferiores_Move_6
waitmovement 0x0
msgbox Silph_1F_Recepcionista_Pisos_Inferiores_Texto_6 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_85
setvar VAR_UNUSED_0x40F7, 103
release
end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_1:
emote_exclamation_mark
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_2:
walk_right
walk_up
walk_right
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_3:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_right
walk_right
walk_right
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_4:
walk_down
walk_down
walk_down
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_5:
walk_left
walk_down
walk_left
walk_in_place_down
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Move_6:
walk_in_place_down
step_end

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_1:
	.string "Ich werde niemals vergessen, was ihr\n"
	.string "hier getan habt, ROCKET!$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_2:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_3:
	.string "Oh ja! Du bist derjenige, der im Auftrag\n"
	.string "von TEAM ROCKET hier ist, um unsere\l"
	.string "Bibliothek zu besuchen.\p"
	.string "Du hast echt Glück, weißt du das?$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_4:
	.string "Niemand außerhalb dieses Unternehmens\n"
	.string "hat jemals diesen Ort betreten.\p"
	.string "Abgesehen von unserem PRÄSIDENTEN\n"
	.string "dürfen nur die wichtigsten\l"
	.string "Angestellten diesen Bereich betreten.$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_5:
	.string "Er hat angeordnet, dass du freien\n"
	.string "Zugang hast, wann immer du willst.$"

Silph_1F_Recepcionista_Pisos_Inferiores_Texto_6:
	.string "Von nun an hast du jederzeit Zugang zu\n"
	.string "unseren unteren Etagen. Dafür musst du\l"
	.string "nur meinen Computer benutzen.\p"
	.string "Viel Glück!$"

Silph_1F_Activador_Entrada::
compare VAR_UNUSED_0x40F7, 102
goto_if_gt Silph_1F_Activador_Entrada_2
msgbox Silph_1F_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
release
end

Silph_1F_Activador_Entrada_2:
msgbox RocketHideout_4F_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq RocketHideout_4F_Warp_No
playse SE_PC_ON
delay 40
playse SE_PC_LOGIN
delay 40
playse SE_CLICK
delay 40
playse SE_UNLOCK
setmetatile 10, 3, 0x346, TRUE
setmetatile 10, 2, 0x33E, TRUE
setmetatile 10, 1, 0x290, TRUE
setmetatile 10, 0, 0x288, TRUE
setmetatile 11, 3, 0x276, FALSE
setmetatile 11, 2, 0x26F, FALSE
setmetatile 11, 1, 0x271, TRUE
setmetatile 11, 0, 0x269, TRUE
setmetatile 12, 3, 0x266, TRUE
setmetatile 12, 2, 0x25E, TRUE
setmetatile 12, 1, 0x274, TRUE
setmetatile 12, 0, 0x330, TRUE
setmetatile 13, 3, 0x267, TRUE
setmetatile 13, 2, 0x25F, TRUE
setmetatile 13, 1, 0x275, TRUE
setmetatile 13, 0, 0x330, TRUE
setmetatile 14, 3, 0x347, TRUE
setmetatile 14, 2, 0x33F, TRUE
setmetatile 14, 1, 0x294, TRUE
setmetatile 14, 0, 0x28C, TRUE
special DrawWholeMapView
delay 60
release
end

Silph_1F_Activador_Entrada_Texto_1:
	.string "Es scheint, als würde dieser Computer\n"
	.string "eine sehr wichtige Funktion ausführen.$"


