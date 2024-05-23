.set LOCALID_EXPERT_M, 4
.set LOCALID_TWIN, 5
.set LOCALID_SCHOOL_KID_M, 7
.set LOCALID_PSYCHIC_M, 8

DewfordTown_Hall_MapScripts::
	.byte 0

DewfordTown_Hall_EventScript_Girl::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	special IsTrendyPhraseBoring
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Hall_EventScript_GirlBoredOfTrend
	msgbox DewfordTown_Hall_Text_CantImagineLifeWithoutTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_GirlBoredOfTrend::
	msgbox DewfordTown_Hall_Text_GettingBoredOfTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Woman::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_TeachingMonAboutTrend, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Man::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	special BufferDeepLinkPhrase
	msgbox DewfordTown_Hall_Text_DeepLinkBetweenXAndY, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_Hall_EventScript_ConfirmTrendLink
	goto_if_eq VAR_RESULT, NO, DewfordTown_Hall_EventScript_RejectTrendLink
	end

DewfordTown_Hall_EventScript_ConfirmTrendLink::
	msgbox DewfordTown_Hall_Text_MyHunchWasRight, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_RejectTrendLink::
	msgbox DewfordTown_Hall_Text_NotEasyToKeepUp, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_ExpertM::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_TVShowAboutTrend, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_EXPERT_M, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_Twin::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_TWIN, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	release
	end

DewfordTown_Hall_EventScript_LittleBoy::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_CollectTrendMerchandise, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_EventScript_Bookshelf::
	lockall
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Hall_Text_BooksAboutTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_Painting::
	lockall
	call Common_EventScript_BufferTrendyPhrase
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_ScreamTitle
	case 4, DewfordTown_Hall_EventScript_ScreamTitle
	case 1, DewfordTown_Hall_EventScript_SmileTitle
	case 5, DewfordTown_Hall_EventScript_ScreamTitle
	case 2, DewfordTown_Hall_EventScript_LastTitle
	case 6, DewfordTown_Hall_EventScript_LastTitle
	case 3, DewfordTown_Hall_EventScript_BirthTitle
	case 7, DewfordTown_Hall_EventScript_LastTitle
	end

DewfordTown_Hall_EventScript_ScreamTitle::
	msgbox DewfordTown_Hall_Text_TrendsScream, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_SmileTitle::
	msgbox DewfordTown_Hall_Text_TrendsSmile, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_LastTitle::
	msgbox DewfordTown_Hall_Text_LastTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_BirthTitle::
	msgbox DewfordTown_Hall_Text_BirthOfTrend, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_SchoolKidM::
	lockall
	setvar VAR_0x8008, 0
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end

DewfordTown_Hall_EventScript_PsychicM::
	lockall
	setvar VAR_0x8008, 1
	goto DewfordTown_Hall_EventScript_DoTrendDebate
	end

DewfordTown_Hall_EventScript_DoTrendDebate::
	call Common_EventScript_BufferTrendyPhrase
	special GetDewfordHallPaintingNameIndex
	switch VAR_RESULT
	case 0, DewfordTown_Hall_EventScript_TrendDebate1
	case 1, DewfordTown_Hall_EventScript_TrendDebate1
	case 2, DewfordTown_Hall_EventScript_TrendDebate2
	case 3, DewfordTown_Hall_EventScript_TrendDebate2
	case 4, DewfordTown_Hall_EventScript_TrendDebate3
	case 5, DewfordTown_Hall_EventScript_TrendDebate3
	case 6, DewfordTown_Hall_EventScript_TrendDebate4
	case 7, DewfordTown_Hall_EventScript_TrendDebate5
	end

