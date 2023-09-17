Route50_MapScripts::
	.byte 0



Route50_EventScript_Montanero::
	trainerbattle_single TRAINER_THALIA_4, Route50_Text_MontaneroIntro, Route50_Text_MontaneroDefeated
	msgbox Route50_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end

Route50_Encuentro_Dunsparce::
lock
faceplayer
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_1
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_1 MSGBOX_AUTOCLOSE
msgbox Route50_Encuentro_Dunsparce_Texto_2 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_5
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_6
waitmovement 0x0
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
waitse
playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
		playse SE_THUNDERSTORM_STOP
	setvar VAR_0x8004, 0  @ vertical pan
	setvar VAR_0x8005, 3  @ horizontal pan
	setvar VAR_0x8006, 4  @ num shakes
	setvar VAR_0x8007, 2  @ shake delay
	special ShakeCamera
	delay 30
	delay 50
	waitse
clearflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
addobject 3
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_3 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_MUGSHOT
applymovement 3, Route50_Encuentro_Dunsparce_Move_7
waitmovement 0x0
waitse
trainerbattle_no_intro TRAINER_ANDRA_1, Route50_Encuentro_Dunsparce_Texto_4
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_4 MSGBOX_DEFAULT
waitmoncry
delay 20
msgbox Route50_Encuentro_Dunsparce_Texto_5 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_3 MSGBOX_DEFAULT
waitmoncry
msgbox Route50_Encuentro_Dunsparce_Texto_7 MSGBOX_AUTOCLOSE
delay 40
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
playse SE_M_FLY
removeobject 3
waitse
playse SE_M_DETECT
addobject 4
waitse
delay 20
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_9
waitmovement 0x0
delay 20
removeobject 4
playfanfare MUS_OBTAIN_ITEM
msgbox Route50_Encuentro_Dunsparce_Texto_8 MSGBOX_DEFAULT
waitfanfare
applymovement 2, Route50_Encuentro_Dunsparce_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_8
waitmovement 0x0
delay 20
playse SE_PIN
applymovement 2, Route50_Encuentro_Dunsparce_Move_2
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 8
setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
setflag FLAG_HIDE_BATTLE_FRONTIER_SUDOWOODO
fadescreen 1
delay 20
removeobject 2
fadescreen 0
release
end

Route50_Encuentro_Dunsparce_Move_10:
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Move_9:
walk_in_place_up
step_end

Route50_Encuentro_Dunsparce_Move_8:
face_left
step_end

Route50_Encuentro_Dunsparce_Move_7:
walk_slow_down
walk_slow_down
walk_slow_down
walk_slow_down
step_end

Route50_Encuentro_Dunsparce_Move_6:
emote_exclamation_mark
delay_8
walk_slow_up
step_end

Route50_Encuentro_Dunsparce_Move_5:
face_up
delay_8
walk_left
face_up
step_end

Route50_Encuentro_Dunsparce_Move_4:
face_up
step_end

Route50_Encuentro_Dunsparce_Move_3:
face_right
step_end

Route50_Encuentro_Dunsparce_Move_2:
face_right
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Move_1:
emote_exclamation_mark
face_down
delay_8
walk_in_place_down
step_end

Route50_Encuentro_Dunsparce_Texto_1:
.string "ANDRA: ¡¿Dónde te habías metido,\n"
	.string "{PLAYER}?!$"

Route50_Encuentro_Dunsparce_Texto_2:
.string "¡No vas a creer lo que acaba de ocurr...!$"

Route50_Encuentro_Dunsparce_Texto_3:
.string "¡¡¡GROAAAAAAAAR!!!$"

Route50_Encuentro_Dunsparce_Texto_4:
.string "Groarr…$"

Route50_Encuentro_Dunsparce_Texto_5:
.string "ANDRA: ¡Eso es! ¡Has repetido mi\n"
	.string "combate, ha sido exactamente igual al\l"
	.string "mío! ¿Pero cómo…?$"

Route50_Encuentro_Dunsparce_Texto_6:
.string "¿La pagoda que hay al suroeste? ¡Vamos,\n"
	.string "{PLAYER}! ¡Ahí nos vemos!$"

Route50_Encuentro_Dunsparce_Texto_7:
.string "ANDRA: Nos... nos está observando\n"
	.string "detenidamente...$"

Route50_Encuentro_Dunsparce_Texto_8:
	.string "¡¡{PLAYER} obtuvo un PIEDRA DORADA!!$"


Route50_Dragonite::
lock
playmoncry SPECIES_DRAGONITE, CRY_MODE_ENCOUNTER
waitmoncry
msgbox Route50_Dragonite_Texto_1 MSGBOX_DEFAULT
release
end

Route50_Dragonite_Texto_1:
.string "Es un DRAGONITE, está bloqueando el\n"
	.string "paso a una zona aún más al norte.$"

