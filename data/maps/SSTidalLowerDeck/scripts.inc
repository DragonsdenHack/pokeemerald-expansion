SSTidalLowerDeck_MapScripts::
map_script MAP_SCRIPT_ON_FRAME_TABLE, SSTidalLowerDeck_OnFrame
	.byte 0

SSTidalLowerDeck_OnFrame:
map_script_2 VAR_UNUSED_0x40F7, 245, SSTidalLowerDeck_Combates
	.2byte 0

SSTidalLowerDeck_EventScript_Phillip::
	trainerbattle_single TRAINER_BRUNO_1, SSTidalLowerDeck_Text_PhillipIntro, SSTidalLowerDeck_Text_PhillipDefeat
	msgbox SSTidalLowerDeck_Text_PhillipPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_EventScript_Leonard::
	trainerbattle_single TRAINER_BRUNO_1, SSTidalLowerDeck_Text_LeonardIntro, SSTidalLowerDeck_Text_LeonardDefeat
	msgbox SSTidalLowerDeck_Text_LeonardPostBattle, MSGBOX_AUTOCLOSE
	end

SSTidalLowerDeck_Text_PhillipIntro:
	.string "Arrrgh! I'm fed up and dog-tired of\n"
	.string "cleaning this huge place!\p"
	.string "Let's have a quick battle!$"

SSTidalLowerDeck_Text_PhillipDefeat:
	.string "Little bro, I lost!$"

SSTidalLowerDeck_Text_PhillipPostBattle:
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"

SSTidalLowerDeck_Text_LeonardIntro:
	.string "This is the bottom of the ship's hull.\n"
	.string "There's plenty of room.\l"
	.string "It'll be alright for a POKéMON battle.$"

SSTidalLowerDeck_Text_LeonardDefeat:
	.string "Big bro, I lost!$"

SSTidalLowerDeck_Text_LeonardPostBattle:
	.string "We're the CLEANUP BROTHERS!\p"
	.string "The old one dumps the detergent,\n"
	.string "and the young one does the scrubbing!$"

SSTidalLowerDeck_Combates_Move_1:
walk_in_place_right
step_end

SSTidalLowerDeck_Combates_Move_2:
emote_exclamation_mark
step_end

SSTidalLowerDeck_Combates_Move_3:
face_down
step_end

SSTidalLowerDeck_Combates_Move_4:
walk_up
walk_up
walk_up
walk_up
step_end

SSTidalLowerDeck_Combates_Move_5:
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
walk_right
face_up
step_end

SSTidalLowerDeck_Combates_Move_6:
face_right
step_end

SSTidalLowerDeck_Combates_Move_7:
face_left
step_end

SSTidalLowerDeck_Combates_Move_8:
walk_down
step_end

SSTidalLowerDeck_Combates_Move_9:
walk_in_place_up
step_end

SSTidalLowerDeck_Combates_Move_10:
lock_facing_direction
walk_down
unlock_facing_direction
step_end

SSTidalLowerDeck_Combates_Move_11:
face_right
lock_facing_direction
walk_left
unlock_facing_direction
step_end