DewfordTown_Hall_EventScript_TrendDebate1::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_SawTrendCoolestThing, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_AllegedTrendNotAuthentic, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate2::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_ComposedTrendThemeSong, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_WorkOnYourSinging, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate3::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_OrganizeTrendParty, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_BrilliantIndeed, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate4::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_TrendHasBecomePartOfLife, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_TrendDebate5::
	call DewfordTown_Hall_EventScript_DebateReact1
	msgbox DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible, MSGBOX_DEFAULT
	call DewfordTown_Hall_EventScript_DebateReact2
	msgbox DewfordTown_Hall_Text_WellBeTrendDuo, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Hall_EventScript_DontMovePlayer1::
	return

DewfordTown_Hall_EventScript_DebateReact1::
	applymovement LOCALID_PSYCHIC_M, DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft
	waitmovement 0
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactWest
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_DontMovePlayer2
	end

DewfordTown_Hall_EventScript_PlayerReactWest::
	goto_if_eq VAR_FACING, DIR_EAST, DewfordTown_Hall_EventScript_DontMovePlayer1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	return

DewfordTown_Hall_EventScript_DontMovePlayer2::
	return

DewfordTown_Hall_EventScript_DebateReact2::
	applymovement LOCALID_SCHOOL_KID_M, DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight
	waitmovement 0
	goto_if_eq VAR_0x8008, 0, DewfordTown_Hall_EventScript_PlayerReactNorthSouth
	goto_if_eq VAR_0x8008, 1, DewfordTown_Hall_EventScript_PlayerReactEast
	end

DewfordTown_Hall_EventScript_PlayerReactNorthSouth::
	call_if_eq VAR_FACING, DIR_NORTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp
	call_if_eq VAR_FACING, DIR_SOUTH, DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown
	return

DewfordTown_Hall_EventScript_PlayerWalkInPlaceUp::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerWalkInPlaceDown::
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

DewfordTown_Hall_EventScript_PlayerReactEast::
	goto_if_eq VAR_FACING, DIR_WEST, DewfordTown_Hall_EventScript_DontMovePlayer1
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	return

DewfordTown_Hall_Movement_PsychicWalkInPlaceLeft:
	walk_in_place_left
	step_end

DewfordTown_Hall_Movement_SchoolKidWalkInPlaceRight:
	walk_in_place_right
	step_end


DewfordTown_EventScript_ReceiveSwablu::
    lock
    faceplayer
	checkmoncatch SPECIES_LILEEP
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_Lileep_EventScript_TakeNosepass 
	msgbox DewfordTown_Lileep_Text_1, MSGBOX_DEFAULT
	release
	end



DewfordTown_Lileep_EventScript_TakeNosepass::
lock
faceplayer
    msgbox DewfordTown_Lileep_Text_TakeNosepass MSGBOX_DEFAULT
	msgbox DewfordTown_Lileep_Text_TakeNosepass2 MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox DewfordTown_Lileep_Text_MensajeNosepass, MSGBOX_DEFAULT
	givemon SPECIES_LILEEP, 60, ITEM_NONE
	waitfanfare  
	release
	end 



DewfordTown_Lileep_Text_TakeNosepass:
	.string	"En mi opinión, LILEEP está\n"
	.string	"en su mejor momento. Es lo mejor.$"

DewfordTown_Lileep_Text_TakeNosepass2:
	.string	"¿Eh? ¿Me estás diciendo que no\n"
	.string	"sabes qué POKÉMON es LILEEP?\p"
	.string	"Qué pena, penita, pena.\n"
	.string	"Pues te voy a dar uno, fíjate tú.$"

DewfordTown_Lileep_Text_MensajeNosepass:
.string "¡OBTUVISTE UN LILEEP AL NV.60!$"

DewfordTown_Lileep_Text_1:
	.string	"Me encanta LILEEP.\p"
	.string	"Pero también me gustan los POKéMON\n"
	.string	"que saben el movimiento\l"
	.string	"“{STR_VAR_1}”.$"

