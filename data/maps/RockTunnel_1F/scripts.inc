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
.string "La rareza de KANGASKHAN está a la\n"
.string "altura de los FÓSILES DOMO y\l"
.string "HELIX, DRATINI o el extinto\l"
.string "AERODACTYL, los de la ZONA SAFARI\l"
.string "producen tan pocos que atrapar uno\l"
.string "allí es casi imposible, ¡un\l"
.string "POKEMANÍACO que se precie no puede\l"
.string "dejar pasar esta oportunidad!$"



RockTunnel1F_6::
lock     
faceplayer     
msgbox RockTunnel1F_Text_6, MSGBOX_DEFAULT
release     
end

RockTunnel1F_Text_6:
.string "Ese KANGASKHAN va a ser nuestro,\n"
.string "ningún ENTRENADOR GUAY será tan\l"
.string "guay como nosotros después de\l"
.string "atrapar a esa rareza.$"



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
.string "TÚNEL ROCA:\n"
	.string "CIUDAD CELESTE - PUEBLO LAVANDA$"

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
.string "Llevamos ya un buen rato buscando\n"
	.string "y ni rastro del KANGASKHAN, parece\l"
	.string "que los rumores eran falsos, y\l"
	.string "para colmo aparece el TEAM ROCKET,\l"
	.string "¡lo que faltaba!\l"
	.string "Mira, no es por desprestigiarte,\l"
	.string "pero sois pésimos ENTRENADORES,\l"
	.string "solo sabéis usar ZUBATS y\l"
	.string "RATATTAS, contigo no tendría ni\l"
	.string "para empezar.$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_2:
.string "… …$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_3:
.string "¿Ganarme tú a mi?\n"
	.string "¡No me hagas reir!\l"
	.string "¿No conoces la reputación de los\l"
	.string "ENTRENADORES GUAYS?\l"
	.string "¡Somos los más sofisticados de\l"
	.string "entre todos los ENTRENADORES,\l"
	.string "todos los que están en este túnel\l"
	.string "no nos llegan ni a la suela del\l"
	.string "zapato!$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_4:
.string "Has agotado mi paciencia, ¡voy a\n"
	.string "mostrarte cómo combate una\l"
	.string "ENTRENADORA de verdad!$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_5:
.string "¿De verdad me acaba de dar una\n"
	.string "lección un ROCKET?$"

RockTunnel_1F_Combate_Entrenadora_Guay_Texto_6:
.string "Esto ya roza lo ridículo, nuestra\n"
	.string "reputación como ENTRENADORES se\l"
	.string "vendría abajo si alguien se\l"
	.string "enterara de que fui derrotada por\l"
	.string "un ROCKET, estoy harta de esta\l"
	.string "cueva, aquí no hay nada, voy a\l"
	.string "llamar a mi compañero y largarnos\l"
	.string "de aquí, total, dicen que hay un\l"
	.string "PINSIR en el BOSQUE VERDE.$"

RockTunnel_1F_Combate_Entrenadora_Guay_Move_1:
emote_exclamation_mark
step_end
