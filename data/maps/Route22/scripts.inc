Route22_MapScripts::
	map_script MAP_SCRIPT_ON_FRAME_TABLE, Route22_OnFrame
    .byte 0

Route22_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 85, RocketHideoutViridian_Escena_9
	.2byte 0

Route22Documento_100::
msgbox Route22Documento_Text_100, MSGBOX_SIGN   
end

Route22Documento_Text_100:
.string "POKéMON LIGA Haupteingang$"

Ruta22_No_Puedes_Pasar::
compare VAR_UNUSED_0x40F7, 89
goto_if_gt RocketHideout_5F_Puedes_Pasar
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_1
waitmovement 0x0
msgbox Ruta22_No_Puedes_Pasar_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, RocketHideout_5F_Paso_Despacho_Giovanni_Move_2
waitmovement 0x0
release
end

Ruta22_No_Puedes_Pasar_Texto_1:
	.string "-Hier befindet sich die gesamte\n"
	.string "POLIZEI der Region. Es ist keine\n"
	.string "gute Idee, hier einzutreten.-$"

Route22_Combate_Azul_Izq::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route22_Combate_Azul_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.1
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
applymovement 1, Route22_Combate_Azul_Move_2
waitmovement 0x0
goto Route22_Combate_Azul

Route22_Combate_Azul_Der::
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route22_Combate_Azul_Move_1
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.1
waitmovement 0x0
special RemoveCameraObject
clearflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
addobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
goto Route22_Combate_Azul

Route22_Combate_Azul::
msgbox Route22_Combate_Azul_Texto_1 MSGBOX_AUTOCLOSE
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, Route22_Combate_Azul_Move_3
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, Route22_Combate_Azul_Move_4
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_5 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_101_BIRCH_STARTERS_BAG
msgbox Route22_Combate_Azul_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_RIVAL
delay 10
applymovement 1, Route22_Combate_Azul_Move_4.1
waitmovement 0x0
delay 10
msgbox Route22_Combate_Azul_Texto_6.1 MSGBOX_AUTOCLOSE
delay 10
trainerbattle_no_intro TRAINER_AZUL_3, Route22_Combate_Azul_Texto_7
msgbox Route22_Combate_Azul_Texto_8 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_3 MSGBOX_AUTOCLOSE
delay 20
msgbox Route22_Combate_Azul_Texto_9 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6.1
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_9.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_10 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_6.2
waitmovement 0x0
delay 10
msgbox Route22_Combate_Azul_Texto_10.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route22_Combate_Azul_Move_7
waitmovement 0x0
msgbox Route22_Combate_Azul_Texto_11 MSGBOX_AUTOCLOSE
delay 15
playmoncry SPECIES_PIDGEOT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 1
waitfieldeffect FLDEFF_NPCFLY_OUT
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route22_Combate_Azul_Move_1.2
waitmovement 0x0
special RemoveCameraObject
setvar VAR_UNUSED_0x40F7, 90
release
end

Route22_Combate_Azul_Move_6.2:
delay_8
face_down
delay_16
delay_8
face_left
delay_16
delay_8
face_down
delay_8
step_end

Route22_Combate_Azul_Move_6.1:
face_left
step_end

Route22_Combate_Azul_Move_4.1:
walk_in_place_down
step_end

Route22_Combate_Azul_Move_1.2:
walk_down
walk_down
step_end

Route22_Combate_Azul_Move_1.1:
walk_up
walk_up
step_end

Route22_Combate_Azul_Texto_1:
	.string "BLAU: Auf den Kopf gefallen\n"
	.string "bist du also auch nicht.$"

Route22_Combate_Azul_Texto_2:
	.string "Bin gerade von meinem Training in der\n"
	.string "SIEGESSTRAßE zurückgekehrt.\p"
	.string "Ich wage es noch nicht, die TOP 4\n"
	.string "herauszufordern.$"

Route22_Combate_Azul_Texto_3:
.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route22_Combate_Azul_Texto_4:
	.string "Die Wahrheit ist, ROT hat mich schon\n"
	.string "wieder besiegt. Ich kann nicht die LIGA\l"
	.string "herausfordern, solange er mir noch\l"
	.string "überlegen ist.\p"
	.string "Ich muss sichergehen, dass mein Team\n"
	.string "viel besser ist als seins.$"