DewfordTown_Hall_EventScript_SludgeBombMan::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_TM36, DewfordTown_Hall_EventScript_ReceivedSludgeBomb
	msgbox DewfordTown_Hall_Text_GiveYouSludgeBomb, MSGBOX_DEFAULT
	giveitem ITEM_TM36
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM36
	release
	end

DewfordTown_Hall_EventScript_ReceivedSludgeBomb::
	msgbox DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo, MSGBOX_DEFAULT
	release
	end

DewfordTown_Hall_Text_CantImagineLifeWithoutTrend:
	.string	"¿Qué es lo que está de moda? ¡Pues\n"
	.string	"“{STR_VAR_1}”, claro!\p"
	.string	"¡No puedo imaginarme lo que sería la\n"
	.string	"vida sin “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_GettingBoredOfTrend:
	.string	"¿Qué es lo que está de moda? ¡Pues\n"
	.string	"“{STR_VAR_1}”, claro!\p"
	.string	"Pero ya empiezo a hartarme un poco…\p"
	.string	"Debería enterarme de lo que está\n"
	.string	"a la última de verdad…$"

DewfordTown_Hall_Text_TeachingMonAboutTrend:
	.string	"Estoy enseñando a mi POKéMON todo\n"
	.string	"sobre “{STR_VAR_1}”,\l"
	.string	"pero no acaba de funcionar…\p"
	.string	"Creo que el pobre no da más de sí…$"

DewfordTown_Hall_Text_DeepLinkBetweenXAndY:
	.string	"Estoy estudiando algo supermolón:\n"
	.string	"¡“{STR_VAR_1}”!\p"
	.string	"¿Crees que de veras existe un vínculo\n"
	.string	"entre “{STR_VAR_1}”\l"
	.string	"y “{STR_VAR_2}”?$"

DewfordTown_Hall_Text_MyHunchWasRight:
	.string	"¡Oh!\n"
	.string	"¡Entonces mi corazonada era cierta!\p"
	.string	"¡Cada vez estoy más cerca de ser\n"
	.string	"superguay y supermoderno! ¡Yupi!$"

DewfordTown_Hall_Text_NotEasyToKeepUp:
	.string	"¡¿Cómo?!\n"
	.string	"¡¿En serio?!\p"
	.string	"Ya estoy muy mayor para estar al\n"
	.string	"tanto de las últimas tendencias…$"

DewfordTown_Hall_Text_TVShowAboutTrend:
	.string	"Toda esta historia de\n"
	.string	"“{STR_VAR_1}”…\l"
	.string	"¿Ha salido en la tele o algo?$"

DewfordTown_Hall_Text_IsTrendMorePopularAcrossSea:
	.string	"¿Y al otro lado del mar…\p"
	.string	"todo el mundo dice también\n"
	.string	"“{STR_VAR_1}”?$"

DewfordTown_Hall_Text_CollectTrendMerchandise:
	.string	"Colecciono artículos oficiales\n"
	.string	"“{STR_VAR_1}”.\p"
	.string	"Tengo muñecos oficiales\n"
	.string	"“{STR_VAR_1}”…,\p"
	.string	"ropa de marca\n"
	.string	"“{STR_VAR_1}”…\p"
	.string	"y libros ilustrados oficiales\n"
	.string	"“{STR_VAR_1}”.\p"
	.string	"¡Y es todo mío!\n"
	.string	"¡Se mira, pero no se toca!$"

DewfordTown_Hall_Text_BooksAboutTrend:
	.string	"“DIFERENCIANDO UN BUEN\n"
	.string	"“{STR_VAR_1}” DE UN\l"
	.string	"“{STR_VAR_1}” MALO”…\p"
	.string	"“LA CONEXIÓN ENTRE\n"
	.string	"“{STR_VAR_1}” Y\l"
	.string	"LOS POKéMON”…\p"
	.string	"“EL “{STR_VAR_1}”\n"
	.string	"ÚTIL”…\p"
	.string	"Hay un montón de libros que tratan de\n"
	.string	"“{STR_VAR_1}”.$"

