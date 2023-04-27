Route50_MapScripts::
	.byte 0



Route50_EventScript_Montanero::
	trainerbattle_single TRAINER_THALIA_4, Route50_Text_MontaneroIntro, Route50_Text_MontaneroDefeated
	msgbox Route50_Text_MontaneroPostBattle, MSGBOX_AUTOCLOSE
	end

Route50_Encuentro_Dunsparce::
lock
faceplayer
msgbox Route50_Encuentro_Dunsparce_Texto_1 MSGBOX_AUTOCLOSE
playse SE_PIN
applymovement 12, Route50_Encuentro_Dunsparce_Move_1
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_2 MSGBOX_AUTOCLOSE
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_3 MSGBOX_DEFAULT
waitmoncry
delay 20
playse SE_PIN
applymovement 12, Route50_Encuentro_Dunsparce_Move_2
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_2
waitmovement 0x0
delay 20
trainerbattle_no_intro TRAINER_TRAINER_137, Route50_Encuentro_Dunsparce_Texto_4
playmoncry SPECIES_DUNSPARCE, CRY_MODE_ENCOUNTER
msgbox Route50_Encuentro_Dunsparce_Texto_4 MSGBOX_DEFAULT
waitmoncry
playse SE_FAINT
delay 20
applymovement 12, Route50_Encuentro_Dunsparce_Move_3
applymovement OBJ_EVENT_ID_PLAYER, Route50_Encuentro_Dunsparce_Move_4
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_5 MSGBOX_AUTOCLOSE
delay 20
playse SE_PIN
applymovement 12, Route50_Encuentro_Dunsparce_Move_1
waitmovement 0x0
msgbox Route50_Encuentro_Dunsparce_Texto_6 MSGBOX_AUTOCLOSE
setvar VAR_VERDANTURF_TOWN_STATE, 8
setflag FLAG_HIDE_VERDANTURF_TOWN_SCOTT
clearflag FLAG_HIDE_ROUTE_111_GABBY_AND_TY_3
fadescreen 1
delay 20
removeobject 12
fadescreen 0
release
end

Route50_Encuentro_Dunsparce_Move_4:
face_up
step_end

Route50_Encuentro_Dunsparce_Move_3:
face_down
step_end

Route50_Encuentro_Dunsparce_Move_2:
face_right
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Move_1:
emote_exclamation_mark
step_end

Route50_Encuentro_Dunsparce_Texto_1:
.string "ANDRA: ¡¿Dónde te habías metido,\n"
	.string "{PLAYER}?!$"

Route50_Encuentro_Dunsparce_Texto_2:
.string "¿Un objeto dorado? ¡De eso te iba a\n"
	.string "hablar! ¡No vas a creer lo que acaba de\l"
	.string "ocurr…!$"

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

