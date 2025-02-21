PokemonLeague_5F_MapScripts::
	.byte 0

PokemonLeague_5F_Azul_Rojo::
lockall
clearflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
addobject 13
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_1
waitmovement 0x0
playse SE_PIN
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_2
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_1 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_3
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_4
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_5
waitmovement 0x0
special RemoveCameraObject
delay 20
playmoncry SPECIES_CHARIZARD, CRY_MODE_ENCOUNTER
msgbox PokemonLeague_5F_Azul_Rojo_Texto_2 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_M_FLAMETHROWER
delay 20
playse SE_SUPER_EFFECTIVE
delay 40
playmoncry SPECIES_BLASTOISE, CRY_MODE_ENCOUNTER
msgbox PokemonLeague_5F_Azul_Rojo_Texto_3 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_FAINT
delay 30
msgbox PokemonLeague_5F_Azul_Rojo_Texto_4 MSGBOX_AUTOCLOSE
delay 20
msgbox PokemonLeague_5F_Azul_Rojo_Texto_5 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_6
waitmovement 0x0
special RemoveCameraObject
delay 15
playse SE_EXIT
clearflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
addobject 2
delay 20
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_7
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_7
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_9
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_9
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_8
waitmovement 0x0
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_5
waitmovement 0x0
special RemoveCameraObject
msgbox PokemonLeague_5F_Azul_Rojo_Texto_6 MSGBOX_AUTOCLOSE
playse MUS_RG_PALLET
msgbox PokemonLeague_5F_Azul_Rojo_Texto_7 MSGBOX_AUTOCLOSE
applymovement 13, PokemonLeague_5F_Azul_Rojo_Move_10
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_11
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_12
waitmovement 0x0
delay 19
msgbox PokemonLeague_5F_Azul_Rojo_Texto_8 MSGBOX_AUTOCLOSE
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_13
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_14
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_9 MSGBOX_AUTOCLOSE
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_15
waitmovement 0x0
delay 20
msgbox PokemonLeague_5F_Azul_Rojo_Texto_10 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_5F_Azul_Rojo_Texto_11 MSGBOX_AUTOCLOSE
delay 13
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_18
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_16
applymovement 13, PokemonLeague_5F_Azul_Rojo_Move_17
delay 110
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
removeobject 2
playse SE_EXIT
waitmovement 0x0
delay 10
playse SE_EXIT
setflag FLAG_HIDE_SAFARI_ZONE_SOUTH_CONSTRUCTION_WORKERS
removeobject 13
waitmovement 0x0
delay 106
playse SE_UNLOCK
setmetatile 6, 2, 0x293, FALSE
setmetatile 6, 1, 0x28B, TRUE
special DrawWholeMapView
playse MUS_DUMMY
delay 64
clearflag FLAG_HIDE_SLATEPORT_CITY_CONTEST_REPORTER
addobject 14
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_20
applymovement OBJ_EVENT_ID_CAMERA, PokemonLeague_5F_Azul_Rojo_Move_21
waitmovement 0x0
delay 37
msgbox PokemonLeague_5F_Azul_Rojo_Texto_12 MSGBOX_AUTOCLOSE
delay 37
msgbox PokemonLeague_5F_Azul_Rojo_Texto_13 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_22
waitmovement 0x0
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_14 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_23
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_15 MSGBOX_AUTOCLOSE
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_24
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_14
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_16 MSGBOX_AUTOCLOSE
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_25
waitmovement 0x0
playse SE_PIN
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_7
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_17 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_26
applymovement 2, PokemonLeague_5F_Azul_Rojo_Move_15
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_14
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_18 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_26.2
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_18.1 MSGBOX_AUTOCLOSE
delay 10
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_26.3
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_26.3
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_26.3
clearflag FLAG_HIDE_HO_OH
playse SE_EXIT
delay 25
playse SE_EXIT
delay 25
playse SE_EXIT
delay 55
addobject 7
addobject 8
addobject 9
applymovement 9, PokemonLeague_5F_Azul_Rojo_Move_27
applymovement 8, PokemonLeague_5F_Azul_Rojo_Move_27
applymovement 7, PokemonLeague_5F_Azul_Rojo_Move_28
waitmovement 0x0
playse SE_PIN
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_7
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_7
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_7
waitmovement 0x0
playse MUS_RG_VICTORY_ROAD
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_19 MSGBOX_AUTOCLOSE
delay 32
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_29
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_20 MSGBOX_AUTOCLOSE
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_21 MSGBOX_AUTOCLOSE
delay 32
addobject 10
addobject 11
addobject 12
playse SE_EXIT
delay 25
playse SE_EXIT
delay 25
playse SE_EXIT
delay 55
applymovement 12, PokemonLeague_5F_Azul_Rojo_Move_30
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_31
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_32
waitmovement 0x0
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_22 MSGBOX_AUTOCLOSE
delay 16
msgbox PokemonLeague_5F_Azul_Rojo_Texto_12 MSGBOX_AUTOCLOSE
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_33
addobject 5
addobject 6
addobject 4
playse SE_EXIT
delay 25
playse SE_EXIT
delay 25
playse SE_EXIT
delay 55
applymovement 4, PokemonLeague_5F_Azul_Rojo_Move_34
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_35
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_36
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_23 MSGBOX_AUTOCLOSE
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_23.1 MSGBOX_AUTOCLOSE
delay 32
msgbox PokemonLeague_5F_Azul_Rojo_Texto_24 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_5F_Azul_Rojo_Texto_25 MSGBOX_AUTOCLOSE
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_26 MSGBOX_AUTOCLOSE
delay 24
playse SE_BREAKABLE_DOOR
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_27 MSGBOX_AUTOCLOSE
msgbox PokemonLeague_5F_Azul_Rojo_Texto_28 MSGBOX_AUTOCLOSE
applymovement 3, PokemonLeague_5F_Azul_Rojo_Move_38
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_29 MSGBOX_AUTOCLOSE
playmoncry SPECIES_HERACROSS, CRY_MODE_ENCOUNTER
msgbox PokemonLeague_5F_Azul_Rojo_Texto_30 MSGBOX_DEFAULT
waitmoncry
applymovement 4, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_38
delay 5
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 12, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_38
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_38
waitmovement 0x0
special RemoveCameraObject
playse SE_M_TAKE_DOWN
delay 24
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
playse SE_UNLOCK
setmetatile 6, 2, 0x296, FALSE
setmetatile 6, 1, 0x3F2, TRUE
special DrawWholeMapView
playse SE_PIN
applymovement 4, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 12, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 1, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 7, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 8, PokemonLeague_5F_Azul_Rojo_Move_39
delay 5
applymovement 9, PokemonLeague_5F_Azul_Rojo_Move_39
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_31 MSGBOX_AUTOCLOSE
playse SE_BREAKABLE_DOOR
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37.1
waitmovement 0x0
waitse
msgbox PokemonLeague_5F_Azul_Rojo_Texto_32 MSGBOX_AUTOCLOSE
fadenewbgm 627
applymovement OBJ_EVENT_ID_PLAYER, PokemonLeague_5F_Azul_Rojo_Move_42
applymovement 7, PokemonLeague_5F_Azul_Rojo_Move_40
applymovement 8, PokemonLeague_5F_Azul_Rojo_Move_40
applymovement 9, PokemonLeague_5F_Azul_Rojo_Move_41
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_43
applymovement 10, PokemonLeague_5F_Azul_Rojo_Move_44
applymovement 11, PokemonLeague_5F_Azul_Rojo_Move_45
applymovement 6, PokemonLeague_5F_Azul_Rojo_Move_46
applymovement 5, PokemonLeague_5F_Azul_Rojo_Move_47
waitmovement 0x0
msgbox PokemonLeague_5F_Azul_Rojo_Texto_33 MSGBOX_AUTOCLOSE
delay 10
playse SE_BREAKABLE_DOOR
applymovement 14, PokemonLeague_5F_Azul_Rojo_Move_37.1
waitmovement 0x0
waitse
delay 10
msgbox PokemonLeague_5F_Azul_Rojo_Texto_33.1 MSGBOX_AUTOCLOSE
setflag FLAG_HIDE_LILYCOVE_CONTEST_HALL_REPORTER
setflag FLAG_HIDE_HO_OH
release
end

