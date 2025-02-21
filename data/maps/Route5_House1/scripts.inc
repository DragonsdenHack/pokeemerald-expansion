Route5_House1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, Route5_House1_OnFrame
	.byte 0

Route5_House1_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 8, Route5_House1_Criador
	.2byte 0

Route5House1_1::
lock
faceplayer
msgbox Route5House1_1_Texto_1 MSGBOX_NPC
release
end

Route5House1_1_Texto_1:
	.string "Sorry, but TEAM ROCKET doesn't allow\n"
	.string "their own POKÉMON inside the business.\l"
	.string "Hope you get it.$"

Route5_House1_Criador::
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move1.1
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 1, Route5_House1_Criador_1_move1
applymovement 2, Route5_House1_Criador_1_move1
waitmovement 0x0
waitse
delay 10
msgbox Route5_House1_Criador_1, MSGBOX_AUTOCLOSE
delay 15
applymovement 1, Route5_House1_Criador_1_move6.1
waitmovement 0x0
delay 15
msgbox Route5_House1_Criador_1.1, MSGBOX_AUTOCLOSE
applymovement 2, Route5_House1_Criador_1_move2
waitmovement 0x0
msgbox Route5_House1_Criador_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move3
applymovement 2, Route5_House1_Criador_1_move4
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move5
waitmovement 0x0
playse SE_M_VICEGRIP
msgbox Route5_House1_Criador_3, MSGBOX_DEFAULT
waitse
delay 10
applymovement 1, Route5_House1_Criador_1_move6
waitmovement 0x0
msgbox Route5_House1_Criador_4, MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Route5_House1_Criador_1_move6.4
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move6.4
delay 10
waitse
delay 10
applymovement 1, Route5_House1_Criador_1_move6.1
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_4.1, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move6.2
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_4.2, MSGBOX_AUTOCLOSE
applymovement 2, Route5_House1_Criador_1_move6.5
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_5, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move6.3
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move1.1
applymovement 2, Route5_House1_Criador_1_move1.5
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move1.5
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_6.1, MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move4.1
applymovement 2, Route5_House1_Criador_1_move4.1
applymovement 1, Route5_House1_Criador_1_move4
waitmovement 0x0
playse SE_ICE_STAIRS
msgbox Route5_House1_Criador_7, MSGBOX_AUTOCLOSE
waitse
delay 10
applymovement 1, Route5_House1_Criador_1_move7
waitmovement 0x0
msgbox Route5_House1_Criador_8, MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move1.5
applymovement 2, Route5_House1_Criador_1_move8
waitmovement 0x0
delay 10
msgbox Route5_House1_Criador_9, MSGBOX_AUTOCLOSE
delay 10
playse SE_EXIT
setflag FLAG_HIDE_UNION_ROOM_PLAYER_5
fadescreen 1
delay 20
removeobject 2
fadescreen 0
setvar VAR_UNUSED_0x40F7, 9
release
end

Route5_House1_Criador_1_move4.1:
delay_16
face_down
step_end

Route5_House1_Criador_1_move1.5:
delay_16
face_up
step_end

Route5_House1_Criador_1_move6.5:
walk_in_place_right
step_end

Route5_House1_Criador_1_move6.4:
emote_exclamation_mark
step_end

Route5_House1_Criador_1_move6.1:
delay_8
face_down
delay_16
delay_8
face_left
delay_8
step_end

Route5_House1_Criador_1_move6.2:
delay_8
face_right
delay_16
delay_8
face_left
delay_8
step_end

Route5_House1_Criador_1_move6.3:
walk_in_place_left
step_end


