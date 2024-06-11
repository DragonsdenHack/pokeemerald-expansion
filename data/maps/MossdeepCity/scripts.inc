.set LOCALID_GRUNT_1, 10
.set LOCALID_GRUNT_2, 11
.set LOCALID_GRUNT_3, 12
.set LOCALID_GRUNT_4, 13
.set LOCALID_MAXIE, 14
.set LOCALID_SCOTT, 16

MossdeepCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_OnFrame
	.byte 0

MossdeepCity_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 247, MossdeepCity_Andra
	.2byte 0

MossdeepCity_OnTransition:
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_1
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_2
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_3
	clearflag FLAG_MOSSDEEP_GYM_SWITCH_4
	call_if_set FLAG_SYS_WEATHER_CTRL, Common_EventScript_SetAbnormalWeather
	end

MossdeepCity_EventScript_PokefanF::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM08, MossdeepCity_EventScript_PokefanFMagmaGone
	msgbox MossdeepCity_Text_SpaceCenterReceivedLetter, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_PokefanFMagmaGone::
	msgbox MossdeepCity_Text_SpaceCenterLaunchingRockets, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_Sailor::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_HM08, MossdeepCity_EventScript_SailorMagmaGone
	msgbox MossdeepCity_Text_MossdeepTargetedByMagma, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_SailorMagmaGone::
	msgbox MossdeepCity_Text_FeelReliefOnLand, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_NinjaBoy::
	msgbox MossdeepCity_Text_WailmerWatching, MSGBOX_NPC
	end

MossdeepCity_EventScript_ExpertM::
	msgbox MossdeepCity_Text_LifeNeedsSeaToLive, MSGBOX_NPC
	end

MossdeepCity_EventScript_Girl::
	msgbox MossdeepCity_Text_NiceIfWorldCoveredByFlowers, MSGBOX_NPC
	end

MossdeepCity_EventScript_Woman::
	msgbox MossdeepCity_Text_SpecialSpaceCenterRock, MSGBOX_NPC
	end

MossdeepCity_EventScript_WhiteRock::
	msgbox MossdeepCity_Text_ItsAWhiteRock, MSGBOX_SIGN
	end

MossdeepCity_EventScript_GymSign::
	msgbox MossdeepCity_Text_GymSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_CitySign::
	msgbox MossdeepCity_Text_CitySign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_SpaceCenterSign::
	msgbox MossdeepCity_Text_SpaceCenterSign, MSGBOX_SIGN
	end

MossdeepCity_EventScript_VisitedMossdeep::
	setflag FLAG_VISITED_MOSSDEEP_CITY
	setvar VAR_TEMP_1, 1
	end

MossdeepCity_EventScript_TeamMagmaEnterSpaceCenter::
	lockall
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieGestureToSpaceCenter
	waitmovement 0
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_GruntFaceSpaceCenter
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_GruntFaceSpaceCenter
	waitmovement 0
	applymovement LOCALID_MAXIE, MossdeepCity_Movement_MaxieEnterSpaceCenter
	applymovement LOCALID_GRUNT_1, MossdeepCity_Movement_Grunt1EnterSpaceCenter
	applymovement LOCALID_GRUNT_2, MossdeepCity_Movement_Grunt2EnterSpaceCenter
	applymovement LOCALID_GRUNT_3, MossdeepCity_Movement_Grunt3EnterSpaceCenter
	applymovement LOCALID_GRUNT_4, MossdeepCity_Movement_Grunt4EnterSpaceCenter
	waitmovement 0
	removeobject LOCALID_MAXIE
	removeobject LOCALID_GRUNT_1
	removeobject LOCALID_GRUNT_2
	removeobject LOCALID_GRUNT_3
	removeobject LOCALID_GRUNT_4
	delay 30
	setvar VAR_MOSSDEEP_CITY_STATE, 2
	setflag FLAG_HIDE_MOSSDEEP_CITY_TEAM_MAGMA
	releaseall
	end

