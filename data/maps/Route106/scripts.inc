Route106_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route106_OnFrame
	.byte 0

Route106_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 243, Route106_Ariana_Despues
	.2byte 0

Route106_EventScript_TrainerTipsSign::
	msgbox Route106_Text_TrainerTips, MSGBOX_SIGN
	end

Route106_EventScript_Douglas::
	trainerbattle_single TRAINER_TRAINER_416, Route106_Text_DouglasIntro, Route106_Text_DouglasDefeated
	msgbox Route106_Text_DouglasPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Kyla::
	trainerbattle_single TRAINER_TRAINER_417, Route106_Text_KylaIntro, Route106_Text_KylaDefeated
	msgbox Route106_Text_KylaPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Elliot::
	trainerbattle_single TRAINER_TRAINER_418, Route106_Text_ElliotIntro, Route106_Text_ElliotDefeated,
	msgbox Route106_Text_ElliotPostBattle, MSGBOX_DEFAULT
	release
	end

Route106_EventScript_ElliotRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route106_Text_ElliotRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_ELLIOT_1
	release
	end

Route106_EventScript_ElliotRematch::
	trainerbattle_rematch TRAINER_ELLIOT_1, Route106_Text_ElliotRematchIntro, Route106_Text_ElliotRematchDefeated
	msgbox Route106_Text_ElliotRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_EventScript_Ned::
	trainerbattle_single TRAINER_TRAINER_419, Route106_Text_NedIntro, Route106_Text_NedDefeated
	msgbox Route106_Text_NedPostBattle, MSGBOX_AUTOCLOSE
	end

Route106_Text_TrainerTips:
	.string "TRAINER TIPS\p"
	.string "Advice on catching POKéMON with a ROD:\n"
	.string "Press the A Button if you get a bite.$"

Route106_Tristana::
lock
msgbox Route106_Tristana_Texto_1 MSGBOX_DEFAULT
release
end

Route106_Tristana_Texto_1:
	.string "Está durmiendo{PAUSE 5}…{PAUSE 5}$"

Route106_Ariana_Activacion::
lock
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
warpsilent MAP_GAME_CORNER_MAUVILLE_HIDEOUT_S2, 30, 13
waitmovement 0x0
release
end

Route106_Ariana_Move_1:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_left
walk_slow_left
step_end

Route106_Ariana_Move_2:
walk_down
walk_right
walk_right
walk_right
walk_right
walk_right
delay_16
delay_8
walk_in_place_right
step_end

Route106_Ariana_Move_3:
delay_16
walk_in_place_right
walk_left
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

Route106_Ariana_Move_4:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_right
step_end

Route106_Ariana_Move_5:
walk_in_place_right
step_end

Route106_Ariana_Move_6:
emote_exclamation_mark
step_end

Route106_Ariana_Move_7:
walk_slow_right
delay_16
walk_in_place_right
delay_16
step_end

Route106_Ariana_Move_8:
walk_slow_left
step_end

Route106_Ariana::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, Route106_Ariana_Move_1
waitmovement 0x0
special RemoveCameraObject
delay 20
applymovement 4, Route106_Ariana_Move_2
waitmovement 0x0
msgbox Route106_Ariana_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox Route106_Ariana_Texto_2 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_1
addobject 13
applymovement 4, Route106_Ariana_Move_3
waitmovement 0x0
applymovement 13, Route106_Ariana_Move_4
waitmovement 0x0
delay 15
msgbox Route106_Ariana_Texto_3 MSGBOX_AUTOCLOSE
applymovement 13, Route106_Ariana_Move_5
waitmovement 0x0
msgbox Route106_Ariana_Texto_4 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route106_Ariana_Move_6
waitmovement 0x0
msgbox Route106_Ariana_Texto_5 MSGBOX_AUTOCLOSE
applymovement 13, Route106_Ariana_Move_7
waitmovement 0x0
playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Route106_Ariana_Texto_6 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, Route106_Ariana_Move_6
waitmovement 0x0
applymovement 1, Route106_Ariana_Move_8
waitmovement 0x0
msgbox Route106_Ariana_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, Route106_Ariana_Move_5
waitmovement 0x0
msgbox Route106_Ariana_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, Route106_Ariana_Move_9
waitmovement 0x0
msgbox Route106_Ariana_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, Route106_Ariana_Move_10
waitmovement 0x0
msgbox Route106_Ariana_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, Route106_Ariana_Move_11
waitmovement 0x0
msgbox Route106_Ariana_Texto_11 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Texto_12 MSGBOX_AUTOCLOSE
applymovement 13, Route106_Ariana_Move_3
waitmovement 0x0
msgbox Route106_Ariana_Texto_13 MSGBOX_AUTOCLOSE
playmoncry SPECIES_XURKITREE, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Route106_Ariana_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, Route106_Ariana_Move_12
waitmovement 0x0
delay 15
msgbox Route106_Ariana_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_POKENAV_CALL
waitse
playse SE_PIN
applymovement 1, Route106_Ariana_Move_6
waitmovement 0x0
applymovement 1, Route106_Ariana_Move_13
waitmovement 0x0
delay 15
playse SE_POKENAV_HANG_UP
waitse
delay 15
msgbox Route106_Ariana_Texto_16 MSGBOX_AUTOCLOSE
delay 20
msgbox Route106_Ariana_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Texto_18 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_UNUSED_0x40F7, 240
warpsilent MAP_GRANITE_CAVE_1F, 27, 7
release
end