DewfordTown_Hall_Text_TrendsScream:
	.string	"El título es “EL GRITO DE\n"
	.string	"{STR_VAR_1}”.$"

DewfordTown_Hall_Text_TrendsSmile:
	.string	"El título es “LA SONRISA DE\n"
	.string	"{STR_VAR_1}”.$"

DewfordTown_Hall_Text_LastTrend:
	.string	"El título es “EL ÚLTIMO\n"
	.string	"{STR_VAR_1}”.$"

DewfordTown_Hall_Text_BirthOfTrend:
	.string	"El título es “EL NACIMIENTO DE\n"
	.string	"{STR_VAR_1}”.$"

DewfordTown_Hall_Text_SawTrendCoolestThing:
	.string	"He visto “{STR_VAR_1}”\n"
	.string	"y mola cantidubi.\p"
	.string	"Me ha hecho flipar en colores.\p"
	.string	"¡Era asombroso!\n"
	.string	"¡Lo más de lo más!$"

DewfordTown_Hall_Text_AllegedTrendNotAuthentic:
	.string	"Oh, no, no y no.\p"
	.string	"Crees haber visto\n"
	.string	"“{STR_VAR_1}”…\l"
	.string	"Pero es de mentira…\p"
	.string	"Para ser auténtico, debería tener…,\n"
	.string	"¿cómo lo diría yo?…, fuerza y\l"
	.string	"delicadeza al mismo tiempo…\p"
	.string	"Bah, qué más da… ¡Es chulísimo!$"

DewfordTown_Hall_Text_ComposedTrendThemeSong:
	.string	"Óyeme. He compuesto una canción\n"
	.string	"sobre “{STR_VAR_1}”.\p"
	.string	"“{STR_VAR_1}”\n"
	.string	"es muy popular actualmente.\p"
	.string	"¡Vale, escúchala!\p"
	.string	"¡Oh, oh, {STR_VAR_1}!\n"
	.string	"¡La, la, la!\p"
	.string	"¡Sólo {STR_VAR_1}!\n"
	.string	"¡La, la, la!$"

DewfordTown_Hall_Text_WorkOnYourSinging:
	.string	"Jo, colega…\p"
	.string	"Antes de chafar del todo\n"
	.string	"“{STR_VAR_1}”,\l"
	.string	"deberías aprender a cantar…$"

DewfordTown_Hall_Text_OrganizeTrendParty:
	.string	"Pero como decía yo antes, habría\n"
	.string	"que juntarse y organizar una fiesta\l"
	.string	"“{STR_VAR_1}”\l"
	.string	"en la isla.$"

DewfordTown_Hall_Text_BrilliantIndeed:
	.string	"¡Qué idea tan buena!\p"
	.string	"Por fin sabremos quién es el as de\n"
	.string	"“{STR_VAR_1}”.\l"
	.string	"¡Una idea buenísima!\p"
	.string	"¡A partir de hoy, todo girará alrededor\n"
	.string	"de “{STR_VAR_1}”!$"

DewfordTown_Hall_Text_TrendHasBecomePartOfLife:
	.string	"Estaba pensando una cosa…\p"
	.string	"¿No opinas también que\n"
	.string	"“{STR_VAR_1}” ha\l"
	.string	"pasado de ser una moda a ser\l"
	.string	"parte de nuestras vidas?$"

DewfordTown_Hall_Text_TrendWeighsHeavilyOnMind:
	.string	"¿Perdón?\n"
	.string	"¿Tanto como eso?\p"
	.string	"Sin embargo, es verdad que tenemos\n"
	.string	"a “{STR_VAR_1}”\l"
	.string	"en la cabeza a todas horas.\p"
	.string	"¡Pero, en lo que respecta a pensar\n"
	.string	"en “{STR_VAR_1}”,\l"
	.string	"nadie te gana, coleguita!$"