MossdeepCity_Movement_MaxieGestureToSpaceCenter:
	delay_16
	face_right
	delay_16
	delay_16
	delay_16
	delay_16
	face_left
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_GruntFaceSpaceCenter:
	face_right
	delay_16
	delay_16
	delay_16
	step_end

MossdeepCity_Movement_MaxieEnterSpaceCenter:
	walk_down
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt1EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt2EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt3EnterSpaceCenter:
	delay_16
	delay_8
	walk_down
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_Movement_Grunt4EnterSpaceCenter:
	delay_16
	delay_8
	walk_right
	walk_right
	walk_right
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

MossdeepCity_EventScript_Man::
	lock
	faceplayer
	msgbox MossdeepCity_Text_SurfExhilarating, MSGBOX_DEFAULT
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

MossdeepCity_EventScript_KingsRockBoy::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_KINGS_ROCK, MossdeepCity_EventScript_ReceivedKingsRock
	msgbox MossdeepCity_Text_WantKingsRockStevenGaveMe, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, MossdeepCity_EventScript_DeclineKingsRock
	msgbox MossdeepCity_Text_YouCanKeepIt, MSGBOX_DEFAULT
	giveitem ITEM_KINGS_ROCK
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_KINGS_ROCK
	release
	end

MossdeepCity_EventScript_ReceivedKingsRock::
	msgbox MossdeepCity_Text_StevensHouseOverThere, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_DeclineKingsRock::
	msgbox MossdeepCity_Text_WhatToDoWithWeirdRock, MSGBOX_DEFAULT
	release
	end

MossdeepCity_EventScript_BlackBelt::
	msgbox MossdeepCity_Text_SootopolisNewGymLeader, MSGBOX_NPC
	end

MossdeepCity_EventScript_Scott::
	lock
	faceplayer
	msgbox MossdeepCity_Text_ScottSomethingWrongWithTown, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_FACING, DIR_NORTH, MossdeepCity_EventScript_ScottExitNorth
	call_if_eq VAR_FACING, DIR_EAST, MossdeepCity_EventScript_ScottExitEast
	addvar VAR_SCOTT_STATE, 1
	removeobject LOCALID_SCOTT
	release
	end

MossdeepCity_EventScript_ScottExitNorth::
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitNorth
	waitmovement 0
	return

MossdeepCity_EventScript_ScottExitEast::
	applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Movement_PlayerWatchScottExit
	applymovement LOCALID_SCOTT, MossdeepCity_Movement_ScottExitEast
	waitmovement 0
	return

MossdeepCity_Movement_PlayerWatchScottExit:
	delay_16
	delay_16
	walk_in_place_faster_left
	step_end

MossdeepCity_Movement_ScottExitNorth:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MossdeepCity_Movement_ScottExitEast:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

MossdeepCity_Text_WantKingsRockStevenGaveMe:
	.string	"MÁXIMO me ha dado esto,\n"
	.string	"pero no sé para qué sirve.\p"
	.string	"Creo que se llama ROCA del REY.\n"
	.string	"¿La quieres?$"

MossdeepCity_Text_YouCanKeepIt:
	.string	"¿Y para qué la quieres?\n"
	.string	"Mira que la gente es rara…\p"
	.string	"Bueno, quédatela, pero no\n"
	.string	"se lo digas a MÁXIMO.$"

MossdeepCity_Text_StevensHouseOverThere:
	.string	"¡La casa de MÁXIMO está justo ahí!$"

MossdeepCity_Text_WhatToDoWithWeirdRock:
	.string	"¡Justamente eso digo yo! ¿Qué se\n"
	.string	"puede hacer con una roca rara?$"

MossdeepCity_Text_WailmerWatching:
	.string	"Cerca de ALGARIA, puedes ver\n"
	.string	"WAILMER salvajes.\p"
	.string	"El sitio en cuestión se llama…\n"
	.string	"¿Cómo se llama…?\p"
	.string	"Puesto…, puesto de algo…\p"
	.string	"¡Puesto de observación de WAILMER!$"

