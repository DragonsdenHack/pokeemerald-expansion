RustboroCity_Gym_MapScripts::
	.byte 0

RustboroCity_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxanneIntro, RustboroCity_Gym_Text_RoxanneDefeat, RustboroCity_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, RustboroCity_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM39, RustboroCity_Gym_EventScript_GiveRockTomb
	msgbox RustboroCity_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneDefeated::
	message RustboroCity_Gym_Text_ReceivedStoneBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox RustboroCity_Gym_Text_StoneBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_RUSTBORO_GYM
	setflag FLAG_BADGE01_GET
	setvar VAR_RUSTBORO_CITY_STATE, 1
	addvar VAR_PETALBURG_GYM_STATE, 1
	setvar VAR_0x8008, 1
	call Common_EventScript_SetGymTrainers
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	goto RustboroCity_Gym_EventScript_GiveRockTomb
	end

RustboroCity_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM39
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM39
	msgbox RustboroCity_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, RustboroCity_Gym_Text_RoxannePreRematch, RustboroCity_Gym_Text_RoxanneRematchDefeat, RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox RustboroCity_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_TRAINER_51, RustboroCity_Gym_Text_JoshIntro, RustboroCity_Gym_Text_JoshDefeat
	msgbox RustboroCity_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TRAINER_52, RustboroCity_Gym_Text_TommyIntro, RustboroCity_Gym_Text_TommyDefeat
	msgbox RustboroCity_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_Marc::
	trainerbattle_single TRAINER_TRAINER_53, RustboroCity_Gym_Text_MarcIntro, RustboroCity_Gym_Text_MarcDefeat
	msgbox RustboroCity_Gym_Text_MarcPostBattle, MSGBOX_AUTOCLOSE
	end

RustboroCity_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, RustboroCity_Gym_EventScript_GymGuidePostVictory
	msgbox RustboroCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_GymGuidePostVictory::
	msgbox RustboroCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

RustboroCity_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE01_GET, RustboroCity_Gym_EventScript_GymStatueCertified
	goto RustboroCity_Gym_EventScript_GymStatue
	end

RustboroCity_Gym_EventScript_GymStatueCertified::
	msgbox RustboroCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_GymStatue::
	msgbox RustboroCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

RustboroCity_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall RustboroCity_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox RustboroCity_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

RustboroCity_Gym_Text_GymGuideAdvice:
	.string	"Eh, ¿qué tal vamos?\p"
	.string	"¡Escucha algo que te va a interesar!\n"
	.string	"¿Vas camino del CAMPEONATO?\p"
	.string	"Yo no soy ENTRENADOR, pero te puedo\n"
	.string	"dar un par de buenos consejos.\p"
	.string	"¡Así me gusta! ¡Te voy a decir cómo\n"
	.string	"ganar el CAMPEONATO POKéMON!\p"
	.string	"Un ENTRENADOR tiene que reunir\n"
	.string	"MEDALLAS de GIMNASIO, ¿no?\p"
	.string	"¡Pero ganar a los LÍDERES no es\n"
	.string	"pan comido!\p"
	.string	"¡Y ahí entro yo!\n"
	.string	"Puedo asesorarte como nadie.\p"
	.string	"PETRA, la LÍDER del GIMNASIO,\n"
	.string	"usa POKéMON de tipo ROCA.\p"
	.string	"El tipo ROCA es muy resistente, pero no\n"
	.string	"tiene ninguna oportunidad si se usan\l"
	.string	"movimientos de tipo AGUA o PLANTA.\p"
	.string	"Si derrotas a la LÍDER, ven a verme.\p"
	.string	"Venga, ¡valor y al toro!$"

RustboroCity_Gym_Text_GymGuidePostVictory:
	.string	"¡Guau, vaya pedazo de victoria!\n"
	.string	"¡Seguro que ha sido por todo lo que\l"
	.string	"te he animado desde aquí!\p"
	.string	"¡Genial!\n"
	.string	"Consulta tu FICHA de ENTRENADOR.\p"
	.string	"La MEDALLA PIEDRA que has conseguido\n"
	.string	"debería figurar ahí.\p"
	.string	"En otras palabras…\p"
	.string	"¡Has dado el primer paso que te llevará\n"
	.string	"a la cima!\p"
	.string	"¡Tiene que ser superemocionante!$"

RustboroCity_Gym_Text_JoshIntro:
	.string "A los ENTRENADORES no debes tomarnos a\n"
	.string "la ligera… ¡Ahora verás por qué!$"

