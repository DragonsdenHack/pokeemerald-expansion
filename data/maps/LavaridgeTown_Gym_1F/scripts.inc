.set LOCALID_COLE, 2
.set LOCALID_GERALD, 3
.set LOCALID_AXLE, 4
.set LOCALID_DANIELLE, 5

LavaridgeTown_Gym_1F_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, LavaridgeTown_Gym_1F_OnTransition
	.byte 0

LavaridgeTown_Gym_1F_OnTransition:
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	call LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers
	end

@ Unclear where/if these temp vars are getting checked
LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars::
	setvar VAR_TEMP_B, 0
	setvar VAR_TEMP_C, 0
	setvar VAR_TEMP_D, 0
	setvar VAR_TEMP_E, 0
	setvar VAR_TEMP_F, 0
	goto_if_defeated TRAINER_COLE LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar
	setvar VAR_TEMP_B, 1
LavaridgeTown_Gym_1F_EventScript_SetGeraldTempVar::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar
	setvar VAR_TEMP_C, 1
LavaridgeTown_Gym_1F_EventScript_SetAxleTempVar::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar
	setvar VAR_TEMP_D, 1
LavaridgeTown_Gym_1F_EventScript_SetDanielleTempVar::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars
	setvar VAR_TEMP_E, 1
LavaridgeTown_Gym_1F_EventScript_EndSetTrainerTempVars::
	return

LavaridgeTown_Gym_1F_EventScript_CheckBuryTrainers::
	goto_if_defeated TRAINER_COLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald
	setobjectmovementtype LOCALID_COLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryGerald::
	goto_if_defeated TRAINER_GERALD, LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle
	setobjectmovementtype LOCALID_GERALD, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryAxle::
	goto_if_defeated TRAINER_AXLE, LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle
	setobjectmovementtype LOCALID_AXLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_CheckBuryDanielle::
	goto_if_defeated TRAINER_DANIELLE, LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers
	setobjectmovementtype LOCALID_DANIELLE, MOVEMENT_TYPE_BURIED
LavaridgeTown_Gym_1F_EventScript_EndCheckBuryTrainers::
	return

LavaridgeTown_Gym_1F_EventScript_Flannery::
	trainerbattle_single TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryIntro, LavaridgeTown_Gym_1F_Text_FlanneryDefeat, LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, LavaridgeTown_Gym_1F_EventScript_FlanneryRematch
	goto_if_unset FLAG_RECEIVED_TM50, LavaridgeTown_Gym_1F_EventScript_GiveOverheat2
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostBattle, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_FlanneryDefeated::
	message LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	setflag FLAG_WHITEOUT_TO_LAVARIDGE
	setflag FLAG_UNUSED_9
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat2::
	giveitem ITEM_TM50
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	release
	end

LavaridgeTown_Gym_1F_EventScript_GiveOverheat::
	giveitem ITEM_TM50
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_BagIsFull
	msgbox LavaridgeTown_Gym_1F_Text_ExplainOverheat, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM50
	return

LavaridgeTown_Gym_1F_EventScript_FlanneryRematch::
	trainerbattle_rematch_double TRAINER_FLANNERY_1, LavaridgeTown_Gym_1F_Text_FlanneryPreRematch, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat, LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons
	msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Cole::
	trainerbattle TRAINER_TRAINER_60, TRAINER_TRAINER_60, LOCALID_COLE, LavaridgeTown_Gym_1F_Text_ColeIntro, LavaridgeTown_Gym_1F_Text_ColeDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_ColePostBattle MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_EventScript_CheckTrainerScript::
	call LavaridgeTown_Gym_1F_EventScript_SetTrainerTempVars
	release
	special ShouldTryGetTrainerScript
	goto_if_eq VAR_RESULT, 1, EventScript_GotoTrainerScript
	end