Route5_CriaPokemon::
	lock
	faceplayer
	showmoneybox 0, 0
	special GetDaycareMonNicknames
	specialvar VAR_RESULT, GetDaycareState
	goto_if_eq VAR_RESULT, 2, Route5_PokemonDayCare_EventScript_CheckOnMon
	msgbox Route5_PokemonDayCare_Text_WantMeToRaiseMon, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, Route5_PokemonDayCare_EventScript_TryGiveMon
	msgbox Route5_PokemonDayCare_Text_ComeAgain
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end
 
	Route5_PokemonDayCare_EventScript_TryGiveMon::
		specialvar VAR_RESULT, CountPartyAliveNonEggMons
		goto_if_eq VAR_RESULT, 1, Route5_PokemonDayCare_EventScript_OnlyOneMonInParty
		msgbox Route5_PokemonDayCare_Text_WhichMonShouldIRaise, MSGBOX_DEFAULT
		fadescreen FADE_TO_BLACK
		hidemoneybox
		special ChooseSendDaycareMon
		waitstate
		goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, Route5_PokemonDayCare_Text_ComeAgain
		specialvar VAR_RESULT, CountPartyAliveNonEggMons_IgnoreVar0x8004Slot
		goto_if_eq VAR_RESULT, 0, Route5_PokemonDayCare_EventScript_OnlyOneAliveMonInParty
		specialvar VAR_0x8005, GetSelectedMonNicknameAndSpecies
		waitse
		playmoncry VAR_0x8005, CRY_MODE_NORMAL
		msgbox Route5_PokemonDayCare_Text_ComeSeeMeInAWhile
		waitmoncry
		special StoreSelectedPokemonInDaycare
		setvar VAR_RESULT, DAYCARE_ONE_MON
		release
		end
		
		Route5_PokemonDayCare_EventScript_OnlyOneAliveMonInParty::
		msgbox Route5_PokemonDayCare_Text_WhatWillYouBattleWith
		goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
		end
 
	Route5_PokemonDayCare_EventScript_CheckOnMon::
		specialvar VAR_RESULT, CalculatePlayerPartyCount
		goto_if_eq VAR_RESULT, PARTY_SIZE, Route5_PokemonDayCare_EventScript_NoRoomInParty
		specialvar VAR_RESULT, GetDaycareState
		setvar VAR_0x8004, 0
		goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route5_PokemonDayCare_EventScript_RetrieveMon
		special ShowDaycareLevelMenu
		waitstate
		copyvar VAR_0x8004, VAR_RESULT
		goto_if_eq VAR_RESULT, DAYCARE_EXITED_LEVEL_MENU, Route5_PokemonDayCare_Text_ComeAgain
		goto Route5_PokemonDayCare_EventScript_CostPrompt
		end
 
	Route5_PokemonDayCare_EventScript_RetrieveMon::
		setvar VAR_0x8004, 0
		goto_if_eq VAR_RESULT, DAYCARE_ONE_MON, Route5_PokemonDayCare_EventScript_CostPrompt
		special ShowDaycareLevelMenu
		waitstate
		copyvar VAR_0x8004, VAR_RESULT
		msgbox Route5_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
 
	Route5_PokemonDayCare_EventScript_CostPrompt::
		special GetDaycareCost
		msgbox Route5_PokemonDayCare_Text_OweMeXForMonsReturn, MSGBOX_YESNO
		goto_if_eq VAR_RESULT, YES, Route5_PokemonDayCare_EventScript_CheckEnoughMoney
		msgbox Route5_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
		end
 
	Route5_PokemonDayCare_EventScript_CheckEnoughMoney::
		specialvar VAR_RESULT, IsEnoughForCostInVar0x8005
		goto_if_eq VAR_RESULT, 1, Route5_PokemonDayCare_EventScript_RetrieveMon2
		msgbox Route5_PokemonDayCare_Text_DontHaveEnoughMoney, MSGBOX_DEFAULT
 
	Route5_PokemonDayCare_EventScript_RetrieveMon2::
		special SubtractMoneyFromVar0x8005
		updatemoneybox
		playse SE_SHOP
		waitse
		playmoncry VAR_RESULT, CRY_MODE_NORMAL
		msgbox Route5_PokemonDayCare_Text_ThankYouHeresMon, MSGBOX_DEFAULT
		msgbox Route5_PokemonDayCare_Text_ComeAgain, MSGBOX_DEFAULT
		end
 
 
	Route5_PokemonDayCare_EventScript_OnlyOneMonInParty::
	msgbox Route5_PokemonDayCare_Text_OnlyHaveOneMonWithYou
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end
 
 
	Route5_PokemonDayCare_EventScript_NoRoomInParty::
	msgbox Route5_PokemonDayCare_Text_YouveGotNoRoomForIt
	goto Route5_PokemonDayCare_EventScript_CloseMoneyBox
	end
 
	Route5_PokemonDayCare_EventScript_CloseMoneyBox::
	hidemoneybox
	release
	end
 
 
 
	Route5_PokemonDayCare_Text_WantMeToRaiseMon::
	.string "I run the DAY-CARE service.\p"
	.string "Would you like me to raise one of\n"
	.string "your POKÉMON?$"
 
