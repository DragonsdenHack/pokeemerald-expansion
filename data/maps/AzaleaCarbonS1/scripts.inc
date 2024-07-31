AzaleaCarbonS1_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, AzaleaCarbonS1_OnFrame
map_script MAP_SCRIPT_ON_RESUME, AzaleaCarbonS1_OnResume
	.byte 0

AzaleaCarbonS1_OnFrame:
map_script_2 VAR_TEMP_0, 0, AzaleaCarbonS1_Seteo_Metatiles
	.2byte 0

AzaleaCarbonS1_OnResume:
	call AzaleaCarbonS1_SetupEscapeWarp
	end

AzaleaCarbonS1_SetupEscapeWarp::
	setescapewarp MAP_AZALEA_TOWN, 29, 15
	return

AzaleaCarbonS1_2::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_2, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_2:
	.string "Are you new here? Our BOSS is very\n"
	.string "demanding.$"



AzaleaCarbonS1_3::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_3:
	.string "This place once belonged to two elders.\n"
	.string "Traditionally, they were dedicated to\l"
	.string "this. I wonder if we did right in\l"
	.string "dismissing them so lightly. They surely\l"
	.string "had things to contribute.$"

AzaleaCarbonS1_4::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_4, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_4:
	.string "We want new experiences, but soon we\n"
	.string "become indifferent to them.\l"
	.string "Yesterday's wonders are today's common\l"
	.string "occurrences.$"



AzaleaCarbonS1_5::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_5, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_5:
	.string "I don't care about traditional JOHTO.\n"
	.string "Everything, sooner or later, will be\l"
	.string "destroyed by the passage of time. What\l"
	.string "difference does it make whether it\l"
	.string "happens in one year or one hundred?$"



AzaleaCarbonS1_7::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_7, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_7:
	.string "Which THUNDERBOLT is stronger, a\n"
	.string "RAIKOU's or an AMPHAROS's? It's said\l"
	.string "that the owner of the LIGHTHOUSE has\l"
	.string "an AMPHAROS that finishes that debate.$"




AzaleaCarbonS1_8::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_8, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_8:
	.string "Soon, we'll have all the ovens working at\n"
	.string "full firepower! And you won't be able to\l"
	.string "do anything to stop it! Hohoho!$"



AzaleaCarbonS1_13::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_13, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_13:
	.string "It's odd… The old furnace we destroyed\n"
	.string "to rebuild this place and modernize it…\l"
	.string "produced a higher quality CHARCOAL\l"
	.string "than our industrial furnaces. Have we\l"
	.string "ignored something?$"



AzaleaCarbonS1_14::
lock     
faceplayer     
msgbox AzaleaCarbonS1_Text_14, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS1_Text_14:
	.string "I really don't agree with the way this is\n"
	.string "being handled, but the high amount of\l"
	.string "money they're paying me makes it worth\l"
	.string "it.$"



AzaleaCarbonS1_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_106, AzaleaCarbonS1_Text_ObreroIntro, AzaleaCarbonS1_Text_ObreroDefeated
	msgbox AzaleaCarbonS1_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS1_EventScript_Obrero2::
	trainerbattle_single TRAINER_TRAINER_107, AzaleaCarbonS1_Text_Obrero2Intro, AzaleaCarbonS1_Text_Obrero2Defeated
	msgbox AzaleaCarbonS1_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end

AzaleaCarbonS1_EventScript_ReceiveHelioptile::
    lock
    faceplayer
	checkmoncatch SPECIES_HELIOPTILE
	goto_if_eq VAR_RESULT, FALSE, AzaleaCarbonS1_EventScript_TakeHelioptile 
	msgbox AzaleaCarbonS1_Text_6, MSGBOX_DEFAULT
	release
	end



AzaleaCarbonS1_EventScript_TakeHelioptile::
    msgbox AzaleaCarbonS1_Text_TakeHelioptile MSGBOX_DEFAULT
    playfanfare MUS_OBTAIN_TMHM
	msgbox AzaleaCarbonS1_Text_MensajeHelioptile, MSGBOX_DEFAULT
	givemon SPECIES_HELIOPTILE, 15, ITEM_ELECTRIC_GEM
	waitfanfare  
	release
	end 



AzaleaCarbonS1_Text_TakeHelioptile:
	.string "I come from a distant region; JOHTO\n"
	.string "keeps hiring foreign specialists in all\l"
	.string "fields. Look, I'll give you this POKÉMON\l"
	.string "as proof.$"

AzaleaCarbonS1_Text_MensajeHelioptile:
.string "YOU OBTAINED A HELIOPTILE AT LV.15!$"

AzaleaCarbonS1_Text_6:
	.string "HELIOPTILE is one of my favorite work\n"
	.string "assistants, but it's impossible to find\l"
	.string "one here. I guess that's the variety\l"
	.string "the ones who hired me are looking for.$"

AzaleaCarbonS1_Primer_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 3
goto_if_gt AzaleaCarbonS1_Primer_Combate_2
delay 10
playse SE_PIN
delay 10
applymovement 18, AzaleaCarbonS1_Primer_Combate_Move_1
msgbox AzaleaCarbonS1_Primer_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 30
msgbox AzaleaCarbonS1_Primer_Combate_Texto_2 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS1_Primer_Combate_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_108, AzaleaCarbonS1_Primer_Combate_Texto_4 
msgbox AzaleaCarbonS1_Primer_Combate_Texto_5 MSGBOX_AUTOCLOSE
applymovement 18, AzaleaCarbonS1_Primer_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 29, 49, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 14, 36, 0x29B, FALSE
setmetatile 14, 35, 0x29B, FALSE
special DrawWholeMapView
delay 20
applymovement 18, AzaleaCarbonS1_Primer_Combate_Move_3
waitmovement 0x0
msgbox AzaleaCarbonS1_Primer_Combate_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 4
release
end

