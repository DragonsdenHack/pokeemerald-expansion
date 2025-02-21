AbandonedShip_Rooms2_1F_MapScripts::
	.byte 0

AbandonedShip_Rooms2_1F_EventScript_Dan::
	trainerbattle_double TRAINER_TRAINER_651, AbandonedShip_Rooms2_1F_Text_DanIntro, AbandonedShip_Rooms2_1F_Text_DanDefeat, AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons,
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostBattle, MSGBOX_AUTOCLOSE
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterDan::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT  @ Kira speaks for both when registering KiraAndDan
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_DanRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_DanRematchIntro, AbandonedShip_Rooms2_1F_Text_DanRematchDefeat, AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_DanPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Kira::
	trainerbattle_double TRAINER_TRAINER_651, AbandonedShip_Rooms2_1F_Text_KiraIntro, AbandonedShip_Rooms2_1F_Text_KiraDefeat, AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons,
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostBattle, MSGBOX_DEFAULT
	release
	end

AbandonedShip_Rooms2_1F_EventScript_RegisterKira::
	msgbox AbandonedShip_Rooms2_1F_Text_KiraRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_KIRA_AND_DAN_1
	release
	end

AbandonedShip_Rooms2_1F_EventScript_KiraRematch::
	trainerbattle_rematch_double TRAINER_KIRA_AND_DAN_1, AbandonedShip_Rooms2_1F_Text_KiraRematchIntro, AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat, AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons
	msgbox AbandonedShip_Rooms2_1F_Text_KiraPostRematch, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Jani::
	trainerbattle_single TRAINER_TRAINER_596, AbandonedShip_Rooms2_1F_Text_JaniIntro, AbandonedShip_Rooms2_1F_Text_JaniDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_JaniPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_EventScript_Garrison::
	trainerbattle_single TRAINER_TRAINER_595, AbandonedShip_Rooms2_1F_Text_GarrisonIntro, AbandonedShip_Rooms2_1F_Text_GarrisonDefeat
	msgbox AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle, MSGBOX_AUTOCLOSE
	end

AbandonedShip_Rooms2_1F_Text_DanIntro:
	.string	"FITO: ¡Estábamos buscando tesoros\n"
	.string	"y nos encontramos con un combate!$"

AbandonedShip_Rooms2_1F_Text_DanDefeat:
	.string	"FITO: A pesar de luchar a dúo,\n"
	.string	"hemos perdido{PAUSE 5}…{PAUSE 5}$"

AbandonedShip_Rooms2_1F_Text_DanPostBattle:
	.string	"FITO: No encontramos ni una baratija…\n"
	.string	"¿Se habrá llevado ya alguien el tesoro?$"

AbandonedShip_Rooms2_1F_Text_DanNotEnoughMons:
	.string "DAN: You don't even have two POKÉMON.\n"
	.string "You can't expect to beat us like that.$"

AbandonedShip_Rooms2_1F_Text_KiraIntro:
	.string	"LUCI: ¡Anda! Buscábamos tesoros\n"
	.string	"y nos encontramos con un combate{PAUSE 5}…{PAUSE 5}$"

AbandonedShip_Rooms2_1F_Text_KiraDefeat:
	.string	"LUCI: ¡Guau, qué fuerte eres!$"

AbandonedShip_Rooms2_1F_Text_KiraPostBattle:
	.string	"LUCI: Me pregunto dónde habrán\n"
	.string	"escondido el tesoro…\p"
	.string	"¡Si lo encuentro, ya sé en qué\n"
	.string	"me lo voy a gastar!$"

AbandonedShip_Rooms2_1F_Text_KiraNotEnoughMons:
	.string "KIRA: Oh, you don't have two POKÉMON?\n"
	.string "We'll have to battle some other time!$"

AbandonedShip_Rooms2_1F_Text_KiraRegister:
	.string	"LUCI: ¡Ay, me pones de los nervios!\n"
	.string	"¡Por eso mismo te voy a registrar!$"

AbandonedShip_Rooms2_1F_Text_DanRematchIntro:
	.string "DAN: We've been searching for\n"
	.string "treasures all this time.\p"
	.string "Our POKÉMON have grown stronger, too.\n"
	.string "Let us show you, okay?$"

AbandonedShip_Rooms2_1F_Text_DanRematchDefeat:
	.string	"FITO: Nada, sigues siendo tan fuerte\n"
	.string	"como siempre.$"

AbandonedShip_Rooms2_1F_Text_DanPostRematch:
	.string "DAN: We can't find any treasures,\n"
	.string "we lose at POKÉMON…\p"
	.string "I want to go home… But if I say that,\n"
	.string "she gets all angry with me…$"

AbandonedShip_Rooms2_1F_Text_DanRematchNotEnoughMons:
	.string "DAN: You don't even have two POKÉMON.\n"
	.string "You can't expect to beat us like that.$"

AbandonedShip_Rooms2_1F_Text_KiraRematchIntro:
	.string "KIRA: Oh? We meet again!\p"
	.string "Just like us, you still haven't given up\n"
	.string "searching for treasures, have you?\p"
	.string "Want to make it so the loser has\n"
	.string "to give up searching?$"

AbandonedShip_Rooms2_1F_Text_KiraRematchDefeat:
	.string "KIRA: Oh, we lost again{PAUSE 5}…{PAUSE 5}$"

AbandonedShip_Rooms2_1F_Text_KiraPostRematch:
	.string "KIRA: We're not leaving until we raise\n"
	.string "our POKÉMON some more and we find\l"
	.string "the treasures here!$"

AbandonedShip_Rooms2_1F_Text_KiraRematchNotEnoughMons:
	.string "KIRA: Oh, you don't have two POKÉMON?\n"
	.string "We'll have to battle some other time!$"

AbandonedShip_Rooms2_1F_Text_JaniIntro:
	.string	"No se me da bien nadar,\n"
	.string	"¡pero luchar es otra cosa!$"

AbandonedShip_Rooms2_1F_Text_JaniDefeat:
	.string	"Ay, ay, ay…\n"
	.string	"Esto no ha salido bien{PAUSE 5}…{PAUSE 5}$"

AbandonedShip_Rooms2_1F_Text_JaniPostBattle:
	.string	"Andar descalza por este barco\n"
	.string	"no es muy higiénico.$"

AbandonedShip_Rooms2_1F_Text_GarrisonIntro:
	.string	"Fuerza y compasión…\n"
	.string	"¡Todo ENTRENADOR debe poseer ambas!$"

AbandonedShip_Rooms2_1F_Text_GarrisonDefeat:
	.string	"Hay algo en ti que deslumbra.$"

AbandonedShip_Rooms2_1F_Text_GarrisonPostBattle:
	.string	"Por cierto, he visto algo que\n"
	.string	"brillaba en uno de los camarotes.$"