MossdeepCity_Text_SpaceCenterReceivedLetter:
	.string	"El CENTRO ESPACIAL de esta isla\n"
	.string	"ha estado lanzando cohetes enormes.\p"
	.string	"Es que andan bastante alborotados\n"
	.string	"a causa de una carta que han recibido.$"

MossdeepCity_Text_SpaceCenterLaunchingRockets:
	.string	"El CENTRO ESPACIAL de esta isla\n"
	.string	"ha estado lanzando cohetes enormes.$"

MossdeepCity_Text_MossdeepTargetedByMagma:
	.string	"Un MARINERO me ha dicho que el EQUIPO\n"
	.string	"AQUA la ha montado gorda en CALAGUA.\p"
	.string	"¡También he oído que alguien\n"
	.string	"les ha dado una buena paliza!\p"
	.string	"Pero ahora CIUDAD ALGARIA ha pasado\n"
	.string	"a ser un objetivo del EQUIPO MAGMA.\p"
	.string	"Si quieres saber qué están tramando,\n"
	.string	"ve a visitar el CENTRO ESPACIAL.$"

MossdeepCity_Text_FeelReliefOnLand:
	.string	"Soy un MARINERO, así que el mar\n"
	.string	"es muy importante para mí.\p"
	.string	"Pero cuando vuelvo a tierra después\n"
	.string	"de un viaje, respiro tranquilo, ¿sabes?$"

MossdeepCity_Text_NiceIfWorldCoveredByFlowers:
	.string	"Qué bonito sería…\p"
	.string	"si el mundo entero estuviera cubierto\n"
	.string	"de flores y plantas como las de aquí.$"

MossdeepCity_Text_LifeNeedsSeaToLive:
	.string	"Todo ser vivo necesita el mar,\n"
	.string	"aunque viva en la tierra.\p"
	.string	"Todo ser vivo, con el tiempo, se\n"
	.string	"convierte en polvo y vuelve a la tierra.\p"
	.string	"El mar y la tierra están conectados…,\p"
	.string	"basta mirar la costa para darse cuenta.$"

MossdeepCity_Text_SurfExhilarating:
	.string	"Un viaje en barco es divertido.\p"
	.string	"Pero cruzar el mar con un POKéMON\n"
	.string	"que hace SURF…\p"
	.string	"¡Eso sí que es un puntazo!\n"
	.string	"¿A que sí?$"

MossdeepCity_Text_SpecialSpaceCenterRock:
	.string	"Esta roca tiene un significado especial\n"
	.string	"para la gente del CENTRO ESPACIAL.\p"
	.string	"Es como un talismán para que los\n"
	.string	"cohetes despeguen sin problemas.\p"
	.string	"Y tú, cuando formulas un deseo,\n"
	.string	"¿usas algún amuleto?\p"
	.string	"Yo tengo una frase mágica…\n"
	.string	"¡y siempre funciona!$"

MossdeepCity_Text_ItsAWhiteRock:
	.string	"Es una roca blanca.$"

MossdeepCity_Text_GymSign:
	.string	"GIMNASIO POKéMON de CIUDAD ALGARIA\n"
	.string	"LÍDERES: LETI Y VITO\p"
	.string	"“¡Una combinación mística!”$"

MossdeepCity_Text_CitySign:
	.string	"CIUDAD ALGARIA\p"
	.string	"“Nuestra divisa: ¡quiere\n"
	.string	"a los POKéMON!”$"

MossdeepCity_Text_SpaceCenterSign:
	.string	"CENTRO ESPACIAL de ALGARIA\p"
	.string	"“¡A un paso del espacio exterior!”$"

