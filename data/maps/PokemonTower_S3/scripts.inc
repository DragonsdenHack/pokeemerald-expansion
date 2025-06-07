PokemonTower_S3_MapScripts::
map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PokemonTower_S3_OnResume
	.byte 0

PokemonTower_S3_OnResume:
map_script_2 VAR_UNUSED_0x40F8, 24, PokemonTower_S3_Gray
	.2byte 0

PokemonTower_S3_Gray::
call Script_RemoveTint
setvar VAR_UNUSED_0x40F8, 25
end

PokemonTower_S3_Tumba_Move_1:
emote_exclamation_mark
step_end

PokemonTower_S3_Tumba_Move_2:
walk_slow_down
delay_16
step_end

PokemonTower_S3_Tumba_Move_2.1:
walk_slow_up
delay_16
step_end

PokemonTower_S3_Tumba::
lock
msgbox PokemonTower_S3_Tumba_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_12 MSGBOX_AUTOCLOSE
delay 50
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
playse SE_SWITCH
animateflash 2
setflashlevel 2
waitse
delay 30
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_S3_Tumba_Move_1
waitmovement 0x0
delay 10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower_S3_Tumba_Move_4
waitmovement 0x0
special RemoveCameraObject
playse SE_M_PSYBEAM2
clearflag FLAG_HOENN_675
addobject 1
delay 50
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
delay 50
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox PokemonTower_S3_Tumba_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
special SpawnCameraObject
applymovement 1, PokemonTower_S3_Tumba_Move_2
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower_S3_Tumba_Move_4.1
waitmovement 0x0
special RemoveCameraObject
delay 30
msgbox PokemonTower_S3_Tumba_Texto_14 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 30
trainerbattle_no_intro TRAINER_TRAINER_703, PokemonTower_S3_Tumba_Texto_15
delay 30
msgbox PokemonTower_S3_Tumba_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_S3_Tumba_Move_3
waitmovement 0x0
delay 25
msgbox PokemonTower_S3_Tumba_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_19 MSGBOX_AUTOCLOSE
delay 50
special SpawnCameraObject
applymovement 1, PokemonTower_S3_Tumba_Move_2.1
applymovement OBJ_EVENT_ID_CAMERA, PokemonTower_S3_Tumba_Move_4
waitmovement 0x0
special RemoveCameraObject
delay 50
msgbox PokemonTower_S3_Tumba_Texto_20 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 15
addobject 1
delay 50
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
delay 10
msgbox PokemonTower_S3_Tumba_Texto_21 MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonTower_S3_Tumba_Move_1
waitmovement 0x0
delay 45
msgbox PokemonTower_S3_Tumba_Texto_23 MSGBOX_AUTOCLOSE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 10
removeobject 1
delay 10
addobject 1
delay 20
setvar VAR_UNUSED_0x40F8, 15
setflag FLAG_HOENN_675
delay 20
playse SE_M_DETECT
dofieldeffectsparkle 11, 6, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_9
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Jirachi_Move_10
setvar VAR_RESULT, 4
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
special HealPlayerParty
warpsilent MAP_LAVENDER_TOWN_PASADO, 8, 0
delay 150
release
release
end

PokemonTower_S3_Tumba_Move_4.1:
walk_slow_down
delay_16
walk_slow_down
delay_16
step_end

PokemonTower_S3_Tumba_Move_4:
walk_up
walk_up
step_end

PokemonTower_S3_Tumba_Move_3:
walk_in_place_up
step_end

PokemonTower_S3_Tumba_Texto_1:
	.string "Der Grabstein ist stark verwittert.$"

PokemonTower_S3_Tumba_Texto_2:
	.string "Und dennoch sind goldene und silbrig\n"
	.string "schimmernde Buchstaben klar zu\l"
	.string "erkennen.$"

PokemonTower_S3_Tumba_Texto_3:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower_S3_Tumba_Texto_4:
	.string "-Der TRAINER, der hier begraben liegt,\n"
	.string "hat alles erreicht, was man in dieser\l"
	.string "Welt erreichen kann …$"

PokemonTower_S3_Tumba_Texto_5:
	.string "… Über Jahrzehnte hinweg\n"
	.string "ungeschlagener CHAMP seiner Region,\l"
	.string "stolzer Besitzer von 32 ORDEN und im\l"
	.string "Besitz jedes jemals entdeckten\l"
	.string "POKéMON …$"

PokemonTower_S3_Tumba_Texto_6:
	.string "Ganz gleich, welche Prüfung sich ihm in\n"
	.string "den Weg stellte, ganz gleich, wie groß\l"
	.string "sie war - nichts war für ihn jemals\l"
	.string "unerreichbar …$"

PokemonTower_S3_Tumba_Texto_7:
	.string "… Doch trotz seiner unzähligen Kämpfe,\n"
	.string "Reisen und Taten …$"

PokemonTower_S3_Tumba_Texto_8:
	.string "… Waren seine Mühen vergebens. Es\n"
	.string "spielte keine Rolle, wie großartig er in\l"
	.string "allem war …$"

PokemonTower_S3_Tumba_Texto_9:
	.string "… Dem Tod konnte er nicht entrinnen …"

PokemonTower_S3_Tumba_Texto_10:
	.string "… Jede Facette seines legendären\n"
	.string "Lebens verweilt hier.\p"
	.string "Seine Zeitgenossen gerieten im\n"
	.string "langsamen und stetigen Lauf der\l"
	.string "Zeit in Vergessenheit …$"

PokemonTower_S3_Tumba_Texto_11:
	.string "… Vielleicht ist für ihn diese\n"
	.string "Erinnerung ein Ausdruck seines\l"
	.string "Wunsches, unsterblich zu sein …-$"

PokemonTower_S3_Tumba_Texto_12:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower_S3_Tumba_Texto_13:
	.string "????: CHAMP{PAUSE 15}…{PAUSE 15}?$"

PokemonTower_S3_Tumba_Texto_14:
	.string "{PAUSE 15}…{PAUSE 15} … Das wird sich zeigen …{PAUSE 15}…{PAUSE 15}$"

PokemonTower_S3_Tumba_Texto_15:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower_S3_Tumba_Texto_16:
	.string "CHAMP{PAUSE 15}…{PAUSE 15} Ein wahrer CHAMP?$"

PokemonTower_S3_Tumba_Texto_17:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower_S3_Tumba_Texto_18:
	.string "Der LAVANDIA CULT?$"

PokemonTower_S3_Tumba_Texto_19:
	.string "Ich kann dich nicht an diesen Ort führen.$"

PokemonTower_S3_Tumba_Texto_20:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower_S3_Tumba_Texto_21:
	.string "Aber ich kann ihn dir zeigen.$"

PokemonTower_S3_Tumba_Texto_22:
	.string "{PAUSE 15}…{PAUSE 15} …{PAUSE 15}$"

PokemonTower_S3_Tumba_Texto_23:
	.string "Kehren wir in die Zeit zurück … vor 50\n"
	.string "Jahren …$"

PokemonTower_S3_Epitafio::
lock
msgbox PokemonTower_S3_Tumba_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox PokemonTower_S3_Tumba_Texto_11 MSGBOX_AUTOCLOSE
delay 15
release
end