Route22_Combate_Azul_Texto_5:
	.string "Ach, mach dir keine Sorgen. ROT war\n"
	.string "schon immer jemand, der zu spät kommt.\p"
	.string "Er wird erst nach mir dort auftauchen,\n"
	.string "um die TOP VIER herauszufordern. So ist\l"
	.string "das immer. Außerdem war ich dort bereits\l"
	.string "im POKéMON-CENTER. Ich kann also\l"
	.string "jederzeit dorthin zurückfliegen.$"

Route22_Combate_Azul_Texto_6:
	.string "Ich suche nur noch nach ein bisschen\n"
	.string "zusätzlichem Training. Die TRAINER auf\l"
	.string "der SIEGESSTRAßE sind zu schwach.\p"
	.string "Ich brauche stärkere Gegner.$"

Route22_Combate_Azul_Texto_6.1:
	.string "Komm schon, wir sind doch auf derselben\n"
	.string "Seite. Ich will sehen, wie gut du auf\l"
	.string "diese Herausforderung vorbereitet\l"
	.string "bist!$"

Route22_Combate_Azul_Texto_7:
.string "Das kann nicht sein. Du auch!$"

Route22_Combate_Azul_Texto_8:
	.string "Das kann nicht sein. Meine POKéMON\n"
	.string "brauchen ein höheres Level! Ich werde\l"
	.string "nicht aufhören, bis sie über Level 60\l"
	.string "sind! Danach wird mich niemand mehr\l"
	.string "stoppen können!$"

Route22_Combate_Azul_Texto_9:
	.string "Übrigens, weißt du, wo deine\n"
	.string "Kollegin ANDRA ist?$"

Route22_Combate_Azul_Texto_9.1:
	.string "Sie wird auch ein starkes Team haben,\n"
	.string "wenn sie die TOP VIER herausfordern\l"
	.string "will. Vielleicht laufe ich ihr später über\l"
	.string "den Weg und kann meine POKéMON gegen\l"
	.string "sie noch ein bisschen hochleveln.$"

Route22_Combate_Azul_Texto_10:
	.string "Bah. Ich verschwinde von hier,\n"
	.string "{PLAYER}. Meine Zeit ist im\l"
	.string "Moment echt kostbar.$"

Route22_Combate_Azul_Texto_10.1:
	.string "Ich wünsche dir viel Glück … echt jetzt!\p"
	.string "Wenn ich mir jemanden als neuen CHAMP\n"
	.string "aussuchen könnte, der ROT Staub\l"
	.string "fressen lässt, mich natürlich\l"
	.string "ausgeschlossen, dann wärst du es.$"

Route22_Combate_Azul_Texto_11:
	.string "Eine Sache noch. Wage es nicht, die\n"
	.string "SONDERBONBONs aufzusammeln, die du\l"
	.string "findest! Die gehören alle mir!$"


Route22_Combate_Azul_Move_1:
walk_in_place_up
emote_exclamation_mark
step_end

Route22_Combate_Azul_Move_2:
walk_left
walk_in_place_down
step_end

Route22_Combate_Azul_Move_3:
face_left
step_end

Route22_Combate_Azul_Move_4:
walk_in_place_down
step_end

Route22_Combate_Azul_Move_5:
face_up
step_end

Route22_Combate_Azul_Move_6:
walk_up
step_end

Route22_Combate_Azul_Move_7:
face_down
step_end

