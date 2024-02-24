RockTunnel_1F_MapScripts::
map_script MAP_SCRIPT_ON_RESUME, RockTunnel_1F_OnResume
	.byte 0

RockTunnel_1F_OnResume:
	call RockTunnel_1F_SetupEscapeWarp
	end

RockTunnel_1F_SetupEscapeWarp::
	setescapewarp MAP_ROCK_TUNNEL_1F, 18, 37
	return

RockTunnel1F_1::
end



RockTunnel1F_2::
end



RockTunnel1F_3::
end



RockTunnel1F_4::
end



RockTunnel1F_5::
lock     
faceplayer     
msgbox RockTunnel1F_Text_5, MSGBOX_DEFAULT
release     
end

RockTunnel1F_Text_5:
	.string "The KANGASKHAN rarity is on par with\n"
	.string "DOME and HELIX FOSSILS, DRATINI or the\l"
	.string "extinct AERODACTYL, the ones in the\l"
	.string "SAFARI ZONE are so scarce that\l"
	.string "catching one there is nearly impossible,\l"
	.string "a true POKÉMANIAC cannot miss this\l"
	.string "opportunity!$"



RockTunnel1F_6::
lock     
faceplayer     
msgbox RockTunnel1F_Text_6, MSGBOX_DEFAULT
release     
end

RockTunnel1F_Text_6:
	.string "That KANGASKHAN will be our, any COOL\n"
	.string "TRAINER won't be as cool as we will be\l"
	.string "after we catch that oddity.$"



RockTunnel1F_7::
end



RockTunnel1F_8::
end



RockTunnel1F_9::
end



RockTunnel1F_10::
end



RockTunnel1F_11::
end



RockTunnel1F_12::
end



RockTunnel1F_13::
end



RockTunnel1F_EventScript_Hiker::
	trainerbattle_single TRAINER_SHAWN, RockTunnel1F_Text_HikerIntro, RockTunnel1F_Text_HikerDefeated
	msgbox RockTunnel1F_Text_HikerPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Hiker2::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_8, RockTunnel1F_Text_Hiker2Intro, RockTunnel1F_Text_Hiker2Defeated
	msgbox RockTunnel1F_Text_Hiker2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Hiker3::
	trainerbattle_single TRAINER_FERNANDO_1, RockTunnel1F_Text_Hiker3Intro, RockTunnel1F_Text_Hiker3Defeated
	msgbox RockTunnel1F_Text_Hiker3PostBattle, MSGBOX_AUTOCLOSE
	end


RockTunnel1F_EventScript_Chica::
	trainerbattle_single TRAINER_CEDRIC, RockTunnel1F_Text_ChicaIntro, RockTunnel1F_Text_ChicaDefeated
	msgbox RockTunnel1F_Text_ChicaPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Necio::
	trainerbattle_single TRAINER_GILBERT, RockTunnel1F_Text_NecioIntro, RockTunnel1F_Text_NecioDefeated
	msgbox RockTunnel1F_Text_NecioPostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Chica2::
	trainerbattle_single TRAINER_IRENE, RockTunnel1F_Text_Chica2Intro, RockTunnel1F_Text_Chica2Defeated
	msgbox RockTunnel1F_Text_Chica2PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1F_EventScript_Chica3::
	trainerbattle_single TRAINER_DIANA_2, RockTunnel1F_Text_Chica3Intro, RockTunnel1F_Text_Chica3Defeated
	msgbox RockTunnel1F_Text_Chica3PostBattle, MSGBOX_AUTOCLOSE
	end



RockTunnel1FDocumento_100::
msgbox RockTunnel1FDocumento_Text_100, MSGBOX_SIGN   
end

RockTunnel1FDocumento_Text_100:
.string "ROCK TUNNEL:\n"
	.string "CERULEAN CITY - LAVENDER TOWN$"

RockTunnel_1F_Escena_3::
applymovement OBJ_EVENT_ID_PLAYER, RockTunnel_1F_Escena_3_Move_1
setvar VAR_UNUSED_0x40F7, 40
warpsilent MAP_SAFARI_ZONE_1F, 30, 23
waitmovement 0x0
release
end

RockTunnel_1F_Escena_3_Move_1:
walk_in_place_up
step_end

RockTunnel_1F_Combate_Entrenadora_Guay::
lockall
faceplayer
msgbox RockTunnel_1F_Combate_Entrenadora_Guay_Texto_1 MSGBOX_NPC
delay 10
msgbox RockTunnel_1F_Combate_Entrenadora_Guay_Texto_2 MSGBOX_NPC
delay 10
playse SE_PIN
applymovement 12, RockTunnel_1F_Combate_Entrenadora_Guay_Move_1
waitmovement 0x0
msgbox RockTunnel_1F_Combate_Entrenadora_Guay_Texto_3 MSGBOX_NPC
msgbox RockTunnel_1F_Combate_Entrenadora_Guay_Texto_2 MSGBOX_NPC
msgbox RockTunnel_1F_Combate_Entrenadora_Guay_Texto_4 MSGBOX_NPC
trainerbattle_no_intro TRAINER_VERO, RockTunnel_1F_Combate_Entrenadora_Guay_Texto_5
msgbox RockTunnel_1F_Combate_Entrenadora_Guay_Texto_6 MSGBOX_NPC
setflag FLAG_HIDE_MOSSDEEP_CITY_SPACE_CENTER_1F_STEVEN
clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY
clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
fadescreen 1
delay 20
removeobject 12
fadescreen 0
setvar VAR_UNUSED_0x40F7, 42
release
end

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_1:
	.string "We had been searching for a while and\n"
	.string "not even a hint about that KANGASKHAN,\l"
	.string "seems like the rumors were false, and to\l"
	.string "make it worse, TEAM ROCKET appeared,\l"
	.string "what a nuisance! Look, I don't wanna\l"
	.string "offend you but you are dreadful\l"
	.string "TRAINERS, you just use simple ZUBATS\l"
	.string "and RATTATAS, you don't even have a\l"
	.string "chance against me.$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_3:
	.string "You defeating me? Now thats funny!\n"
	.string "Don't you know the COOL TRAINERS\l"
	.string "reputation? We are the most\l"
	.string "sophisticated kind of TRAINER,\l"
	.string "everyone that is here at this tunnel is\l"
	.string "not even worth mentioning compared to\l"
	.string "us!$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_4:
	.string "You just got me mad, I will show you how\n"
	.string "a real TRAINER battles!$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_5:
	.string "Did a ROCKET teached me a lesson for\n"
	.string "real?$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_6:
	.string "This is ridiculous, our reputation as\n"
	.string "TRAINERS would fall down if someone\l"
	.string "knew that a ROCKET like you defeated\l"
	.string "me, I am so tired of this cave, it is\l"
	.string "empty, I will call my partner and we are\l"
	.string "heading out of here, anyways, there is a\l"
	.string "rumor that a PINSIR is on VIRIDIAN\l"
	.string "FOREST.$"

RockTunnel_1F_Combate_Entrenadora_Guay_Move_1:
emote_exclamation_mark
step_end
