SafariZone_EventScript_OutOfBallsMidBattle::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	setwarp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	end

SafariZone_EventScript_Exit::
	setvar VAR_SAFARI_ZONE_STATE, 1
	special ExitSafariMode
	warp MAP_ROUTE121_SAFARI_ZONE_ENTRANCE, 2, 5
	waitstate
	end

SafariZone_EventScript_RetirePrompt::
	lockall
	msgbox SafariZone_Text_WouldYouLikeToExit, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_Retire
	releaseall
	end

SafariZone_EventScript_Retire::
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_TimesUp::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_TimesUp
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

SafariZone_EventScript_OutOfBalls::
	lockall
	playse SE_DING_DONG
	message SafariZone_Text_OutOfBalls
	waitmessage
	waitbuttonpress
	releaseall
	goto SafariZone_EventScript_Exit

EventScript_PokeBlockFeeder::
	lockall
	special GetPokeblockFeederInFront
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPresent
	msgbox SafariZone_Text_PlacePokeblockOnFeeder, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SafariZone_EventScript_ChoosePokeblock
	releaseall
	end

SafariZone_EventScript_ChoosePokeblock::
	fadescreen FADE_TO_BLACK
	special OpenPokeblockCaseOnFeeder
	waitstate
	goto_if_ne VAR_RESULT, 0xFFFF, SafariZone_EventScript_PokeblockPlaced
	end

SafariZone_EventScript_PokeblockPlaced::
	message SafariZone_Text_PokeblockWasPlaced
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_EventScript_PokeblockPresent::
	message SafariZone_Text_PokeblockStillHere
	waitmessage
	waitbuttonpress
	releaseall
	end

SafariZone_Text_WouldYouLikeToExit:
	.string	"¿Quieres salir de la ZONA SAFARI\n"
	.string	"ahora mismo?$"

SafariZone_Text_TimesUp:
	.string	"¡Ding, dong! ¡Se acabó el tiempo!\n"
	.string	"Tu partida SAFARI ha terminado.$"

SafariZone_Text_OutOfBalls:
	.string	"Te has quedado sin SAFARI BALLS.\n"
	.string	"Tu partida SAFARI ha terminado.$"

SafariZone_Text_PlacePokeblockOnFeeder:
	.string	"¿Quieres colocar un {POKEBLOCK}\n"
	.string	"en el COMEDERO de {POKEBLOCK}S?$"

SafariZone_Text_PokeblockStillHere:
	.string	"El {STR_VAR_1} que colocaste\n"
	.string	"antes sigue aquí.$"

SafariZone_Text_PokeblockWasPlaced:
	.string	"Has colocado un {STR_VAR_1}\n"
	.string	"en el COMEDERO de {POKEBLOCK}S.$"

Route121_SafariZoneEntrance_Text_WelcomeToSafariZone:
	.string "Welcome to the SAFARI ZONE!\p"
	.string "Here, you may witness many kinds of\n"
	.string "POKÉMON rarely seen in HOENN.\p"
	.string "And, you'll see them in their wild,\n"
	.string "untamed state in natural habitats.\p"
	.string "What's more, we've thrown open the\n"
	.string "gates to POKÉMON TRAINERS.\p"
	.string "You're encouraged to catch POKÉMON\n"
	.string "for keeps!\p"
	.string "Come in and enjoy the SAFARI ZONE!$"

Route121_SafariZoneEntrance_Text_WelcomeFirstTime:
	.string	"¡Hola! ¡Ésta es la ZONA SAFARI!\n"
	.string	"¿Es la primera vez que vienes?$"

Route121_SafariZoneEntrance_Text_ComeInAndEnjoy:
	.string	"¡Pasa y disfruta de la ZONA SAFARI!$"