LavaridgeTown_Gym_1F_EventScript_Axle::
	trainerbattle TRAINER_TRAINER_59, TRAINER_TRAINER_59, LOCALID_AXLE, LavaridgeTown_Gym_1F_Text_AxleIntro, LavaridgeTown_Gym_1F_Text_AxleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_AxlePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Keegan::
	trainerbattle TRAINER_TRAINER_56, TRAINER_TRAINER_56, LOCALID_KEEGAN, LavaridgeTown_Gym_B1F_Text_KeeganIntro, LavaridgeTown_Gym_B1F_Text_KeeganDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_KeeganPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Danielle::
	trainerbattle TRAINER_TRAINER_57, TRAINER_TRAINER_57, LOCALID_DANIELLE, LavaridgeTown_Gym_1F_Text_DanielleIntro, LavaridgeTown_Gym_1F_Text_DanielleDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_DaniellePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_Gerald::
	trainerbattle TRAINER_TRAINER_58, TRAINER_TRAINER_58, LOCALID_GERALD, LavaridgeTown_Gym_1F_Text_GeraldIntro, LavaridgeTown_Gym_1F_Text_GeraldDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_1F_Text_GeraldPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jace::
	trainerbattle TRAINER_BATTLE_CONTINUE_SCRIPT, TRAINER_JACE, LOCALID_JACE, LavaridgeTown_Gym_B1F_Text_JaceIntro, LavaridgeTown_Gym_B1F_Text_JaceDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_JacePostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Jeff::
	trainerbattle TRAINER_TRAINER_54, TRAINER_TRAINER_54, LOCALID_JEFF, LavaridgeTown_Gym_B1F_Text_JeffIntro, LavaridgeTown_Gym_B1F_Text_JeffDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_JeffPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_B1F_EventScript_Eli::
	trainerbattle TRAINER_TRAINER_55, TRAINER_TRAINER_55, LOCALID_ELI, LavaridgeTown_Gym_B1F_Text_EliIntro, LavaridgeTown_Gym_B1F_Text_EliDefeat, LavaridgeTown_Gym_EventScript_CheckTrainerScript
	msgbox LavaridgeTown_Gym_B1F_Text_EliPostBattle, MSGBOX_AUTOCLOSE
	end

LavaridgeTown_Gym_1F_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_LAVARIDGE_GYM, LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory
	msgbox LavaridgeTown_Gym_1F_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_GymGuidePostVictory::
	msgbox LavaridgeTown_Gym_1F_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

LavaridgeTown_Gym_1F_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE04_GET, LavaridgeTown_Gym_1F_EventScript_GymStatueCertified
	goto LavaridgeTown_Gym_1F_EventScript_GymStatue
	end

LavaridgeTown_Gym_1F_EventScript_GymStatueCertified::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_EventScript_GymStatue::
	msgbox LavaridgeTown_Gym_1F_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

LavaridgeTown_Gym_1F_Text_GymGuideAdvice:
	.string	"Eh, ¿cómo te llamas, {PLAYER}?\n"
	.string	"¿Camino del CAMPEONATO?\p"
	.string	"CANDELA, la LÍDER del GIMNASIO\n"
	.string	"de LAVACALDA, usa POKéMON\l"
	.string	"de tipo FUEGO.\p"
	.string	"Su pasión por los POKéMON es más\n"
	.string	"ardiente que la lava de un volcán.\p"
	.string	"¡No te acerques mucho a ella\n"
	.string	"si no quieres salir ardiendo!\p"
	.string	"¡Bájale los humos! ¡Ve a por ella!$"

LavaridgeTown_Gym_1F_Text_GymGuidePostVictory:
	.string	"¡Guau! ¡Ha sido un combate al rojo vivo!$"

LavaridgeTown_Gym_1F_Text_ColeIntro:
	.string "¡Jo, jo, jo, jo! ¡Esto está que arde!$"

LavaridgeTown_Gym_1F_Text_ColeDefeat:
	.string "He acabado chamuscado{PAUSE 5}…{PAUSE 5}$"

LavaridgeTown_Gym_1F_Text_ColePostBattle:
	.string "Si te entierras en arena caliente,\n"
	.string "mejoras las circulación de la sangre.\l"
	.string "También es muy bueno para curar el\l"
	.string "dolor de las articulaciones.$"

LavaridgeTown_Gym_1F_Text_AxleIntro:
	.string "Estoy intentando quitarme el estrés.\n"
	.string "¡Deja de estresarme con tu presencia!$"

LavaridgeTown_Gym_1F_Text_AxleDefeat:
	.string "¡Espero que CANDELA te queme bien por\n"
	.string "los dos lados!$"

LavaridgeTown_Gym_1F_Text_AxlePostBattle:
	.string "Haaah… Whew…\p"
	.string "Pasar mucho tiempo quemado bajo\n"
	.string "la arena, te saca de quicio{PAUSE 5}…{PAUSE 5}$"

LavaridgeTown_Gym_B1F_Text_KeeganIntro:
	.string "Todo esto ha debido de cansarte.\n"
	.string "¿Quieres descansar un poco en la arena\l"
	.string "caliente?. Aunque debes saber que\l"
	.string "tener voluntad y resistencia es vital\l"
	.string "para todo ENTRENADOR.$"

LavaridgeTown_Gym_B1F_Text_KeeganDefeat:
	.string "Si juegas con fuego, te quemas{PAUSE 5}…{PAUSE 5}$"

LavaridgeTown_Gym_B1F_Text_KeeganPostBattle:
	.string "Tu talento es real…\n"
	.string "Pero nuestra LÍDER es fuerte.\p"
	.string "A la mínima que te confíes, todos\n"
	.string "tus POKÉMON acabarán quemados.$"

LavaridgeTown_Gym_1F_Text_GeraldIntro:
	.string "¿Tus pokémon superan temperaturas\n"
	.string "superiores a los 200 grados?$"

LavaridgeTown_Gym_1F_Text_GeraldDefeat:
	.string "No me he caldeado lo suficiente{PAUSE 5}…{PAUSE 5}$"

LavaridgeTown_Gym_1F_Text_GeraldPostBattle:
	.string "La temperatura del magma es de 200 grados.\n"
	.string "Me has vencido, así que seguro que tus\l"
	.string "POKEMON pueden sobrevivir en el magma.$"

LavaridgeTown_Gym_1F_Text_DanielleIntro:
	.string "Mmm… Bueno vale, lucharé contigo.$"

LavaridgeTown_Gym_1F_Text_DanielleDefeat:
	.string "No esperaba que fueras tan fuerte{PAUSE 5}…{PAUSE 5}$"

LavaridgeTown_Gym_1F_Text_DaniellePostBattle:
	.string "Yo de mayor quiero ser tan fuerte y\n"
	.string "magnífica como CANDELA.$"

LavaridgeTown_Gym_B1F_Text_JaceIntro:
	.string "Come on, get with it!\n"
	.string "Let's go before my feelings cool!$"

LavaridgeTown_Gym_B1F_Text_JaceDefeat:
	.string "It's so hot, and yet my heart is\n"
	.string "clutched by ice…$"

LavaridgeTown_Gym_B1F_Text_JacePostBattle:
	.string "The way the battling spirit burns\n"
	.string "within you, you may stand a chance\l"
	.string "against our LEADER.$"

LavaridgeTown_Gym_B1F_Text_JeffIntro:
	.string "¡Quién juega con fuego, acaba\n"
	.string "quemándose!$"

LavaridgeTown_Gym_B1F_Text_JeffDefeat:
	.string "No sé qué, pero me ha fallado algo.$"

LavaridgeTown_Gym_B1F_Text_JeffPostBattle:
	.string "Bueno, ¿y qué? ¡Da igual lo que dijera!\n"
	.string "¡Si quiero, puedo caminar sobre brasas!\l"
	.string "¡Pero ni se te ocurra intentarlo a ti!…$"

LavaridgeTown_Gym_B1F_Text_EliIntro:
	.string "Me gustan todas las montañas, pero mi\n"
	.string "gran amor son los volcanes.$"

LavaridgeTown_Gym_B1F_Text_EliDefeat:
	.string "Vaya, parece que me he despeñado.$"

LavaridgeTown_Gym_B1F_Text_EliPostBattle:
	.string "Me voy a quedar aquí, porque soy un fan\n"
	.string "perdido de CANDELA. ¡Je, je, je, je!$"

LavaridgeTown_Gym_1F_Text_FlanneryIntro:
	.string	"Hola… No, espera…\p"
	.string	"¡Pareces alguien muy fuerte y\n"
	.string	"experimentado!\p"
	.string	"Me han confiado la tarea…\n"
	.string	"No, espera…\p"
	.string	"¡Yo soy CANDELA, la LÍDER\n"
	.string	"de este GIMNASIO!\p"
	.string	"Eh, esto…\n"
	.string	"¡Acabo de ser nombrada LÍDER,\l"
	.string	"pero llevo años entrenando!\p"
	.string	"Gracias a las habilidades heredadas de\n"
	.string	"mi abuelo, yo, esto… ¡demostraré que\l"
	.string	"nuestra ardiente técnica no tiene par!$"