PokemonLeague_5F_Azul_Rojo_Andra_Seguir::
lock
msgbox PokemonLeague_5F_Azul_Rojo_Texto_33.1 MSGBOX_SIGN
release
end

PokemonLeague_5F_Azul_Rojo_Move_26.3:
delay_8
emote_exclamation_mark
delay_8
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_26.1:
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_26.2:
walk_in_place_right
step_end


PokemonLeague_5F_Azul_Rojo_Texto_1:
	.string "ANDRA: {PLAYER} finally! {PAUSE 25}…{PAUSE 25} …{PAUSE 25} BLUE was\n"
	.string "the first one to defeat LANCE, but\l"
	.string "there is no good news, he is being\l"
	.string "massacred by RED, look…$"

PokemonLeague_5F_Azul_Rojo_Texto_2:
.string "Char!$"

PokemonLeague_5F_Azul_Rojo_Texto_3:
.string "Blas…$"

PokemonLeague_5F_Azul_Rojo_Texto_4:
.string "RED: {PAUSE 25}…{PAUSE 25}$"

PokemonLeague_5F_Azul_Rojo_Texto_5:
	.string "BLUE: NO!\n"
	.string "That can't be!\l"
	.string "You beat me at my best!\p"
	.string "After all that work to become\n"
	.string "the LEAGUE CHAMP?\p"
	.string "My reign is over already?\n"
	.string "It's not fair!$"


