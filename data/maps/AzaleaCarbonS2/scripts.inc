AzaleaCarbonS2_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, AzaleaCarbonS2_OnFrame
	.byte 0

AzaleaCarbonS2_OnFrame:
map_script_2 VAR_TEMP_0, 0, AzaleaCarbonS2_Seteo_Metatiles
	.2byte 0

AzaleaCarbonS2_3::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_3, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_3:
	.string "We've got railways now, sea\n"
	.string "connections, and global expansion. Why\l"
	.string "would this be any different?$"




AzaleaCarbonS2_5::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_5, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_5:
	.string "Everything is ready; once the machines\n"
	.string "start working, we'll be billing an\l"
	.string "immense amount. There's a lot of demand.$"





AzaleaCarbonS2_9::
lock     
faceplayer     
msgbox AzaleaCarbonS2_Text_9, MSGBOX_DEFAULT
release     
end

AzaleaCarbonS2_Text_9:
	.string "We have completely restored the small\n"
	.string "basement where they used to make\l"
	.string "CHARCOAL. The investment has been\l"
	.string "significant, but this place now looks\l"
	.string "like a real workplace, don't you think?$"



AzaleaCarbonS2_EventScript_Obrero::
	trainerbattle_single TRAINER_TRAINER_110, AzaleaCarbonS2_Text_ObreroIntro, AzaleaCarbonS2_Text_ObreroDefeated
	msgbox AzaleaCarbonS2_Text_ObreroPostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS2_EventScript_Obrero2::
	trainerbattle_single TRAINER_TRAINER_111, AzaleaCarbonS2_Text_Obrero2Intro, AzaleaCarbonS2_Text_Obrero2Defeated
	msgbox AzaleaCarbonS2_Text_Obrero2PostBattle, MSGBOX_AUTOCLOSE
	end



AzaleaCarbonS2_EventScript_Obrero3::
	trainerbattle_single TRAINER_TRAINER_112, AzaleaCarbonS2_Text_Obrero3Intro, AzaleaCarbonS2_Text_Obrero3Defeated
	msgbox AzaleaCarbonS2_Text_Obrero3PostBattle, MSGBOX_AUTOCLOSE
	end

AzaleaCarbonS2_Primer_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 5
goto_if_gt AzaleaCarbonS2_Primer_Combate_2
msgbox AzaleaCarbonS2_Primer_Combate_Texto_1 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Primer_Combate_Texto_2 MSGBOX_AUTOCLOSE
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS2_Primer_Combate_Texto_3 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_113, AzaleaCarbonS2_Primer_Combate_Texto_4
msgbox AzaleaCarbonS2_Primer_Combate_Texto_5 MSGBOX_AUTOCLOSE
applymovement 10, AzaleaCarbonS1_Primer_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 13, 24, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 15, 16, 0x29B, FALSE
setmetatile 15, 15, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_FORTREE_CITY_STATE, 6
release
end

AzaleaCarbonS2_Primer_Combate_2::
msgbox AzaleaCarbonS2_Primer_Combate_Texto_6 MSGBOX_AUTOCLOSE
release
end


AzaleaCarbonS2_Primer_Combate_Texto_1:
.string "Stop just right there.$"

AzaleaCarbonS2_Primer_Combate_Texto_2:
	.string "This business is too profitable to be\n"
	.string "ruined by sentimentality.$"

AzaleaCarbonS2_Primer_Combate_Texto_3:
	.string "No matter who you are, anyway there is\n"
	.string "no possible way for you to win. Neither\l"
	.string "legally nor force!$"

AzaleaCarbonS2_Primer_Combate_Texto_4:
.string "Oh… By the force it seems so…$"

AzaleaCarbonS2_Primer_Combate_Texto_5:
	.string "Huh, it doesn't matter, keep walking\n"
	.string "around here, is the only thing that you\l"
	.string "can do…$"

