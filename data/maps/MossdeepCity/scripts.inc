MossdeepCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, MossdeepCity_OnTransition
    map_script MAP_SCRIPT_ON_FRAME_TABLE, MossdeepCity_OnFrame
	.byte 0

MossdeepCity_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 247, MossdeepCity_Andra
	.2byte 0

MossdeepCity_OnTransition:
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

MossdeepCity_Devon_Move_1:
walk_in_place_up
step_end

MossdeepCity_Devon_Move_2:
emote_exclamation_mark
delay_16
face_down
delay_16
walk_slow_down
step_end

MossdeepCity_Devon_Move_3:
face_right
step_end

MossdeepCity_Devon_Move_4:
walk_slow_down
step_end

MossdeepCity_Devon_Move_5:
walk_in_place_down
step_end

MossdeepCity_Devon_Move_6:
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_right
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

MossdeepCity_Devon_Move_6.1:
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

MossdeepCity_Devon_Move_1.1:
walk_up
walk_up
walk_up
step_end

MossdeepCity_Devon::
lock
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Move_1.1
waitmovement 0x0
delay 15
playse SE_PIN
applymovement 19, MossdeepCity_Devon_Move_2
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_1 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_3
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_2 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_4
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_3 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_5
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Move_3
applymovement 19, MossdeepCity_Devon_Move_3
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Devon_Move_6
waitmovement 0x0
special RemoveCameraObject
msgbox MossdeepCity_Devon_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Devon_Texto_7 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Devon_Texto_8 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Devon_Move_6.1
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Move_7
applymovement 19, MossdeepCity_Devon_Move_5
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_9 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_8
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_10 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_9
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_11 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_7
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_12 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_10
waitmovement 0x0
msgbox MossdeepCity_Devon_Texto_13 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Move_11
waitmovement 0x0
setflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCH
setflag FLAG_HOENN_50
setflag FLAG_HOENN_55
setvar VAR_UNUSED_0x40F8, 11
release
end

MossdeepCity_Devon_Move_11:
walk_up
step_end

MossdeepCity_Devon_Move_10:
walk_slow_up
step_end

MossdeepCity_Devon_Move_9:
face_down
step_end

MossdeepCity_Devon_Move_8:
face_left
step_end

MossdeepCity_Devon_Move_7:
face_up
step_end

MossdeepCity_Devon_Texto_1:
	.string "¿{PLAYER}?$"

MossdeepCity_Devon_Texto_2:
	.string "Te dije que te lo tomaras con calma.$"

MossdeepCity_Devon_Texto_3:
	.string "Has pasado corriendo CIUDAD CALAGUA\n"
	.string "sin pasar siquiera a curar, ¿verdad?\l"
	.string "¡Eres incorregible!$"

MossdeepCity_Devon_Texto_5:
	.string "Pues ahora deberás esperar porque… tal\n"
	.string "y como imaginaba, tenemos tiempo. Mira.$"

MossdeepCity_Devon_Texto_6:
	.string "DEVON es omnipresente en HOENN. Quién\n"
	.string "sabe qué clase de pactos y planes\l"
	.string "estarán haciendo en la ESTACIÓN\l"
	.string "ESPACIAL…$"

MossdeepCity_Devon_Texto_7:
	.string "Lo que sí sabemos es que, de todos los\n"
	.string "ADMINISTRADORES, AMATISTA es el\l"
	.string "principal interesado en REGIGIGAS.$"

MossdeepCity_Devon_Texto_8:
	.string "Mientras siga en la ciudad, no harán su\n"
	.string "próximo movimiento.$"

MossdeepCity_Devon_Texto_9:
	.string "Yo me quedaré. Este lugar me da paz, y\n"
	.string "no me importa permanecer aquí el tiempo\l"
	.string "que haga falta.$"

MossdeepCity_Devon_Texto_10:
	.string "En cuanto a ti… podrías visitar el\n"
	.string "GIMNASIO de esta ciudad o…$"

MossdeepCity_Devon_Texto_11:
	.string "…si tienes BUCEO, puedes ir a por\n"
	.string "KYOGRE.$"

MossdeepCity_Devon_Texto_12:
	.string "El mar al sur de aquí es muy profundo.\n"
	.string "KYOGRE duerme en un lugar llamado\l"
	.string "CAVERNA ABISAL.$"

MossdeepCity_Devon_Texto_13:
	.string "Así podrás hacer tiempo y además\n"
	.string "completar otro objetivo más del TEAM\l"
	.string "ROCKET, porque… sigues trabajando para\l"
	.string "GIOVANNI, ¿no?$"

MossdeepCity_Andra_Caverna::
lock
faceplayer
msgbox MossdeepCity_Devon_Texto_12 MSGBOX_NPC
delay 10
msgbox MossdeepCity_Devon_Texto_13 MSGBOX_NPC
applymovement 19, MossdeepCity_Devon_Move_7
waitmovement 0x0
setflag FLAG_HOENN_50
release
end

MossdeepCity_Cientificos::
lock
msgbox MossdeepCity_Cientificos_Texto_1 MSGBOX_AUTOCLOSE
release
end

MossdeepCity_Cientificos_Texto_1:
	.string "La ESTACIÓN ESPACIAL está cerrada al\n"
	.string "público en este momento. DEVON ha\l"
	.string "organizado un importante evento\l"
	.string "privado en su interior.$"

MossdeepCity_Devon_Tristana_Move_1:
walk_up
walk_up
walk_up
step_end

MossdeepCity_Devon_Tristana_Move_1.1:
walk_up
walk_up
walk_left
walk_up
step_end

MossdeepCity_Devon_Tristana_Move_1.2:
walk_slow_down
step_end

MossdeepCity_Devon_Tristana_Despues_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_1
waitmovement 0x0
goto MossdeepCity_Devon_Tristana_Despues

MossdeepCity_Devon_Tristana_Despues_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_1.1
waitmovement 0x0
goto MossdeepCity_Devon_Tristana_Despues

MossdeepCity_Devon_Tristana_Move_2:
emote_exclamation_mark
delay_16
face_up
walk_in_place_down
step_end

MossdeepCity_Devon_Tristana_Move_3:
delay_16
face_left
delay_16
delay_16
delay_16
face_down
delay_16
delay_16
step_end

MossdeepCity_Devon_Tristana_Move_4:
walk_in_place_down
step_end

MossdeepCity_Devon_Tristana_Move_5:
delay_16
walk_in_place_right
step_end

MossdeepCity_Devon_Tristana_Move_6:
walk_up
walk_up
face_right
step_end

MossdeepCity_Devon_Tristana_Move_7:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

MossdeepCity_Devon_Tristana_Move_8:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
face_left
step_end

MossdeepCity_Devon_Tristana_Move_9:
emote_exclamation_mark
step_end

MossdeepCity_Devon_Tristana_Move_10:
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MossdeepCity_Devon_Tristana_Move_11:
walk_left
walk_left
step_end

MossdeepCity_Devon_Tristana_Despues::
lock
playse SE_PIN
applymovement 19, MossdeepCity_Devon_Tristana_Move_2
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_2 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_3
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_3 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_4
waitmovement 0x0
applymovement 19, MossdeepCity_Devon_Tristana_Move_1.2
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_4 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_5
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Devon_Tristana_Move_7
waitmovement 0x0
special RemoveCameraObject
delay 15
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_5 MSGBOX_AUTOCLOSE
clearflag FLAG_HOENN_679
playse SE_SLIDING_DOOR
opendoor 64, 15
waitdooranim
addobject 25
applymovement 25, VerdanturfTown_Move_9
waitmovement 0x0
closedoor 64, 15
waitdooranim
delay 15
playse SE_PIN
delay 15
applymovement 25, MossdeepCity_Devon_Tristana_Move_8
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Devon_Tristana_Move_8
waitmovement 0x0
special RemoveCameraObject
playse SE_PIN
applymovement 25, MossdeepCity_Devon_Tristana_Move_9
waitmovement 0x0
applymovement 25, MossdeepCity_Devon_Tristana_Move_10
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Devon_Tristana_Move_10
waitmovement 0x0
special RemoveCameraObject
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_6 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, MossdeepCity_Devon_Tristana_Move_11
waitmovement 0x0
special RemoveCameraObject
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_7 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_12
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_8 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_10 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 25, MossdeepCity_Devon_Tristana_Move_9
waitmovement 0x0
delay 15
applymovement 25, MossdeepCity_Devon_Tristana_Move_13
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_11 MSGBOX_AUTOCLOSE
applymovement 25, MossdeepCity_Devon_Tristana_Move_14
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_13 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_5
applymovement 25, MossdeepCity_Devon_Tristana_Move_15
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_14 MSGBOX_AUTOCLOSE
applymovement 25, MossdeepCity_Devon_Tristana_Move_16
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_15 MSGBOX_AUTOCLOSE
applymovement 25, MossdeepCity_Devon_Tristana_Move_17
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_16 MSGBOX_AUTOCLOSE
applymovement 25, MossdeepCity_Devon_Tristana_Move_15
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_17 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_19
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_19
applymovement 25, MossdeepCity_Devon_Tristana_Move_18
waitmovement 0x0
removeobject 25
applymovement 19, MossdeepCity_Devon_Tristana_Move_14
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_16
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_18 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_3
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_19 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_4
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_20 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_20
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_21 MSGBOX_AUTOCLOSE
delay 25
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_21.1 MSGBOX_AUTOCLOSE
delay 25
applymovement 19, MossdeepCity_Devon_Tristana_Move_4
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_22 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_9
waitmovement 0x0
delay 15
applymovement 19, MossdeepCity_Devon_Tristana_Move_4
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_21
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_23 MSGBOX_AUTOCLOSE
delay 15
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_24 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, MossdeepCity_Devon_Tristana_Move_16
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_25 MSGBOX_AUTOCLOSE
applymovement 19, MossdeepCity_Devon_Tristana_Move_15
waitmovement 0x0
msgbox MossdeepCity_Devon_Tristana_Despues_Texto_26 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_682
setflag FLAG_HOENN_679
playmoncry SPECIES_CROBAT, CRY_MODE_ENCOUNTER
waitmoncry
setfieldeffectargument 1, 0
dofieldeffect FLDEFF_NPCFLY_OUT
delay 15
removeobject 19
waitfieldeffect FLDEFF_NPCFLY_OUT
setvar VAR_UNUSED_0x40F8, 14
release
end

MossdeepCity_Devon_Tristana_Move_21:
delay_8
face_down
step_end

MossdeepCity_Devon_Tristana_Move_20:
face_right
step_end

MossdeepCity_Devon_Tristana_Move_19:
delay_16
delay_16
face_down
step_end

MossdeepCity_Devon_Tristana_Move_18:
walk_down
walk_down
walk_left
walk_left
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
walk_left
walk_left
walk_left
walk_left
walk_left
step_end

MossdeepCity_Devon_Tristana_Move_16:
face_up
step_end

MossdeepCity_Devon_Tristana_Move_17:
walk_in_place_up
step_end

MossdeepCity_Devon_Tristana_Move_15:
face_left
step_end

MossdeepCity_Devon_Tristana_Move_14:
face_down
step_end

MossdeepCity_Devon_Tristana_Move_13:
lock_facing_direction
walk_slow_right
unlock_facing_direction
step_end

MossdeepCity_Devon_Tristana_Move_12:
walk_right
step_end

MossdeepCity_Devon_Tristana_Despues_Texto_1:
	.string "ANDRA: {PLAYER}. ¿Entonces has\n"
	.string "bajado hasta la CAVERNA ABISAL?$"

MossdeepCity_Devon_Tristana_Despues_Texto_2:
	.string "Parece que KYOGRE te ha retrasado un\n"
	.string "poco, ¿siguen vigentes los POKÉMON\l"
	.string "SAGRADOS?$"

MossdeepCity_Devon_Tristana_Despues_Texto_3:
	.string "Tengo la impresión de que en estado\n"
	.string "salvaje, son más poderosos que en\l"
	.string "manos de un ENTRENADOR.$"

MossdeepCity_Devon_Tristana_Despues_Texto_4:
	.string "Sea como sea, mira.$"

MossdeepCity_Devon_Tristana_Despues_Texto_5:
	.string "DEVON se fue hace un poco. Ahora es\n"
	.string "cuando te contar…$"

MossdeepCity_Devon_Tristana_Despues_Texto_6:
	.string "TRISTANA: Vaya, vaya. La parejita\n"
	.string "ROCKET más famosa.$"

MossdeepCity_Devon_Tristana_Despues_Texto_7:
	.string "Pensaba que os habíais peleado, ¿ya\n"
	.string "volvéis a ser amigos?$"

MossdeepCity_Devon_Tristana_Despues_Texto_8:
	.string "ANDRA: No te incumben nuestros\n"
	.string "asuntos.$"

MossdeepCity_Devon_Tristana_Despues_Texto_9:
	.string "TRISTANA: Tienes razón. Pero dime,\n"
	.string "¿encontraste lo que buscabas aquí?$"

MossdeepCity_Devon_Tristana_Despues_Texto_10:
	.string "ANDRA: Lo encontré.$"

MossdeepCity_Devon_Tristana_Despues_Texto_11:
	.string "TRISTANA: Oh… asombroso…$"

MossdeepCity_Devon_Tristana_Despues_Texto_12:
	.string "Dime, {PLAYER}. ¿Eres consciente de\n"
	.string "que tu querida ANDRA es ahora más\l"
	.string "fuerte que tú?$"

MossdeepCity_Devon_Tristana_Despues_Texto_13:
	.string "Debe ser duro de asumir para alguien\n"
	.string "que lleva tanto tiempo en la cima. Ver\l"
	.string "cómo quedas relegado… cómo bajas del\l"
	.string "trono para no volver… ¿no?$"

MossdeepCity_Devon_Tristana_Despues_Texto_14:
	.string "ANDRA: ¿Trono, cima? Deja de decir\n"
	.string "estupideces. En un combate , los\l"
	.string "números nunca son redondos.$"

MossdeepCity_Devon_Tristana_Despues_Texto_15:
	.string "TRISTANA: No, pero tampoco cuadrados.$"

MossdeepCity_Devon_Tristana_Despues_Texto_16:
	.string "¡Bah! ¡¿Qué importa?!\n"
	.string "Los planes de DEVON van más allá\l"
	.string "de lo que podéis lograr por vuestra\l"
	.string "cuenta.$"

MossdeepCity_Devon_Tristana_Despues_Texto_17:
	.string "Estéis aquí por coincidencia o no, os lo\n"
	.string "advierto: si intentáis ir tras DEVON,\l"
	.string "esta vez usaremos toda nuestra fuerza\l"
	.string "para aplastaros.$"

MossdeepCity_Devon_Tristana_Despues_Texto_18:
	.string "ANDRA: Está claro, {PLAYER}. Con esa\n"
	.string "actitud acaba de confirmarnos que van\l"
	.string "tras algo serio, tal y como me dijiste.$"

MossdeepCity_Devon_Tristana_Despues_Texto_19:
	.string "¿Sabes una cosa? Ir tras el misterio de\n"
	.string "los REGIS fue una de las mejores\l"
	.string "experiencias que tuve, cuando era\l"
	.string "ADMIN.JEFE de HOENN.$"

MossdeepCity_Devon_Tristana_Despues_Texto_20:
	.string "Te envié clones de ellos cuando tú aún\n"
	.string "explorabas los misterios de JOHTO,\l"
	.string "¿recuerdas?$"

MossdeepCity_Devon_Tristana_Despues_Texto_21:
	.string "No fue fácil, aparte de las 3 ruinas que\n"
	.string "todos conocen… hay otro lugar… mucho\l"
	.string "más oculto.$"

MossdeepCity_Devon_Tristana_Despues_Texto_21.1:
	.string "… …$"

MossdeepCity_Devon_Tristana_Despues_Texto_22:
	.string "Te espero en PUEBLO OROMAR, {PLAYER}.$"

MossdeepCity_Devon_Tristana_Despues_Texto_23:
	.string "Para llegar, debes cruzar todo el mar\n"
	.string "del sur y después seguir recto en\l"
	.string "dirección oeste. No tiene pérdida.$"

MossdeepCity_Devon_Tristana_Despues_Texto_24:
	.string "Si es donde creo, DEVON tardará en\n"
	.string "llegar.$"

MossdeepCity_Devon_Tristana_Despues_Texto_25:
	.string "En PUEBLO OROMAR podremos\n"
	.string "organizarnos, te espero dentro de su\l"
	.string "CENTRO PKMN.$"

MossdeepCity_Devon_Tristana_Despues_Texto_26:
	.string "Ahí trazaremos el plan de acción y te\n"
	.string "daré los detalles. No tardes.$"