PokemonLeague_5F_Azul_Rojo_Texto_6:
	.string "Why?\n"
	.string "Why did I lose?\p"
	.string "I never made any mistakes raising\n"
	.string "my POKÉMON…{PAUSE 20}\p"
	.string "Darn it! You're the new POKÉMON\n"
	.string "LEAGUE CHAMPION!\p"
	.string "Although I don't like to admit it…$"

PokemonLeague_5F_Azul_Rojo_Texto_7:
.string "OAK: RED!$"

PokemonLeague_5F_Azul_Rojo_Texto_8:
	.string "OAK: So, you've won!\n"
	.string "Sincerely, congratulations!\p"
	.string "You're the new POKÉMON LEAGUE\n"
	.string "CHAMPION!{PAUSE 30}\p"
	.string "You've grown up so much since you\n"
	.string "first left with CHARMANDER to work\l"
	.string "on the POKéDEX.\p"
	.string "RED, you have come of age!$"


PokemonLeague_5F_Azul_Rojo_Texto_9:
	.string "OAK: BLUE…{PAUSE 35}\n"
	.string "I'm disappointed in you.\p"
	.string "I came when I heard you'd beaten\n"
	.string "the ELITE FOUR.\p"
	.string "But, when I got here, you had\n"
	.string "already lost!\p"
	.string "BLUE, do you understand why\n"
	.string "you lost?\p"
	.string "You have forgotten to treat your\n"
	.string "POKÉMON with love and trust.\p"
	.string "Without them, you will never\n"
	.string "become a CHAMP again!$"


PokemonLeague_5F_Azul_Rojo_Texto_10:
	.string "OAK: RED!\p"
	.string "You understand that your victory\n"
	.string "was not just your own doing.\p"
	.string "The bond you share with your\n"
	.string "POKÉMON is marvelous.\p"


PokemonLeague_5F_Azul_Rojo_Texto_11:
	.string "RED!\n"
	.string "Come with me!$"

PokemonLeague_5F_Azul_Rojo_Texto_12:
.string "BLUE: {PAUSE 25}…{PAUSE 25}$"

PokemonLeague_5F_Azul_Rojo_Texto_13:
	.string "Gr-{PAUSE 45}Grandpa…{PAUSE 35} Wait…{PAUSE 35} Please…{PAUSE 35} I did my\n"
	.string "best…!{PAUSE 25} I have treated my POKÉMON with\l"
	.string "kindness and trust…!{PAUSE 35} Since the\l"
	.string "beginning, it has always been like this;\l"
	.string "I've never disappointed them, and I've\l"
	.string "never treated them as simple cards in a\l"
	.string "deck like RED does…{PAUSE 35}$"

PokemonLeague_5F_Azul_Rojo_Texto_14:
	.string "After all I went through, the issues I\n"
	.string "had, I thought you would be proud of\l"
	.string "me…{PAUSE 35} although I lost against RED, I\l"
	.string "thought you would be proud of me for\l"
	.string "trying my best and that I have a team\l"
	.string "worthy of defeating the entire ELITE 4.$"

PokemonLeague_5F_Azul_Rojo_Texto_15:
	.string "But that never happened, grandpa…{PAUSE 35} I\n"
	.string "see that you are the kind of person who\l"
	.string "leaves you dying on the floor if you are\l"
	.string "not the best! What happened here today\l"
	.string "won't be erased from my memory!$"