DewfordTown_Hall_Text_IfWeTeamUpWellBeInvincible:
	.string	"Si tú y yo unimos fuerzas, seremos\n"
	.string	"invencibles en todo lo que concierne\l"
	.string	"a “{STR_VAR_1}”.$"

DewfordTown_Hall_Text_WellBeTrendDuo:
	.string	"¡Escucha, colega!\p"
	.string	"¡Seremos el DÚO\n"
	.string	"“{STR_VAR_1}”!\p"
	.string	"¿No te parece buena idea?\n"
	.string	"¡Ja, ja, ja, ja!$"

DewfordTown_Hall_Text_GiveYouSludgeBomb:
	.string	"En mi opinión, LILEEP está\n"
	.string	"en su mejor momento. Es lo mejor.\p"
	.string	"¿Eh? ¿Me estás diciendo que no\n"
	.string	"sabes qué POKÉMON es LILEEP?\p"
	.string	"Qué pena, penita, pena.\n"
	.string	"Pues te voy a dar uno, fíjate tú.$"

DewfordTown_Hall_Text_LoveSludgeBombButTrendInToo:
	.string	"Me encanta LILEEP.\p"
	.string	"Pero también me gustan los POKéMON\n"
	.string	"que saben el movimiento\l"
	.string	"“{STR_VAR_1}”.$"

DewfordTown_Hall_Secundaria::
lock
faceplayer
compare VAR_ROUTE118_STATE, 4
goto_if_gt DewfordTown_Hall_Secundaria_Final
compare VAR_ROUTE118_STATE, 1
goto_if_gt DewfordTown_Hall_Secundaria_Despues
msgbox DewfordTown_Hall_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_7 MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq DewfordTown_Hall_Secundaria_No
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
delay 15
setvar VAR_ROUTE118_STATE, 2
release
end

DewfordTown_Hall_Secundaria_Despues::
msgbox DewfordTown_Hall_Secundaria_Texto_12 MSGBOX_AUTOCLOSE
release
end


DewfordTown_Hall_Secundaria_No::
msgbox DewfordTown_Hall_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
release
end


DewfordTown_Hall_Secundaria_Texto_1:
	.string "Esa niña de la CASA de la PLAYA, en\n"
	.string "CIUDAD PORTUAL, es muy pesada…$"

DewfordTown_Hall_Secundaria_Texto_2:
	.string "En el colegio está siempre presumiendo\n"
	.string "de que su padre nos da mil vueltas a\l"
	.string "todos entrenando POKÉMÓN.$"

DewfordTown_Hall_Secundaria_Texto_3:
	.string "Es una engreída que se cree la mejor,\n"
	.string "cómo me gustaría que alguien le diera\l"
	.string "una buena lección.$"

DewfordTown_Hall_Secundaria_Texto_4:
	.string "… …$"

DewfordTown_Hall_Secundaria_Texto_5:
	.string "¿Tú crees que podrías derrotar a su\n"
	.string "padre?$"

DewfordTown_Hall_Secundaria_Texto_6:
	.string "Dicen que es más fuerte que un LÍDER de\n"
	.string "GIMNASIO, nadie le ha visto perder.$"

DewfordTown_Hall_Secundaria_Texto_7:
	.string "¿Estás seguro?$"

DewfordTown_Hall_Secundaria_Texto_8:
	.string "Entiendo… no queda otra que seguir\n"
	.string "soportándola en el colegio.$"

DewfordTown_Hall_Secundaria_Texto_9:
	.string "¿De verdad? ¡Guau!$"

DewfordTown_Hall_Secundaria_Texto_10:
	.string "Pero tiene que haber testigos, avisaré\n"
	.string "a un amigo de PORTUAL que suele jugar\l"
	.string "en la playa.$"

DewfordTown_Hall_Secundaria_Texto_11:
	.string "Me encantaría que pudieras derrotar a\n"
	.string "su padre delante de todos. Si logras\l"
	.string "hacerlo, ¡te daré algo muy guay!$"

