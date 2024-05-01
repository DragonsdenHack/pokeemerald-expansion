.set LOCALID_HIDEOUT_GUARD, 5

JaggedPass_MapScripts::
    map_script MAP_SCRIPT_ON_FRAME_TABLE, JaggedPass_Magno_OnFrame
	map_script MAP_SCRIPT_ON_RESUME, JaggedPass_OnResume
	map_script MAP_SCRIPT_ON_TRANSITION, JaggedPass_OnTransition
	map_script MAP_SCRIPT_ON_LOAD, JaggedPass_OnLoad
	.byte 0

JaggedPass_Magno_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 222, JaggedPass_Encuentro_Magno
	.2byte 0

JaggedPass_OnResume:
	setstepcallback STEP_CB_ASH
	call_if_eq VAR_JAGGED_PASS_STATE, 0, JaggedPass_EventScript_CheckHasMagmaEmblem
	end

JaggedPass_EventScript_CheckHasMagmaEmblem::
	checkitem ITEM_MAGMA_EMBLEM
	goto_if_eq VAR_RESULT, TRUE, JaggedPass_EventScript_SetReadyToOpenHideout
	return

JaggedPass_EventScript_SetReadyToOpenHideout::
	setvar VAR_JAGGED_PASS_STATE, 1
	return

JaggedPass_OnTransition:
	call_if_eq VAR_JAGGED_PASS_ASH_WEATHER, 1, JaggedPass_EventScript_SetWeatherAsh
	end

JaggedPass_EventScript_SetWeatherAsh::
	setweather WEATHER_VOLCANIC_ASH
	doweather
	return

JaggedPass_OnLoad:
	goto_if_le VAR_JAGGED_PASS_STATE, 1, JaggedPass_EventScript_ConcealHideoutEntrance
	end

JaggedPass_EventScript_ConcealHideoutEntrance::
	setmetatile 16, 17, METATILE_Lavaridge_RockWall, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_RockWall, TRUE
	end

JaggedPass_EventScript_OpenMagmaHideout::
	lockall
	setvar VAR_0x8004, 1  @ vertical pan
	setvar VAR_0x8005, 1  @ horizontal pan
	setvar VAR_0x8006, 8  @ num shakes
	setvar VAR_0x8007, 5  @ shake delay
	special ShakeCamera
	waitstate
	msgbox JaggedPass_Text_BoulderShakingInResponseToEmblem, MSGBOX_DEFAULT
	closemessage
	setvar VAR_0x8004, 1   @ vertical pan
	setvar VAR_0x8005, 1   @ horizontal pan
	setvar VAR_0x8006, 16  @ num shakes
	setvar VAR_0x8007, 3   @ shake delay
	special ShakeCamera
	waitstate
	playse SE_EFFECTIVE
	setmetatile 16, 17, METATILE_Lavaridge_CaveEntrance_Top, TRUE
	setmetatile 16, 18, METATILE_Lavaridge_CaveEntrance_Bottom, FALSE
	special DrawWholeMapView
	delay 30
	setvar VAR_JAGGED_PASS_STATE, 2
	waitse
	releaseall
	end

JaggedPass_EventScript_MagmaHideoutGuard::
	lockall
	goto_if_set FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS, JaggedPass_EventScript_GuardDefeated
	waitse
	playse SE_PIN
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GruntIntro, MSGBOX_DEFAULT
	closemessage
	trainerbattle_no_intro TRAINER_GRUNT_JAGGED_PASS, JaggedPass_Text_GruntDefeat
	setflag FLAG_BEAT_MAGMA_GRUNT_JAGGED_PASS
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_GuardDefeated::
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FacePlayer
	waitmovement 0
	msgbox JaggedPass_Text_GoWhereverYouWant, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_HIDEOUT_GUARD, Common_Movement_FaceOriginalDirection
	waitmovement 0
	releaseall
	end

JaggedPass_EventScript_Eric::
	trainerbattle_single TRAINER_TRAINER_446, JaggedPass_Text_EricIntro, JaggedPass_Text_EricDefeat
	msgbox JaggedPass_Text_EricPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Diana::
	trainerbattle_single TRAINER_TRAINER_447, JaggedPass_Text_DianaIntro, JaggedPass_Text_DianaDefeat,
	msgbox JaggedPass_Text_DianaPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterDiana::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_DianaRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_DIANA_1
	release
	end

