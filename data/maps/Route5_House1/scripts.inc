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
msgbox Route5_House1_Criador_1, MSGBOX_AUTOCLOSE
applymovement 2, Route5_House1_Criador_1_move2
waitmovement 0x0
msgbox Route5_House1_Criador_2, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move3
applymovement 2, Route5_House1_Criador_1_move4
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Route5_House1_Criador_1_move5
waitmovement 0x0
playse SE_M_VICEGRIP
msgbox Route5_House1_Criador_3, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move6
waitmovement 0x0
msgbox Route5_House1_Criador_4, MSGBOX_AUTOCLOSE
msgbox Route5_House1_Criador_5, MSGBOX_AUTOCLOSE
msgbox Route5_House1_Criador_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 1, Route5_House1_Criador_1_move4
waitmovement 0x0
playse SE_DOOR
msgbox Route5_House1_Criador_7, MSGBOX_AUTOCLOSE
applymovement 1, Route5_House1_Criador_1_move7
waitmovement 0x0
msgbox Route5_House1_Criador_8, MSGBOX_AUTOCLOSE
delay 10
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
	.string "POKÉMON BREEDER: Right. Here you are.\n"
	.string "The information I'm passing on now is\l"
	.string "highly confidential. Even a peep would\l"
	.string "end in maximum punishment by law. But\l"
	.string "you're ROCKET. You must already be\l"
	.string "ready to face the risks.$"

Route5_House1_Criador_2:
    .string "ANDRA: Yes!\n"
	.string "Go ahead!$"

Route5_House1_Criador_3:
    .string "(THE POKÉMON BREEDER BLOCKED THE DOOR\n"
	.string "WITH A LOCK)$"

Route5_House1_Criador_4:
	.string "POKÉMON BREEDER: Well. You must surely\n"
	.string "know by now, but this isn't your average\l"
	.string "daycare. This is a ROCKET BASE run\l"
	.string "through one of many shell corporations.\l"
	.string "We tend to our clients' beloved POKÉMON\l"
	.string "as agreed, but our contracts are\l"
	.string "hush-hush about the conditions and\l"
	.string "stipulations. The real money comes from\l"
	.string "pairing off the POKÉMON for EGGs. The\l"
	.string "GAME CORNER offers our rarer species\l"
	.string "like CLEFAIRY and ABRA as prizes, but\l"
	.string "we make a pretty penny on the black\l"
	.string "market too. In fact, your dear CHRONO\l"
	.string "ISLAND CONSUL had made a discreet\l"
	.string "purchase for a MEOWTH hatched here.$"

Route5_House1_Criador_5:
	.string "ANDRA: Ingenious! So the CELADON BASE\n"
	.string "isn't the only one that TEAM ROCKET\l"
	.string "runs in the region! I had no idea. It's\l"
	.string "the perfect business!$"

Route5_House1_Criador_6:
	.string "POKÉMON BREEDER: You'll discover more\n"
	.string "if you can last, young recruit. Now\l"
	.string "though, PETREL awaits you in his office\l"
	.string "downstairs. Just take a peek at the\l"
	.string "green area in the top-left here, and\l"
	.string "you'll come upon a trapdoor blending\l"
	.string "with the pavement. There's the secret\l"
	.string "entrance.$"

Route5_House1_Criador_7:
	.string "(POKÉMON BREEDER OPENED THE DOOR\n"
	.string "AGAIN)$"

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
walk_slow_right
walk_slow_up
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
