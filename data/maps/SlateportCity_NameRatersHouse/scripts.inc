SlateportCity_NameRatersHouse_MapScripts::
	.byte 0

SlateportCity_NameRatersHouse_EventScript_NameRater::
	lock
	faceplayer
	msgbox SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_ChooseMonToRate::
	msgbox SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname, MSGBOX_DEFAULT
	special ChoosePartyMon
	waitstate
	goto_if_ne VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_RateMonNickname
	goto_if_eq VAR_0x8004, PARTY_NOTHING_CHOSEN, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_DeclineNameRate::
	msgbox SlateportCity_NameRatersHouse_Text_DoVisitAgain, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_RateMonNickname::
	specialvar VAR_RESULT, ScriptGetPartyMonSpecies
	goto_if_eq VAR_RESULT, SPECIES_EGG, SlateportCity_NameRatersHouse_EventScript_CantRateEgg
	special BufferMonNickname
	special IsMonOTIDNotPlayers
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	specialvar VAR_RESULT, MonOTNameNotPlayer
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT
	msgbox SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, SlateportCity_NameRatersHouse_EventScript_ChangeNickname
	goto_if_eq VAR_RESULT, NO, SlateportCity_NameRatersHouse_EventScript_DeclineNameRate
	end

SlateportCity_NameRatersHouse_EventScript_CantRateEgg::
	msgbox SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_PlayerNotMonsOT::
	msgbox SlateportCity_NameRatersHouse_Text_MagnificentName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_ChangeNickname::
	msgbox SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe, MSGBOX_DEFAULT
	call Common_EventScript_NameReceivedPartyMon
	specialvar VAR_RESULT, TryPutNameRaterShowOnTheAir
	special BufferMonNickname
	goto_if_eq VAR_RESULT, TRUE, SlateportCity_NameRatersHouse_EventScript_NewNameDifferent
	msgbox SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_EventScript_NewNameDifferent::
	msgbox SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName, MSGBOX_DEFAULT
	release
	end

SlateportCity_NameRatersHouse_Text_PleasedToRateMonNickname:
	.string "Hi, hi! I'm the NAME RATER!\n"
	.string "I'm the fortune-teller of names!\p"
	.string "I shall be pleased to rate your\n"
	.string "POKÉMON's nickname.$"

SlateportCity_NameRatersHouse_Text_CritiqueWhichMonNickname:
	.string "Which POKÉMON's nickname should\n"
	.string "I critique?$"

SlateportCity_NameRatersHouse_Text_FineNameSuggestBetterOne:
	.string "Hmmm… {STR_VAR_1}, is it? That is\n"
	.string "quite a fine name you bestowed.\p"
	.string "But! What say you, if I were to\n"
	.string "suggest a slightly better name?$"

SlateportCity_NameRatersHouse_Text_WhatShallNewNameBe:
	.string "Ah, good. Then, what shall the new\n"
	.string "nickname be?$"

SlateportCity_NameRatersHouse_Text_MonShallBeKnownAsName:
	.string "Done! From now on, this POKÉMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It is a better name than before!\n"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_DoVisitAgain:
	.string "I see.\n"
	.string "Do come visit again.$"

SlateportCity_NameRatersHouse_Text_NameNoDifferentYetSuperior:
	.string "Done! From now on, this POKÉMON\n"
	.string "shall be known as {STR_VAR_1}!\p"
	.string "It looks no different from before,\n"
	.string "and yet, this is vastly superior!\p"
	.string "How fortunate for you!$"

SlateportCity_NameRatersHouse_Text_MagnificentName:
	.string "Hmmm… {STR_VAR_1} it is!\p"
	.string "This is a magnificent nickname!\n"
	.string "It is impeccably beyond reproach!\p"
	.string "You'll do well to cherish your\n"
	.string "{STR_VAR_1} now and beyond.$"

SlateportCity_NameRatersHouse_Text_ThatIsMerelyAnEgg:
	.string "Now, now.\n"
	.string "That is merely an EGG!$"

NameRatersHouse_Trampilla_Move_1:
walk_up
walk_up
step_end

NameRatersHouse_Trampilla_Move_2:
emote_exclamation_mark
step_end

NameRatersHouse_Trampilla_Move_3:
delay_16
delay_16
face_right
step_end

NameRatersHouse_Trampilla_Move_4:
walk_down
walk_right
walk_right
walk_right
walk_up
walk_up
face_left
step_end

NameRatersHouse_Trampilla_Move_5:
walk_in_place_left
step_end

NameRatersHouse_Trampilla_Move_6:
walk_in_place_right
step_end