JaggedPass_EventScript_DianaRematch::
	trainerbattle_rematch TRAINER_DIANA_1, JaggedPass_Text_DianaRematchIntro, JaggedPass_Text_DianaRematchDefeat
	msgbox JaggedPass_Text_DianaPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Ethan::
	trainerbattle_single TRAINER_TRAINER_450, JaggedPass_Text_EthanIntro, JaggedPass_Text_EthanDefeat,
	msgbox JaggedPass_Text_EthanPostBattle, MSGBOX_DEFAULT
	release
	end

JaggedPass_EventScript_RegisterEthan::
	special PlayerFaceTrainerAfterBattle
	msgbox JaggedPass_Text_EthanRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ETHAN_1
	release
	end

JaggedPass_EventScript_EthanRematch::
	trainerbattle_rematch TRAINER_ETHAN_1, JaggedPass_Text_EthanRematchIntro, JaggedPass_Text_EthanRematchDefeat
	msgbox JaggedPass_Text_EthanPostRematch, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Julio::
	trainerbattle_single TRAINER_TRAINER_449, JaggedPass_Text_JulioIntro, JaggedPass_Text_JulioDefeat
	msgbox JaggedPass_Text_JulioPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_EventScript_Autumn::
	trainerbattle_single TRAINER_TRAINER_448, JaggedPass_Text_AutumnIntro, JaggedPass_Text_AutumnDefeat
	msgbox JaggedPass_Text_AutumnPostBattle, MSGBOX_AUTOCLOSE
	end

JaggedPass_Text_EricIntro:
	.string "¡El DESFILADERO del MONTE CENIZO!\n"
	.string "Siempre he querido encontrar una\l"
	.string "montaña como esta. Esta superficie\l"
	.string "irregular… ¡Me hace dar botes de\l"
	.string "alegría!$"

JaggedPass_Text_EricDefeat:
	.string "Perder me deja hecho polvo…$"

JaggedPass_Text_EricPostBattle:
	.string "Sí, he perdido en el combate POKÉMON…\n"
	.string "¡Pero seguro llego a cualquier cima\l"
	.string "antes que tú!$"

JaggedPass_Text_DianaIntro:
	.string "Este lugar no es el típico al que viene\n"
	.string "la gente a hacer picnics.$"

JaggedPass_Text_DianaDefeat:
	.string "¡Ooooh, no! ¡El terreno es demasiado\n"
	.string "irregular!$"

JaggedPass_Text_DianaPostBattle:
	.string "¿Sabes una cosa? Hay gente muy\n"
	.string "habilidosa que sube con la bici por este\l"
	.string "horrible camino lleno de baches.$"

JaggedPass_Text_DianaRegister:
	.string "Will you ever be back in this area?\n"
	.string "If you do return, I'd like a rematch.$"

JaggedPass_Text_DianaRematchIntro:
	.string "Picnics are fun wherever you go.\n"
	.string "Just like POKéMON!$"

JaggedPass_Text_DianaRematchDefeat:
	.string "I only lost because the ground is\n"
	.string "too bumpy!$"

JaggedPass_Text_DianaPostRematch:
	.string "I'll forget about losing and just\n"
	.string "enjoy this bumpy hike.$"

JaggedPass_Text_EthanIntro:
	.string "Es díficil caminar por el DESFILADERO,\n"
	.string "pero es lo mejor para entrenarse.$"

JaggedPass_Text_EthanDefeat:
	.string "¡Oye, no es justo, que todavía estaba\n"
	.string "intentado mantener el equilibrio!$"

JaggedPass_Text_EthanPostBattle:
	.string "Si tuviera una BICI ACROBÁTICA, podría\n"
	.string "saltar por encima de cualquier\l"
	.string "desnivel…$"

JaggedPass_Text_EthanRegister:
	.string "When I get more used to this bumpiness,\n"
	.string "I'll be sure to win!\p"
	.string "Can you register me in your POKéNAV?$"

JaggedPass_Text_EthanRematchIntro:
	.string "I got used to this bumpiness.\n"
	.string "I sing while I climb now.$"

JaggedPass_Text_EthanRematchDefeat:
	.string "It's still not easy to battle on this\n"
	.string "bumpy ground…$"