Route106_Ariana_Move_13:
walk_up
walk_up
step_end

Route106_Ariana_Move_12:
walk_slow_down
step_end

Route106_Ariana_Move_11:
walk_in_place_left
step_end

Route106_Ariana_Move_10:
face_left
step_end

Route106_Ariana_Move_9:
face_up
step_end

Route106_Ariana_Texto_1:
	.string "POLICÍA: Un científico de DEVON desea\n"
	.string "verla, MADAME ARIANA.$"

Route106_Ariana_Texto_2:
	.string "ARIANA: Hacédle pasar.$"

Route106_Ariana_Texto_3:
	.string "¿A qué se debe esta visita?$"

Route106_Ariana_Texto_4:
	.string "C.DEVON: Solo queríamos agradecerle su\n"
	.string "colaboración en la pequeña operación\l"
	.string "que tuvimos en MALVALANOVA.$"

Route106_Ariana_Texto_5:
	.string "ARIANA: Oh, no hay de qué. Hacen\n"
	.string "ustedes un gran trabajo para HOENN.$"

Route106_Ariana_Texto_6:
	.string "C.DEVON: Esto es para usted.$"

Route106_Ariana_Texto_7:
	.string "ARIANA: Hum{PAUSE 15}…{PAUSE 15} jamás había visto un\n"
	.string "POKÉMON así.$"

Route106_Ariana_Texto_8:
	.string "C.DEVON: Es XURKITREE: un raro POKÉMON\n"
	.string "proveniente de una región lejana. Las\l"
	.string "relaciones de DEVON con este CASINO\l"
	.string "siempre fueron buenas, y en señal de\l"
	.string "ello queremos donar este POKÉMON.$"

Route106_Ariana_Texto_9:
	.string "ARIANA: Es un POKÉMON muy curioso, sí{PAUSE 5}…{PAUSE 5}$"

Route106_Ariana_Texto_10:
	.string "C.DEVON: Puede hacer con él lo que le\n"
	.string "plazca: subastarlo en el CASINO,\l"
	.string "quedárselo y entrenarlo{PAUSE 5}…{PAUSE 5}$"

Route106_Ariana_Texto_11:
	.string "ARIANA: Muchas gracias. Dele de mi\n"
	.string "parte las gracias al PRESIDENTE.$"

Route106_Ariana_Texto_12:
	.string "C.DEVON: Así se lo haré saber.$"

Route106_Ariana_Texto_13:
	.string "{PAUSE 5}…{PAUSE 5} …{PAUSE 5}$"

Route106_Ariana_Texto_14:
	.string "ARIANA: Mmm… vaya… parece ser un\n"
	.string "POKÉMON poderoso, ¿será LEGENDARIO?$"

Route106_Ariana_Texto_15:
	.string "Parece haber sido sobrecargado con un\n"
	.string "exceso de energía eléctrica… bueno,\l"
	.string "qué más da.$"

Route106_Ariana_Texto_16:
	.string "¿Quién es?$"

Route106_Ariana_Texto_17:
	.string "????: {PAUSE 25}…{PAUSE 25} …{PAUSE 25} Ha pasado mucho tiempo.$"

Route106_Ariana_Texto_18:
	.string "ARIANA: {PAUSE 5}…{PAUSE 5} {PAUSE 5}…{PAUSE 5}$"

Route106_Ariana_Despues_Move_1:
emote_exclamation_mark
step_end

Route106_Ariana_Despues_Move_2:
face_right
step_end

Route106_Ariana_Despues_Move_3:
walk_slow_left
step_end

Route106_Ariana_Despues_Move_4:
delay_16
face_down
delay_16
step_end

Route106_Ariana_Despues_Move_5:
delay_16
delay_16
face_left
delay_16
delay_16
face_down
delay_16
delay_16
step_end

Route106_Ariana_Despues_Move_6:
walk_in_place_left
step_end



Route106_Ariana_Despues::
lock
delay 25
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Route106_Ariana_Despues_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route106_Ariana_Despues_Move_2
applymovement 7, Route106_Ariana_Despues_Move_3
waitmovement 0x0
delay 15
msgbox Route106_Ariana_Despues_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_2 MSGBOX_AUTOCLOSE
applymovement 7, Route106_Ariana_Despues_Move_3
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_3 MSGBOX_AUTOCLOSE
applymovement 7, Route106_Ariana_Despues_Move_4
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_4 MSGBOX_AUTOCLOSE
applymovement 7, Route106_Ariana_Despues_Move_5
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_5 MSGBOX_AUTOCLOSE
applymovement 7, Route106_Ariana_Despues_Move_6
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, Route106_Ariana_Despues_Move_3
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_7 MSGBOX_AUTOCLOSE
applymovement 7, Route106_Ariana_Despues_Move_6
waitmovement 0x0
setvar VAR_UNUSED_0x40F7, 244
msgbox Route106_Ariana_Despues_Texto_8 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route106_Ariana_No
goto Route106_Ariana_Si

Route106_Ariana_Si::
msgbox Route106_Ariana_Despues_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Route106_Ariana_Si_Move_1
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_13 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Route106_Ariana_Si_Move_1
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_15 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_16 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Route106_Ariana_Si_Move_1
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_17 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_18 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_19 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Route106_Ariana_Si_Move_1
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_21 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Route106_Ariana_Si_Move_1
waitmovement 0x0
msgbox Route106_Ariana_Despues_Texto_22 MSGBOX_AUTOCLOSE
delay 15
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Route106_Ariana_Despues_Texto_23 MSGBOX_DEFAULT
waitfanfare
delay 15
msgbox Route106_Ariana_Despues_Texto_24 MSGBOX_AUTOCLOSE
delay 15
msgbox Route106_Ariana_Despues_Texto_25 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_690
playmoncry SPECIES_HONCHKROW, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 7
waitfieldeffect FLDEFF_NPCFLY_OUT
setflag FLAG_HOENN_14
release
end

Route106_Ariana_No::
msgbox Route106_Ariana_Despues_Texto_10 MSGBOX_AUTOCLOSE
release
end

Route106_Ariana_NPC::
lock
faceplayer
msgbox Route106_Ariana_Despues_Texto_9 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route106_Ariana_No
goto Route106_Ariana_Si

Route106_Ariana_Si_Move_1:
face_up
delay_16
face_player
step_end


Route106_Ariana_Despues_Texto_1:
	.string "ARIANA: Estás aquí, lo sabía.$"

Route106_Ariana_Despues_Texto_2:
	.string "Alguien que no conoce HOENN solo puede\n"
	.string "estar en lugares muy concretos como\l"
	.string "este.$"

Route106_Ariana_Despues_Texto_3:
	.string "En el CASINO fui algo injusta contigo:\n"
	.string "lo que haya podido ocurrir entre\l"
	.string "GIOVANNI y yo en el pasado no es tu\l"
	.string "culpa. Pero no he venido hasta aquí\l"
	.string "para disculparme.$"

Route106_Ariana_Despues_Texto_4:
	.string "No sé si fue casualidad o no, pero desde\n"
	.string "que entraste a mi CASINO no han parado\l"
	.string "de ocurrir cosas.$"

Route106_Ariana_Despues_Texto_5:
	.string "Y algunas de ellas muy extrañas, me\n"
	.string "hicieron reflexionar sobre esa cara\l"
	.string "oculta de DEVON que mencionaste.$"

