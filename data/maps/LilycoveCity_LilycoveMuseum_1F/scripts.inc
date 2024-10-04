.set LOCALID_CURATOR, 2
.set LOCALID_ARTIST_2, 8

LilycoveCity_LilycoveMuseum_1F_MapScripts::
	.byte 0

LilycoveCity_LilycoveMuseum_1F_EventScript_Greeter::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Curator::
	lockall
	applymovement LOCALID_CURATOR, Common_Movement_FacePlayer
	message LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings
	waitmessage
	multichoice 20, 8, MULTI_VIEWED_PAINTINGS, TRUE
	goto_if_eq VAR_RESULT, 0, LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings
	goto_if_eq VAR_RESULT, 1, LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NotYet::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SawPaintings::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, NO, LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested
	goto_if_eq VAR_RESULT, YES, LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NotInterested::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat, MSGBOX_SIGN
	releaseall
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_InterestedInPaintings::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe, MSGBOX_SIGN
	applymovement LOCALID_CURATOR, LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs
	waitmovement 0
	removeobject LOCALID_CURATOR
	switch VAR_FACING
	case DIR_NORTH, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth
	case DIR_WEST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest
	case DIR_EAST, LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorNorth::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorWest::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FollowCuratorEast::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast
	waitmovement 0
	warp MAP_LILYCOVE_CITY_LILYCOVE_MUSEUM_2F, 11, 8
	waitstate
	end

LilycoveCity_LilycoveMuseum_1F_Movement_CuratorEnterStairs:
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorWest:
	walk_left
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorEast:
	walk_right
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_Movement_FollowCuratorNorth:
	walk_up
	walk_up
	step_end

LilycoveCity_LilycoveMuseum_1F_EventScript_OldPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FantasyPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_WomanPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_LegendaryPokemonPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_GrassPokemonPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_BerryPainting::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_EventScript_BirdSculpture::
	msgbox LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_PokeBallSculpture::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_StoneTablet::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_SchoolKidM::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Artist1::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_NinjaBoy::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Woman1::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable, MSGBOX_SIGN
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Woman2::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_PsychicM::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_Artist2::
	lock
	faceplayer
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_ARTIST_2, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

LilycoveCity_LilycoveMuseum_1F_EventScript_FatMan::
	msgbox LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination, MSGBOX_NPC
	end

LilycoveCity_LilycoveMuseum_1F_Text_WelcomeToLilycoveMuseum:
	.string	"Hola. Estás en el MUSEO de CALAGUA.\p"
	.string	"Te rogamos que entres y disfrutes\n"
	.string	"de nuestra extraordinaria colección\l"
	.string	"de arte sobre temática POKéMON.$"

LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings:
	.string	"Soy el DIRECTOR de este MUSEO\n"
	.string	"de Bellas Artes.\p"
	.string	"Me llena de alegría ver que alguien tan\n"
	.string	"joven como tú se interesa por el arte.\p"
	.string	"¿Ya has visto nuestra colección\n"
	.string	"de pintura?$"

LilycoveCity_LilycoveMuseum_1F_Text_NotDisturbYouTakeYourTime:
	.string	"Entonces no te molesto más.\n"
	.string	"Tómate el tiempo que quieras.$"

LilycoveCity_LilycoveMuseum_1F_Text_HaveYouAnInterestInPaintings:
	.string	"¿Ah, sí? Tengo entendido que\n"
	.string	"entrenas POKéMON.\p"
	.string	"¿También te gusta el arte?$"

LilycoveCity_LilycoveMuseum_1F_Text_HonoredYoudVisitInSpiteOfThat:
	.string	"Oh, qué pena…\p"
	.string	"En cualquier caso te agradezco que\n"
	.string	"hayas venido a visitar el MUSEO.$"

LilycoveCity_LilycoveMuseum_1F_Text_ExcellentCanYouComeWithMe:
	.string	"¡Espléndido!\p"
	.string	"En ese caso, ¿te importaría\n"
	.string	"acompañarme?$"