PokemonLeague_5F_Azul_Rojo_Texto_16:
	.string "ANDRA: BLUE! Calm down! I saw the fight\n"
	.string "and you have improved a lot since the\l"
	.string "last time we battled, you achieved what\l"
	.string "you aimed for; a strong and balanced\l"
	.string "POKÉMON team, all at level 60, don't\l"
	.string "blame yourself for not being able to\l"
	.string "defeat RED! His fighting style…{PAUSE 25} And the\l"
	.string "strength and energy of his POKÉMON…{PAUSE 25}\l"
	.string "It's unnatural…$"

PokemonLeague_5F_Azul_Rojo_Texto_17:
.string "BLUE: {PLAYER}!!!\n"
	.string "You are here!$"

PokemonLeague_5F_Azul_Rojo_Texto_18:
.string "¡Esto no puede acabar así!\n"
	.string "¡Estoy harto del aura de invencibilidad\l"
	.string "que rodea a ROJO, ya está bien de ser\l"
	.string "ese intocable e inmaculado ENTRENADOR\l"
	.string "que jamás pierde!\l"
	.string "¡Ni siquiera se digna a hablar contigo\l"
	.string "tras machacarte, qué falta de respeto!$"

PokemonLeague_5F_Azul_Rojo_Texto_18.1:
	.string "¡{PLAYER}!\n"
	.string "¡Tienes que derr…!$"

PokemonLeague_5F_Azul_Rojo_Texto_19:
	.string "COP: The party is over kids, we have a\n"
	.string "new CHAMPION, and the POKÉMON LEAGUE\l"
	.string "challenge has finished.$"

PokemonLeague_5F_Azul_Rojo_Texto_20:
.string "ANDRA: ¡Eh,{PAUSE 15} espere!\n"
	.string "¡{PLAYER} y yo acabamos de derrotar\l"
	.string "también al ALTO MANDO!\l"
	.string "¡Al igual que ROJO hizo hace justo\l"
	.string "un momento con AZUL, los dos\l"
	.string "merecemos una oportunidad de\l"
	.string "disputarle el título a ROJO por\l"
	.string "haber llegado hasta aquí!$"

PokemonLeague_5F_Azul_Rojo_Texto_21:
.string "POLICÍA: No estás precisamente en\n"
	.string "disposición de reclamar nada, chica.$"

PokemonLeague_5F_Azul_Rojo_Texto_22:
.string "¡Tú aparta!\n"
	.string "Eres una vergüenza para OAK.$"

PokemonLeague_5F_Azul_Rojo_Texto_23:
.string "BRUNO nos ha informado de quienes sois.\n"
	.string "Ambas cosas: la LIGA POKÉMON y vuestra\l"
	.string "libertad, acaban aquí, ahora.$"

PokemonLeague_5F_Azul_Rojo_Texto_23.1:
	.string "Tenemos argumentos más que de sobra para\n"
	.string "procesaros de por vida por todos vuestros\l"
	.string "delitos; si os portáis bien y no oponéis\l"
	.string "resistencia, quizás os dejemos salir{PAUSE 15}…{PAUSE 15} en\l"
	.string "un par de décadas.$"

PokemonLeague_5F_Azul_Rojo_Texto_24:
.string "ANDRA: 9 policías{PAUSE 25}…{PAUSE 15}$"

PokemonLeague_5F_Azul_Rojo_Texto_25:
.string "POLICEMAN: What do you mean?$"

PokemonLeague_5F_Azul_Rojo_Texto_26:
	.string "ANDRA: You should know…{PAUSE 25} who are you\n"
	.string "talking to, we've just beaten the ELITE\l"
	.string "4…$"

PokemonLeague_5F_Azul_Rojo_Texto_27:
.string "IS THAT ALL YOU HAVE!!??\n"
	.string "COM'ON, BRING MORE!\l"
	.string "10!{PAUSE 20}…{PAUSE 20}\l"
	.string "20!{PAUSE 20}…{PAUSE 20}\l"
	.string "50!{PAUSE 20}…{PAUSE 20}\l"
	.string "You will need something else than that\l"
	.string "to bend our will and the will of our\l"
	.string "POKÉMON!$"

PokemonLeague_5F_Azul_Rojo_Texto_28:
	.string "COP: Insolent girl, don't dar…$"