RocketHideoutViridian_Escena_9::
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_9_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox RocketHideoutViridian_Escena_9_Texto_1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_2 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_3
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_4
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_4.1 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_5 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_6 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_6
waitmovement 0x0
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_7 MSGBOX_AUTOCLOSE
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_8 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_10 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_7
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_11 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_12 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_13 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_14 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_15 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_16 MSGBOX_AUTOCLOSE
applymovement 3, RocketHideoutViridian_Escena_9_Move_2
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_17 MSGBOX_AUTOCLOSE
delay 15
applymovement 3, RocketHideoutViridian_Escena_9_Move_8
delay 30
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
removeobject 3
clearflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
addobject 4
msgbox RocketHideoutViridian_Escena_9_Texto_18 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_19 MSGBOX_AUTOCLOSE
msgbox RocketHideoutViridian_Escena_9_Texto_20 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 2, RocketHideoutViridian_Escena_9_Move_5
waitmovement 0x0
msgbox RocketHideoutViridian_Escena_9_Texto_21 MSGBOX_AUTOCLOSE
applymovement 2, RocketHideoutViridian_Escena_9_Move_9
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, RocketHideoutViridian_Escena_9_Move_10
delay 55
playse SE_PIN
waitmovement 0x0
special RemoveCameraObject
delay 20
msgbox RocketHideoutViridian_Escena_9_Texto_22 MSGBOX_AUTOCLOSE
delay 20
setvar VAR_UNUSED_0x40F7, 86
setflag FLAG_HIDE_UNION_ROOM_PLAYER_6
setflag FLAG_HIDE_BATTLE_TOWER_MULTI_BATTLE_PARTNER_3
warpsilent MAP_ROCKET_HIDEOUT_VIRIDIAN, 25, 7
release
end

RocketHideoutViridian_Escena_9_Move_1:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
step_end

RocketHideoutViridian_Escena_9_Move_2:
walk_in_place_left
step_end

RocketHideoutViridian_Escena_9_Move_3:
walk_slow_right
step_end

RocketHideoutViridian_Escena_9_Move_4:
face_left
step_end

RocketHideoutViridian_Escena_9_Move_5:
walk_left
step_end

RocketHideoutViridian_Escena_9_Move_6:
face_right
step_end

RocketHideoutViridian_Escena_9_Move_7:
walk_in_place_right
step_end

RocketHideoutViridian_Escena_9_Move_8:
walk_left
walk_left
walk_left
walk_left
step_end


RocketHideoutViridian_Escena_9_Move_8.1:
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
step_end


RocketHideoutViridian_Escena_9_Move_9:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_down
walk_fast_down
walk_fast_down
step_end

RocketHideoutViridian_Escena_9_Move_10:
walk_up
walk_up
walk_up
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
walk_down
walk_down
step_end

RocketHideoutViridian_Escena_9_Texto_1:
	.string "GIOVANNI: Ich habe dir doch\n"
	.string "ausdrücklich gesagt, dass du zusammen\l"
	.string "mit deiner Mutter in JOHTO bleiben\l"
	.string "sollst! Bist du dir überhaupt im Klaren,\l"
	.string "in was für einer Gefahr du wärst, wenn\l"
	.string "sie herausfinden, wer du bist?!$"

RocketHideoutViridian_Escena_9_Texto_2:
	.string "????: Was macht das schon? Wie kannst\n"
	.string "du es wagen, die Organisation\l"
	.string "aufzulösen, für die du all die Jahre\l"
	.string "gekämpft hast?! Alle Medien in KANTO\l"
	.string "machen sich über dich lustig!$"

RocketHideoutViridian_Escena_9_Texto_3:
	.string "GIOVANNI: Du bist noch zu jung und\n"
	.string "solltest nicht in all das hier\l"
	.string "reingezogen werden. Die Gründe für\l"
	.string "meine Entscheidung gehen weit über\l"
	.string "dein derzeitiges Verständnis hinaus.\p"
	.string "Eines Tages, wenn all das vorbei ist,\n"
	.string "wirst du deine Antworten bekommen und\l"
	.string "alles verstehen. Das verspreche ich dir.$"

RocketHideoutViridian_Escena_9_Texto_4:
	.string "????: Da gibt es nichts zu verstehen!\p"
	.string "Du hast versagt! Das ist alles! Du\n"
	.string "wurdest besiegt und hast aufgegeben!$"