MossdeepCity_Text_ScottSomethingWrongWithTown:
	.string "SCOTT: {PLAYER}{KUN}, feeling good?\n"
	.string "I'm doing great!\p"
	.string "I'd heard MOSSDEEP's GYM LEADER is\n"
	.string "pretty strong, so I decided to come\l"
	.string "take a look-see for myself.\p"
	.string "But there's something wrong about\n"
	.string "this town.\p"
	.string "People are going on about a warning\n"
	.string "letter and the SPACE CENTER…\p"
	.string "I don't think it concerns me in any\n"
	.string "way, though.$"

MossdeepCity_Text_SootopolisNewGymLeader:
	.string	"Aaah… Qué bien se está con\n"
	.string	"el mar acariciándote los pies…\p"
	.string	"Hablando de olas, ¿conoces la\n"
	.string	"ciudad-isla de ARRECÍPOLIS?\p"
	.string	"Creo que el GIMNASIO de allí\n"
	.string	"tiene un nuevo LÍDER.\p"
	.string	"Al parecer, el nuevo LÍDER fue\n"
	.string	"el mentor de PLUBIO en su día.$"

MossdeepCity_Andra_Move_1:
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
walk_left
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_left
walk_left
walk_left
walk_left
walk_left
walk_left
walk_down
step_end

MossdeepCity_Andra_Move_2:
face_left
step_end

MossdeepCity_Andra_Move_3:
walk_slow_left
delay_16
delay_8
walk_slow_up
delay_16
step_end

MossdeepCity_Andra_Move_4:
emote_exclamation_mark
step_end

MossdeepCity_Andra_Move_5:
walk_up
walk_up
walk_up
step_end

MossdeepCity_Andra_Move_6:
face_down
step_end



MossdeepCity_Andra::
lock
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Andra_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox MossdeepCity_Andra_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Andra_Texto_2 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, MossdeepCity_Andra_Move_2
waitmovement 0x0
msgbox MossdeepCity_Andra_Texto_3 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, MossdeepCity_Andra_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 18, MossdeepCity_Andra_Move_4
waitmovement 0x0
applymovement 18, MossdeepCity_Andra_Move_5
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Andra_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox MossdeepCity_Andra_Texto_4 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MossdeepCity_Andra_Move_6
waitmovement 0x0
msgbox MossdeepCity_Andra_Texto_5 MSGBOX_AUTOCLOSE
delay 15
applymovement 8, MossdeepCity_Andra_Move_8
applymovement 18, MossdeepCity_Andra_Move_7
waitmovement 0x0
delay 35
msgbox MossdeepCity_Andra_Texto_6 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, MossdeepCity_Andra_Move_2
waitmovement 0x0
delay 15
msgbox MossdeepCity_Andra_Texto_7 MSGBOX_AUTOCLOSE
applymovement 18, MossdeepCity_Andra_Move_9
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Andra_Move_9
waitmovement 0x0
special RemoveCameraObject
playse SE_M_DETECT
dofieldeffectsparkle 57, 21, 0
waitfieldeffect FLDEFF_SPARKLE
playse SE_PIN
applymovement 18, MossdeepCity_Andra_Move_4
waitmovement 0x0
delay 15
applymovement 18, MossdeepCity_Andra_Move_8
waitmovement 0x0
msgbox MossdeepCity_Andra_Texto_8 MSGBOX_AUTOCLOSE
playse SE_M_DETECT
dofieldeffectsparkle 57, 21, 0
waitfieldeffect FLDEFF_SPARKLE
playmoncry SPECIES_JIRACHI, CRY_MODE_ENCOUNTER
waitmoncry
applymovement 18, MossdeepCity_Andra_Move_10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Andra_Move_10
waitmovement 0x0
special RemoveCameraObject
fadeoutbgm 0
playse 0
msgbox MossdeepCity_Andra_Texto_9 MSGBOX_AUTOCLOSE
call Script_SetGrayscaleTint
playse SE_PIN
applymovement 18, MossdeepCity_Andra_Move_4
waitmovement 0x0
delay 15
msgbox MossdeepCity_Andra_Texto_10 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 18, MossdeepCity_Andra_Move_4
waitmovement 0x0
delay 15
applymovement 18, MossdeepCity_Andra_Move_11
waitmovement 0x0
msgbox MossdeepCity_Andra_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 18, MossdeepCity_Andra_Move_4
playse SE_M_DETECT
dofieldeffectsparkle 57, 21, 0
waitfieldeffect FLDEFF_SPARKLE
waitse
applymovement 18, MossdeepCity_Jirachi_Move_10
setvar VAR_RESULT, 4
playse SE_ORB
special DoOrbEffect
delay 150
waitstate
delay 60
special FadeOutOrbEffect
call Script_RemoveTint
warpsilent MAP_MOSDEEP_JIRACHI, 10, 8
delay 100
release
end

