TwoIsland_PokemonCenter_1F_MapScripts::
map_script MAP_SCRIPT_ON_TRANSITION, TwoIsland_PokemonCenter_1F_OnTransition
	.byte 0

TwoIsland_PokemonCenter_1F_OnTransition:
	setrespawn HEAL_LOCATION_FIVE_ISLAND
	end

TwoIsland_PokemonCenter_1F_EventScript_Nurse::
    setvar VAR_0x800B, 1
    call Common_EventScript_PkmnCenterNurse
    waitmessage
    waitbuttonpress
    release
    end

TwoIslandPokemonCenter_1::
end



TwoIslandPokemonCenter_2::
lock     
faceplayer     
msgbox TwoIsland_PokemonCenter_Text_2, MSGBOX_DEFAULT
release     
end

TwoIsland_PokemonCenter_Text_2:
	.string "Do you want to catch all the POKÉMON\n"
	.string "you come across? Incredible!… Hey, let\l"
	.string "me know if you catch any strong ones!$"



TwoIslandPokemonCenter_3::
lock     
faceplayer  
msgbox TwoIsland_PokemonCenter_Text_3, MSGBOX_DEFAULT
compare VAR_ROUTE119_STATE, 2
goto_if_eq TwoIslandPokemonCenter_3_Despues
release     
end

TwoIsland_PokemonCenter_Text_3:
.string "Voy a preparar una comida para\n"
.string "una persona muy importante.$"

TwoIslandPokemonCenter_Move_1:
emote_exclamation_mark
step_end

TwoIslandPokemonCenter_Move_2:
delay_8
face_right
delay_16
delay_8
walk_in_place_right
delay_16
face_player
step_end

TwoIslandPokemonCenter_Move_3:
face_right
step_end

TwoIslandPokemonCenter_Move_4:
face_player
step_end

TwoIslandPokemonCenter_Move_5:
walk_in_place_left
step_end

TwoIslandPokemonCenter_3_Despues::
lock     
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_1, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_2, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_3, MSGBOX_AUTOCLOSE
delay 10
playse SE_PIN
applymovement 3, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_4, MSGBOX_AUTOCLOSE
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_5, MSGBOX_AUTOCLOSE
msgbox TwoIslandPokemonCenter_3_Despues_Texto_6, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_2
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_7, MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_8, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_3
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_9, MSGBOX_AUTOCLOSE
delay 30
applymovement 3, TwoIslandPokemonCenter_Move_4
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_10, MSGBOX_AUTOCLOSE
playse 597
delay 15
msgbox TwoIslandPokemonCenter_3_Despues_Texto_11, MSGBOX_DEFAULT
trainerbattle_no_intro TRAINER_TRAINER_732, TwoIslandPokemonCenter_3_Despues_Texto_12
playse SE_BREAKABLE_DOOR
applymovement 3, TwoIslandPokemonCenter_Move_5
waitmovement 0x0
waitse
msgbox TwoIslandPokemonCenter_3_Despues_Texto_13, MSGBOX_AUTOCLOSE
delay 10
applymovement 3, TwoIslandPokemonCenter_Move_4
waitmovement 0x0
delay 10
msgbox TwoIslandPokemonCenter_3_Despues_Texto_14, MSGBOX_AUTOCLOSE
playse SE_BALL_TRADE
waitse
delay 10
playse SE_PIN
applymovement 3, TwoIslandPokemonCenter_Move_1
waitmovement 0x0
waitse
delay 5
playfanfare MUS_OBTAIN_BADGE
msgbox TwoIslandPokemonCenter_3_Despues_Texto_15 MSGBOX_DEFAULT
waitfanfare
msgbox TwoIslandPokemonCenter_3_Despues_Texto_16, MSGBOX_AUTOCLOSE
delay 15
msgbox TwoIslandPokemonCenter_3_Despues_Texto_17, MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_142
setvar VAR_ROUTE119_STATE, 3
fadescreen 1
delay 10
removeobject 3
fadescreen 0
release     
end

TwoIslandPokemonCenter_3_Despues_Texto_1:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

TwoIslandPokemonCenter_3_Despues_Texto_2:
	.string "¿Se puede saber qué quieres?$"

TwoIslandPokemonCenter_3_Despues_Texto_3:
	.string "{PAUSE 10}…{PAUSE 10} …{PAUSE 10}$"

TwoIslandPokemonCenter_3_Despues_Texto_4:
	.string "¿Quieres comprar LIMONADA?$"

TwoIslandPokemonCenter_3_Despues_Texto_5:
	.string "¿Por qué me has tomado, mocoso?\p"
	.string "¿Por una expendedora del CENTRO\n"
	.string "COMERCIAL AZULONA?$"

TwoIslandPokemonCenter_3_Despues_Texto_6:
	.string "Ese producto no existe en todo el\n"
	.string "ARCHI7, deberás pagar 10.000¥ por cada\l"
	.string "unidad.$"

TwoIslandPokemonCenter_3_Despues_Texto_7:
	.string "Pensándolo mejor, aunque pudieras\n"
	.string "pagarlo, que lo dudo, no haré ningún\l"
	.string "trato contigo.$"

TwoIslandPokemonCenter_3_Despues_Texto_8:
	.string "Yo tengo una reputación que mantener,\n"
	.string "¿entiendes?$"

TwoIslandPokemonCenter_3_Despues_Texto_9:
	.string "LORELEI, CELIO, la CÓNSUL… yo cocino\n"
	.string "para todas esas personalidades del\l"
	.string "ARCHI7. ¿Para qué mezclarse con chusma\l"
	.string "como tú?$"

TwoIslandPokemonCenter_3_Despues_Texto_10:
	.string "Así que insistes… Muy bien.$"

TwoIslandPokemonCenter_3_Despues_Texto_11:
	.string "¡Te voy a mostrar la diferencia entre\n"
	.string "un POKÉMON de la élite y uno de las\l"
	.string "cloacas!$"

TwoIslandPokemonCenter_3_Despues_Texto_12:
	.string "Pero… ¡mi TOTODILE es especial!$"

TwoIslandPokemonCenter_3_Despues_Texto_13:
	.string "¡¡Esto no puede ser!!$"

TwoIslandPokemonCenter_3_Despues_Texto_14:
	.string "Grrrr… Tú no eres un ROCKET norm…$"

TwoIslandPokemonCenter_3_Despues_Texto_15:
	.string "¡¡{PLAYER} le quitó una caja de\n"
	.string "limonadas al cocinero!!$"

TwoIslandPokemonCenter_3_Despues_Texto_16:
	.string "¡Tú! ¡¿Cómo te atreves?!$"

TwoIslandPokemonCenter_3_Despues_Texto_17:
    .string "¡Verás cuando vuelva a KANTO! ¡Voy a\n"
	.string "informar a todas las autoridades del\l"
	.string "chiringuito que tenéis aquí montado!$"