LilycoveCity_LilycoveMuseum_1F_Text_VeryOldPainting:
	.string	"Éste es un cuadro muy antiguo.\n"
	.string	"Necesita una buena restauración{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_LilycoveMuseum_1F_Text_OddLandscapeFantasticScenery:
	.string	"Plasma un paisaje de tiempos antiguos.\n"
	.string	"La escena es extraña y misteriosa.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBeautifulWoman:
	.string	"Es un cuadro de una hermosa mujer\n"
	.string	"con un POKéMON en su regazo.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfLegendaryPokemon:
	.string	"Es una pintura de un POKéMON\n"
	.string	"legendario de tiempos remotos.\p"
	.string	"Es pura creación artística.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfGrassPokemon:
	.string	"Es una imagen de unos POKéMON PLANTA\n"
	.string	"que se dejan mecer por una suave brisa.\p"
	.string	"Parecen muy felices.$"

LilycoveCity_LilycoveMuseum_1F_Text_PaintingOfBerries:
	.string	"Plasma un cesto de BAYAS\n"
	.string	"con un aspecto delicioso.\p"
	.string	"Ñam, ñam, ¡qué hambre!$"

LilycoveCity_LilycoveMuseum_Text_BirdPokemonSculptureReplica:
	.string	"Es una réplica de una escultura\n"
	.string	"muy famosa que representa a\l"
	.string	"un antiguo POKéMON PÁJARO.$"

LilycoveCity_LilycoveMuseum_1F_Text_BigPokeBallCarvedFromStone:
	.string	"Es una gran POKé BALL esculpida\n"
	.string	"en roca basáltica.\p"
	.string	"Al parecer se usaba en los festivales\n"
	.string	"que se celebraban antiguamente.$"

LilycoveCity_LilycoveMuseum_1F_Text_StoneTabletWithAncientText:
	.string	"Es una gran losa de piedra cincelada\n"
	.string	"con POKéMON y gran cantidad de\l"
	.string	"pequeños caracteres pertenecientes\l"
	.string	"a un antiguo y desconocido idioma.$"

LilycoveCity_LilycoveMuseum_1F_Text_WorksOfMagnificence:
	.string	"Hmmm…\n"
	.string	"What works of great magnificence{PAUSE 5}…{PAUSE 5}$"

LilycoveCity_LilycoveMuseum_1F_Text_MustntForgetLoveForFineArts:
	.string	"Combatir con POKéMON es\n"
	.string	"divertido, cierto.\p"
	.string	"Pero no por eso hay que olvidarse\n"
	.string	"de alimentar nuestro espíritu\l"
	.string	"contemplando obras de arte.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisMuseumIsInspiration:
	.string	"Este MUSEO de ARTE alberga\n"
	.string	"una gran colección de pintura.\p"
	.string	"Y el DIRECTOR es muy amable.\p"
	.string	"Para los artistas como yo, este MUSEO\n"
	.string	"es una fuente de inspiración.$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisLadyIsPretty:
	.string	"¡Qué señora tan guapa!\n"
	.string	"¡Es casi tan guapa como mamá!$"

LilycoveCity_LilycoveMuseum_1F_Text_ThisPokemonIsAdorable:
	.string	"¡Qué POKéMON tan encantador!\n"
	.string	"¡Casi tanto como mi niño!$"

LilycoveCity_LilycoveMuseum_1F_Text_HeardMuseumGotNewPaintings:
	.string	"Me han dicho que han ampliado\n"
	.string	"la colección de este MUSEO de ARTE.\p"
	.string	"Por eso he venido a toda máquina.\p"
	.string	"¡Los nuevos cuadros están\n"
	.string	"en el primer piso!$"

LilycoveCity_LilycoveMuseum_1F_Text_CuratorHasBeenCheerful:
	.string	"Últimamente el DIRECTOR\n"
	.string	"está más contento de lo normal.\p"
	.string	"Seguro que le ha pasado algo\n"
	.string	"muy bueno. Sin duda.$"

LilycoveCity_LilycoveMuseum_1F_Text_AimToSeeGreatPaintings:
	.string	"He venido aquí a ver muchas grandes\n"
	.string	"obras y aprender de los maestros.\p"
	.string	"Mi sueño sería exponer mis\n"
	.string	"cuadros aquí.$"