DewfordTown_Hall_Secundaria_Texto_12:
	.string "La CASA de la PLAYA no tiene pérdida, es\n"
	.string "la única que hay en la playa de CIUDAD\l"
	.string "PORTUAL. Esa niña siempre está en la\l"
	.string "puerta riéndose de todos, ¡es odiosa!$"

DewfordTown_Hall_Secundaria_Final::
lock
msgbox DewfordTown_Hall_Secundaria_Final_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_1
waitmovement 0x0
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 10
addobject 11
clearflag FLAG_HOENN_688
playse SE_DOOR
waitse
delay 15
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_3
waitmovement 0x0
playse SE_PIN
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_2
applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Hall_Secundaria_Final_Move_3
waitmovement 0x0
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_4
waitmovement 0x0
playse SE_PIN
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Hall_Secundaria_Final_Move_5
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_6
waitmovement 0x0
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_3 MSGBOX_AUTOCLOSE
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_7
waitmovement 0x0
msgbox DewfordTown_Hall_Secundaria_Final_Texto_4 MSGBOX_AUTOCLOSE
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_7
waitmovement 0x0
msgbox DewfordTown_Hall_Secundaria_Final_Texto_6 MSGBOX_AUTOCLOSE
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_8
waitmovement 0x0
msgbox DewfordTown_Hall_Secundaria_Final_Texto_7 MSGBOX_AUTOCLOSE
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_9
waitmovement 0x0
msgbox DewfordTown_Hall_Secundaria_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_7
waitmovement 0x0
msgbox DewfordTown_Hall_Secundaria_Final_Texto_9 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_2
waitmovement 0x0
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_10 MSGBOX_AUTOCLOSE
delay 15
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_10
waitmovement 0x0
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_11 MSGBOX_AUTOCLOSE
delay 15
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_11
waitmovement 0x0
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_12 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_2
waitmovement 0x0
delay 15
playse SE_LEDGE
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_12
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_12
waitmovement 0x0
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_13 MSGBOX_AUTOCLOSE
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_7
waitmovement 0x0
msgbox DewfordTown_Hall_Secundaria_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_9
waitmovement 0x0
msgbox DewfordTown_Hall_Secundaria_Final_Texto_15 MSGBOX_AUTOCLOSE
delay 15
playse SE_LEDGE
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_13
waitmovement 0x0
waitse
playse SE_LEDGE
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_13
waitmovement 0x0
delay 15
msgbox DewfordTown_Hall_Secundaria_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 10, DewfordTown_Hall_Secundaria_Final_Move_14.1
applymovement 11, DewfordTown_Hall_Secundaria_Final_Move_14
waitmovement 0x0
playse SE_EXIT
removeobject 10
removeobject 11
setflag FLAG_HOENN_688
setflag FLAG_HOENN_36
release
end

DewfordTown_Hall_Secundaria_Final_Move_14.1:
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
face_down
step_end

DewfordTown_Hall_Secundaria_Final_Move_14:
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
face_down
walk_down
step_end

DewfordTown_Hall_Secundaria_Final_Move_13:
jump_in_place_up
step_end

DewfordTown_Hall_Secundaria_Final_Move_12:
jump_in_place_down
step_end

DewfordTown_Hall_Secundaria_Final_Move_11:
face_up
step_end

DewfordTown_Hall_Secundaria_Final_Move_10:
face_left
step_end

DewfordTown_Hall_Secundaria_Final_Move_9:
walk_in_place_down
step_end

DewfordTown_Hall_Secundaria_Final_Move_8:
walk_slow_down
step_end

DewfordTown_Hall_Secundaria_Final_Move_7:
walk_in_place_up
step_end

DewfordTown_Hall_Secundaria_Final_Move_6:
walk_up
walk_up
walk_up
step_end