AzaleaCarbonS1_Primer_Combate_2::
msgbox AzaleaCarbonS1_Primer_Combate_Texto_5 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS1_Primer_Combate_Move_1:
emote_exclamation_mark
step_end

AzaleaCarbonS1_Primer_Combate_Move_2:
face_up
step_end

AzaleaCarbonS1_Primer_Combate_Move_3:
face_player
step_end

AzaleaCarbonS1_Primer_Combate_Texto_1:
.string "Who is…?$"

AzaleaCarbonS1_Primer_Combate_Texto_2:
	.string "You do realize you're on private\n"
	.string "property, right?$"

AzaleaCarbonS1_Primer_Combate_Texto_3:
	.string "I'll kick you out of here immediately,\n"
	.string "just like we do with WILD POKÉMON!$"

AzaleaCarbonS1_Primer_Combate_Texto_4:
.string "Where do you come from?$"

AzaleaCarbonS1_Primer_Combate_Texto_5:
	.string "We won't abandon this place. Its\n"
	.string "location is ideal, as we've all the\l"
	.string "required raw materials here.$"

AzaleaCarbonS1_Primer_Combate_Texto_6:
	.string "I just disabled the wall that prevents\n"
	.string "further progress to the north. Our boss\l"
	.string "likes proactive people like you; maybe\l"
	.string "if you reach him, you'll change your mind\l"
	.string "about this place.$"

AzaleaCarbonS1_Segundo_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 4
goto_if_gt AzaleaCarbonS1_Segundo_Combate_2
delay 10
playse SE_PIN
delay 10
applymovement 17, AzaleaCarbonS1_Primer_Combate_Move_1
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 17, AzaleaCarbonS1_Primer_Combate_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_2 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_3 MSGBOX_AUTOCLOSE
delay 15
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_4 MSGBOX_AUTOCLOSE
delay 15
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_109, AzaleaCarbonS1_Segundo_Combate_Texto_6
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_7 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_8 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_8.1 MSGBOX_AUTOCLOSE
applymovement 17, AzaleaCarbonS1_Primer_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 28, 17, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 24, 8, 0x29B, FALSE
setmetatile 24, 7, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_FORTREE_CITY_STATE, 5
release
end

AzaleaCarbonS1_Segundo_Combate_2::
msgbox AzaleaCarbonS1_Segundo_Combate_Texto_9 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS1_Segundo_Combate_Texto_8.1:
	.string "And that's why I've no problem\n"
	.string "opening up the doors for you.$"

AzaleaCarbonS1_Segundo_Combate_Texto_1:
	.string "Where do you come from? We already have\n"
	.string "enough lawyers and representatives;\l"
	.string "this case is already tied up enough to…$"

AzaleaCarbonS1_Segundo_Combate_Texto_2:
	.string "Are you coming in representation of the\n"
	.string "former owners? Why would someone like\l"
	.string "you help them?$"

AzaleaCarbonS1_Segundo_Combate_Texto_3:
	.string "Not that it matters. You can't do a\n"
	.string "thing. This place is legally ours.$"

AzaleaCarbonS1_Segundo_Combate_Texto_4:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

AzaleaCarbonS1_Segundo_Combate_Texto_5:
	.string "So you refuse. Let me tell you\n"
	.string "something: even if you wanted to take\l"
	.string "justice into your own hands, you won't\l"
	.string "be able to. I highly doubt that your\l"
	.string "purchased POKÉMON are of the same\l"
	.string "quality as mine!$"

AzaleaCarbonS1_Segundo_Combate_Texto_6:
	.string "Those POKÉMON! I hadn't seen them on\n"
	.string "the black market!$"

AzaleaCarbonS1_Segundo_Combate_Texto_7:
	.string "Huh? What'd you say? Don't make me\n"
	.string "laugh! Nowadays, no one ever bothers\l"
	.string "training their team on their own. It's\l"
	.string "just wasteful tedium.$"

AzaleaCarbonS1_Segundo_Combate_Texto_8:
	.string "But it doesn't matter where you got\n"
	.string "them. Not even with all the LEGENDARIES\l"
	.string "of the world could you wrest away our\l"
	.string "ownership of this factory.$"

AzaleaCarbonS1_Segundo_Combate_Texto_9:
	.string "The most you can aspire to is reaching\n"
	.string "an agreement, if my BOSS considers it\l"
	.string "appropriate.$"


AzaleaCarbonS1_Seteo_Metatiles::
lock
compare VAR_FORTREE_CITY_STATE, 4
goto_if_gt AzaleaCarbonS1_Seteo_Metatiles_3
compare VAR_FORTREE_CITY_STATE, 3
goto_if_gt AzaleaCarbonS1_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS1_Seteo_Metatiles_2::
setmetatile 14, 36, 0x29B, FALSE
setmetatile 14, 35, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS1_Seteo_Metatiles_3::
setmetatile 24, 8, 0x29B, FALSE
setmetatile 24, 7, 0x29B, FALSE
setmetatile 14, 36, 0x29B, FALSE
setmetatile 14, 35, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