RustboroCity_Gym_Text_JoshDefeat:
	.string "Me has dejado a cuadros…$"

RustboroCity_Gym_Text_JoshPostBattle:
	.string "¡Todavía no has visto ni una pizca del\n"
	.string "terrible poder del tipo ROCA!$"

RustboroCity_Gym_Text_TommyIntro:
	.string "¡Si no puedes vencerme a mí, ya puedes\n"
	.string "olvidarte de vencer a PETRA!$"

RustboroCity_Gym_Text_TommyDefeat:
	.string "Vaya se diría que tienes potencial…$"

RustboroCity_Gym_Text_TommyPostBattle:
	.string "Pero PETRA es mucho más fuerte que yo\n"
	.string "de aquí a Lima. ¡Mejor no te confíes!$"

RustboroCity_Gym_Text_MarcIntro:
	.string "Ya sé que estamos en medio de una\n"
	.string "ciudad, pero no te servirá de nada. Mis\l"
	.string "POKÉMON ROCA no se andan con\l"
	.string "chiquitas. ¡Échate a temblar!$"

RustboroCity_Gym_Text_MarcDefeat:
	.string "¡Por todos los peñascos! ¡Tú sí que no\n"
	.string "te andas con chiquitas!$"

RustboroCity_Gym_Text_MarcPostBattle:
	.string "Nuestra LÍDER te dará tu merecido. A\n"
	.string "pesar de su juventud, escogió el tipo\l"
	.string "ROCA y eso demuestra carácter.$"

RustboroCity_Gym_Text_RoxanneIntro:
	.string "Hello, I am ROXANNE, the RUSTBORO\n"
	.string "POKéMON GYM LEADER.\p"
	.string "I became a GYM LEADER so that I might\n"
	.string "apply what I learned at the POKéMON\l"
	.string "TRAINER'S SCHOOL in battle.\p"
	.string "Would you kindly demonstrate how you\n"
	.string "battle, and with which POKéMON?$"

RustboroCity_Gym_Text_RoxanneDefeat:
	.string "So…\n"
	.string "I lost…\p"
	.string "It seems that I still have much more\n"
	.string "to learn…\p"
	.string "I understand.\p"
	.string "The POKéMON LEAGUE's rules state\n"
	.string "that TRAINERS are to be given this\l"
	.string "if they defeat a GYM LEADER.\p"
	.string "Please accept the official POKéMON\n"
	.string "LEAGUE STONE BADGE.$"

RustboroCity_Gym_Text_ReceivedStoneBadge:
	.string	"{PLAYER} recibió la MEDALLA PIEDRA\n"
	.string	"de PETRA.$"

RustboroCity_Gym_Text_StoneBadgeInfoTakeThis:
	.string "The STONE BADGE heightens the ATTACK\n"
	.string "power of your POKéMON.\p"
	.string "It also enables them to use the HM move\n"
	.string "CUT outside of battle.\p"
	.string "Please take this with you, too.$"

RustboroCity_Gym_Text_ExplainRockTomb:
	.string "That TECHNICAL MACHINE, TM39,\n"
	.string "contains ROCK TOMB.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers SPEED.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.\p"
	.string "Remember, a TM can be used only once,\n"
	.string "so think before you use it.$"

RustboroCity_Gym_Text_RoxannePostBattle:
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"

RustboroCity_Gym_Text_GymStatue:
	.string	"GIMNASIO POKéMON de CIUDAD FÉRRICA$"

RustboroCity_Gym_Text_GymStatueCertified:
	.string	"GIMNASIO POKéMON de CIUDAD FÉRRICA\p"
	.string	"NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string	"{PLAYER}$"

RustboroCity_Gym_Text_RoxanneRegisterCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
	.string "I heard from BRAWLY that you're\n"
	.string "moving up through the ranks of\l"
	.string "TRAINERS at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my GYM\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

RustboroCity_Gym_Text_RegisteredRoxanne:
	.string "Registered GYM LEADER ROXANNE\n"
	.string "in the POKéNAV.$"

RustboroCity_Gym_Text_RoxannePreRematch:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

RustboroCity_Gym_Text_RoxanneRematchDefeat:
	.string "Grr…\n"
	.string "Again, I have lost…$"

RustboroCity_Gym_Text_RoxannePostRematch:
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

RustboroCity_Gym_Text_RoxanneRematchNeedTwoMons:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"