AzaleaCarbonS2_Primer_Combate_Texto_6:
	.string "The only thing you can do is to lurk\n"
	.string "around here, take it as a touristic\l"
	.string "route if you prefer.$"

AzaleaCarbonS2_Segundo_Combate::
lock
faceplayer
compare VAR_FORTREE_CITY_STATE, 6
goto_if_gt AzaleaCarbonS2_Segundo_Combate_2
playse MUS_RG_ENCOUNTER_ROCKET
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_1 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_114, AzaleaCarbonS2_Segundo_Combate_Texto_2
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_3 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, AzaleaCarbonS2_Segundo_Combate_Move_2
waitmovement 0x0
delay 20
playse SE_PC_ON
setmetatile 16, 3, 0x63, TRUE
delay 20
playse SE_PC_LOGIN
delay 20
playse SE_UNLOCK
setmetatile 34, 12, 0x29B, FALSE
setmetatile 34, 11, 0x29B, FALSE
setmetatile 35, 12, 0x29F, FALSE
setmetatile 35, 11, 0x29F, FALSE
special DrawWholeMapView
delay 20
applymovement 11, AzaleaCarbonS2_Segundo_Combate_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_5 MSGBOX_AUTOCLOSE
setvar VAR_FORTREE_CITY_STATE, 7
release
end

AzaleaCarbonS2_Segundo_Combate_2::
msgbox AzaleaCarbonS2_Segundo_Combate_Texto_4 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS2_Segundo_Combate_Move_2:
face_up
step_end

AzaleaCarbonS2_Segundo_Combate_Move_1:
face_player
step_end

AzaleaCarbonS2_Segundo_Combate_Texto_5:
	.string "If you want to see my BOSS, go ahead.\n"
	.string "You are inoffensive to us.$"

AzaleaCarbonS2_Segundo_Combate_Texto_1:
	.string "Even if you manage to defeat us all, we\n"
	.string "won't be leaving this place. You're\l"
	.string "aware of that, aren't you? It's the\l"
	.string "advantage of civilized societies, as it\l"
	.string "is in JOHTO now.$"

AzaleaCarbonS2_Segundo_Combate_Texto_2:
	.string "Hah! Your victory is purposeless!$"

AzaleaCarbonS2_Segundo_Combate_Texto_3:
	.string "Fortunately for us, the times when any\n"
	.string "TRAINER could get anything with a\l"
	.string "stronger team are over. That stupid\l"
	.string "moral code has no value here anymore.$"

AzaleaCarbonS2_Segundo_Combate_Texto_4:
	.string "People like you, or those elders, are\n"
	.string "condemned to extinction.$"

AzaleaCarbonS2_Combate_Final_Izq::
lock
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_2
waitmovement 0x0
goto AzaleaCarbonS2_Combate_Final

AzaleaCarbonS2_Combate_Final_Der::
lock
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_1
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, AzaleaCarbonS2_Combate_Final_Move_3
waitmovement 0x0
goto AzaleaCarbonS2_Combate_Final