SlateportCity_NameRatersHouse_Trampilla::
lock
delay 15
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_1
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_2 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_3 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_3
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_4
waitmovement 0x0
delay 30
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_5
waitmovement 0x0
delay 35
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_4 MSGBOX_AUTOCLOSE
delay 35
playse SE_PIN
applymovement 1, NameRatersHouse_Trampilla_Move_2
waitmovement 0x0
delay 10
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_6 MSGBOX_AUTOCLOSE
delay 25
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_7 MSGBOX_AUTOCLOSE
delay 25
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_8 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 1, NameRatersHouse_Trampilla_Move_2
waitmovement 0x0
delay 10
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_10 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_11 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_PLAYER, NameRatersHouse_Trampilla_Move_7
applymovement OBJ_EVENT_ID_CAMERA, NameRatersHouse_Trampilla_Move_8
waitmovement 0x0
special RemoveCameraObject
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_6
waitmovement 0x0
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_13 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_15 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, NameRatersHouse_Trampilla_Move_10
applymovement 1, NameRatersHouse_Trampilla_Move_9
waitmovement 0x0
special RemoveCameraObject
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_16 MSGBOX_AUTOCLOSE
delay 10
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_17 MSGBOX_DEFAULT
waitfanfare
msgbox SlateportCity_NameRatersHouse_Trampilla_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, NameRatersHouse_Trampilla_Move_11
waitmovement 0x0
setvar VAR_UNUSED_0x40F8, 26
release
end

NameRatersHouse_Trampilla_Move_11:
walk_left
walk_left
walk_left
walk_down
face_right
step_end

NameRatersHouse_Trampilla_Move_10:
walk_left
walk_left
walk_down
walk_down
step_end

NameRatersHouse_Trampilla_Move_9:
walk_up
walk_right
walk_right
walk_right
face_down
step_end

NameRatersHouse_Trampilla_Move_8:
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_right
step_end

NameRatersHouse_Trampilla_Move_7:
delay_16
face_up
step_end

SlateportCity_NameRatersHouse_Trampilla_Texto_1:
	.string "Hi, hi! I'm the NAME RATER!\n"
	.string "I'm the fortune-teller of names!\p"
	.string "I shall be pleased to rate your\n"
	.string "POKÉMON's nickname.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_2:
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

SlateportCity_NameRatersHouse_Trampilla_Texto_3:
	.string "You want to chat away with me?\n"
	.string "Sure thing, kid.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_4:
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

SlateportCity_NameRatersHouse_Trampilla_Texto_5:
	.string "Mhh{PAUSE 15}…{PAUSE 15} Where exactly did you hear that?$"

SlateportCity_NameRatersHouse_Trampilla_Texto_6:
	.string "No one has ever asked about that place\n"
	.string "so far. And I've been here for more than\l"
	.string "three decades.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_7:
	.string "{PAUSE 15}…{PAUSE 15} {PAUSE 15}…{PAUSE 15}$"

SlateportCity_NameRatersHouse_Trampilla_Texto_8:
	.string "AGATHA! Now I get it.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_9:
	.string "So you are that one TRAINER she\n"
	.string "appreciates so much.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_10:
	.string "If she trusts you,\n"
	.string "I'm trusting you as well.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_11:
	.string "If I can do anything to aid you,\n"
	.string "I'll be doing it. Watch this.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_12:
	.string "This little GRAVEYARD closed its doors\n"
	.string "more than three decades ago, when the\l"
	.string "first NAME RATER arrived in town.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_13:
	.string "The ladder that leads there was hidden\n"
	.string "under a trapdoor after the GYM got\l"
	.string "demolished.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_14:
	.string "Now, they're below KANTO's map.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_15:
	.string "When I got here, they left me in charge\n"
	.string "of the KEY that opens that trapdoor.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_16:
	.string "I actually never used it. Nor I had the\n"
	.string "least interest in what's down there.$"

SlateportCity_NameRatersHouse_Trampilla_Texto_17:
	.string "{PLAYER} got the TRAPDOOR'S KEY!$"

SlateportCity_NameRatersHouse_Trampilla_Texto_18:
	.string "Now, it's yours; you may go in and out as\n"
	.string "you please. It's the least I can do for\l"
	.string "you.$"

Lavender_Motes_Activador_Entrada::
compare VAR_UNUSED_0x40F8, 25
goto_if_gt Lavender_Motes_Activador_Entrada_Pasa
release
end

Lavender_Motes_Activador_Entrada_Pasa::
delay 15
msgbox CuevaTesoro_Activador_Entrada_Texto_1 MSGBOX_AUTOCLOSE
delay 15
msgbox Lavender_Motes_Activador_Entrada_Pasa_Text_YesNo, MSGBOX_YESNO
compare VAR_RESULT, 0
goto_if_eq CuevaTesoro_Activador_Entrada_Pasa_No
delay 10
warp MAP_LAVENDER_SECTA_PASADIZO, 2, 4
delay 10
release
end

Lavender_Motes_Activador_Entrada_Pasa_Text_YesNo:
	.string "Under the MAP, there's the OLD\n"
	.string "GRAVEYARD.\p"
	.string "Wanna use the TRAPDOOR'S KEY?$"