Route5_PokemonDayCare_Text_ComeAgain::
	.string "Come again.$"
 
Route5_PokemonDayCare_Text_WhichMonShouldIRaise::
	.string "Which POKÉMON should I raise?$"
 
Route5_PokemonDayCare_Text_ComeAnytimeYouLike::
	.string "Fine.\n"
	.string "Come anytime you like.$"
 
Route5_PokemonDayCare_Text_LookAfterMonForAWhile::
	.string "Fine, I'll look after your\n"
	.string "{STR_VAR_1} for a while.$"
 
Route5_PokemonDayCare_Text_ComeSeeMeInAWhile::
	.string "Come see me in a while.$"
 
Route5_PokemonDayCare_Text_MonNeedsToSpendMoreTime::
	.string "You're back already?\p"
	.string "Your {STR_VAR_1} needs to spend\n"
	.string "some more time with me.$"
 
Route5_PokemonDayCare_Text_OweMeXForMonsReturn::
	.string "You owe me ¥{STR_VAR_2} for the return\n"
	.string "of this POKÉMON.$"
 
Route5_PokemonDayCare_Text_ThankYouHeresMon::
	.string "Thank you!\n"
	.string "Here's your POKÉMON.$"
 
Route5_PokemonDayCare_Text_PlayerGotMonBack::
	.string "{PLAYER} got {STR_VAR_1} back\n"
	.string "from the DAY-CARE MAN.$"
 
Route5_PokemonDayCare_Text_OnlyHaveOneMonWithYou::
	.string "Oh? You only have one POKÉMON\n"
	.string "with you.$"
 
Route5_PokemonDayCare_Text_WhatWillYouBattleWith::
	.string "If you leave me that POKÉMON,\n"
	.string "what will you battle with?$"
 
Route5_PokemonDayCare_Text_MonHasGrownByXLevels::
	.string "Your {STR_VAR_1} has grown a lot.\n"
	.string "Yes, quite a lot, I'd say.\p"
	.string "Let me see…\n"
	.string "By level, it's grown by {STR_VAR_2}.\p"
	.string "Aren't I great?$"
 
Route5_PokemonDayCare_Text_YouveGotNoRoomForIt::
	.string "You can't take this POKÉMON back\n"
	.string "if you've got no room for it.$"
 
Route5_PokemonDayCare_Text_DontHaveEnoughMoney::
	.string "You don't have enough money.$"

Route5_House1_Criador_1:
    .string "CRIAPOKÉMON: Bien{PAUSE 25}…{PAUSE 25} ya estáis aquí,\n"
	.string "sabed que la información que voy a\l"
	.string "revelaros a partir de ahora es\l"
	.string "totalmente confidencial, la sola\l"
	.string "insinuación de dicha información\l"
	.string "fuera del ámbito ROCKET es\l"
	.string "castigada con la pena máxima aquí.$"

Route5_House1_Criador_1.1:
	.string "Ya sois ROCKET, por lo que\n"
	.string "presupongo que estáis dispuestos\l"
	.string "a aceptar estas condiciones.$"

Route5_House1_Criador_2:
    .string "ANDRA: Yes!\n"
	.string "Go ahead!$"

Route5_House1_Criador_3:
    .string "(El CRIAPOKÉMON CERRÓ\n"
	.string "CON CANDADO LA PUERTA).$"

Route5_House1_Criador_4:
    .string "CRIAPOKÉMON: Bien, como\n"
	.string "sospecharéis, esta no es una\l"
	.string "guardería normal, se trata de una\l"
	.string "BASE ROCKET encubierta, uno de\l"
	.string "nuestros tantos negocios en la\l"
	.string "sombra.$"

