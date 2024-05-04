.set LOCALID_GROUDON, 1
.set LOCALID_GRUNT_1, 2
.set LOCALID_GRUNT_2, 3
.set LOCALID_GRUNT_3, 4
.set LOCALID_TABITHA, 5
.set LOCALID_MAXIE, 6
.set LOCALID_GROUDON_SLEEPING, 7

MagmaHideout_4F_MapScripts::
	.byte 0

MagmaHideout_4F_EventScript_Maxie::
	lockall
	playbgm MUS_ENCOUNTER_MAGMA, FALSE
	msgbox MagmaHideout_4F_Text_MaxieAwakenGroudon, MSGBOX_DEFAULT
	closemessage
	delay 20
	setvar VAR_RESULT, 1
	playse SE_M_DETECT
	dofieldeffectsparkle 18, 42, 0
	waitfieldeffect FLDEFF_SPARKLE
	setvar VAR_RESULT, 1
	playfanfare MUS_AWAKEN_LEGEND
	playse SE_ORB
	special DoOrbEffect
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	delay 150
	removeobject LOCALID_GROUDON_SLEEPING
	addobject LOCALID_GROUDON
	waitstate
	delay 60
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonApproach
	waitmovement 0
	special FadeOutOrbEffect
	waitstate
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	applymovement LOCALID_GROUDON, MagmaHideout_4F_Movement_GroudonExit
	waitmovement 0
	removeobject LOCALID_GROUDON
	delay 4
	setvar VAR_0x8004, 2  @ vertical pan
	setvar VAR_0x8005, 2  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	delay 30
	applymovement LOCALID_MAXIE, MagmaHideout_4F_Movement_MaxieLookAround
	waitmovement 0
	msgbox MagmaHideout_4F_Text_MaxieGroudonWhatsWrong, MSGBOX_DEFAULT
	closemessage
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	applymovement LOCALID_MAXIE, Common_Movement_FacePlayer
	waitmovement 0
	msgbox MagmaHideout_4F_Text_MaxieOhItWasYou, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_MAXIE_MAGMA_HIDEOUT, MagmaHideout_4F_Text_MaxieDefeat
	msgbox MagmaHideout_4F_Text_MaxieImGoingAfterGroudon, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_SLATEPORT_CITY_CAPTAIN_STERN
	clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
	setvar VAR_SLATEPORT_CITY_STATE, 1
	setflag FLAG_GROUDON_AWAKENED_MAGMA_HIDEOUT
	setvar VAR_SLATEPORT_HARBOR_STATE, 1
	fadescreen FADE_TO_BLACK
	removeobject LOCALID_MAXIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_TABITHA
	setflag FLAG_HIDE_MAGMA_HIDEOUT_GRUNTS
	fadescreen FADE_FROM_BLACK
	releaseall
	end

MagmaHideout_4F_Movement_GroudonApproach:
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	walk_slow_down
	delay_16
	delay_16
	delay_16
	step_end

MagmaHideout_4F_Movement_GroudonExit:
	slide_up
	slide_up
	step_end

MagmaHideout_4F_Movement_MaxieLookAround:
	face_left
	delay_16
	face_right
	delay_16
	face_left
	delay_16
	face_right
	delay_16
	face_up
	delay_16
	delay_16
	step_end

MagmaHideout_4F_EventScript_Grunt11::
	trainerbattle_single TRAINER_BRUNO_1, MagmaHideout_4F_Text_Grunt11Intro, MagmaHideout_4F_Text_Grunt11Defeat
	msgbox MagmaHideout_4F_Text_Grunt11PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt12::
	trainerbattle_single TRAINER_BRUNO_1, MagmaHideout_4F_Text_Grunt12Intro, MagmaHideout_4F_Text_Grunt12Defeat
	msgbox MagmaHideout_4F_Text_Grunt12PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Grunt13::
	trainerbattle_single TRAINER_BRUNO_1, MagmaHideout_4F_Text_Grunt13Intro, MagmaHideout_4F_Text_Grunt13Defeat
	msgbox MagmaHideout_4F_Text_Grunt13PostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_EventScript_Tabitha::
	trainerbattle_single TRAINER_BRUNO_1, MagmaHideout_4F_Text_TabithaIntro, MagmaHideout_4F_Text_TabithaDefeat
	msgbox MagmaHideout_4F_Text_TabithaPostBattle, MSGBOX_AUTOCLOSE
	end

