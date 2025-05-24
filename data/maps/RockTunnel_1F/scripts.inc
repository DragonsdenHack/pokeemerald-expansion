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
	.string "Die Seltenheit von KANGAMA ist auf\n"
	.string "einem Level mit den DOM- und\l"
	.string "HELIXFOSSILIEN, DRATINI oder sogar\l"
	.string "dem ausgestorbenen AERODACTYL.\p"
	.string "In der SAFARI-ZONE gibt es so wenige\n"
	.string "von ihnen, dass es nahezu unmöglich\l"
	.string "ist, eines zu fangen. Ein wahrer\l"
	.string "POKÉMANIAC kann und darf sich diese\l"
	.string "Chance nicht entgehen lassen!$"



RockTunnel1F_6::
lock     
faceplayer     
msgbox RockTunnel1F_Text_6, MSGBOX_DEFAULT
release     
end

RockTunnel1F_Text_6:
	.string "Dieses KANGAMA wird uns gehören! Kein\n"
	.string "ASS-TRAINER wird mit unserer Coolness\l"
	.string "mithalten können, nachdem wir diese\l"
	.string "Rarität gefangen haben.$"



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
.string "FELSTUNNEL\n"
	.string "AZURIA CITY - LAVANDIA$"

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
setflag FLAG_HOENN_295
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
	.string "Wir suchen hier schon eine Ewigkeit und\n"
	.string "haben immer noch nicht die geringste\l"
	.string "Ahnung, wo dieses KANGAMA steckt!\p"
	.string "Scheint so, als wären die Gerüchte nur\n"
	.string "leere Luft und als ob das noch nicht\l"
	.string "beschissen genug ist, ist auch noch\l"
	.string "TEAM ROCKET hier aufgetaucht! Ist das\l"
	.string "bescheuert! Guck mal. Ich will dich\l"
	.string "nicht beleidigen oder so, aber ihr seid\l"
	.string "wirklich miese TRAINER, die nur ZUBAT\l"
	.string "und RATTFRATZ benutzen.\p"
	.string "Du weißt doch selbst, dass du mit denen\n"
	.string "keine Chance gegen mich hast.$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_2:
.string "{PAUSE 20}…{PAUSE 20} …{PAUSE 20}$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_3:
	.string "Du? Mich besiegen?\p"
	.string "Wie süß!\p"
	.string "Du hast keine Peilung, welchen Ruf wir\n"
	.string "ASS-TRAINER haben, oder? Wir sind die\l"
	.string "Elite unter den TRAINERN! Verglichen\l"
	.string "mit uns sind alle hier nur Amateure!$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_4:
	.string "Jetzt reicht's! Ich zeig dir, wie\n"
	.string "ein richtiger TRAINER kämpft!$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_5:
	.string "Habe ich gerade wirklich gegen einen\n"
	.string "ROCKET verloren?$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_6:
	.string "Wie peinlich! Unser Ruf als Elite unter\n"
	.string "den TRAINERN wäre ruiniert, wenn jemand\l"
	.string "erfährt, dass ein ROCKET wie du mich\l"
	.string "besiegt hast! Ich habe sowieso die\l"
	.string "Schnauze voll von der Höhle! Hier gibt\l"
	.string "es nichts! Ich rufe meinen Partner und\l"
	.string "dann verschwinden wir von hier.\p"
	.string "Angeblich wurde ein PINSIR im\n"
	.string "VERTANIA-WALD gesichtet.$"

RockTunnel_1F_Combate_Entrenadora_Guay_Move_1:
emote_exclamation_mark
step_end