Route121_SafariZoneEntrance_Text_FirstTimeInfo:
	.string "When you enter the SAFARI ZONE, you\n"
	.string "start with 30 SAFARI BALLS for\l"
	.string "catching POKÉMON.\p"
	.string "The SAFARI Game is over when you run\n"
	.string "out of SAFARI BALLS, or when you've\l"
	.string "walked 500 steps.\p"
	.string "Come in and enjoy the SAFARI ZONE!$"

Route121_SafariZoneEntrance_Text_WouldYouLikeToPlay:
	.string	"¡Hola! ¡Ésta es la ZONA SAFARI!\p"
	.string	"¡Atrapa todo lo que puedas por solo\n"
	.string	"500¥! ¿Quieres jugar una partida\l"
	.string	"SAFARI?$"

Route121_SafariZoneEntrance_Text_PlayAnotherTime:
	.string	"No hay problema.\n"
	.string	"Ven cuando quieras.$"

Route121_SafariZoneEntrance_Text_NotEnoughMoney:
	.string	"Lo siento, no tienes bastante dinero.$"

Route121_SafariZoneEntrance_Text_ThatWillBe500Please:
		.string	"Son 500¥, por favor.$"

Route121_SafariZoneEntrance_Text_HereAreYourSafariBalls:
	.string	"Aquí tienes tus SAFARI BALLS.$"

Route121_SafariZoneEntrance_Text_Received30SafariBalls:
	.string	"{PLAYER} recibió 30 SAFARI BALLS.$"

Route121_SafariZoneEntrance_Text_PleaseEnjoyYourself:
	.string	"Te avisaremos cuando se termine\n"
	.string	"la partida.\p"
	.string	"Hasta entonces, pásatelo bien.\n"
	.string	"¡La aventura ha comenzado!$"

Route121_SafariZoneEntrance_Text_PCIsFull:
	.string	"Lo siento, pero todas las CAJAS\n"
	.string	"de tu PC están llenas.$"

Route121_SafariZoneEntrance_Text_YouNeedPokeblockCase:
	.string	"Lo siento, pero parece que no tienes\n"
	.string	"ningún TUBO de {POKEBLOCK}S.\p"
	.string	"Tu partida SAFARI será mucho más\n"
	.string	"fructífera si usas {POKEBLOCK}S.\p"
	.string	"Vuelve cuando tengas un TUBO.\p"
	.string	"Puedes conseguir uno en la SALA\n"
	.string	"de CONCURSOS de CALAGUA.$"

SafariZone_South_Text_StillHaveTimeExit:
	.string	"Todavía te queda tiempo. ¿Quieres\n"
	.string	"salir de la ZONA SAFARI ahora mismo?$"

SafariZone_South_Text_EnjoyTheRestOfYourAdventure:
	.string	"¡Sigue disfrutando de tu aventura!$"

SafariZone_South_Text_ExitEarlyThankYouForPlaying:
	.string	"Muy bien.\p"
	.string	"Me quedaré con las SAFARI BALLS\n"
	.string	"que te sobran.\p"
	.string	"Gracias por jugar con nosotros.\n"
	.string	"Vuelve siempre que quieras.$"

SafariZone_South_Text_GoodLuck:
	.string	"¡Buena suerte!\p"
	.string	"Si necesitas algo, lo que sea,\n"
	.string	"avísame, ¿de acuerdo?$"

SafariZone_South_Text_Boy:
	.string "Did you know?\p"
	.string "If you put a {POKEBLOCK} in that square box,\n"
	.string "POKÉMON gather around.$"

SafariZone_South_Text_Man:
	.string "I want to keep going deeper, but I\n"
	.string "forgot to bring a BIKE.\p"
	.string "Something tells me that rare POKÉMON\n"
	.string "live in the outlying areas.$"

SafariZone_Southwest_Text_Woman:
	.string "Sometimes, when I toss a {POKEBLOCK} at \n"
	.string "POKÉMON, it gets ignored.\p"
	.string "Do POKÉMON have likes and dislikes\n"
	.string "about what they eat?$"