RocketHideoutViridian_Escena_9_Texto_4.1:
	.string "Manchmal sind die Dinge nicht so\n"
	.string "einfach und gehen über bloßes Gewinnen\l"
	.string "oder Verlieren hinaus. Diese\l"
	.string "Geschehnisse dienen einem größeren\l"
	.string "Zweck. Es ist unmöglich, dies zu\l"
	.string "begreifen, wenn man sie einzeln oder\l"
	.string "von außen betrachtet, wie es ein bloßer\l"
	.string "Zuschauer tut. Aber im Gesamtbild {PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_9_Texto_5:
	.string "Der Beste … Du hast mir gesagt, du\n"
	.string "wolltest der beste TRAINER auf der\l"
	.string "Welt werden!$"

RocketHideoutViridian_Escena_9_Texto_6:
	.string "Und jetzt willst du einfach aufgeben?!\n"
	.string "Was hast du jetzt vor?$"

RocketHideoutViridian_Escena_9_Texto_7:
.string "…$"

RocketHideoutViridian_Escena_9_Texto_8:
	.string "GIOVANNI: Ein Mann, der sich keine\n"
	.string "Niederlagen eingestehen kann, wird\l"
	.string "nicht in der Lage sein, sich zu\l"
	.string "verbessern {PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_9_Texto_9:
	.string "Ich muss eine Zeit lang allein sein,\n"
	.string "um eine noch stärkere Organisation\l"
	.string "aufzubauen.$"

RocketHideoutViridian_Escena_9_Texto_10:
	.string "????: Pff! Eine Organisation aus einer\n"
	.string "Bande von Kleinkriminellen! Und wenn es\l"
	.string "wirklich darauf ankommt, werden sie von\l"
	.string "einem Kind besiegt! Wie peinlich!$"

RocketHideoutViridian_Escena_9_Texto_11:
	.string "GIOVANNI: Eine gut strukturierte\n"
	.string "Organisation mit genügend Ressourcen\l"
	.string "sollte in der Lage sein, eine große\l"
	.string "Macht zu haben.$"

RocketHideoutViridian_Escena_9_Texto_12:
	.string "Eine Organisation, die das anstrebt …$"

RocketHideoutViridian_Escena_9_Texto_13:
	.string "Ich war nie in der Lage, das Potenzial\n"
	.string "meiner Untergebenen voll\l"
	.string "auszuschöpfen {PAUSE 5}…{PAUSE 5}$"

RocketHideoutViridian_Escena_9_Texto_14:
	.string "Ich schwöre, ich werde TEAM ROCKET\n"
	.string "eines Tages wieder auferstehen lassen!$"

RocketHideoutViridian_Escena_9_Texto_15:
	.string "????: Ich verstehe dein wirres\n"
	.string "Gelaber nicht!$"

RocketHideoutViridian_Escena_9_Texto_16:
	.string "Dein Wahn ergibt für mich keinen Sinn!$"

RocketHideoutViridian_Escena_9_Texto_17:
	.string "{PAUSE 25}…{PAUSE 25} Du wirst es eines Tages verstehen.$"

RocketHideoutViridian_Escena_9_Texto_18:
	.string "????: Ich will es gar nicht verstehen!$"

RocketHideoutViridian_Escena_9_Texto_19:
	.string "Ich werde nicht so wie du enden!\p"
	.string "Umgeben von erbärmlichen Lakaien, die\n"
	.string "deiner Organisation nur beitreten, um\l"
	.string "sich wichtig und lebendig zu fühlen! Auf\l"
	.string "sich alleine gestellt sind sie nichts!$"

RocketHideoutViridian_Escena_9_Texto_20:
	.string "Ich werde ein starker Mann werden,\n"
	.string "aus eigener Kraft! Aus eigener!$"

RocketHideoutViridian_Escena_9_Texto_21:
.string "AUS EIGENER!!$"

RocketHideoutViridian_Escena_9_Texto_22:
	.string "GIOVANNI: Das hoffe ich SILBER. Es ist\n"
	.string "das Beste für uns beide. Halte dich von\l"
	.string "diesem Theater fern. Entwickle dich\l"
	.string "unabhängig. Währenddessen werde ich\l"
	.string "die Region, in der du lebst, so formen,\l"
	.string "wie sie sein sollte {PAUSE 25}…{PAUSE 25} um jeden Preis!$"