SSTidalLowerDeck_Combates::
lock
clearflag FLAG_HOENN_2
addobject 2
addobject 4
addobject 3
addobject 1
delay 15
applymovement 5, SSTidalLowerDeck_Combates_Move_1
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SSTidalLowerDeck_Combates_Move_2
applymovement 5, SSTidalLowerDeck_Combates_Move_2
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, SSTidalLowerDeck_Combates_Move_3
applymovement 5, SSTidalLowerDeck_Combates_Move_3
waitmovement 0x0
applymovement 2, SSTidalLowerDeck_Combates_Move_4
applymovement 4, SSTidalLowerDeck_Combates_Move_5
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_2 MSGBOX_AUTOCLOSE
applymovement 1, SSTidalLowerDeck_Combates_Move_4
applymovement 3, SSTidalLowerDeck_Combates_Move_5
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_3 MSGBOX_AUTOCLOSE
applymovement 5, SSTidalLowerDeck_Combates_Move_6
applymovement OBJ_EVENT_ID_PLAYER, SSTidalLowerDeck_Combates_Move_7
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_4 MSGBOX_AUTOCLOSE
applymovement 5, SSTidalLowerDeck_Combates_Move_8
applymovement OBJ_EVENT_ID_PLAYER, SSTidalLowerDeck_Combates_Move_8
waitmovement 0x0
delay 15
playse SE_BREAKABLE_DOOR
applymovement 1, SSTidalLowerDeck_Combates_Move_9
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_5 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_611, SSTidalLowerDeck_Combates_Texto_6
delay 15
playse SE_BREAKABLE_DOOR
applymovement 2, SSTidalLowerDeck_Combates_Move_9
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_7 MSGBOX_AUTOCLOSE
trainerbattle_no_intro TRAINER_TRAINER_612, SSTidalLowerDeck_Combates_Texto_8
delay 10
playse SE_BREAKABLE_DOOR
applymovement 1, SSTidalLowerDeck_Combates_Move_10
applymovement 2, SSTidalLowerDeck_Combates_Move_10
applymovement 4, SSTidalLowerDeck_Combates_Move_10
applymovement 3, SSTidalLowerDeck_Combates_Move_11
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_9 MSGBOX_AUTOCLOSE
applymovement 5, SSTidalLowerDeck_Combates_Move_8
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_10 MSGBOX_AUTOCLOSE
playmoncry SPECIES_ARBOK, CRY_MODE_ENCOUNTER
msgbox SSTidalLowerDeck_Combates_Texto_11 MSGBOX_AUTOCLOSE
waitmoncry
playse SE_M_LEER
waitse
delay 15
playse SE_M_THUNDERBOLT2
waitse
delay 15
msgbox SSTidalLowerDeck_Combates_Texto_12 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SSTidalLowerDeck_Combates_Move_2
waitmovement 0x0
delay 15
applymovement 5, SSTidalLowerDeck_Combates_Move_13
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_13 MSGBOX_AUTOCLOSE
applymovement 5, SSTidalLowerDeck_Combates_Move_12
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_14 MSGBOX_AUTOCLOSE
delay 15
msgbox SSTidalLowerDeck_Combates_Texto_15 MSGBOX_AUTOCLOSE
setflag FLAG_HOENN_2
fadescreen 1
removeobject 2
removeobject 1
removeobject 3
removeobject 4
delay 40
fadescreen 0
delay 15
applymovement 5, SSTidalLowerDeck_Combates_Move_13
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_16 MSGBOX_AUTOCLOSE
applymovement 5, SSTidalLowerDeck_Combates_Move_12
waitmovement 0x0
msgbox SSTidalLowerDeck_Combates_Texto_17 MSGBOX_AUTOCLOSE
applymovement 5, SSTidalLowerDeck_Combates_Move_14
waitmovement 0x0
setflag FLAG_HOENN_48
setflag FLAG_HOENN_2
removeobject 5
setvar VAR_UNUSED_0x40F7, 246
release
end

SSTidalLowerDeck_Combates_Move_14:
walk_down
walk_down
walk_down
walk_down
walk_down
step_end

SSTidalLowerDeck_Combates_Move_13:
face_up
step_end

SSTidalLowerDeck_Combates_Move_12:
walk_in_place_down
step_end



SSTidalLowerDeck_Combates_Texto_1:
	.string "ARIANA: Ha sido un éxito {PLAYER}.\n"
	.string "Ahora solo tenemos que escondernos\l"
	.string "aquí y esperar.$"

SSTidalLowerDeck_Combates_Texto_2:
	.string "¿Qué hacéis aquí? El evento es arriba.$"

SSTidalLowerDeck_Combates_Texto_3:
	.string "No sois los primeros listos que\n"
	.string "pretenden ir de polizón a CALAGUA. ¡En\l"
	.string "guardia!$"

SSTidalLowerDeck_Combates_Texto_4:
	.string "ARIANA: No merece la pena discutir.\n"
	.string "Acabemos con esto, {PLAYER}.$"

SSTidalLowerDeck_Combates_Texto_5:
	.string "¡El SS.MAREA va a quedar limpio de tipos\n"
	.string "como tú!$"

SSTidalLowerDeck_Combates_Texto_6:
	.string "¡Me limpiaron a mí!$"

SSTidalLowerDeck_Combates_Texto_7:
	.string "Grrr{PAUSE 15}…{PAUSE 15} Encima te resistes, ¡mis bravos\n"
	.string "POKÉMON no tendrán piedad contigo!$"

SSTidalLowerDeck_Combates_Texto_8:
	.string "¿Yo también perdí?$"

SSTidalLowerDeck_Combates_Texto_9:
	.string "P{PAUSE 15}-{PAUSE 15}Pero{PAUSE 15}…{PAUSE 15} ¿Quiénes sois vosotros?$"

SSTidalLowerDeck_Combates_Texto_10:
	.string "ARIANA: ARBOK, DESLUMBRAR contra los\n"
	.string "marineros.$"

SSTidalLowerDeck_Combates_Texto_11:
	.string "ARBOK: ¡Bok!$"

SSTidalLowerDeck_Combates_Texto_12:
	.string "(Los marineros quedaron petrificados)$"