MagmaHideout_4F_Text_Grunt11Intro:
	.string "I want to see GROUDON, too, but they\n"
	.string "won't let me see even its tail…\p"
	.string "It's got me feeling really frustrated.\p"
	.string "Oh, no!\n"
	.string "I blabbed about GROUDON!$"

MagmaHideout_4F_Text_Grunt11Defeat:
	.string "I guess it's impossible to win if one\n"
	.string "doesn't have a calm mind…{PAUSE 5}$"

MagmaHideout_4F_Text_Grunt11PostBattle:
	.string "I wonder if GROUDON even has a tail?$"

MagmaHideout_4F_Text_Grunt12Intro:
	.string "Fuhahaha!\n"
	.string "Soon! Very soon!\l"
	.string "Our grand objective will be achieved!$"

MagmaHideout_4F_Text_Grunt12Defeat:
	.string "Grrr…\n"
	.string "I've come so far, but now this?$"

MagmaHideout_4F_Text_Grunt12PostBattle:
	.string "MAXIE, sir!\n"
	.string "An intruder is headed your way!$"

MagmaHideout_4F_Text_Grunt13Intro:
	.string "You're not finished yet!\n"
	.string "You're not getting by me easily!$"

MagmaHideout_4F_Text_Grunt13Defeat:
	.string "Was I that easy to knock down?$"

MagmaHideout_4F_Text_Grunt13PostBattle:
	.string "C-come on, one more match…{PAUSE 5}$"

MagmaHideout_4F_Text_TabithaIntro:
	.string "Hehehe!\n"
	.string "You made it this far, so I'll tell you!\p"
	.string "That's right!\n"
	.string "Up ahead, GROUDON is sleeping!\p"
	.string "MAXIE went to GROUDON just seconds\n"
	.string "ago!\p"
	.string "It's going to awaken real soon!\n"
	.string "Hehe! Hehehe!$"

MagmaHideout_4F_Text_TabithaDefeat:
	.string "Taken down again…\n"
	.string "Hehe…{PAUSE 5}$"

MagmaHideout_4F_Text_TabithaPostBattle:
	.string "…And while you wasted time with me,\n"
	.string "MAXIE should have awakened GROUDON…{PAUSE 5}$"

MagmaHideout_4F_Text_MaxieAwakenGroudon:
	.string "MAXIE: GROUDON…\p"
	.string "Nothing could awaken you from your\n"
	.string "sleep bathed in magma…\p"
	.string "This BLUE ORB is what you sought.\n"
	.string "Wasn't it?\p"
	.string "I have brought you the BLUE ORB.\n"
	.string "Let its shine awaken you!\p"
	.string "And show me…\n"
	.string "Show me the full extent of your power!$"

MagmaHideout_4F_Text_MaxieGroudonWhatsWrong:
	.string "MAXIE: GROUDON!\n"
	.string "What's wrong?\p"
	.string "Wasn't the BLUE ORB the key?\p"
	.string "GROUDON!\n"
	.string "Where have you gone…{PAUSE 5}$"

MagmaHideout_4F_Text_MaxieOhItWasYou:
	.string "MAXIE: Oh, so it was you?\p"
	.string "I've seen you poking around uninvited\n"
	.string "here and there…\p"
	.string "I get it now!\n"
	.string "You must have pulled a cheap stunt!$"

MagmaHideout_4F_Text_MaxieDefeat:
	.string "What makes you so adept at handling\n"
	.string "POKéMON?$"

