DesertRuins_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, DesertRuins_OnFrame
	.byte 0

DesertRuins_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 188, DesertRuins_Evento_Andra
	.2byte 0

DesertRuins_OnResume:
	call_if_set FLAG_SYS_CTRL_OBJ_DELETE, DesertRuins_EventScript_TryRemoveRegirock
	end

DesertRuins_EventScript_TryRemoveRegirock::
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_ne VAR_RESULT, B_OUTCOME_CAUGHT, Common_EventScript_NopReturn
	removeobject VAR_LAST_TALKED
	return

DesertRuins_OnLoad:
	call_if_unset FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_HideRegiEntrance
	end

DesertRuins_EventScript_HideRegiEntrance::
	setmetatile 7, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 8, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 9, 19, METATILE_Cave_EntranceCover, TRUE
	setmetatile 7, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 8, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	setmetatile 9, 20, METATILE_Cave_SealedChamberBraille_Mid, TRUE
	return

DesertRuins_OnTransition:
	setflag FLAG_LANDMARK_DESERT_RUINS
	call_if_unset FLAG_DEFEATED_REGIROCK, DesertRuins_EventScript_ShowRegirock
	end

DesertRuins_EventScript_ShowRegirock::
	clearflag FLAG_HIDE_REGIROCK
	return

DesertRuins_EventScript_CaveEntranceMiddle::
	lockall
	goto_if_set FLAG_SYS_REGIROCK_PUZZLE_COMPLETED, DesertRuins_EventScript_BigHoleInWall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_BigHoleInWall::
	msgbox gText_BigHoleInTheWall, MSGBOX_DEFAULT
	releaseall
	end

DesertRuins_EventScript_CaveEntranceSide::
	lockall
	braillemsgbox DesertRuins_Braille_UseRockSmash
	releaseall
	end

DesertRuins_EventScript_Regirock::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_REGIROCK, CRY_MODE_ENCOUNTER
	delay 40
	waitmoncry
	setwildbattle SPECIES_REGIROCK, 40, ITEM_NONE
	setflag FLAG_SYS_CTRL_OBJ_DELETE
	special StartRegiBattle
	waitstate
	clearflag FLAG_SYS_CTRL_OBJ_DELETE
	specialvar VAR_RESULT, GetBattleOutcome
	goto_if_eq VAR_RESULT, B_OUTCOME_WON, DesertRuins_EventScript_DefeatedRegirock
	goto_if_eq VAR_RESULT, B_OUTCOME_RAN, DesertRuins_EventScript_RanFromRegirock
	goto_if_eq VAR_RESULT, B_OUTCOME_PLAYER_TELEPORTED, DesertRuins_EventScript_RanFromRegirock
	setflag FLAG_DEFEATED_REGIROCK
	release
	end

DesertRuins_EventScript_DefeatedRegirock::
	setflag FLAG_DEFEATED_REGIROCK
	goto Common_EventScript_RemoveStaticPokemon
	end

DesertRuins_EventScript_RanFromRegirock::
	setvar VAR_0x8004, SPECIES_REGIROCK
	goto Common_EventScript_LegendaryFlewAway
	end

DesertRuins_Evento_CamaraRegirock::
msgbox DesertRuins_Evento_CamaraRegirock_Texto_1 MSGBOX_AUTOCLOSE
delay 20
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_1
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_3 MSGBOX_AUTOCLOSE
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_4 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_3
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_5 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_7 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_3
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_8 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_5
delay 10
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_5
waitmovement 0x0
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_6
waitmovement 0x0
playse SE_PIN
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_7
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_7
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_9 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_3
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_10 MSGBOX_AUTOCLOSE
delay 20
msgbox DesertRuins_Evento_CamaraRegirock_Texto_11 MSGBOX_AUTOCLOSE
delay 20
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6
applymovement 4, DesertRuins_Evento_CamaraRegirock_Move_8
waitmovement 0x0
removeobject 4
playse SE_EXIT
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_12 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_13 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_14 MSGBOX_AUTOCLOSE
delay 20
msgbox DesertRuins_Evento_CamaraRegirock_Texto_15 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_9
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_16 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_7
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_17 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_18 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DesertRuins_Evento_CamaraRegirock_Move_16
waitmovement 0x0
special RemoveCameraObject
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_10
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_11
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_12
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_19 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_20 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_21 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_5.1
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_22 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, DesertRuins_Evento_CamaraRegirock_Move_5
waitmovement 0x0
special RemoveCameraObject
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_13
waitmovement 0x0
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_23 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_9
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_24 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_EJECUTIVO_DEVON_2, DesertRuins_Evento_CamaraRegirock_Texto_25
msgbox DesertRuins_Evento_CamaraRegirock_Texto_26 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_14
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_27 MSGBOX_AUTOCLOSE
delay 15
msgbox DesertRuins_Evento_CamaraRegirock_Texto_28 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_9
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_29 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_30 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_4
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_31 MSGBOX_AUTOCLOSE
applymovement 3, DesertRuins_Evento_CamaraRegirock_Move_6.1
waitmovement 0x0
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_ARCHIE
removeobject 3
playse SE_EXIT
delay 10
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_1
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_3
waitmovement 0x0
delay 30
playse SE_POKENAV_CALL
delay 30
playse SE_POKENAV_HANG_UP
applymovement OBJ_EVENT_ID_PLAYER, PalletTown_ProfessorLab_Lab_Move_3
applymovement 5, PalletTown_ProfessorLab_Lab_Move_3
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_36 MSGBOX_AUTOCLOSE
playse SE_POKENAV_OFF
delay 15
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_1
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_CamaraRegirock_Move_3
waitmovement 0x0
msgbox DesertRuins_Evento_CamaraRegirock_Texto_34 MSGBOX_AUTOCLOSE
delay 10
msgbox DesertRuins_Evento_CamaraRegirock_Texto_35 MSGBOX_AUTOCLOSE
applymovement 5, DesertRuins_Evento_CamaraRegirock_Move_15
waitmovement 0x0
playse SE_EXIT
removeobject 5
setvar VAR_UNUSED_0x40F7, 190
release
end

DesertRuins_Evento_CamaraRegirock_Move_16:
walk_down
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_15:
walk_down
walk_left
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_14:
walk_slow_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_13:
walk_right
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_12:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_11:
emote_exclamation_mark
walk_in_place_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_10:
walk_left
walk_in_place_right
walk_in_place_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_9:
walk_in_place_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_8:
walk_right
walk_down
walk_down
walk_down
walk_left
walk_left
walk_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_7:
emote_exclamation_mark
step_end

DesertRuins_Evento_CamaraRegirock_Move_6.1:
face_down
delay_4
walk_down
delay_4
step_end

DesertRuins_Evento_CamaraRegirock_Move_6:
face_down
step_end

DesertRuins_Evento_CamaraRegirock_Move_5.1:
walk_up
step_end

DesertRuins_Evento_CamaraRegirock_Move_5:
walk_up
walk_up
step_end

DesertRuins_Evento_CamaraRegirock_Move_4:
face_up
step_end

DesertRuins_Evento_CamaraRegirock_Move_3:
face_right
step_end

DesertRuins_Evento_CamaraRegirock_Move_2:
walk_in_place_left
step_end

DesertRuins_Evento_CamaraRegirock_Move_1:
face_left
step_end

DesertRuins_Evento_CamaraRegirock_Texto_1:
.string "ADMIN.DEVON: Aquí tienes a REGIROCK.\n"
	.string "Uno de los 3 regis que duermen en\l"
	.string "HOENN, su solidez es incomparable.$"

DesertRuins_Evento_CamaraRegirock_Texto_2:
.string "????: A pesar de ser creado en base a\n"
	.string "arcilla, ¿cómo es posible que a partir\l"
	.string "de materia inerte surgiera tal\l"
	.string "POKÉMON?$"

DesertRuins_Evento_CamaraRegirock_Texto_3:
.string "ADMIN.DEVON: Fuerzas mayores\n"
	.string "intervinieron en su nacimiento,\l"
	.string "anteriores incluso a nuestros FÓSILES.\l"
	.string "Y, aunque desconocemos el alcance de\l"
	.string "su poder, no podemos ignorarlo.$"

DesertRuins_Evento_CamaraRegirock_Texto_4:
.string "????: En ello trabajáis, ¿verdad? En\n"
	.string "descifrarlo.$"

DesertRuins_Evento_CamaraRegirock_Texto_5:
.string "ADMIN.DEVON: Trabajamos en muchas\n"
	.string "cosas, una de ellas es formarte como\l"
	.string "ENTRENADOR, que te desarrolles como es\l"
	.string "debido.$"

DesertRuins_Evento_CamaraRegirock_Texto_6:
.string "Enseñarte esta clase de lugares es\n"
	.string "importante para que entiendas la\l"
	.string "historia de tu región, para que veas los\l"
	.string "límites naturales a los que esta ha\l"
	.string "llegado, y así poder sobrepasarlos a su\l"
	.string "debido tiempo.$"

DesertRuins_Evento_CamaraRegirock_Texto_7:
.string "Es la única forma de progreso sin\n"
	.string "provocar en ti una distorsión en la\l"
	.string "concepción de la realidad. Que veas\l"
	.string "ciertas cosas, a tu edad… sería\l"
	.string "contraproducente.$"

DesertRuins_Evento_CamaraRegirock_Texto_8:
.string "Por ello, ahora debes centrarte en criar\n"
	.string "al BELDUM perfecto que tu padre te dio.\l"
	.string "Junto con los clásicos FÓSILES de\l"
	.string "HOENN, tienes las herramientas\l"
	.string "necesarias para algún día proclamarte\l"
	.string "CAM…$"

DesertRuins_Evento_CamaraRegirock_Texto_9:
.string "????: ¿Quienes?$"

DesertRuins_Evento_CamaraRegirock_Texto_10:
.string "ADMIN.DEVON: Vuelve a DEVON, yo me\n"
	.string "encargaré.$"

DesertRuins_Evento_CamaraRegirock_Texto_11:
.string "????: …$"

DesertRuins_Evento_CamaraRegirock_Texto_12:
.string "ANDRA: ¿Escondiendo la realidad a un\n"
	.string "pobre chico para beneficiaros? ¡No es\l"
	.string "la primera vez que veo esto!$"

DesertRuins_Evento_CamaraRegirock_Texto_13:
.string "ADMIN.DEVON: Te equivocas\n"
	.string "completamente, debéis de ser del TEAM\l"
	.string "ROCKET, ¿no?$"

DesertRuins_Evento_CamaraRegirock_Texto_14:
.string "Únicamente le estamos mostrando la\n"
	.string "realidad actual, ¿qué podría ser más\l"
	.string "real que este LEGENDARIO durmiendo en\l"
	.string "un lugar sagrado?$"

DesertRuins_Evento_CamaraRegirock_Texto_15:
.string "De ese modo estará preparado para la\n"
	.string "capa superior de realidad que está por\l"
	.string "venir, se está adaptando. A diferencia\l"
	.string "de vuestro colaborador, ese\l"
	.string "“PROFESOR”. Lo único que hizo fue\l"
	.string "someter a una capa inferior de la\l"
	.string "realidad a su creación, para así cumplir\l"
	.string "sus fines.$"

DesertRuins_Evento_CamaraRegirock_Texto_16:
.string "No oses comparar esa canallada con la\n"
	.string "forma en que llevamos la educación del\l"
	.string "hijo de nuestro PRESIDENTE.$"

DesertRuins_Evento_CamaraRegirock_Texto_17:
.string "ANDRA: ¿Cómo sabes todo eso?$"

DesertRuins_Evento_CamaraRegirock_Texto_18:
.string "ADMIN.DEVON: DEVON lo sabe todo,\n"
	.string "nuestra tecnología está 5 años por\l"
	.string "encima de la vuestra, que tengáis un\l"
	.string "buen día.$"

DesertRuins_Evento_CamaraRegirock_Texto_19:
.string "ANDRA: ¿Ni siquiera vas a tratar de\n"
	.string "detenernos?$"

DesertRuins_Evento_CamaraRegirock_Texto_20:
.string "ADMIN.DEVON: No suponéis ninguna\n"
	.string "amenaza, ni vais a interrumpir el\l"
	.string "descanso de REGIROCK. No merece la\l"
	.string "pena perder el tiempo en derrotaros.$"

DesertRuins_Evento_CamaraRegirock_Texto_21:
.string "ANDRA: ¡Jah! Cuando uno cree que lo\n"
	.string "sabe todo es el principio del fin. Tiene\l"
	.string "delante de sí a dos ENTRENADORES que\l"
	.string "lo destrozarían en un combate, y se va\l"
	.string "creyendo ser el sabelotodo que tiene\l"
	.string "todo bajo control. ¡Huye y sigue en tu\l"
	.string "ignorancia! Hemos visto más de lo que\l"
	.string "tú verás en tu vida.$"

DesertRuins_Evento_CamaraRegirock_Texto_22:
.string "ADMIN.DEVON: ¿De verdad te crees\n"
	.string "capaz?$"

DesertRuins_Evento_CamaraRegirock_Texto_23:
.string "¿Quién es este?$"

DesertRuins_Evento_CamaraRegirock_Texto_24:
.string "¿{PLAYER}? Nadie en DEVON conoce tu\n"
	.string "nombre, si de verdad fuerais tan\l"
	.string "fuertes sabría quiénes sois.\l"
	.string "¡Después de borrar a tu equipo\l"
	.string "DEVON seguirá sin saber quién eres!$"

DesertRuins_Evento_CamaraRegirock_Texto_25:
.string "No olvidaré tu nombre.$"

DesertRuins_Evento_CamaraRegirock_Texto_26:
.string "ADMIN.DEVON: ¿Qué significa esto? El\n"
	.string "poder de esos POKÉMON, ¿de dónde\l"
	.string "viene?$"

DesertRuins_Evento_CamaraRegirock_Texto_27:
.string "ANDRA: Del VÍNCULO con nuestros\n"
	.string "POKÉMON, algo de lo que tú careces.$"

DesertRuins_Evento_CamaraRegirock_Texto_28:
.string "ADMIN.DEVON: ¿Vínculo? ¡Eso no puede\n"
	.string "medirse!$"

DesertRuins_Evento_CamaraRegirock_Texto_29:
.string "ANDRA: Exacto, y así debe ser.$"

DesertRuins_Evento_CamaraRegirock_Texto_30:
.string "ADMIN.DEVON: Entonces… el ADMIN que\n"
	.string "visitó el LAGO DE LA FURIA tenía razón.\l"
	.string "Solo que no eres un ENTRENADOR\l"
	.string "particular, trabajas para el TEAM\l"
	.string "ROCKET.$"

DesertRuins_Evento_CamaraRegirock_Texto_31:
.string "Hubiera sido mejor para ti que\n"
	.string "siguiéramos sin conocer tu nombre,\l"
	.string "créeme.$"

DesertRuins_Evento_CamaraRegirock_Texto_32:
	.string "ANDRA: Bah, si eso es lo mejor de DEVON,\n"
	.string "jamás podrán con nosotros. Los\l"
	.string "LEGENDARIOS y MEGAS ya no son ningún\l"
	.string "misterio para el TEAM ROCKET.$"

DesertRuins_Evento_CamaraRegirock_Texto_34:
.string "Ve {PLAYER}, yo volveré a mi DESPACHO.\n"
	.string "GIOVANNI dijo que la II GRAN REUNIÓN\l"
	.string "en TRIGAL se celebraría después de\l"
	.string "derrumbar la TORRE POKÉMON, imagino\l"
	.string "que debe estar al caer.$"

DesertRuins_Evento_CamaraRegirock_Texto_35:
.string "Mientras, recopilaré toda la\n"
	.string "información que pueda sobre DEVON.\l"
	.string "Aunque hemos ganado, sus POKÉMON,\l"
	.string "estrategias y objetos son una novedad\l"
	.string "para nosotros. Debemos estar\l"
	.string "preparados.$"