LilycoveCity_LilycoveMuseum_1F_Text_MuseumTouristDestination:
	.string	"El MUSEO de ARTE recibe cada vez\n"
	.string	"más turistas.\p"
	.string	"Le viene muy bien a CALAGUA.\n"
	.string	"¡No, le viene bien a todo HOENN!\p"
	.string	"Y me han dicho que un ENTRENADOR\n"
	.string	"ha sido quien ha conseguido las obras.$"

LilycoveMuseum_1F_Secundaria_Move_1:
walk_in_place_right
step_end

LilycoveMuseum_1F_Secundaria_Move_2:
walk_slow_right
face_up
step_end

LilycoveMuseum_1F_Secundaria_Move_3:
walk_slow_right
walk_slow_up
step_end

LilycoveCity_LilycoveMuseum_1F_Secundaria_Arriba::
lock
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_1F_Secundaria_Move_1
waitmovement 0x0
delay 10
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_1F_Secundaria_Move_2
waitmovement 0x0
goto LilycoveCity_LilycoveMuseum_1F_Secundaria

LilycoveCity_LilycoveMuseum_1F_Secundaria_Abajo::
lock
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_1F_Secundaria_Move_1
waitmovement 0x0
delay 10
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_1 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, LilycoveMuseum_1F_Secundaria_Move_3
waitmovement 0x0
goto LilycoveCity_LilycoveMuseum_1F_Secundaria


LilycoveMuseum_1F_Secundaria_Move_4:
walk_in_place_up
step_end

LilycoveMuseum_1F_Secundaria_Move_5:
walk_in_place_down
step_end

LilycoveCity_LilycoveMuseum_1F_Secundaria::
applymovement 8, LilycoveMuseum_1F_Secundaria_Move_4
waitmovement 0x0
delay 10
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_2 MSGBOX_AUTOCLOSE
delay 10
applymovement 2, LilycoveMuseum_1F_Secundaria_Move_5
waitmovement 0x0
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_3 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_4 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_5 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_6 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_7 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_8 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_9 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_10 MSGBOX_AUTOCLOSE
msgbox LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_11 MSGBOX_AUTOCLOSE
setvar VAR_ROUTE117_STATE, 9
release
end

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_1:
	.string "No puede ser… esto es inadmisible.$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_2:
	.string "Tal y como se lo he contado. Ese hombre\n"
	.string "no puede seguir al mando del MUSEO.$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_3:
	.string "Puede estar tranquilo,\n"
	.string "pondremos fin a esto.$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_4:
	.string "… …$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_5:
	.string "Un momento, ¡es él!$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_6:
	.string "¡Gracias a este ENTRENADOR pudimos\n"
	.string "descubrir la trama de corrupción!$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_7:
	.string "Todo esto es gracias a usted, entonces.$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_8:
	.string "De parte del MUSEO CALAGUA, se lo\n"
	.string "agradezco. Aquí valoramos mucho a los\l"
	.string "buenos entrenadores.$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_9:
	.string "Yo vuelvo al MUSEO PORTUAL. No sabe lo\n"
	.string "tranquilo que me quedo al saber que\l"
	.string "todo está bien.$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_10:
	.string "Será lo mejor.\n"
	.string "Tendrá noticias nuestras muy pronto.$"

LilycoveCity_LilycoveMuseum_1F_Secundaria_Texto_11:
	.string "Un momento, caballero. ¿Podríamos\n"
	.string "hablar en privado? No le he agradecido\l"
	.string "como es debido su intervención.$"


LilycoveCity_Museo_Director::
lock
compare VAR_ROUTE117_STATE, 7
goto_if_gt LilycoveCity_Museo_Director_2
faceplayer
msgbox LilycoveCity_LilycoveMuseum_1F_Text_ImCuratorHaveYouViewedOurPaintings MSGBOX_NPC
release
end

LilycoveCity_Museo_Director_2::
msgbox LilycoveCity_Museo_Director_2_Texto_1 MSGBOX_AUTOCLOSE
release
end

LilycoveCity_Museo_Director_2_Texto_1:
	.string "… …$"

LilycoveCity_Museo_Portual::
lock
msgbox LilycoveCity_Museo_Portual_Texto_1 MSGBOX_AUTOCLOSE
release
end

LilycoveCity_Museo_Portual_Texto_1:
	.string "Sí, sí… Eso mismo…$"

	