MagmaHideout_4F_Text_MaxieImGoingAfterGroudon:
	.string "MAXIE: There has to be some reason\n"
	.string "why GROUDON fled…\p"
	.string "That's what you're trying to say,\n"
	.string "aren't you?\p"
	.string "… … … … … …\n"
	.string "… … … … … …\p"
	.string "Humph…\n"
	.string "You think I didn't know that?\p"
	.string "With GROUDON gone, there is no longer\n"
	.string "any need for this blasted volcano.\p"
	.string "I am going after GROUDON, so this\n"
	.string "is where we part!$"

MagmaHideout_4F_Encuentro_Amatista_Izquierda::
lock
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_1.1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_2
waitmovement 0x0
delay 10
goto MagmaHideout_4F_Encuentro_Amatista

MagmaHideout_4F_Encuentro_Amatista_Centro::
lock
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_1.1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_2.1
waitmovement 0x0
delay 10
goto MagmaHideout_4F_Encuentro_Amatista

MagmaHideout_4F_Encuentro_Amatista_Derecha::
lock
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_1.1
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Move_2.2
waitmovement 0x0
delay 10
goto MagmaHideout_4F_Encuentro_Amatista


MagmaHideout_4F_Move_1:
emote_exclamation_mark
walk_in_place_down
step_end

MagmaHideout_4F_Move_1.1:
walk_in_place_down
step_end

MagmaHideout_4F_Move_2:
walk_right
walk_down
step_end

MagmaHideout_4F_Move_2.1:
walk_down
step_end

MagmaHideout_4F_Move_2.2:
walk_left
walk_down
step_end


MagmaHideout_4F_Encuentro_Amatista::
lock
applymovement 6, MagmaHideout_4F_Encuentro_Move_1
waitmovement 0x0
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_2 MSGBOX_AUTOCLOSE
applymovement 6, MagmaHideout_4F_Encuentro_Move_2
waitmovement 0x0
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_3 MSGBOX_AUTOCLOSE
applymovement 6, MagmaHideout_4F_Encuentro_Move_3
waitmovement 0x0
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, MagmaHideout_4F_Encuentro_Move_4
waitmovement 0x0
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, MagmaHideout_4F_Encuentro_Move_5
waitmovement 0x0
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, MagmaHideout_4F_Encuentro_Move_6
waitmovement 0x0
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, MagmaHideout_4F_Encuentro_Move_7
waitmovement 0x0
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox MagmaHideout_4F_Encuentro_Amatista_Texto_10 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MagmaHideout_4F_Encuentro_Move_9
applymovement 6, MagmaHideout_4F_Encuentro_Move_8
waitmovement 0x0
setflag FLAG_HOENN_23
removeobject 6
setvar VAR_UNUSED_0x40F7, 221
release
end

MagmaHideout_4F_Encuentro_Move_9:
delay_8
delay_8
face_left
delay_8
delay_8
face_up
step_end

MagmaHideout_4F_Encuentro_Move_8:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

MagmaHideout_4F_Encuentro_Move_7:
delay_8
face_right
delay_8
face_up
step_end

MagmaHideout_4F_Encuentro_Move_6:
face_up
step_end

MagmaHideout_4F_Encuentro_Move_5:
delay_8
face_up
delay_8
delay_8
walk_slow_right
delay_8
step_end

MagmaHideout_4F_Encuentro_Move_4:
delay_8
face_left
delay_8
step_end

MagmaHideout_4F_Encuentro_Move_3:
walk_in_place_up
step_end

MagmaHideout_4F_Encuentro_Move_2:
walk_slow_up
step_end

MagmaHideout_4F_Encuentro_Move_1:
walk_up
walk_up
walk_up
step_end