MossdeepCity_Andra_Move_11:
walk_fast_right
walk_fast_right
face_up
step_end

MossdeepCity_Andra_Move_10:
walk_down
walk_right
walk_right
walk_down
walk_right
step_end

MossdeepCity_Andra_Move_9:
walk_left
walk_left
walk_left
walk_up
walk_left
walk_left
walk_up
step_end

MossdeepCity_Andra_Move_8:
face_right
step_end

MossdeepCity_Andra_Move_7:
walk_up
step_end

MossdeepCity_Andra_Texto_1:
	.string "ANDRA: Entonces, ese es el famoso\n"
	.string "CENTRO ESPACIAL de ALGARIA.$"

MossdeepCity_Andra_Texto_2:
	.string "… …$"

MossdeepCity_Andra_Texto_3:
	.string "No me interesa.$"

MossdeepCity_Andra_Texto_4:
	.string "¿Y esta roca? ¿Qué hace aquí?$"

MossdeepCity_Andra_Texto_5:
	.string	"Esta roca tiene un significado especial\n"
	.string	"para la gente del CENTRO ESPACIAL.\p"
	.string	"Es como un talismán para que los\n"
	.string	"cohetes despeguen sin problemas.$"

MossdeepCity_Andra_Texto_6:
	.string "ANDRA: Interesante.$"

MossdeepCity_Andra_Texto_7:
	.string "Ahí arriba debe haber unas vistas al\n"
	.string "mar impresionantes. Iré a ver.$"

MossdeepCity_Andra_Texto_8:
	.string "¿Q…qué ha sido eso?$"

MossdeepCity_Andra_Texto_9:
	.string "¿Lo has escuchado?$"

MossdeepCity_Andra_Texto_10:
	.string "????: Ahora mismo no puede oírte.$"

MossdeepCity_Andra_Texto_11:
	.string "ANDRA: ¿¡Quién eres tú!? ¡Muéstrate!$"

MossdeepCity_Devon::
lock
msgbox MossdeepCity_Devon_Texto_1 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_2 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_3 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_4 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_5 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_6 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_7 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_8 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_9 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_10 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_11 MSGBOX_AUTOCLOSE
msgbox MossdeepCity_Devon_Texto_12 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_55
setvar VAR_UNUSED_0x40F8, 11
release
end

MossdeepCity_Devon_Texto_1:
	.string "¿{PLAYER}?$"

MossdeepCity_Devon_Texto_2:
	.string "Te dije que te lo tomaras con calma.$"

MossdeepCity_Devon_Texto_3:
	.string "Has pasado corriendo CIUDAD CALAGUA\n"
	.string "sin pasar siquiera a curar, ¿verdad?\l"
	.string "¡Eres incorregible!$"

MossdeepCity_Devon_Texto_4:
	.string "Pues ahora deberás esperar: tal y como\n"
	.string "imaginaba, tenemos tiempo. Mira.$"

MossdeepCity_Devon_Texto_5:

MossdeepCity_Devon_Texto_6:

MossdeepCity_Devon_Texto_7:

MossdeepCity_Devon_Texto_8:

MossdeepCity_Devon_Texto_9:

MossdeepCity_Devon_Texto_10:

MossdeepCity_Devon_Texto_11:

MossdeepCity_Devon_Texto_12:
