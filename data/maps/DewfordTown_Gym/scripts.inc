DewfordTown_Gym_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_Gym_OnTransition
	.byte 0

DewfordTown_Gym_OnTransition:
	call DewfordTown_Gym_EventScript_SetFlashLevel
	end

DewfordTown_Gym_EventScript_SetFlashLevel::
	goto_if_defeated TRAINER_BRAWLY_1, DewfordTown_Gym_EventScript_SetLightsOn
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 0, DewfordTown_Gym_EventScript_SetFlashLevel7
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_SetFlashLevel6
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_SetFlashLevel5
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_SetFlashLevel4
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_SetFlashLevel3
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_SetFlashLevel2
	goto DewfordTown_Gym_EventScript_SetFlashLevel1

DewfordTown_Gym_EventScript_SetLightsOn::
	setflashlevel 0
	return

@ Brightest
DewfordTown_Gym_EventScript_SetFlashLevel1::
	setflashlevel 1
	return

DewfordTown_Gym_EventScript_SetFlashLevel2::
	setflashlevel 2
	return

DewfordTown_Gym_EventScript_SetFlashLevel3::
	setflashlevel 3
	return

DewfordTown_Gym_EventScript_SetFlashLevel4::
	setflashlevel 4
	return

DewfordTown_Gym_EventScript_SetFlashLevel5::
	setflashlevel 5
	return

DewfordTown_Gym_EventScript_SetFlashLevel6::
	setflashlevel 6
	return

@ Darkest
DewfordTown_Gym_EventScript_SetFlashLevel7::
	setflashlevel 7
	return

DewfordTown_Gym_EventScript_BrightenRoom::
	call DewfordTown_Gym_EventScript_CountTrainersDefeated
	nop1
	goto_if_eq VAR_0x8000, VAR_0x8001, DewfordTown_Gym_EventScript_NoLightChange
	copyvar VAR_0x8001, VAR_0x8000
	goto_if_eq VAR_0x8000, 1, DewfordTown_Gym_EventScript_AnimateFlash1Trainer
	goto_if_eq VAR_0x8000, 2, DewfordTown_Gym_EventScript_AnimateFlash2Trainers
	goto_if_eq VAR_0x8000, 3, DewfordTown_Gym_EventScript_AnimateFlash3Trainers
	goto_if_eq VAR_0x8000, 4, DewfordTown_Gym_EventScript_AnimateFlash4Trainers
	goto_if_eq VAR_0x8000, 5, DewfordTown_Gym_EventScript_AnimateFlash5Trainers
	goto_if_eq VAR_0x8000, 6, DewfordTown_Gym_EventScript_AnimateFlash6Trainers

DewfordTown_Gym_EventScript_NoLightChange::
	return

@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
DewfordTown_Gym_EventScript_AnimateFlash1Trainer::
	playse SE_SWITCH
	animateflash 6
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash2Trainers::
	playse SE_SWITCH
	animateflash 5
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash3Trainers::
	playse SE_SWITCH
	animateflash 4
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash4Trainers::
	playse SE_SWITCH
	animateflash 3
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash5Trainers::
	playse SE_SWITCH
	animateflash 2
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlash6Trainers::
	playse SE_SWITCH
	animateflash 1
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_AnimateFlashFullBrightness::
	playse SE_SWITCH
	animateflash 0
	call DewfordTown_Gym_EventScript_SetFlashLevel
	return

DewfordTown_Gym_EventScript_CountTrainersDefeated::
	setvar VAR_0x8000, 0
	goto_if_not_defeated TRAINER_TAKAO, DewfordTown_Gym_EventScript_CheckJocelyn
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckJocelyn::
	goto_if_not_defeated TRAINER_JOCELYN, DewfordTown_Gym_EventScript_CheckLaura
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLaura::
	goto_if_not_defeated TRAINER_LAURA, DewfordTown_Gym_EventScript_CheckBrenden
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckBrenden::
	goto_if_not_defeated TRAINER_BRENDEN, DewfordTown_Gym_EventScript_CheckCristian
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckCristian::
	goto_if_not_defeated TRAINER_CRISTIAN, DewfordTown_Gym_EventScript_CheckLilith
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_CheckLilith::
	goto_if_not_defeated TRAINER_LILITH, DewfordTown_Gym_EventScript_StopCountingTrainers
	addvar VAR_0x8000, 1
DewfordTown_Gym_EventScript_StopCountingTrainers::
	return

DewfordTown_Gym_EventScript_Brawly::
	trainerbattle_single TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyIntro, DewfordTown_Gym_Text_BrawlyDefeat, DewfordTown_Gym_EventScript_BrawlyDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_BrawlyRematch
	goto_if_unset FLAG_RECEIVED_TM08, DewfordTown_Gym_EventScript_GiveBulkUp2
	msgbox DewfordTown_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_BrawlyDefeated::
	call DewfordTown_Gym_EventScript_AnimateFlashFullBrightness
	message DewfordTown_Gym_Text_ReceivedKnuckleBadge
	waitmessage
	call Common_EventScript_PlayGymBadgeFanfare
	msgbox DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
	setflag FLAG_DEFEATED_DEWFORD_GYM
	setflag FLAG_BADGE02_GET
	addvar VAR_PETALBURG_GYM_STATE, 1
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
	setvar VAR_0x8008, 2
	call Common_EventScript_SetGymTrainers
	call DewfordTown_Gym_EventScript_GiveBulkUp
	closemessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredBrawly, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_BRAWLY_MATCH_CALL
	setvar VAR_ROXANNE_CALL_STEP_COUNTER, 0
	setflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	release
	end

DewfordTown_Gym_EventScript_GiveBulkUp::
	giveitem ITEM_TM08
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM08
	return

DewfordTown_Gym_EventScript_GiveBulkUp2:
	giveitem ITEM_TM08
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_TM08
	release
	end

DewfordTown_Gym_EventScript_BrawlyRematch::
	trainerbattle_rematch_double TRAINER_BRAWLY_1, DewfordTown_Gym_Text_BrawlyPreRematch, DewfordTown_Gym_Text_BrawlyRematchDefeat, DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons
	msgbox DewfordTown_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Takao::
	trainerbattle_single TRAINER_TRAINER_46, DewfordTown_Gym_Text_TakaoIntro, DewfordTown_Gym_Text_TakaoDefeat, DewfordTown_Gym_EventScript_TakaoBrightenRoom
	msgbox DewfordTown_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_TakaoBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Jocelyn::
	trainerbattle_single TRAINER_TRAINER_50, DewfordTown_Gym_Text_JocelynIntro, DewfordTown_Gym_Text_JocelynDefeat, DewfordTown_Gym_EventScript_JocelynBrightenRoom
	msgbox DewfordTown_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_JocelynBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Laura::
	trainerbattle_single TRAINER_TRAINER_45, DewfordTown_Gym_Text_LauraIntro, DewfordTown_Gym_Text_LauraDefeat, DewfordTown_Gym_EventScript_LauraBrightenRoom
	msgbox DewfordTown_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LauraBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Brenden::
	trainerbattle_single TRAINER_TRAINER_48, DewfordTown_Gym_Text_BrendenIntro, DewfordTown_Gym_Text_BrendenDefeat, DewfordTown_Gym_EventScript_BrendenBrightenRoom
	msgbox DewfordTown_Gym_Text_BrendenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_BrendenBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Cristian::
	trainerbattle_single TRAINER_TRAINER_49, DewfordTown_Gym_Text_CristianIntro, DewfordTown_Gym_Text_CristianDefeat, DewfordTown_Gym_EventScript_CristianBrightenRoom
	msgbox DewfordTown_Gym_Text_CristianPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_CristianBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_Lilith::
	trainerbattle_single TRAINER_TRAINER_47, DewfordTown_Gym_Text_LilithIntro, DewfordTown_Gym_Text_LilithDefeat, DewfordTown_Gym_EventScript_LilithBrightenRoom
	msgbox DewfordTown_Gym_Text_LilithPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_LilithBrightenRoom::
	call DewfordTown_Gym_EventScript_BrightenRoom
	release
	end

DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_DEWFORD_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string	"Eh, ¿así que {PLAYER}?\n"
	.string	"¿Camino del CAMPEONATO?\p"
	.string	"MARCIAL, el LÍDER del GIMNASIO\n"
	.string	"de AZULIZA, usa POKéMON de tipo\l"
	.string	"LUCHA.\p"
	.string	"¡Si lo desafías con POKéMON de tipo\n"
	.string	"NORMAL, acabarás mal!\p"
	.string	"Los POKéMON de tipo LUCHA pueden\n"
	.string	"acabar con los POKéMON de tipo NORMAL\l"
	.string	"en un santiamén, así que ten cuidado…\p"
	.string	"Y lo que es aún peor: el GIMNASIO\n"
	.string	"está oscuro como boca de lobo.\p"
	.string	"Pero se irá iluminando a medida\n"
	.string	"que derrotes a los ENTRENADORES\l"
	.string	"que te encuentres en tu camino.\p"
	.string	"Bueno, ¡ve a por él!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string	"¡Guau! ¡Ahora sí que hay luz\n"
	.string	"para dar y tomar!\p"
	.string	"¡Y tu futuro también parece brillante!$"

DewfordTown_Gym_Text_TakaoIntro:
	.string "¡Querer es poder! ¡Quiero derrotarte!$"

DewfordTown_Gym_Text_TakaoDefeat:
	.string "Tendría que haberlo querido más{PAUSE 5}…{PAUSE 5}$"

DewfordTown_Gym_Text_TakaoPostBattle:
	.string "Tu ingenio supera mi fuerza bruta. ¡Tu\n"
	.string "técnica es insuperable!$"

DewfordTown_Gym_Text_JocelynIntro:
	.string "No es necesario molestar a MARCIAL… ¡Te\n"
	.string "voy a aplastar!$"

DewfordTown_Gym_Text_JocelynDefeat:
	.string "Pero… ¡cómo? ¿Cómo he podido perder\n"
	.string "tan rápido?$"

DewfordTown_Gym_Text_JocelynPostBattle:
	.string "No me voy a hundir por esto… ¡Me motiva\n"
	.string "para seguir entrenando! Un día seré\l"
	.string "Lider de Gimnasio… No, ¡seré la\l"
	.string "Campeona de la Liga Pokémon!$"

DewfordTown_Gym_Text_LauraIntro:
	.string "¡No me lleves la contraria! ¡Vas a perder\n"
	.string "porque lo digo yo!$"

DewfordTown_Gym_Text_LauraDefeat:
	.string "¡Waaaaaaah!\n"
	.string "¡No es justo!$"

DewfordTown_Gym_Text_LauraPostBattle:
	.string "Lucho en la oscuridad para quitarme\n"
	.string "todos los miedos. Pero, al estar tan\l"
	.string "oscuro, nunca he podido ver la cara de\l"
	.string "MARCIAL{PAUSE 5}…{PAUSE 5}$"

DewfordTown_Gym_Text_LilithIntro:
	.string "¡Uaka! ¿Dando tumbos en la oscuridad?$"

DewfordTown_Gym_Text_LilithDefeat:
	.string "Bah… ¡No quiero ni saber tu nombre!$"

DewfordTown_Gym_Text_LilithPostBattle:
	.string "¡Mereces perderte y acabar otra vez en\n"
	.string "la entrada!$"

DewfordTown_Gym_Text_BrendenIntro:
	.string "¡Vas a ver las agallas que tiene un lobo\n"
	.string "de mar!$"

DewfordTown_Gym_Text_BrendenDefeat:
	.string "¿Cómo ha pasado? ¡Yo nunca pierdo de\n"
	.string "esta manera!$"

DewfordTown_Gym_Text_BrendenPostBattle:
	.string "¡Por todos los mares! ¡ Mereces conocer\n"
	.string "a nuesto LIDER de GIMNASIO!$"

DewfordTown_Gym_Text_CristianIntro:
	.string "¡Si quieres pasar, tendrás que hacerlo\n"
	.string "por encima de mí!$"

DewfordTown_Gym_Text_CristianDefeat:
	.string "¡Grrrrr! ¡Una derrota humillante!$"

DewfordTown_Gym_Text_CristianPostBattle:
	.string "¡Me has ganado a mí! ¡A por la MEDALLA!$"

DewfordTown_Gym_Text_BrawlyIntro:
	.string	"¡Soy MARCIAL!\n"
	.string	"¡El LÍDER del GIMNASIO de AZULIZA!\p"
	.string	"He templado mi carácter entre las\n"
	.string	"fieras olas de este lugar y me he\l"
	.string	"endurecido en esta oscura cueva.\p"
	.string	"¿Quieres desafiarme?\n"
	.string	"Vamos a ver de qué eres capaz{PAUSE 5}…{PAUSE 5}$"

DewfordTown_Gym_Text_BrawlyDefeat:
	.string	"¡Guau y doble guau! ¡Eres peor que\n"
	.string	"un maremoto! No lo esperaba…\p"
	.string	"¡Estoy hundido en la miseria!\p"
	.string	"De acuerdo. Te la has ganado.\n"
	.string	"¡Toma esta MEDALLA de GIMNASIO!$"

DewfordTown_Gym_Text_ReceivedKnuckleBadge:
	.string	"{PLAYER} recibió la MEDALLA PUÑO\n"
	.string	"de MARCIAL.$"

DewfordTown_Gym_Text_KnuckleBadgeInfoTakeThis:
	.string "The KNUCKLE BADGE makes all POKéMON\n"
	.string "up to Level 30, even those you get in\l"
	.string "trades, obey without question.\p"
	.string "And, you'll be able to use the HM move\n"
	.string "FLASH outside of battle.\p"
	.string "If you'd like, use this TECHNICAL\n"
	.string "MACHINE, too.$"

DewfordTown_Gym_Text_ExplainBulkUp:
	.string "That TM08 contains BULK UP.\p"
	.string "It's a move that raises both ATTACK\n"
	.string "and DEFENSE stats.\p"
	.string "… … … … … …{PAUSE 5}$"

DewfordTown_Gym_Text_RegisteredBrawly:
	.string "Registered GYM LEADER BRAWLY\n"
	.string "in the POKéNAV.$"

DewfordTown_Gym_Text_BrawlyPostBattle:
	.string "I can see your talent becoming a giant\n"
	.string "wave to cause a storm of astonishment\l"
	.string "among TRAINERS one day!$"

DewfordTown_Gym_Text_GymStatue:
	.string	"GIMNASIO POKéMON de PUEBLO AZULIZA$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string	"GIMNASIO POKéMON de PUEBLO AZULIZA$"

DewfordTown_Gym_Text_BrawlyPreRematch:
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Show me how much higher\n"
	.string "you've gone!$"

DewfordTown_Gym_Text_BrawlyRematchDefeat:
	.string "Wow!\n"
	.string "Swamped again!$"

DewfordTown_Gym_Text_BrawlyPostRematch:
	.string	"MARCIAL: Combatir es algo muy profundo.\n"
	.string	"Nunca acabas de llegar al fondo.\l"
	.string	"¡Igual que el mar de HOENN!$"

DewfordTown_Gym_Text_BrawlyRematchNeedTwoMons:
	.string "BRAWLY: A wave may draw back, but it\n"
	.string "always returns to the shore.\p"
	.string "A giant wave of a talent like you…\n"
	.string "I knew you would return!\p"
	.string "Oh? You only have one POKéMON\n"
	.string "that can battle.\p"
	.string "I'm sorry, but I'd like you to come back\n"
	.string "with at least two POKéMON.$"

DewfordTown_Gym_Combate_Marcial::
lock
faceplayer
goto_if_set FLAG_SYS_CAVE_BATTLE, LavaridgeTown_Gym_Combate_Marcial_Despues
msgbox DewfordTown_Gym_Text_BrawlyIntro MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MARCIAL, DewfordTown_Gym_Text_BrawlyDefeat
setflag FLAG_SYS_CAVE_BATTLE
delay 10
playfanfare MUS_OBTAIN_BADGE
msgbox DewfordTown_Gym_Text_ReceivedKnuckleBadge MSGBOX_DEFAULT
waitfanfare
msgbox DewfordTown_Gym_Text_BrawlyPostRematch MSGBOX_AUTOCLOSE
release
end

LavaridgeTown_Gym_Combate_Marcial_Despues::
msgbox DewfordTown_Gym_Text_BrawlyPostRematch MSGBOX_AUTOCLOSE
release
end