DesertRuins_Evento_CamaraRegirock_Texto_36:
.string "GIOVANNI: ¿{PLAYER}? Requiero de tu\n"
	.string "presencia inmediatamente en la BASE\l"
	.string "ROCKET PROFUNDA. Es crucial que vengas\l"
	.string "cuanto antes.$"


DesertRuins_Evento_Andra::
lock
delay 40
applymovement 2, DesertRuins_Evento_Andra_Move_1
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_1 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_2 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_3
waitmovement 0x0
delay 40
playse SE_PIN
applymovement 2, DesertRuins_Evento_Andra_Move_4
waitmovement 0x0
delay 30
msgbox DesertRuins_Evento_Andra_Texto_3 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_5
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_Andra_Move_6
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_4 MSGBOX_AUTOCLOSE
applymovement 2, DesertRuins_Evento_Andra_Move_7
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_Andra_Move_2
waitmovement 0x0
msgbox DesertRuins_Evento_Andra_Texto_5 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, DesertRuins_Evento_Andra_Move_3
applymovement 2, DesertRuins_Evento_Andra_Move_8
waitmovement 0x0
playse SE_EXIT
setflag FLAG_HIDE_SLATEPORT_CITY_OCEANIC_MUSEUM_2F_AQUA_GRUNT_2
removeobject 2
setvar VAR_UNUSED_0x40F7, 189
release
end

DesertRuins_Evento_Andra_Move_8:
walk_up
walk_up
step_end

DesertRuins_Evento_Andra_Move_7:
face_left
step_end

DesertRuins_Evento_Andra_Move_6:
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

DesertRuins_Evento_Andra_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

DesertRuins_Evento_Andra_Move_4:
emote_exclamation_mark
step_end

DesertRuins_Evento_Andra_Move_3:
face_up
step_end

DesertRuins_Evento_Andra_Move_2:
face_right
step_end

DesertRuins_Evento_Andra_Move_1:
walk_in_place_down
step_end

DesertRuins_Evento_Andra_Texto_1:
.string "ANDRA: ¿Qué te parece? Se respira esa\n"
	.string "atmósfera, de estar cerca de lo\l"
	.string "sagrado, ¿verdad?$"

DesertRuins_Evento_Andra_Texto_2:
.string "Hay 2 cuevas más como esta por HOENN,\n"
	.string "así pudimos obtener el ADN de los\l"
	.string "REGIS. Aunque sean legendarios como\l"
	.string "las AVES, el halo de misterio que les\l"
	.string "rodea es mayor.$"

DesertRuins_Evento_Andra_Texto_3:
.string "¿Uh?$"

DesertRuins_Evento_Andra_Texto_4:
.string "Esto no debería de estar abierto,\n"
	.string "parece que alguien más ha venido de\l"
	.string "visita. ¿También te haces una idea de\l"
	.string "lo que puede ser?$"

DesertRuins_Evento_Andra_Texto_5:
.string "Hay que estar atentos, {PLAYER}.\n"
	.string "Entremos juntos.$"


DesertRuins_Dialogo_Regirock::
lock
msgbox DesertRuins_Dialogo_Regirock_Texto_1 MSGBOX_NPC
release
end

DesertRuins_Dialogo_Regirock_Texto_1:
.string "El POKÉMON parece estar inmerso en un\n"
	.string "profundo sueño. Mejor no molestarlo.$"


Bloqueo_Neo_Canela::
lock
applymovement OBJ_EVENT_ID_PLAYER, Bloqueo_Neo_Canela_Move_1
waitmovement 0x0
msgbox Bloqueo_Neo_Canela_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Bloqueo_Neo_Canela_Move_2
waitmovement 0x0
release
end

Bloqueo_Neo_Canela_Move_1:
walk_in_place_down
step_end

Bloqueo_Neo_Canela_Move_2:
walk_down
step_end

Bloqueo_Neo_Canela_Texto_1:
.string "(GIOVANNI me ha convocado en su\n"
	.string "despacho urgentemente).$"


