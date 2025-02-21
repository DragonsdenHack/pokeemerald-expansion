VerdanturfTown_WandasHouse_MapScripts::
	.byte 0

VerdanturfTown_WandasHouse_EventScript_Wally::
	lock
	faceplayer
	goto_if_set FLAG_WALLY_SPEECH, VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeech, MSGBOX_DEFAULT
	setflag FLAG_WALLY_SPEECH
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallyShortSpeech::
	msgbox VerdanturfTown_WandasHouse_Text_StrongerSpeechShort, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncle::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff
	msgbox VerdanturfTown_WandasHouse_Text_WallysNextDoor, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncleSlippedOff::
	msgbox VerdanturfTown_WandasHouse_Text_WallySlippedOff, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysUncleEverGrande::
	msgbox VerdanturfTown_WandasHouse_Text_WallyGoneThatFar, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WandasBoyfriend::
	msgbox VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay, MSGBOX_NPC
	end

VerdanturfTown_WandasHouse_EventScript_Wanda::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WandaDontWorry
	goto_if_set FLAG_DEFEATED_WALLY_MAUVILLE, VerdanturfTown_WandasHouse_EventScript_MeetWanda
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_MeetWanda::
	msgbox VerdanturfTown_WandasHouse_Text_MeetWanda, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WandaDontWorry::
	msgbox VerdanturfTown_WandasHouse_Text_DontWorryAboutWally, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAunt::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_WALLY_VICTORY_ROAD, VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened
	goto_if_set FLAG_RUSTURF_TUNNEL_OPENED, VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAuntTunnelOpen::
	msgbox VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAuntAnythingHappened::
	msgbox VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_EventScript_WallysAuntEverGrande::
	msgbox VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande, MSGBOX_DEFAULT
	release
	end

VerdanturfTown_WandasHouse_Text_StrongerSpeech:
	.string "WALLY: I lost to you, {PLAYER}, but I'm\n"
	.string "not feeling down anymore.\p"
	.string "Because I have a new purpose in life.\n"
	.string "Together with my RALTS, I'm going\l"
	.string "to challenge POKÉMON GYMS and become\l"
	.string "a great TRAINER.\p"
	.string "Please watch me, {PLAYER}.\n"
	.string "I'm going to be stronger than you.\p"
	.string "When I do, I'm going to challenge you\n"
	.string "to another battle.$"

VerdanturfTown_WandasHouse_Text_StrongerSpeechShort:
	.string	"BLASCO: Obsérvame bien, {PLAYER}.\n"
	.string	"Voy a ser más fuerte que tú.\p"
	.string	"Y, cuando lo sea, te voy a desafiar\n"
	.string	"a otro combate…$"

VerdanturfTown_WandasHouse_Text_WallysNextDoor:
	.string "UNCLE: Oh! {PLAYER}{KUN}!\n"
	.string "WALLY's next door.\p"
	.string "But, boy, there's something I have to\n"
	.string "tell you.\p"
	.string "This natural environment is doing\n"
	.string "wonders for WALLY's health.\p"
	.string "Maybe it's not just the environment.\n"
	.string "It could be POKÉMON that are giving\l"
	.string "the boy hope.$"

VerdanturfTown_WandasHouse_Text_WallySlippedOff:
	.string	"BLASCO se ha ido…\n"
	.string	"Se ha marchado sin decir ni mu…$"

VerdanturfTown_WandasHouse_Text_WallyGoneThatFar:
	.string	"TÍO: ¿Es cierto que BLASCO\n"
	.string	"se ha ido tan lejos él solito?\p"
	.string	"Bueno, no debería extrañarme:\n"
	.string	"¡es el hijo de mi hermano!$"

VerdanturfTown_WandasHouse_Text_MeetWanda:
	.string	"CLARA: ¿Tú eras…?\n"
	.string	"Ah, sí, ya sé.\p"
	.string	"Eres {PLAYER}. BLASCO siempre está\n"
	.string	"hablando de ti.\p"
	.string	"Soy la prima de BLASCO.\n"
	.string	"¡Es un placer!\p"
	.string	"Creo que a BLASCO se le ve mucho\n"
	.string	"más sano y animado desde que está aquí.$"

VerdanturfTown_WandasHouse_Text_DontWorryAboutWally:
	.string "WANDA: Don't worry about WALLY.\n"
	.string "He'll be just fine.\p"
	.string "I know my little cousin, and he has\n"
	.string "POKÉMON with him, too.$"

VerdanturfTown_WandasHouse_Text_CanSeeGirlfriendEveryDay:
	.string	"Ahora puedo ver a mi novia\n"
	.string	"cada día. ¿Que si estoy contento?\l"
	.string	"¿Acaso no se ve? Je, je, je…$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendDriven:
	.string	"El novio de mi hija es de lo más\n"
	.string	"lanzado y apasionado.\p"
	.string	"Está cavando el túnel\n"
	.string	"sin parar solo para poder verla.\p"
	.string	"Mi hija está un poco preocupada,\n"
	.string	"por eso va al túnel cada dos por tres.$"

VerdanturfTown_WandasHouse_Text_DaughtersBoyfriendWasDigging:
	.string	"Es asombroso. ¡El novio de mi hija\n"
	.string	"ha estado cavando el túnel a mano!\p"
	.string	"¡No me lo puedo creer!$"

VerdanturfTown_WandasHouse_Text_IfAnythingHappenedToWally:
	.string	"Si algo le pasara a BLASCO, nunca\n"
	.string	"podría volver a mirar a sus padres\l"
	.string	"a la cara, cuando volviera a PETALIA…$"

VerdanturfTown_WandasHouse_Text_WallyWasInEverGrande:
	.string	"¿BLASCO ha estado en COLOSALIA?\p"
	.string	"¡Sus padres, que viven en PETALIA,\n"
	.string	"estarían atónitos si lo supieran!$"

VerdanturfTown_Blasco::
lock
faceplayer
msgbox VerdanturfTown_Blasco_Texto_1 MSGBOX_NPC
msgbox VerdanturfTown_Blasco_Texto_2 MSGBOX_NPC
release
end

VerdanturfTown_Blasco_Texto_2:
	.string "Siento que necesito vivir grandes\n"
	.string "aventuras para apreciarla de verdad.\l"
	.string "Ahora mismo, esta ausencia de estrés es\l"
	.string "la verdadera enfermedad para mí.$"

VerdanturfTown_Blasco_Texto_1:
	.string "Esta serenidad{PAUSE 15}…{PAUSE 15}\n"
	.string "Esta paz{PAUSE 15}…{PAUSE 15}$"

VerdanturfTown_Tio::
lock
faceplayer
msgbox VerdanturfTown_Tio_Texto_1 MSGBOX_NPC
release
end

VerdanturfTown_Tio_Texto_1:
	.string	"TÍO: No veo a BLASCO yendo\n"
	.string	"tan lejos él solito.\p"
	.string	"Bueno, no debería extrañarme:\n"
	.string	"¡es el hijo de mi hermano!$"