SafariZone_Northwest_Text_Man:
	.string "Gasp… Gasp…\n"
	.string "I…made it out here…but…\p"
	.string "I'm exhausted… I don't have the\n"
	.string "energy to catch POKÉMON…$"

SafariZone_North_Text_Fisherman:
	.string "I'm on a mission to find WATER POKÉMON\n"
	.string "you don't see in HOENN.\p"
	.string "Do you have any idea where the lake is?$"

SafariZone_North_Text_Man:
	.string "I'm going to catch a lot of rare POKÉMON\n"
	.string "here and trade them with my friends!$"

SafariZone_South_Text_Youngster:
	.string "I put a {POKEBLOCK} on the {POKEBLOCK} FEEDER.\n"
	.string "But it seems to have disappeared.\p"
	.string "I guess POKÉMON must have eaten it\n"
	.string "without me noticing.$"

Route121_SafariZoneEntrance_Text_TrainerTip:
	.string "SAFARI ZONE TRAINER TIP!\p"
	.string "Throw {POKEBLOCK}S at wild POKÉMON to make\n"
	.string "them less likely to flee.$"

SafariZone_Southwest_Text_RestHouseSign:
	.string	"POSADA\n"
	.string	"“Alivia tus cansados pies.”$"

SafariZone_RestHouse_Text_Youngster:
	.string "I don't have any {POKEBLOCK}S, but I caught\n"
	.string "a good number of POKÉMON.\p"
	.string "You can improve your chances of making\n"
	.string "a catch by getting closer to them\l"
	.string "before throwing a SAFARI BALL.$"

SafariZone_RestHouse_Text_PsychicM:
	.string "If you use {POKEBLOCK}S, wild POKÉMON won't\n"
	.string "be so quick to run away.\p"
	.string "It's not much use to give {POKEBLOCK}S to\n"
	.string "POKÉMON that don't flee easily.$"

SafariZone_RestHouse_Text_FatMan:
	.string "If you put a {POKEBLOCK} on the FEEDER,\n"
	.string "POKÉMON are attracted to it.\p"
	.string "I think POKÉMON with the same sort of\n"
	.string "nature are drawn by a certain {POKEBLOCK}.$"

SafariZone_South_Text_AreaOffLimits1:
	.string	"Aún se está construyendo esta zona.\n"
	.string	"¡No te acerques, por favor!$"

SafariZone_Southeast_Text_ExpansionIsFinished:
	.string	"Ya ha concluido el proyecto\n"
	.string	"de ampliación de la ZONA SAFARI.\p"
	.string	"Espero que disfrutes de las nuevas\n"
	.string	"instalaciones.$"

SafariZone_South_Text_AreaOffLimits2:
	.string	"Aún se está construyendo esta zona.\n"
	.string	"¡No te acerques, por favor!$"

SafariZone_Southeast_Text_LittleGirl:
	.string "Wow! Whee! I haven't seen any of\n"
	.string "these POKÉMON before!$"

SafariZone_Southeast_Text_FatMan:
	.string "The POKÉMON in this area are all\n"
	.string "new to me.\p"
	.string "And I'm allowed to catch these rare\n"
	.string "POKÉMON! Too cool!$"

SafariZone_Southeast_Text_RichBoy:
	.string "The POKÉMON around here seem to be\n"
	.string "from somewhere other than HOENN.$"

SafariZone_Northeast_Text_Boy:
	.string	"Ya solo me quedan dos SAFARI BALLS.\p"
	.string	"Lo estoy pasando mal teniendo que\n"
	.string	"decidir cuáles atrapo y cuáles no.$"

SafariZone_Northeast_Text_Woman:
	.string	"He oído que hay PIKACHU por aquí.\n"
	.string	"¿Por dónde andarán?$"

SafariZone_Northeast_Text_Girl:
	.string	"¡Bah!\n"
	.string	"¡Oye, no pillo nada!\p"
	.string	"¡Con lo que cuesta la entrada\n"
	.string	"y yo no voy a atrapar ni uno!$"
