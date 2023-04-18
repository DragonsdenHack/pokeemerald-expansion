RuinsOfAlph_MapScripts::
	.byte 0

RuinsOfAlph1::
lock     
faceplayer     
msgbox RuinsOfAlph_Text_1, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_Text_1:
.string "¡Chst!\n"
.string "¿Sabías que si sintonizas la radio\l"
.string "a una frecuencia determinada\l"
.string "dentro de las ruinas se\l"
.string "escucharán sonidos extrañísimos?\l"
.string "¡Lo sabía!\l"
.string "¡Es todo una conspiración entre\l"
.string "los UNOWN y la TORRE RADIO!\l"
.string "…\l"
.string "…\l"
.string "¿Cómo?\l"
.string "¿Eso no tiene ningún sentido?$"



RuinsOfAlph2::
lock     
faceplayer     
msgbox RuinsOfAlph_Text_2, MSGBOX_DEFAULT
release     
end

RuinsOfAlph_Text_2:
.string "-Nosotros, humanos, debemos caminar\n"
.string "junto a ellos. Por ello, nosotros\l"
.string "partimos.-\l"
.string "La frase está grabada en\l"
.string "una de las cámaras.\l"
.string "¿Qué querrá decir?$"



RuinsOfAlph3::
end

RuinsOfAlph_Terremoto::
lock
playse SE_PIN
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_Terremoto_Move_1
waitmovement 0x0
applymovement OBJ_EVENT_ID_PLAYER, RuinsOfAlph_Terremoto_Move_2
waitmovement 0x0
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
msgbox RuinsOfAlph_Terremoto_Texto_1 MSGBOX_AUTOCLOSE
setvar VAR_UNUSED_0x40F7, 175
release
end

RuinsOfAlph_Terremoto_Texto_1:
.string "(Algo que llevaba mucho\n"
	.string "tiempo cerrado se ha abierto al\l"
	.string "sur de RUINAS ALFA)$"

RuinsOfAlph_Terremoto_Move_1:
emote_exclamation_mark
step_end

RuinsOfAlph_Terremoto_Move_2:
walk_in_place_down
step_end
