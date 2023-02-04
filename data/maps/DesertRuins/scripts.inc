DesertRuins_MapScripts::
	map_script MAP_SCRIPT_ON_RESUME, DesertRuins_OnResume
	map_script MAP_SCRIPT_ON_LOAD, DesertRuins_OnLoad
	map_script MAP_SCRIPT_ON_TRANSITION, DesertRuins_OnTransition
	.byte 0

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
msgbox DesertRuins_Evento_CamaraRegirock_Texto_2 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_3 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_4 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_5 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_6 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_7 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_8 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_9 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_10 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_11 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_12 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_13 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_14 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_15 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_16 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_17 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_18 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_19 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_20 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_21 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_22 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_23 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_24 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_25 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_26 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_27 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_28 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_29 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_30 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_31 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_32 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_33 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_34 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_35 MSGBOX_AUTOCLOSE
msgbox DesertRuins_Evento_CamaraRegirock_Texto_36 MSGBOX_AUTOCLOSE
release
end

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
	.string "fuertes sabría quiénes sois. Después\l"
	.string "de arrasar con tu equipo DEVON seguirá\l"
	.string "sin saber quién eres.$"

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
.string "{PLAYER}, se requiere de tu presencia\n"
	.string "en las vías de tren de nuevo, parece\l"
	.string "ser que el POKÉMON que ralentizó las\l"
	.string "obras ha vuelto. Trata de capturarlo\l"
	.string "esta vez, las obras están apunto de\l"
	.string "concluir, y el POKÉMON está causando\l"
	.string "problemas casi a altura de CIUDAD\l"
	.string "AZAFRÁN, tenlo en cuenta.$"

DesertRuins_Evento_CamaraRegirock_Texto_33:
.string "ANDRA: Otro LEGENDARIO, supongo.$"

DesertRuins_Evento_CamaraRegirock_Texto_34:
.string "Ve {PLAYER}, yo volveré a mi DESPACHO.\n"
	.string "GIOVANNI dijo que la II GRAN REUNIÓN\l"
	.string "en TRIGAL se celebraría después de\l"
	.string "derrumbar la TORRE POKÉMON, imagino\l"
	.string "que debe de estar al caer.$"

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