AzaleaCarbonS2_Combate_Final::
msgbox AzaleaCarbonS2_Combate_Final_Texto_2 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Combate_Final_Texto_3 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_4
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_4 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_5
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_5 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Segundo_Combate_Move_2
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_6 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Combate_Final_Texto_7 MSGBOX_AUTOCLOSE
delay 20
applymovement 1, AzaleaCarbonS2_Segundo_Combate_Move_6
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_8 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_4
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_9 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_5
waitmovement 0x0
playse MUS_RG_ENCOUNTER_GYM_LEADER
msgbox AzaleaCarbonS2_Combate_Final_Texto_10 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_7
waitmovement 0x0
trainerbattle_no_intro TRAINER_TRAINER_115, AzaleaCarbonS2_Combate_Final_Texto_11
msgbox AzaleaCarbonS2_Combate_Final_Texto_12 MSGBOX_AUTOCLOSE
delay 20
msgbox AzaleaCarbonS2_Combate_Final_Texto_13 MSGBOX_AUTOCLOSE
delay 20
playse SE_BREAKABLE_DOOR
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_8
waitmovement 0x0
delay 5
msgbox AzaleaCarbonS2_Combate_Final_Texto_14 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Segundo_Combate_Move_2
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_15 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_4
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_16 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_5
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_17 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Combate_Final_Texto_18 MSGBOX_AUTOCLOSE
applymovement 1, AzaleaCarbonS2_Combate_Final_Move_7
waitmovement 0x0
msgbox AzaleaCarbonS2_Combate_Final_Texto_19 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Combate_Final_Texto_20 MSGBOX_AUTOCLOSE
msgbox AzaleaCarbonS2_Combate_Final_Texto_21 MSGBOX_AUTOCLOSE
playfanfare MUS_OBTAIN_TMHM
msgbox AzaleaCarbonS2_Combate_Final_Texto_22 MSGBOX_DEFAULT
givemon SPECIES_LITTEN, 15, ITEM_NONE
waitfanfare
setflag FLAG_UNUSED_0x27A
clearflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_SUBMARINE_SHADOW
setvar VAR_FORTREE_CITY_STATE, 8
release
end

AzaleaCarbonS2_Jefe_Despues_Combate::
lock
faceplayer
msgbox AzaleaCarbonS2_Jefe_Despues_Combate_Texto_1 MSGBOX_AUTOCLOSE
release
end

AzaleaCarbonS2_Jefe_Despues_Combate_Texto_1:
	.string "Do you believe that those elders will\n"
	.string "forget this and let me see that so\l"
	.string "special POKÉMON?$"


AzaleaCarbonS2_Combate_Final_Move_8:
lock_facing_direction
walk_up
walk_up
unlock_facing_direction
step_end

AzaleaCarbonS2_Combate_Final_Move_7:
walk_slow_down
walk_slow_down
step_end

AzaleaCarbonS2_Segundo_Combate_Move_6:
face_down
step_end

AzaleaCarbonS2_Combate_Final_Move_4:
face_right
step_end

AzaleaCarbonS2_Combate_Final_Move_5:
walk_in_place_down
step_end

AzaleaCarbonS2_Combate_Final_Move_1:
walk_in_place_up
step_end

AzaleaCarbonS2_Combate_Final_Move_2:
walk_right
walk_up
step_end

AzaleaCarbonS2_Combate_Final_Move_3:
walk_up
step_end

AzaleaCarbonS2_Combate_Final_Texto_1:
	.string "Despite all the security, you've\n"
	.string "somehow made it to this point.$"

AzaleaCarbonS2_Combate_Final_Texto_2:
	.string "Hey, have you visited the FUEGO\n"
	.string "IRONWORKS?$"

AzaleaCarbonS2_Combate_Final_Texto_3:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

AzaleaCarbonS2_Combate_Final_Texto_4:
	.string "In the distant region of SINNOH, that\n"
	.string "place has been tasked with\l"
	.string "transforming materials into vital\l"
	.string "resources for the region for decades.$"

AzaleaCarbonS2_Combate_Final_Texto_5:
	.string "What sets us apart from them? Is it\n"
	.string "driving out the former owners from\l"
	.string "here? Unable to make the most of all\l"
	.string "natural resources surrounding AZALEA\l"
	.string "TOWN?$"

AzaleaCarbonS2_Combate_Final_Texto_6:
	.string "With them in charge, the CHARCOAL would\n"
	.string "be limited only to the surroundings.\l"
	.string "What's with MAHOGANY TOWN or\l"
	.string "BLACKTHORN CITY? Isn't that selfish\l"
	.string "too?$"

AzaleaCarbonS2_Combate_Final_Texto_7:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

AzaleaCarbonS2_Combate_Final_Texto_8:
	.string "You are still trying to defend them, I\n"
	.string "understand, for you morals are more\l"
	.string "important than business.$"