Route5_House1_Criador_4.1:
	.string "Básicamente sí, hacemos lo que\n"
	.string "prometemos, cuidar de los queridos\l"
	.string "POKÉMON de los entrenadores, no\l"
	.string "obstante, el contrato no habla de\l"
	.string "las condiciones ni de la comisión\l"
	.string "extra que cobramos por ello, esto\l"
	.string "es, el negocio aquí proviene de\l"
	.string "emparejar aquellos POKÉMON cedidos\l"
	.string "que son de la misma especie para\l"
	.string "crear HUEVOS POKÉMON, es decir,\l"
	.string "nuestros beneficios.$"
	
Route5_House1_Criador_4.2:
	.string "Algunos, como el caso de CLEFAIRY o\n"
	.string "ABRA son enviados al CASINO, otros\l"
	.string "directamente vendidos en el mercado\l"
	.string "negro.\l"
	.string "Vuestra querida CÓNSUL, sin ir más\l"
	.string "lejos, compró un MEOWTH proveniente\l"
	.string "de un HUEVO nacido aquí.$"

Route5_House1_Criador_5:
	.string "ANDRA: Ingenious! So the CELADON BASE\n"
	.string "isn't the only one that TEAM ROCKET\l"
	.string "runs in the region! I had no idea. It's\l"
	.string "the perfect business!$"

Route5_House1_Criador_6:
    .string "CRIAPOKÉMON: Ya te enterarás de\n"
	.string "varias cosas más si sigues aquí lo\l"
	.string "suficiente joven recluta, por el\l"
	.string "momento, PETREL os está esperando\l"
	.string "abajo en su despacho.$"
	
Route5_House1_Criador_6.1:
	.string "Para bajar, solo tenéis que acercaros\n"
	.string "a la zona superior izquierda de color\l"
	.string "verde.\l"
	.string "Allí hay una trampilla que se\l"
	.string "difumina con el pavimento, esa\l"
	.string "es la entrada secreta.$"

Route5_House1_Criador_7:
    .string "(EL CRIAPOKÉMON VOLVIÓ\n"
	.string "A ABRIR LA PUERTA)$"

Route5_House1_Criador_8:
	.string "POKÉMON BREEDER: Now hurry along!\n"
	.string "Clients could arrive any moment, and\l"
	.string "there's nothing worse than a business\l"
	.string "getting tangled with TEAM ROCKET. Get\l"
	.string "going!$"

Route5_House1_Criador_9:
    .string "ANDRA: It was true!$"


Route5_House1_Criador_1_move1:
emote_exclamation_mark
face_down
step_end

Route5_House1_Criador_1_move1.1:
face_up
step_end

Route5_House1_Criador_1_move2:
walk_in_place_right
step_end

Route5_House1_Criador_1_move3:
walk_down
walk_down
walk_down
step_end

Route5_House1_Criador_1_move4:
face_down
step_end

Route5_House1_Criador_1_move5:
delay_16
delay_8
walk_right
walk_up
delay_8
walk_in_place_down
step_end

Route5_House1_Criador_1_move6:
face_up
step_end

Route5_House1_Criador_1_move7:
walk_up
walk_up
walk_up
walk_in_place_down
step_end

Route5_House1_Criador_1_move8:
walk_left
walk_left
walk_up
walk_up
walk_left
walk_in_place_down
step_end

Route5_House1_Warp::
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Warp_move2
waitmovement 0x0
msgbox Route5_House1_Warp_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq Route5_House1_Warp_No
warp MAP_ROCKET_HIDEOUT_6F, 1, 27
release
end

Route5_House1_Warp_No::
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Warp_move1
release
end

Route5_House1_Warp_Text_YesNo:
	.string "The subtle outline of a trapdoor here\n"
	.string "leads into an underground area. Do you\l"
	.string "want to enter the ROCKET BASE?$"

Route5_House1_Warp_move2:
walk_in_place_left
step_end

Route5_House1_Warp_move1:
walk_slow_right
step_end
