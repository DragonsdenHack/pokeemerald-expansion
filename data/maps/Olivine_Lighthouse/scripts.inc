Olivine_Lighthouse_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, Olivine_Lighthouse_OnResume
	.byte 0

Olivine_Lighthouse_OnResume:
	call Olivine_Lighthouse_SetupEscapeWarp
	end

Olivine_Lighthouse_SetupEscapeWarp::
	setescapewarp MAP_OLIVINE_CITY, 41, 33
	return

OliivineLighthouse1::
end



OliivineLighthouse2::
end



OliivineLighthouse3::
end



OliivineLighthouse4::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_4, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_4:
	.string "The CHINCHOU were the first POKÉMON to\n"
	.string "serve as guides to sailors. This\l"
	.string "LIGHTHOUSE was built in their honor.$"



OliivineLighthouse5::
end



OliivineLighthouse6::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_6, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_6:
	.string "NOCTOWL is a common POKÉMON among the\n"
	.string "sailors of JOHTO; it's great sense of\l"
	.string "direction and nocturnal vision are of\l"
	.string "great help to us.$"



OliivineLighthouse7::
end



OliivineLighthouse8::
end



OliivineLighthouse9::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_9, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_9:
	.string "I'd really like to witness the mighty\n"
	.string "POKÉMON that illuminates the\l"
	.string "lighthouse firsthand, but I'm not sure\l"
	.string "how to reach the top…$"



OliivineLighthouse10::
end



OliivineLighthouse11::
lock
msgbox OliivineLighthouse11_Texto_1 MSGBOX_AUTOCLOSE
release
end

OliivineLighthouse11_Texto_1:
.string "…$"



OliivineLighthouse12::
end



OliivineLighthouse13::
lock     
faceplayer     
msgbox OlivineCity_LightHouse_Text_13, MSGBOX_DEFAULT
release     
end

OlivineCity_LightHouse_Text_13:
	.string "The OLIVINE-GOLDENROD sea route is\n"
	.string "full of rocks, making it impassable.\l"
	.string "Otherwise,GOLDENROD would have long\l"
	.string "established a huge port to further\l"
	.string "expand its connections.$"



OliivineLighthouse14::
end



OliivineLighthouse15::
end



OliivineLighthouse16::
end



OliivineLighthouse17::
end



OliivineLighthouse18::
end



OliivineLighthouse19::
end



OliivineLighthouse20::
end



OliivineLighthouse_EventScript_Marinero::
	trainerbattle_single TRAINER_CHANDLER, OliivineLighthouse_Text_MarineroIntro, OliivineLighthouse_Text_MarineroDefeated
	msgbox OliivineLighthouse_Text_MarineroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero::
	trainerbattle_single TRAINER_KALEB, OliivineLighthouse_Text_CaballeroIntro, OliivineLighthouse_Text_CaballeroDefeated
	msgbox OliivineLighthouse_Text_CaballeroPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Chico::
	trainerbattle_single TRAINER_JOSEPH, OliivineLighthouse_Text_ChicoIntro, OliivineLighthouse_Text_ChicoDefeated
	msgbox OliivineLighthouse_Text_ChicoPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Caballero2::
	trainerbattle_single TRAINER_ALYSSA, OliivineLighthouse_Text_Caballero2Intro, OliivineLighthouse_Text_Caballero2Defeated
	msgbox OliivineLighthouse_Text_Caballero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero2::
	trainerbattle_single TRAINER_MARCOS, OliivineLighthouse_Text_Marinero2Intro, OliivineLighthouse_Text_Marinero2Defeated
	msgbox OliivineLighthouse_Text_Marinero2PostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Necio::
	trainerbattle_single TRAINER_RHETT, OliivineLighthouse_Text_NecioIntro, OliivineLighthouse_Text_NecioDefeated
	msgbox OliivineLighthouse_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



OliivineLighthouse_EventScript_Marinero3::
	trainerbattle_single TRAINER_TYRON, OliivineLighthouse_Text_Marinero3Intro, OliivineLighthouse_Text_Marinero3Defeated
	msgbox OliivineLighthouse_Text_Marinero3PostBattle, MSGBOX_AUTOCLOSE
	end

Olivine_Lighthouse_Combate_Farero_Izq::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_1
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_2
waitmovement 0x0
delay 10
msgbox Olivine_Lighthouse_Combate_Farero_Texto_2 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_3
waitmovement 0x0
goto Olivine_Lighthouse_Combate_Farero

Olivine_Lighthouse_Combate_Farero_Der::
lockall
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_1
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_2
waitmovement 0x0
delay 10
msgbox Olivine_Lighthouse_Combate_Farero_Texto_2 MSGBOX_AUTOCLOSE
goto Olivine_Lighthouse_Combate_Farero


Olivine_Lighthouse_Combate_Farero::
delay 20
msgbox Olivine_Lighthouse_Combate_Farero_Texto_3 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_4
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_4 MSGBOX_AUTOCLOSE
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_5
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_5 MSGBOX_AUTOCLOSE
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_6
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_6 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_7 MSGBOX_AUTOCLOSE
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_7
waitmovement 0x0
delay 20
msgbox Olivine_Lighthouse_Combate_Farero_Texto_8 MSGBOX_AUTOCLOSE
delay 20
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_8
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_9 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_9
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_10 MSGBOX_AUTOCLOSE
msgbox Olivine_Lighthouse_Combate_Farero_Texto_11 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_8
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_12 MSGBOX_AUTOCLOSE
delay 10
applymovement OBJ_EVENT_ID_PLAYER, Olivine_Lighthouse_Combate_Farero_Move_1
waitmovement 0x0
delay 10
msgbox Olivine_Lighthouse_Combate_Farero_Texto_13 MSGBOX_AUTOCLOSE
applymovement 18, Olivine_Lighthouse_Combate_Farero_Move_6
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_14 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_FARERO, Olivine_Lighthouse_Combate_Farero_Texto_15
msgbox Olivine_Lighthouse_Combate_Farero_Texto_16 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_SLATEPORT_CITY_HARBOR_ARCHIE
fadescreen 1
delay 20
removeobject 18
removeobject 17
fadescreen 0
delay 10
applymovement 11, Olivine_Lighthouse_Combate_Farero_Move_11
waitmovement 0x0
msgbox Olivine_Lighthouse_Combate_Farero_Texto_17 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_JAGGED_PASS_MAGMA_GUARD
fadescreen 1
delay 20
removeobject 11
fadescreen 0
clearflag FLAG_HIDE_LITTLEROOT_TOWN_MAYS_HOUSE_MAY
setvar VAR_UNUSED_0x40F7, 142
release
end

Olivine_Lighthouse_Combate_Farero_Texto_1:
	.string "????: The expansion of the PORT to\n"
	.string "other regions will be a great success,\l"
	.string "just wait and see.$"

Olivine_Lighthouse_Combate_Farero_Texto_2:
.string "????: Can I help you?$"

Olivine_Lighthouse_Combate_Farero_Texto_3:
	.string "????: Ah, so you want to challenge the\n"
	.string "OLIVINE LEARD. I am the LIGHTHOUSE\l"
	.string "KEEPER.$"

Olivine_Lighthouse_Combate_Farero_Texto_4:
	.string "LIGHTHOUSE KEEPER: The LEADER is\n"
	.string "literally there, we are debating about\l"
	.string "the OLIVINE CITY future, its PORT, its\l"
	.string "LIGHTHOUSE, its GYM…$"

Olivine_Lighthouse_Combate_Farero_Texto_5:
	.string "CROM: Many changes are coming soon,\n"
	.string "let's hope for the best. My old friend\l"
	.string "and I will try to leave this city in the\l"
	.string "best possible condition before we\l"
	.string "depart.$"

Olivine_Lighthouse_Combate_Farero_Texto_6:
	.string "It's been a while since I've accepted\n"
	.string "any challenges officially. I'm sorry,\l"
	.string "kid, but when this transition period is\l"
	.string "over, you can challenge the new LEADER\l"
	.string "I've chosen: JASMINE. If she manages\l"
	.string "to evolve her ONIX at least, that is.$"

Olivine_Lighthouse_Combate_Farero_Texto_7:
	.string "She still has a long way to go, so if\n"
	.string "you're experienced, I'm afraid you won't\l"
	.string "have any trouble defeating her. She's\l"
	.string "still using MAGNEMITE, you know.$"

Olivine_Lighthouse_Combate_Farero_Texto_8:
.string "Although…$"

Olivine_Lighthouse_Combate_Farero_Texto_9:
	.string "I like the idea of a last great battle\n"
	.string "before I leave; it would be the perfect\l"
	.string "culmination of my time in OLIVINE CITY.\l"
	.string "The matter is{PAUSE 15}…{PAUSE 15} Are you ready for that\l"
	.string "ultimate showdown?$"

Olivine_Lighthouse_Combate_Farero_Texto_10:
	.string "LIGHTHOUSE KEEPER: We can verify it\n"
	.string "right here and now.$"

Olivine_Lighthouse_Combate_Farero_Texto_11:
.string "CROM: All right.$"

Olivine_Lighthouse_Combate_Farero_Texto_12:
	.string "My old friend and the current owner of\n"
	.string "this LIGHTHOUSE is the best judge of\l"
	.string "skill around here. This is your only\l"
	.string "opportunity to face me. Seize it now or\l"
	.string "let it slip away forever.$"

Olivine_Lighthouse_Combate_Farero_Texto_13:
.string "Very good, enough talking.$"

Olivine_Lighthouse_Combate_Farero_Texto_14:
	.string "LIGHTHOUSE KEEPER: I'll use all the\n"
	.string "energy of my POKÉMON; it's the least I\l"
	.string "can do if battling CROM is what's at\l"
	.string "stake. Get ready!$"

Olivine_Lighthouse_Combate_Farero_Texto_15:
.string "Did my Ampharos's tail lose its light?$"

Olivine_Lighthouse_Combate_Farero_Texto_16:
	.string "LIGHTHOUSE KEEPER: Excuse me, I must\n"
	.string "go to the POKÉMON CENTER as soon I can,\l"
	.string "I didn't expect that you were able to\l"
	.string "faint all of my POKÉMON, and the last\l"
	.string "thing that we want in this LIGHTHOUSE\l"
	.string "is an AMPHAROS without energy.$"

Olivine_Lighthouse_Combate_Farero_Texto_17:
	.string "CROM: Ha! Magnificent, man,\n"
	.string "magnificent! You have shocked us!\l"
	.string "TRAINERS like you are becoming\l"
	.string "increasingly rare these days; I'll be\l"
	.string "waiting for you at the gym for our\l"
	.string "battle. The die is cast!$"

Olivine_Lighthouse_Combate_Farero_Move_1:
walk_in_place_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_2:
emote_exclamation_mark
face_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_3:
walk_right
walk_up
walk_in_place_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_4:
walk_in_place_right
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_5:
walk_left
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_6:
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_7:
face_up
step_end

Olivine_Lighthouse_Combate_Farero_Move_8:
face_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_9:
face_right
step_end

Olivine_Lighthouse_Combate_Farero_Move_10:
walk_up
walk_in_place_down
step_end

Olivine_Lighthouse_Combate_Farero_Move_11:
walk_left
walk_down
step_end

Olivine_Lighthouse_Ampharosita::
lock
faceplayer
checkitem ITEM_AMPHAROSITE
goto_if_eq VAR_RESULT, FALSE, Olivine_Lighthouse_Ampharosita_2
msgbox Olivine_Lighthouse_Ampharosita_Texto_3 MSGBOX_AUTOCLOSE
release
end

Olivine_Lighthouse_Ampharosita_2::
msgbox Olivine_Lighthouse_Ampharosita_Texto_1 MSGBOX_AUTOCLOSE
playfanfare MUS_RG_OBTAIN_KEY_ITEM
additem ITEM_AMPHAROSITE
msgbox Olivine_Lighthouse_Ampharosita_Texto_2 MSGBOX_DEFAULT
waitfanfare
release
end

Olivine_Lighthouse_Ampharosita_Texto_1:
.string "LIGHTHOUSE KEEPER: Ah!\n"
	.string "{PLAYER}!\l"
	.string "You're back!\l"
	.string "CROM told me about your battle; I can't\l"
	.string "believe you ended up defeating him. You\l"
	.string "have no idea how many times my\l"
	.string "ELECTRIC TYPE POKÉMON have bitten the\l"
	.string "dust against that SKARMORY immune to\l"
	.string "their attacks. You've restored our\l"
	.string "enthusiasm and eagerness to battle\l"
	.string "again, so I want you to accept this.$"

Olivine_Lighthouse_Ampharosita_Texto_2:
.string "You obtained an AMPHAROSITE\n"
	.string "from the LIGHTHOUSE KEEPER!!$"

Olivine_Lighthouse_Ampharosita_Texto_3:
	.string "AMPHAROS is a great POKÉMON, don't you\n"
	.string "think so? One of the few capable of\l"
	.string "hitting hard and enduring powerful hits\l"
	.string "at the same time, although that SPEED\l"
	.string "sometimes harms it…$"



Faro_Voltiocambio::
lock     
faceplayer  
goto_if_set FLAG_NUEVA_807, Faro_Voltiocambio_Despues
msgbox Faro_Voltiocambio_Texto_1, MSGBOX_NPC
playfanfare MUS_OBTAIN_TMHM
additem ITEM_TM78
msgbox Faro_Voltiocambio_Texto_1.1 MSGBOX_DEFAULT
waitfanfare
setflag FLAG_NUEVA_807
release     
end

Faro_Voltiocambio_Despues::
msgbox Faro_Voltiocambio_Texto_2, MSGBOX_NPC
release
end

Faro_Voltiocambio_Texto_1.1:
.string "{PLAYER} obtained the TM78\n"
	.string "VOLT SWITCH from the mechanic!$"

Faro_Voltiocambio_Texto_1:
	.string "I've been working here since the\n"
	.string "LIGHTHOUSE opened, I know perfectly\l"
	.string "well how the electrical connections in\l"
	.string "this place work.$"

Faro_Voltiocambio_Texto_2:
	.string "If you use the CHOICE SPECS, not only\n"
	.string "will you confuse the opponent with the\l"
	.string "switches, and you'll also boost the\l"
	.string "damage dealt. But be careful not to get\l"
	.string "trapped by GROUND TYPE moves or the\l"
	.string "ABILITY VOLT ABSORB!$"