SSTidalLowerDeck_Combates_Texto_13:
	.string "ARIANA: ¿Qué? ¿Tienes algún problema\n"
	.string "con eso?$"

SSTidalLowerDeck_Combates_Texto_14:
	.string "Es el único modo de no echar a perder el\n"
	.string "plan, ¿o prefieres dejarlos escapar y\l"
	.string "que avisen a toda DEVON de que estamos\l"
	.string "aquí?$"

SSTidalLowerDeck_Combates_Texto_15:
	.string "Ahora, ayúdame a esconderlos en esos\n"
	.string "contenedores. No te preocupes, para\l"
	.string "cuando lleguemos a CALAGUA, podrán\l"
	.string "volver a moverse.$"

SSTidalLowerDeck_Combates_Texto_16:
	.string "Bien. Si vuelve a entrar alguien,\n"
	.string "repetimos el mismo procedimiento,\l"
	.string "¿entendido?$"

SSTidalLowerDeck_Combates_Texto_17:
	.string "Voy a esconderme en el fondo del\n"
	.string "ALMACÉN. Hasta que el barco no salga de\l"
	.string "PORTUAL, deberíamos permanecer allí.$"


SSTidalLowerDeck_Submarino::
lock
clearflag FLAG_HOENN_1
addobject 8
msgbox SSTidalLowerDeck_Submarino_Texto_1 MSGBOX_AUTOCLOSE
delay 15
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, SSTidalLowerDeck_Combates_Move_2
applymovement 6, SSTidalLowerDeck_Combates_Move_2
msgbox SSTidalLowerDeck_Submarino_Texto_2 MSGBOX_AUTOCLOSE
delay 15
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSTidalLowerDeck_Submarino_Move_1
waitmovement 0x0
special RemoveCameraObject
msgbox SSTidalLowerDeck_Submarino_Texto_3 MSGBOX_AUTOCLOSE
applymovement 8, SSTidalLowerDeck_Submarino_Move_2
waitmovement 0x0
msgbox SSTidalLowerDeck_Submarino_Texto_4 MSGBOX_AUTOCLOSE
special SpawnCameraObject
applymovement OBJ_EVENT_ID_CAMERA, SSTidalLowerDeck_Submarino_Move_3
waitmovement 0x0
special RemoveCameraObject
applymovement 6, SSTidalLowerDeck_Submarino_Move_4
waitmovement 0x0
msgbox SSTidalLowerDeck_Submarino_Texto_5 MSGBOX_AUTOCLOSE
applymovement 6, SSTidalLowerDeck_Submarino_Move_5
waitmovement 0x0
playse SE_FALL
setflag FLAG_HOENN_1
setflag FLAG_HOENN_47
removeobject 6
setvar VAR_UNUSED_0x40F7, 247
waitse
applymovement OBJ_EVENT_ID_PLAYER, SSTidalLowerDeck_Submarino_Move_6.1
waitmovement 0x0
playse SE_FALL
warpsilent MAP_SS_TIDAL_SUBMARINO, 23, 3
delay 100
release
end

SSTidalLowerDeck_Submarino_Move_6.1:
walk_right
walk_right
step_end

SSTidalLowerDeck_Submarino_Move_6:
walk_right
step_end

SSTidalLowerDeck_Submarino_Move_5:
walk_right
step_end

SSTidalLowerDeck_Submarino_Move_4:
face_left
step_end

SSTidalLowerDeck_Submarino_Move_3:
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_down
walk_fast_left
walk_fast_left
walk_fast_left
walk_fast_left
step_end

SSTidalLowerDeck_Submarino_Move_2:
face_right
step_end

SSTidalLowerDeck_Submarino_Move_1:
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_right
walk_slow_up
walk_slow_up
walk_slow_up
walk_slow_up
step_end

SSTidalLowerDeck_Submarino_Texto_1:
	.string "ARIANA: Esto no debería estar aquí.\n"
	.string "Parece que conecta con algo ajeno al\l"
	.string "barco. Qué extraño{PAUSE 5}…{PAUSE 5}$"

SSTidalLowerDeck_Submarino_Texto_2:
	.string "????: Muy bien. Ahora, empieza el\n"
	.string "verdadero evento.$"

SSTidalLowerDeck_Submarino_Texto_3:
	.string "ARIANA: Ese es{PAUSE 25}…{PAUSE 25} la mano derecha del\n"
	.string "PRESIDENTE.$"

SSTidalLowerDeck_Submarino_Texto_4:
	.string "ADMIN.AMATISTA: ¡Todos adentro!$"

SSTidalLowerDeck_Submarino_Texto_5:
	.string "ARIANA: ¡Rápido, {PLAYER}! ¡No\n"
	.string "tenemos otra opción!$"