PokemonLeague_5F_Azul_Rojo_Texto_29:
.string "ANDRA: HERACROSS!\n"
	.string "CLOSE COMBAT TO THE\l"
	.string "HALL OF FAME'S DOOR!$"

PokemonLeague_5F_Azul_Rojo_Texto_30:
.string "cross!$"

PokemonLeague_5F_Azul_Rojo_Texto_31:
	.string "BLUE: Wow! That HERACROSS has become\n"
	.string "even stronger, what an attack!$"

PokemonLeague_5F_Azul_Rojo_Texto_32:
.string "ANDRA: {PLAYER}!\n"
	.string "Run!$"

PokemonLeague_5F_Azul_Rojo_Texto_33:
.string "ANDRA: ¡{PLAYER}!\n"
	.string "¡Entra tú!\l"
	.string "¡Yo contendré a estos aficionados!\l"
	.string "¡Conmigo aquí no tienes que temer!\l"
	.string "Después de ver a ROJO en acción, me\l"
	.string "he dado cuenta de que tú eres el\l"
	.string "único con una oportunidad de hacerle\l"
	.string "combate a esa apisonadora que tumba\l"
	.string "entrenadores como fichas de dominó.$"

PokemonLeague_5F_Azul_Rojo_Texto_33.1:
	.string "¡En el nombre del TEAM ROCKET!\n"
	.string "¡Aquí tienes tu oportunidad!\l"
	.string "Eres un ENTRENADOR completamente\l"
	.string "distinto a ese que fue derrotado\l"
	.string "en el MT.MOON, has visto una KANTO\l"
	.string "que ese ROJO jamás tendrá el\l"
	.string "privilegio de conocer.\l"
	.string "¡Confío en ti y en todo\l"
	.string "lo que has mejorado!\l"
	.string "¡Demuéstrale de una vez por todas\l"
	.string "lo que vales!$"

PokemonLeague_5F_Azul_Rojo_Move_1:
walk_in_place_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_2:
emote_exclamation_mark
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_3:
walk_right
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_4:
walk_left
walk_in_place_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_5:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_6:
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_down
walk_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_7:
emote_exclamation_mark
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_8:
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_9:
walk_in_place_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_10:
delay_4
face_down
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_11:
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
delay_4
face_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_12:
delay_4
delay_4
walk_up
walk_up
walk_up
walk_up
walk_up
walk_left
walk_up
walk_up
face_down
delay_4
step_end

PokemonLeague_5F_Azul_Rojo_Move_13:
face_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_14:
face_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_15:
face_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_16:
walk_up
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_17:
delay_4
walk_left
walk_up
walk_up
walk_up
walk_right
walk_up
walk_up
walk_up
walk_up
delay_4
step_end

PokemonLeague_5F_Azul_Rojo_Move_18:
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_19:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_20:
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_21:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_22:
face_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_23:
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_24:
walk_up
walk_up
face_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_25:
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_26:
walk_down
face_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_27:
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_28:
walk_up
walk_up
walk_up
walk_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_29:
walk_down
walk_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_30:
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_31:
walk_left
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
walk_up
walk_in_place_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_32:
walk_left
walk_left
walk_up
walk_up
walk_left
walk_left
walk_up
walk_up
walk_up
walk_in_place_right
step_end

PokemonLeague_5F_Azul_Rojo_Move_33:
walk_slow_down
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_34:
walk_up
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_up
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_35:
walk_up
walk_right
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_up
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_36:
walk_up
walk_right
walk_right
walk_up
walk_up
walk_right
walk_right
walk_up
walk_up
walk_up
walk_in_place_left
step_end

PokemonLeague_5F_Azul_Rojo_Move_37:
walk_fast_right
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_37.1:
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_38:
face_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_39:
emote_exclamation_mark
step_end

PokemonLeague_5F_Azul_Rojo_Move_40:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_41:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_42:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_left
walk_fast_up
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_43:
walk_fast_up
walk_fast_up
walk_fast_up
walk_fast_up
walk_in_place_down
step_end

PokemonLeague_5F_Azul_Rojo_Move_44:
walk_fast_right
walk_fast_right
walk_fast_up
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_45:
walk_fast_right
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_46:
walk_fast_left
walk_fast_up
walk_fast_up
step_end

PokemonLeague_5F_Azul_Rojo_Move_47:
walk_fast_left
walk_fast_left
walk_fast_up
walk_fast_up
walk_fast_up
step_end