AzaleaCarbonS2_Combate_Final_Texto_9:
	.string "Don't think that I've taken this\n"
	.string "profession lightly just for the\l"
	.string "economic opportunity. I've personally\l"
	.string "made sure to gather the best to carry\l"
	.string "it out.$"

AzaleaCarbonS2_Combate_Final_Texto_10:
.string "Now I'll show you!$"

AzaleaCarbonS2_Combate_Final_Texto_11:
	.string "No street TRAINER could beat me in a\n"
	.string "duel… Who are you?$"

AzaleaCarbonS2_Combate_Final_Texto_12:
	.string "One moment{PAUSE 25}…{PAUSE 25} You're more than just a high\n"
	.string "ranking official from GOLDENROD, with\l"
	.string "POKÉMON acquired from the checkbook,\l"
	.string "aren't you?$"

AzaleaCarbonS2_Combate_Final_Texto_13:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

AzaleaCarbonS2_Combate_Final_Texto_14:
	.string "The TEAM ROCKET!? The highest ranking\n"
	.string "ADMIN. CHIEF and LEADER in JOHTO!?$"

AzaleaCarbonS2_Combate_Final_Texto_15:
.string "Oh, I didn't know that…$"

AzaleaCarbonS2_Combate_Final_Texto_16:
	.string "Whatever, not even your organization\n"
	.string "would be able to undo the contract.$"

AzaleaCarbonS2_Combate_Final_Texto_17:
	.string "But{PAUSE 15}…{PAUSE 15} I'm not stupid, being your enemy\n"
	.string "would eventually destroy this place,\l"
	.string "that's why I propose an agreement.$"

AzaleaCarbonS2_Combate_Final_Texto_18:
	.string "We'll keep working here, but we'll allow\n"
	.string "the elders to resume the CHARCOAL\l"
	.string "production. This way, we'll integrate the\l"
	.string "old with the new.$"

AzaleaCarbonS2_Combate_Final_Texto_19:
	.string "I admit I was somewhat arrogant. I\n"
	.string "thought our methods were infallible,\l"
	.string "but it's true that those elders could\l"
	.string "provide us with certain techniques\l"
	.string "that we are unaware of.$"

AzaleaCarbonS2_Combate_Final_Texto_20:
	.string "And it's not just to try to look good, my\n"
	.string "SIRFETCHD felt the presence of a\l"
	.string "POKÉMON{PAUSE 15}…{PAUSE 15} It must be its counterpart…\l"
	.string "Maybe it can even cut wood better.$"

AzaleaCarbonS2_Combate_Final_Texto_21:
	.string "I personally will send messengers, the\n"
	.string "elders will be able to live here again.\l"
	.string "Take this POKÉMON as a gesture of good\l"
	.string "faith.$"

AzaleaCarbonS2_Combate_Final_Texto_22:
.string "YOU OBTAINED A LV.15 LITTEN!$"


AzaleaCarbonS2_Seteo_Metatiles::
compare VAR_FORTREE_CITY_STATE, 6
goto_if_gt AzaleaCarbonS2_Seteo_Metatiles_3
compare VAR_FORTREE_CITY_STATE, 5
goto_if_gt AzaleaCarbonS2_Seteo_Metatiles_2
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS2_Seteo_Metatiles_2::
setmetatile 15, 16, 0x29B, FALSE
setmetatile 15, 15, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end

AzaleaCarbonS2_Seteo_Metatiles_3::
setmetatile 34, 12, 0x29B, FALSE
setmetatile 34, 11, 0x29B, FALSE
setmetatile 35, 12, 0x29F, FALSE
setmetatile 35, 11, 0x29F, FALSE
setmetatile 15, 16, 0x29B, FALSE
setmetatile 15, 15, 0x29B, FALSE
special DrawWholeMapView
setvar VAR_TEMP_0, 1
release
end