JaggedPass_Text_EthanPostRematch:
	.string "I should get an ACRO BIKE from RYDEL\n"
	.string "in MAUVILLE CITY…$"

JaggedPass_Text_GruntIntro:
	.string "Wah!\n"
	.string "What are you doing here?\p"
	.string "What am I doing in a place like this?\p"
	.string "What business is it of yours?$"

JaggedPass_Text_GruntDefeat:
	.string "Urrrgh…\p"
	.string "I should've ducked into our HIDEOUT\n"
	.string "right away…$"

JaggedPass_Text_GoWhereverYouWant:
	.string "Okay, oh-kay!\n"
	.string "I admit it--you're strong!\p"
	.string "Don't worry about me.\n"
	.string "Go wherever you want!$"

JaggedPass_Text_BoulderShakingInResponseToEmblem:
	.string "Oh! This boulder is shaking in response\n"
	.string "to the MAGMA EMBLEM!$"

JaggedPass_Text_JulioIntro:
	.string "¡Aaaah, qué susto! ¡No se puede\n"
	.string "aparecer de repente, sin avisar!$"

JaggedPass_Text_JulioDefeat:
	.string "Me has desinflado…$"

JaggedPass_Text_JulioPostBattle:
	.string "Tengo el trasero hecho polvo por culpa\n"
	.string "de todos los baches que he pillado.$"

JaggedPass_Text_AutumnIntro:
	.string "Subo esta cuesta cada día. ¡Estoy en\n"
	.string "forma!$"

JaggedPass_Text_AutumnDefeat:
	.string "Estoy sin aliento… ¿Cómo ha podido\n"
	.string "ocurrir?$"

JaggedPass_Text_AutumnPostBattle:
	.string "¿Qué será esa extraña protuberancia\n"
	.string "rocosa que hay arriba de la colina?$"

JaggedPass_Encuentro_Magno::
lock
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Encuentro_Magno_Move_1
waitmovement 0x0
delay 10
applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Encuentro_Magno_Move_2
waitmovement 0x0
msgbox JaggedPass_Encuentro_Magno_Texto_1 MSGBOX_AUTOCLOSE
applymovement 5, JaggedPass_Encuentro_Magno_Move_3
waitmovement 0x0
msgbox JaggedPass_Encuentro_Magno_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, JaggedPass_Encuentro_Magno_Move_5
applymovement 5, JaggedPass_Encuentro_Magno_Move_4
waitmovement 0x0
delay 10
playse SE_PIN
applymovement 5, JaggedPass_Encuentro_Magno_Move_1
waitmovement 0x0
msgbox JaggedPass_Encuentro_Magno_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 5, JaggedPass_Encuentro_Magno_Move_6
waitmovement 0x0
msgbox JaggedPass_Encuentro_Magno_Texto_4 MSGBOX_AUTOCLOSE
applymovement 5, JaggedPass_Encuentro_Magno_Move_7
waitmovement 0x0
playse SE_EXIT
removeobject 5
setflag FLAG_HOENN_696
setvar VAR_UNUSED_0x40F7, 223
release
end

JaggedPass_Encuentro_Magno_Move_7:
walk_up
walk_right
walk_right
walk_up
step_end

JaggedPass_Encuentro_Magno_Move_6:
delay_8
face_up
delay_8
step_end

JaggedPass_Encuentro_Magno_Move_5:
walk_down
walk_left
step_end

JaggedPass_Encuentro_Magno_Move_4:
walk_down
walk_down
walk_right
step_end

JaggedPass_Encuentro_Magno_Move_3:
delay_8
walk_slow_down
delay_8
step_end

JaggedPass_Encuentro_Magno_Move_2:
face_left
step_end

JaggedPass_Encuentro_Magno_Move_1:
emote_exclamation_mark
step_end

JaggedPass_Encuentro_Magno_Texto_1:
	.string "MAGNO: Al fin… llegó la hora GROUDON.$"

JaggedPass_Encuentro_Magno_Texto_2:
	.string "Tenemos todo para montar aquí nuestra\n"
	.string "base y planear desde aquí tu retorno.$"

JaggedPass_Encuentro_Magno_Texto_3:
	.string "Humm… tú… ¿te he visto antes?$"

JaggedPass_Encuentro_Magno_Texto_4:
	.string "… No importa. GROUDON y la ESFERA AZUL\n"
	.string "esperan.$"