Route106_Ariana_Despues_Texto_6:
	.string "Te he buscado porque quería hablar\n"
	.string "contigo sobre eso.$"

Route106_Ariana_Despues_Texto_7:
	.string "Escúchame, lo que voy a proponerte es\n"
	.string "arriesgado, pero a veces, para\l"
	.string "descubrir verdades ocultas hay que\l"
	.string "estar dispuesto a poner en juego la\l"
	.string "vida propia.$"

Route106_Ariana_Despues_Texto_8:
	.string "Dime, ¿estás dispuesto a poner en\n"
	.string "riesgo la tuya?$"

Route106_Ariana_Despues_Texto_9:
	.string "¿Vas a escuchar mi proposición?$"

Route106_Ariana_Despues_Texto_10:
	.string "Un verdadero miembro del TEAM ROCKET\n"
	.string "jamás rechazaría correr riesgos, me has\l"
	.string "decepcionado. Por eso HOENN nunca\l"
	.string "recordará tu nombre.$"

Route106_Ariana_Despues_Texto_11:
	.string "No en vano eres un ADMIN.ROCKET, me\n"
	.string "alegra saber que tu actitud está a la\l"
	.string "altura de tu puesto. Escucha.$"

Route106_Ariana_Despues_Texto_12:
	.string "DEVON va a inaugurar el SS.MAREA, en un\n"
	.string "evento que va a organizarse dentro de\l"
	.string "nada en CIUDAD PORTUAL.$"

Route106_Ariana_Despues_Texto_13:
	.string "Y para celebrar la inauguración van\n"
	.string "a cubrir la ruta PORTUAL-CALAGUA.$"

Route106_Ariana_Despues_Texto_14:
	.string "Conozco ese barco, es similar a un\n"
	.string "modelo algo más antiguo.$"

Route106_Ariana_Despues_Texto_15:
	.string "Tú quieres ir a CIUDAD ALGARIA,\n"
	.string "¿verdad? Actualmente no podrás por\l"
	.string "todo el alboroto de este evento.\l"
	.string "Entonces, te propongo matar dos\l"
	.string "pájaros de un tiro.$"

Route106_Ariana_Despues_Texto_16:
	.string "Irás hasta CALAGUA infiltrado en el\n"
	.string "SS.MAREA, y de paso espiaremos a DEVON.$"

Route106_Ariana_Despues_Texto_17:
	.string "El PRESIDENTE de DEVON asistirá, y\n"
	.string "seguramente otros importantes cargos\l"
	.string "de la empresa.$"

Route106_Ariana_Despues_Texto_18:
	.string "Mientras siga en PORTUAL, aquellos que\n"
	.string "tengan el TICKET BARCO podrán estar en\l"
	.string "el evento. Una vez parta hacia CALAGUA,\l"
	.string "se evacuará a todo el que no sea de\l"
	.string "DEVON.$"

Route106_Ariana_Despues_Texto_19:
	.string "Mi propuesta es mezclarnos con la\n"
	.string "muchedumbre mientras el barco sigue en\l"
	.string "PORTUAL, y colarnos en el ALMACÉN del\l"
	.string "barco.$"

Route106_Ariana_Despues_Texto_20:
	.string "Allí esperaremos a que zarpe y… cuando\n"
	.string "todos los periodistas y población civil\l"
	.string "se hayan ido, y DEVON se meta en los\l"
	.string "camarotes, podremos espiarlos desde\l"
	.string "fuera.$"

Route106_Ariana_Despues_Texto_21:
	.string "No hay lugar más privado que en medio\n"
	.string "del mar con solo gente de tu propia\l"
	.string "organización: si tienen que hablar\l"
	.string "sobre verdades ocultas, lo harán ahí.$"

Route106_Ariana_Despues_Texto_22:
	.string "Toma esto, {PLAYER}.$"

Route106_Ariana_Despues_Texto_23:
	.string "¡{PLAYER} obtuvo un TICKET BARCO!$"

Route106_Ariana_Despues_Texto_24:
	.string "Ahora tú también podrás entrar al\n"
	.string "SS.MAREA.$"

Route106_Ariana_Despues_Texto_25:
	.string "Te estaré esperando dentro, no tardes\n"
	.string "y recuerda: el barco se encuentra\l"
	.string "dentro del puerto de CIUDAD PORTUAL.$"

