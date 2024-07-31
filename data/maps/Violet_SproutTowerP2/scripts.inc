Violet_SproutTowerP2_MapScripts::
	.byte 0

VioletSproutTowerP2_1::
end



VioletSproutTowerP2_2::
end



VioletSproutTowerP2_3::
lock
msgbox VioletSproutTowerP2_3_Texto_1 MSGBOX_DEFAULT
release
end

VioletSproutTowerP2_3_Texto_1:
.string "Apparently he is meditating…$"



VioletSproutTowerP2_4::
end



VioletSproutTowerP2_5::
end



VioletSproutTowerP2_6::
end



VioletSproutTowerP2_7::
end



VioletSprotTowerP2_EventScript_Pensador::
	trainerbattle_single TRAINER_LUCAS_2, VioletSprotTowerP2_Text_PensadorIntro, VioletSprotTowerP2_Text_PensadorDefeated
	msgbox VioletSprotTowerP2_Text_PensadorPostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP2_EventScript_Pensador2::
	trainerbattle_single TRAINER_TRENT_3, VioletSprotTowerP2_Text_Pensador2Intro, VioletSprotTowerP2_Text_Pensador2Defeated
	msgbox VioletSprotTowerP2_Text_Pensador2PostBattle, MSGBOX_AUTOCLOSE
	end



VioletSprotTowerP2Documento_100::
msgbox VioletSprotTowerP2Documento_Text_100, MSGBOX_SIGN   
end

VioletSprotTowerP2Documento_Text_100:
	.string "It is the solemn statue of a\n"
	.string "BELLSPROUT. Engraved upon it in golden\l"
	.string "letters is: -We all start from different\l"
	.string "points… but we can all reach the same\l"
	.string "sky-.$"

Violet_SproutTower_P2_Encuentro_Zeus::
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_1
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_1 MSGBOX_AUTOCLOSE
delay 15
applymovement 7, Violet_SproutTower_P2_Encuentro_Zeus_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_3
waitmovement 0x0
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_4
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_2 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_3 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_4 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_5
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, Violet_SproutTower_P2_Encuentro_Zeus_Move_6
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_5 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_6 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_7
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_7 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_2
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_8 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_8
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_9 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_7
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_10 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_2
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_11 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_9
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Zeus_Texto_12 MSGBOX_AUTOCLOSE
applymovement 6, Violet_SproutTower_P2_Encuentro_Zeus_Move_10
waitmovement 0x0
setflag FLAG_HIDE_GRANITE_CAVE_STEVEN
removeobject 6
playse SE_EXIT
setvar VAR_UNUSED_0x40F7, 122
release
end

Violet_SproutTower_P2_Encuentro_Zeus_Texto_1:
.string "????: You have disappointed me, old man.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_2:
	.string "ZEUS: I'd arrived believing this place\n"
	.string "would reveal invaluable information on\l"
	.string "the two LEGENDARIES of JOHTO-allow me\l"
	.string "to glean the history of this region. Yet\l"
	.string "only doddering, old men are here, bowing\l"
	.string "to the mediocrity of BELLSPROUT.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_3:
	.string "What's the purpose in dedicating one's\n"
	.string "whole life to such worship in being\l"
	.string "marginally less weaker than the\l"
	.string "bog-standard BELLSPROUT?$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_4:
	.string "I trust that the BELL TOWER in\n"
	.string "ECRUTEAK CITY has something more\l"
	.string "interesting to offer. I've seen enough\l"
	.string "of this place.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_5:
	.string "{PLAYER}, I didn't expect to see you\n"
	.string "again, and even less in a place like this.\l"
	.string "I thought you worked only around KANTO\l"
	.string "and SEVII.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_6:
	.string "But if I'm honest, you truly are suited\n"
	.string "to this pagoda. For those constrained\l"
	.string "by the boundaries of mortal POKÉMON,\l"
	.string "eking out the barest mote of\l"
	.string "improvement might be possible. But\l"
	.string "that's neither here nor there.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_7:
	.string "All of your POKÉMON are just shadows\n"
	.string "and ashes. Nevertheless…$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_8:
	.string "That TRAINER… He was headed to AZALEA\n"
	.string "TOWN. Had a POKÉMON with him. A very\l"
	.string "special one, despite not being a\l"
	.string "LEGENDARY one.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_9:
	.string "That POKÉMON had the power of the sun.\n"
	.string "I could sense it the moment it came out\l"
	.string "of the POKÉ BALL; the energy of that\l"
	.string "POKÉMON is akin to that of the\l"
	.string "mightiest LEGENDARIES, and I'm\l"
	.string "uncertain why.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_10:
	.string "However, I noticed that it's sick. That\n"
	.string "surplus of energy is possibly the cause\l"
	.string "of its illness. Its power and its curse\l"
	.string "go hand in hand.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_11:
	.string "But it's not surprising; this is what\n"
	.string "happens when you implant the engine of\l"
	.string "a sacred POKÉMON into a mortal one:\l"
	.string "their body can't withstand it. It's still\l"
	.string "an anomaly, further evidence that\l"
	.string "playing god without being one is costly.$"

Violet_SproutTower_P2_Encuentro_Zeus_Texto_12:
	.string "I hope this serves as an example of\n"
	.string "what can happen to you too if you try\l"
	.string "to play with things bigger than your\l"
	.string "own existence.$"

Violet_SproutTower_P2_Encuentro_Zeus_Move_1:
walk_in_place_up
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_2:
face_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_3:
walk_slow_up
walk_slow_up
walk_slow_up
walk_in_place_up
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_4:
emote_exclamation_mark
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_5:
walk_down
walk_down
face_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_6:
face_left
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_7:
face_down
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_8:
walk_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_9:
walk_in_place_right
step_end

Violet_SproutTower_P2_Encuentro_Zeus_Move_10:
walk_down
walk_right
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

Violet_SproutTower_P2_Encuentro_Maestro::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 122
goto_if_gt Violet_SproutTower_P2_Encuentro_Maestro_2
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_1 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_2 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_3 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement 5, Violet_SproutTower_P2_Encuentro_Maestro_Move_1
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_4 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_MAESTRO_BELLSPROUT, Violet_SproutTower_P2_Encuentro_Maestro_Texto_5
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_6 MSGBOX_AUTOCLOSE
applymovement 7, Violet_SproutTower_P2_Encuentro_Maestro_Move_2
applymovement 5, Violet_SproutTower_P2_Encuentro_Maestro_Move_3
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_7 MSGBOX_AUTOCLOSE
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_8 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_ROUTE_128_STEVEN
fadescreen 1
playse SE_WARP_OUT
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_9 MSGBOX_AUTOCLOSE
waitse
removeobject 7
fadescreen 0
delay 15
applymovement 5, Violet_SproutTower_P2_Encuentro_Maestro_Move_4
waitmovement 0x0
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_10 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_10.1 MSGBOX_DEFAULT
waitfanfare
additem ITEM_HM05
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_11 MSGBOX_NPC
clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
clearflag FLAG_HIDE_SLATEPORT_CITY_GABBY_AND_TY
setvar VAR_UNUSED_0x40F7, 123
release
end

Violet_SproutTower_P2_Encuentro_Maestro_2::
lock
faceplayer
msgbox Violet_SproutTower_P2_Encuentro_Maestro_Texto_11 MSGBOX_NPC
release
end

Violet_SproutTower_P2_Encuentro_Maestro_Texto_10.1:
	.string "{PLAYER} obtained the HM05 from\n"
	.string "ELDER!!$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_1:
	.string "That man will one day find himself in\n"
	.string "trouble. He's blinded by just one of the\l"
	.string "qualities that define a POKÉMON: BASE\l"
	.string "STATS. And that prevents him from\l"
	.string "seeing the other virtues that each\l"
	.string "POKÉMON has.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_2:
	.string "A misconception of power. Real power\n"
	.string "can come from any POKÉMON if you're\l"
	.string "willing to understand it. And knowing to\l"
	.string "properly arrange its infinite\l"
	.string "combinations can allow it to overcome\l"
	.string "any hurdle. Isn't that power then?\l"
	.string "Within each POKÉMON lies the potential\l"
	.string "to be excellent. Only few are unable to\l"
	.string "develop it.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_3:
.string "{PAUSE 15}…{PAUSE 15}\n"
	.string "{PAUSE 15}…{PAUSE 15}$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_4:
	.string "Oh! So FALKNER sends you? He must have\n"
	.string "seen something special in you to send\l"
	.string "you here. Knowing that I'll be your trial\l"
	.string "to access something as special as\l"
	.string "battling FALKNER, I have no other\l"
	.string "choice than to use my best POKÉMON.\l"
	.string "Show me the bond you hold with your\l"
	.string "team!$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_5:
.string "Oh!\n"
	.string "So not every young trainer has lost the\l"
	.string "essence of battling…$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_6:
	.string "I never expected to encounter trainers\n"
	.string "like you again. Someone like you\l"
	.string "deserves to be challenged by opponents\l"
	.string "that compel you to go beyond.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_7:
.string "FALKNER!\n"
	.string "Tell your father!\l"
	.string "This younger man had just\l"
	.string "accomplished his challenge!$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_8:
.string "FALKNER: I'm going, ELDER.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_9:
.string "(FALKNER USED ESCAPE ROPE).$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_10:
	.string "And take this. With this HM, you could\n"
	.string "FLASH even the darkest caves.$"

Violet_SproutTower_P2_Encuentro_Maestro_Texto_11:
	.string "No matter what happens, don't forget to\n"
	.string "enjoy every step of your journey. That\l"
	.string "present moment is all you have; all your\l"
	.string "future expectations are nothing more\l"
	.string "than an illusion that will only take\l"
	.string "shape based on what you do now.$"

Violet_SproutTower_P2_Encuentro_Maestro_Move_1:
emote_exclamation_mark
step_end

Violet_SproutTower_P2_Encuentro_Maestro_Move_2:
face_right
step_end

Violet_SproutTower_P2_Encuentro_Maestro_Move_3:
face_left
step_end

Violet_SproutTower_P2_Encuentro_Maestro_Move_4:
face_player
step_end

VioletViolet_SproutTower_P2_Pegaso::
lock
faceplayer
compare VAR_UNUSED_0x40F7, 124
goto_if_gt VioletViolet_SproutTower_P2_Pegaso_2
msgbox VioletViolet_SproutTower_P2_Pegaso_Texto_1 MSGBOX_NPC
release
end

VioletViolet_SproutTower_P2_Pegaso_2::
msgbox VioletViolet_SproutTower_P2_Pegaso_Texto_2 MSGBOX_NPC
release
end

VioletViolet_SproutTower_P2_Pegaso_Texto_1:
	.string "Who was that person? I've never seen\n"
	.string "anyone defeat my master like that way.\l"
	.string "Their POKÉMON almost brought this\l"
	.string "place down with their sheer size.$"

VioletViolet_SproutTower_P2_Pegaso_Texto_2:
	.string "So… You simply need to reveal your true\n"
	.string "power to those who genuinely deserve\l"
	.string "it… The rest must settle for nothing\l"
	.string "more than a PIDGEOTTO and its\l"
	.string "MUD-SLAP…$"