MagmaHideout_4F_Encuentro_Amatista_Texto_1:
	.string "????: Así que {PLAYER}.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_2:
	.string "Después de lo ocurrido en LAVANDA,\n"
	.string "todos los altos cargos de DEVON\l"
	.string "sabemos quién eres.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_3:
	.string "Fue interesante ver cómo pudiste\n"
	.string "sobrevivir a ese poder descontrolado,\l"
	.string "incluso nuestro PRESIDENTE llegó a\l"
	.string "fruncir el ceño ante tal espectáculo.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_4:
	.string "Ver a vuestros FUERTE VÍNCULO en\n"
	.string "acción fue curioso, pero… dedicar todo\l"
	.string "tu ser a un único POKÉMON acaba siendo\l"
	.string "un impedimento para alcanzar la plena\l"
	.string "excelencia en un combate.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_5:
	.string "Por eso tu amiga perdió ante mí.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_6:
	.string "Entiendo que estás aquí por GROUDON, y\n"
	.string "su forma PRIMIGENIA.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_7:
	.string "Lo que podáis hacer aquí no nos\n"
	.string "preocupa, ahora mismo vamos tras cosas\l"
	.string "más grandes. Solo pasé por aquí por si…\l"
	.string "había algo más profundo dentro de esta\l"
	.string "cueva.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_8:
	.string "La mayoría pasa por alto los lugares\n"
	.string "más importantes de una región, que\l"
	.string "permanecen ocultos, tú debes saberlo\l"
	.string "de primera mano.$"

MagmaHideout_4F_Encuentro_Amatista_Texto_9:
	.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

MagmaHideout_4F_Encuentro_Amatista_Texto_10:
	.string "Este no parece el caso.$"


MagmaHideout_4F_Encuentro_Groudon::
lock
clearflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
msgbox MagmaHideout_4F_Encuentro_Groudon_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_M_DETECT
waitse
dofieldeffectsparkle 17, 42, 0
waitfieldeffect FLDEFF_SPARKLE
playfanfare MUS_AWAKEN_LEGEND
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
setflag FLAG_HIDE_UNION_ROOM_PLAYER_3
delay 75
addobject 1
waitfanfare
removeobject 7
setflag FLAG_HOENN_24
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Magma3_Combate_Magno_Move_3
waitmovement 0x0
goto MagmaHideout_4F_Encuentro_Groudon_2
delay 150
removeobject LOCALID_GROUDON_SLEEPING
addobject LOCALID_GROUDON
waitstate
delay 60
applymovement 1, MagmaHideout_4F_Movement_GroudonApproach
waitmovement 0
special FadeOutOrbEffect
waitstate
setvar VAR_0x8004, 1  @ vertical pan
setvar VAR_0x8005, 1  @ horizontal pan
setvar VAR_0x8006, 8  @ num shakes
setvar VAR_0x8007, 5  @ shake delay
special ShakeCamera
waitstate
applymovement 1, MagmaHideout_4F_Movement_GroudonExit
waitmovement 0

MagmaHideout_4F_Encuentro_Groudon_2::
special SpawnCameraObject
applymovement 1, TerraCave_End_Movement_GroudonApproach
applymovement OBJ_EVENT_ID_CAMERA, Magma3_Combate_Magno_Move_9
waitmovement 0x0
special RemoveCameraObject
trainerbattle_no_intro TRAINER_TRAINER_625, NavelRock_Bottom_Combate_Lugia_Texto_2
playmoncry SPECIES_GROUDON, CRY_MODE_ENCOUNTER
waitmoncry
removeobject 1
setflag FLAG_HIDE_MAGMA_HIDEOUT_4F_GROUDON
playse SE_FAINT
waitse
msgbox MagmaHideout_4F_Encuentro_Groudon_Texto_2 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_696
setvar VAR_UNUSED_0x40F7, 222
release
end

MagmaHideout_4F_Encuentro_Groudon_Texto_2:
	.string "(La batalla con GROUDON-P ha sido\n"
	.string "registrada en la base de datos del TEAM\l"
	.string "ROCKET).$"

MagmaHideout_4F_Encuentro_Groudon_Texto_1:
	.string "{PLAYER} activó la ESFERA ROJA.$"