LavaridgeTown_Gym_1F_Text_FlanneryDefeat:
	.string	"Ooooh…\n"
	.string	"Creo que no estaba preparada…\p"
	.string	"Aunque soy LÍDER de GIMNASIO\n"
	.string	"desde hace poco tiempo…\p"
	.string	"Pensé que usando mi mejor equipo\n"
	.string	"podía ganar…\p"
	.string	"He ido con todo mi poder pero al\n"
	.string	"final he acabado escaldada…\p"
	.string	"Ni mi abuelo me ganó así.\n"
	.string	"Toma, mereces esto.$"

LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge:
	.string	"{PLAYER} recibió la MEDALLA CALOR\n"
	.string	"de CANDELA.$"

LavaridgeTown_Gym_1F_Text_ExplainHeatBadgeTakeThis:
	.string "If you have a HEAT BADGE, all POKéMON\n"
	.string "up to Level 50, even those you get in\l"
	.string "trades from other people, will obey\l"
	.string "you completely.\p"
	.string "And, it lets POKéMON use the HM move\n"
	.string "STRENGTH outside of battle.\p"
	.string "This is a token of my appreciation.\n"
	.string "Don't be shy about taking it!$"

LavaridgeTown_Gym_1F_Text_ExplainOverheat:
	.string "That TM50 contains OVERHEAT.\p"
	.string "That move inflicts serious damage on\n"
	.string "the opponent.\p"
	.string "But it also sharply cuts the SP. ATK\n"
	.string "of the POKéMON using it. It might not\l"
	.string "be suitable for longer battles.$"

LavaridgeTown_Gym_1F_Text_RegisteredFlannery:
	.string "Registered GYM LEADER FLANNERY\n"
	.string "in the POKéNAV.$"

LavaridgeTown_Gym_1F_Text_FlanneryPostBattle:
	.string "Your power reminds me of someone…\p"
	.string "Oh! I know! You battle like NORMAN,\n"
	.string "the GYM LEADER of PETALBURG.$"

LavaridgeTown_Gym_1F_Text_GymStatue:
	.string	"GIMNASIO POKéMON de PUEBLO LAVACALDA$"

LavaridgeTown_Gym_1F_Text_GymStatueCertified:
	.string	"GIMNASIO POKéMON de PUEBLO LAVACALDA\p"
	.string	"NUEVOS ENTRENADORES CERTIFICADOS:\n"
	.string	"{PLAYER}$"

LavaridgeTown_Gym_1F_Text_FlanneryPreRematch:
	.string "FLANNERY: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love POKéMON.\n"
	.string "I love to battle.\l"
	.string "And… I love this GYM!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat:
	.string	"¡Aaaaah!\n"
	.string	"¡A punto estoy de estallar!$"

LavaridgeTown_Gym_1F_Text_FlanneryPostRematch:
	.string	"CANDELA: He perdido el combate,\n"
	.string	"pero me siento muy satisfecha.\p"
	.string	"No hay mucha gente que ponga\n"
	.string	"tanto ardor en el combate como tú.\p"
	.string	"¡Tenemos que luchar pronto otra vez!$"

LavaridgeTown_Gym_1F_Text_FlanneryRematchNeedTwoMons:
	.string "FLANNERY: Losing a battle isn't going\n"
	.string "to deflate me.\p"
	.string "I love POKéMON.\n"
	.string "I love to battle.\l"
	.string "And… I love this GYM!\p"
	.string "Let's exchange superhot moves\n"
	.string "in another battle!\p"
	.string "Oh, wait. Do you only have one POKéMON\n"
	.string "that can battle?\p"
	.string "I hate to say this, but when you come\n"
	.string "see me, bring at least two POKéMON.$"


LavaridgeTown_Gym_Combate_Candela::
lock
faceplayer
goto_if_set FLAG_UNUSED_9, LavaridgeTown_Gym_Combate_Candela_Despues
msgbox LavaridgeTown_Gym_1F_Text_FlanneryIntro MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_CANDELA, LavaridgeTown_Gym_1F_Text_FlanneryRematchDefeat
msgbox LavaridgeTown_Gym_1F_Text_FlanneryDefeat MSGBOX_AUTOCLOSE
setflag FLAG_UNUSED_9
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox LavaridgeTown_Gym_1F_Text_ReceivedHeatBadge MSGBOX_DEFAULT
waitfanfare
msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch MSGBOX_AUTOCLOSE
release
end

LavaridgeTown_Gym_Combate_Candela_Despues::
msgbox LavaridgeTown_Gym_1F_Text_FlanneryPostRematch MSGBOX_AUTOCLOSE
release
end