DewfordTown_Hall_Secundaria_Final_Move_5:
delay_16
walk_slow_right
face_left
step_end

DewfordTown_Hall_Secundaria_Final_Move_4:
walk_slow_up
delay_16
face_left
delay_16
delay_16
walk_slow_right
walk_slow_right
delay_16
delay_16
face_up
delay_16
delay_16
walk_slow_right
walk_slow_right
delay_16
delay_16
face_up
delay_16
delay_16
walk_slow_right
walk_slow_right
delay_16
delay_16
face_up
step_end

DewfordTown_Hall_Secundaria_Final_Move_3:
face_down
step_end

DewfordTown_Hall_Secundaria_Final_Move_2:
emote_exclamation_mark
step_end

DewfordTown_Hall_Secundaria_Final_Move_1:
face_right
step_end

DewfordTown_Hall_Secundaria_Final_Texto_1:
	.string "¡No sabía que en HOENN había\n"
	.string "entrenadores tan fuertes como tú! Mi\l"
	.string "amigo me dijo que todos los demás\l"
	.string "parecían novatos a tu lado.$"

DewfordTown_Hall_Secundaria_Final_Texto_2:
	.string "Aunque… a decir verdad… la niña acabó\n"
	.string "dándome un poco de pena. Todo se le\l"
	.string "vino arriba de repente, tal vez…$"

DewfordTown_Hall_Secundaria_Final_Texto_3:
	.string "¿Q-qué haces aquí?$"

DewfordTown_Hall_Secundaria_Final_Texto_4:
	.string "M-mi padre me ha hecho pedir perdón a\n"
	.string "todos los que molestaba en el cole.$"

DewfordTown_Hall_Secundaria_Final_Texto_5:
	.string "Oh.$"

DewfordTown_Hall_Secundaria_Final_Texto_6:
	.string "L-lo siento. Solo quería que todos\n"
	.string "supieran lo guay que era mi padre y\l"
	.string "parecerme a él.$"

DewfordTown_Hall_Secundaria_Final_Texto_7:
	.string "N-no te preocupes. Creímos que eras\n"
	.string "una fanfarrona y nos sorprendiste.$"

DewfordTown_Hall_Secundaria_Final_Texto_8:
	.string "Mi amigo me dijo que eres casi tan\n"
	.string "fuerte como tu padre, ¿de verdad tienes\l"
	.string "una MEGAPIEDRA?$"

DewfordTown_Hall_Secundaria_Final_Texto_9:
	.string "¡Sí! Bueno… La encontramos en el MONTE\n"
	.string "PÍRICO, en la lápida de mi mami… Desde\l"
	.string "entonces la llevo siempre conmigo.$"

DewfordTown_Hall_Secundaria_Final_Texto_10:
	.string "Oh, no lo sabía… lo siento mucho…$"

DewfordTown_Hall_Secundaria_Final_Texto_11:
	.string "No pasa nada. Esta MEGAPIEDRA me\n"
	.string "protege, estoy segura.$"

DewfordTown_Hall_Secundaria_Final_Texto_12:
	.string "¿Sabes una cosa? Con mi BANNETE\n"
	.string "podremos explorar la CUEVA GRANITO sin\l"
	.string "miedo, ¡puede aprender DESTELLO!$"

DewfordTown_Hall_Secundaria_Final_Texto_13:
	.string "¡Guau! ¡Me encantaría! ¡Siempre quise\n"
	.string "explorarla pero me da miedo la\l"
	.string "oscuridad!$"

DewfordTown_Hall_Secundaria_Final_Texto_14:
	.string "¿Entonces te apuntas?$"

DewfordTown_Hall_Secundaria_Final_Texto_15:
	.string "¡Sí! ¡Vamos a explorarla!$"

DewfordTown_Hall_Secundaria_Final_Texto_16:
	.string "¡A lo mejor hasta encontramos una\n"
	.string "MEGAPIEDRA para ti!$"


